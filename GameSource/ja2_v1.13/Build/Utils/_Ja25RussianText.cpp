//#pragma setlocale("RUSSIAN")
#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25RussianText.h"
#else
	#include "Language Defines.h"
	#ifdef RUSSIAN
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25RussianText_public_symbol(void){;}

#ifdef RUSSIAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	//L"���������� �� ����: %d ��., ������������: %d/%d",
	L"���������� ��������� � ������ ��������.",
	L"�� �� ������ ������ %s",
	L"����������� ��������� ������������ ����� � ��������� ��������� ����� �� ��� ������, ���� �� ��� �� �������� ������������, ������������� ����.",
	L"������� %s - ���� ����������� ���������������� '���� ����� �� ���'. �� ����� ��������� �������� ��� ������������ ����������.",
	L"�������",
	L"� ������� ���-�� ����...",
	//L"�������������� ������: %d ��., ���� �������: %d%%",
	L"�������� �������",
	L"����� �������",
	L"����� �������� �� ����� ���������� �����.",
	L"��� ��� ��� ������� ������� �������, �� �� �� ������� ������ ����� ���������. ��������, ������ ��� ����� ��������� ���� �� ����������� ���, ��� ������ ���� ������!",
	L"%s ������ ������������� ����� ��� ����� ������. �������, ��� ��� ������� ������� ������ ��������.",  //the %s is the name of a merc.
	L"����� ��������� �������, ����������� ���������� ��������� �������, %s �����, ��� �� ��� ��� ��������. � ������� ���������� ���������� ������� ������� ��� ������� �� ��� �����. ����� ����, ��� ����� ������� ���������� ����� �������� ����.",
	L"������ ������ ����������, %s ��������, ��� ���������� ���� ����� ��������, � ����� ������ ��������� ��� ����.  %s �� ���������� �������, � ������ ����� ������� ������ ����������. ������, ��� ����� ������� ������ ��� ����...",
	L"� ������ ���� �� ������� ���������� ���� � \"������ �����\" � ������ �� ������ ������������ �� ����� ���.",
	L"(������ ����������� �� ����� ���)",
	L"������� �������� ������� 30 ��������.",
	L"������� �������� �� �������.",
	L"��������: �� ��������� ( %S )",
	L"��������: %S",
	L"�� ������� �������� %S. ��� �������� �������� ������������ ������������ �������� Unfinished Business. �� �������, ��� ������ ������ �������� %S?",
	L"����� ��������������� ����������, ������� �������� �� ��������� �� ������.",
};

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	// made this more elegant
	L"����� ������",
	L"���������� ���",
	L"�����������",
	L"������ ��������",
	L"�������",
	L"����������",
	L"������� ������",
	L"�������������� ������",
	L"����������",
	L"������",
	L"�������� ������",
	L"�������",
	L"��������",
	L"������ ���������",

	L"���",
	L"I.M.P.: �������������",
	L"(�������)",
};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"����������",	//Auto Weapons
	L"�������",	//Heavy Weapons
	L"�������",	//Marksman
	L"�������",	//Hunter
	L"������",	//Gunslinger
	L"�����",	//Hand to Hand
	L"��������",	//Deputy
	L"�������-�����������",	//Technician
	L"�������",	//Paramedic

	L"���",
	L"I.M.P.: �������� ������",	//I.M.P. Major Traits
	// second names
	L"���������",	//Machinegunner
	L"�����������",	//Bombardier
	L"�������",	//Sniper
	L"��������",	//Ranger
	L"�����������",	//Gunfighter
	L"������ ���������",	//Martial Arts
	L"��������",	//Squadleader
	L"�������",	//Engineer
	L"������",	//Doctor
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
	L"������",	//Ambidextrous
	L"������ ������",	//Melee
	L"������ �� �������",	//Throwing
	L"������� ����",	//Night Ops
	L"��������� ������",	//Stealthy
	L"���������",	//Athletics
	L"����������",	//Bodybuilding
	L"���������",	//Demolitions
	L"����������",	//Teaching
	L"���������",	//Scouting

	L"���",
	L"I.M.P.: �������������� ������",	//I.M.P. Minor Traits
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� �������� �� ��������-�������\n",
	L"+%d%s � ����� �������� �� ������� �������\n",
	L"-%d%s �� �� �������� �� ������� ������� � ������ ������� ��� ������� � ��������\n",
	L"-%d%s �� �� ������� ������� �������\n",
	L"����� �� ���� ��������� � �������������� ������ ���� � � ������ ������� ������� �� %d%s\n",
	L"������� ���� ������ ��������� ��� �������������� ��������\n",

};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"-%d%s �� �� �������� �� ����������\n",
	L"-%d%s �� �� �������� �� ����������� ����������\n",
	L"+%d%s � ����� �������� �� ����������\n",
	L"+%d%s � ����� �������� �� ����������� ����������\n",
	L"-%d%s �� �� ���� �� �������\n",
	L"������� ����� �� ���� ��������� ��� �������� � ������� �� %d%s\n",
	L"+%d%s � ����� ������ �� ��������� �� ������� ������, ������ � ����������\n",
	L"+%d%s � ����� ���� ����� �� ������� ������\n",

};
STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� ������� �� ����������� ��������\n",
	L"-%d%s ����������� ��������� �� ���� ��� ����� ���� ������\n",	//-%d%s effective range to target with all weapons
	L"+%d%s � ������ ������������ �� ������ ������ ���� (�������� � ����������)\n",
	L"+%d%s � ����������� �� ��������",	//+%d%s damage on shot
	L" ����",
	L" � ������ ������",
	L" ����� �������",
	L" ����� �������",
	L" ����� ��������",
	L" ����� ���������",
	L" ����� ������",
	L" ����� �������",
	L" ����� ��������",
	L"-%d%s �� �� ������������� ������� � ������������������ ��������\n",
	L"���� 1 ����-������������ � ������ ���� ��������\n",
	L"���� %d ����-������������ � ������ ���� ��������\n",

};
STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"+%d%s � ����� �������� �� ��������\n",
	L"+%d%s � ����� �������� �� �����\n",
	L"-%d%s �� �� ����������� �����\n",
	L"+%d%s � �������� ������������ ������ ����� ���������, ���� ���� ������\n",
	L"+%d%s � �������� ������������ ������ ����� ���������, \n���� ������������� �� ���������� (� ����������� �� ��������)\n",
	L"-%d%s � ������� ������� ��� �������� ����� ���������\n",	//������ ������ ���
	L"-%d%s �� ����� �������� �������\n",
	L"+%d%s � ������������� ���������\n",
	L"-%d%s �� �������� ��������� ��������� �� ���� � �������\n",

};
STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"-%d%s �� ����������� ��� �������� �� ���������� � �����������\n",
	L"+%d%s � ����������� �������������� ���������� � �����������\n",
	L"+%d%s � ����� ��������� �� ���������� � �����������\n",
	L"+%d%s � ����� ��������� �� ��������-��������",
	L" (���� ��� ���������� ��������)",
	L"+%d%s ������ �� ���� ������ ���� ��� ������������ �� ���������, ��������-������� � ����������\n",
	L"-%d%s �� ����������� �� ������� ��������� � ����������\n",
	L"-%d%s �� ����������� �� ����������� ���������, ��������-������� � ����������\n",
	L"��� %d �������������� ������ ���� �� ������������ ����������, ��������-�������� � �����������",
	L"��� %d �������������� ������� ���� �� ������������ ����������, ��������-�������� � �����������\n",

};
STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"-%d%s AP cost of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"+%d%s chance to hit with hand to hand attacks with bare hands\n",
	L"+%d%s chance to hit with hand to hand attacks with brass knuckles\n",
	L"+%d%s damage of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"+%d%s breath damage of hand to hand attacks(bare hands or with brass knuckles)\n",
	L"Enemy knocked out due to your HtH attacks takes slightly longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes much longer to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes very long to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes extremely long to recuperate\n",
	L"Enemy knocked out due to your HtH attacks takes long hours to recuperate\n",
	L"Enemy knocked out due to your HtH attacks probably never stand up\n",
	L"Focused (aimed) punch deals +%d%s more damage\n",
	L"Your special spinning kick deals +%d%s more damage\n",
	L"+%d%s change to dodge hand to hand attacks\n",
	L"+%d%s on top chance to dodge HtH attacks with bare hands",
	L" or brass knuckles",
	L" (+%d%s with brass knuckles)",
	L"+%d%s on top chance to dodge HtH attacks with brass knuckles\n",
	L"+%d%s chance to dodge attacks by any melee weapon\n",
	L"-%d%s APs needed to steal weapon from enemy hands\n",
	L"-%d%s APs needed to change stance (stand, crouch, lie down), turn around, climb on/off roof and jump obstacles\n",
	L"-%d%s APs needed to change stance (stand, crouch, lie down)\n",
	L"-%d%s APs needed to turn around\n",
	L"-%d%s APs needed to climb on/off roof and jump obstacles\n",
	L"+%d%s chance to kick doors in\n",
	L"You gain special animations for hand to hand combat\n",

};
STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"+%d%s APs per round of other mercs in vicinity\n",
	L"+%d effective exp level of other mercs in vicinity, which have lesser level than the %s\n",
	L"+%d effective exp level to count as a standby when counting friends' bonus for suppression\n",
	L"+%d%s total suppression tolerance for other mercs in the vicinity and %s himself\n",
	L"+%d morale gain for other mercs in the vicinity\n",
	L"-%d morale loss for other mercs in the vicinity\n",
	L"The vicinity for bonuses is %d tiles",
	L" (%d tiles with extended ears)",
	L"(Max simultaneous bonuses for one soldier is %d)\n",
	L"+%d%s fear resistence of %s\n",
	L"Drawback: %dx morale loss for %s's death for all other mercs\n",

};
STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"+%d%s to repairing speed\n",
	L"+%d%s to lockpicking (normal/electronic locks)\n",
	L"+%d%s to disarming electronic traps\n",
	L"+%d%s to attaching special items and combining things\n",
	L"+%d%s to unjamming a gun in combat\n",
	L"Reduce penalty to repair electronic items by %d%s\n",
	L"Increased chance to detect traps and mines (+%d detect level)\n",
	L"+%d%s CtH of robot controlled by the %s\n",
	L"%s trait grants you the ability to repair the robot\n",
	L"Reduced penalty to repair speed of the robot by %d%s\n",
};
STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"Has ability to perform surgical intervention by using medical bag on wounded soldier\n",
	L"Surgery instantly returns %d%s of lost health back.",
	L" (This drains the medical bag a lot.)",
	L"Can heal lost stats (from critical hits) by the",
	L" surgery or",
	L" doctor assignment.\n",
	L"+%d%s effectiveness on doctor-patient assignment\n",
	L"+%d%s bandaging speed\n",
	L"+%d%s natural regeneration speed for all soldiers in the same sector",
	L" (max %d of these bonuses per sector stack)",

};
STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"��� �����������",	//No bonuses
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"������� ����� �� �������� � ���� ��� �� %d%s\n",
	L"+%d%s � �������� �� ����������� ������ ���������\n",
	L"+%d%s � �������� �� ��������� �������� ������\n",
	L"-%d%s �� ����� ������� �������\n",
	L"-%d%s �� �� ����������� � ��������\n",
	L"-%d%s �� �� �������� � ������\n",
	L"-%d%s ��, ����������� ��� ���������/�������������� ���� � ���\n",
	L"-%d%s ��, ����������� �� ������������� �������\n",
};
STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"-%d%s APs needed to attack by blades\n",
	L"+%d%s chance to hit with blades\n",
	L"+%d%s chance to hit with blunt melee weapons\n",
	L"+%d%s damage with blades\n",
	L"+%d%s damage with blunt melee weapons\n",
	L"Aimed attack with any melee weapon deals +%d%s damage\n",
	L"+%d%s chance to dodge attack by melee blades\n",
	L"+%d%s on top chance to dodge melee blades if holding a blade\n",
	L"+%d%s chance to dodge attack by blunt melee weapons\n",
	L"+%d%s on top chance to dodge blunt melee weapons if holding a blade\n",

};
STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"-%d%s basic APs needed to throw blades\n",
	L"+%d%s max range when throwing blades\n",
	L"+%d%s chance to hit when throwing blades\n",
	L"+%d%s chance to hit when throwing blades per aim click\n",
	L"+%d%s damage with throwing blades\n",
	L"+%d%s damage with throwing blades per aim click\n",
	L"+%d%s chance to inflict critical hit with throwing blade if not seen or heard\n",
	L"+%d critical hit with throwing blade multiplier\n",
	L"Adds %d more aim click for throwing blades\n",
	L"Adds %d more aim clicks for throwing blades\n",

};
STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"+%d � ������ � �������\n",
	L"+%d � ��������� �����\n",
	L"+%d ������������� � ����� � �������\n",
	L"+%d � ����������� ��������� ���� � ����\n",
	L"-%d � ����� � ���\n",

};
STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"-%d%s � ��, ����������� ��� ������ ������������\n",
	L"+%d%s ��������� ����\n",
	L"+%d%s � ���������� (���� '���������' ���� ��� �� ����������)\n",
	L"���������� ������ �� ��������� � ������� �� %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"-%d%s �� �� �������� (���, ���, ��� ���������, ������������, �������� � �.�.)\n",
	L"-%d%s �� ������� ������� ��� ��������, �������������� �� �����, ������ ����� �����������, �������� � �.�.\n",
};
STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"����� %d%s ������������ � ������������\n",
	L"+%d%s � ���� �� ��������� ����������\n",
	L"��������� ������ ��� ��� ����������� ������ � ������� ��� �� %d%s\n",
	L"������� ����, ����������� ����� ������� � ��� ��� ������� � ���� �� %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"-%d%s APs needed to throw grenades\n",
	L"+%d%s max range when throwing grenades\n",
	L"+%d%s chance to hit when throwing grenades\n",
	L"+%d%s damage of set bombs and mines\n",
	L"+%d%s to attaching detonators check\n",
	L"+%d%s to planting/removing bombs check\n",
	L"Decreases chance enemy will detect your bombs and mines (+%d bomb level)\n",
	L"Increased chance shaped charge will open the doors (damage multiplied by %d)\n",

};
STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"+%d%s bonus to militia training speed\n",
	L"+%d%s bonus to effective leadership for determining militia training\n",
	L"+%d%s bonus to teaching other mercs\n",
	L"Skill value counts to be +%d higher for being able to teach this skill to other mercs\n",
	L"+%d%s bonus to train stats through self-practising assignment\n",

};
STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"+%d to effective sight range with scopes on weapons\n",
	L"+%d to effective sight range with binoculars (and scopes separated from weapons)\n",
	L"-%d tunnel vision with binoculars (and scopes separated from weapons)\n",
	L"If in sector, adjacent sectors will show exact number of enemies\n",
	L"If in sector, adjacent sectors will show presence of enemies, if any\n",
	L"Prevents enemy ambushes on your squad\n",
	L"Prevents bloodcat ambushes on your squad\n",

};
STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"��� �����������",	//No bonuses
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"+%d%s bonus to lockpicking\n",
	L"+%d%s hand to hand chance to hit\n",
	L"+%d%s hand to hand damage\n",
	L"+%d%s chance to dodge hand to hand attacks\n",
	L"Eliminates the penalty to repair and handle\nelectronic things (locks, traps, rem. detonators, robot, etc.)\n",
	L"+%d to effective sight range in the dark\n",
	L"+%d to general effective hearing range\n",
	L"+%d extra hearing range in the dark\n",
	L"+%d to interrupts modifier in the dark\n",
	L"-%d need to sleep\n",
	L"+%d%s max range when throwing anything\n",
	L"+%d%s chance to hit when throwing anything\n",
	L"+%d%s chance to instantly kill by throwing knife if not seen or heard\n",
	L"+%d%s bonus to militia training and other mercs instructing speed\n",
	L"+%d%s effective leadership for militia training calculations\n",
	L"+%d%s chance to hit with rocket/greande launchers and mortar\n",
	L"Auto fire/burst chance to hit penalty is divided by %d\n",
	L"Reduced chance for shooting unwanted bullets on autofire\n",
	L"+%d%s chance to move quietly\n",
	L"+%d%s stealth (being 'invisible' if unnoticed)\n",
	L"Eliminates the CtH penalty when firing two weapons at once\n",
	L"+%d%s chance to hit with melee blades\n",
	L"+%d%s chance to dodge attacks by melee blades if having blade in hands\n",
	L"+%d%s chance to dodge attacks by melee blades if having anything else in hands\n",
	L"+%d%s chance to dodge hand to hand attacks if having blade in hands\n",
	L"-%d%s effective range to target with all weapons\n",
	L"+%d%s aiming bonus per aim click\n",
	L"Provides permanent camouflage\n",
	L"+%d%s hand to hand chance to hit\n",
	L"+%d%s hand to hand damage\n",
	L"+%d%s chance to dodge hand to hand attacks if having empty hands\n",
	L"+%d%s chance to dodge hand to hand attacks if not having empty hands\n",
	L"+%d%s chance to dodge attacks by melee blades\n",
	L"Can perform spinning kick attack on weakened enemies to deal double damage\n",
	L"You gain special animations for hand to hand combat\n",
	L"��� �����������",	//No bonuses
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
//I.M.P. Character Traits help text
//Neutral
	L"�����: ��� �����������.\n \n������: ��� �����.",
