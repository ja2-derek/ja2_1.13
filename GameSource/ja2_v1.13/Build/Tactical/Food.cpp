#ifdef PRECOMPILEDHEADERS
	#include "Tactical All.h"
#else
	#include <math.h>
	#include "sgp.h"
	#include "soldier profile.h"
	#include "Food.h"
	#include "items.h"
	#include "morale.h"
	#include "points.h"
	#include "message.h"
	#include "GameSettings.h" // SANDRO - had to add this, dammit!
	#include "Random.h"
	#include "Text.h"
	#include "Interface.h"
	#include "Dialogue Control.h"
	#include "Sound Control.h"
	#include "Assignments.h"
	#include "Overhead.h"
	#include "worldman.h"
	#include "Isometric Utils.h"
	#include "Campaign Types.h"
	#include "Drugs And Alcohol.h"
	#include "environment.h"
	//#include "Game Clock.h"
	#include "WorldDat.h"
	#include "Facilities.h"
#endif

//forward declarations of common classes to eliminate includes
class OBJECTTYPE;
class SOLDIERTYPE;

extern MoraleEvent gbMoraleEvent[NUM_MORALE_EVENTS];

UINT8	gSectorWaterType[256][4];

//extern BOOLEAN HandleSoldierDeath( SOLDIERTYPE *pSoldier , BOOLEAN *pfMadeCorpse );
//extern BOOLEAN TacticalRemoveSoldier( UINT16 usSoldierIndex );
extern BOOLEAN GetSectorFlagStatus( INT16 sMapX, INT16 sMapY, UINT8 bMapZ, UINT32 uiFlagToSet );
extern void BuildStashForSelectedSectorAndDecayFood( INT16 sMapX, INT16 sMapY, INT16 sMapZ );

FoodMoraleMod FoodMoraleMods[NUM_FOOD_MORALE_TYPES] =
{
	{ 100000,	-10,	-3,	-	-75,	-75,	2},		//	FOOD_STUFFED
	{ 5000,		-5,		-2,		-5,		-5,		0},		//	FOOD_EXTREMELY_FULL
	{ 2500,		2,		-1,		-1,		0,		0},		//	FOOD_FULL
	{ 1000,		5,		0,		0,		0,		0},		//	FOOD_SLIGHTLY_FULL

	{ 0,		0,		0,		0,		0,		0},		//	FOOD_NORMAL

	{ -1000,	0,		0,		0,		0,		0},		//	FOOD_LOW
	{ -2500,	-2,		0,		0,		0,		0},		//	FOOD_EVEN_LOWER
	{ -5000,	-10,	-1,		-10,	-10,	5},		//	FOOD_VERY_LOW
	{ -7500,	-20,	-2,		-25,	-25,	25},	//	FOOD_DANGER
	{ -8750,	-30,	-2,		-50,	-50,	75},	//	FOOD_DESPERATE
	{ -10000,	-50,	-3,		-80,	-75,	100},	//	FOOD_STARVING
};


