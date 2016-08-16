#ifndef __Q_ARRAY_H
#define __Q_ARRAY_H

#include "Soldier Profile Type.h"

extern	BOOLEAN QuoteExp_HeadShotOnly[NUM_PROFILES];
extern	BOOLEAN QuoteExp_TeamSpecific[NUM_PROFILES];
extern	BOOLEAN QuoteExp_GenderCode[NUM_PROFILES];
extern	BOOLEAN QuoteExp_GotGunOrUsedGun[NUM_PROFILES];
extern	BOOLEAN QuoteExp_PassingDislike[NUM_PROFILES];
extern	BOOLEAN QuoteExp_WitnessQueenBugDeath[NUM_PROFILES];
extern	BOOLEAN QuoteExp_WitnessDeidrannaDeath[NUM_PROFILES];

typedef struct
{
	UINT16	uiIndex;
	BOOLEAN QuoteExpHeadShotOnly;
	BOOLEAN QuoteExpTeamSpecific;
	BOOLEAN QuoteExpGenderCode;
	BOOLEAN QuoteExpGotGunOrUsedGun;
	BOOLEAN QuoteExpPassingDislike;
	BOOLEAN QuoteExpWitnessQueenBugDeath;
	BOOLEAN QuoteExpWitnessDeidrannaDeath;

} QARRAY_VALUES;

extern QARRAY_VALUES QuoteExp[NUM_PROFILES];



#endif