//Sociable
	L"�����: ����� �������� � �������.\n \n������: ������ ��� �� �����, ����� ������ �������� ����.",
//Loner
	L"�����: ����� �������� � �����������.\n \n������: ������ ��� �� ����� � ����������� ������ ������.",
//Optimist
	L"�����: ������ ��� ������ �������, � ��������� ��������� ��������.\n \n������: ���� ���������� ���� � ������� ���� ��������.",
//Assertive
	L"�����: ����� ����� � ������ � ��������� ���������.\n \n������: �������� ������ ������ �� ������ �� ��� ������ ���.",
//Intellectual
	L"�����: ������� ������� ���������.\n \n������: �������� ������� �������������� ������ � ����������.",
//Primitive
	L"�����: ����� ��������� ������, ���� �� �������� ��� ����, ���������, ������ ��� ������.\n \n������: ��� ��������, ���������, �������� ����, �������� � �������� ������ ��������� ��������.",
//Aggressive
	L"�����: ����� ����� � �������� ��������� � ����� � ����������. \n��� �������� ����� ������ ��� ����� ������, ��� � ������.\n \n������: ���� ��������� �����������, ��� ������� ��������� ��������: \n������, �������� ������, ������ �������, �������, ���������� ���������.",
//Phlegmatic
	L"�����: ����� ��������� �����������, ��������� ��������: \n������, �������� ������, ������ �������, �������, ���������� ���������.\n \n������: ����� ������� ���� ����������� ��� �����.",