BOOLEAN ApplyFood( SOLDIERTYPE *pSoldier, OBJECTTYPE *pObject )
{
	// how did this even happen?
	if ( !pSoldier || !pObject || !(pObject->exists() ) || (*pObject)[0]->data.objectStatus < 1 )
		return( FALSE);

	UINT32 foodtype = Item[pObject->usItem].foodtype;

	// if not a food item, nothing to see here
	if ( foodtype == 0 || foodtype > FOOD_TYPE_MAX )
		return( FALSE);
		
	// workaround: canteens with 1% status are treated as 'empty'. They cannot be consumed, but refilled
	if ( Item[pObject->usItem].canteen == TRUE && (*pObject)[0]->data.objectStatus == 1 )
		return( FALSE);

	// do we eat or drink this stuff?
	UINT8 type = AP_EAT;
	if ( Food[foodtype].bDrinkPoints > Food[foodtype].bFoodPoints )
		type = AP_DRINK;

	// return if we don't have enough APs
	if (!EnoughPoints( pSoldier, APBPConstants[type], 0, TRUE ) )
	{
		return( FALSE );
	}
	 
	// check if we are willing to eat this: if we're filled, the merc refuses
	if ( ( ( Food[foodtype].bFoodPoints > 0 && pSoldier->bFoodLevel > FoodMoraleMods[FOOD_EXTREMELY_FULL].bThreshold ) || Food[foodtype].bFoodPoints <= 0 ) && ( ( Food[foodtype].bDrinkPoints > 0 && pSoldier->bDrinkLevel > FoodMoraleMods[FOOD_EXTREMELY_FULL].bThreshold ) || Food[foodtype].bDrinkPoints <= 0 ) )
	{
		// Say quote!
		TacticalCharacterDialogue( pSoldier, 61 );

		return( FALSE);
	}

	// we have to determine wether the food is rotten, that might influence its condition and poison us
	FLOAT foodcondition = (*pObject)[0]->data.bTemperature / OVERHEATING_MAX_TEMPERATURE;
	FLOAT conditionmodifier = 0.5f * (1.0f + sqrt(foodcondition));

	FLOAT percentualsize = min(Food[foodtype].ubPortionSize, (*pObject)[0]->data.objectStatus) / 100.0f;

	INT32 foodpts  = (INT32) (Food[foodtype].bFoodPoints  * percentualsize * conditionmodifier );
	INT32 drinkpts = (INT32) (Food[foodtype].bDrinkPoints * percentualsize * conditionmodifier );

	// food in bad condition is harmful!
	if ( foodcondition < FOOD_BAD_THRESHOLD )
	{
		// determine the max nutritional value
		INT32 maxpts = max(Food[foodtype].bFoodPoints, Food[foodtype].bDrinkPoints);

		// divide by 100 (poison sum is in [0, 99]
		// multiply with FOOD_BAD_THRESHOLD for more reasonable values
		INT8 poisonadd = (INT8)(0.01 * maxpts * (1.0 - foodcondition) * FOOD_BAD_THRESHOLD );

		pSoldier->AddPoison(poisonadd);
	}

	// eat it!
	pSoldier->bFoodLevel = min(pSoldier->bFoodLevel + foodpts, FOOD_MAX);
	pSoldier->bFoodLevel = max(pSoldier->bFoodLevel, FOOD_MIN);

	pSoldier->bDrinkLevel = min(pSoldier->bDrinkLevel + drinkpts, DRINK_MAX);
	pSoldier->bDrinkLevel = max(pSoldier->bDrinkLevel, DRINK_MIN);

	/////////////////// MORALE //////////////////////
	INT8 moralemod = Food[foodtype].bMoraleMod;
	
	if ( moralemod > 0 )
		// morale is lower if food is rotten, can even become negative
		moralemod = (INT8) ( moralemod * (FOOD_BAD_THRESHOLD_INVERSE*foodcondition - 1.0f) );
	else
		// if we hate the food anyway, give even lower morale if its rotten
		moralemod = (INT8) ( moralemod * (2.0f - foodcondition) );

	if ( moralemod > 0 )
	{
		while ( moralemod > 0 && moralemod >= gbMoraleEvent[MORALE_GOOD_FOOD].bChange )
		{
			HandleMoraleEvent( pSoldier, MORALE_GOOD_FOOD, pSoldier->sSectorX, pSoldier->sSectorY, pSoldier->bSectorZ );
			moralemod -= gbMoraleEvent[MORALE_GOOD_FOOD].bChange;
		}

		while ( moralemod > 0 && moralemod >= gbMoraleEvent[MORALE_FOOD].bChange )
		{
			HandleMoraleEvent( pSoldier, MORALE_FOOD, pSoldier->sSectorX, pSoldier->sSectorY, pSoldier->bSectorZ );
			moralemod -= gbMoraleEvent[MORALE_FOOD].bChange;
		}
	}
	else if ( moralemod < 0 )
	{
		while ( moralemod < 0 && moralemod <= gbMoraleEvent[MORALE_LOATHSOME_FOOD].bChange )
		{
			HandleMoraleEvent( pSoldier, MORALE_LOATHSOME_FOOD, pSoldier->sSectorX, pSoldier->sSectorY, pSoldier->bSectorZ );
			moralemod -= gbMoraleEvent[MORALE_LOATHSOME_FOOD].bChange;
		}

		while ( moralemod < 0 && moralemod <= gbMoraleEvent[MORALE_BAD_FOOD].bChange )
		{
			HandleMoraleEvent( pSoldier, MORALE_BAD_FOOD, pSoldier->sSectorX, pSoldier->sSectorY, pSoldier->bSectorZ );
			moralemod -= gbMoraleEvent[MORALE_BAD_FOOD].bChange;
		}
	}
	/////////////////// MORALE //////////////////////

	// notification
	if ( type == AP_EAT )
		ScreenMsg( FONT_MCOLOR_LTYELLOW, MSG_INTERFACE, L"%s ate %s", pSoldier->name, Item[pObject->usItem].szItemName );
	else
		ScreenMsg( FONT_MCOLOR_LTYELLOW, MSG_INTERFACE, L"%s drank %s", pSoldier->name, Item[pObject->usItem].szItemName );
			
	// now remove a portion of the food item (or the whole item altogether)
	UINT16 ptsconsumed = UseKitPoints( pObject, Food[foodtype].ubPortionSize, pSoldier );

	INT32 sBPAdjustment = 0;
	// if the food is more of a drink, we also restore breath points
	if ( Food[foodtype].bDrinkPoints > Food[foodtype].bFoodPoints )
	{
		//UINT16 ptsconsumed = Food[foodtype].ubPortionSize - ptsleft;

		INT16 usTotalKitPoints = TotalPoints( pObject );

		INT16 sPointsToUse = __min( ptsconsumed, usTotalKitPoints );

		sBPAdjustment = 2 * sPointsToUse * -(100 - pSoldier->bBreath);
	}

	DeductPoints( pSoldier, APBPConstants[type], sBPAdjustment );

	// let it be known that we are eating
	if ( pSoldier->bTeam == gbPlayerNum )
	{
		if ( type == AP_EAT )
		{
			// Play sound
			PlayJA2SampleFromFile( "Sounds\\eat1.wav", RATE_11025, HIGHVOLUME, 1, MIDDLEPAN );
		}
		else
		{
			if ( gMercProfiles[ pSoldier->ubProfile ].bSex == MALE )
			{
				  PlayJA2Sample( DRINK_CANTEEN_MALE, RATE_11025, MIDVOLUME, 1, MIDDLEPAN );
			}
			else
			{
				  PlayJA2Sample( DRINK_CANTEEN_FEMALE, RATE_11025, MIDVOLUME, 1, MIDDLEPAN );
			}
		}
	}

	return( TRUE );
}

UINT8 GetFoodSituation( SOLDIERTYPE *pSoldier )
{
	UINT8 foodsituation = FOOD_NORMAL;

	if ( !pSoldier )
		return( foodsituation );

	// The lowest value determines how bad we feel
	INT32 missamount = min( pSoldier->bFoodLevel, pSoldier->bDrinkLevel);

	// old code
	/*INT32 missamount = 0;
	if ( pSoldier->bFoodLevel < 0 )
		missamount += pSoldier->bFoodLevel;

	if ( pSoldier->bDrinkLevel < 0 )
		missamount += (INT32)(FOOD_MORALE_DRINK_TO_FOOD_RATIO * pSoldier->bDrinkLevel);*/

	for ( UINT8 i = FOOD_STUFFED; i < NUM_FOOD_MORALE_TYPES; ++i )
	{
		if ( missamount < FoodMoraleMods[i].bThreshold )
			foodsituation = i;
		else
			break;
	}

	return( foodsituation );
}