//Dauntless
	L"�����: ����� ���������� ������������� ���������� � ������. \n������ ��� ��� �������� � ������ ��������� ���������� ���������, ��� � ������.\n \n������: ����� ���� � ������� ������������ ������� �� ����� ��������.",
//Pacifist
	L"�����: ������ ��� ���������� ��� ���������� �������� ������� (����� ���������� ���������).\n \n������: �������� ������ �� �������� ������ ���.",
//Malicious
	L"�����: ����� ������� ���� ������� ����������� ���� � ������, ���������� � ��������� ����������.\n \n������: ����� �������� � ������� � ������ ������ ������ ���, ���� �� ���������.",
//Show-off
	L"�����: ����� �������� � �������� �������������� ���������������� ����.\n \n������: ������ ��� ������ ���� �� ���� � ��� ����������� ����� ���������.",
};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"�������� �������.",
	L"����������� ����������������� � ��������� �������� � �������� \n���� ��������� � ��������� ��� ����������� ���������.",
	L"����� ������ � ������ ���� �������� ������ � ����������� ���������.",
	L"���������� ���������������� � ��������� ����������, �����������.",
	L"��� ������� ����� ����� � �������� �������.",
	L"��� ���� ������� ��������� ����� ������ � ��������� � ���������� ���... \n���������� � ����������� ����� ��� �� �������� ��� �����������������.",
	L"������ �������� �������, ��-�� ���� ������ \n��������� ���������� ����� �������� �� ����� ���.",
	L"������ ������ �������� ���������� ��������. \n� ����� ������� �� ������������� ���� ������� �� ��������� ����. \n������ �����, ���� ��� ������ ����� �� ���������.",
};


STR16 gzIMPProfileCostText[]=
{
	L"����������� ����� ��������������� ����� %d$. ����������� ������? ",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"������ ������� ����� ������ IMP ��������� � ����������� PROFEX. ��������� �������� ����� �������� JA2_Options.ini, ����: READ_PROFILE_DATA_FROM_XML.",	//You cannot choose the New Trait System with PROFEX utility deactivated. Check your JA2_Options.ini for entry: READ_PROFILE_DATA_FROM_XML.
};

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"��� ����� �������� ����������� ���� � \"������ �����\". ��������� ���� ������ ������� �������, ��� ��� ����������� �� ������� ������ ����� �����. ����� ������ ���� �������� ��� ��������� ������. �� �������, ��� ������ ���������� � ������������ ����������� � ���?",
};

STR16 gzDisplayCoverText[]=
{
	L"���������: %d/100 %s, ������������: %d/100",
	L"�������������� ������: %d/%d ��., ���� �������: %d/100",
	L"��������� ��������� ������� ��� ������� � �����",
	L"������� ���� ������",
	L"������� ���� ��� �������",
	L"�������", //Wood //wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"�����",
	L"�������",
	L"����",	//NOT USED!!!
	L"��� � �������",
	L"" // yes empty for now
};


#endif