void FoodMaxMoraleModifiy( SOLDIERTYPE *pSoldier, UINT8* pubMaxMorale )
{
	if ( !pSoldier )
		return;

	UINT8 foodsituation = GetFoodSituation( pSoldier );

	INT8 mod = FoodMoraleMods[foodsituation].bMoraleModifier;

	if ( (*pubMaxMorale) + mod > 0 )
		(*pubMaxMorale) += mod;
	else
		(*pubMaxMorale) = 0;
}

void FoodNeedForSleepModifiy( SOLDIERTYPE *pSoldier, UINT8* pubNeedForSleep )
{
	if ( !pSoldier )
		return;

	UINT8 foodsituation = GetFoodSituation( pSoldier );
	
	(*pubNeedForSleep) += max(1, (INT16)((*pubNeedForSleep) - FoodMoraleMods[foodsituation].bSleepModifier));
}

void ReducePointsForHunger( SOLDIERTYPE *pSoldier, UINT32 *pusPoints )
{
	UINT8 foodsituation = GetFoodSituation( pSoldier );

	INT8 mod = FoodMoraleMods[foodsituation].bAssignmentEfficiencyModifier;

	*pusPoints = (UINT32)((*pusPoints) * (100 - mod)/100);
}

void ReduceBPRegenForHunger( SOLDIERTYPE *pSoldier, INT32 *psPoints )
{
	UINT8 foodsituation = GetFoodSituation( pSoldier );

	INT8 mod = FoodMoraleMods[foodsituation].bBreathRegenModifier;

	*psPoints = (INT32)((*psPoints) * (100 - mod)/100);
}

void HourlyFoodSituationUpdate( SOLDIERTYPE *pSoldier )
{
	if ( !pSoldier )
		return;

	// determine our current activity level
	FLOAT activitymodifier = gGameExternalOptions.sFoodDigestionOnDuty;
	if ( pSoldier->flags.fMercAsleep == TRUE )
		activitymodifier = gGameExternalOptions.sFoodDigestionSleep;
	else if ( !pSoldier->bInSector )
	{
		if( pSoldier->bAssignment == VEHICLE )
			activitymodifier = gGameExternalOptions.sFoodDigestionTravelVehicle;
		else
			activitymodifier = gGameExternalOptions.sFoodDigestionTravel;
	}
	else if ( pSoldier->bAssignment > DOCTOR )
		activitymodifier = gGameExternalOptions.sFoodDigestionAssignment;
	else if ( (gTacticalStatus.uiFlags & INCOMBAT) )
		activitymodifier = gGameExternalOptions.sFoodDigestionCombat;
		
	// for some odd reason, the time isn't even needed here, so we just use 0 :-)
	INT8 sectortemperaturemod = SectorTemperature( 0, pSoldier->sSectorX, pSoldier->sSectorY, pSoldier->bSectorZ );

	// if we are heat intolerant, increase modifier
	if ( sectortemperaturemod > 0 && (gMercProfiles[ pSoldier->ubProfile ].bDisability == HEAT_INTOLERANT || MercUnderTheInfluence(pSoldier, DRUG_TYPE_HEATINTOLERANT) ) )
		++sectortemperaturemod;

	FLOAT  temperaturemodifier  = (FLOAT)(3 + sectortemperaturemod)/3;

	// due to digestion, reduce our food and drink levels
	pSoldier->bFoodLevel  = max(pSoldier->bFoodLevel  - (INT32) (activitymodifier * gGameExternalOptions.usFoodDigestionHourlyBaseFood), FOOD_MIN);
	pSoldier->bDrinkLevel = max(pSoldier->bDrinkLevel - (INT32) (activitymodifier * temperaturemodifier * gGameExternalOptions.usFoodDigestionHourlyBaseDrink), DRINK_MIN);

	// there is a chance that we take damage to our health and strength stats if we are starving (or insanely obese :-) )
	UINT8 foodsituation = GetFoodSituation( pSoldier );

	UINT8 statdamagechance = FoodMoraleMods[foodsituation].ubStatDamageChance;
	
	if ( statdamagechance > 0 )
	{
		// these reductions can be healed, but only if we are in a sufficient food situation again
		// damage strength
		if ( Random(100) < statdamagechance )
		{
			UINT8 numberofreduces = 1;
			// if starving, we lose stats a LOT faster
			if ( foodsituation == FOOD_STARVING )
				numberofreduces += Random(2);
						
			INT8 oldval = pSoldier->stats.bStrength;
			pSoldier->stats.bStrength = max(1, pSoldier->stats.bStrength - numberofreduces);
			pSoldier->usStarveDamageStrength += oldval - pSoldier->stats.bStrength;

			// Update Profile
			gMercProfiles[ pSoldier->ubProfile ].bStrength	= pSoldier->stats.bStrength;
			gMercProfiles[ pSoldier->ubProfile ].records.usTimesStatDamaged++;

			// make stat RED for a while...
			pSoldier->timeChanges.uiChangeStrengthTime = GetJA2Clock();
			pSoldier->usValueGoneUp &= ~( STRENGTH_INCREASE );

			ScreenMsg( FONT_MCOLOR_LTYELLOW, MSG_INTERFACE, L"%s's strength was damaged due to lack of nutrition!", pSoldier->name );
		}

		// damage health
		if ( Random(100) < statdamagechance )
		{
			UINT8 numberofreduces = 1;
			// if starving, we lose stats a LOT faster
			if ( foodsituation == FOOD_STARVING )
				numberofreduces += 1 + 2 * Random(4);

			INT8 oldlife = pSoldier->stats.bLife;

			pSoldier->stats.bLifeMax = max(2, pSoldier->stats.bLifeMax - numberofreduces);
			pSoldier->stats.bLife = min(pSoldier->stats.bLife, pSoldier->stats.bLifeMax);
			pSoldier->bBleeding = min(pSoldier->bBleeding, pSoldier->stats.bLifeMax);

			// adjust poison values
			pSoldier->bPoisonSum = min(pSoldier->bPoisonSum, pSoldier->stats.bLifeMax);
			pSoldier->bPoisonLife = min(pSoldier->bPoisonLife, pSoldier->bPoisonSum);
			pSoldier->bPoisonBleeding = min(pSoldier->bPoisonBleeding, pSoldier->bBleeding);

			pSoldier->usStarveDamageHealth += oldlife - pSoldier->stats.bLifeMax;

			// Update Profile
			gMercProfiles[ pSoldier->ubProfile ].bLifeMax	= pSoldier->stats.bLifeMax;
			gMercProfiles[ pSoldier->ubProfile ].records.usTimesStatDamaged++;
			
			ScreenMsg( FONT_MCOLOR_LTYELLOW, MSG_INTERFACE, L"%s's health was damaged due to lack of nutrition!", pSoldier->name );

			// if we fall below OKLIFE, we start bleeding...
			// Reason for this is that 
			if ( pSoldier->stats.bLife < OKLIFE )
			{
				// handling a soldiers death doesn't work somehow - let them bleed to death instead
				/*BOOLEAN fMadeCorpse;
				HandleSoldierDeath( pSoldier, &fMadeCorpse );

				//remove the merc from the tactical
				TacticalRemoveSoldier( pSoldier->ubID );*/

				pSoldier->bBleeding = max(1, pSoldier->stats.bLife - 1);
				pSoldier->stats.bLife = 1;

				// Update Profile
				gMercProfiles[ pSoldier->ubProfile ].bLifeMax	= pSoldier->stats.bLifeMax;
				pSoldier->usStarveDamageHealth += oldlife - pSoldier->stats.bLifeMax;

				return;
			}

			// make stat RED for a while...
			pSoldier->timeChanges.uiChangeStrengthTime = GetJA2Clock();
			pSoldier->usValueGoneUp &= ~( HEALTH_INCREASE );						
		}
	}
}


void HourlyFoodAutoDigestion( SOLDIERTYPE *pSoldier )
{
	if ( !pSoldier )
		return;

	// don't eat if not necessary ( note that if the play decides to eat manually, he can achieve better results. This is intended to award micro-management)
	if ( pSoldier->bFoodLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && pSoldier->bDrinkLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold )
		return;

	// if were a prisoner, we can't feed ourself, and the player can't do that either. Instead the army provides food (not much and of bad quality)
	if (pSoldier->bAssignment == ASSIGNMENT_POW)
	{
		INT16 powwater   = gGameExternalOptions.usFoodDigestionHourlyBaseDrink * FOOD_POW_MULTIPLICATOR;
		INT16 powfoodadd = powwater * gGameExternalOptions.usFoodDigestionHourlyBaseFood / gGameExternalOptions.usFoodDigestionHourlyBaseDrink;

		// if we're thirsty or hungry, and this is nutritious, consume it
		if ( pSoldier->bDrinkLevel < FoodMoraleMods[FOOD_VERY_LOW].bThreshold  )
		{				
			pSoldier->bDrinkLevel = min(pSoldier->bDrinkLevel + powwater, DRINK_MAX);
			pSoldier->bDrinkLevel = max(pSoldier->bDrinkLevel, DRINK_MIN);
		}

		if ( pSoldier->bFoodLevel < FoodMoraleMods[FOOD_VERY_LOW].bThreshold )
		{
			pSoldier->bFoodLevel = min(pSoldier->bFoodLevel + powfoodadd, FOOD_MAX);
			pSoldier->bFoodLevel = max(pSoldier->bFoodLevel, FOOD_MIN);
		}
	}
	else
	{
		// no eating if not able to!
		if ( pSoldier->flags.fMercAsleep == TRUE || pSoldier->stats.bLife < OKLIFE )
			return;

		// In certain facilities, we can also eat
		for (UINT16 cnt = 0; cnt < NUM_FACILITY_TYPES; ++cnt)
		{
			// Is this facility here?
			if (gFacilityLocations[SECTOR(pSoldier->sSectorX, pSoldier->sSectorY)][cnt].fFacilityHere)
			{
				// Does it allow training militia?
				if (gFacilityTypes[cnt].AssignmentData[FAC_FOOD].sCantinaFoodModifier > 0)
				{
					if (cnt == (UINT16)pSoldier->sFacilityTypeOperated && // Soldier is operating this facility
						GetSoldierFacilityAssignmentIndex( pSoldier ) != -1) 
					{
						INT16 cantinafoodadd = gFacilityTypes[cnt].AssignmentData[FAC_FOOD].sCantinaFoodModifier;
						INT16 cantinawater   = cantinafoodadd * FOOD_FACILITY_WATER_FACTOR;

						// if we're thirsty or hungry, and this is nutritious, consume it. When in a cantina, we are willing to eat a bit more
						if ( pSoldier->bDrinkLevel < FoodMoraleMods[FOOD_MERC_STOP_FACILITY].bThreshold  )
						{				
							pSoldier->bDrinkLevel = min(pSoldier->bDrinkLevel + cantinawater, DRINK_MAX);
							pSoldier->bDrinkLevel = max(pSoldier->bDrinkLevel, DRINK_MIN);
						}

						if ( pSoldier->bFoodLevel < FoodMoraleMods[FOOD_MERC_STOP_FACILITY].bThreshold )
						{
							pSoldier->bFoodLevel = min(pSoldier->bFoodLevel + cantinafoodadd, FOOD_MAX);
							pSoldier->bFoodLevel = max(pSoldier->bFoodLevel, FOOD_MIN);
						}
					}
				}
			}
		}

		// search for food in our inventory
		INT8 invsize = (INT8)pSoldier->inv.size();									// remember inventorysize, so we don't call size() repeatedly

		// on the first loop, we omit food in bad condition, and refillable canteens and canned food
		for ( INT8 bLoop = 0; bLoop < invsize; ++bLoop)							// ... for all items in our inventory ...
		{
			// ... if Item exists and is food ...
			if (pSoldier->inv[bLoop].exists() == true && Item[pSoldier->inv[bLoop].usItem].foodtype > 0 )
			{
				OBJECTTYPE * pObj = &(pSoldier->inv[bLoop]);						// ... get pointer for this item ...

				if ( pObj != NULL )													// ... if pointer is not obviously useless ...
				{
					UINT32 foodtype = Item[pObj->usItem].foodtype;

					// omit non-degrading food (save it for later!)
					if ( Food[foodtype].usDecayRate <= 0.0f )
						continue;

					// omit bad food (we don't like that and will eat it only if we have to)
					FLOAT foodcondition = (*pObj)[0]->data.bTemperature / OVERHEATING_MAX_TEMPERATURE;
					if ( foodcondition < FOOD_BAD_THRESHOLD )
						continue;

					if ( Item[pObj->usItem].canteen == TRUE )
						continue;

					// if we're thirsty or hungry, and this is nutritious, consume it
					if ( ( pSoldier->bDrinkLevel < FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && Food[foodtype].bDrinkPoints > 0 ) || ( pSoldier->bFoodLevel < FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && Food[foodtype].bFoodPoints > 0 ) )
					{
						while ( (*pObj)[0]->data.objectStatus > 1 )
						{
							// if food is also a drug, ApplyDrugs will also call ApplyFood
							if ( Item[pObj->usItem].drugtype > 0 )
								ApplyDrugs( pSoldier, pObj );
							else
								ApplyFood( pSoldier, pObj );

							// if we're full, finish
							if ( pSoldier->bFoodLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && pSoldier->bDrinkLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold )
								return;
						}
					}					
				}
			}
		}

		// second loop: consume anything to feed
		for ( INT8 bLoop = 0; bLoop < invsize; ++bLoop)							// ... for all items in our inventory ...
		{
			// ... if Item exists and is food ...
			if (pSoldier->inv[bLoop].exists() == true && Item[pSoldier->inv[bLoop].usItem].foodtype > 0 )
			{
				OBJECTTYPE * pObj = &(pSoldier->inv[bLoop]);						// ... get pointer for this item ...

				if ( pObj != NULL )													// ... if pointer is not obviously useless ...
				{
					UINT32 foodtype = Item[pObj->usItem].foodtype;

					// if we're thirsty or hungry, and this is nutritious, consume it
					if ( ( pSoldier->bDrinkLevel < FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && Food[foodtype].bDrinkPoints > 0 ) || ( pSoldier->bFoodLevel < FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && Food[foodtype].bFoodPoints > 0 ) )
					{
						while ( (*pObj)[0]->data.objectStatus > 1 )
						{
							// if food is also a drug, ApplyDrugs will also call ApplyFood
							if ( Item[pObj->usItem].drugtype > 0 )
								ApplyDrugs( pSoldier, pObj );
							else
								ApplyFood( pSoldier, pObj );

							// if we're full, finish
							if ( pSoldier->bFoodLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold && pSoldier->bDrinkLevel > FoodMoraleMods[FOOD_MERC_START_CONSUME].bThreshold )
								return;
						}
					}
				}
			}
		}
	}	
}

void HourlyFoodUpdate( void )
{
	INT8									bMercID, bLastTeamID;
	SOLDIERTYPE *							pSoldier = NULL;

	bMercID = gTacticalStatus.Team[ gbPlayerNum ].bFirstID;
	bLastTeamID = gTacticalStatus.Team[ gbPlayerNum ].bLastID;

	// loop through all mercs to calculate their morale
	for ( pSoldier = MercPtrs[ bMercID ]; bMercID <= bLastTeamID; ++bMercID, ++pSoldier)
	{
		//if the merc is active, and in Arulco
		if ( pSoldier && pSoldier->bActive && pSoldier->ubProfile != NO_PROFILE && !(pSoldier->bAssignment == IN_TRANSIT || pSoldier->bAssignment == ASSIGNMENT_DEAD ) )
		{			
			// digestion
			HourlyFoodSituationUpdate( pSoldier );

			// if hungry, eat something automatically from the inventory
			HourlyFoodAutoDigestion( pSoldier );
		}
	}

	// decay food everywhere
	HourlyFoodDecay();
}

UINT8	GetWaterQuality(INT16 asMapX, INT16 asMapY, INT8 asMapZ)
{
	UINT8 waterquality = WATER_NONE;

	// for now, we assume that only sectors on the surface have access to water
	UINT8 ubSectorId = SECTOR(asMapX, asMapY);
	if (asMapZ == 0 && ubSectorId >= 0 && ubSectorId < 256  )
	{
		waterquality = gSectorWaterType[ubSectorId][asMapZ];
	}

	return waterquality;
}


// a function that tries to fill up all canteens in this sector
void SectorFillCanteens( void )
{
	// no functionality if not in tactical or in combat, or nobody is here
	if ( guiCurrentScreen != GAME_SCREEN || (gTacticalStatus.uiFlags & INCOMBAT) || gusSelectedSoldier == NOBODY )
		return;

	// determine if there are any patches of water in this sector.
	// If so, fill up all refillable water containers (= canteens) (there is no way to check if this is actually fresh water, we just assume it is)
	// If not, see if there is a water drum, and fill up the canteens from that one
	UINT8 waterquality = GetWaterQuality(gWorldSectorX, gWorldSectorY, gbWorldSectorZ);

	if ( waterquality == WATER_DRINKABLE || waterquality == WATER_POISONOUS )
	{
		// the temperature of the water in this sector (temperature reflects the quality)
		FLOAT addtemperature = OVERHEATING_MAX_TEMPERATURE;

		// if the water in this sector is poisoned, we add a different temperature - resulting in worsening of the item's decay status
		if ( waterquality == WATER_POISONOUS )
			addtemperature = 0.0f;

		// first step: fill all canteens in inventories
		INT8									bMercID, bLastTeamID;
		SOLDIERTYPE *							pSoldier = NULL;

		bMercID = gTacticalStatus.Team[ gbPlayerNum ].bFirstID;
		bLastTeamID = gTacticalStatus.Team[ gbPlayerNum ].bLastID;

		// loop through all mercs
		for ( pSoldier = MercPtrs[ bMercID ]; bMercID <= bLastTeamID; bMercID++, pSoldier++)
		{
			//if the merc is in this sector
			if ( pSoldier->bActive && pSoldier->ubProfile != NO_PROFILE && pSoldier->bInSector && ( pSoldier->sSectorX == gWorldSectorX ) && ( pSoldier->sSectorY == gWorldSectorY ) && ( pSoldier->bSectorZ == gbWorldSectorZ) )
			{
				INT8 invsize = (INT8)pSoldier->inv.size();									// remember inventorysize, so we don't call size() repeatedly

				for ( INT8 bLoop = 0; bLoop < invsize; ++bLoop)								// ... for all items in our inventory ...
				{
					// ... if Item exists and is canteen (that can have drink points) ...
					if (pSoldier->inv[bLoop].exists() == true && Item[pSoldier->inv[bLoop].usItem].canteen && Food[Item[pSoldier->inv[bLoop].usItem].foodtype].bDrinkPoints > 0)
					{
						OBJECTTYPE* pObj = &(pSoldier->inv[bLoop]);							// ... get pointer for this item ...

						if ( pObj != NULL )													// ... if pointer is not obviously useless ...
						{
							for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)				// ... there might be multiple items here (item stack), so for each one ...
							{
								UINT16 status = (*pObj)[i]->data.objectStatus;
								UINT16 statusmmissing = max(0, 100 - status);
								FLOAT temperature = (*pObj)[i]->data.bTemperature;
																
								(*pObj)[i]->data.objectStatus = 100;						// refill canteen
								(*pObj)[i]->data.bTemperature = (status * temperature + statusmmissing * addtemperature)/100;
							}
						}
					}
				}
			}
		}

		// second step: fill canteens in sector
		for( UINT32 uiCount = 0; uiCount < guiNumWorldItems; ++uiCount )				// ... for all items in the world ...
		{
			if( gWorldItems[ uiCount ].fExists )										// ... if item exists ...
			{
				// ... if Item exists and is a canteen (only those are refillable) ...
				if ( Item[gWorldItems[ uiCount ].object.usItem].canteen && Food[Item[gWorldItems[ uiCount ].object.usItem].foodtype].bDrinkPoints > 0)
				{
					OBJECTTYPE* pObj = &(gWorldItems[ uiCount ].object);				// ... get pointer for this item ...

					if ( pObj != NULL )													// ... if pointer is not obviously useless ...
					{
						for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)				// ... there might be multiple items here (item stack), so for each one ...
						{
							UINT16 status = (*pObj)[i]->data.objectStatus;
							UINT16 statusmmissing = max(0, 100 - status);
							FLOAT temperature = (*pObj)[i]->data.bTemperature;
																
							(*pObj)[i]->data.objectStatus = 100;						// refill canteen
							(*pObj)[i]->data.bTemperature = (status * temperature + statusmmissing * addtemperature)/100;
						}
					}
				}
			}
		}
	}
	else
	{
		OBJECTTYPE* pWaterDrum = GetUsableWaterDrumInSector();
		if ( !pWaterDrum || !(pWaterDrum->exists()) )
			return;

		INT32 drumsize = Food[Item[pWaterDrum->usItem].foodtype].bDrinkPoints;

		// first step: fill all canteens in inventories
		INT8									bMercID, bLastTeamID;
		SOLDIERTYPE *							pSoldier = NULL;

		bMercID = gTacticalStatus.Team[ gbPlayerNum ].bFirstID;
		bLastTeamID = gTacticalStatus.Team[ gbPlayerNum ].bLastID;

		// loop through all mercs
		for ( pSoldier = MercPtrs[ bMercID ]; bMercID <= bLastTeamID; bMercID++, pSoldier++)
		{
			//if the merc is in this sector
			if ( pSoldier->bActive && pSoldier->ubProfile != NO_PROFILE && pSoldier->bInSector && ( pSoldier->sSectorX == gWorldSectorX ) && ( pSoldier->sSectorY == gWorldSectorY ) && ( pSoldier->bSectorZ == gbWorldSectorZ) )
			{
				INT8 invsize = (INT8)pSoldier->inv.size();								// remember inventorysize, so we don't call size() repeatedly

				for ( INT8 bLoop = 0; bLoop < invsize; ++bLoop)							// ... for all items in our inventory ...
				{
					// ... if Item exists and is canteen and is NOT a water drum...
					if (pSoldier->inv[bLoop].exists() == true && Item[pSoldier->inv[bLoop].usItem].canteen && (Food[Item[pSoldier->inv[bLoop].usItem].foodtype].bDrinkPoints > 0) && !HasItemFlag(pSoldier->inv[bLoop].usItem, (WATER_DRUM)))
					{
						OBJECTTYPE* pObj = &(pSoldier->inv[bLoop]);							// ... get pointer for this item ...

						if ( pObj != NULL && pObj->exists() )								// ... if pointer is not obviously useless ...
						{
							INT32 canteensize = Food[Item[pObj->usItem].foodtype].bDrinkPoints;

							for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)			// ... there might be multiple items here (item stack), so for each one ...
							{
								if ( (*pObj)[i]->data.objectStatus < 100 )				// ... and status is > 1 (1 means that it is empty, but still usable)
								{
									INT32 ptsneeded		 = (INT32)((100 - (*pObj)[i]->data.objectStatus)		   * canteensize / 100);
									INT32 ptsinwaterdrum = (INT32)(((*pWaterDrum)[i]->data.objectStatus - 1) * drumsize    / 100);	// -1 because 1% is the status of an empty water drum

									if ( ptsneeded < ptsinwaterdrum )
									{
										(*pObj)[i]->data.objectStatus = 100;
										
										(*pWaterDrum)[i]->data.objectStatus = max(1, (INT16)((100 * ( ptsinwaterdrum - ptsneeded )) / drumsize) );
									}
									else
									{
										(*pObj)[i]->data.objectStatus += (INT16)((100 * ptsinwaterdrum) / canteensize);

										(*pWaterDrum)[i]->data.objectStatus = 1;																				
									}

									(*pObj)[i]->data.bTemperature = ((*pObj)[i]->data.bTemperature + (*pWaterDrum)[0]->data.bTemperature) / 2;	// water now has mixed freshness

									if ( (*pWaterDrum)[0]->data.objectStatus == 1 )
									{
										// get a new water drum!
										pWaterDrum = GetUsableWaterDrumInSector();
										if ( !pWaterDrum || !(pWaterDrum->exists()) )
											return;

										drumsize = Food[Item[pWaterDrum->usItem].foodtype].bDrinkPoints;
									}
								}
							}
						}
					}
				}
			}
		}

		// second step: fill canteens in sector
		for( UINT32 uiCount = 0; uiCount < guiNumWorldItems; ++uiCount )				// ... for all items in the world ...
		{
			if( gWorldItems[ uiCount ].fExists )										// ... if item exists ...
			{
				// ... if Item exists and is a canteen (only those are refillable) ...
				if ( Item[gWorldItems[ uiCount ].object.usItem].canteen )
				{
					OBJECTTYPE* pObj = &(gWorldItems[ uiCount ].object);				// ... get pointer for this item ...

					if ( pObj != NULL && pObj->exists() )								// ... if pointer is not obviously useless ...
					{
						if ( (Food[pObj->usItem].bDrinkPoints > 0) && !HasItemFlag(pObj->usItem, (WATER_DRUM)) )					// ... if item is NOT a water drum...
						{
							INT32 canteensize = Food[Item[pObj->usItem].foodtype].bDrinkPoints;

							for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)			// ... there might be multiple items here (item stack), so for each one ...
							{
								if ( (*pObj)[i]->data.objectStatus < 100 )				// ... and status is > 1 (1 means that it is empty, but still usable)
								{
									INT32 ptsneeded		 = (INT32)((100 - (*pObj)[i]->data.objectStatus)		   * canteensize / 100);
									INT32 ptsinwaterdrum = (INT32)(((*pWaterDrum)[i]->data.objectStatus - 1) * drumsize    / 100);	// -1 because 1% is the status of an empty water drum

									if ( ptsneeded < ptsinwaterdrum )
									{
										(*pObj)[i]->data.objectStatus = 100;
										
										(*pWaterDrum)[i]->data.objectStatus = max(1, (INT16)((100 * ( ptsinwaterdrum - ptsneeded )) / drumsize) );
									}
									else
									{
										(*pObj)[i]->data.objectStatus += (INT16)((100 * ptsinwaterdrum) / canteensize);

										(*pWaterDrum)[i]->data.objectStatus = 1;																				
									}

									(*pObj)[0]->data.bTemperature = ((*pObj)[0]->data.bTemperature + (*pWaterDrum)[0]->data.bTemperature) / 2;	// water now has mixed freshness

									if ( (*pWaterDrum)[i]->data.objectStatus == 1 )
									{
										// get a new water drum!
										pWaterDrum = GetUsableWaterDrumInSector();
										if ( !pWaterDrum || !(pWaterDrum->exists()) )
											return;

										drumsize = Food[Item[pWaterDrum->usItem].foodtype].bDrinkPoints;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

OBJECTTYPE* GetUsableWaterDrumInSector( void )
{
	for( UINT32 uiCount = 0; uiCount < guiNumWorldItems; ++uiCount )				// ... for all items in the world ...
	{
		if( gWorldItems[ uiCount ].fExists )										// ... if item exists ...
		{
			// ... if Item exists and is a canteen (only those are refillable) ...
			if ( Item[gWorldItems[ uiCount ].object.usItem].canteen )
			{
				OBJECTTYPE* pObj = &(gWorldItems[ uiCount ].object);				// ... get pointer for this item ...

				if ( pObj != NULL && pObj->exists() )								// ... if pointer is not obviously useless ...
				{
					if ( HasItemFlag(pObj->usItem, (WATER_DRUM)) )					// ... if item is a water drum...
					{
						for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)			// ... there might be multiple items here (item stack), so for each one ...
						{
							if ( (*pObj)[i]->data.objectStatus > 1 )				// ... and status is > 1 (1 means that it is empty, but still usable)
							{
								return( pObj );
							}
						}
					}
				}
			}
		}
	}

	return( NULL );
}

void HourlyFoodDecay( void )
{
	// decay food in all inventories
	UINT32 cnt = gTacticalStatus.Team[ gbPlayerNum ].bFirstID;
	for ( SOLDIERTYPE* pSoldier = MercPtrs[ cnt ]; cnt <= gTacticalStatus.Team[ gbPlayerNum ].bLastID; cnt++, pSoldier++)
	{
		if ( pSoldier && pSoldier->bActive )
		{
			pSoldier->SoldierInventoryFoodDecay();
		}
	}

	if ( gGameExternalOptions.fFoodDecayInSectors )
	{
		INT16 currentSectorX = gWorldSectorX;
		INT16 currentSectorY = gWorldSectorY;
		INT8 currentSectorZ = gbWorldSectorZ;

		// decay food in all visited sectors
		for ( INT16 sbMapX = 1; sbMapX < MAP_WORLD_X - 1; ++sbMapX )
		{
			for ( INT16 sbMapY = 1; sbMapY < MAP_WORLD_Y - 1; ++sbMapY )
			{
				for ( UINT8 ubMapZ = 0; ubMapZ < 4; ++ubMapZ )
				{
					// only if sector has already been visisted
					if( GetSectorFlagStatus( sbMapX, sbMapY, ubMapZ, SF_ALREADY_VISITED ) == TRUE )
					{
						BuildStashForSelectedSectorAndDecayFood(sbMapX, sbMapY, (INT16)ubMapZ);
					}
				}
			}
		}
	}
}

void SectorFoodDecay( WORLDITEM* pWorldItem, UINT32 size )
{
	// one hour has 60 minutes, with 12 5-second-intervals (cooldown values are based on 5-second values)
	FLOAT decaymod = 12*60*gGameExternalOptions.sFoodDecayModificator;

	for( UINT32 uiCount = 0; uiCount < size; ++uiCount )				// ... for all items in the world ...
	{
		if( pWorldItem[ uiCount ].fExists )										// ... if item exists ...
		{
			if ( Item[pWorldItem[ uiCount ].object.usItem].foodtype > 0 )			// ... if is food...
			{
				OBJECTTYPE* pObj = &(pWorldItem[ uiCount ].object);				// ... get pointer for this item ...

				if ( pObj != NULL )													// ... if pointer is not obviously useless ...
				{
					if ( Food[Item[pObj->usItem].foodtype].usDecayRate > 0.0f )		// ... if the food can decay...
					{
						for(INT16 i = 0; i < pObj->ubNumberOfObjects; ++i)			// ... there might be multiple items here (item stack), so for each one ...
						{							
							(*pObj)[i]->data.bTemperature = max(0.0f, (*pObj)[i]->data.bTemperature - decaymod * Food[Item[pObj->usItem].foodtype].usDecayRate);	// set new temperature														
						}
					}
				}
			}
		}
	}
}

// commented out, as we now look for an xml value. Might be relevant in the future, though
/*BOOLEAN DrinkableWaterInSector(INT16 asMapX, INT16 asMapY, INT8 asMapZ)
{	
	// static variables allow us to remember the result of the last time this function was called - this way, only one call per sector is required
	static INT16 sMapX = 0;
	static INT16 sMapY = 0;
	static INT8  sMapZ = 0;
	static BOOLEAN drinkablewaterfound = FALSE;

	if ( asMapX != sMapX || asMapY != sMapY || asMapZ != sMapZ )
	{
		drinkablewaterfound = FALSE;
				
		for( INT32 sGridNo = 0; sGridNo < MAX_MAP_POS; ++sGridNo )
		{			
			if ( Water(sGridNo) || IsKitchenFurnitureWaterSource(sGridNo) )
			{
				drinkablewaterfound = TRUE;
				break;
			}
		}

		UINT8 ubSectorId = SECTOR(asMapX, asMapY);
		if (ubSectorId >= 0 && ubSectorId < 256 && gSectorWaterType[ubSectorId][asMapZ] == WATER_DRINKABLE )
		{
			drinkablewaterfound = TRUE;
		}

		sMapX = asMapX;
		sMapY = asMapY;
		sMapZ = asMapZ;
	}

	return drinkablewaterfound;
}*/

// commented out, as we now look for an xml value. Might be relevant in the future, though
/*// determine wether there is a kitechen furniture here (we assume its a sink, so it'll have water)
BOOLEAN IsKitchenFurnitureWaterSource( INT32 sGridNo )
{
	STRUCTURE* pStruct = FindStructure(sGridNo, STRUCTURE_GENERIC);

	if ( pStruct != NULL )
	{
		// Get LEVELNODE for struct and remove!
		LEVELNODE* pNode = FindLevelNodeBasedOnStructure( pStruct->sGridNo, pStruct );

		if ( pNode )
		{
			UINT32 uiTileType = 0;
			if ( GetTileType( pNode->usIndex, &uiTileType ) )
			{
				UINT16 usIndex = pNode->usIndex;

				// Check if we are a sandbag
				if ( ( _strnicmp( gTilesets[ giCurrentTilesetID ].TileSurfaceFilenames[ uiTileType ], "furn_6.sti", 10) == 0 ) || 
					 ( _strnicmp( gTilesets[ giCurrentTilesetID ].TileSurfaceFilenames[ uiTileType ], "old_furn.sti", 12) == 0 ) || 
					 ( _strnicmp( gTilesets[ giCurrentTilesetID ].TileSurfaceFilenames[ uiTileType ], "furnmix.sti", 11) == 0 ) || 
					 ( _strnicmp( gTilesets[ giCurrentTilesetID ].TileSurfaceFilenames[ uiTileType ], "furn_mix.sti", 12) == 0 ) )
				{			
					return TRUE;
				}
			}
		}
	}

	return FALSE;
}*/
