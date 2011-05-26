// WANNE: Yes, this should be disabled, otherwise we get weird behavior when running the game with a VS 2005 build!
//#pragma setlocale("RUSSIAN")

#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
#else
	#include "Language Defines.h"
	#if defined( RUSSIAN )
		#include "text.h"
		#include "Fileman.h"
		#include "Scheduling.h"
		#include "EditorMercs.h"
		#include "Item Statistics.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_RussianText_public_symbol(void){;}

#ifdef RUSSIAN

/*

******************************************************************************************************
**                                  IMPORTANT TRANSLATION NOTES                                     **
******************************************************************************************************

GENERAL INSTRUCTIONS
- Always be aware that foreign strings should be of equal or shorter length than the English equivalent.  
	I know that this is difficult to do on many occasions due to the nature of foreign languages when 
	compared to English.  By doing so, this will greatly reduce the amount of work on both sides.  In 
	most cases (but not all), JA2 interfaces were designed with just enough space to fit the English word.  
	The general rule is if the string is very short (less than 10 characters), then it's short because of 
	interface limitations.  On the other hand, full sentences commonly have little limitations for length.  
	Strings in between are a little dicey.
- Never translate a string to appear on multiple lines.  All strings L"This is a really long string...", 
	must fit on a single line no matter how long the string is.  All strings start with L" and end with ",
- Never remove any extra spaces in strings.  In addition, all strings containing multiple sentences only 
	have one space after a period, which is different than standard typing convention.  Never modify sections 
	of strings contain combinations of % characters.  These are special format characters and are always 
	used in conjunction with other characters.  For example, %s means string, and is commonly used for names,
	locations, items, etc.  %d is used for numbers.  %c%d is a character and a number (such as A9).  
	%% is how a single % character is built.  There are countless types, but strings containing these 
	special characters are usually commented to explain what they mean.  If it isn't commented, then 
	if you can't figure out the context, then feel free to ask SirTech.
- Comments are always started with // Anything following these two characters on the same line are 
	considered to be comments.  Do not translate comments.  Comments are always applied to the following 
	string(s) on the next line(s), unless the comment is on the same line as a string.  
- All new comments made by SirTech will use "//@@@ comment" (without the quotes) notation.  By searching 
	for @@@ everytime you recieve a new version, it will simplify your task and identify special instructions.
  Commonly, these types of comments will be used to ask you to abbreviate a string.  Please leave the 
	comments intact, and SirTech will remove them once the translation for that particular area is resolved.
- If you have a problem or question with translating certain strings, please use "//!!! comment" 
	(without the quotes).  The syntax is important, and should be identical to the comments used with @@@ 
	symbols.  SirTech will search for !!! to look for your problems and questions.  This is a more 
	efficient method than detailing questions in email, so try to do this whenever possible.


	
FAST HELP TEXT -- Explains how the syntax of fast help text works.
**************

1) BOLDED LETTERS
	The popup help text system supports special characters to specify the hot key(s) for a button.  
	Anytime you see a '|' symbol within the help text string, that means the following key is assigned
	to activate the action which is usually a button.  

	EX:  L"|Map Screen"

	This means the 'M' is the hotkey.  In the game, when somebody hits the 'M' key, it activates that
	button.  When translating the text to another language, it is best to attempt to choose a word that
	uses 'M'.  If you can't always find a match, then the best thing to do is append the 'M' at the end
	of the string in this format:

	EX:  L"Ecran De Carte (|M)"  (this is the French translation)

	Other examples are used multiple times, like the Esc key  or "|E|s|c" or Space -> (|S|p|a|c|e)

2) NEWLINE
  Any place you see a \n within the string, you are looking at another string that is part of the fast help
	text system.  \n notation doesn't need to be precisely placed within that string, but whereever you wish 
	to start a new line. 

	EX:  L"Clears all the mercs' positions,\nand allows you to re-enter them manually."

	Would appear as:

				Clears all the mercs' positions,
				and allows you to re-enter them manually.

	NOTE:  It is important that you don't pad the characters adjacent to the \n with spaces.  If we did this
	       in the above example, we would see

	WRONG WAY -- spaces before and after the \n
	EX:  L"Clears all the mercs' positions, \n and allows you to re-enter them manually."

	Would appear as: (the second line is moved in a character)
		
				Clears all the mercs' positions,
 				 and allows you to re-enter them manually.


@@@ NOTATION
************

	Throughout the text files, you'll find an assortment of comments.  Comments are used to describe the
	text to make translation easier, but comments don't need to be translated.  A good thing is to search for
	"@@@" after receiving new version of the text file, and address the special notes in this manner.  

!!! NOTATION
************

	As described above, the "!!!" notation should be used by you to ask questions and address problems as
	SirTech uses the "@@@" notation.

*/

// Editor
//Editor Taskbar Creation.cpp
STR16 iEditorItemStatsButtonsText[] =
{
	L"Delete",
};

STR16 FaceDirs[8] = 
{ 
	L"north",
	L"northeast",
	L"east",
	L"southeast",
	L"south",
	L"southwest",
	L"west",
	L"northwest"
};

STR16 iEditorMercsToolbarText[] = 
{
 L"Toggle viewing of players", //0
 L"Toggle viewing of enemies",
 L"Toggle viewing of creatures",
 L"Toggle viewing of rebels",
 L"Toggle viewing of civilians",
 
 L"Player",
 L"Enemy",
 L"Creature",
 L"Rebels",
 L"Civilian",
 
 L"DETAILED PLACEMENT", //10
 L"General information mode",
 L"Physical appearance mode",
 L"Attributes mode",
 L"Inventory mode",
 L"Profile ID mode",
 L"Schedule mode",
 L"Schedule mode",
 L"DELETE",
 L"Delete currently selected merc (DEL).",
 L"NEXT", //20
 L"Find next merc (SPACE).",
 L"Toggle priority existance",
 L"Toggle whether or not placement has/naccess to all doors.",
 
 //Orders
 L"STATIONARY",
 L"ON GUARD",
 L"ON CALL",
 L"SEEK ENEMY",
 L"CLOSE PATROL",
 L"FAR PATROL",
 L"POINT PATROL", //30
 L"RND PT PATROL",
 
 //Attitudes
 L"DEFENSIVE",
 L"BRAVE SOLO",
 L"BRAVE AID",
 L"AGGRESSIVE",
 L"CUNNING SOLO",
 L"CUNNING AID",
 
 L"Set merc to face %s",
 
 L"Find",
 L"BAD", //40
 L"POOR",
 L"AVERAGE",
 L"GOOD",
 L"GREAT",
 
 L"BAD",
 L"POOR",
 L"AVERAGE",
 L"GOOD",
 L"GREAT",
 
 L"Previous color set", //50
 L"Next color set",
 
 L"Previous body type",
 L"Next body type",
 
 L"Toggle time variance (+ or - 15 minutes)",
 L"Toggle time variance (+ or - 15 minutes)",
 L"Toggle time variance (+ or - 15 minutes)",
 L"Toggle time variance (+ or - 15 minutes)",
 
 L"No action",
 L"No action",
 L"No action", //60
 L"No action",
 
 L"Clear Schedule",
 
 L"Find selected merc",
};

STR16 iEditorBuildingsToolbarText[] =
{
	L"ROOFS",  //0
	L"WALLS",
	L"ROOM INFO",

	L"Place walls using selection method",
	L"Place doors using selection method",
	L"Place roofs using selection method",
	L"Place windows using selection method",
	L"Place damaged walls using selection method.",
	L"Place furniture using selection method",
	L"Place wall decals using selection method",
	L"Place floors using selection method", //10
	L"Place generic furniture using selection method",
	L"Place walls using smart method",
	L"Place doors using smart method",
	L"Place windows using smart method",
	L"Place damaged walls using smart method",
	L"Lock or trap existing doors",

	L"Add a new room",
	L"Edit cave walls.",
	L"Remove an area from existing building.",
	L"Remove a building", //20
	L"Add/replace building's roof with new flat roof.",
	L"Copy a building",
	L"Move a building",
	L"Draw room number",
	L"Erase room numbers",

	L"Toggle erase mode",
	L"Undo last change",
	L"Cycle brush size",

};

STR16 iEditorItemsToolbarText[] =
{
	L"Weapons", //0
	L"Ammo",
	L"Armour",
	L"LBE",
	L"Exp",
	L"E1",
	L"E2",
	L"E3",
	L"Triggers",
	L"Keys",
};

STR16 iEditorMapInfoToolbarText[] =
{
	L"Add ambient light source", //0
	L"Toggle fake ambient lights.",
	L"Add exit grids (r-clk to query existing).",
	L"Cycle brush size",
	L"Undo last change",
	L"Toggle erase mode",
	L"Specify north point for validation purposes.",
	L"Specify west point for validation purposes.",
	L"Specify east point for validation purposes.",
	L"Specify south point for validation purposes.",
	L"Specify center point for validation purposes.", //10
	L"Specify isolated point for validation purposes.",
};

STR16 iEditorOptionsToolbarText[]=
{
	L"New map",  //0
	L"New basement",
	L"New cave level",
	L"Save map",
	L"Load map",
	L"Select tileset",
	L"Leave Editor mode",
	L"Exit game.",
	L"Create radar map",
	L"When checked, the map will be saved in original JA2 map format.\nThis option is only valid on 'normal' size maps that do not reference grid numbers (e.g: exit grids) > 25600.",
	L"When checked and you load a map, the map will be enlarged automatically depending on the selected Rows and Cols.",
};

STR16 iEditorTerrainToolbarText[] =
{
	L"Draw ground textures", //0
	L"Set map ground textures",
	L"Place banks and cliffs",
	L"Draw roads",
	L"Draw debris",
	L"Place trees & bushes",
	L"Place rocks",
	L"Place barrels & other junk",
	L"Fill area",
	L"Undo last change",
	L"Toggle erase mode", //10
	L"Cycle brush size",
	L"Raise brush density",
	L"Lower brush density",
};

STR16 iEditorTaskbarInternalText[]=
{
	L"Terrain", //0
	L"Buildings",
	L"Items",
	L"Mercs",
	L"Map Info",
	L"Options",
};

//Editor Taskbar Utils.cpp

STR16 iRenderMapEntryPointsAndLightsText[] =
{
	L"North Entry Point", //0
	L"West Entry Point",
	L"East Entry Point",
	L"South Entry Point",
	L"Center Entry Point",
	L"Isolated Entry Point",
	
	L"Prime",
	L"Night",
	L"24Hour",
};

STR16 iBuildTriggerNameText[] =
{
	L"Panic Trigger1", //0
	L"Panic Trigger2",
	L"Panic Trigger3",
	L"Trigger%d",
	 
	L"Pressure Action",
	L"Panic Action1",
	L"Panic Action2",
	L"Panic Action3",
	L"Action%d",
};

STR16 iRenderDoorLockInfoText[]=
{
	L"No Lock ID", //0
	L"Explosion Trap",
	L"Electric Trap",
	L"Siren Trap",
	L"Silent Alarm",
	L"Super Electric Trap", //5
	L"Brothel Siren Trap",
	L"Trap Level %d",
};

STR16 iRenderEditorInfoText[]=
{
	L"Save map in vanilla JA2 (v1.12) map format (Version: 5.00 / 25)", //0
	L"No map currently loaded.",
	L"File:  %S, Current Tileset:  %s",
	L"Enlarge map on loading",
};
//EditorBuildings.cpp
STR16 iUpdateBuildingsInfoText[] =
{
	L"TOGGLE", //0
	L"VIEWS",
	L"SELECTION METHOD",
	L"SMART METHOD",
	L"BUILDING METHOD",
	L"Room#", //5
};

STR16 iRenderDoorEditingWindowText[] =
{
	L"Editing lock attributes at map index %d.",
	L"Lock ID",
	L"Trap Type",
	L"Trap Level",
	L"Locked",
};

//EditorItems.cpp

STR16 pInitEditorItemsInfoText[] = 
{
	L"Pressure Action", //0
	L"Panic Action1",
	L"Panic Action2",
	L"Panic Action3",
	L"Action%d",
	
	L"Panic Trigger1", //5
	L"Panic Trigger2",
	L"Panic Trigger3",
	L"Trigger%d",
};

STR16 pDisplayItemStatisticsTex[] =
{
	L"Status Info Line 1",
	L"Status Info Line 2",
	L"Status Info Line 3",
	L"Status Info Line 4",
	L"Status Info Line 5",
};

//EditorMapInfo.cpp
STR16 pUpdateMapInfoText[] =
{
	L"R", //0
	L"G",
	L"B",
	
	L"Prime",
	L"Night",
	L"24Hrs", //5

	L"Radius",

	L"Underground",
	L"Light Level",

	L"Outdoors",
	L"Basement", //10
	L"Caves",

	L"Restricted",
	L"Scroll ID",

	L"Destination",
	L"Sector", //15
	L"Destination",
	L"Bsmt. Level",
	L"Dest.",
	L"GridNo",
};
//EditorMercs.cpp
CHAR16 gszScheduleActions[ 11 ][20] =
{
	L"No action",
	L"Lock door",
	L"Unlock door",
	L"Open door",
	L"Close door",
	L"Move to gridno",
	L"Leave sector",
	L"Enter sector",
	L"Stay in sector",
	L"Sleep",
	L"Ignore this!"
};

STR16 zDiffNames[5] = 
{ 
	L"Wimp", 
	L"Easy", 
	L"Average",
	L"Tough", 
	L"Steroid Users Only" 
};

STR16 EditMercStat[12] = 
{ 
	L"Max Health",
	L"Cur Health",
	L"Strength",
	L"Agility",
	L"Dexterity",
	L"Charisma",
	L"Wisdom",
	L"Marksmanship",
	L"Explosives",
	L"Medical",
	L"Scientific",
	L"Exp Level", 
};


STR16 EditMercOrders[8] = 
{ 
	L"Stationary",
	L"On Guard",
	L"Close Patrol",
	L"Far Patrol",
	L"Point Patrol",
	L"On Call",
	L"Seek Enemy", 
	L"Random Point Patrol",
};

STR16 EditMercAttitudes[6] = 
{ 
	L"Defensive",
	L"Brave Loner",
	L"Brave Buddy",
	L"Cunning Loner",
	L"Cunning Buddy",
	L"Aggressive", 
};

STR16 pDisplayEditMercWindowText[] =
{
	L"Merc Name:", //0
	L"Orders:",
	L"Combat Attitude:",
};

STR16 pCreateEditMercWindowText[] = 
{
	L"Merc Colors", //0
	L"Done",
	
	L"Previous merc standing orders",
	L"Next merc standing orders", 
	
	L"Previous merc combat attitude",
	L"Next merc combat attitude",	//5
	
	L"Decrease merc stat",
	L"Increase merc stat",
};

STR16 pDisplayBodyTypeInfoText[] =
{
	L"Random", //0
	L"Reg Male",
	L"Big Male",
	L"Stocky Male",
	L"Reg Female",
	L"NE Tank", //5
	L"NW Tank",
	L"Fat Civilian",
	L"M Civilian",
	L"Miniskirt",
	L"F Civilian", //10
	L"Kid w/ Hat",
	L"Humvee",
	L"Eldorado",
	L"Icecream Truck",
	L"Jeep", //15
	L"Kid Civilian",
	L"Domestic Cow",
	L"Cripple",
	L"Unarmed Robot",
	L"Larvae", //20
	L"Infant",
	L"Yng F Monster",
	L"Yng M Monster",
	L"Adt F Monster",
	L"Adt M Monster", //25
	L"Queen Monster",
	L"Bloodcat",
};

STR16 pUpdateMercsInfoText[] = 
{
	L" --=ORDERS=-- ", //0
	L"--=ATTITUDE=--",
	
	L"RELATIVE",
	L"ATTRIBUTES",
	
	L"RELATIVE",
	L"EQUIPMENT",
			
	L"RELATIVE",
	L"ATTRIBUTES",
	
	L"Army",
	L"Admin",
	L"Elite", //10
	
	L"Exp. Level",
	L"Life",
	L"LifeMax",
	L"Marksmanship",
	L"Strength",
	L"Agility",
	L"Dexterity",
	L"Wisdom",
	L"Leadership",
	L"Explosives", //20
	L"Medical",
	L"Mechanical",
	L"Morale",
	
	L"Hair color:",
	L"Skin color:",
	L"Vest color:",
	L"Pant color:",
	
	L"RANDOM",
	L"RANDOM",
	L"RANDOM", //30
	L"RANDOM",
	
	L"By specifying a profile index, all of the information will be extracted from the profile ",
	L"and override any values that you have edited.  It will also disable the editing features ",
	L"though, you will still be able to view stats, etc.  Pressing ENTER will automatically ",
	L"extract the number you have typed.  A blank field will clear the profile.  The current ",
	L"number of profiles range from 0 to ",
	
	L"Current Profile:  n/a              ",
	L"Current Profile: %s",
	
	L"STATIONARY",
	L"ON CALL", //40
	L"ON GUARD",
	L"SEEK ENEMY",
	L"CLOSE PATROL",
	L"FAR PATROL",
	L"POINT PATROL",
	L"RND PT PATROL",

	L"Action",
	L"Time",
	L"V",
	L"GridNo 1", //50
	L"GridNo 2",
	L"1)",
	L"2)",
	L"3)",
	L"4)",
	
	L"lock",
	L"unlock",
	L"open",
	L"close",
	
	L"Click on the gridno adjacent to the door that you wish to %s.", //60
	L"Click on the gridno where you wish to move after you %s the door.",
	L"Click on the gridno where you wish to move to.",
	L"Click on the gridno where you wish to sleep at.	Person will automatically return to original position after waking up.",
	L" Hit ESC to abort entering this line in the schedule.",
};

CHAR16 pRenderMercStringsText[][100] =
{
	L"Slot #%d",
	L"Patrol orders with no waypoints",
	L"Waypoints with no patrol orders",
};

STR16 pClearCurrentScheduleText[] =
{
	L"No action",
};

STR16 pCopyMercPlacementText[] =
{
	L"Placement not copied because no placement selected.",
	L"Placement copied.",
};

STR16 pPasteMercPlacementText[] = 
{
	L"Placement not pasted as no placement is saved in buffer.",
	L"Placement pasted.",
	L"Placement not pasted as the maximum number of placements for this team is already used.",
};

//editscreen.cpp
STR16 pEditModeShutdownText[] = 
{
	L"Exit editor?",
};

STR16 pHandleKeyboardShortcutsText[] = 
{
	L"Are you sure you wish to remove all lights?", //0
	L"Are you sure you wish to reverse the schedules?",
	L"Are you sure you wish to clear all of the schedules?",
	
	L"Clicked Placement Enabled",
	L"Clicked Placement Disabled",
	
	L"Draw High Ground Enabled", //5
	L"Draw High Ground Disabled",
	
	L"Number of edge points: N=%d E=%d S=%d W=%d",
	
	L"Random Placement Enabled",
	L"Random Placement Disabled",
	
	L"Removing Treetops", //10
	L"Showing Treetops",
	
	L"World Raise Reset",
	
	L"World Raise Set Old",
	L"World Raise Set",
};

STR16 pPerformSelectedActionText[] = 
{
	L"Creating radar map for %S", //0
	
	L"Delete current map and start a new basement level?",
	L"Delete current map and start a new cave level?",
	L"Delete current map and start a new outdoor level?",
	
	L" Wipe out ground textures? ",
};

STR16 pWaitForHelpScreenResponseText[] = 
{
	L"HOME", //0
	L"Toggle fake editor lighting ON/OFF",

	L"INSERT",
	L"Toggle fill mode ON/OFF",

	L"BKSPC",
	L"Undo last change",

	L"DEL",
	L"Quick erase object under mouse cursor",

	L"ESC",
	L"Exit editor",

	L"PGUP/PGDN", //10
	L"Change object to be pasted",

	L"F1",
	L"This help screen",

	L"F10",
	L"Save current map",

	L"F11",
	L"Load map as current",

	L"+/-",
	L"Change shadow darkness by .01",

	L"SHFT +/-",  //20
	L"Change shadow darkness by .05",

	L"0 - 9",
	L"Change map/tileset filename",

	L"b",
	L"Change brush size",

	L"d",
	L"Draw debris",

	L"o",
	L"Draw obstacle",

	L"r", //30
	L"Draw rocks",

	L"t",
	L"Toggle trees display ON/OFF",

	L"g",
	L"Draw ground textures",

	L"w",
	L"Draw building walls",

	L"e",
	L"Toggle erase mode ON/OFF",

	L"h",  //40
	L"Toggle roofs ON/OFF",
};

STR16 pAutoLoadMapText[] =
{
	L"Map data has just been corrupted.  Don't save, don't quit, get Kris!  If he's not here, save the map using a temp filename and document everything you just did, especially your last action!",
	L"Schedule data has just been corrupted.  Don't save, don't quit, get Kris!  If he's not here, save the map using a temp filename and document everything you just did, especially your last action!",
};

STR16 pShowHighGroundText[] =
{
	L"Showing High Ground Markers",
	L"Hiding High Ground Markers",
};

//Item Statistics.cpp
CHAR16 gszActionItemDesc[ 34 ][ 30 ] =	// NUM_ACTIONITEMS = 34
{
	L"Klaxon Mine",
	L"Flare Mine",
	L"Teargas Explosion",
	L"Stun Explosion",
	L"Smoke Explosion",
	L"Mustard Gas",
	L"Land Mine",
	L"Open Door",
	L"Close Door",
	L"3x3 Hidden Pit",
	L"5x5 Hidden Pit",
	L"Small Explosion",
	L"Medium Explosion",
	L"Large Explosion",
	L"Toggle Door",
	L"Toggle Action1s",
	L"Toggle Action2s",
	L"Toggle Action3s",
	L"Toggle Action4s",
	L"Enter Brothel",
	L"Exit Brothel",
	L"Kingpin Alarm",
	L"Sex with Prostitute",
	L"Reveal Room",
	L"Local Alarm",
	L"Global Alarm",
	L"Klaxon Sound",
	L"Unlock door",
	L"Toggle lock",
	L"Untrap door",
	L"Tog pressure items",
	L"Museum alarm",
	L"Bloodcat alarm",
	L"Big teargas",
};

STR16 pUpdateItemStatsPanelText[] =
{
	L"Toggle hide flag", //0
	L"No item selected.",
	L"Slot available for",
	L"random generation.",
	L"Keys not editable.",
	L"ProfileID of owner",
	L"Item class not implemented.",
	L"Slot locked as empty.",
	L"Status",
	L"Rounds",
	L"Trap Level", //10
	L"Quantity",
	L"Trap Level",
	L"Status",
	L"Trap Level",
	L"Status",
	L"Quantity",
	L"Trap Level",
	L"Dollars",
	L"Status",
	L"Trap Level", //20
	L"Trap Level",
	L"Tolerance",
	L"Alarm Trigger",
	L"Exist Chance",
	L"B",
	L"R",
	L"S",
};

STR16 pSetupGameTypeFlagsText[] =
{
	L"Item appears in both Sci-Fi and Realistic modes. (|B)", //0
	L"Item appears in |Realistic mode only.",
	L"Item appears in |Sci-Fi mode only.",
};

STR16 pSetupGunGUIText[] =
{
	L"SILENCER", //0
	L"SNIPERSCOPE",
	L"LASERSCOPE",
	L"BIPOD",
	L"DUCKBILL",
	L"G-LAUNCHER", //5
};

STR16 pSetupArmourGUIText[] =
{
	L"CERAMIC PLATES", //0
};

STR16 pSetupExplosivesGUIText[] =
{
	L"DETONATOR",
};

STR16 pSetupTriggersGUIText[] =
{
	L"If the panic trigger is an alarm trigger,\nenemies won't attempt to use it if they\nare already aware of your presence.",
};

//Sector Summary.cpp

STR16 pCreateSummaryWindowText[]=
{
	L"Okay", //0
	L"A",
	L"G",
	L"B1",
	L"B2",
	L"B3", //5
	L"LOAD",
	L"SAVE",
	L"Update",
};

STR16 pRenderSectorInformationText[] =
{
	L"Tileset:  %s", //0
	L"Version Info:  Summary:  1.%02d,  Map:  %1.2f / %02d",
	L"Number of items:  %d", 
	L"Number of lights:  %d",
	L"Number of entry points:  %d",
	
	L"N",
	L"E",
	L"S",
	L"W",
	L"C",
	L"I", //10
	
	L"Number of rooms:  %d",
	L"Total map population:  %d",
	L"Enemies:  %d",
	L"Admins:  %d",
	
	L"(%d detailed, %d profile -- %d have priority existance)",
	L"Troops:  %d",
	
	L"(%d detailed, %d profile -- %d have priority existance)",
	L"Elites:  %d",
	
	L"(%d detailed, %d profile -- %d have priority existance)",
	L"Civilians:  %d",  //20
	
	L"(%d detailed, %d profile -- %d have priority existance)",
	
	L"Humans:  %d",
	L"Cows:  %d",
	L"Bloodcats:  %d",
	
	L"Creatures:  %d",
	
	L"Monsters:  %d",
	L"Bloodcats:  %d",
	
	L"Number of locked and/or trapped doors:  %d",
	L"Locked:  %d",
	L"Trapped:  %d", //30
	L"Locked & Trapped:  %d",
	
	L"Civilians with schedules:  %d",
	
	L"Too many exit grid destinations (more than 4)...",
	L"ExitGrids:  %d (%d with a long distance destination)",
	L"ExitGrids:  none",
	L"ExitGrids:  1 destination using %d exitgrids",
	L"ExitGrids:  2 -- 1) Qty: %d, 2) Qty: %d",
	L"ExitGrids:  3 -- 1) Qty: %d, 2) Qty: %d, 3) Qty: %d",
	L"ExitGrids:  3 -- 1) Qty: %d, 2) Qty: %d, 3) Qty: %d, 4) Qty: %d",
	L"Enemy Relative Attributes:  %d bad, %d poor, %d norm, %d good, %d great (%+d Overall)", //40
	L"Enemy Relative Equipment:  %d bad, %d poor, %d norm, %d good, %d great (%+d Overall)",
	L"%d placements have patrol orders without any waypoints defined.",
	L"%d placements have waypoints, but without any patrol orders.",
	L"%d gridnos have questionable room numbers.  Please validate.",
	
};

STR16 pRenderItemDetailsText[] =
{
	L"R",  //0
	L"S",
	L"Enemy",
	
	L"TOO MANY ITEMS TO DISPLAY!",
	
	L"Panic1",
	L"Panic2",
	L"Panic3",
	L"Norm1",
	L"Norm2",
	L"Norm3",
	L"Norm4", //10
	L"Pressure Actions",
	
	L"TOO MANY ITEMS TO DISPLAY!",
	
	L"PRIORITY ENEMY DROPPED ITEMS",
	L"None",
	
	L"TOO MANY ITEMS TO DISPLAY!",
	L"NORMAL ENEMY DROPPED ITEMS",
	L"TOO MANY ITEMS TO DISPLAY!",
	L"None",
	L"TOO MANY ITEMS TO DISPLAY!",
	L"ERROR:  Can't load the items for this map.  Reason unknown.", //20	
};

STR16 pRenderSummaryWindowText[] =
{
	L"CAMPAIGN EDITOR -- %s Version 1.%02d", //0
	L"(NO MAP LOADED).",
	L"You currently have %d outdated maps.",
	L"The more maps that need to be updated, the longer it takes.  It'll take ",
	L"approximately 4 minutes on a P200MMX to analyse 100 maps, so",
	L"depending on your computer, it may vary.",
	L"Do you wish to regenerate info for ALL these maps at this time (y/n)?",
	
	L"There is no sector currently selected.",
	
	L"Entering a temp file name that doesn't follow campaign editor conventions...",
	
	L"You need to either load an existing map or create a new map before being",
	L"able to enter the editor, or you can quit (ESC or Alt+x).", //10

	L", ground level",					
	L", underground level 1",	
	L", underground level 2",	
	L", underground level 3",	
	L", alternate G level",					
	L", alternate B1 level",	
	L", alternate B2 level",	
	L", alternate B3 level",
	
	L"ITEM DETAILS -- sector %s",
	L"Summary Information for sector %s:", //20
	
	L"Summary Information for sector %s",
	L"does not exist.",
	
	L"Summary Information for sector %s",
	L"does not exist.",
	
	L"No information exists for sector %s.",
	
	L"No information exists for sector %s.",
	
	L"FILE:  %s",
	
	L"FILE:  %s",
	
	L"Override READONLY",
	L"Overwrite File", //30
	
	L"You currently have no summary data.  By creating one, you will be able to keep track",
	L"of information pertaining to all of the sectors you edit and save.  The creation process",
	L"will analyse all maps in your \\MAPS directory, and generate a new one.  This could",
	L"take a few minutes depending on how many valid maps you have.  Valid maps are",
	L"maps following the proper naming convention from a1.dat - p16.dat.  Underground maps", 
	L"are signified by appending _b1 to _b3 before the .dat (ex:  a9_b1.dat). ",
	
	L"Do you wish to do this now (y/n)?",
	
	L"No summary info.  Creation denied.",
	
	L"Grid",
	L"Progress", //40
	L"Use Alternate Maps",
	
	L"Summary",
	L"Items",
};

STR16 pUpdateSectorSummaryText[] =
{
	L"Analyzing map:  %s...",
};

STR16 pSummaryLoadMapCallbackText[] =
{
	L"Loading map:  %s",
};

STR16 pReportErrorText[] =
{
	L"Skipping update for %s.  Probably due to tileset conflicts...",
};

STR16 pRegenerateSummaryInfoForAllOutdatedMapsText[] =
{
	L"Generating map information",
};

STR16 pSummaryUpdateCallbackText[] =
{
	L"Generating map summary",
};

STR16 pApologizeOverrideAndForceUpdateEverythingText[] =
{
	L"MAJOR VERSION UPDATE",
	L"There are %d maps requiring a major version update.",
	L"Updating all outdated maps",
};

//selectwin.cpp
STR16 pDisplaySelectionWindowGraphicalInformationText[] =
{
	L"%S[%d] is from default tileset %s (%S)",
	L"File:  %S, subindex:  %d (%S)",
	L"Current Tileset:  %s",
};

//Cursor Modes.cpp
STR16 wszSelType[6] = {
 L"Small", 
 L"Medium", 
 L"Large", 
 L"XLarge", 
 L"Width: xx", 
 L"Area" 
 };

//---

CHAR16  gszAimPages[ 6 ][ 20 ] =
{
	L"C�p. 1/2", //0
	L"C�p. 2/2",
	
	L"C�p. 1/3",
	L"C�p. 2/3",
	L"C�p. 3/3",
	
	L"C�p. 1/1", //5
};

// by Jazz
CHAR16 zGrod[][500] =
{
	L"�����", //0    // Robot
};

STR16 pCreditsJA2113[] =
{
	L"@T,{;������������ JA2 v1.13",
	L"@T,C144,R134,{;����������������",
	L"@T,C144,R134,{;������� � ����",
	L"@};(������ ����� �� ������ �����)",
	L"@T,C144,R134,{;��������",
	L"@T,C144,R134,{;����� ��������",
	L"@};(� ������ ������, ������������ ������� ���� � ����������� ������ ���������!)",
};

CHAR16 ItemNames[MAXITEMS][80] =
{
	L"",
};


CHAR16 ShortItemNames[MAXITEMS][80] =
{
	L"",
};

// Different weapon calibres
// CAWS is Close Assault Weapon System and should probably be left as it is
// NATO is the North Atlantic Treaty Organization
// WP is Warsaw Pact
// cal is an abbreviation for calibre
CHAR16 AmmoCaliber[MAXITEMS][20];// =
//{
//	L"0",
//	L",38 ���",
//	L"9��",
//	L",45 ���",
//	L",357 ���",
//	L"12 ���",
//	L"���",
//	L"5,45��",
//	L"5,56��",
//	L"7,62�� ����",
//	L"7,62�� ��",
//	L"4,7��",
//	L"5,7��",
//	L"������",
//	L"������",
//	L"", // ������
//	L"", // �����
////	L".50 cal", // barrett
////	L"9mm Hvy", // Val silent
//};

// This BobbyRayAmmoCaliber is virtually the same as AmmoCaliber however the bobby version doesnt have as much room for the words.
// 
// Different weapon calibres
// CAWS is Close Assault Weapon System and should probably be left as it is
// NATO is the North Atlantic Treaty Organization
// WP is Warsaw Pact
// cal is an abbreviation for calibre
CHAR16 BobbyRayAmmoCaliber[MAXITEMS][20] ;//=
//{
//	L"0",
//	L",38 ���",
//	L"9��",
//	L",45 ���",
//	L",357 ���",
//	L"12 ���",
//	L"���",
//	L"5,45��",
//	L"5,56��",
//	L"7,62�� �.",
//	L"7,62�� ��",
//	L"4,7��",
//	L"5.7��",
//	L"������",
//	L"������",
//	L"", // ������
////	L"", // flamethrower
////	L".50 cal", // barrett
////	L"9mm Hvy", // Val silent
//};


CHAR16 WeaponType[MAXITEMS][30] =
{
	L"",			//Other
	L"��������",		//Pistol
	L"���.��������",	//MP '�������������� ��������'
	L"��",			//SMG '��������-�������'
	L"��������",		//Rifle
	L"��.��������",		//Sniper rifle '����������� ��������'
	L"��.��������",		//Assault rifle '��������� ��������'
	L"������ �������",	//LMG '������ �������'
	L"�����",		//Shotgun '��������������� �����'
};

CHAR16 TeamTurnString[][STRING_LENGTH] =
{
	L"��� ������", // player's turn
	L"��� ����������",
	L"��� ������",
	L"��� ���������",
	L"��� �����������",
	L"Player_Plan",// planning turn
	L"Client �1",//hayden
	L"Client �2",//hayden
	L"Client �3",//hayden
	L"Client �4",//hayden
};

CHAR16 Message[][STRING_LENGTH] =
{
	L"",

	// In the following 8 strings, the %s is the merc's name, and the %d (if any) is a number.

	L"%s �������� ������� � ������ � ������ � ����������!",
	L"%s �������� ������� � ����� � ������ � ��������!",
	L"%s �������� ������� � ����� � ������ � ����!",
	L"%s �������� ������� � ���� � ������ � �����������!",
	L"%s �������� ������� � ������ � ������ %d ������ ����������!",
	L"%s �������� ������� � ����� � ������ %d ������ ��������!",
	L"%s �������� ������� � ����� � ������ %d ������ ����!",
	L"%s �������� ������� � ���� � ������ %d ������ �����������!",
	L"��������!",

	// The first %s is a merc's name, the second is a string from pNoiseVolStr,
	// the third is a string from pNoiseTypeStr, and the last is a string from pDirectionStr

	L"", //OBSOLETE
	L"� ��� �� ������ ������� ������������!",

	// In the following four lines, all %s's are merc names

	L"%s ������������ ������.",
	L"%s ������������ ����� ��������!",
	L"%s ��������� ������ ������ (����� ������� - ������).",
	L"%s � %s ��������� ������ ������ (����� ������� - ������).",
	// the following 17 strings are used to create lists of gun advantages and disadvantages
	// (separated by commas)
	L"������",
	L"��������",
	L"������� ������",
	L"������� ������",
	L"������� ����",
	L"����� ����",
	L"��������������",
	L"����������������",
	L"������� ���",
	L"������� ���",
	L"�����",
	L"������",
	L"����������",
	L"���������",	//fast burst fire
	L"��� ������� �������",
	L"���.�������",
	L"���.�������",

	// In the following two lines, all %s's are merc names

	L"%s: ����������� ������ �������.",
	L"%s: ����������� ������ �������.",

	// The first %s is a merc name and the second %s is an item name

	L"������ ������: ����������� �������!",
	L"%s ����� %s.",

	// The %s is a merc name

	L"%s: ������ �� �������� ���������.",

	L"��� �����������!",
	L"����������?",

	// Both %s's are item names

	L"������ ������������ %s � %s.",

	L"������",
	L"���������", 
	L"�������",
	
	//You cannot use "item(s)" and your "other item" at the same time.
	//Ex:  You cannot use sun goggles and you gas mask at the same time.
	L"������ ������������ %s � %s ������������.",

	L"���� ������� ����� ������������ � ������ ���������, �������� ��� � ���� �� ������� ���� ��� ��������������.",
	L"���� ������� ����� ������������ � ������ ���������, �������� ��� � ���� �� ������� ���� ��� ��������������. (������ ��� �������� ������������)",
	L"� ������� ��� �������� �����!",
	L"%s ������� ������ ������, ����� ��������� ��� %s", 
	L"%s: ��������� � ������!",
	L"�������� �����?",
	L"��� ��������� ��������������. ���������� ���?",
	L"%s ��������� ������ �������!",
	L"%s ��������������� �� ���������� �������!",
	L"%s �� ������� �������� %s � �����!",
	L"%s ����� %s",
	L"����������� ���: ",
	L"�������?",
	L"������� ������ ���� ������.",
	L"��� ��� ����?",
  L"����� ��������������� ��������� ��������� �������� - �������� '������/�������'.",
	L"%s �������� �������� ������ ���� ������.", //%s only had enough time to reload ONE gun
	L"��� �����-�����", //Bloodcats' turn
	L"��������������", //full auto
	L"����������������", //no full auto
	L"������", //accurate
	L"��������", //inaccurate
	L"��� ���������", //no semi auto
	L"���� ������� �� �����!",
	L"� ����� � ����� ������ ���!",

	L"%s: �������� �������� ������.",
	L"%s: �������� �������� ����.",
	
	L"%s: ������������ �������� ������.",
	L"%s: ������������ �������� ����.",
	
	L"%s: ��������� �������� ������.",
	L"%s: ��������� �������� ����.",
	
	L"%s: ����������� �������� ������.",
	L"%s: ����������� �������� ����.",

	L"������ ���������� ������� %s �� ��� �����.",
	L"The %s will not fit in any open slots.",
};


// the names of the towns in the game

CHAR16 pTownNames[MAX_TOWNS][MAX_TOWN_NAME_LENGHT] =
{
	L"",
	L"������",
	L"�������",
	L"�����",
	L"����",
	L"�����",
	L"�������",
	L"���-����",
	L"������",
	L"����",
	L"������",
	L"������",
	L"�������",
};

// the types of time compression. For example: is the timer paused? at normal speed, 5 minutes per second, etc.
// min is an abbreviation for minutes

STR16 sTimeStrings[] =
{
	L"�����",
	L"�����",
	L"5 ���",
	L"30 ���",
	L"60 ���",
	L"6 �����",
};


// Assignment Strings: what assignment does the merc  have right now? For example, are they on a squad, training, 
// administering medical aid (doctor) or training a town. All are abbreviated. 8 letters is the longest it can be.

STR16 pAssignmentStrings[] =
{
	L"����� 1",
	L"����� 2",
	L"����� 3",
	L"����� 4",
	L"����� 5",
	L"����� 6",
	L"����� 7",
	L"����� 8",
	L"����� 9",
	L"����� 10",
	L"����� 11",
	L"����� 12",
	L"����� 13",
	L"����� 14",
	L"����� 15",
	L"����� 16",
	L"����� 17",
	L"����� 18",
	L"����� 19",
	L"����� 20",
	L"�� ������",	// on active duty
	L"�����",	// administering medical aid
	L"�������",	// getting medical aid
	L"���������",	// in a vehicle
	L"� ����",	// in transit - abbreviated form
	L"������",	// repairing
	L"��������",	// training themselves  
	L"���������",		// training a town to revolt 
	L"�����.��.", //training moving militia units		//M.Militia
	L"������",	// training a teammate
	L"������",	// being trained by someone else 
	L"����", // operating a strategic facility			//Staff
	L"�����", // Resting at a facility					//Rest
	L"�����",	// dead
	L"�������.",	// abbreviation for incapacitated
	L"� �����",	// Prisoner of war - captured
	L"���������",	// patient in a hospital 
	L"����",	// Vehicle is empty
};


STR16 pMilitiaString[] =
{
	L"���������", // the title of the militia box
	L"�����", //the number of unassigned militia troops
	L"������ ���������������� ���������, ����� ���� ��������� � ���� ������!",
	L"����� ������������ ��������� �� ������ ��������. ���������� �� �� ����� ������� ��������?", //Some militia were not assigned to a sector. Would you like to disband them?
};


STR16 pMilitiaButtonString[] =
{
	L"����", // auto place the militia troops for the player
	L"������", // done placing militia troops
	L"����������", // HEADROCK HAM 3.6: Disband militia	//Disband
};

STR16 pConditionStrings[] = 
{
	L"��������",	//the state of a soldier .. excellent health
	L"�������",	//good health
	L"�������",	//fair health
	L"�����",	//wounded health
	L"�����",	//tired
	L"������������", //bleeding to death
	L"��� ��������", //knocked out 
	L"�������",	//near death
	L"�����",	//dead
};

STR16 pEpcMenuStrings[] =
{
	L"���������", // set merc on active duty
	L"�������", // set as a patient to receive medical aid
	L"���������", // tell merc to enter vehicle
	L"��� �������", // let the escorted character go off on their own
	L"������", // close this menu
};


// look at pAssignmentString above for comments

STR16 pPersonnelAssignmentStrings[] =
{
	L"����� 1",
	L"����� 2",
	L"����� 3",
	L"����� 4",
	L"����� 5",
	L"����� 6",
	L"����� 7",
	L"����� 8",
	L"����� 9",
	L"����� 10",
	L"����� 11",
	L"����� 12",
	L"����� 13",
	L"����� 14",
	L"����� 15",
	L"����� 16",
	L"����� 17",
	L"����� 18",
	L"����� 19",
	L"����� 20",
	L"�� ������",
	L"�����",
	L"�������",
	L"���������",
	L"� ����",
	L"������",
	L"��������", 
	L"���������",
	L"��������� ��������� ������",	//Training Mobile Militia
	L"������",
	L"������",
	L"�������� � ����������",			//Facility Staff
	L"��������",		//Resting at Facility
	L"�����",
	L"�������.",
	L"� �����",
	L"���������", 
	L"����",	// Vehicle is empty
};


// refer to above for comments

STR16 pLongAssignmentStrings[] =
{
	L"����� 1",
	L"����� 2",
	L"����� 3",
	L"����� 4",
	L"����� 5",
	L"����� 6",
	L"����� 7",
	L"����� 8",
	L"����� 9",
	L"����� 10",
	L"����� 11",
	L"����� 12",
	L"����� 13",
	L"����� 14",
	L"����� 15",
	L"����� 16",
	L"����� 17",
	L"����� 18",
	L"����� 19",
	L"����� 20",
	L"�� ������",
	L"�����",
	L"�������",
	L"� ����������",
	L"� ����",
	L"�����������",
	L"������������", 
	L"��������� ���������",
	L"��������� ��������� ������",	//Train Mobiles
	L"���������",
	L"���������",
	L"�������� � ����������",		//Staff Facility
	L"�������� � ���������",		//Resting at Facility
	L"�����",
	L"�������������",
	L"� �����",
	L"� ���������", // patient in a hospital 
	L"��� ����������",	// Vehicle is empty
};


// the contract options

STR16 pContractStrings[] =
{
	L"��������� ���������:", 
	L"", // a blank line, required
	L"�������� �� 1 ����", // offer merc a one day contract extension
	L"�������� �� 7 ����", // 1 week
	L"�������� �� 14 ����", // 2 week
	L"�������", // end merc's contract
	L"������", // stop showing this menu
};

STR16 pPOWStrings[] =
{
	L"� �����",  //an acronym for Prisoner of War
	L"??",
};

STR16 pLongAttributeStrings[] =
{
    L"����", 
	L"��������",  
	L"�����������", 
	L"���������", 
	L"��������",
	L"��������",
	L"��������",
	L"���������",
	L"����������",
	L"�������",
};

STR16 pInvPanelTitleStrings[] =
{
	L"�����", // the armor rating of the merc
	L"���", // the weight the merc is carrying
	L"�����.", // the merc's camouflage rating
	L"��������:",
	L"�����:",
};

STR16 pShortAttributeStrings[] =
{
	L"���", // the abbreviated version of : agility
	L"���", // dexterity
	L"���", // strength
	L"���", // leadership
	L"���", // wisdom
	L"���", // experience level
	L"���", // marksmanship skill
	L"���", // explosive skill
	L"���", // mechanical skill
	L"���", // medical skill
};


STR16 pUpperLeftMapScreenStrings[] =
{
	L"����������", // the mercs current assignment 
	L"��������", // the contract info about the merc
	L"��������", // the health level of the current merc
	L"����.���", // the morale of the current merc
	L"����.",	// the condition of the current vehicle
	L"������",	// the fuel level of the current vehicle
};

STR16 pTrainingStrings[] =
{
	L"�������", // tell merc to train self 
    L"���������", // tell merc to train town 
	L"������", // tell merc to act as trainer
	L"������", // tell merc to be train by other 
};

STR16 pGuardMenuStrings[] =
{
	L"������� ����:", // the allowable rate of fire for a merc who is guarding
	L" ����������� �����", // the merc can be aggressive in their choice of fire rates
	L" ������ �������", // conserve ammo 
	L" ������������ �� ��������", // fire only when the merc needs to 
	L"������ ���������:", // other options available to merc
	L" ����� ���������", // merc can retreat
	L" ����� ������ �������",  // merc is allowed to seek cover
	L" ����� ������ �������", // merc can assist teammates
	L"������", // done with this menu
	L"������", // cancel this menu
};

// This string has the same comments as above, however the * denotes the option has been selected by the player

STR16 pOtherGuardMenuStrings[] =
{
	L"������� ����:",
	L" *����������� �����*",
	L" *������ �������*",
	L" *������������ �� ��������*",
	L"������ ���������:",
	L" *����� ���������*",
	L" *����� ������ �������*",
	L" *����� ������ �������*",
	L"������",
	L"������",
};

STR16 pAssignMenuStrings[] =
{
	L"�� ������", // merc is on active duty
	L"�����", // the merc is acting as a doctor
	L"�������", // the merc is receiving medical attention
	L"������", // the merc is in a vehicle
	L"������", // the merc is repairing items 
	L"��������", // the merc is training
	L"��������", // the merc is using/staffing a facility	//Facility
	L"������", // cancel this menu
};

//lal
STR16 pMilitiaControlMenuStrings[] =
{
	L"� �����", // set militia to aggresive
	L"������� �������", // set militia to stationary
	L"���������", // retreat militia
	L"�� ����", // retreat militia
	L"������", // retreat militia	
	L"� �������",
	L"��� � �����", 
	L"���� ������� �������",
	L"���� ���������",
	L"��� �� ����",
	L"���� ����������",
	L"���� ������",
	L"���� � �������",
	//L"���� ������ ��������",
	L"������", // cancel this menu
};

//STR16 pTalkToAllMenuStrings[] =
//{
//	L"� �����", // set militia to aggresive
//	L"������� �������", // set militia to stationary
//	L"���������", // retreat militia
//	L"�� ����", // retreat militia
//	L"������", // retreat militia		 
//	L"������", // cancel this menu
//};

STR16 pRemoveMercStrings[] =
{
	L"������ �����", // remove dead merc from current team
	L"������",
};

STR16 pAttributeMenuStrings[] =
{
	L"����",
	L"��������",
	L"�����������",
	L"��������",
	L"��������",
	L"��������",
	L"��������",
	L"���������",
	L"����������",
	L"������",
};

STR16 pTrainingMenuStrings[] =
{
 L"��������", // train yourself 
 L"���������", // train the town 
 L"�����. ������",		//Mobile Militia
 L"������", // train your teammates 
 L"������",  // be trained by an instructor 
 L"������", // cancel this menu
};


STR16 pSquadMenuStrings[] =
{
	L"�����  1",
	L"�����  2",
	L"�����  3",
	L"�����  4",
	L"�����  5",
	L"�����  6",
	L"�����  7",
	L"�����  8",
	L"�����  9",
	L"����� 10",
	L"����� 11",
	L"����� 12",
	L"����� 13",
	L"����� 14",
	L"����� 15",
	L"����� 16",
	L"����� 17",
	L"����� 18",
	L"����� 19",
	L"����� 20",
	L"������",
};

STR16 pPersonnelTitle[] =
{
	L"�������", // the title for the personnel screen/program application
};

STR16 pPersonnelScreenStrings[] =
{
	L"��������:",		// health of merc
	L"�����������:", 
	L"��������:",
	L"����:",
	L"���������:",
	L"���������:",
	L"����:",		// experience level
	L"��������:", 
	L"��������:",
	L"����������:",
	L"��������:",
	L"���. �������:",	// amount of medical deposit put down on the merc
	L"�� ����� ���������:",	// cost of current contract
	L"���� ������:",	// number of kills by merc
	L"����� �����:",	// number of assists on kills by merc
	L"������� �� ����:",	// daily cost of merc
	L"����� ���� �����:",	// total cost of merc
	L"��������:",		// cost of current contract
	L"� ��� �� ������:",	// total service rendered by merc
	L"������. ���������:",	// amount left on MERC merc to be paid
	L"������� ���������:",	// percentage of shots that hit target
	L"���:", 		// number of battles fought
	L"�������:",		// number of times merc has been wounded
	L"������:",
	L"��� �������",
	L"����������:", //Achievements
};

// SANDRO - helptexts for merc records
STR16 pPersonnelRecordsHelpTexts[] =
{
	L"�����: %d\n",
	L"������: %d\n",
	L"�������: %d\n",
	L"���������� �������: %d\n",
	L"��������: %d\n",
	L"������: %d\n", 
	L"������ ��������: %d\n",

	L"�����: %d\n",
	L"���������: %d\n",
	L"������: %d\n",

	L"�������� ����: %d\n",
	L"�������� �����: %d\n",
	L"������� ������: %d\n",
	L"������� �����: %d\n",
	L"������ �����: %d\n",
	L"������ ��������: %d\n",
	L"������� ���������: %d\n",

	L"������ ��������: %d\n",
	L"������ �������: %d\n",
	L"������� �����������: %d\n",
	L"���������� ��������: %d\n",
	L"��������� ����������������: %d\n",
	L"��������� �������: %d\n",
	L"����� ��������: %d\n",
	L"���������� �������������: %d\n",
	L"������ ����������: %d\n",
	L"�������: %d\n",
	L"��������� ������������: %d\n",
	L"�������� ���������: %d\n",
	L"������� �� ���������: %d\n",	//Ambushes Prevented
	L"������� ������� ���������: %d\n",

	L"����������� ��������: %d\n",
	L"��������: %d\n",
	L"���������� �����������: %d\n",
	L"��������� � ������: %d\n",
	L"���������� �����: %d ������\n",

	L"��������� ���: %d\n",
	L"������� ���: %d\n",
	L"����������� ������: %d\n",
	L"����������: %d\n",
	L"��������� ����������: %d\n",
	L"������ ���. ������������: %d\n",	//Surgeries Undergoed
	L"����� �� ������������: %d\n",	//Facility Accidents

	L"��������:",
	L"����������:",

	L"�� �����:",	//Attitudes For old traits display instead of "Character:"!
};


//These string correspond to enums used in by the SkillTrait enums in SoldierProfileType.h
STR16 gzMercSkillText[] = 
{
	L"��� ������",
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
	L"���������",
	L"������ ���������",
	L"�������� ������",
	L"�������", 
	L"��������",
	L"(�������)",
};

//////////////////////////////////////////////////////////
// SANDRO - added this
STR16 gzMercSkillTextNew[] = 
{
	// Major traits
	L"��� ������",	//No Skill
	L"����������",	//Auto Weapons
	L"�������",	//Heavy Weapons
	L"�������",	//Marksman
	L"�������",	//Hunter
	L"������",	//Gunslinger
	L"�����",	//Hand to Hand
	L"��������",	//Deputy
	L"�������-�����������",	//Technician
	L"�������",	//Paramedic
	// Minor traits
	L"������",	//Ambidextrous
	L"������ ������",	//Melee
	L"������ �� �������",	//Throwing
	L"������",	//Night Ops
	L"��������� ������",	//Stealthy
	L"���������",	//Athletics
	L"����������",	//Bodybuilding
	L"���������",	//Demolitions
	L"����������",	//Teaching
	L"���������",	//Scouting
	// second names for major skills
	L"���������",	//Machinegunner
	L"�����������",	//Bombardier
	L"�������",	//Sniper
	L"��������",	//Ranger
	L"�����������",	//Gunfighter
	L"������ ���������",	//Martial Arts
	L"��������",	//Squadleader
	L"�������",	//Engineer
	L"������",	//Doctor
	L"���...",
};
//////////////////////////////////////////////////////////


// This is pop up help text for the options that are available to the merc

STR16 pTacticalPopupButtonStrings[] =
{
	L"������/���� (|S)", 
	L"��������/������� ��� (|C)",
	L"������/������ (|R)",
	L"����/������ (|P)",
	L"������� (|L)",
	L"��������",
	L"����������",
	L"��������� (|C|t|r|l)",

	// Pop up door menu
	L"�������",
	L"������ �������", 
	L"������� ���������", 
	L"������� c����",
	L"�����������",
	L"��������",
	L"��������",
	L"������������ ����� ����������", 
	L"�������� �����",
	L"������ (|E|s|c)",
	L"�������",
};

// Door Traps. When we examine a door, it could have a particular trap on it. These are the traps.

STR16 pDoorTrapStrings[] =
{
	L"��� �������",
	L"�����-�������",
	L"��������������",
	L"������",
	L"������������",
};

// Contract Extension. These are used for the contract extension with AIM mercenaries.

STR16 pContractExtendStrings[] =
{
	L"1 ����",
	L"7 ����",
	L"14 ����",
};

// On the map screen, there are four columns. This text is popup help text that identifies the individual columns.

STR16 pMapScreenMouseRegionHelpText[] =
{
	L"������� ��������",
	L"������ ������",
	L"��������� ���� ��������",
	L"�������� �������� (|C)",
	L"��������������� �����",
	L"�����", 
};

// volumes of noises 

STR16 pNoiseVolStr[] =
{
	L"�����",
	L"������",
	L"�������",
	L"����� �������",
};

// types of noises 

STR16 pNoiseTypeStr[] = // OBSOLETE
{
	L"����������",
	L"���� �����",
	L"�����",
	L"�������",
	L"����",
	L"�������",
	L"�����",
	L"����",
	L"����",
	L"����",
	L"����",
	L"������",
};

// Directions that are used to report noises

STR16 pDirectionStr[] = 
{
	L"c ������-�������",
	L"c �������",
	L"c ���-�������",
	L"c ���",
	L"c ���-������",
	L"c ������",
	L"c ������-������",
	L"c ������",
};

// These are the different terrain types. 

STR16 pLandTypeStrings[] =
{
	L"�����",
	L"������",
	L"�������",
	L"�������",
	L"������",
	L"���",	 
	L"������",
	L"����",	
	L"�����",
	L"�����������",
	L"����",	//river from north to south
	L"����",	//river from east to west
	L"����� ������",
	//NONE of the following are used for directional travel, just for the sector description.
	L"�������",
	L"�����",
	L"����, ������",
	L"����, ������",
	L"�����, ������",
	L"�������, ������",
	L"����, ������",
	L"���������",
	L"����, ������",
	L"�����, ������",
	L"�������, ������",
	L"������, ������",
	L"������, ���", 
	L"�������, ���",
	L"�������, ���",
	L"������, ���",
	
	//These are descriptions for special sectors
	L"��������� �������",
	L"�������� ��������",
	L"�������� ������",
	L"���� ���",
	L"������� ����������",	//The rebel base underground in sector A10
	L"������� �����",	//The basement of the Tixa Prison (J9)
	L"������ ������",	//Any mine sector with creatures in it
	L"������� ����",	//The basement of Orta (K4)
	L"�������",		//The tunnel access from the maze garden in Meduna 
	//leading to the secret shelter underneath the palace
	L"�������",		//The shelter underneath the queen's palace
	L"",			//Unused
};

STR16 gpStrategicString[] =
{
	L"",	//Unused
	L"%s ������� � ������� %c%d, � ������ ����� ��� �� �������.",	//STR_DETECTED_SINGULAR
	L"%s ������� � ������� %c%d, � ��������� ������ ��� �� �������.",	//STR_DETECTED_PLURAL
	L"������� ��������� �������� ���������?",													//STR_COORDINATE

	//Dialog strings for enemies.

	L"���� ���������� ��� �������.",			//STR_ENEMY_SURRENDER_OFFER
	L"���������� ��� �������� ����� ������ � ����.",	//STR_ENEMY_CAPTURED

	//The text that goes on the autoresolve buttons							

	L"���������", 		//The retreat button		//STR_AR_RETREAT_BUTTON
	L"OK",		//The done button			//STR_AR_DONE_BUTTON

	//The headers are for the autoresolve type (MUST BE UPPERCASE)

	L"�������",								//STR_AR_DEFEND_HEADER
	L"�����",								//STR_AR_ATTACK_HEADER
	L"�������",								//STR_AR_ENCOUNTER_HEADER
	L"������",		//The Sector A9 part of the header		//STR_AR_SECTOR_HEADER

	//The battle ending conditions						

	L"������!",					//STR_AR_OVER_VICTORY
	L"���������!",					//STR_AR_OVER_DEFEAT
	L"������!",					//STR_AR_OVER_SURRENDERED
	L"������!",					//STR_AR_OVER_CAPTURED
	L"��������!",					//STR_AR_OVER_RETREATED

	//These are the labels for the different types of enemies we fight in autoresolve.

	L"���������",					//STR_AR_MILITIA_NAME,
	L"�����",					//STR_AR_ELITE_NAME,
	L"������",					//STR_AR_TROOP_NAME,
	L"�������",					//STR_AR_ADMINISTRATOR_NAME,
	L"�������",					//STR_AR_CREATURE_NAME,

	//Label for the length of time the battle took

	L"������ �������",				//STR_AR_TIME_ELAPSED,

	//Labels for status of merc if retreating.  (UPPERCASE)			

	L"��������",					//STR_AR_MERC_RETREATED,
	L"���������",					//STR_AR_MERC_RETREATING,
	L"���������",					//STR_AR_MERC_RETREAT,

	//PRE BATTLE INTERFACE STRINGS 
	//Goes on the three buttons in the prebattle interface.  The Auto resolve button represents
	//a system that automatically resolves the combat for the player without having to do anything.
	//These strings must be short (two lines -- 6-8 chars per line)

	L"���� �����",					//STR_PB_AUTORESOLVE_BTN,
	L"������� � ������",				//STR_PB_GOTOSECTOR_BTN,
	L"���� �� �������",				//STR_PB_RETREATMERCS_BTN,

	//The different headers(titles) for the prebattle interface.
	L"������� � ������",				//STR_PB_ENEMYENCOUNTER_HEADER,
	L"����������� �����",				//STR_PB_ENEMYINVASION_HEADER, // 30
	L"��������� ������",				//STR_PB_ENEMYAMBUSH_HEADER
	L"��������� ������",				//STR_PB_ENTERINGENEMYSECTOR_HEADER
	L"����� ������",				//STR_PB_CREATUREATTACK_HEADER
	L"������ �����-�����",				//STR_PB_BLOODCATAMBUSH_HEADER
	L"���� � �������� �����-�����",			//STR_PB_ENTERINGBLOODCATLAIR_HEADER

	//Various single words for direct translation.  The Civilians represent the civilian
	//militia occupying the sector being attacked.  Limited to 9-10 chars

	L"�������",
	L"����",
	L"��������",
	L"���������",
	L"��������",
	L"�����-������",
	L"������",
	L"���",			//If there are no uninvolved mercs in this fight.
	L"�/�",			//Acronym of Not Applicable
	L"�",			//One letter abbreviation of day
	L"�",			//One letter abbreviation of hour

	//TACTICAL PLACEMENT USER INTERFACE STRINGS
	//The four buttons 

	L"������",
	L"��������",
	L"�������",
	L"B a�a��!",

	//The help text for the four buttons.  Use \n to denote new line (just like enter).

	L"������� ��� ������� ������ \n� ��������� ������ ���������� ��. (|C)", 
	L"��� ������ ������� ������������ \n������ ��������� �������. (|S)",
	L"��������� ������� �����, \n��� ������������� ����� ������. (|G)",
	L"������� ��� ������, ����� ��������� \n����� ������� ��� ������. (|�|�|�|�)",
	L"�� ������ ���������� ���� ����� ������ \n�� ����, ��� ������ ���.",

	//Various strings (translate word for word)

	L"������",
	L"����� ����� �����",

	//Strings used for various popup message boxes.  Can be as long as desired.

	L"�����������. ����� ����������. ���������� ������ ������ �����.",
	L"��������� ������ � ������������ ����� �����.",

	//This message is for mercs arriving in sectors.  Ex:  Red has arrived in sector A9.
	//Don't uppercase first character, or add spaces on either end.

	L"������(�) � ������", 

	//These entries are for button popup help text for the prebattle interface.  All popup help
	//text supports the use of \n to denote new line.  Do not use spaces before or after the \n.
	L"������������� ������������ ���\n��� �������� �����. (|A)",
	L"������ �������� �������\n�� ����� ���������.",
	L"����� � ������, ����� ��������� �����. (|E)",
	L"��������� ������� � ���������� ������. (|R)",				//singular version
	L"���� ������� ��������� � ���������� ������. (|R)", //multiple groups with same previous sector

	//various popup messages for battle conditions.  

	//%c%d is the sector -- ex:  A9
	L"����� ��������� ����� ���������� � ������� %c%d.",
	//%c%d ������ -- ����:  A9
	L"����� ��������� ����� ���������� � ������� %c%d.",
	//1st %d refers to the number of civilians eaten by monsters,  %c%d is the sector -- ex:  A9
	//Note:  the minimum number of civilians eaten will be two.
	L"����� ����� %d ����������� �� ����� ����� ������� %s.",
	//%s is the sector location -- ex:  A9: Omerta
	L"����� ��������� ����� ��������� � ������� %s. �� ���� �� ����� ������ �� � ��������� ���������!",
	//%s is the sector location -- ex:  A9: Omerta
	L"����� ��������� ����� ��������� � ������� %s. �� ���� �� ����� ������ �� � ��������� ���������!",

};

STR16 gpGameClockString[] = 
{
	//This is the day represented in the game clock.  Must be very short, 4 characters max.
	L"����",	
};

//When the merc finds a key, they can get a description of it which 
//tells them where and when they found it.
STR16 sKeyDescriptionStrings[2] =
{
	L"������� � �������:",
	L"������� �� ����:",
};

//The headers used to describe various weapon statistics.

CHAR16		gWeaponStatsDesc[][ 17 ] =
{
	// HEADROCK: Changed this for Extended Description project
	L"���������:",
	L"���:", 
	L"����� ��",	
	L"����:",		// Range
	L"����:",		// Damage
	L"�����:", 		// Number of bullets left in a magazine
	L"��:",			// abbreviation for Action Points
	L"=",
	L"=",
						//Lal: additional strings for tooltips
	L"��������:",	//9
	L"����:",		//10	
	L"����:", 	//11
	L"���:",		//12
	L"���������:",//13
	// HEADROCK: Added new strings for extended description ** REDUNDANT **
	L"�������:",	//14	//Attachments
	L"AUTO/5:",		//15
	L"�������� ������:",		//16	//Remaining ammo

	L"�������������:",	//17 //WarmSteel - So we can also display default attachments

};

// HEADROCK: Several arrays of tooltip text for new Extended Description Box
// Please note, several of these are artificially inflated to 19 entries to help fix a complication with
// changing item type while watching its description box
STR16		gzWeaponStatsFasthelp[ 32 ] =
{
	L"��������",							//Accuracy
	L"����",							//Damage
	L"��������������",						//Range
	L"������ ������������",	//Aiming Levels
	L"����������� ���������� ��������",				//Aiming Modifier
	L"������ ��������� ���������\n����� ������������",		//Average Best Laser Range
	L"�������������",						//Flash Suppression
	L"�������� (��� ������, ��� �����)",				//Loudness (Lower is better)
	L"���������",							//Reliability
	L"�������� �������",						//Repair Ease
	L"����������� ����������� ���������",				//Min. Range for Aiming Bonus
	L"����������� ��������",					//To-Hit Modifier
	L"",	//12
	L"�� �� �������",						//APs to ready
	L"�� �� 1 �������",						//APs to fire Single
	L"�� �� ����� � ��������",					//APs to fire Burst
	L"�� �� ����� ��������",					//APs to fire Auto
	L"�� �� ������ ��������",					//APs to Reload
	L"�� �� ������� �������",					//APs to Reload Manually
	L"",	//19
	L"����� �� �����\n(��� �������� ���)",				//Bipod Modifier
	L"��������� � ��������������\n������ �� 5 ��",			//Autofire shots per 5 AP
	L"����� �� ������ ���\n�������� ��������\n(c ��������/���) (��� ������, ��� �����)",	//Burst/Auto Penalty	//22
	L"�� �� ������",						//APs to Throw
	L"�� �� �������",						//APs to Launch
	L"�� �� ���� �����",						//APs to Stab
	L"�� �������� ����������!",					//No Single Shot!
	L"��� ������� �������!",					//No Burst Mode!
	L"��� ��������������� ������!",					//No Auto Mode!
	L"�� �� ����",							//APs to Bash
	L"����� �� ������ ��� \n�������� �������� \n(��� ������, ��� �����)",	//Autofire Penalty (Lower is better)
    L"����� �� ������ ���\n�������� �������� c ��������\n(��� ������, ��� �����)",		//Burst Penalty (Lower is better)
};

STR16		gzWeaponStatsFasthelpTactical[ 32 ] =
{
	L"��������",							//Accuracy
	L"����",							//Damage
	L"��������������",						//Range
	L"������ ������������",
	L"����������� ���������� ��������",				//Aiming Modifier
	L"������ ��������� ���������\n����� ������������",		//Average Best Laser Range
	L"�������������",						//Flash Suppression
	L"�������� (��� ������, ��� �����)",				//Loudness (Lower is better)
	L"���������",							//Reliability
	L"�������� �������",						//Repair Ease
	L"����������� ����������� ���������",				//Min. Range for Aiming Bonus
	L"����������� ��������",					//To-Hit Modifier
	L"",	//12
	L"�� �� �������",						//APs to ready
	L"�� �� 1 �������",						//APs to fire Single
	L"�� �� ����� � ��������",					//APs to fire Burst
	L"�� �� ����� ��������",					//APs to fire Auto
	L"�� �� ������ ��������",					//APs to Reload
	L"�� �� ������� �������",					//APs to Reload Manually
	L"����� �� ������ ���\n�������� �������� c ��������\n(��� ������, ��� �����)",	//19		//Burst Penalty (Lower is better)
	L"����� �� �����\n(��� �������� ���)",				//Bipod Modifier
	L"��������� � ��������������\n������ �� 5 ��",			//Autofire shots per 5 AP
	L"����� �� ������ ��� \n�������� �������� \n(��� ������, ��� �����)",	//Autofire Penalty (Lower is better)
	L"����� �� ������ ���\n�������� ��������\n(c ��������/���) (��� ������, ��� �����)",	//Burst/Auto Penalty	//23
	L"�� �� ������",						//APs to Throw
	L"�� �� �������",						//APs to Launch
	L"�� �� ���� �����",						//APs to Stab
	L"�� �������� ����������!",					//No Single Shot!
	L"��� ������� �������!",					//No Burst Mode!
	L"��� ��������������� ������!",					//No Auto Mode!
	L"�� �� ����",							//APs to Bash
    L"",
};

STR16		gzAmmoStatsFasthelp[ 20 ] =
{
	L"����������� ������\n(��� ������, ��� �����)",		//Armor Penetration (Lower is better)
	L"���������� ������\n(��� ����, ��� �����)",		//Bullet Tumble (Higher is better)
	L"��������� ������\n(��� ����, ��� �����)",		//Pre-impact Explosion (Higher is better)
	L"������������ ������",					//Tracer Effect
	L"���������������",					//Anti-Tank
	L"��������� �����",					//Lockbuster
	L"������������ ������� �����",				//Ignores Armor
	L"��������� ������",					//Acidic
	L"����������� ��������������",				//Range Modifier
	L"����������� �����",					//Damage Modifier
	L"����������� ��������",				//To-Hit Modifier
	L"����������� ������\n�� ������ ��� ��������\n� �������������� ������\n(��� ������, ��� �����)",	//Autofire Penalty Modifier (Higher is better)
	L"����������� ������ ��� ������� \n(��� ������, ��� �����)",	//Burst Penalty Modifier (Higher is better)
	L"����������� ���������",				//Reliability Modifier
	L"����������� ��������\n(��� ������, ��� �����)",	//Loudness Modifier (Lower is better)
	L"",
	L"",
	L"",
	L"",
	L"",
};

STR16		gzArmorStatsFasthelp[ 20 ] =
{
	L"������",						//Protection
	L"�������� ����\n(��� ������, ��� �����)",		//Coverage (Higher is better)
	L"��������������\n(��� ������, ��� �����)",		//Degrade Rate (Lower is better)
	L"������� �� �����������",				//AP Modifier
	L"����������� ��������",				//To-Hit Modifier
	L"�������� '���'",
	L"�������� '�����'",
	L"�������� '�������'",
	L"�������� '����'",
	L"����������� ����������",				//Stealth Modifier
	L"����������� ���������\n���������",			//Vision Range Modifier
	L"����������� ���������\n��������� ���",		//Day Vision Range Modifier
	L"����������� ���������\n��������� �����",		//Night Vision Range Modifier
	L"����������� ���������\n��������� ��� ����� ���������",//Bright Light Vision Range Modifier
	L"����������� ���������\n��������� � ������",		//Cave Vision Range Modifier
	L"������� ������� ������",				//Tunnel Vision Percentage
	L"����������� ���������\n����������",			//Hearing Range Modifier
	L"",
	L"",
	L"",
};

STR16		gzExplosiveStatsFasthelp[ 20 ] =
{
	L"����",						//Damage
	L"���������", //�������� �������			//Stun Damage
	L"���� ���������� ������\n(��� ������, ��� �����)",	//Blast Loudness (Lower is better)
	L"���������������!!!\n(��� ������, ��� �����)",		//Volatility!!! (Lower is better)
	L"���� �������� ������",				//Blast Radius
	L"��������� ���� ��������",				//Effect Start Radius
	L"�������� ���� ��������",				//Effect Final Radius
	L"����� ��������",					//Effect Duration
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
};

STR16		gzMiscItemStatsFasthelp[ 34 ] =
{
	L"����������� ������� ��������\n(��� ������, ��� �����)",		//Item Size Modifier (Lower is better)
	L"����������� ���������",						//Reliability Modifier
	L"����������� ��������\n(��� ������, ��� �����)",			//Loudness Modifier (Lower is better)
	L"�������� �������",							//Hides Muzzle Flash
	L"����������� �����",							//Bipod Modifier
	L"����������� ��������������",						//Range Modifier
	L"����������� ��������",						//To-Hit Modifier
	L"������ ��������� ���������\n����� ������������",			//Best Laser Range
	L"����������� ������� ������",						//Aiming Bonus Modifier
	L"����������� ������� � ��������",					//Burst Size Modifier
	L"����������� ������ �� ������\n��� �������� c ��������\n(��� ������, ��� �����)",	//Burst Penalty Modifier (Higher is better)
	L"����������� ������ �� ������\n��� �������� ��������\n(��� ������, ��� �����)",	//Auto-Fire Penalty Modifier (Higher is better)
	L"����������� ��",							//AP Modifier
	L"����������� ��\n�� ������� � ��������\n(��� ������, ��� �����)",	//AP to Burst Modifier (Lower is better)
	L"����������� ��\n�� ������� ��� �������\n(��� ������, ��� �����)",	//AP to Auto-Fire Modifier (Lower is better)
	L"����������� �� �� �������\n(��� ������, ��� �����)",			//AP to Ready Modifier (Lower is better)
	L"����������� ��\n�� ������ ��������\n(��� ������, ��� �����)",		//AP to Reload Modifier (Lower is better)
	L"����������� ������ ��������",						//Magazine Size Modifier
	L"����������� �� �� �������\n(��� ������, ��� �����)",			//AP to Attack Modifier (Lower is better)
	L"����������� �����",							//Damage Modifier
	L"����������� �����\n� ������� ���", 					//Melee Damage Modifier
	L"�������� '���'",
	L"�������� '�����'",
	L"�������� '�������'",
	L"�������� '����'",
	L"����������� ����������", // 25
	L"����������� ���������\n����������",
	L"����������� ���������\n���������",
	L"����������� ���������\n��������� ���",
	L"����������� ���������\n��������� �����",
	L"����������� ���������\n��������� ��� ����� ���������", //30
	L"����������� ���������\n��������� � ������",
	L"������� ������� ������\n(��� ������, ��� �����)",		//Tunnel Vision Percentage (Lower is better)
	L"����������� �����������\n��������� ������",				//Minimum Range for Aiming Bonus
};

// HEADROCK: End new tooltip text

// HEADROCK HAM 4: New condition-based text similar to JA1.
STR16 gConditionDesc[] =
{
	L"� ",	//In 
	L"���������",
	L"��������",
	L"�������",	//GOOD
	L"����������",	//FAIR
	L"������",	//POOR
	L"�������",	//BAD
	L"���������",
	L" ���������."
};

//The headers used for the merc's money.

CHAR16 gMoneyStatsDesc[][ 13 ] =
{
	L"���-��",
	L"��������:", //this is the overall balance
	L"���-��",
	L"��������:", //the amount he wants to separate from the overall balance to get two piles of money

	L"�������",
	L"������",
	L"���������",
	L"�����",
};

//The health of various creatures, enemies, characters in the game. The numbers following each are for comment
//only, but represent the precentage of points remaining. 

CHAR16 zHealthStr[][13] =
{
	L"�������",		//	>= 0
	L"��������", 		//	>= 15
	L"����",		//	>= 30
	L"�����",    	//	>= 45
	L"������",    	//	>= 60
	L"�����",     	// 	>= 75
	L"�������",		// 	>= 90
};

STR16	gzMoneyAmounts[6] = 
{ 
	L"1000$",
	L"100$",
	L"10$",
	L"�����",
	L"���������",
	L"�����",
};

// short words meaning "Advantages" for "Pros" and "Disadvantages" for "Cons."
CHAR16		gzProsLabel[10] = 
{
	L"+",
};

CHAR16		gzConsLabel[10] = 
{
	L"-",
};

//Conversation options a player has when encountering an NPC
CHAR16 zTalkMenuStrings[6][ SMALL_STRING_LENGTH ] =
{
	L"���������", 	//meaning "Repeat yourself"
	L"������������",		//approach in a friendly
	L"��������",		//approach directly - let's get down to business
	L"��������",		//approach threateningly - talk now, or I'll blow your face off
	L"����",		
	L"������",
};

//Some NPCs buy, sell or repair items. These different options are available for those NPCs as well.
CHAR16 zDealerStrings[4][ SMALL_STRING_LENGTH ]=
{
	L"������/�������",
	L"������",
	L"�������",
	L"�������������",
};

CHAR16 zDialogActions[1][ SMALL_STRING_LENGTH ] = 
{
	L"�� �������",
};


//These are vehicles in the game.

STR16 pVehicleStrings[] =
{
 L"���������",
 L"������", // a hummer jeep/truck -- military vehicle
 L"������",
 L"����",
 L"����",
 L"��������",
};

STR16 pShortVehicleStrings[] =
{
	L"������",
	L"������",			// the HMVV
	L"������",
	L"����",
	L"����",
	L"����.", 				// the helicopter
};

STR16	zVehicleName[] =
{
	L"���������",
	L"������",		//a military jeep. This is a brand name.
	L"������",			// Ice cream truck
	L"����",
	L"����",
	L"��������", 		//an abbreviation for Helicopter
};


//These are messages Used in the Tactical Screen

CHAR16 TacticalStr[][ MED_STRING_LENGTH ] =
{
	L"��������� ����",
	L"������� ������ ������?",
	
	// CAMFIELD NUKE THIS and add quote #66.
	
	L"%s ��������, ��� ��������� ���� ����������� � �������.",
	
	// The %s is a string from pDoorTrapStrings
	
	L"����� (%s).",
	L"��� ��� �����.",
	L"�����!",
	L"������.",
	L"�����!",
	L"������",
	L"�� ����� ��� �������.",
	L"�����!",
	// The %s is a merc name
	L"� %s ��� ����������� �����",
	L"������� �����������",
	L"�� ����� �� ������� �������.",
	L"�������",
	L"�����",
	L"� ��������",
	L"��������",
	L"����������",
	L"��������",
	L"��� ���� ������. ������?",
	L"��������� �������?",
	L"����...",
	L"����...",
	L"���...",

	// In the next 2 strings, %s is an item name
	
	L"%s �������(�) �� �����.",
	L"%s �����(�) %s.",

	// In the next 2 strings, %s is a name

	L"%s: �������� ������.",
	L"%s: ��� ������ %d.",
	L"���������� ������� ���������������:",  	//in this case, frequency refers to a radio signal
	L"���������� ����� �� ������:",	//how much time, in turns, until the bomb blows
	L"�������� ������� ��������������� �� ������:", 	//in this case, frequency refers to a radio signal
	L"����������� �������?",
	L"������ ����� ����?",
	L"��������� ����� ����� ����?",
	L"����������� ���",

	// In the next string, %s is a name. Stance refers to way they are standing.

	L"�� ������������� ������ ��������� %s?",
	L"���, � ������ ���� �� ����� �������� ���������.",
	L"����� �� ����� ������ ���������.",

	// In the next 3 strings, %s is a name

	L"%s �� ����� �������� ��������� �����.",
	L"%s �� ����� �������� ������ ������.",
	L"%s �� ��������� � ����������� ������.",
	L"���� ���� ������.",
	L"� ��� ��� ������ �������, ���� ���.",	//there's no room for a recruit on the player's team

	// In the next string, %s is a name

	L"%s �����(�).",

	// Here %s is a name and %d is a number

	L"%s ������ �������� $%d.",

	// In the next string, %s is a name

	L"����������� %s?",

	// In the next string, the first %s is a name and the second %s is an amount of money (including $ sign)

	L"������ %s �� %s � ����?",

	// This line is used repeatedly to ask player if they wish to participate in a boxing match. 

	L"������ ����������� � ��������?",

	// In the next string, the first %s is an item name and the 
	// second %s is an amount of money (including $ sign)

	L"������ %s �� %s?",

	// In the next string, %s is a name

	L"%s �������������� ������� %d.",

	// These messages are displayed during play to alert the player to a particular situation

	L"�����",					//weapon is jammed.
	L"������ ����� ������� %s �������.",		//Robot is out of ammo
	L"������� ���� �� ���������.",		//Merc can't throw to the destination he selected

	// These are different buttons that the player can turn on and off.

	L"����� ���������� (|Z)",
	L"����� (|M)",
	L"��������� ��� (|D)",
	L"��������",
	L"�������",
	L"��������� (|P|g|U|p)",
	L"����� ������ (|T|a|b)",
	L"���������/��������� (|J)",
	L"��������/���� (|P|g|D|n)",
	L"��������� (|C|t|r|l)",
	L"���������� ����",
	L"��������� ���� (|�|p|o|�|e|�)",
	L"��������� (|O)",
	L"����� ������� (|B)",
	L"��������/����������� (|L)",
	L"��������: %d/%d\n�������: %d/%d\n������ ���: %s",
	L"�� �?",					//this means "what?"
	L"�������.",					// an abbrieviation for "Continued"
	L"%s ����� ��������.",
	L"%s ����� �������.",
	L"���������: %d/%d\n�������: %d/%d",
	L"����� �� ������",
	L"������� ����� (|S|h|i|f|t |�|p|�|�|e|�)",
	L"�����",
	L"�/�",						//this is an acronym for "Not Applicable."
	L"���������� ���",
	L"��������� ������",
	L"��������������� �����",
	L"������������ ����������",
	L"��������������� ��������",
	L"(�����)",
	L"(�����������)",
	L"(����)",
	L"��������� %s.",	// The %s here is a string from pDoorTrapStrings  ASSUME all traps are female gender
	L"%s ������(�).",
	L"%s: ��������(�) ��� ���� ��������.",
	L"%s ������ �� ����� �����������.",
	L"%s ���������(�).",
	L"%s: ����������� �����.",
	L"���� � �������!",
	L"������ � ���� ������ ���.",
	L"������������ ����� ��������.",
	L"������� �� ������ ������ �� ��������� ����� ���������� �������.",
	L"��������� ������� ���������� �������!",
	L"������",
	L"�������",
	L"���������",
	L"������",
	L"����� �� �������",
	L"��",
	L"������",
	L"��������� ����",
	L"��� ����� ������",
	L"���� � ������",
	L"���� �� �����",
	L"���� ������ ������ �������� ������.",
	L"%s ������� ������.",
	L"������ ����� ��������",
	L"�������� ����� ��������",
	L"������",				//Crow, as in the large black bird
	L"���",
	L"������",
	L"����",
	L"����",
	L"���������� �������� ��, ��� ��� ����� �����?",
	L"����������� ���������� ������� ��������.",
	L"������������ ��������� �������. ������ �������������.",
	L"���� ���������",
	L"���� ������������",
	L"��������/����� ������",		// Help text over the $ button on the Single Merc Panel 
	L"����� �� ��������� � ����������� ������.",
	L"�����",								// Short form of JAMMED, for small inv slots
	L"���� ������������� ����������.",					// used ( now ) for when we click on a cliff
	L"���� ����������. ������ ���������� ������� � ���� ���������?",
	L"������� ������������ ���������.",
	// In the following message, '%s' would be replaced with a quantity of money (e.g. $200)
	L"�� �������� ��������� %s?",
	L"������� ���������� �������?",
	L"����������� ����� ����� �� �������?",
	L"������ ������",
	L"� �������������� ����� ������� ������.",
	L"�������� ��������?",
	L"�� ��������� ���������� ���������.",
	L"������",
	L"������ ����� ������ ������ ����� ���������.",
	L"�� � ���� �� ��������� ��� �������",
	L"���� ��� %s ������������",
	L"���� �����, ����������� ������ ��������, ������� ����� � �����!",
	L"����� ���������.",
	L"����� ��������.",
	L"���-�� � ������ ������� �������� ������� ��� �����.",
	L"���������: %d/%d\n�������: %d/%d",
	L"%s �� ����� %s.",  // Cannot see person trying to talk to
	L"������� �����",
	L"�� �� ������ ��������� ��� ���� ������, ��������������� ��� ���������� �����.",
};

//Varying helptext explains (for the "Go to Sector/Map" checkbox) what will happen given different circumstances in the "exiting sector" interface.
STR16 pExitingSectorHelpText[] =
{
	//Helptext for the "Go to Sector" checkbox button, that explains what will happen when the box is checked.
	L"���� �������, �� ����� ��������� ������� ����� ����� �� ���������.",
	L"���� �������, �� �� ������������� �������� �� ����� �����,\n��� ��� ����������� ������ ��������� �����.",

	//If you attempt to leave a sector when you have multiple squads in a hostile sector.
	L"���� ������ ����������� ������, � �� �� ������ ����� ������.\n�� ������ ����������� � ����, ������ ��� ������� � ����� ������ ������.",

	//Because you only have one squad in the sector, and the "move all" option is checked, the "go to sector" option is locked to on. 
	//The helptext explains why it is locked.
	L"��� ������ ���������� �������� ������� ���� ������,\n����� ����� �������� �������� ������.",
	L"������ ���������� ��������� �� ����� �������,\n�� ������������� �������� �� ����� �����,\n��� ��� �� ����������� ����������� ��������� �����.",

	//If an EPC is the selected merc, it won't allow the merc to leave alone as the merc is being escorted.  The "single" button is disabled.
	L"%s ��������� � ������������� ����� ��������� � �� ����� � �������� �������� ������.",

	//If only one conscious merc is left and is selected, and there are EPCs in the squad, the merc will be prohibited from leaving alone.
	//There are several strings depending on the gender of the merc and how many EPCs are in the squad.
	//DO NOT USE THE NEWLINE HERE AS IT IS USED FOR BOTH HELPTEXT AND SCREEN MESSAGES!
	L"%s �� ����� �������� ������ ����, ��� ��� �� ������������ %s.", //male singular
	L"%s �� ����� �������� ������ ����, ��� ��� ��� ������������ %s.", //female singular
	L"%s �� ����� �������� ������ ����, ��� ��� �� ������������ ������ �� ���������� �������.", //male plural
	L"%s �� ����� �������� ������ ����, ��� ��� ��� ������������ ������ �� ���������� �������.", //female plural

	//If one or more of your mercs in the selected squad aren't in range of the traversal area, then the  "move all" option is disabled,
	//and this helptext explains why.
	L"��� ���� �������� ������ ���� � ������,\n����� ����� ���� ����������� � ����� ����������.",

	L"", //UNUSED

	//Standard helptext for single movement.  Explains what will happen (splitting the squad)
	L"���� �������, �� %s ���������� � ��������\n� ������������� ����� ��������� � ��������� �����.",

	//Standard helptext for all movement.  Explains what will happen (moving the squad)
	L"���� �������, ������ ����� ����������\n� ����� ����������, ������� ���� ������.",

	//This strings is used BEFORE the "exiting sector" interface is created.  If you have an EPC selected and you attempt to tactically
	//traverse the EPC while the escorting mercs aren't near enough (or dead, dying, or unconscious), this message will appear and the
	//"exiting sector" interface will not appear.  This is just like the situation where
	//This string is special, as it is not used as helptext.  Do not use the special newline character (\n) for this string.
	L"%s �������������� ������ ���������� � �� ����� �������� ���� ������ � ��������. ��������� �������� ������ ���� �����, ������ ��� �� ������� �������� ������.",
};



STR16 pRepairStrings[] = 
{
	L"��������", 		// tell merc to repair items in inventory
	L"���� ���", 		// tell merc to repair SAM site - SAM is an acronym for Surface to Air Missile
	L"������", 		// cancel this menu
	L"�����", 		// repair the robot
};


// NOTE: combine prestatbuildstring with statgain to get a line like the example below.
// "John has gained 3 points of marksmanship skill."

STR16 sPreStatBuildString[] =
{
	L"������", 			// the merc has lost a statistic
	L"��������", 		// the merc has gained a statistic
	L"�������",	// singular
	L"������",	// plural
	L"�������",	// singular
	L"������",	// plural
};

STR16 sStatGainStrings[] =
{
	L"��������.",
	L"�����������.",
	L"��������.",
	L"����������.",
	L"��������.",
	L"��������� ����.",
	L"��������.",
	L"��������.",
	L"�����.",
	L"����.",
	L"���������.",
};


STR16 pHelicopterEtaStrings[] =
{
	L"����� ���������:", 			// total distance for helicopter to travel
	L"���������:  ", 			// distance to travel to destination
	L"������:", 			// distance to return from destination to airport
	L"�����:", 		// total cost of trip by helicopter
	L"���:", 			// ETA is an acronym for "estimated time of arrival" 
	L"� ��������� ����������� �������. �������� ��������� ������� �� ��������� ����������!",	// warning that the sector the helicopter is going to use for refueling is under enemy control -> 
  L"���������:",
  L"������� �������� ��� ����� �������?",
  L"��������",
  L"�������",
};

STR16 sMapLevelString[] =
{
	L"����������:", 			// what level below the ground is the player viewing in mapscreen
};

STR16 gsLoyalString[] =
{
	L"����������",	// the loyalty rating of a town ie : Loyal 53%
};


// error message for when player is trying to give a merc a travel order while he's underground.

STR16 gsUndergroundString[] =
{
	L"�� ����� ����� �� ���� � �����������.", 
};

STR16 gsTimeStrings[] =
{
	L"�",				// hours abbreviation
	L"�",				// minutes abbreviation
	L"�",				// seconds abbreviation
	L"�",				// days abbreviation
};

// text for the various facilities in the sector

STR16 sFacilitiesStrings[] =
{
	L"���",	//������ ������� �������
	L"���������",
	L"�����",	//Factory
	L"������",
	L"������� ����",
	L"��������",
	L"����������",		// a field for soldiers to practise their shooting skills
};

// text for inventory pop up button

STR16 pMapPopUpInventoryText[] =
{
	L"���������",
	L"�����",
};

// town strings

STR16 pwTownInfoStrings[] =
{
	L"������",					// 0 // size of the town in sectors
	L"", 						// blank line, required
	L"��������", 					// how much of town is controlled
	L"���", 					// none of this town
	L"����� ������", 				// mine associated with this town
	L"����������",					// 5 // the loyalty level of this town
	L"������", 					// the forces in the town trained by the player
	L"",
	L"������ �������", 				// main facilities in this town
	L"�������", 					// the training level of civilians in this town
	L"���������� ���������",				// 10 // state of civilian training in town
	L"���������", 					// the state of the trained civilians in the town
	L"������� ��������� �����",			// HEADROCK HAM 3.6: The stat of Mobile militia training in town	//Mobile Training
};

// Mine strings

STR16 pwMineStrings[] =
{
	L"�����",						// 0
	L"�������",
	L"������",
	L"������� ���������",
	L"���������������� �����������",
	L"���������",				// 5
	L"�������",
	L"����������",
	L"���� ������",
	L"������",
	L"������� ������",
	L"��� ����",				// 10
	L"��������������",
	L"����������",
//	L"�����.�������",
};

// blank sector strings

STR16 pwMiscSectorStrings[] =
{
	L"��������� ����",
	L"������",
	L"���������� ���������",
	L"����������",
	L"��� ���������",
	L"��",
	L"���",
};

// error strings for inventory

STR16 pMapInventoryErrorString[] =
{
	L"%s ������� ������.",	//Merc is in sector with item but not close enough
	L"������ ������� ����� �����.",  //MARK CARTER
	L"%s ��� ����� �������, � �� ����� ��������� �������.",
	L"�� ����� ��� ��� �������� ��������� ���� � �����.",
	L"�� ����� ��� ��� �������� ����������� ���� �� ����� �� ����������� �����.",
	L"%s ��� ����� �������, � �� ����� �������� �������.",
	L"�� ����� ����� �� �� ������ �������� ������ ��������� �� ������.",
};

STR16 pMapInventoryStrings[] =
{
	L"�������", 			// sector these items are in
	L"����� ���������", 		// total number of items in sector
};


// help text for the user

STR16 pMapScreenFastHelpTextList[] =
{
	L"����� ��������� �������� � ������ �����, ��������� ��� ������ ��� ������ ������ ������������� ����, �������� �� ������� '�������'.",
	L"����� ��������� �������� ������� � ������ ������, �������� � ������� '����'.",
	L"��� ������ ������� ������� ������ �� ������������, ��������� ������ �������.",
	L"�������� ����� ������ ���� ���������� ������. ��� ���� ������� �����, ����� ������ ��������� ������� �� ������������. ������� ������ ������ ���� �� ������� ������� ����� �������������� ����������.",
	L"����� ������� ����� ������ - � ����� ������ ������� ������� 'h'.",
	L"�������� �����",
	L"�������� �����",
	L"�������� �����",
	L"�������� �����",
	L"�� ����������� ������ �� ������� ������� �� ���� ������, ���� �� ��������� � �������. ����� ������������� �� ����� ��������, �������� ������ ������� (������ � ������ ������ ����). ��� ������� ������� �������, ���� ���� ������� �� �������� � �������.",
};

// movement menu text

STR16 pMovementMenuStrings[] =
{
	L"��������� ��������� � ������", 	// title for movement box 
	L"����", 		// done with movement menu, start plotting movement
	L"������", 		// cancel this menu
	L"������",		// title for group of mercs not on squads nor in vehicles
};


STR16 pUpdateMercStrings[] =
{
	L"��!:", 			// an error has occured
	L"���� ��������� �����:", 	// this pop up came up due to a merc contract ending
	L"������� ���������:", // this pop up....due to more than one merc finishing assignments
	L"����� ��������� � ����� ������������:", // this pop up ....due to more than one merc waking up and returing to work
	L"����� ������� �����:", // this pop up ....due to more than one merc being tired and going to sleep
	L"����� ���������� ��������� �:", // this pop up came up due to a merc contract ending
};

// map screen map border buttons help text

STR16 pMapScreenBorderButtonHelpText[] =
{
	L"���������� ������ (|W)",
	L"����� (|M)",
	L"������ � ����� (|T)",
	L"����� ���������� ������������ (|A)",
	L"���� (|I)",
	L"��������� � ����� (|Z)",
	L"��������� ������ ����������", //HAM 4: Show Mobile Militia Restrictions
};


STR16 pMapScreenBottomFastHelp[] =
{
	L"������ (|L)",
	L"����������� ����� (|E|s|c)",
	L"��������� (|O)",
	L"������ ������� (|+)", 	// time compress more 
	L"������ ������� (|-)", 	// time compress less
	L"���������� ��������� (|�|�|�|�|�|�|� |�|�|�|�|�)\n���������� �������� (|P|g|U|p)", 	// previous message in scrollable list
	L"��������� ��������� (|�|�|�|�|�|�|� |�|�|�|�)\n��������� �������� (|P|g|D|n)", 	// next message in the scrollable list
	L"�������� / ���������\n������ ������� (|�|�|�|�|�|�)",	// start/stop time compression
};

STR16 pMapScreenBottomText[] =
{
	L"������� ������", 	// current balance in player bank account
};

STR16 pMercDeadString[] =
{
	L"%s �����(�)",
};


STR16 pDayStrings[] =
{
	L"����",
};

// the list of email sender names

CHAR16 pSenderNameList[500][128] =
{
	L"",
};
/*
{
	L"������",
	L"Psych Pro Inc.",
	L"������",
	L"Psych Pro Inc.",
	L"����",
	L"R.I.S.",		//5
	L"�����",
	L"����",
	L"����",
	L"������",
	L"����",			//10
	L"������",
	L"������ (����)",
	L"����",
	L"��������",
	L"�����",			//15
	L"����",
	L"�����",
	L"���� (�����������)",
	L"������",
	L"�����",				//20
	L"������",
	L"���",
	L"�����",
	L"���",
	L"����",		//25
	L"����� (�����)",
	L"���",
	L"�������",
	L"�����",
	L"������",		//30
	L"����",
	L"������",
	L"���",
	L"�����",
	L"���",
	L"������",
	L"�����",
	L"�������",
	L"������ ���",
	L"������",
	L"���",
	L"�������",
	L"����",
	L"����",
	L"����",
	//----------
	L"M.I.S. ���������",	
	L"����� ���",
	L"����",
	L"���� ������",
	L"�.I.�.",
};
*/

// next/prev strings

STR16 pTraverseStrings[] =
{
  L"<<",
  L">>",
};

// new mail notify string 

STR16 pNewMailStrings[] =
{
 L"�������� ����� �����...",
};


// confirm player's intent to delete messages

STR16 pDeleteMailStrings[] =
{
 L"������� ������?",
 L"�������, �� ��������?",
};


// the sort header strings

STR16 pEmailHeaders[] =
{
	L"��:",
	L"����:",
	L"����:",
};

// email titlebar text

STR16 pEmailTitleText[] =
{
	L"�������� ����",
};


// the financial screen strings
STR16 pFinanceTitle[] =
{
	L"���������� �����",		//the name we made up for the financial program in the game
};

STR16 pFinanceSummary[] =
{
	L"�����:", 				// credit (subtract from) to player's account
	L"������:", 				// debit (add to) to player's account
	L"��������� ������ �����:",
	L"��������� ������ �����������:",
	L"��������� ������:",
	L"������ �� ����� ���:",
	L"������ ����� �������:",
	L"������ ����������� �� �������:",
	L"������ �� �������:",
	L"������� ������:",
	L"��������� �����:",
	L"��������� ������:", 		// projected balance for player for tommorow
};


// headers to each list in financial screen

STR16 pFinanceHeaders[] =
{
	L"����", 			// the day column
	L"�����", 			// the credits column
	L"������",			// the debits column
	L"��������", 		// transaction type - see TransactionText below
	L"������", 			// balance at this point in time
	L"���.", 			// page number
	L"����", 			// the day(s) of transactions this page displays 
};


STR16 pTransactionText[] =
{
	L"����������� �������",			// interest the player has accumulated so far
	L"��������� �����",
	L"������� �������", 
	L"�����", 				// Merc was hired
	L"������� � ����� ���", 		// Bobby Ray is the name of an arms dealer
	L"������ ����� M.E.R.C.",
	L"%s: ���������.", 		// medical deposit for merc
	L"I.M.P.: ������ �������", 		// IMP is the acronym for International Mercenary Profiling
	L"%s: ������� ���������.", 
	L"%s: ��������� ���������",
	L"%s: ��������� ���������", 				// johnny contract extended
	L"��� %s: ��������� ������������", 
	L"%s: ��������� ���������", 		// insurance claim for merc
	L"1 ����", 				// merc's contract extended for a day
	L"7 ����", 				// merc's contract extended for a week
	L"14 ����", 				// ... for 2 weeks
	L"����� �����", 
	L"", //String nuked
	L"������� �����",
	L"%s: ������� ���. ��������",
	L"%s: ������� ���. ��������",
	L"%s: ���. ������� �������",
	L"%s: ������ �����.",		// %s is the name of the npc being paid
	L"%s ����� ��������.", 			// transfer funds to a merc
	L"%s: ��������� ������.", 		// transfer funds from a merc
	L"%s: ������ ���������.", // initial cost to equip a town's militia
	L"%s ������ ��� ����.",	//is used for the Shop keeper interface.  The dealers name will be appended to the end of the string.
	L"%s ������ �������� �� ����.",
	L"���������� ������� ���������",
	L"��������� ���������", // HEADROCK HAM 3.6		//Facility Use
	L"���������� ���������", // HEADROCK HAM 3.6		//Militia upkeep
};

STR16 pTransactionAlternateText[] =
{
	L"��������� ���", 				// insurance for a merc
	L"%s: �������� ������� �� 1 ����.", 				// entend mercs contract by a day
	L"%s: �������� ������� �� 7 ����.",
	L"%s: �������� ������� �� 14 ����.",
};

// helicopter pilot payment 

STR16 pSkyriderText[] =
{
	L"��������� �������� ��������� $%d", 			// skyrider was paid an amount of money
	L"�� ��� ��� ������ ��������� �������� $%d.", 		// skyrider is still owed an amount of money
	L"�������� ������� �������� ��������.",	// skyrider has finished refueling
	L"",//unused
	L"",//unused
	L"�������� ������� ����� � ������.", // Skyrider was grounded but has been freed
	L"� ��������� �������� ��� ����������. ���� �� ������ ����������� ������ � ���� ������, �������� �� � �������� (������ '������/��������')."
};


// strings for different levels of merc morale

STR16 pMoralStrings[] =
{
	L"�������", 
	L"������",
	L"�����",
	L"������",
	L"������",
	L"����",
};

// Mercs equipment has now arrived and is now available in Omerta or Drassen.

STR16 pLeftEquipmentString[] =
{ 
	L"%s ��������� ���� ���������� � ������ (A9).", 	//%s ����� ����� ���������� ���������� � ������ (A9).
	L"%s ��������� ���� ���������� � �������� (B13).",	//%s ����� ����� ���������� ���������� � �������� (B13).
};

// Status that appears on the Map Screen

STR16 pMapScreenStatusStrings[] =
{
	L"��������",
	L"�������",
	L"������ ���",
	L"���������",	// the condition of the current vehicle (its "health")
	L"������",	// the fuel level of the current vehicle (its "energy")
};


STR16 pMapScreenPrevNextCharButtonHelpText[] =
{
	L"���������� ����\n(|�|�|�|�|�|�|� |�|�|�|�|�)", 			// previous merc in the list
	L"��������� ����\n(|�|�|�|�|�|�|� |�|�|�|�|�|�)", 			// next merc in the list
};


STR16 pEtaString[] =
{
	L"���:", 				// eta is an acronym for Estimated Time of Arrival
};

STR16 pTrashItemText[] =
{
	L"�� ������ ������� �� ������� ���� �������. �������?", 	// do you want to continue and lose the item forever
	L"���� ������� ������� ����� ������. �� ������������� ������ ��������� ���?", // does the user REALLY want to trash this item
};


STR16 pMapErrorString[] = 
{
	L"����� �� ����� ����� �� ����, ����� ���� �� ��������� ����.",

//1-5
	L"������� �������� ����� �� �����������.",
	L"����� �� ����? �� ��� �� ����� �������!",
	L"����� ����� �� ����, �������� ������ ���� ��������� � ����� ��� �������� � ������.",
	L"� ��� ��� ��� �� ������ �����.",	// you have no members, can't do anything 
	L"������� �� ����� ���������.",		// merc can't comply with your order
//6-10
	L"��������� � ������������� ����� ����. ��������� ��� � ���-������ � �����.", // merc can't move unescorted .. for a male
	L"��������� � ������������� ����� ����. ��������� �� � ���-������ � �����.", // for a female
	L"������ ��� �� ������ � �������!",
	L"�������, ������� ���� ������� �������� � ����������.",
	L"������ �� ��������? ������ ����� ���!",	// Cannot give a movement order. Air raid is going on.
//11-15
	L"��������� �� ����? �� � ��� ��� ��� ����!",
	L"�� ������ � ������ �����-����� � ������� %s!",
	L"�� ������ ��� ����� � ������ %s... � ���������� �� ������ �����-�����!", 
	L"", 
	L"���� ��� � %s ���� ���������.",
//16-20
	L"����� � %s ���� ��������� ������. ��� ������� ����� ���������� �� %s � ����.",
	L"���� ����� ��� ������������� ������ %s.",
	L"��� ������� ���� �� ����� ������ �� ����� ��������� ���� ������.",
	L"%s �� ����� �������������� � %s - ��� �����.",
	L"%s �� ����� �������������� � %s - ������� ������� ����������.",
//21-25
	L"����� � %s ���� ��������� �������� ��������!",
	L"������ �������� ������ ��� ��������� �� ���� ��� � %s.",
	L"������ �������� ������ ��� ��������� � %s.",
	L"������ �������� ���� �������� � %s.",
	L"������ �������� ������ ��� ��������� %s.",
//26-30
	L"��� ������� ���� �� ����� ������ �� ����� �����.",
	L"��� ������� ���� �� ����� ������ �� ����� ����������.",
	L"��������� �� ��������, ���� �� �������� ����������.",
	L"%s ������ �� � ��������� ������� ������ � �����������.",
	L"��������� ��� ������ ������ �� ����� ������� � ������ ������.",
//31-35
	L"�� �� ������ ������� ���������� � %s.",
	L"������ ������ �� ����� ���������!",
	L"%s ��-�� ������� ������� �� ����� ����!",
	L"������� ��� ����� �������� �����!",
	L"%s �����(�)!",
//36-40
	L"%s �� ����� ������������� �� %s, ��� ��� ��������� � ��������.",
	L"%s �� ����� ����� � ������ � ���� �������.",
	L"%s �� ����� �������� � %s",
	L"�� �� ������ �������� ������ �������, ���� �� ������� ����� ������!",
	L"��� ������ ����� ��������� ������ �� �������!",
//41-45
	L"�� �� ������ ������������� ��������� �� �����.",
	L"� ������ ���������� ������!",
	L"%s ��� ������� ���� � ���� �� �����.",
	L"�� ���� �� ���������� �� � ��������� ����� ������.",
	L"���� ��� ��������� ��������� �� ����� ������ �� ����� ������ ���������.",
//46-50
	L"���� ��� ��������� ��������� �� ����� ������ ���������.",
	L"������ ������ ����������!",
	L"��������! ����������� ���������� � ����� ������� ����� �� ����� ���� ���������.",
	L"������� ����������� ����� ���������. ��������� �������� � ������� � ������ � ���� �����.",
};


// help text used during strategic route plotting
STR16 pMapPlotStrings[] =
{
	L"��� ��� �������� �� ����� ����������, ����� ����������� ���� ��� �������� �� ������� �������, ����� ���������� ������ ������� �����.",
	L"���� �������� �����������.",
	L"����� ���������� �� ��������.",
	L"���� �������� �������.",
	L"���� ��������.",
};


// help text used when moving the merc arrival sector
STR16 pBullseyeStrings[] =
{
	L"�������� ������, � ������� �������� ��������.",
	L"����� ��������� �������� ��������� � %s.",
	L"�������� ����� ��������� ������. ��������� ������������ �� ���������!",
	L"��������. ������ �������� �� ���������.",
	L"���� ��� %s ����� �� ���������! ����� ������� ���� ���������� � %s.",
};


// help text for mouse regions

STR16 pMiscMapScreenMouseRegionHelpText[] =
{
	L"�������� ���������� (|�|�|�|�)",
	L"�������� �������",
	L"������ ���������� (|�|�|�|�)",
};



// male version of where equipment is left
STR16 pMercHeLeaveString[] =
{
	L"������ �� %s �������� ���� �������� ����� (� %s) ��� ����� � �������� (B13) ����� �������?",
	L"������ �� %s �������� ���� �������� ����� (� %s) ��� ����� � ������ (A9) ����� �������?",
	L"����� ������ � ������� ���� �������� � ������ (�9).",
	L"����� ������ � ������� ���� �������� � �������� (B13).",
	L"%s ����� ������ � ������� ���� �������� � %s.",
};


// female version
STR16 pMercSheLeaveString[] =
{
	L"������ �� %s �������� ���� �������� ����� (� %s) ��� ����� � �������� (B13) ����� �������?",
	L"������ �� %s �������� ���� �������� ����� (� %s) ��� ����� � ������ (A9) ����� �������?",
	L"����� ������ � ������� ���� �������� � ������ (�9).",
	L"����� ������ � ������� ���� �������� � �������� (B13).",
	L"%s ����� ������ � ������� ���� �������� � %s.",
};


STR16 pMercContractOverStrings[] =
{
	L"������������ �����, ��� ��� ��� �������� ��������.", 		// merc's contract is over and has departed
	L"������������ �����, ��� ��� �� �������� ��������.", 		// merc's contract is over and has departed
	L"������, ��� ��� ��� �������� ��� �������.", 		// merc's contract has been terminated
	L"������, ��� ��� �� �������� ��� �������.",		// merc's contract has been terminated
	L"�� ������ M.E.R.C. ������� ����� �����, ��� ��� %s ������.", // Your M.E.R.C. account is invalid so merc left
};

// Text used on IMP Web Pages

STR16 pImpPopUpStrings[] =
{
	L"�������� ��� �������.",
	L"��� �������� � ������ ��� ���������� ����������� ������������. �� �������?",
	L"������� ���������� ��� � ������� ���.",
	L"��������������� ������ ������ ����� ����������, ��� �� �� ������ ��������� ���� ������ ������������.",
	L"������ �� �� ������ ������� ���� �����.",
	L"����� ��������� ������, ����� ����� ����� ��� ���� �� ��� ������ ����� �������.",
	L"������� ��� ������.",
	L"�� ���� ��������� I.M.P.-�������� � �����.",
	L"�� �������� ������������� ���������� I.M.P.-����������.",
	L"� ��� � ������� ��� ���� ��� I.M.P.-��������� ���� �� ����.",
	L"�� �� ������ ��������� ���� ����� I.M.P.-��������.",
	L"����� I.M.P.-�������� ������������� � �������.",
};


// button labels used on the IMP site

STR16 pImpButtonText[] =
{
	L"���������� � ���", 		// about the IMP site
	L"������", 			// begin profiling
	L"�����������", 		//Skills
	L"��������������", 		// personal stats/attributes section
	L"���������", 			// Appearance
	L"�����: %d", 			// the voice selection
	L"������", 			// done profiling
	L"������ �������", 		// start over profiling
	L"��, � ������� ���������� �����.",
	L"��", 
	L"���",
	L"������", 			// finished answering questions
	L"�����", 			// previous question..abbreviated form
	L"������", 			// next question
	L"��.", 			// yes, I am certain 
	L"���, � ���� ������ �����.",	// no, I want to start over the profiling process
	L"��",
	L"���",
	L"�����", 			// back one page
	L"��������", 			// cancel selection
	L"��, ��� �����.",
	L"���, ��� ��� �������.",
	L"�����������", 		// the IMP site registry..when name and gender is selected
	L"������ ������", 		// analyzing your profile results
	L"������",
	L"������ ��������", 			// Character
};

STR16 pExtraIMPStrings[] =
{
	// These texts have been also slightly changed
	L"������, ����� ������������ ��������� � ������ ������� ��������, ������� ���� �����������.",	//With your character traits chosen, it is time to select your skills.
	L"��� ����������, �������� ���� ��������������.",	//To complete the process, select your attributes.
	L"��� ������, ��������� �������� ���������� ��� ����, �����, ������������ � ��������������� ���������.",	//To commence actual profiling, select portrait, voice and colors.
	L"������, ����� �� ��������� ������������ ����� ���������, ������� � ������� ����� ������ �������.",	//Now that you have completed your appearence choice, procced to character analysis.
};

STR16 pFilesTitle[] =
{
  L"�������� ������",
};

STR16 pFilesSenderList[] =
{
  L"����� ��������", 		// the recon report sent to the player. Recon is an abbreviation for reconissance
	L"� ������� �1", 		// first intercept file .. Intercept is the title of the organization sending the file...similar in function to INTERPOL/CIA/KGB..refer to fist record in files.txt for the translated title
	L"� ������� �2",	   // second intercept file
	L"� ������� �3",			 // third intercept file
	L"� ������� �4", // fourth intercept file
	L"� ������� �5", // fifth intercept file
	L"� ������� �6", // sixth intercept file
};

// Text having to do with the History Log

STR16 pHistoryTitle[] =
{
	L"������ �������", 
};

STR16 pHistoryHeaders[] =
{
	L"����", 			// the day the history event occurred
	L"���.", 			// the current page in the history report we are in
	L"����", 			// the days the history report occurs over
	L"�������", 			// location (in sector) the event occurred
	L"�������", 			// the event label
};

// various history events
// THESE STRINGS ARE "HISTORY LOG" STRINGS AND THEIR LENGTH IS VERY LIMITED.
// PLEASE BE MINDFUL OF THE LENGTH OF THESE STRINGS. ONE WAY TO "TEST" THIS
// IS TO TURN "CHEAT MODE" ON AND USE CONTROL-R IN THE TACTICAL SCREEN, THEN
// GO INTO THE LAPTOP/HISTORY LOG AND CHECK OUT THE STRINGS. CONTROL-R INSERTS
// MANY (NOT ALL) OF THE STRINGS IN THE FOLLOWING LIST INTO THE GAME.
STR16 pHistoryStrings[] =
{
	L"",																						// leave this line blank
	//1-5
	L"�����(�) %s �� A.I.M.", 										// merc was hired from the aim site
	L"�����(�) %s �� M.E.R.C.", 									// merc was hired from the aim site
	L"%s �����(�).", 															// merc was killed
	L"�������� ������ M.E.R.C.",				// paid outstanding bills at MERC
	L"������� ������� �� ������ ���������",	
	//6-10
	L"��������������� �������� I.M.P.",
	L"��������� ��������� ��� %s.", 				// insurance contract purchased
	L"%s: c�������� �������� �����������.", 				// insurance contract canceled
	L"������� ��������� %s.", 							// insurance claim payout for merc
	L"%s: �������� ������� �� 1 ����.", 						// Extented "mercs name"'s for a day
	//11-15
	L"%s: �������� ������� �� 7 ����.", 					// Extented "mercs name"'s for a week
	L"%s: �������� ������� �� 14 ����.", 					// Extented "mercs name"'s 2 weeks
	L"�� ������� %s.", 													// "merc's name" was dismissed.
	L"%s ������ �� ���.", 																		// "merc's name" quit.
	L"�������� �������.", 															// a particular quest started
	//16-20
	L"������� ���������.",
	L"���������� �� ������� �������� ������ %s",									// talked to head miner of town
	L"%s ����������(�).",
	L"������� ����� ���-�����",
	L"�������� ����� ���������� � ������ ������.",
	//21-25
	L"%s ����, ����� ����� ����� �� ������ ����.",
	L"����� �������� � %s.",
	L"�����(�) %s.",
	L"������ ������ �� ���������� ������� � ��������.",
	L"������ � ��������!",
	//26-30
	L"� ����� %s �������� ����� ����.",
	L"����� %s ����������.",
	L"����� %s �������.",
	L"����� %s ����� ��������.",
	L"�������� ���������� � ������ �����.",
	//31-35
	L"������ �� ���� - ��������� ������� ������.",
	L"������ �� ���� ������� ��� �������� ��������.",
	L"�������� �������� ����� ���������� ������.",
	L"����� ������� ���-�� � ���� � ���-����.",
	L"�������� �������, ��� �� ���-�� ����� � ������.",
	//36-40
	L"��������� ������ - �������� �����������.",
	L"����������� � ������ ��������� A.I.M., ������!", 
	L"��������� ����, �������� �������.",
	L"�������� �������� �������� �� �������� ������.",
	L"��������� �� ������� ������� �������� �����.",
	//41-45
	L"��� ���������� ��������� ������.",	//�����, ������� ������?
	L"������ ����� ������� ������, ������������ �����.",
	L"��� ������ �� ���.",
	L"������ ��������� ������� ��������.",
	L"��������� �������� ���� �� �������.",
	//46-50
	L"��������� �������, ���������� �� �������.",
	L"��������� �����. �� ������ ��������� ����������.",
	L"��������� ���� �� �������. �� ������� ���������.",
	L"����� ����������� � ����������� � ������ �����.",
	L"������� ������ ���������� � �����.",
	//51-55
	L"����� �� ����� ����� �����������.",
	L"���� ������� �� ������� ��� ��� �����.",
	L"��������� ����������� ������.",
	L"���� ������� ��� ��� ����������� ��������.",
	L"������� ���������, �� ������� ����� � ������.",
	//56-60
	L"���� �������� ������ ���������, ���� ����� ������.",
	L"���� ������ �����.",
	L"���� ������ ������ � ����� ���-����.",
	L"%s: ������ � ��� ��� ������.",
	L"%s: �������� � ��� ��� ������.",
	//61-65
	L"%s: ��������������� � ��� ��� ������.",	//��������������� �� ���?
	L"� ����������� ����� ������� ���� �����.",
	L"�������� ������, ��������� ������.",
	L"������� �������� ��� ��������",				//ENEMY_INVASION_CODE
	L"������ ����� �����",
	//66-70
	L"�������� ���������",							//ENEMY_ENCOUNTER_CODE
	L"����������� ������",						//ENEMY_AMBUSH_CODE
	L"��������� �� ������",
	L"����� �����������!",			//ENTERING_ENEMY_SECTOR_CODE
	L"�������� �����!",
	//71-75
	L"����� ������",			//CREATURE_ATTACK_CODE
	L"�����-������ ���������� ��� �����.",			//BLOODCAT_AMBUSH_CODE
	L"��� �����-������ �����",
	L"%s ��� ����(�).",
	L"������ ������� ������ ����������.",
	L"������ ����.",
	L"%s ����(�) ����� �������.",
};

STR16 pHistoryLocations[] =
{
	L"�/�",						// N/A is an acronym for Not Applicable
};

// icon text strings that appear on the laptop

STR16 pLaptopIcons[] =
{
	L"�����",
	L"�����",
	L"�������",
	L"�������",
	L"������",
	L"������",
	L"���������",
	L"sir-FER 4.0",			// our play on the company name (Sirtech) and web surFER
};

// bookmarks for different websites
// IMPORTANT make sure you move down the Cancel string as bookmarks are being added

STR16 pBookMarkStrings[] =
{
	L"A.I.M.",
	L"����� ���",
	L"I.M.P.",
	L"M.E.R.C.",
	L"��������",
	L"�����",
	L"���������",
	L"O��e�a",
};

STR16 pBookmarkTitle[] =
{
	L"��������",
	L"����� ��� ���� ����� ������� ������ ������� ����.",
};

// When loading or download a web page

STR16 pDownloadString[] =
{
	L"��������",
	L"����������",
};

//This is the text used on the bank machines, here called ATMs for Automatic Teller Machine

STR16 gsAtmSideButtonText[] =
{
	L"OK",
	L"�����", 			// take money from merc
	L"����", 			// give money to merc
	L"������", 			// cancel transaction
	L"�����.", 			// clear amount being displayed on the screen
};

STR16 gsAtmStartButtonText[] =
{
	L"��������� $", 		// transfer money to merc -- short form
	L"���������", 			// view stats of the merc
	L"����������", 			// view the inventory of the merc
	L"��������",
};

STR16 sATMText[ ]=
{
	L"��������� ��������?", 		// transfer funds to merc?
	L"�������?", 			// are we certain?
	L"������ �����", 		// enter the amount you want to transfer to merc
	L"������� ���", 		// select the type of transfer to merc
	L"�� ������� �����", 	// not enough money to transfer to merc
	L"����� ������ ���� ������ $10", // transfer amount must be a multiple of $10
};

// Web error messages. Please use foreign language equivilant for these messages. 
// DNS is the acronym for Domain Name Server
// URL is the acronym for Uniform Resource Locator

STR16 pErrorStrings[] =
{
	L"������",
	L"������ �� ����� ������ DNS.",	
	L"��������� ����� � ���������� ��� ���.",
	L"OK", //��������� ����� �������� ������ �������.
	L"����� ���������� � ��������.",
};


STR16 pPersonnelString[] =
{
	L"������:", 			// mercs we have
};


STR16 pWebTitle[ ]=
{
	L"sir-FER 4.0",		// our name for the version of the browser, play on company name
};


// The titles for the web program title bar, for each page loaded

STR16 pWebPagesTitles[] =
{
	L"�.I.M.",
	L"A.I.M. ������",
	L"A.I.M. ��������",		// a mug shot is another name for a portrait
	L"A.I.M. ����������",
	L"A.I.M.",
	L"A.I.M. �������",
	L"A.I.M. �������",
	L"A.I.M. �������",
	L"A.I.M. ������",
	L"M.E.R.C.",
	L"M.E.R.C. �����",
	L"M.E.R.C. �����������",
	L"M.E.R.C. ����������",
	L"����� ���",
	L"����� ��� - ������",
	L"����� ��� - ����������",
	L"����� ��� - �����",
	L"����� ��� - ������",					//misc is an abbreviation for miscellaneous
	L"����� ��� - ���� �/�.",
	L"����� ��� - �������� �����",
	L"I.M.P.",
	L"I.M.P.",
	L"\"����� �� ����� ����\"",
	L"\"����� �� ����� ����\" - �������",
	L"\"����� �� ����� ����\" - ����� ������",
	L"\"����� �� ����� ����\" - ��������",
	L"��������� ������: ������, ����� � ������",
	L"����������",
	L"��������",
	L"�����������",
	L"���������� ������ �������������",
	L"",
	L"����� �� ������.",
	L"����� ��� - ��������� �����������",
	L"",
	L"",
};

STR16 pShowBookmarkString[] =
{
	L"���������",
	L"�������� ��� ��� �� ������ \"�����\" ��� ����������� ���� ������.",
};

STR16 pLaptopTitles[] =
{
	L"�������� ����",
	L"�������� ������",
	L"��������",
	L"���������� �����",
	L"������",
};

STR16 pPersonnelDepartedStateStrings[] =
{
	//reasons why a merc has left.
	L"����� � ���",
	L"������",
	L"������",
	L"����� �����",
	L"�������� �����",
	L"�����",
};
// personnel strings appearing in the Personnel Manager on the laptop

STR16 pPersonelTeamStrings[] =
{
	L"� �������",
	L"��������",
	L"������� �� ����:",
	L"������ �������:",
	L"������ �������:",
	L"������� � ����:",
	L"�������:",
	L"������:",
};


STR16 pPersonnelCurrentTeamStatsStrings[] =
{
	L"������",
	L"�������",
	L"������",
};


STR16 pPersonnelTeamStatsStrings[] =
{
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
	L"���",
};


// horizontal and vertical indices on the map screen

STR16 pMapVertIndex[] =
{
	L"X",
	L"A",
	L"B",
	L"C",
	L"D",
	L"E",
	L"F",
	L"G",
	L"H",
	L"I",
	L"J",
	L"K",
	L"L",
	L"M",
	L"N",
	L"O",
	L"P",
};

STR16 pMapHortIndex[] =
{
	L"X",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	L"7",
	L"8",
	L"9",
	L"10",
	L"11",
	L"12",
	L"13",
	L"14",
	L"15",
	L"16",
};

STR16 pMapDepthIndex[] =
{
	L"",
	L"-1",
	L"-2",
	L"-3",
};

// text that appears on the contract button

STR16 pContractButtonString[] =
{
	L"��������",
};

// text that appears on the update panel buttons

STR16 pUpdatePanelButtons[] =
{
	L"�����",
	L"����",
};

// Text which appears when everyone on your team is incapacitated and incapable of battle

CHAR16 LargeTacticalStr[][ LARGE_STRING_LENGTH ] =
{
	L"�� ��������� ��������� � ���� �������!",
	L"��������, �� ��������� ��������� �������, ������ ���� �� �������!",
	L"���� ����� ��������� � ���� (��������� ��� ��������)!",
	L"���� ����� ��������� � ����.",
};


//Insurance Contract.c
//The text on the buttons at the bottom of the screen.

STR16			InsContractText[] = 
{ 
	L"�����",
	L"������",
	L"��",
	L"��������",
};



//Insurance Info
// Text on the buttons on the bottom of the screen

STR16		InsInfoText[] = 
{ 
	L"�����", 
	L"������",
};



//For use at the M.E.R.C. web site. Text relating to the player's account with MERC

STR16			MercAccountText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"������ �����",
	L"� ������", 
	L"����� �����:",
	L"�������",
	L"����",
	L"������",
	L"���������",
	L"�����:",
	L"�� ������������� ������ � ������� %s?",		//the %s is a string that contains the dollar amount ( ex. "$150" )
};

// Merc Account Page buttons
STR16			MercAccountPageText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"�����",
	L"������",
};

//For use at the M.E.R.C. web site. Text relating a MERC mercenary


STR16			MercInfo[] =
{
	L"��������",
	L"�����������",
	L"��������",
	L"����",
	L"���������",
	L"���������",
	L"������� �����",
	L"��������",
	L"��������",
	L"����������",
	L"��������",

	L"�����",
	L"������",
	L"������",
	L"�������������� ����������",
	L"� ������",
	L"�����",
	L"O��a�a",
	L"� ����",
	L"�����",

	L"������, �� ��������� ������ ����� 18 ���������, � ��� �����������.",
	L"����������",
};



// For use at the M.E.R.C. web site. Text relating to opening an account with MERC

STR16			MercNoAccountText[] =
{
	//Text on the buttons at the bottom of the screen
	L"������� ����",
	L"������",
	L"�� ��� �� ������������������. ������� ������� ����?",
};


// For use at the M.E.R.C. web site. MERC Homepage

STR16			MercHomePageText[] =
{
	//Description of various parts on the MERC page
	L"���� �. �����, ���������� � ������",
	L"������� ����",
	L"�������� �����",
	L"�������� ������",
	// The version number on the video conferencing system that pops up when Speck is talking
	L"Speck Com v3.2",
};

// For use at MiGillicutty's Web Page.

STR16	sFuneralString[] =
{
	L"���������� ��������� �������������: ������� ������ � ������� ������� � 1983.",
	L"�������� �� ��������� � ������ ������� �.I.�. - ������ ������������� \"������\", ���������� �� ����� �������.",
	L"��� ����� ������ ������������ ������ � ������, ������� ��, ��� �����, ������ �� �������.",
	L"���������� ��������� ������������� ���������� ������� ������ ���������� ����� - �� �������, � ������� ����� ���������, �� �������������� ������ ������������ ��������.",
	L"���������� ��������� ������������� ������� ��� � ����� ������������� ��������� � �����.",

	// Text for the various links available at the bottom of the page
	L"�������� ������",
	L"��������� ��� � ������",
	L"������ �� ��������",
	L"������ � ���������� �������",
	L"���������� �������",

	// The text that comes up when you click on any of the links ( except for send flowers ).
	L"� ���������, ��� ���� �� ��������, � ����� � ������� � �����. �� ����������� ���������� ������ ����� ��������� ��������� � ������ ������ ��������. ���� ������ ���������.",
	L"�� �������� ����������� ��� � ��� ������� �����. �������� ���.",
};

// Text for the florist Home page

STR16			sFloristText[] = 
{
	//Text on the button on the bottom of the page

	L"�������",

	//Address of United Florist

	L"\"�� ������� ��� ����� ��� ������!\"",
	L"1-555-SCENT-ME",
	L"333 NoseGay Dr,Seedy City, CA USA 90210",
	L"http://www.scent-me.com",

	// detail of the florist page

	L"�� �������� ������ � ����������!",
	L"����������� �������� �� ��������� ���� ����������� � ����� ������ ����. ���� ��������� �����������.",
	L"����������� ����� ������ ���� � ����!",
	L"�������� ��� ������� ����� �������� ������� � �������� 10 ���������� ���.",
	L"\"�������� �����\", ���������� ������ � ������� � 1981 �.",
	L"���� �������, ������ ������ ����������������, ������� ��� ����� � ������� 10 ���� �� ��������� ������. ����� ������ � ������� ������!",
	L"��������� ��� ������������� ���� ��������� ��������.",
	L"����� ����, ��������� �� ���� ���� ��������, ��� ������� ��� �������� ����� � ����� ����.",
	L"� ���������, ���� � ��� ��� ����� ������, �� ������ �������� ��, ��� ��� ����!",
};



//Florist OrderForm

STR16			sOrderFormText[] = 
{
	//Text on the buttons

	L"�����",
	L"�������",
	L"������",
	L"�������",

	L"�������� ������:",
	L"����:",
	L"����� ������:",
	L"���������",
	L"������",
	L"��� ������ � ��� �����",
	L"����� ��������",
	L"�������������",
	L"������� ����� ($10)",
	L"������ ���� ($20)",
	L"������� ����� ($10)",
	L"��������� ����� (���� ����) ($10)",
	L"����� ������������:",
	L"����� ���������� ������� ��������, ������������ ��������� � 75 ��������.",
	L"...��� �������� ���� ��",

	L"����������� ��������",
	L"���������� � �����",

	//The text that goes beside the area where the user can enter their name

	L"��������:",
};




//Florist Gallery.c

STR16		sFloristGalleryText[] =
{
	//text on the buttons

	L"�����",	//abbreviation for previous
	L"������",	//abbreviation for next

	L"�������� �����, ������� ������ �������.",
	L"����������: ���� ��� ����� ������� ������� ��� ��������� ����� - ��������� ��� $10.",

	//text on the button

	L"� ������",
};

//Florist Cards

STR16			sFloristCards[] =
{
	L"�������� �����, ������� ����� ��������� �� ��������.",
	L"�����",
};



// Text for Bobby Ray's Mail Order Site

STR16			BobbyROrderFormText[] = 
{
	L"����� ������",		//Title of the page
	L"���",					// The number of items ordered
	L"��� (%s)",			// The weight of the item
	L"��������",			// The name of the item
	L"���� 1 ����",			// the item's weight
	L"�����",				// The total price of all of items of the same type
	L"���������",			// The sub total of all the item totals added
	L"��� (��. ����� ��������)",		// S&H is an acronym for Shipping and Handling 
	L"�����",				// The grand total of all item totals + the shipping and handling
	L"����� ��������",
	L"�������� ��������",	// See below
	L"���� (�� %s.)",		// The cost to ship the items
	L"��������-��������",	// Gets deliverd the next day
	L"2 ������� ���",		// Gets delivered in 2 days
	L"������� ��������",	// Gets delivered in 3 days
	L"��������",//15			// Clears the order page
	L"��������",			// Accept the order
	L"�����",				// text on the button that returns to the previous page
	L"� ������",			// Text on the button that returns to the home page
	L"* - ����, ������ � ������������",		// Disclaimer stating that the item is used
	L"�� �� ������ ��� ��������.",		//20	// A popup message that to warn of not enough money
	L"<�� �������>",					// Gets displayed when there is no valid city selected
	L"�� ������������� ������ ��������� ���� � %s?",		// A popup that asks if the city selected is the correct one
	L"��� �����**",			// Displays the weight of the package
	L"** ���. ���",			// Disclaimer states that there is a minimum weight for the package
	L"������",
};


STR16			BobbyRFilter[] =
{
	// Guns
	L"�������",
	L"���������",
	L"���.������.",
	L"��",
	L"��������",
	L"��.��������",
	L"��.��������",
	L"��������",
	L"�����",

	// Ammo
	L"���������",
	L"���.������.",
	L"��",
	L"��������",
	L"��.��������",
	L"��.��������",
	L"��������",
	L"�����",

	// Used
	L"������",
	L"�����",
	L"�����.�-��",
	L"������",

	// Armour
	L"�����",
	L"������",
	L"�����",
	L"��������",

	// Misc
	L"�������",
	L"���������.",
	L"��������",
	L"�������",
	L"�����",
	L"�������",
	L"������",
	L"��������",
	L"�����.�-��",
	L"������",
};


// This text is used when on the various Bobby Ray Web site pages that sell items

STR16			BobbyRText[] = 
{
	L"��������",		// Title
	// instructions on how to order
	L"������� �� �����. ����� ������ - ��������, ������ ������ - ���������. ����� ���� ��� �������� �����, �������� �����.",

	//Text on the buttons to go the various links

	L"�����",
	L"������",
	L"�������",
	L"�����",
	L"������",		//misc is an abbreviation for miscellaneous
	L"�/�",
	L"�����",
	L"����� ������",
	L"� ������",

	//The following 2 lines are used on the Ammunition page.  
	//They are used for help text to display how many items the player's merc has
	//that can use this type of ammo

	L"� ����� ������� ����",
	L"������, ������������ ���� ��� �����������",

	//The following lines provide information on the items

	L"���:",			// Weight of all the items of the same type
	L"���.:",			// the caliber of the gun
	L"���:",			// number of rounds of ammo the Magazine can hold
	L"����:",			// The range of the gun
	L"����:",			// Damage of the weapon
	L"����:",			// Weapon's Rate Of Fire, acronym ROF
	L"����:",			// Cost of the item
	L"�����:",			// The number of items still in the store's inventory
	L"���� � ������:",	// The number of items on order
	L"����:",			// If the item is damaged
	L"���:",			// the Weight of the item
	L"�����:",			// The total cost of all items on order
	L"* %% �� ������",	// if the item is damaged, displays the percent function of the item

	//Popup that tells the player that they can only order 10 items at a time
	
	L"׸��! � ��� ����� ����� ������ �� ����� 10 ������� ��� ������ ������. ���� �� ������ �������� ������ (� �� ��������, �� ������), �� ��������� ��� ���� ����� � ������� ���� ��������� �� ����������.", 

	// A popup that tells the user that they are trying to order more items then the store has in stock

	L"��������, �� ������� ������ ��� �� ������. ���������� ��������� �����.",

	//A popup that tells the user that the store is temporarily sold out

	L"��������, �� ������� ������ ���� ��� �� ������.",

};


// Text for Bobby Ray's Home Page

STR16			BobbyRaysFrontText[] =
{
	//Details on the web site

	L"����� �� ������� ������ � �������� ������� ������",
	L"�� ������� ��� ����, ��� ����� ��� ������ ��� �����������",
	L"���� �/�",

	//Text for the various links to the sub pages

	L"������",
	L"������",
	L"����������",
	L"�����",

	//Details on the web site

	L"���� � ��� ����-�� ���, �� ����� ��� �����!",
	L"� ����������",
};



// Text for the AIM page.
// This is the text used when the user selects the way to sort the aim mercanaries on the AIM mug shot page

STR16			AimSortText[] =
{
	L"�.I.M. ������",		// Title
	// Title for the way to sort
	L"����������:",

	// sort by...

	L"����",
	L"����",
	L"��������",
	L"��������",
	L"����������",
	L"��������",

	//Text of the links to other AIM pages

	L"�������� ���������� ���������",
	L"����������� ���������� � ���������",
	L"����������� �������� ������� A.I.M.", 

	// text to display how the entries will be sorted

	L"�� �����������",
	L"�� ��������",
};


//Aim Policies.c
//The page in which the AIM policies and regulations are displayed

STR16		AimPolicyText[] =
{
	// The text on the buttons at the bottom of the page

	L"�����",
	L"� ������", 
	L"����������",
	L"������",
	L"�� ��������",
	L"��������",
};



//Aim Member.c
//The page in which the players hires AIM mercenaries

// Instructions to the user to either start video conferencing with the merc, or to go the mug shot index

STR16			AimMemberText[] =
{
	L"����� ������",
	L"��������� � ������.",
	L"������ ������ - ",
	L"����� � ������������.",
};

//Aim Member.c
//The page in which the players hires AIM mercenaries

STR16			CharacterInfo[] =
{
	// The various attributes of the merc

	L"��������",
	L"�����������",
	L"��������",
	L"����",
	L"���������",
	L"���������",
	L"������� �����",
	L"��������",
	L"��������",
	L"����������",
	L"��������",

	// the contract expenses' area

	L"�������",
	L"����",
	L"1 ����",
	L"7 ����",
	L"14 ����",

	// text for the buttons that either go to the previous merc, 
	// start talking to the merc, or go to the next merc

	L"<<",
	L"���������",
	L">>",

	L"�������������� ����������",		// Title for the additional info for the merc's bio
	L"����������� ������",				// Title of the page
	L"����������:",						// Displays the optional gear cost
	L"������.",				//"gear",	//tais: Displays the optional gear cost in nsgi, this moved and can have only a small room, so just make it "gear" without extra's
	L"��������� ���. ��������",			// If the merc required a medical deposit, this is displayed
	L"����� 1",				// Text on Starting Gear Selection Button 1
	L"����� 2",				// Text on Starting Gear Selection Button 2
	L"����� 3",				// Text on Starting Gear Selection Button 3
	L"����� 4",				// Text on Starting Gear Selection Button 4
	L"����� 5",				// Text on Starting Gear Selection Button 5
};


//Aim Member.c
//The page in which the player's hires AIM mercenaries

//The following text is used with the video conference popup

STR16			VideoConfercingText[] =
{
	L"����� ���������:",				//Title beside the cost of hiring the merc

	//Text on the buttons to select the length of time the merc can be hired

	L"1 ����",
	L"7 ����",
	L"14 ����",

	//Text on the buttons to determine if you want the merc to come with the equipment 

	L"��� ����������",
	L"�� �����������",

	// Text on the Buttons

	L"��������",			// to actually hire the merc
	L"������",				// go back to the previous menu
	L"������",				// go to menu in which you can hire the merc
	L"�����",				// stops talking with the merc
	L"�������",
	L"���������",			// if the merc is not there, you can leave a message 

	//Text on the top of the video conference popup

	L"���������������� �",
	L"�����������. . .",

	L"+ ���������"			// Displays if you are hiring the merc with the medical deposit
};



//Aim Member.c
//The page in which the player hires AIM mercenaries

// The text that pops up when you select the TRANSFER FUNDS button

STR16			AimPopUpText[] =
{
	L"���������� ����������� ������",	// You hired the merc
	L"������ ��������� ��������",		// Player doesn't have enough money, message 1
	L"�� ������� �������",				// Player doesn't have enough money, message 2

	// if the merc is not available, one of the following is displayed over the merc's face

	L"�� �������",
	L"����������, �������� ���������",
	L"���������",

	//If you try to hire more mercs than game can support

	L"� ��� ��� ������ ������� �� ���������.",

	L"������������",
	L"��������� ��������� �� �������������",
};


//AIM Link.c

STR16			AimLinkText[] =
{
	L"A.I.M. ������",	//The title of the AIM links page
};



//Aim History

// This page displays the history of AIM

STR16			AimHistoryText[] =
{
	L"A.I.M. �������",			//Title

	// Text on the buttons at the bottom of the page

	L"�����",
	L"� ������", 
	L"A.I.M. �������",
	L"������",
};


//Aim Mug Shot Index

//The page in which all the AIM members' portraits are displayed in the order selected by the AIM sort page.

STR16			AimFiText[] =
{
	// displays the way in which the mercs were sorted

	L"����",
	L"����",
	L"��������",
	L"��������",
	L"����������",
	L"��������",

	// The title of the page, the above text gets added at the end of this text

	L"������ A.I.M. �� �����������, �������� - %s",
	L"������ A.I.M. �� ��������, �������� - %s",

	// Instructions to the players on what to do

	L"����� ������",
	L"������� ��������",
	L"������ ������",
	L"�������� ����������",

	// Gets displayed on top of the merc's portrait if they are...

	L"�����",
	L"���������",
	L"�� �������",
};



//AimArchives.
// The page that displays information about the older AIM alumni merc... mercs who are no longer with AIM

STR16			AimAlumniText[] =
{
	// Text of the buttons

	L"���. 1",
	L"���. 2",
	L"���. 3",

	L"A.I.M. �������",	// Title of the page

	L"��"			// Stops displaying information on selected merc
};

//AIM Home Page

STR16			AimScreenText[] =
{
	// AIM disclaimers
	
	L"A.I.M. � ������� A.I.M. - ������������������ �� ������ ������� �������� �����.",
	L"��� ��� � �� ����� ��������� ���.",
	L"(�) 1998-1999 A.I.M., Ltd. ��� ����� ��������.",

	//Text for an advertisement that gets displayed on the AIM page

	L"\"����� �� ����� ����\"",
	L"\"�� ������� ��� ����� ��� ������!\"",
	L"������ ��� ����",
	L"...� ������ ���",
	L"���� � ��� ��� ������ ������, �� �� ��� � �� �����.",
};


//Aim Home Page

STR16			AimBottomMenuText[] =
{
	//Text for the links at the bottom of all AIM pages
	L"� ������",
	L"��������",
	L"�����",
	L"�������",
	L"����������",
	L"������",
};



//ShopKeeper Interface
// The shopkeeper interface is displayed when the merc wants to interact with 
// the various store clerks scattered through out the game.

STR16 SKI_Text[ ] = 
{
	L"��������� ������",	//Header for the merchandise available
	L"���.",				//The current store inventory page being displayed
	L"����� ����",			//The total cost of the the items in the Dealer inventory area
	L"����� ��������",		//The total value of items player wishes to sell
	L"������",				//Button text for dealer to evaluate items the player wants to sell
	L"�������",				//Button text which completes the deal. Makes the transaction.
	L"����",				//Text for the button which will leave the shopkeeper interface.
	L"���� �������",		//The amount the dealer will charge to repair the merc's goods
	L"1 ���",				// SINGULAR! The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"%d �����",			// PLURAL!   The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"��������",			// Text appearing over an item that has just been repaired by a NPC repairman dealer
	L"��� ��� ������ ������ ����.",	//Message box that tells the user there is no more room to put there stuff
	L"%d �����",			// The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"��������� ������� �� �����.",
};

//ShopKeeper Interface
//for the bank machine panels. Referenced here is the acronym ATM, which means Automatic Teller Machine

STR16	SkiAtmText[] =
{
	//Text on buttons on the banking machine, displayed at the bottom of the page
	L"0",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	L"7",
	L"8",
	L"9",
	L"OK",					//Transfer the money
	L"�����",				//Take money from the player
	L"����",				//Give money to the player
	L"������",				//Cancel the transfer
	L"��������",			//Clear the money display
};


//Shopkeeper Interface
STR16	gzSkiAtmText[] = 
{	

	// Text on the bank machine panel that....
	L"�������� ���",			//tells the user to select either to give or take from the merc
	L"������� �����",			//Enter the amount to transfer
	L"��������� ������ �����",	//Giving money to the merc
	L"������� ������ � �����",	//Taking money from the merc
	L"������������ �������",	//Not enough money to transfer
	L"������",					//Display the amount of money the player currently has
};


STR16	SkiMessageBoxText[] =
{
	L"������� ����� �� ����� %s, ����� ������� �������?",
	L"������������ �������. �� ������� %s",
	L"������� ����� �� ����� %s, ����� �������� ������ ���������?",
	L"��������� �������� ������� �������",
	L"��������� �������� �������� ��������� ��������",
	L"��������� ������",
	L"������� ������",
};


//OptionScreen.c

STR16	zOptionsText[] = 
{
	//button Text
	L"���������",
	L"���������",
	L"�����",
	L">>",
	L"<<",
	L"������",

	//Text above the slider bars
	L"�����",
	L"����",
	L"������",

	//Confirmation pop when the user selects..
	L"����� �� ���� � ��������� � ������� ����?",

	L"���������� ������� ��� \"����\", ��� \"��������\"",
};


//SaveLoadScreen 
STR16			zSaveLoadText[] = 
{
	L"���������",
	L"���������",
	L"������",
	L"���������� �������",
	L"�������� �������",

	L"���� ������� ���������",
	L"������ ���������� ����!",
	L"���� ������� ���������",
	L"������ �������� ����!",

	L"��� ���������� ���� ������� ���� ������� ����. ������ �����, ��������� ��� �� �������. ��� ����� ����������?",
	L"�������� ����� ���������� ����������. ������� �� �������?",

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	L"������ ���������� ���� ���� ��������. ������ �������� ���� ��� ��������� ������� � �����-���� ������. �������� ���������?",
#else
	L"������� ��������� ���������� ���� ���������� ������. ������������� �������� ��� � ���������?",
#endif

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	L"������ ���� � ������ ���������� ���� ��������. ������ �������� ���� ��� ��������� ������� � �����-���� ������. �������� ���������?",
#else
	L"������� ��������� ���������� ���� ���������� ������. ������������� �������� ��� � ���������?",
#endif

	L"�� ������ �������� ���� �� ������������ ���������� #%d?",
	L"������ ��������� ���� �� ���������� #",


	//The first %d is a number that contains the amount of free space on the users hard drive,
	//the second is the recommended amount of free space.
	L"� ��� ������������� ��������� ����� �� ������� �����. ������ �������� %d ��, � ��������� %d �� ���������� ����� ��� JA.",

	L"��������...",		//When saving a game, a message box with this string appears on the screen

	L"����������",
	L"��������",
	L"���",
	L"��",

	L"�������� ����������",
	L"���������� �����",
	L"����������� ����� ���",
	L"����������",
	L"�������",
	L"��������",
	L"�� � �����",

	L"����������� ���� ���� ������ � ������ \"������ ���������\", ���� ����� �� ������� ��� ���������� ������ 640�480. �������� ���������� � ��������� ���� �����.",
	L"�������� ����, ������� � ������ \"������ ���������\", ����������. ���������� � Ja2.ini ������� ����� 'Data-1.13' � ��������� �������.",
};


//MapScreen
STR16		zMarksMapScreenText[] =
{
	L"������� �����",
	L"� ��� ��� ����������. ����� ��� ���������, ��� ����� �������� �� ���� ������� �������.",
	L"����� � �����",
	L"������� �����������", 
	L"%s �� ��������� � ������.", 
	L"%s �� ����� � �� ����� ���� �����.", 
	L"%s ������� � ��� �� ���������, ������ �������.",
	L"%s ����� ������.",
	L"����� �� ����� ���������, ����� ���� �� ��������� ����.",

	// stuff for contracts
	L"���� � ��� � ���� ������ �� ���������� ���������, �� �� �� ������, ����� �������� ��������� ��������.",
	L"%s: ��������� ��������� �������� %s �� %d �������������� ����. ������� ���������?",
	L"�������� � �������",
	L"����� �������� ������������.",
	
	// other items
	L"������", // people acting a field medics and bandaging wounded mercs 
	L"�������", // people who are being bandaged by a medic 
	L"������", // Continue on with the game after autobandage is complete 
	L"����", // Stop autobandaging of patients by medics now 
	L"��������, ���� ����� ���������� � ���������������� ������.", // informs player this option/button has been disabled in the demo 
	L"%s: ��� ������������.",
	L"%s: ��� �������.",
	L"����� ������������ ������������ ��� ����������.",
	L"� %s ������������ ���������� ����������.",
	L"� �������� ������������ ��������.", 
	L"�������� �������� �� �����������",
	L"�������������� �����",
	//TODO.Translate HEADROCK HAM 4: Prompt messages when turning on Mobile Militia Restrictions view.
	L"������ � ��� ��� ��������� ����� ���������. �������� ���� ����� � ��������� ���, ����� ������� ��.",
	L"This view shows where your Mobile Militia can and cannot go. GREY = Mobile Militia refuse to go here. RED = Mobile Militia can go here, but you've told them not to. YELLOW = Mobile Militia can enter this sector, but not leave. GREEN = Mobile Militia can go here freely. Right click a Green/Yellow sector to cycle its behavior.",
};


STR16 pLandMarkInSectorString[] =
{
	L"����� %d ������� ����-�� � ������� %s.",
};

// confirm the player wants to pay X dollars to build a militia force in town
STR16 pMilitiaConfirmStrings[] =
{
	L"���������� ������ ���������� ����� ������ $", // telling player how much it will cost
	L"����������� ������?", // asking player if they wish to pay the amount requested
	L"�� �� ������ ���� ����� ���������.", // telling the player they can't afford to train this town
	L"���������� ���������� � %s (%s %d)?", // continue training this town?
	L"���� $", // the cost in dollars to train militia
	L"( �/� )",   // abbreviated yes/no
	L"",	// unused
	L"���������� ��������� � ������� %d ����� ������ $%d. %s", // cost to train sveral sectors at once
	L"� ��� ��� $%d, ����� ���������� � ���������� ���������.",
	L"%s: ��������� �� ����� %d ��������� ����������, ����� ���������� ���������� ���������.",
	L"������ �� �� ������ ����������� ��������� � %s.",
	L"� ��� ��� $%d ����� ����������� ����� ��������� �������������.",
	L"���������� ���������� ���������� ������������� � %s (%s %d)?",
	L"���������� ���������� ������������� � ������� %d �������� � $ %d. %s",
	L"���������� ���������� ������������� ���������� �������� � $",
};

//Strings used in the popup box when withdrawing, or depositing money from the $ sign at the bottom of the single merc panel
STR16	gzMoneyWithdrawMessageText[] = 
{
	L"�� ���� ��� �� ������ ����� �� ����� �� ����� $20 000.",
	L"�� ������ �������� %s �� ���� ����?",
};

STR16	gzCopyrightText[] = 
{
	L"��������� ����� (C) 1999 Sir-Tech Canada Ltd. ��� ����� ��������.",
};

//option Text
STR16		zOptionsToggleText[] = 
{
	L"����",
	L"���������� �����",
	L"��������",
	L"����� � ��������",
	L"������������� ���",
	L"����� � ����������", 
	L"�� ������� ����!",
	L"������ ����� ������", 
	L"�������� ���� ��������",
	L"�������� �������",
	L"���� � �������� �������",
	L"������������� ���/�������",
	L"����������� �������",
	L"���������� ��������� �����",
	L"������ �� ������",
	L"������ �� �����", 
	L"�������� �����",
	L"�������� ����� ��������",
	L"�������� �������",
	L"���������� ������",
	L"�������� ���� ���������",
	L"������ ������� ��� ������",
	L"��������� �����",	//Allow Enemy Taunts
	L"�������� �������� �������",
	L"�������� � �������� �������",
	L"����� �������� ����. ������",
	L"���� ��������� � ���������",
	L"��������� ������ � ������",
	L"��������� �������",
	L"��� �����",
	L"������",
	L"��������� ��� ���������",	//Show Soldier Tooltips
	L"�������������� ������ ���",
	L"���������� ����� ��������",
	//L"������ �������� ����������",
	L"��������� �������� ���������",		//Enhanced Description Box
	L"������ ��������� �����",				// add forced turn mode
	L"���������� ����� � ���������",		//Stat Progress Bars	// Show progress towards stat increase
	L"����� ��������� �������. �����",	//Alternate Strategy-Map Colors //Change color scheme of Strategic Map
	L"�������� ������� ����",				// Show alternate bullet graphics (tracers)
	L"����� ������� ������������",				// use NCTH
	L"�������� ���������� �� ������",				//Show Face gear graphics
	L"�������� ������ ����������",
	L"--��������� ���������--",				// TOPTION_CHEAT_MODE_OPTIONS_HEADER,
	L"�������� �������� ����� ���",			// force all pending Bobby Ray shipments
	L"-----------------",					// TOPTION_CHEAT_MODE_OPTIONS_END
	L"--��������� ���������� ������--",		// an example options screen options header (pure text)
	L"�������� ���������� ��������",		//Report Miss Offsets			// Screen messages showing amount and direction of shot deviation.
	L"����� ���� ������� ��������",			// failsafe show/hide option to reset all options
	L"� ����� ���� ������ �����?",			// a do once and reset self option (button like effect)
	L"���������� ��������� �����",			//Debug Options in other builds		// allow debugging in release or mapeditor
	L"�������� ���������� ���������",		//DEBUG Render Option group	// an example option that will show/hide other options
	L"���������� Mouse Regions",		//Render Mouse Regions	// an example of a DEBUG build option
	L"-----------------",					// an example options screen options divider (pure text)

	// this is THE LAST option that exists (debug the options screen, doesnt do anything, except exist)
	L"���������_������_��������",	//THE_LAST_OPTION
};

//This is the help text associated with the above toggles.
STR16	zOptionsScreenHelpText[] =
{
	// HEADROCK HAM 4: Added more tooltip text to some toggles, in order to explain them better.

	//speech
	L"�������� ��� ���������\n����� �� ����� ��������.",

	//Mute Confirmation
	L"�������� ��� ��������� �������\n������������� ���������� ��������.",

	//Subtitles
	L"�������� ��� ��������� �����������\n��������� �� ����� ��������.",

	//Key to advance speech
	L"���� �������� ��������, �������� ���� �����,\n����� ������ ��������� ������� ����������.",

	//Toggle smoke animation
	L"��������� �������� ����,\n���� �� ��������� ����.",

	//Blood n Gore
	L"��������� ���� �����, ���� ������� �����.",

	//Never move my mouse
	L"���� ���������, �� ������ ������������� ������������\n�� ������ ������������ ���� �������.", 

	//Old selection method
	L"���� ��������, �� ����� �������������� ������ ����� ������ ���������\n(��� ���, ��� ������ � ���������� ���������� ������ Jagged Alliance).",

	//Show movement path
	L"���� ��������, �� � ������ ��������� ������� ����� ������������ ���� ������������\n(���� ���������,  ������� |S|H|I|F|T, ����� ������� ����).",

	//show misses
	L"���� ��������, �� ������ ����� �����������\n���������� ����, ��������� ���� ����.",
	
	//Real Time Confirmation
	L"���� ��������, �� ��� ������� �� ������������ ����� �����������\n��������������, �������������� ������ ���� �� ����� ����������.",

	//Display the enemy indicator
	L"���� ��������, �� �� �������� ��������������,\n����� �������� ����� ����� ��� ���������.",

	//Use the metric system
	L"���� ��������, �� ������������ ����������� ������� ���,\n����� ����� ����������.",

	//Merc Lighted movement
	L"��� ������ ����� �������������� ������ ����� (|G).\n��������� ��� ��������� ��� ��������� ������������������ �������.",

	//Smart cursor
	L"���� ��������, �� ����������� ������� ����� ��������\n������������� �������� ���.",

	//snap cursor to the door
	L"���� ��������, �� ����������� ������� ����� �����\n������������� �������� ��� �� �����.",

	//glow items 
	L"���� ��������, �� ��� �������� ��������������. (|I)",

	//toggle tree tops
	L"���� ��������, �� ������������ ����� ��������. (|T)",

	//toggle wireframe
	L"���� ��������, �� � �����������\n������������� ������������ ������. (|W)",

	L"���� ��������, �� ������ ������������\n������������ � 3D. (|Home )",

	// Options for 1.13
	L"���� ��������, ���� ���������\n������������ ��� ��������.",
	L"���� ��������, ������� �� �����������\n���������� ������ �������� ���������.",
	L"���� ��������, ���� ������ ����� �������������� ���� ��������.",
	L"���� ��������, ���������� ������������ \n����� ��� ������� ����� � ��������� (|Q).",
	L"���� ��������, ���� �� ��������� � ��������� ����� \n��� ����������� ���������� (���� ���� ��� �� �����). \n������ ���� � ��������� ����� - |C|t|r+|X.",
	L"���� ��������, |�|�|�|�|�|� �������� ��������� �����.",
	L"���� ��������, ������������ ���� ��������� � ���������.",
	L"���� ��������, ��������� ������ \n������������ � ������� ���������.",
	L"���� ��������, ������������ ������ \n�������� � ��������� ���������.",	
	L"���� ��������, ����� ��� ����� �� ����� ��������.",
	L"���� ��������, ������ ������������ � ����.",
	L"���� ��������, ��� ������� ������ |A|l|t \n� ��������� ������� ���� �� ���������� ������� \n����� �������� �������������� ����������.",
	L"���� ��������, ���� ����� ������������� \n����������� ����� ������� ���� ������.",
	L"���� ��������, �������� �������\n�� ����� ��� ���������� ������������.",
	//L"���� ��������, ���� ����� ������������\n������ ������������� �������.",
	L"���� ��������, ����� �������������\n��������� �������� ���������.",
	L"���� �������� � � ������� ������������ ����, \n��������� ����� ����� ������������ \n�� ������ �������� ������� (|C|T|R|L+|S|H|I|F|T+|A|L|T+|T).",
	L"���� ��������, �����, \n������� ������ ��������� ����� ���������.",
	L"���� ��������, ��������������� �������� \n�� �������������� ����� ����� �����-������.",
	L"���� ��������, ������� ���� ����� ����� ��������.",
	L"���� ��������, ����� ������������� ����� ������� ������������ \n� ����� ������ ������������.",
	L"���� ��������, �� �������� ������� ����� ���������� ������ �������� ����������.",
	L"���� ��������, � ������ ������ ���� \n�� �������� ������� ����� ���������� ������ \n������� ��������� ����������.",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_HEADER",
	L"�������� ���� ����� ����� ���� ����� ��� ������ ����������.",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_END",
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_HEADER",	// an example options screen options header (pure text)
	L"|H|A|M |4 |D|e|b|u|g: When ON, will report the distance each bullet deviates from the\ncenter of the target, taking all NCTH factors into account.",
	L"���� ��������, \n����������� ������� ��������� ����� �������������.",	// failsafe show/hide option to reset all options
	L"�������� ������ ��� ������������� ������ ������� ��������.",	// a do once and reset self option (button like effect)
	L"���� ��������, \n���������� ��������� ����� �������� ��� � ����, \n��� � � ��������� ����.",	// Allows debug options in release or mapeditor builds
	L"���� ��������, ���������� ��������� \n����� �������� � ����� ������.",	//Toggle to display debugging render options
	L"Attempts to display slash-rects around mouse regions",	// an example of a DEBUG build option
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_END",	// an example options screen options divider (pure text)


	// this is THE LAST option that exists (debug the options screen, doesnt do anything, except exist)
	L"��������� ������ � ������ ��������.",
};


STR16	gzGIOScreenText[] =
{
	L"��������� ������ ����",
	L"�������� ����������",
	L"���",
	L"����",
	L"���������� �����",
	L"����������� ������ � ����",
	L"�� ���������",
	L"���� ��������",
	L"������� ���������",
	L"�����",	//�������
	L"�������",	//�������
	L"�������",	//�������
	L"��������",	//����������
	L"������ ����",
	L"������� ����",
	L"����������� ����������",
	L"� ����� �����",
	L"���� � ������",
	L"��������� � ����-������", 
	L"����������� ����� ���",
	L"�������",
	L"�������",
	L"��������",
	L"�� � �����",
	L"��������� / �������",		//Inventory / Attachments
	L"NOT USED",
	L"NOT USED",
	L"���������",
	L"��������� ���� (��������� ������ �������� ���� �������)",
	// Added by SANDRO
	L"������ IMP ���������",	//Skill Traits
	L"������",
	L"�����",
	L"���������� IMP ����������",	//Max IMP Characters
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	L"���� ��������� �� ����������",
	L"���",
	L"��",
	L"����� �����������",
	L"���������",
	L"��� �����",
	L"���������� ������ ��������",	//Secret Weapon Caches
	L"���������",
	L"�� ���������",
	L"�������� ���������� ����������",	//Progress Speed of Item Choices
	L"����� ��������",
	L"��������",
	L"��������",
	L"������",
	L"����� ������",

	L"������ / ������",
	L"����� / ������",
	L"����� / �����",
};

STR16	gzMPJScreenText[] =
{
	L"������� ����",	//MULTIPLAYER
	L"��������������",	//Join
	L"������� ����",	//Host
	L"������",	//Cancel
	L"��������",	//Refresh
	L"��� ������",	//Player Name
	L"IP �������",	//Server IP
	L"����",	//Port
	L"��� �������",	//Server Name
	L"# Plrs",
	L"������",	//Version
	L"��� ����",	//Game Type
	L"Ping",
	L"������� ��� ������.",
	L"������� ���������� IP �����. \n(������ 84.114.195.239).",
	L"������� ���������� ���� ������� (����������� �������� �� 1 �� 65535).",
};

STR16 gzMPJHelpText[] =
{
	L"����� ������� ����� ����� �����: http://webchat.quakenet.org/?channels=ja2-multiplayer",

	L"������� ����",
	L"������� '127.0.0.1' � ���� IP � �������� ����� ����� ������� � 60000.",	//Enter '127.0.0.1' for the IP and the Port number should be greater than 60000.
	L"��������� ��� ��������� ���� (UDP, TCP) �� ����������� ��������. ��������� ������� �����: http://portforward.com",
	L"��� �� �������� �� IRC ��� ICQ ������ ������� ��� ������� IP ����� � ���� (http://www.whatismyip.com).",
	L"����� �� ������ '������� ����' ��� ������� ������� ������� ����.",
	
	L"�������������� � ����",
	L"��������� ���� ������ ��� ��� �������� (�� IRC, ICQ � �.�.) ���� ������� IP ����� � ����.",
	L"������� ��� ������ � ���� IP ������ � ����� �����.",
	L"����� '��������������' ����� ������������ � ��� ��������� ������� ����.",
};

// TODO.Translate
STR16	gzMPHScreenText[] =
{
	L"��������� ��������� �������",			//HOST GAME
	L"������ ����",					//Start
	L"������� ����",				//Cancel
	L"��� �������",					//Server Name
	L"��� ����",					//Game Type
	L"Deathmatch",
	L"Team-Deathmatch",
	L"Co-Operative",
	L"���������� �������",				//Max Players
	L"������ � ������",				//Maximum Mercs
	L"Merc Selection",
	L"���� ������",
	L"����� �������",				//Hired by Player
	L"������ ��� ������",			//Starting Cash
	L"����� �������� ��� �� ������",	//Allow Hiring Same Merc
	L"��������� � ������� ������",			//Report Hired Mercs
	L"����� ���",				//Bobby Rays
	L"����� �������",	//Sector Starting Edge
	L"������� ��� �������",				//You must enter a server name
	L"",
	L"",
	L"����� �����",	//Starting Time
	L"",
	L"",
	L"��������� ������",	//Weapon Damage
	L"",
	L"����� ����",	//Timed Turns
	L"",
	L"����������� � CO-OP",		//Enable Civilians in CO-OP
	L"",
	L"�������� ������ � CO-OP",	//Maximum Enemies in CO-OP
	L"������������� ������� ������",	//Synchronize Game Directory
	L"MP Sync. Directory",
	L"������� ���������� ��� ������������� ������������ ������.",
	L"(��� ���������� ���������� ����������� '/' ������ '\\'.)",
	L"��������� ���������� ��� ������������� �� ����������.",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	// Max. Enemies / Report Hired Merc / Enable Civs in CO-OP
	L"��",
	L"���",
	// Starting Time
	L"����",
	L"����",
	L"����",
	// Starting Cash
	L"����",
	L"������",
	L"�����",
	L"������������",
	// Time Turns
	L"�� ����������",	//Never
	L"��������",	//Slow
	L"��������",	//Medium
	L"������",	//Fast
	// Weapon Damage
	L"����� �����",	//Very low
	L"���������",	//Low
	L"�������",	//Normal
	// Merc Hire
	L"��������",
	L"��������������",	//Normal
	// Sector Edge
	L"��������",
	L"���������",
	// Bobby Ray / Hire same merc
	L"���",
	L"����",
};

STR16 pDeliveryLocationStrings[] =
{
	L"�����",		//Austin, Texas, USA
	L"������",		//Baghdad, Iraq (Suddam Hussein's home)
	L"�������",		//The main place in JA2 that you can receive items.  The other towns are dummy names...
	L"�������",		//Hong Kong, Hong Kong
	L"������",		//Beirut, Lebanon	(Middle East)
	L"������",		//London, England
	L"���-��������",//Los Angeles, California, USA (SW corner of USA)
	L"������",		//Meduna -- the other airport in JA2 that you can receive items.
	L"��������",	//The island of Metavira was the fictional location used by JA1
	L"������",		//Miami, Florida, USA (SE corner of USA)
	L"������",		//Moscow, USSR
	L"���-����",	//New York, New York, USA
	L"������",		//Ottawa, Ontario, Canada -- where JA2 was made!
	L"�����",		//Paris, France
	L"�������",		//Tripoli, Libya (eastern Mediterranean)
	L"�����",		//Tokyo, Japan
	L"��������",	//Vancouver, British Columbia, Canada (west coast near US border)
};

STR16 pSkillAtZeroWarning[] =
{ //This string is used in the IMP character generation.  It is possible to select 0 ability
	//in a skill meaning you can't use it.  This text is confirmation to the player.
	L"�� �������? �������� 0 �������� ���������� ����� ������ ������.",
};

STR16 pIMPBeginScreenStrings[] =
{
	L"( �� 8 �������� )",
};

STR16 pIMPFinishButtonText[ 1 ]=
{
	L"������",
};

STR16 pIMPFinishStrings[ ]=
{
	L"�������, %s", //%s is the name of the merc
};

// the strings for imp voices screen
STR16 pIMPVoicesStrings[] =
{
	L"�����", 
};

STR16 pDepartedMercPortraitStrings[ ]=
{
	L"����� � ���",
	L"������",
	L"������",
};

// title for program
STR16 pPersTitleText[] =
{
	L"�����",
};

// paused game strings
STR16 pPausedGameText[] =
{
	L"����� � ����",
	L"���������� (|P|a|u|s|e)",
	L"����� (|P|a|u|s|e)",
};


STR16 pMessageStrings[] =
{
	L"����� �� ����?",
	L"��",
	L"��",
	L"���",
	L"������",
	L"������",
	L"�������",
	L"��� ��������.", //Save slots that don't have a description.
	L"���� ���������.",
	L"���� ���������.",
	L"QuickSave", //The name of the quicksave file (filename, text reference)
	L"SaveGame",	//The name of the normal savegame file, such as SaveGame01, SaveGame02, etc.
	L"sav",				//The 3 character dos extension (represents sav)
	L"..\\SavedGames", //The name of the directory where games are saved.
	L"����",
	L"����",
	L"��������� �����", //An empty save game slot
	L"����",				//Demo of JA2
	L"����� �����",				//State of development of a project (JA2) that is a debug build
	L"�����",			//Release build for JA2
	L"���",				//Abbreviation for Rounds per minute -- the potential # of bullets fired in a minute.
	L"���",					//Abbreviation for minute.
	L"�",					//One character abbreviation for meter (metric distance measurement unit).
	L"����",				//Abbreviation for rounds (# of bullets)
	L"��",					//Abbreviation for kilogram (metric weight measurement unit)
	L"����",				//Abbreviation for pounds (Imperial weight measurement unit)
	L"� ������",				//Home as in homepage on the internet.
	L"USD",					//Abbreviation to US dollars
	L"�/�",					//Lowercase acronym for not applicable.
	L"��������� ��� ���������� ��� �������� � ������ �����",		//Meanwhile
	L"%s: ������ � ������ %s%s",//30	Name/Squad has arrived in sector A9.  Order must not change without notifying
//SirTech
	L"������",
	L"������ ������ �������� ����",
	L"��� ������ ��������������� ��� �������� ����������, ������� ����� �������� � ����������� ����� ��� � ���������� �����, ����� ������� ALT+S.",
	L"��������",
	L"��������",
	L"� ��� ������������� ��������� �������� ������������. �� ����� ���� ����� %sM� ���������� �����, � ��� Jagged Alliance 2 ��������� %s M�.",
	L"�� A.I.M. ����� ���� %s.", 
	L"%s ����� %s.",		//'Merc name' has caught 'item' -- let SirTech know if name comes after item.
	L"%s ��������� ��������.", //'Merc name' has taken the drug
	L"%s: ����������� ������ � ��������.",//40	'Merc name' has no medical skill.

	//CDRom errors (such as ejecting CD while attempting to read the CD)
	L"�������� ����������� ���������.",
	L"������: CD-ROM ������.",

	//When firing heavier weapons in close quarters, you may not have enough room to do so.
	L"��� �����, ����� ����� ������ �����.",
	
	//Can't change stance due to objects in the way...
	L"������ ������ �������� ��������� ����.",

	//Simple text indications that appear in the game, when the merc can do one of these things.
	L"��������",
	L"�������",
	L"��������",

	L"%s ������� %s.", //"Item" passed to "merc".  Please try to keep the item %s before the merc %s, otherwise, must notify SirTech.
	L"�� ������� �����, ����� �������� %s %s.", //pass "item" to "merc".  Same instructions as above.

	//A list of attachments appear after the items.  Ex:  Kevlar vest ( Ceramic Plate 'Attached )'
	L" ����������]",			// 50

	//Cheat modes
	L"�� � ����� ���� ��� ����?",
	L"����������� ����� �����.",

	//Toggling various stealth modes
	L"����� ���� ����� �����.",
	L"����� ���� ������� �����.",
	L"%s ���� ����� �����.",
	L"%s ���� ������� �����.",

	//Wireframes are shown through buildings to reveal doors and windows that can't otherwise be seen in 
	//an isometric engine.  You can toggle this mode freely in the game.
	L"������ ������ ���.",
	L"������ ������ ����.",

	//These are used in the cheat modes for changing levels in the game.  Going from a basement level to
	//an upper level, etc.  
	L"������ ��������� � ����� ������...",
	L"��� ������ ������...",
	L"������ � ������. ������� %d...",
	L"�������� ������...",

	L".",		// used in the shop keeper inteface to mark the ownership of the item eg Red's gun
	L"����� ���������� ����.",
	L"����� ���������� ���.",
	L"3D ������ ����.",
	L"3D ������ ���.",
	L"������ %d-� �����.",
	L"�� ������� �����, ����� ��������� %s ���������� ������� %s",	//first %s is the mercs name, the seconds is a string containing the salary
	L"���",	//Skip
	L"%s �� ����� ���� � ��������.",
	L"���� ���������� ��� ������� ��� ��������� SaveGame99.sav. ���� ����������, ������������ ��� � SaveGame01 - SaveGame10 � �����, �� ������ �������� � ������ ����������.", 
	L"%s: �����(�) ������� %s.",
	L"������� ������� � �������.",
	L"%s �������� � ����� ���������� (������ %s) � %d� ����, �������� � %s.",		//first %s is mercs name, next is the sector location and name where they will be arriving in, lastely is the day an the time of arrival
	L"� ������ ��������� ������!",
	L"������� �� ������ ���������� ������ �������� ��������� (�������� �� �������� ��������)",
	L"������� �� ������ ���������� ������ ������� (�������� �� �������� �� ��������)",
	L"�������� ������� � ��������", // Changed from Drop All On (Enabled Soldier Tooltips)
	L"��������� ������� � ��������", // Changed from Drop All Off (Disabled Soldier Tooltips)
	L"����������� �������� ��� ������� �����",
	L"����������� �������� �������",
	// forced turn mode strings
    L"������ ��������� �����",
	L"����� ��������� �������",	//Normal turn mode
	L"����� �� ���������� ������",	//Exit combat mode
	L"������� ������ ��������� �����. �������� � ���!",	//Forced Turn Mode Active, Entering Combat
#ifdef JA2BETAVERSION
	L"���� ��������� � ���� ����-����������.",
#endif
	L"..\\SavedGames\\MP_SavedGames", //The name of the directory where games are saved.
	L"������",	//Client
	L"������ ������������ ���������� \"������\" ��������� � \"����� ������� �������\".",	//You cannot use the Old Inventory and the New Attachment System at the same time.
};


CHAR16 ItemPickupHelpPopup[][40] =
{
	L"�����",
	L"�����",
	L"������� ���",
	L"����",
	L"������",
};

STR16 pDoctorWarningString[] =
{
	L"%s ������� ������, ����� �����������.",
	L"���� ������ �� ����� ������� ������ ������ ���� �������.",
};

STR16 pMilitiaButtonsHelpText[] =
{
	L"��������� (����� ������)\n��������� (����� ������)\n����� �����������", // button help text informing player they can pick up or drop militia with this button 
	L"��������� (������ ������)\n��������� (����� ������)\n����� �������",
	L"��������� (������ ������)\n��������� (����� ������)\n����� ������� ������",
	L"���������� ������������\n���������� �� ���� ��������.",
};

STR16 pMapScreenJustStartedHelpText[] =
{
	L"������������� � A.I.M. � ������� ������ (*���������* - ��� � �������).", // to inform the player to hired some mercs to get things going
	L"����� ������ ������ ����������� � �������, �������� ������ ������� � ������ ������ ���� ������.", // to inform the player to hit time compression to get the game underway
};

STR16 pAntiHackerString[] = 
{
	L"������. �������� ��� �������� ����(�). ���� ���������� ������.",
};


STR16 gzLaptopHelpText[] =
{
	//Buttons:
	L"����������� �����",
	L"�������� �������� �����",
	L"����������� ���������� ������",
	L"����������� ������ ��������� �������",
	L"�������� ���������� � �������",
	L"����������� ���������� ������",
	L"������� ������",

	//Bottom task bar icons (if they exist):
	L"�������� ����� �����",
	L"�������� ����� ������",

	//Bookmarks:
	L"������������� ���������� ��������� A.I.M.",
	L"����� ��� - ����� ������ ����� ��������",
	L"�������� �������� �������� �������� I.M.P.",
	L"����� �������� M.E.R.C.",
	L"���������� ������ �������������",
	L"'����� �� ����� ����'",
	L"��������� ������ �� ���������� A.I.M.",
};


STR16	gzHelpScreenText[] =
{
	L"������� ���� ������",	
};

STR16 gzNonPersistantPBIText[] =
{
	L"���� ���. �� ������ ��������� ������ ����� ����������� �����.",
	L"����� � ������, ����� ���������� ���. (|E)",
	L"�������� ��� ������������� (|A).",
	L"�� ����� ����� ����� �������������� ����� �������� ������.",
	L"����� ���� ��� �� ������ � ������, �������������� ����� �������� ������.",
	L"����� �������� - �������������� ����� �������� ������.",
	L"����� ���������� ����������� - �������������� ����� �������� ������.",
	L"����� �����-������ - �������������� ����� �������� ������.",
	L"���� ���",
	L"������ �� �� ������ ���������.",
};

STR16 gzMiscString[] =
{
	L"���� ��������� ���������� ��� ��� ������ ���������...",
	L"������ ������ ������� �� ���������.",
	L"��������� ��� ����� �� %d%%.",
	L"%s ��������� ��� ��������� ��������.",
	L"�� �������� ����������� �������.",
};

STR16	gzIntroScreen[] = 
{
	L"�� ������� ����� ������������� ����������",
};

// These strings are combined with a merc name, a volume string (from pNoiseVolStr),
// and a direction (either "above", "below", or a string from pDirectionStr) to 
// report a noise.
// e.g. "Sidney hears a loud sound of MOVEMENT coming from the SOUTH."
STR16 pNewNoiseStr[] =
{
	L"%s ������ %s ���� %s.",
	L"%s ������ %s ���� �������� %s.",
	L"%s ������ %s �����, ������ %s.",
	L"%s ������ %s ���� �������� %s.",
	L"%s ������ %s ���� ����� %s.",
	L"%s ������ %s ���� ������ %s.",
	L"%s ������ %s ���� %s.",
	L"%s ������ %s ���� ����� %s.",
	L"%s ������ %s ���� ����� %s.",
	L"%s ������ %s ���� %s.",
	L"%s ������ %s ������ %s.",
};

STR16 wMapScreenSortButtonHelpText[] =
{
	L"���������� �� ����� (|F|1)",
	L"���������� �� ���� ������������ (|F|2)",
	L"���������� �� ��������� ��� (|F|3)",
	L"���������� �� ����� ���������� (|F|4)",
	L"���������� �� ����� ���������� (|F|5)",
	L"���������� �� ������� ��������� (|F|6)",
};



STR16		BrokenLinkText[] = 
{
	L"������ 404",
	L"���� �� ������.",
};


STR16 gzBobbyRShipmentText[] = 
{
	L"��������� �����������",
	L"����� �",
	L"����������",
	L"��������",
};


STR16	gzCreditNames[]=
{
	L"Chris Camfield",
	L"Shaun Lyng",
	L"Kris M�rnes",
	L"Ian Currie",
	L"Linda Currie",
	L"Eric \"WTF\" Cheng",
	L"Lynn Holowka",
	L"Norman \"NRG\" Olsen",
	L"George Brooks",
	L"Andrew Stacey",
	L"Scot Loving",
	L"Andrew \"Big Cheese\" Emmons",
	L"Dave \"The Feral\" French",
	L"Alex Meduna",
	L"Joey \"Joeker\" Whelan",
};


STR16	gzCreditNameTitle[]=
{
	L"������� ����������� ����", 				// Chris Camfield
	L"��������/���������",					// Shaun Lyng
	L"����������� �������������� ����� � ���������",	//Kris \"The Cow Rape Man\" Marnes
	L"��������/��������",					// Ian Currie
	L"��������/������ ����",				// Linda Currie
	L"��������",						// Eric \"WTF\" Cheng
	L"������������, ���������",				// Lynn Holowka
	L"������� ��������",					// Norman \"NRG\" Olsen
	L"������ �� �����",					// George Brooks
	L"�������� �������/��������",				// Andrew Stacey
	L"������� ��������/��������",				// Scot Loving
	L"������� �����������",					// Andrew \"Big Cheese Doddle\" Emmons
	L"�����������",						// Dave French
	L"����������� ��������� � ������� ����",		// Alex Meduna
	L"��������-����������",					// Joey \"Joeker\" Whelan",
};

STR16	gzCreditNameFunny[]=
{
	L"", 												// Chris Camfield
	L"(�� ��� ������ ������� ����������)",				// Shaun Lyng
	L"(\"������! �������� ������ ���� ���������.\")",	//Kris \"The Cow Rape Man\" Marnes
	L"(��� ������� ���� ��� ����� �����)",				// Ian Currie
	L"(����� �������� ��� Wizardry 8)",					// Linda Currie
	L"(��������� ����������� ��� ����� ���������)",		// Eric \"WTF\" Cheng
	L"(���� �� ��� � CFSA - ��������� �������...)",		// Lynn Holowka
	L"",							// Norman \"NRG\" Olsen
	L"",							// George Brooks
	L"(��������� ����� � ������ Dead Head)",			// Andrew Stacey
	L"(��� ��������� ��� ������)",						// Scot Loving
	L"(������������ ������������� �������)",			// Andrew \"Big Cheese Doddle\" Emmons
	L"(����� ����� �������� �����������)",				// Dave French
	L"(������� � ������ ��� Wizardry 8)",				// Alex Meduna
	L"(����� �������� � ����������� ������!)",			// Joey \"Joeker\" Whelan",
};

STR16 sRepairsDoneString[] =
{
	L"%s: �������� ������ ������ �����.",
	L"%s: �������� ������ ����� ������ � �����.",
	L"%s: �������� ������ ���� ���������� ������.",
	L"%s: �������� ������ ���� ������� ����� ������.",	//%s finished repairing everyone's large carried items
	L"%s: �������� ������ ���� ����� ����� ������.",	//%s finished repairing everyone's medium carried items
	L"%s: �������� ������ ���� ������ ����� ������.",	//%s finished repairing everyone's small carried items
	L"%s: �������� ������ ������������ ������ ������.",	//%s finished repairing everyone's LBE gear
};

STR16 zGioDifConfirmText[]=
{
	L"�� ������� ˨���� ������� ���������. ���� ����� ������������ ��� ���������� ������������ � Jagged Alliance. ��� ����� ��������� ��� ���� ����, ��� ��� ������ ���������. �� ������������� ������ ������ ���� � ���� ������?", 
	L"�� ������� ������� ������� ���������. ���� ����� ������������ ��� ���, ��� ������ � Jagged Alliance � ��������� ������. ��� ����� ��������� ��� ���� ����, ��� ��� ������ ���������. �� ������������� ������ ������ ���� � ���� ������?", 
	L"�� ������� ��ƨ��� ������� ���������. � ���� ������ ��� ����������� ������� ���� ���� � Jagged Alliance. ��� ����� ��������� ��� ���� ����, ��� ��� ������ ���������. �� ������������� ������ ������ ���� � ���� ������?", 
	L"�� ������� �������� ������� ���������. ������ � ���� - � ���� ������ ����������� �������� �������� �� ��������� ���������! �� ���� � ������� �� �� � �����, �� ��� ���� ����������. ��������?",
};

STR16 gzLateLocalizedString[] =
{
	L"%S ���� ��� �������� ������ �� ������...",

	//1-5
	L"����� �� ������ �������� ���� ������, ���� ���-������ �� ������� ����� ����������.",

	//This message comes up if you have pending bombs waiting to explode in tactical.
	L"������ ������ �������� ������ �������. ��������� ������!", 

	//'Name' refuses to move.
	L"%s ������������ �����������.",

	//%s a merc name
	L"%s: ������������ ����� �������� ��� ��������� ���������.",

	//A message that pops up when a vehicle runs out of gas.
	L"%s: ����������� �������. ������ �������� � %c%d.",

	//6-10

	// the following two strings are combined with the pNewNoise[] strings above to report noises
	// heard above or below the merc
	L"������",
	L"�����",

	//The following strings are used in autoresolve for autobandaging related feedback.
	L"����� �� ����� ��������� �� ����� ����������� �������.",
	L"����� ���������. �� � ���� �� ��������� ��� �������.",
	L"����� ���������� ���� ���������, �� ������� ������.",
	L"����� �� ����� ��������� �� ��������� � ���������.",
	L"������������� ������������ ������.",
	L"��� ���� �������� ����������.",

	//14
	L"�������",

	L"(�� �����)",

	L"��������: %d/%d",

	//In autoresolve if there were 5 mercs fighting 8 enemies the text would be "5 vs. 8"
	//"vs." is the abbreviation of versus.
	L"%d ������ %d",
	
	L"%s �����!",  //(ex "The ice cream truck is full")

	L"%s ��������� �� � ������ ������ ��� ���������, � � ��������� ������� �/��� ������.", 

	//20
	//Happens when you get shot in the legs, and you fall down.
	L"��-�� ������� � ���� %s ������ �� �����!",
	//Name can't speak right now.
	L"%s ������ �� ����� ��������",

	//22-24 plural versions @@@2 elite to veteran
	L"%d ���������� �� ��������� ����������� � ������� ������.",
	L"%d ���������� �� ��������� ����������� � �������.",
	L"%d ������� ��������� ����������� � ������� ������.",

	//25
	L"������",

	//26
	//Name has gone psycho -- when the game forces the player into burstmode (certain unstable characters)
	L"� %s ������� �������!",

	//27-28
	//Messages why a player can't time compress.
	L"������ ����������� �������� ������ ������� - � ��� ���� �������� � ������� %s.",
	L"������ ����������� �������� ������ ������� - � ��� ���� �������� � ������� � ������.",

	//29-31 singular versions @@@2 elite to veteran
	L"1 ���������� �� ��������� ���� ������� ��������.",
	L"1 ���������� �� ��������� ���� ������� ����������.",
	L"1 ������� ��������� ���� ������� ��������.",

	//32-34
	L"%s ������ �� �������.",
	L"��������� �� �����������?",
	L"(%d� �����)",

	//35
	//Ex: "Red has repaired Scope's MP5K".  Careful to maintain the proper order (Red before Scope, Scope before MP5K)
	L"%s ��������������(�) � %s %s",

	//36
	L"������",

	//37-38 "Name trips and falls"
	L"%s ����������� � ������.",
	L"���� ������� ������ ����� ����������.",

	//39
	L"���������� ����� �� ����� ���������. �������� � ������� ��������� ���������.",

	//40-43
	//%s is the name of merc.
	L"%s: ����������� �����������!",
	L"%s: ������������ ������� ��� �������.",
	L"%s: ���������� ��������� �����!",
	L"%s: ������������ ������� ��� �������.",

	//44-45
	L"����� �������",
	L"%s �� ����� ����� ��������.",

	//46-48
	L"%s: ���������� ��������� �������!",
	L"� ���� ������� ���������� ����� ����������� �� ����� %d �������.",	//No more than %d militia trainers are permitted in this sector.
	L"�� �������?",

	//49-50
	L"������ �������.",
	L"��� ������ �����.",

	//51-52 Fast help text in mapscreen.
	L"����������� ������ ������� (|�|�|�|�|�|�)",
	L"���������� ������ ������� (|E|s|c)",

	//53-54 "Magic has unjammed the Glock 18" or "Magic has unjammed Raven's H&K G11" 
	L"%s �������(�) %s",
	L"%s �������(�) %s (%s)",

	//55 
	L"������ �������� ������ ������� ��� ��������� ��������� � �������.",

	L"CD ������ ������ �� ������. ��������� ������� � ��.",

	L"�������� ������� ���������.",
	
	//58
	//Displayed with the version information when cheats are enabled.
	L"�������� ���� �������/����������� �����������: %d%%/%d%%",

	//59
	L"����������� ����� � ����?",
	
	//60
	L"������ ������.",

	L"%s ��������� ��� � ����������� ���-�� ��������!",
	L"%s �������� �� %d ������ ����!",
	L"%s �������� �� ���� ���� ������!",
};

STR16 gzCWStrings[] = 
{
	L"������� ������������ �� �������� �������� ��� %s?",
};

// WANNE: Tooltips
STR16 gzTooltipStrings[] =
{
	// Debug info
	L"%s|�����: %d\n",
	L"%s|�������: %d / %d\n",
	L"%s|��������� �� |����: %d\n",
	L"%s|I|D: %d\n",
	L"%s|�������: %d\n",
	L"%s|�������: %d\n",
	L"%s|������� |A|Ps: %d\n",
	L"%s|������� |��������: %d\n",
	// Full info
	L"%s|�����: %s\n",
	L"%s|�����: %s\n",
	L"%s|�����: %s\n",
	// Limited, Basic
	L"|�����: ",
	L"����� ",
	L"����� ",
	L"�����",
	L"����",
	L"��� �����",
	L"%s|�|�|�: %s\n",
	L"��� ���",
	L"%s|����������: %s\n",
	L"��� �����������",
	L"%s|������,|���� |1: %s\n",
	L"%s|������,|���� |2: %s\n",
	L"\n(� �������) ",
	L"%s|������: %s ",
	L"��� ������",
	L"��������",
	L"��������-�������",
	L"��������",
	L"������ �������",
	L"�����",
	L"���",
	L"������� ������",
	L"��� �����",
	L"��� �����������",
	L"��� �������",
	L"|�����: %s\n", 
	 // Added - SANDRO
	L"%s|����� 1: %s\n",	//%s|Skill 1: %s\n
	L"%s|����� 2: %s\n", 
	L"%s|����� 3: %s\n",
};

STR16 New113Message[] =
{
	L"�������� ����.",
	L"���� �����������.",
	L"������� �����.",
	L"����� ����������.",
	L"���������� ���������...",
	L"����� �� ����������!",	//suppression fire!
	L"*",			//BRST - ��������� �� ���������� ���������� ����
	L"***",			//AUTO - ������������ �������
	L"��",
	L"�� *",
	L"�� ***",
	L"�������!",
	L"���������� ��������� ������ ��-�� �������� �� �������.",
	L"����� ������� ����� ��������� ���������� � %s, ��� ��� ���������� ����� ������� %s ��������� �����������.",
	L"��������� ����.",
	L"��������� ��� ���� ��������� ������.",
	L"���� ������� ����������� ��������� �������.",
	L"������� ��� ���� ��������� ������.",
	L"������� ��� ������� ������ ����� ������.",	//You should check your goggles
	// Real Time Mode messages
	L"��� � ���.",	//In combat already
	L"� �������� ��������� ��� ������.",	//No enemies in sight
	L"�������� � ������ ��������� ������� ����.",	//Real-time sneaking OFF
	L"�������� � ������ ��������� ������� ���.",	//Real-time sneaking ON
	L"��������� ����!", // this should be enough - SANDRO
	L"%s ������� ��������� � ������!",	//%s was successful at stealing!
	L"� %s ��� ������������ ���������� ����� ��������, ����� ������� ��� ��������� ����.",	//%s did not have enough action points to steal all selected items.
	L"������ �������� ������������� �������� %s ����� ����������? (�� ������� ������������ ����� %i ��������).",	//Do you want to perform surgery on %s before bandaging? (You can heal about %i Health.)
	L"������ �������� ������������� �������� %s? (�� ������� ������������ ����� %i ��������).",	//Do you want to perform surgery on %s? (You can heal about %i Health.)
	L"������ ������� �������� ����������� ������������� ��������? (�������(�) - %i).",	//Do you wish to perform necessary surgeries first? (%i patient(s))
	L"������ �������� �������� ������� ����� ��������?",	//Do you wish to perform the surgery on this patient first?
	L"��������� ������ ������ � ������������� �������������� ��� ��� ����?",	//Apply first aid automatically with necessary surgeries or without them?
	L"%s ������� �������������(�).",	//Surgery on %s finished.
	L"%s ���������(�) ���� � ������� ������ � ������ ������� ������������� �������� ��������!",	//%s is hit in the chest and loses a point of maximum health!
	L"%s ���������(�) ���� � ������� ������ � ������ %d ������������� �������� ��������!",	//%s is hit in the chest and loses %d points of maximum health!
	L"%s �����������(�) ���� ������� ����������� %s.",	//%s has regained one point of lost %s
	L"%s �����������(�) %d ������ ����������� %s.",	//%s has regained %d points of lost %s
	L"���� ������ ���������� ������� ������ ����������.",
	L"��������� ����� ������� ���������� �� ������� �������� ������� � �������-�������!",	
	L"%s �������� ���� � ��� � ������ �� ����� � ������ ����!",
/////
	L"��������: ���� ��������� ����!!!",
	L"%s [%d ����.]\n%s %1.1f %s",

};

STR16 New113HAMMessage[] = 
{
	// 0 - 5
	L"%s � ������ �������� ��������!",	//%s cowers in fear!	%s �������� �� ������!
	L"%s ������(�) � ����� ��������� ����!",	//%s is pinned down!
	L"%s ��� ����� ������� �������!",	//%s fires more rounds than intended!
	L"�� �� ������ ����������� ��������� � ���� �������.",	//You cannot train militia in this sector.
	L"��������� �������� %s.",	//Militia picks up %s.
	L"���������� ����������� ��������� ����� � ������� ����!",	//Cannot train militia with enemies present!
	// 6 - 10
	L"%s ����� ������ ����� ���������, ����� ����������� ����������.",	//%s lacks sufficient Leadership score to train militia.
	L"� ���� ������� �� ����� ���� �������� ��������� ����� ������ %d.",	//No more than %d Mobile Militia trainers are permitted in this sector.
	L"��� ��������� ���� � %s ��� ������ ���� ��� ����� ��������� ������!",	//No room in %s or around it for new Mobile Militia!
	L"����� ����� �� %d ���������� � ������ ������������ ������� ������ %s, ������ ��� ����� ����� ����������� ��������� ������.",	//You need to have %d Town Militia in each of %s's liberated sectors before you can train Mobile Militia here.
	L"���������� �������� � ��������� ����������� ���� ���� � �������!",	//Can't staff a facility while enemies are present!
	// 11 - 15
	L"%s ����� ���� ��������, ����� �������� � ��������� �����������.",	//%s lacks sufficient Wisdom to staff this facility.
	L"����������� %s ��������� ��������������� ����������.",	//The %s is already fully-staffed.
	L"���� ��� ����� ����� ��������� �������� ��� � $%d. �������� ����������?",	//It will cost $%d per hour to staff this facility. Do you wish to continue?
        L"� ��� ������������ ����� ����� �������� ������ � ����������� �� �������. $%d ���������, ��� ����� $%d. ������� ��� �� �����������.", //You have insufficient funds to pay for all Facility work today. $%d have been paid, but you still owe $%d. The locals are not pleased.",
        L"� ��� ������������ ����� ����� ��������� ���������� ����� ���� �������. ������ ���� �������� $%d. ������� ��� �� �����������.",
	// 16 - 20
	L"������������ ���� ���������� $%d ��� ������ �����������, � ��� ����� ����� ��� ��������!",	//You have an outstanding debt of $%d for Facility Operation, and no money to pay it off!
	L"������������ ���� ���������� $%d ��� ������ �����������. �� �� ������ ��������� ����� �� ������ � ����������� ���� �� �������� �������������.",	//You have an outstanding debt of $%d for Facility Operation. You can't assign this merc to facility duty until you have enough money to pay off the entire debt.
	L"������������ ���� ���������� $%d ��� ������ �����������. ��������� ������ �� �������������?",	//You have an outstanding debt of $%d for Facility Operation. Would you like to pay it all back?
	L"�/� � ���� �������",	//N/A in this sector
	L"������� ������",
	// 21 - 25
	L"������������ ����� ����� ��������� ����� �������� ���������. %d ���������� ���� ���������� � ��������� �����.",	//Insufficient funds to pay all enlisted militia! %d militia have disbanded and returned home.
};

// WANNE: This are the email texts, when one of the 4 new 1.13 MERC mercs have levelled up, that Speck sends
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16	New113MERCMercMailTexts[] =
{
	// Gaston: Text from Line 39 in Email.edt
	L"����������, ������� � ��������, ��� � ���������� ������� ������� ������� ������������� ���������� ��������� ��� ����������������� ������. � � ���� �. ����� � ",
	// Stogie: Text from Line 43 in Email.edt
	L"����������, ������� � ��������, ��� ��������� ������ ������� ���������� ����� '������' ������ �� ����� ��������� ��� ��������. � � ���� �. ����� � ", 
	// Tex: Text from Line 45 in Email.edt
	L"����� ������� � ��������, ��� ������� ����� ��������� ��� ��������� ����� ��������� ������. ������� ��� ������� ��� ��������, ����� ��������������� ��� �������. � � ���� �. ����� � ",
	// Biggens: Text from Line 49 in Email.edt
	L"������ � �����������, ��� �������� ������ ���������� ��������� �������� ����������� ��������� � ���� ��������� ��������. ������������� ������� �������������� � �������� �������. � � ���� �. ����� � ",
};

// TODO.Translate
// WANNE: This is email text (each 2 line), when we left a message on AIM and now the merc is back
STR16	New113AIMMercMailTexts[] =
{
	// Monk
	L"FW � ������� A.I.M.: ������ �� ������� �����������",
	L"������. ��� ����. ������� ���� ���������. � ��������, ��� ��� ������ �� ���� ���������. � � ��� ������. �",

	// Brain
	L"FW � ������� A.I.M.: ������ �� ���� ������",
	L"� ����� �������� �������. ��� ����� ���� ���� ����� � �����. � � ���� ����� �",

	// Scream
	L"FW � ������� A.I.M.: ������ �� �������� ������",
	L"������� ������ ��������!",

	// Henning
	L"FW � ������� A.I.M.: ������ �� �������� ��� �������",
	L"������� ���� ���������, �������. ���� ������ �������� ������, ������� �� ���� �� ����� A.I.M. �� �������! � � ������� ��� ������ �",

	// Luc
	L"FW � ������� A.I.M.: ������ �� ���� �����",
	L"�������� �������, �����! � ������������� ��������� ���� �����������. �� ������, ��� ���� �����. � � ��� � ����������� �",

	// Laura
	L"FW � ������� A.I.M.: ������ �� ���� �����",
	L"������! �������, ��� �������� ���������. ������ ���������. � � ������� ����� � A.I.M. �������� �� �������� ������. � � � ���������! � � ��. ���� ����� � � P.S. �������, Monk ��� � ����� �������? �",

	// Grace
	L"FW � ������� A.I.M.: ������ �� ��������� ��������",
	L"�� ������ ��������� �� ����, �� ��������.� � �������� ��������. �����, �� ���������. � ��� ������ �� ����� � ���� ����. ���� �� ����� ��������� �� ���� ����� ���� A.I.M. � � ���! �",

	// Rudolf
	L"FW � ������� A.I.M.: ������ �� �������� ��������",
	L"�� ������, ������� ������� � ������� ������ ����? ����� �������� �������, ��� ����� ��������� ���. � � �� � ��������, ���� ���� ���� ��� ���� ��������������.�",

	// WANNE: Generic mail, for additional merc made by modders, index >= 178
	L"FW � ������� A.I.M.: ������ ��������",
	L"� �� �����. ��� ������ ����� �������� ������� ���������.�",
};

// WANNE: These are the missing skills from the impass.edt file
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16 MissingIMPSkillsDescriptions[] =
{
	// Sniper
	L"�������: � ��� ����� �������. � ��������� ����� �� ������������� ����������� �������� � ��� � ���������� 100 ������! � ",	//Sniper: Eyes of a hawk, you can shoot the wings from a fly at a hundred yards!
	// Camouflage
	L"����������: �� ����� ���� ����� �������� ��������������! � ",	//Camouflage: Beside you, even bushes look synthetic!
	// Ranger
	L"��������: ��� ��������� �� ������, �� ����� ���� �������� �����������! �� ������ ����������� �������� ����, ����� ���������� ��� �����, � ������ �������� �� ����� ������� ����� � ����. � ",	//Ranger: Those amateurs from Texas have nothing on you!
	// Gunslinger
	L"������: � ����� �����������, ���� � ����� - �� ��� �� ������ ��� ����� ���! � ",	//Gunslinger: With one handgun or two, you can be as lethal as Billy the Kid!
	// Squadleader
	L"��������: ����������� �����, ������� ������ ���������� ���! � ",	//Squadleader: A natural leader, your squadmates look to you for inspiration!
	// Technician
	L"�������: ����� ��������� �� ��������� � ���� ������ �����! ��������, ����������� ��� ���������� - �� �������������� ��� ������! � ",	//Technician: MacGyver's got nothing on you! Mechanical, electronic or explosive, you can fix it!
	// Doctor
	L"������: ���� �� �������� ��� �������� �����, ����� ��������� ��� �� ��������, ������� ����-������ - �� � �������� ���������� � ����� �������! � ",	//Doctor: From grazes to gutshot, to amputations, you can heal them all!
	// Athletics
	L"���������: ���� �������� � ������������ �������� ���������! � ",	//Athletics: Your speed and vitality are worthy of an Olympian!
	// Bodybuilding
	L"����������: �����? �� �� ������! �� � �������� �������� ��� ����� �����! � ",	//Bodybuilding: Arnie? What a wimp! You could beat him with one arm behind your back!
	// Demolitions
	L"���������: ����� �������, ��� ������ �� ����; ���������� ����, ��� �������� ������ - ����� � ������� 20 �����; � ����� ��������� �� ����� �����������... ��� ��, ���� ���� �� �����! � ",	//Demolitions: Sowing grenades like seeds, planting bombs, watching the limbs flying.. This is what you live for!
	// Scouting
	L"���������: ����� �� �������� �� ������ ������� �������! � ",	//Scouting: Nothing can escape your notice!
};

STR16 NewInvMessage[] = 
{
	L"� ������ ������ ������� ������ ������.",
	L"�� �� ������ ������������ ������ 2 �������.",
	L"�� �������� ���� ������...",
	L"����� ������� �������� ���� �� ����� �����.",
	L"�� �� ������ ������������� � �������� ��������.",
	L"�� ������� ��� ������ ������� ���� ���� ����� ������� ����������� ��������� �������?",
	L"�� ������� ��� ������ ��������� ���� ����, ���������� � ���� �������?",
	L"���������� ����� ���������� � ������ �������� �� �����. ����� ������?",
};

// WANNE - MP: Multiplayer messages
STR16 MPServerMessage[] =
{
	// 0
	L"����������� ������ RakNet...",
	L"������ �������, �������� �����������...",
	L"������ ��� ���� ������������ � �������, ����� '2'.",
	L"������ ��� �������.",
	L"�� ������� ��������� ������. ��������� ������.",
	// 5
	L"%d/%d �������� ������ � ������ ��������� �������.",
	L"������ ���������� � ��������� ���� ������.",
	L"������ �� �������.",
	L"��������� ����������, ������ ��� ��� �����������...",
	L"�� �� ������ �������� ���� ������� ����� ������� �������.",
	// 10
	L"�������� ����� '%S' - 100/100",	//Sent file '%S' - 100/100
	L"��������� �������� ������ ��� '%S'.",	//Finished sending files to '%S'.
	L"������ �������� ������ ��� '%S'.",	//Started sending files to '%S'.
};

STR16 MPClientMessage[] =
{
	// 0
	L"����������� ������ RakNet...",		
	L"����������� � IP: %S ...",
	L"�������� ��������� ����:",
	L"�� ��� ����������.",
	L"�� ��� �������������...",
	// 5
	L"������ �%d - '%S' ����� %s.",
	L"������ �%d - '%S' ����� ��� �����.",
	L"�� ������ � ��� (����� ������ = %d/%d).",
	L"�� �������� ���������� � ��� (����� ������ = %d/%d).",
	L"������ ������������� � ����� �����...",	//'Starting battle...'
	// 10
	L"������ �%d - '%S' ����� � ��� (����� ������ = %d/%d).",
	L"������ �%d - '%S' ������� ���������� � ��� (����� ������ = %d/%d).",
	L"������, �� ��� ������ � ���, ������, �������� ��������� ���������. (���� ������ �������� ������������ ����� ������, ������� ������ '��').",
	L"������ �� �����!",
	L"��� ������ ���� ���������� ��������� ������.",
	// 15
	L"���� �� ����� ���� ������, �� �� ������ �� ������ �����.",
	L"����, ����� ������ ���� ����� �� ������ � �������...",
	L"����������",			//Interrupted
	L"����������� ����� ���������",	//Finish from interrupt
	L"���������� �������:",		//Mouse Grid Coordinates
	// 20
	L"X: %d, Y: %d",
	L"����� ��������: %d",		//Grid Number
	L"�������� ���� ��� �������.",
	L"�������� ����� ������� ���� ������������� ���������:  ('1' - ������� ������/���� ������)  ('2' - ���������/��������� �������)  ('3' - �������������� ���������������� ���������)  ('4' - ��������� �����������)",
	L"Sector=%s, Max Clients=%d, Max Mercs=%d, Game_Mode=%d, Same Merc=%d, Damage Multiplier=%f, Timed Turns=%d, Secs/Tic=%d, Dis BobbyRay=%d, Dis Aim/Merc Equip=%d, Dis Morale=%d, Testing=%d",
	// 25
	L"",
	L"����� �����: ������ �%d - '%S'.",
	L"�������: %d.",//not used any more
	L"%s (������ %d - '%S') ��� ���� %s (������ %d - '%S')",
	L"������ �%d - '%S' ������� �� ����.",
	// 30
	L"������������� ���� ��� �������: �1 - '%S' | �2 - '%S' | �3 - '%S' | �4 - '%S'",
	L"������� ��� ������� �%d",
	L"������ �������� � ����� ��������� �����...",
	L"������� � ����� ��������� �������.",
	L"������: ���-�� ����� �� ���, ��������� �������.",
	// 35
	L"������� ������ � �������? (������� ��� ��� ������ ������������?)",
	L"�������� ��� ������ ������ � �������. ����������� � ����� ������!",
	L"�����������.",
	L"������ �� ����� �������� ���� �������, �������� ���� �������.",
	L"�� ���������� �� ����������� �������, ������ ��� ��� �� ��������� � ������� ����.",
	// 40
	L"��� ���� ����� ���� �����!",
	L"������������� ����� ����������.",
	L"�� ��������� ���������!",
	L"��������, �������� �� ����� � ������� ���� ���������.",
	L"�� ������ %s.",
	// 45
	L"�� �� ������ �������� ����� ����� ������ �������.",
	L"����� �������� �� '%s'",
	L"������ '%s' ����������, ������� ��� �� ����.",
	L"�� ���� ��������� �� ����, ������������ � ������� ����.",
	L"������������ �� �������. ��������� ������� ����� 5 ������ (�������� %i �������)",
	//50
	L"������������ �� �������, ������...",
	L"�� �� ������ ������ ���� �� ����� ����������� ������ �������.",
	L"%s : %s",
	L"��������� ����",
	L"������ ���������",
	// 55
	L"�� ���� �������������� � ����. ���� ��� ��������.",
	L"%s (�������): %s",
	L"#%i - '%s'",
	L"%S - 100/100",
	L"%S - %i/100",
	// 60
	L"�� ������� �������� ��� ����������� �����.",
	L"'%S' ������� � ������� ���������.",
	L"'%S' ������ ������� � �������.",
	L"������ ������ ���� ���� ��� ������ �� ��������� ���� ������ �� �������.",
	L"��� ���� �� ���� ������� ���������� ������� ��������� ��������� �����, ������� ����������?",
	// 65
	L"������� '�����' ��� ����� �� ����������� �����.",
	L"�� ������ ������������. ������ ������ ������� (%S) ���������� �� ������ ������� (%S).",
	L"�� ����� ���������� �������.",
	L"������ ��������� ���� ������ ��� ��� ������� ����������.",
	L"���� �� ������� ������� � ����� ��������� (NIV), � ��������� ���� ���������� ������ �� �������������� NIV.",
	// 70
	// TODO.Translate
	L"���������� ��������� �������� ���� '%S'",
	L"%s's ����� ���� ��������� &s",
	L"�� ���������. ���� � ����!",	// All over red rover
	L"Spectator mode disabled",
	L"������� ����� �������, ������� ����� �������:",	//Choose client number to kick
	// 75
	L"������� #%d ����������.",
	L"������ ��� ������� �������. ���������� ��������.",
	L"������ ������������ � ������.",
	L"������ �� �������.",
};

STR16 gszMPEdgesText[] =
{
	L"�",	//N
	L"�",	//S
	L"�",	//E
	L"�",	//W
	L"�",	// "C"enter
};

STR16 gszMPTeamNames[] =
{
	L"��������",	//Foxtrot
	L"�����",	//Bravo
	L"������",	//Delta
	L"�����",	//Charlie
	L"�/�",		// Acronym of Not Applicable
};

STR16 gszMPMapscreenText[] =
{
	L"��� ����: ",		//Game Type: 
	L"�������: ",		//Players: 
	L"����� ������: ",	//Mercs each: 
	L"������ �������� ������� ������� ������ ����� �������� �������.",
	L"������ �������� ��� ������� ����� �������� �������.",
	L"����. �����: ",	//Random Mercs: 
	L"��",			//Y
	L"���������:",		//Difficulty:
	L"������ �������:",	//Server Version:
};

STR16 gzMPSScreenText[] =
{
	L"����� �����",		//Scoreboard
	L"����������",		//Continue
	L"������",		//Cancel
	L"�����",		//Player
	L"�����",		//Kills
	L"�������",		//Deaths
	L"����������� �����",	//Queen's Army
	L"���������",		//Hits
	L"�������",		//Misses
	L"��������",		//Accuracy
	L"��������� ����",	//Damage Dealt
	L"���������� ����",	//Damage Taken
	L"���������, ����������, ���� ������ ����� ������ '����������'."
};

STR16 gzMPCScreenText[] =
{
	L"������",						//Cancel
	L"����������� � �������...",				//Connecting to Server
	L"������� ��������� �� �������...",			//Getting Server Settings
	L"�������� ��������� �����...",				//Downloading custom files
	L"������� 'ESC' ��� ������ ��� 'Y' ����� ����� � ���.",	//Press 'ESC' to cancel or 'Y' to chat
	L"������� 'ESC' ��� ������",				//Press 'ESC' to cancel
	L"���������."						//Ready
};

STR16 gzMPChatToggleText[] =
{
	L"�������� ����",
	L"�������� ������ ���������",
};

STR16 gzMPChatboxText[] =
{
	L"��� ������� ���� Jagged Alliance 2 v1.13",
	L"�������: ������� |�|�|�|� ��� �������� ���������, |�|�|�|� ��� ������ �� ����.",
};

STR16 pSkillTraitBeginIMPStrings[] =
{
	// For old traits
	L"�� ��������� �������� ��� ����� ������� ���������������� ������ � ������������ �� �������������� ������ �������. �� ������ ������� �� ����� ���� ������ ������ ��� ���� � ������� �� � ������������.",
	
	L"����� ������� ����� ���� ����� ��� ������ �������� ��� ����. ����� ��� ����� ���� �������������� ����� ��� ��������� ��������� ����������. ��������: ������ �����������, �������� � ���� ��� � ���������� �� ����� ���� �����������.",

	// For new major/minor traits
	L"��������� ���� - ����� �������, ������� ��������� ������������� ������ �������. �� ������ �������� ����� ������� �� ���� �������� �������, ������� ��������� ���� ����� � ������. �� ������ - �������������� ������, �������������� ������ �������� �����.", 
	L"����� ����� ����� �� ����� ��� �������. ���, ���� �� �� ������� �������� �����, �� ����� ����� ��� ��������������. ���� �� �� ������� ��� �������� ������ (��� ���� ����������), �� ����� �������� ���� ���� ��������������...",  
};

STR16 sgAttributeSelectionText[] = 
{
	L"��������������� ���� ���������� ��������� �������� ����� �������� ������������. � �� ����� �� ��������.",
	L"I.M.P.: ��������� � ������.",	//I.M.P. Attributes and skills review.
	L"�����:",	//Bonus Pts.
	L"��� �������",	//Starting Level
	// New strings for new traits
	L"�� ��������� �������� ������� ���� ���������� ��������� � ������. \"���������� ���������\" - ��� ��������, ��������, �����������, ���� � ��������. ��� �� ����� ���� ���� %d.", 
	L"���������� \"������\", � ������� �� ���������� ����������, ����� ���� ����������� � ����, ��� �������� ���������� ���������������� � ������ ��������.", 
	L"���������� ��� ��������� ����������� �� �������. ��������, ��� ������� ��� ��������� ���������� ������������ ���������� ��������, � �� �� ������ �������� �� ��������.",
};

STR16 pCharacterTraitBeginIMPStrings[] =
{
	L"I.M.P.: ������ ������ �������",	//I.M.P. Character Analysis
	L"��������� ��� - ������ ����� ������ �������. �� ������ �������� ��� �� ����� ����� ��������� ������ ���� ���������. �������, ��� ��� ����� ���� ����������� ��������� �� ��������� ����, �� ������� ����� ���� ����. �������� ���� ����� ���� ���������� ���� ����� ���������.",
	L"�� ������ �������� ��� ����� ��������� ������ �����������, �������, ��������, ���� � ���. ���� ������ ���� ���������� � ������, �������� ���. ������ ��������� ������ ��� �������, ����� ����� ������������ ����� ������������� ������������� ����������� ���������� � ���.",
};

STR16 gzIMPAttitudesText[]=
{
	L"����������",	//Normal
	L"�����������",	//Friendly
	L"��������",	//Loner
	L"��������",	//Optimist
	L"���������",	//Pessimist
	L"�����������",	//Aggressive
	L"������������",	//Arrogant
	L"������",	//Big Shot
	L"�����",	//Asshole
	L"����",	//Coward
	L"I.M.P.: ��������� �������",	//I.M.P. Attitudes
};

STR16 gzIMPCharacterTraitText[]=
{
	L"�������",	//Neutral
	L"�����������",	//Sociable
	L"��������",	//Loner
	L"��������",	//Optimist
	L"�������������",	//Assertive
	L"����������",	//Intellectual
	L"����������",	//Primitive
	L"�����������",	//Aggressive
	L"������������",	//Phlegmatic
	L"�����������",	//Dauntless
	L"�����������",	//Pacifist
	L"�������",	//Malicious
	L"�������",	//Show-off
	L"I.M.P.: ���������� ��������",	//I.M.P. Character Traits
};

STR16 gzIMPColorChoosingText[] = 
{
	L"I.M.P.: ��������� � ������������",
	L"I.M.P.: ���������",
	L"�������� ��������������� ����� ����� ����, ����� � ������, � ��� �� ������� ���� ������������.",
	L"�������� ��������������� ����� ����� ����, ����� � ������.",
	L"�������� ����� ����� ��� �������� \n������ ������� ����� �����.",
	L"\n(�����: ��� ����������� �������� ��� ��� �����.)",
};

STR16 sColorChoiceExplanationTexts[]=
{
	L"���� �����",	//Hair Color
	L"���� ����",	//Skin Color
	L"���� �����",	//Shirt Color
	L"���� ������",	//Pants Color
	L"���������� ������������",	//Normal Body
	L"����������� ������������",	//Big Body
};

STR16 gzIMPDisabilityTraitText[]=
{
	L"�������",	//No Disability
	L"��������������� ����",		//Heat Intolerant
	L"�������",		//Nervous
	L"�����������",	//Claustrophobic
	L"�� ������� �������",	//Nonswimmer
	L"������ ���������",	//Fear of Insects
	L"����������",		//Forgetful
	L"��������",		//Psychotic
	L"I.M.P.: ����������",	//I.M.P. Disabilities
};

// HEADROCK HAM 3.6: Error strings for assigning a merc to a facility
STR16 gzFacilityErrorMessage[]=
{
	L"%s �� ������� ���� ����� ��������� ��� ��������.",
	L"%s �� ������� �������� ����� ��������� ��� ��������.",
	L"%s �� ������� ����������� ����� ��������� ��� ��������.",
	L"%s �� ������� �������� ����� ��������� ��� ��������..",
	L"%s �� ������� �������� ����� ��������� ��� ��������.",
	L"%s �� ������� �������� ����� ��������� ��� ��������.",
	// 6 - 10
	L"%s �� ���������� ������ ����������� �����, ����� ��������� ��� ��������.",
	L"%s �� ���������� ������ ����� ��������, ����� ��������� ��� ��������.",
	L"%s �� ���������� ������� ���������, ����� ��������� ��� ��������.",
	L"%s �� ���������� ������ ����� ����������, ����� ��������� ��� ��������.",
	L"%s �� ���������� �����, ����� ��������� ��� ��������.",
	// 11 - 15
	L"� %s ������� ������ ������ ���, ����� ��������� ��� ��������",
	L"%s ������� �����(�), ����� ��������� ��� ��������.",
	L"� ������ %s ��� ���� �� ��������. ������� ������������ ��������� ���� ������.",
	L"������� ����� ����� ��� �������� � %s.",
	L"������� ����� ����� ��� ��������� ��� ������ � %s.",
	// 16 - 20
	L"%s �� ����� ����� ����, ������� ��������� � �������.",
	L"%s �������(�) ����� %s ���� ������� � ������� %s!",
	L"%s �������(�) ����� %s ���� ������� ��� %s � %s!",
	L"%s �������(�) ������ ���� �������(�) � ������� %s, � ������� ���������������� ����������� ������!",
	L"%s �������(�) ������ ���� �������(�) ��� %s � %s, � ������� ���������������� ����������� ������!",
	// 21 - 25
	L"%s �������(�) ������ ���� �������(�) � ������� %s. ������ ��������������.",
	L"%s �������(�) ������ ���� �������(�) ��� %s � %s. ������ ��������������.",
	L"������ ������ %s ���������� ���, ��� %s ��������� � �� ������.",
	L"������ ������ %s ���������� ������� %s � %s.",
	L"%s � ������� %s ������ ���������� ������� ��������� �� ��� �������!",
	// 26 - 30
	L"%s ������� ��� %s � %s �����(�) � ��������� ��������� �� ��� �������!",
	L"%s ����(�).",
	L"%s �������(�) � ������� %s, � ��������(�) �������� ������� ������.",
	L"%s �������(�) � �� ����� ���������� ������ ��� %s � %s.",
	L"%s �������(�) ������ � ������� %s.",
	L"%s �������(�) ��������� ������ � ������� %s.",


};

STR16 gzFacilityRiskResultStrings[]=
{
	L"����",	//Strength
	L"�����������",	//Agility
	L"��������",	//Dexterity
	L"���������",	//Wisdom
	L"��������",	//Health
	L"��������",	//Marksmanship
	// 5-10
	L"���������",	//Leadership
	L"��������",	//Mechanical skill
	L"��������",	//Medical skill
	L"����������",	//Explosives skill
};

STR16 gzFacilityAssignmentStrings[]=
{
	L"AMBIENT",
	L"����",	//Staff
	L"�����",
	L"������ �����",
	L"������ %s", // Vehicle name inserted here
	L"������ ������",
	// 6-10
	L"������",
	L"�������",
	L"������� ����",
	L"������� ��������",
	L"������� �����������",
	L"������� ��������",
	// 11-15
	L"������� ��������",
	L"������� ��������",
	L"������� ��������",
	L"������� ���������",
	L"������� ����������",
	// 16-20
	L"������ �� ����",
	L"������ �� ��������",
	L"������ �� �����������",
	L"������ �� ��������",
	L"������ �� ��������",
	// 21-25
	L"������ �� ��������",
	L"������ �� ��������",
	L"������ �� ���������",
	L"������ �� ����������",
	L"������ �� ����",
	// 26-30
	L"������ �� ��������",
	L"������ �� �����������",
	L"������ �� ��������",
	L"������ �� ��������",
	L"������ �� ��������",
	// 30-35
	L"������ �� ��������",
	L"������ �� ���������",
	L"������ �� ����������",
};

STR16 Additional113Text[]=
{
	L"��� ������� Jagged Alliance 2 v1.13 � ������� ������ ��������� ���������� 16-������ �������� ������������� ������",

	// TODO.Translate
	// WANNE: Savegame slots validation against INI file
	L"Internal error in reading %s slots from Savegame: Number of slots in Savegame (%d) differs from defined slots in ja2_options.ini settings (%d)",
	L"Mercenary (MAX_NUMBER_PLAYER_MERCS) / Vehicle (MAX_NUMBER_PLAYER_VEHICLES)", 
	L"Enemy (MAX_NUMBER_ENEMIES_IN_TACTICAL)", 
	L"Creature (MAX_NUMBER_CREATURES_IN_TACTICAL)", 
	L"Militia (MAX_NUMBER_MILITIA_IN_TACTICAL)", 
	L"Civilian (MAX_NUMBER_CIVS_IN_TACTICAL)",
};

STR16 sEnemyTauntsFireGun[]=
{
	L"������� �� ��������!",
	L"������������ � ���� �������!",
	L"��� � ������!",
	L"�� ���!",
	L"������!",
	L"���������, ������?",
	L"����� ������!",
	L"�����, �������!",
	L"�����! �� ���� �� ���� ��������!",
	L"��� � �������!",
	L"������� ��������!",
	L"����� ������� � ���������� �������, ���������!",
	L"��, �������?",
	L"����� �� ����, ������!",
	L"�-����!",
};

STR16 sEnemyTauntsFireLauncher[]=
{

	L"�����, �����... ������ �� ���� �����!",
	L"����� ���������!",
	L"���!",
	L"��������!",
};

STR16 sEnemyTauntsThrow[]=
{
	L"����!",
	L"�����!",
	L"���-���, ��-��-��! ������� ������ ���!",
	L"��� ����.",
	L"���-��-��!",
	L"����, �������!",
	L"������ ���� ������.",
};

STR16 sEnemyTauntsChargeKnife[]=
{
	L"���� ������ ���, ������!",
	L"��� � �������.",
	L"������ ��������� �� ���� �������!",
	L"�����, ��� ����� ������!",
	L"����!",
};

STR16 sEnemyTauntsRunAway[]=
{
	L"�������, �� � ������...",
	L"��� �������� �������� � �����, � �� � ��� ������!",
	L"� ���� ������!",
	L"� ��� ���!",
	L"��� �� ����������� �� ��� ������, ����� ������...",
	L"�������!",
	L"� �������! � ��� ����� ������!",

};

STR16 sEnemyTauntsSeekNoise[]=
{
	L"� ���� �����!",
	L"��� �����?",
	L"��� ��� ����?",
	L"��! ������...",

};

STR16 sEnemyTauntsAlert[]=
{
	L"��� �����!",
	L"������ ������� �������!",
	L"� ��������, ��� ����� ������� �� ��������...",

};

STR16 sEnemyTauntsGotHit[]=
{
	L"�-�-�-�-�!",
	L"�-�-�!",
	L"��� ��... ������!",
	L"���� ����!",
	L"�� ���������... �-�-��... �� ����.",
	L"��� ��!..",
	L"������ �� ����... ��������.",

};

//////////////////////////////////////////////////////
// HEADROCK HAM 4: Begin new UDB texts and tooltips
//////////////////////////////////////////////////////
STR16 gzItemDescTabButtonText[] =
{
	L"����������",
	L"���������",
	L"�������������",
};

STR16 gzItemDescTabButtonShortText[] =
{
	L"����.",
	L"���.",
	L"���.",
};

STR16 gzItemDescGenHeaders[] =
{
	L"��������",
	L"��������������",
	L"������� ��",
	L"�������� ��������",
};

STR16 gzItemDescGenIndexes[] =
{
	L"�����.",
	L"0",
	L"+/-",
	L"=",
};

STR16 gzUDBButtonTooltipText[]=
{
	L"|�|�|�|�|�|�|�|�|�|�|�|�|�|� |�|�|�|�|�:\n \n����� �� ������� ������������ \n� ����� ��������� ��������.",
	L"|�|�|�|�|�|�|�|�|�:\n \n����� �� ������� ������������ \n� ��������������� ���������� � ����������� ��������.",
	L"|�|�|�|�|�|�|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�|�|�:\n \n����� �� ������� ������������ \n� ��������, ��������� ������ ���������.",
};

STR16 gzUDBHeaderTooltipText[]=
{
	L"|�|�|�|�|�|�|�|� |�|�|�|�|�|�|�|�|�:\n \n�������� � ������ ����� ��������\n(������ / ����� / � ������).",
	L"|�|�|�|�|�|�|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�|�:\n \n�������������� �������� \n�/��� ��������� ��������� ��������������.",
	L"|�|�|�|�|�|�|�| |�|�:\n \n���������� ����� �������� ����������� \n�� �������� � ������ �������� � �������.",
	L"|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�| |- |�|�|�|�|�|�|�|�|�|:\n \n��������� ������� ������, \n���������� �������� ��������.",
};

STR16 gzUDBGenIndexTooltipText[]=
{
	L"|�|�|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�|�|�\n \n������� �������� �� ������ \n����� ������� ��� �� ������.",
	L"|�|�|�|�|�|�|�|�|�|�|� |�|�|�|�|�|�|�|�\n \n����������� �������� ��������� �������� \n(��� ������� � ������� ������� � ���������).",
	L"|�|�|�|�|�|�| |�|�|�|�|�|�|�\n \n������ ��� ������, ������������� \n��������, ���������� ��� ������������� ����.",
	L"|�|�|�|�|�|�|�|�|�| |�|�|�|�|�|�|�|�\n \n��������� �������� ���������� ��������, \n�������� ��� ������/������ ������� � ���������.",
};

STR16 gzUDBAdvIndexTooltipText[]=
{
	L"���������� ����������� ���������� \n(������� �������� �� ������ \n����� ������� ��� �� ������ ).",
	L"�����/����� ���� |�|�|�|�|�|�.",
	L"�����/����� ��� |�|�|�|�|�|�|�| |�|�|�|�.",
	L"�����/����� ���� |�|�|�|�|�|�|�.",
	L"����� �����/�����",
};

STR16 szUDBGenWeaponsStatsTooltipText[]=
{
	L"|A|c|c|u|r|a|c|y",
	L"|D|a|m|a|g|e",
	L"|R|a|n|g|e",
	L"|A|l|l|o|w|e|d |A|i|m|i|n|g |L|e|v|e|l|s",
	L"|S|c|o|p|e |M|a|g|n|i|f|i|c|a|t|i|o|n |F|a|c|t|o|r",
	L"|P|r|o|j|e|c|t|i|o|n |F|a|c|t|o|r",
	L"|H|i|d|d|e|n |M|u|z|z|l|e |F|l|a|s|h",
	L"|L|o|u|d|n|e|s|s",
	L"|R|e|l|i|a|b|i|l|i|t|y",
	L"|R|e|p|a|i|r |E|a|s|e",
	L"|M|i|n|. |R|a|n|g|e |f|o|r |A|i|m|i|n|g |B|o|n|u|s",
	L"|T|o|-|H|i|t |M|o|d|i|f|i|e|r",
	L"", // (12)
	L"|A|P|s |t|o |R|e|a|d|y",
	L"|A|P|s |t|o |A|t|t|a|c|k",
	L"|A|P|s |t|o |B|u|r|s|t",
	L"|A|P|s |t|o |A|u|t|o|f|i|r|e",
	L"|A|P|s |t|o |R|e|l|o|a|d",
	L"|A|P|s |t|o |R|e|c|h|a|m|b|e|r",
	L"|L|a|t|e|r|a|l |R|e|c|o|i|l",
	L"|V|e|r|t|i|c|a|l |R|e|c|o|i|l",
	L"|A|u|t|o|f|i|r|e |B|u|l|l|e|t|s |p|e|r |5 |A|P|s",
};

STR16 szUDBGenWeaponsStatsExplanationsTooltipText[]=
{
	L"\n \nDetermines whether bullets fired by\nthis gun will stray far from where\nit is pointed.\n \nScale: 0-100.\nHigher is better.",
	L"\n \nDetermines the average amount of damage done\nby bullets fired from this weapon, before\ntaking into account armor or armor-penetration.\n \nHigher is better.",
	L"\n \nThe maximum distance (in tiles) that\nbullets fired from this gun will travel\nbefore they begin dropping towards the\nground.\n \nHigher is better.",
	L"\n \nThis is the number of Extra Aiming\nLevels you can add when aiming this gun.\n \nThe FEWER aiming levels are allowed, the MORE\nbonus each aiming level gives you. Therefore,\nhaving FEWER levels makes the gun faster to aim,\nwithout making it any less accurate.\n \nLower is better.",
	L"\n \nWhen greater than 1.0, will proportionally reduce\naiming errors at a distance.\n \nRemember that high scope magnification is detrimental\nwhen the target is too close!\n \nA value of 1.0 means no scope is installed.",
	L"\n \nProportionally reduces aiming errors at a distance.\n \nThis effect works up to a given distance,\nthen begins to dissipate and eventually\ndisappears at sufficient range.\n \nHigher is better.",
	L"\n \nWhen this property is in effect, the weapon\nproduces no visible flash when firing.\n \nEnemies will not be able to spot you\njust by your muzzle flash (but they\nmight still HEAR you).",
	L"\n \nWhen firing this weapon, Loudness is the\ndistance (in tiles) that the sound of\ngunfire will travel.\n \nEnemies within this distance will probably\nhear the shot.\n \nLower is better.",
	L"\n \nDetermines how quickly this weapon will degrade\nwith use.\n \nHigher is better.",
	L"\n \nDetermines how difficult it is to repair this weapon.\n \nHigher is better.",
	L"\n \nThe minimum range at which a scope can provide it's aimBonus.",
	L"\n \nTo hit modifier granted by laser sights.",
	L"", // (12)
	L"\n \nThe number of APs required to bring this\nweapon up to firing stance.\n \nOnce the weapon is raised, you may fire repeatedly\nwithout paying this cost again.\n \nA weapon is automatically 'Unreadied' if its\nwielder performs any action other than\nfiring or turning.\n \nLower is better.",
	L"\n \nThe number of APs required to perform\na single attack with this weapon.\n \nFor guns, this is the cost of firing\na single shot without extra aiming.\n \nIf this icon is greyed-out, single-shots\n are not possible with this weapon.\n \nLower is better.",
	L"\n \nThe number of APs required to fire\na burst.\n \nThe number of bullets fired in each burst is\ndetermined by the weapon itself, and indicated\nby the number of bullets shown on this icon.\n \nIf this icon is greyed-out, burst fire\nis not possible with this weapon.\n \nLower is better.",
	L"\n \nThe number of APs required to fire\nan Autofire Volley of three bullets.\n \nIf you wish to fire more than 3 bullets,\nyou will need to pay extra APs.\n \nIf this icon is greyed-out, autofire\nis not possible with this weapon.\n \nLower is better.",
	L"\n \nThe number of APs required to reload\nthis weapon.\n \nLower is better.",
	L"\n \nThe number of APs required to rechamber this weapon\nbetween each and every shot fired.\n \nLower is better.",
	L"\n \nThe distance this weapon's muzzle will shift\nhorizontally between each and every bullet in a\nburst or autofire volley.\n \nPositive numbers indicate shifting to the right.\nNegative numbers indicate shifting to the left.\n \nCloser to 0 is better.",
	L"\n \nThe distance this weapon's muzzle will shift\nvertically between each and every bullet in a\nburst or autofire volley.\n \nPositive numbers indicate shifting upwards.\nNegative numbers indicate shifting downwards.\n \nCloser to 0 is better.",
	L"\n \nIndicates the number of bullets that will be added\nto an autofire volley for every extra 5 APs\nyou spend.\n \nHigher is better.",
};

STR16 szUDBGenArmorStatsTooltipText[]=
{
	L"|P|r|o|t|e|c|t|i|o|n |V|a|l|u|e",
	L"|C|o|v|e|r|a|g|e",
	L"|D|e|g|r|a|d|e |R|a|t|e",
};

STR16 szUDBGenArmorStatsExplanationsTooltipText[]=
{
	L"\n \nThis primary armor property defines how much\ndamage the armor will absorb from any attack.\n \nRemember that armor-piercing attacks and\nvarious randomal factors may alter the\nfinal damage reduction.\n \nHigher is better.",
	L"\n \nDetermines how much of the protected\nbodypart is covered by the armor.\n \nIf coverage is below 100%, attacks have\na certain chance of bypassing the armor\ncompletely, causing maximum damage\nto the protected bodypart.\n \nHigher is better.",
	L"\n \nIndicates how quickly this armor's condition\ndrops when it is struck, proportional to\nthe damage caused by the attack.\n \nLower is better.",
};

STR16 szUDBGenAmmoStatsTooltipText[]=
{
	L"|A|r|m|o|r |P|i|e|r|c|i|n|g",
	L"|B|u|l|l|e|t |T|u|m|b|l|e",
	L"|P|r|e|-|I|m|p|a|c|t |E|x|p|l|o|s|i|o|n",
};

STR16 szUDBGenAmmoStatsExplanationsTooltipText[]=
{
	L"\n \nThis is the bullet's ability to penetrate\na target's armor.\n \nWhen above 1.0, the bullet proportionally\nreduces the Protection value of any\narmor it hits.\n \nWhen below 1.0, the bullet increases the\nprotection value of the armor instead.\n \nHigher is better.",
	L"\n \nDetermines a proportional increase of damage\npotential once the bullet gets through the\ntarget's armor and hits the bodypart behind it.\n \nWhen above 1.0, the bullet's damage\nincreases after penetrating the armor.\n \nWhen below 1.0, the bullet's damage\npotential decreases after passing through armor.\n \nHigher is better.",
	L"\n \nA multiplier to the bullet's damage potential\nthat is applied immediately before hitting the\ntarget.\n \nValues above 1.0 indicate an increase in damage,\nvalues below 1.0 indicate a decrease.\n \nHigher is better.",
};

STR16 szUDBGenExplosiveStatsTooltipText[]=
{
	L"|D|a|m|a|g|e",
	L"|S|t|u|n |D|a|m|a|g|e",
	L"|B|l|a|s|t |R|a|d|i|u|s",
	L"|S|t|u|n |B|l|a|s|t |R|a|d|i|u|s",
	L"|N|o|i|s|e |B|l|a|s|t |R|a|d|i|u|s",
	L"|T|e|a|r|g|a|s |S|t|a|r|t |R|a|d|i|u|s",
	L"|M|u|s|t|a|r|d |G|a|s |S|t|a|r|t |R|a|d|i|u|s",
	L"|L|i|g|h|t |S|t|a|r|t |R|a|d|i|u|s",
	L"|S|m|o|k|e |S|t|a|r|t |R|a|d|i|u|s",
	L"|I|n|c|e|n|d|i|a|r|y |S|t|a|r|t |R|a|d|i|u|s",
	L"|T|e|a|r|g|a|s |E|n|d |R|a|d|i|u|s",
	L"|M|u|s|t|a|r|d |G|a|s |E|n|d |R|a|d|i|u|s",
	L"|L|i|g|h|t |E|n|d |R|a|d|i|u|s",
	L"|S|m|o|k|e |E|n|d |R|a|d|i|u|s",
	L"|I|n|c|e|n|d|i|a|r|y |E|n|d |R|a|d|i|u|s",
	L"|E|f|f|e|c|t |D|u|r|a|t|i|o|n",
	L"|L|o|u|d|n|e|s|s",
	L"|V|o|l|a|t|i|l|i|t|y",
};

STR16 szUDBGenExplosiveStatsExplanationsTooltipText[]=
{
	L"\n \nThe amount of damage caused by this explosive.\n \nNote that blast-type explosives deliver this damage\nonly once (when they go off), while prolonged effect\nexplosives deliver this amount of damage every turn until the\neffect dissipates.\n \nHigher is better.",
	L"\n \nThe amount of non-lethal (stun) damage caused\nby this explosive.\n \nNote that blast-type explosives deliver their damage\nonly once (when they go off), while prolonged effect\nexplosives deliver this amount of stun damage every\nturn until the effect dissipates.\n \nHigher is better.",
	L"\n \nThis is the radius of the explosive blast caused by\nthis explosive item.\n \nTargets will suffer less damage the further they are\nfrom the center of the explosion.\n \nHigher is better.",
	L"\n \nThis is the radius of the stun-blast caused by\nthis explosive item.\n \nTargets will suffer less damage the further they are\nfrom the center of the blast.\n \nHigher is better.",
	L"\n \nThis is the distance that the noise from this\ntrap will travel. Soldiers within this distance\nare likely to hear the noise and be alerted.\n \nHigher is better.",
	L"\n \nThis is the starting radius of the tear-gas\nreleased by this explosive item.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn,\nunless wearing a gas mask.\n \nAlso note the end radius and duration\nof the effect (displayed below).\n \nHigher is better.",
	L"\n \nThis is the starting radius of the mustard-gas\nreleased by this explosive item.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn,\nunless wearing a gas mask.\n \nAlso note the end radius and duration\nof the effect (displayed below).\n \nHigher is better.",
	L"\n \nThis is the starting radius of the light\nemitted by this explosive item.\n \nTiles close to the center of the effect will become\nvery bright, while tiles nearer the edge\nwill only be a little brighter than normal.\n \nAlso note the end radius and duration\nof the effect (displayed below).\n \nAlso remember that unlike other explosives with\ntimed effects, the light effect gets SMALLER\nover time, until it disappears.\n \nHigher is better.",
	L"\n \nThis is the starting radius of the smoke\nreleased by this explosive item.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn\n(if any), unless wearing a gas mask. More importantly,\nanyone inside the cloud becomes extremely difficult to spot,\nand also loses a large chunk of sight-range themselves.\n \nAlso note the end radius and duration\nof the effect (displayed below).\n \nHigher is better.",
	L"\n \nThis is the starting radius of the flames\ncaused by this explosive item.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn.\n \nAlso note the end radius and duration of the effect\n(displayed below).\n \nHigher is better.",
	L"\n \nThis is the final radius of the tear-gas released\nby this explosive item before it dissipates.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn,\nunless wearing a gas mask.\n \nAlso note the start radius and duration\nof the effect.\n \nHigher is better.",
	L"\n \nThis is the final radius of the mustard-gas released\nby this explosive item before it dissipates.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn,\nunless wearing a gas mask.\n \nAlso note the start radius and duration\nof the effect.\n \nHigher is better.",
	L"\n \nThis is the final radius of the light emitted\nby this explosive item before it dissipates.\n \nTiles close to the center of the effect will become\nvery bright, while tiles nearer the edge\nwill only be a little brighter than normal.\n \nAlso note the start radius and duration\nof the effect.\n \nAlso remember that unlike other explosives with\ntimed effects, the light effect gets SMALLER\nover time, until it disappears.\n \nHigher is better.",
	L"\n \nThis is the final radius of the smoke released\nby this explosive item before it dissipates.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn\n(if any), unless wearing a gas mask. More importantly,\nanyone inside the cloud becomes extremely difficult to spot,\nand also loses a large chunk of sight-range themselves.\n \nAlso note the start radius and duration\nof the effect.\n \nHigher is better.",
	L"\n \nThis is the final radius of the flames caused\nby this explosive item before they dissipate.\n \nEnemies caught within the radius will suffer\nthe listed damage and stun-damage each turn.\n \nAlso note the start radius and duration of the effect.\n \nHigher is better.",
	L"\n \nThis is the duration of the explosive effect.\n \nEach turn, the radius of the effect will grow by\none tile in every direction, until reaching\nthe listed End Radius.\n \nOnce the duration has been reached, the effect\ndissipates completely.\n \nNote that light-type explosives become SMALLER\nover time, unlike other effects.\n \nHigher is better.",
	L"\n \nThis is the distance (in Tiles) within which\nsoldiers and mercs will hear the explosion when\nit goes off.\n \nEnemies hearing the explosion will be alerted to your\npresence.\n \nLower is better.",
	L"\n \nThis value represents a chance (out of 100) for this\nexplosive to spontaneously explode whenever it is damaged\n(for instance, when other explosions go off nearby).\n \nCarrying highly-volatile explosives into combat\nis therefore extremely risky and should be avoided.\n \nScale: 0-100.\nLower is better.",
};

STR16 szUDBGenSecondaryStatsTooltipText[]=
{
	L"|T|r|a|c|e|r |A|m|m|o",
	L"|A|n|t|i|-|T|a|n|k |A|m|m|o",
	L"|I|g|n|o|r|e|s |A|r|m|o|r",
	L"|A|c|i|d|i|c |A|m|m|o",
	L"|L|o|c|k|-|B|u|s|t|i|n|g |A|m|m|o",
	L"|R|e|s|i|s|t|a|n|t |t|o |E|x|p|l|o|s|i|v|e|s",
	L"|W|a|t|e|r|p|r|o|o|f",
	L"|E|l|e|c|t|r|o|n|i|c",
	L"|G|a|s |M|a|s|k",
	L"|N|e|e|d|s |B|a|t|t|e|r|i|e|s",
	L"|C|a|n |P|i|c|k |L|o|c|k|s",
	L"|C|a|n |C|u|t |W|i|r|e|s",
	L"|C|a|n |S|m|a|s|h |L|o|c|k|s",
	L"|M|e|t|a|l |D|e|t|e|c|t|o|r",
	L"|R|e|m|o|t|e |T|r|i|g|g|e|r",
	L"|R|e|m|o|t|e |D|e|t|o|n|a|t|o|r",
	L"|T|i|m|e|r |D|e|t|o|n|a|t|o|r",
	L"|C|o|n|t|a|i|n|s |G|a|s|o|l|i|n|e",
	L"|T|o|o|l |K|i|t",
	L"|T|h|e|r|m|a|l |O|p|t|i|c|s",
	L"|X|-|R|a|y |D|e|v|i|c|e",
	L"|C|o|n|t|a|i|n|s |D|r|i|n|k|i|n|g |W|a|t|e|r",
	L"|C|o|n|t|a|i|n|s |A|l|c|o|h|o|l",
	L"|F|i|r|s|t |A|i|d |K|i|t",
	L"|M|e|d|i|c|a|l |K|i|t",
	L"|L|o|c|k |B|o|m|b",
};

STR16 szUDBGenSecondaryStatsExplanationsTooltipText[]=
{
	L"\n \nThis ammo creates a tracer effect when firedin\nfull-auto or burst mode.\n \nTracer fire helps keep the volley accurate\nand thus deadly despite the gun's recoil.\n \nAlso, tracer bullets create paths of light that\ncan reveal a target in darkness. However, they\nalso reveal the shooter to the enemy!\n \nTracer Bullets automatically disable any\nMuzzle Flash Suppression items installed on the\nsame weapon.",
	L"\n \nThis ammo can damage the armor on a tank.\n \nAmmo WITHOUT this property will do no damage\nat all to tanks.\n \nEven with this property, remember that most guns\ndon't cause enough damage anyway, so don't\nexpect too much.",
	L"\n \nThis ammo ignores armor completely.\n \nWhen fired at an armored target, it will behave\nas though the target is completely unarmored,\nand thus transfer all its damage potential to the target!",
	L"\n \nWhen this ammo strikes the armor on a target,\n \nit will cause that armor to degrade rapidly.\n \nThis can potentially strip a target of its\narmor!",
	L"\n \nThis type of ammo is exceptional at breaking locks.\n \nFire it directly at a locked door or container\nto cause massive damage to the lock.",
	L"\n \nThis armor is three times more resistant\nagainst explosives than it should be, given\nits Protection value.\n \nWhen an explosion hits the armor, its Protection\nvalue is considered three times higher than\nthe listed value.",
	L"\n \nThis item is imprevious to water. It does not\nreceive damage from being submerged.\n \nItems WITHOUT this property will gradually deteriorate\nif the person carrying them goes for a swim.",
	L"\n \nThis item is electronic in nature, and contains\ncomplex circuitry.\n \nElectronic items are inherently more difficult\nto repair, at least without the ELECTRONICS skill.",
	L"\n \nWhen this item is worn on a character's face,\nit will protect them from all sorts of noxious gasses.\n \nNote that some gasses are corrosive, and might eat\nright through the mask...",
	L"\n \nThis item requires batteries. Without batteries,\nyou cannot activate its primary abilities.\n \nTo use a set of batteries, attach them to\nthis item as you would a scope to a rifle.",
	L"\n \nThis item can be used to pick open locked\ndoors or containers.\n \nLockpicking is silent, although it requires\nsubstantial mechanical skill to pick anything\nbut the simplest locks.",
	L"\n \nThis item can be used to cut through wire fences.\n \nThis allows a character to rapidly move through\nfenced areas, possibly outflanking the enemy!",
	L"\n \nThis item can be used to smash open locked\ndoors or containers.\n \nLock-smashing requires substantial strength,\ngenerates a lot of noise, and can easily\ntire a character out. However, it is a good\nway to get through locks without superior skills or\ncomplicated tools.",
	L"\n \nThis item can be used to detect metallic objects\nunder the ground.\n \nNaturally, its primary function is to detect\nmines without the necessary skills to spot them\nwith the naked eye.\n \nMaybe you'll find some buried treasure too.",
	L"\n \nThis item can be used to detonate a bomb\nwhich has been set with a remote detonator.\n \nPlant the bomb first, then use the\nRemote Trigger item to set it off when the\ntime is right.",
	L"\n \nWhen attached to an explosive device and set up\nin the right position, this detonator can be triggered\nby a (separate) remote device.\n \nRemote Detonators are great for setting traps,\nbecause they only go off when you tell them to.\n \nAlso, you have plenty of time to get away!",
	L"\n \nWhen attached to an explosive device and set up\nin the right position, this detonator will count down\nfrom the set amount of time, and explode once the\ntimer expires.\n \nTimer Detonators are cheap and easy to install,\nbut you'll need to time them just right to give\nyourself enough chance to get away!",
	L"\n \nThis item contains gasoline (fuel).\n \nIt might come in handy if you ever\nneed to fill up a gas tank...",
	L"\n \nThis item contains various tools that can\nbe used to repair other items.\n \nA toolkit item is always required when setting\na character to repair duty.",
	L"\n \nWhen worn in a face-slot, this item provides\nthe ability to spot enemies through walls,\nthanks to their heat signature.",
	L"\n \nThis powerful device can be used to scan\nfor enemies using X-rays.\n \nIt will reveal all enemies within a certain radius\nfor a short period of time.\n \nKeep away from reproductive organs!",
	L"\n \nThis item contains fresh drinking water.\nUse when thirsty.",
	L"\n \nThis item contains liquor, alcohol, booze,\nwhatever you fancy calling it.\n \nUse with caution. Do not drink and drive.\nMay cause cirrhosis of the liver.",
	L"\n \nThis is a basic field medical kit, containing\nitems required to provide basic medical aid.\n \nIt can be used to bandage wounded characters\nand prevent bleeding.\n \nFor actual healing, use a proper Medical Kit\nand/or plenty of rest.",
	L"\n \nThis is a proper medical kit, which can\nbe used in surgery and other serious medicinal\npurposes.\n \nMedical Kits are always required when setting\na character to Doctoring duty.",
	L"\n \nThis item can be used to blast open locked\ndoors and containers.\n \nExplosives skill is required to avoid\npremature detonation.\n \nBlowing locks is a relatively easy way of quickly\ngetting through locked doors. However,\nit is very loud, and dangerous to most characters.",
};

STR16 szUDBAdvStatsTooltipText[]=
{
	L"|A|c|c|u|r|a|c|y |M|o|d|i|f|i|e|r",
	L"|F|l|a|t |S|n|a|p|s|h|o|t |M|o|d|i|f|i|e|r",
	L"|P|e|r|c|e|n|t |S|n|a|p|s|h|o|t |M|o|d|i|f|i|e|r",
	L"|F|l|a|t |A|i|m|i|n|g |M|o|d|i|f|i|e|r",
	L"|P|e|r|c|e|n|t |A|i|m|i|n|g |M|o|d|i|f|i|e|r",
	L"|A|l|l|o|w|e|d |A|i|m|i|n|g |L|e|v|e|l|s |M|o|d|i|f|i|e|r",
	L"|A|i|m|i|n|g |C|a|p |M|o|d|i|f|i|e|r",
	L"|G|u|n |H|a|n|d|l|i|n|g |M|o|d|i|f|i|e|r",
	L"|D|r|o|p |C|o|m|p|e|n|s|a|t|i|o|n |M|o|d|i|f|i|e|r",
	L"|T|a|r|g|e|t |T|r|a|c|k|i|n|g |M|o|d|i|f|i|e|r",
	L"|D|a|m|a|g|e |M|o|d|i|f|i|e|r",
	L"|M|e|l|e|e |D|a|m|a|g|e |M|o|d|i|f|i|e|r",
	L"|R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|S|c|o|p|e |M|a|g|n|i|f|i|c|a|t|i|o|n |F|a|c|t|o|r",
	L"|P|r|o|j|e|c|t|i|o|n |F|a|c|t|o|r",
	L"|L|a|t|e|r|a|l |R|e|c|o|i|l |M|o|d|i|f|i|e|r",
	L"|V|e|r|t|i|c|a|l |R|e|c|o|i|l |M|o|d|i|f|i|e|r",
	L"|M|a|x|i|m|u|m |C|o|u|n|t|e|r|-|F|o|r|c|e |M|o|d|i|f|i|e|r",
	L"|C|o|u|n|t|e|r|-|F|o|r|c|e |A|c|c|u|r|a|c|y |M|o|d|i|f|i|e|r",
	L"|C|o|u|n|t|e|r|-|F|o|r|c|e |F|r|e|q|u|e|n|c|y |M|o|d|i|f|i|e|r",
	L"|T|o|t|a|l |A|P |M|o|d|i|f|i|e|r",
	L"|A|P|-|t|o|-|R|e|a|d|y |M|o|d|i|f|i|e|r",
	L"|S|i|n|g|l|e|-|a|t|t|a|c|k |A|P |M|o|d|i|f|i|e|r",
	L"|B|u|r|s|t |A|P |M|o|d|i|f|i|e|r",
	L"|A|u|t|o|f|i|r|e |A|P |M|o|d|i|f|i|e|r",
	L"|R|e|l|o|a|d |A|P |M|o|d|i|f|i|e|r",
	L"|M|a|g|a|z|i|n|e |S|i|z|e |M|o|d|i|f|i|e|r",
	L"|B|u|r|s|t |S|i|z|e |M|o|d|i|f|i|e|r",
	L"|H|i|d|d|e|n |M|u|z|z|l|e |F|l|a|s|h",
	L"|L|o|u|d|n|e|s|s |M|o|d|i|f|i|e|r",
	L"|I|t|e|m |S|i|z|e |M|o|d|i|f|i|e|r",
	L"|R|e|l|i|a|b|i|l|i|t|y |M|o|d|i|f|i|e|r",
	L"|W|o|o|d|l|a|n|d |C|a|m|o|u|f|l|a|g|e",
	L"|U|r|b|a|n |C|a|m|o|u|f|l|a|g|e",
	L"|D|e|s|e|r|t |C|a|m|o|u|f|l|a|g|e",
	L"|S|n|o|w |C|a|m|o|u|f|l|a|g|e",
	L"|S|t|e|a|l|t|h |M|o|d|i|f|i|e|r",
	L"|H|e|a|r|i|n|g |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|G|e|n|e|r|a|l |V|i|s|i|o|n |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|N|i|g|h|t|-|t|i|m|e |V|i|s|i|o|n |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|D|a|y|-|t|i|m|e |V|i|s|i|o|n |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|B|r|i|g|h|t|-|L|i|g|h|t |V|i|s|i|o|n |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|C|a|v|e |V|i|s|i|o|n |R|a|n|g|e |M|o|d|i|f|i|e|r",
	L"|T|u|n|n|e|l |V|i|s|i|o|n",
	L"|M|a|x|i|m|u|m |C|o|u|n|t|e|r|-|F|o|r|c|e",
	L"|C|o|u|n|t|e|r|-|F|o|r|c|e |F|r|e|q|u|e|n|c|y",
	L"|T|o|-|H|i|t |B|o|n|u|s",
	L"|A|i|m |B|o|n|u|s",
};

// Alternate tooltip text for weapon Advanced Stats. Just different wording, nothing spectacular.
STR16 szUDBAdvStatsExplanationsTooltipText[]=
{
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the weapon's Accuracy value.\n \nIncreased accuracy allows the gun to hit targets\nat longer ranges more often, assuming it is\nalso well-aimed.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis item modifies the shooter's accuracy\nfor ANY shot with a ranged weapon by the\nlisted amount.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis item modifies the shooter's accuracy\nfor ANY shot with a ranged weapon by the\nlisted percentage, based on their original accuracy.\n \nHigher is better.",
	L"\n \nThis item modifies the accuracy gained from each\nextra aiming level you pay for, when aiming\na ranged weapon, by the\nlisted amount.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis item modifies the accuracy gained from each\nextra aiming level you pay for, when aiming\na ranged weapon, by the\nlisted percentage based on the original value.\n \nHigher is better.",
	L"\n \nThis item modifies the number of extra aiming\nlevels this gun can take.\n \nReducing the number of allowed aiming levels\nmeans that each level adds proportionally\nmore accuracy to the shot.\nTherefore, the FEWER aiming levels are allowed,\nthe faster you can aim this gun, without losing\naccuracy!\n \nLower is better.",
	L"\n \nThis item modifies the shooter's maximum accuracy\nwhen using ranged weapons, as a percentage\nof their original maximum accuracy.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the weapon's Handling difficulty.\n \nBetter handling makes the gun more accurate to fire,\nwith or without extra aiming.\n \nNote that this is based on the gun's original\nGun Handling factor, which is higher for rifles and\nheavy weapons, and lower for pistols and small\nweapons.\n \nLower is better.",
	L"\n \nThis item modifies the difficulty of\ncompensating for shots beyond a weapon's range.\n \nA high bonus here can increase a weapon's\nnatural Maximum Range by at least a few tiles.\n \nHigher is better.",
	L"\n \nThis item modifies the difficulty of hitting\na moving target with a ranged weapon.\n \nA high bonus here can help hitting\nfast-moving targets, even at a distance.\n \nHigher is better.",
	L"\n \nThis item modifies the damage output of\nyour weapon, by the listed amount.\n \nHigher is better.",
	L"\n \nThis item modifies the damage output of\nyour melee weapon, by the listed amount.\n \nThis applies only to melee weapons, both sharp\nand blunt.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies its maximum effective range.\n \nMaximum Range mainly dictates how far a bullet\nfired from the weapon can fly before it begins\ndropping sharply towards the ground.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nprovides extra magnification, making shots at a distance\ncomparatively easier to make.\n \nNote that a high Magnification Factor is detrimental\nwhen used at targets CLOSER than the\noptimal distance.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nprojects a dot on the target, making it easier to hit.\n \nThe projection effect is only useful up to a given\ndistance, beyond which it begins to diminish and\neventually disappears.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon capable\nof Burst or Autofire modes, this item modifies\nthe weapon's Horizontal Recoil\nby the listed percentage.\n \nReducing recoil makes it easier to keep the gun's\nmuzzle pointed at the target during a volley.\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon capable\nof Burst or Autofire modes, this item modifies\nthe weapon's Vertical Recoil\nby the listed percentage.\n \nReducing recoil makes it easier to keep the gun's\nmuzzle pointed at the target during a volley.\n \nLower is better.",
	L"\n \nThis item modifies the shooter's ability to\ncope with recoil during Burst or Autofire volleys.\n \nWhen high, this can help a shooter to control\nguns with powerful recoil, even if the shooter\nhas low Strength.\n \nHigher is better.",
	L"\n \nThis item modifies the shooter's ability to\naccurately apply counter-force against a gun's\nrecoil, during Burst or Autofire volleys.\n \nA high bonus helps the shooter bring the gun's muzzle\nprecisely towards the target, even at longer ranges,\nmaking volleys more accurate as a result.\n \nHigher is better.",
	L"\n \nThis item modifies the shooter's ability to\nfrequently reasses how much counter-force they\nneed to apply against a gun's recoil, during Burst\nor Autofire volleys.\n \nHigher frequency makes volleys more accurate on the whole,\nand also makes longer volleys more accurate assuming\nthe shooter can overcome recoil correctly.\n \nHigher is better.",
	L"\n \nThis item directly modifies the amount of\nAPs the character gets at the start of each turn.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifiest the AP cost to bring the weapon to\n'Ready' mode.\n \nLower is better.",
	L"\n \nWhen attached to any weapon, this item\nmodifies the AP cost to make a single attack with\nthat weapon.\n \nNote that for Burst/Auto-capable weapons, the\ncost of using these modes is directly influenced\nby this modifier as well!\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon capable of\nBurst-fire mode, this item modifies the AP cost\nof firing a Burst.\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon capable of\nAuto-fire mode, this item modifies the AP cost\nof firing an Autofire Volley.\n \nNote that it does NOT modify the extra AP\ncost for adding bullets to the volley, only\nthe initial cost for starting the volley.\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the AP cost of reloading the weapon.\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nchanges the size of magazines that can be loaded\ninto the weapon.\n \nThat weapon will now accept larger or smaller\nmagazines of the same caliber.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the amount of bullets fired\nby the weapon in Burst mode.\n \nIf the weapon was not initially Burst-Capable, and the\nmodifier is positive, attaching it to the weapon\nwill enable burst-fire mode.\n \nConversely, if the weapon is initially Burst-Capable,\na high-enough negative modifier here can disable\nburst mode completely.\n \nHigher is USUALLY better. Of course, part of the\npoint in Burst Mode is to conserve bullets...",
	L"\n \nWhen attached to a ranged weapon, this item\nwill hide the weapon's muzzle flash.\n \nThis makes sure that enemies cannot spot the shooter\nif he is firing while hidden, and is especially\nimportant at night.",
	L"\n \nWhen attached to a weapon, this item modifies\nthe range at which firing the weapon can be\nheard by both enemies and mercs.\n \nIf this modifier drops the weapon's Loudness value\nto 0, the weapon becomes completely silent.\n \nLower is better.",
	L"\n \nThis item modifies the size of any item it\nis attached to.\n \nSize is important when using the New Inventory system,\nwhere pockets only accept items of specific sizes and shapes.\n \nIncreasing an item's size makes it too big for some pockets\nit used to fit into.\n \nConversely, making an item smaller means it will fit into\nmore pockets, and pockets will be able to contain\nmore of it.\n \nLower is generall better.",
	L"\n \nWhen attached to any weapon, this item modifies\nthat weapon's Reliability value.\n \nIf positive, the weapon's condition will deteriorate\nslower when used in combat. Otherwise, the\nweapon deteriorates faster.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's camouflage in\nwoodland backgrounds.\n \nTo make good on a positive Woodland Camo modifier, the\nwearer needs to stay close to trees or tall grass.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's camouflage in\nurban backgrounds.\n \nTo make good on a positive Urban Camo modifier, the\nwearer needs to stay close to asphalt or concrete.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's camouflage in\ndesert backgrounds.\n \nTo make good on a positive Desert Camo modifier, the\nwearer needs to stay close to sand, gravel, or\ndesert vegetation.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's camouflage in\nsnowy backgrounds.\n \nTo make good on a positive Snow Camo modifier, the\nwearer needs to stay close to snowy tiles.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's stealth ability by\nmaking it more difficult to HEAR the character moving\nwhile in Sneaking mode.\n \nNote that this does NOT change a character's visibility,\nonly the amount of noise they make while sneaking.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Hearing Range by the\nlisted number of tiles.\n \nA positive bonus makes it possible to hear noises\nfrom a greater distance.\n \nConversely, a negative modifier impairs the wearer's hearing.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Vision Range by the\nlisted number of tiles.\n \nThis General modifier works in all conditions.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Vision Range by the\nlisted number of tiles.\n \nThis Night-Vision modifier works only when light\nlevels are sufficiently low.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Vision Range by the\nlisted number of tiles.\n \nThis Day-Vision modifier works only when light\nlevels are average or higher.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Vision Range by the\nlisted number of tiles.\n \nThis Bright-Vision modifier works only when light\nlevels are very high, for example when looking\ninto tiles lit by Break-Lights or at high noon.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it modifies the wearer's Vision Range by the\nlisted number of tiles.\n \nThis Cave-Vision modifier works only in the dark\nand only underground.\n \nHigher is better.",
	L"\n \nWhen this item is worn, or attached to a worn\nitem, it changes the wearer's field-of-view.\n \nNarrowing the field of view shortens sightrange to\neither side.\n \nLower is better.",
	L"\n \nThis is the shooter's ability to\ncope with recoil during Burst or Autofire volleys.\n \n\n \nHigher is better.",
	L"\n \nThis is the shooter's ability to\nfrequently reasses how much counter-force they\nneed to apply against a gun's recoil, during Burst\nor Autofire volleys.\n \nLower frequency makes volleys more accurate on the whole,\nand also makes longer volleys more accurate assuming\nthe shooter can overcome recoil correctly.\n \nLower is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the weapon's CTH value.\n \nIncreased CTH allows the gun to hit targets\nmore often, assuming it is also well-aimed.\n \nHigher is better.",
	L"\n \nWhen attached to a ranged weapon, this item\nmodifies the weapon's Aim Bonus.\n \nIncreased Aim Bonus allows the gun to hit\ntargets at longer ranges more often, assuming\nit is also well-aimed.\n \nHigher is better.",
};

STR16 szUDBAdvStatsExplanationsTooltipTextForWeapons[]=
{
	L"\n \nThis weapon's accuracy is being modified by\nan ammo, attachment, or built-in attributes.\n \nIncreased accuracy allows the gun to hit targets\nat longer ranges more often, assuming it is\nalso well-aimed.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis weapon modifies its shooter's accuracy\nwith ANY shot by the listed amount.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis weapon modifies its shooter's accuracy\nwith ANY shot by the listed percentage\nbased on the shooter's original accuracy.\n \nHigher is better.",
	L"\n \nThis weapon modifies the amount of accuracy\ngained from each extra aiming level you\npay for by the listed amount.\n \nScale: -100 to +100.\nHigher is better.",
	L"\n \nThis weapon modifies the amount of accuracy\ngained from each extra aiming level you\npay for by the listed percentage, based\non the shooter's original accuracy.\n \nHigher is better.",
	L"\n \nThe number of Extra Aiming Levels allowed\nfor this gun has been modified by its ammo,\nattachments, or built-in attributes.\nIf the number of levels is being reduced, the gun is\nfaster to aim without being any less accurate.\n \nConversely, if the number of levels is increased,\nthe gun becomes slower to aim without being\nmore accurate.\n \nLower is better.",
	L"\n \nThis weapon modifies the shooter's maximum\naccuracy, as a percentage of the shooter's original\nmaximum accuracy.\n \nHigher is better.",
	L"\n \nThis weapon's attachments or inherent abilities\nmodify the weapon's Handling difficulty.\n \nBetter handling makes the gun more accurate to fire,\nwith or without extra aiming.\n \nNote that this is based on the gun's original\nGun Handling factor, which is higher for rifles and\nheavy weapons, and lower for pistols and small\nweapons.\n \nLower is better.",
	L"\n \nThis weapon's ability to compensate for shots\nbeyond its maximum range is being modified by\nattachments or the weapon's inherent abilities.\n \nA high bonus here can increase a weapon's\nnatural Maximum Range by at least a few tiles.\n \nHigher is better.",
	L"\n \nThis weapon's ability to hit moving targets\nat a distance is being modified by attachments\nor the weapon's inherent abilities.\n \nA high bonus here can help hitting\nfast-moving targets, even at a distance.\n \nHigher is better.",
	L"\n \nThis weapon's damage output is being modified\nby its ammo, attachments, or inherent abilities.\n \nHigher is better.",
	L"\n \nThis weapon's melee-combat damage output is being\nmodified by its ammo, attachments, or inherent abilities.\n \nThis applies only to melee weapons, both sharp\nand blunt.\n \nHigher is better.",
	L"\n \nThis weapon's maximum range has been increased\nor decreased thanks to its ammo, attachments,\nor inherent abilities.\n \nMaximum Range mainly dictates how far a bullet\nfired from the weapon can fly before it begins\ndropping sharply towards the ground.\n \nHigher is better.",
	L"\n \nThis weapon is equipped with optical magnification,\nmaking shots at a distance comparatively easier to make.\n \nNote that a high Magnification Factor is detrimental\nwhen used at targets CLOSER than the\noptimal distance.\n \nHigher is better.",
	L"\n \nThis weapon is equipped with a projection device\n(possibly a laser), which projects a dot on\nthe target, making it easier to hit.\n \nThe projection effect is only useful up to a given\ndistance, beyond which it begins to diminish and\neventually disappears.\n \nHigher is better.",
	L"\n \nThis weapon's horizontal recoil strength is being\nmodified by its ammo, attachments, or inherent\nabilities.\n \nThis has no effect if the weapon lacks both\nBurst and Auto-Fire modes.\n \nReducing recoil makes it easier to keep the gun's\nmuzzle pointed at the target during a volley.\n \nLower is better.",
	L"\n \nThis weapon's vertical recoil strength is being\nmodified by its ammo, attachments, or inherent\nabilities.\n \nThis has no effect if the weapon lacks both\nBurst and Auto-Fire modes.\n \nReducing recoil makes it easier to keep the gun's\nmuzzle pointed at the target during a volley.\n \nLower is better.",
	L"\n \nThis weapon modifies the shooter's ability to\ncope with recoil during Burst or Autofire volleys,\ndue to its attachments, ammo, or inherent abilities.\n \nWhen high, this can help a shooter to control\nguns with powerful recoil, even if the shooter\nhas low Strength.\n \nHigher is better.",
	L"\n \nThis weapon modifies the shooter's ability to\naccurately apply counter-force against its\nrecoil, due to its attachments, ammo, or inherent abilities.\n \nNaturally, this has no effect if the weapon lacks\nboth Burst and Auto-Fire modes.\n \nA high bonus helps the shooter bring the gun's muzzle\nprecisely towards the target, even at longer ranges,\nmaking volleys more accurate as a result.\n \nHigher is better.",
	L"\n \nThis weapon modifies the shooter's ability to\nfrequently reasses how much counter-force they\nneed to apply against a gun's recoil, due to its\nattachments, ammo, or inherent abilities.\n \nNaturally, this has no effect if the weapon lacks\nboth Burst and Auto-Fire modes.\n \nHigher frequency makes volleys more accurate on the whole,\nand also makes longer volleys more accurate assuming\nthe shooter can overcome recoil correctly.\n \nHigher is better.",
	L"\n \nWhen held in hand, this weapon modifies the amount of\nAPs its user gets at the start of each turn.\n \nHigher is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe AP cost to bring this weapon to 'Ready' mode has\nbeen modified.\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe AP cost to make a single attack with this\nweapon has been modified.\n \nNote that for Burst/Auto-capable weapons, the\ncost of using these modes is directly influenced\nby this modifier as well!\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe AP cost to fire a Burst with this weapon has\nbeen modified.\n \nNaturally, this has no effect if the weapon is not\ncapable of Burst fire.\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe AP cost to fire an Autofire Volley with this weapon\nhas been modified.\n \nNaturally, this has no effect if the weapon is not\ncapable of Auto Fire.\n \nNote that it does NOT modify the extra AP\ncost for adding bullets to the volley, only\nthe initial cost for starting the volley.\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe AP cost of reloading this weapon has been modified.\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe size of magazines that can be loaded into this\nweapon has been modified.\n \nThe weapon will now accept larger or smaller\nmagazines of the same caliber.\n \nHigher is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthe amount of bullets fired by this weapon in Burst mode\nhas been modified.\n \nIf the weapon was not initially Burst-Capable, and the\nmodifier is positive, then this is what\ngives the weapon its burst-fire capability.\n \nConversely, if the weapon was initially Burst-Capable,\na high-enough negative modifier here may have\ndisabled burst mode entirely for this weapon.\n \nHigher is USUALLY better. Of course, part of the\npoint in Burst Mode is to conserve bullets...",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthis weapon produces no muzzle flash.\n \nThis makes sure that enemies cannot spot the shooter\nif he is firing while hidden, and is especially\nimportant at night.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthis weapon's loudness has been modified. The distance\nat which enemies and mercs can hear the weapon being\nused has subsequently changed.\n \nIf this modifier drops the weapon's Loudness value\nto 0, the weapon becomes completely silent.\n \nLower is better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthis weapon's size category has changed.\n \nSize is important when using the New Inventory system,\nwhere pockets only accept items of specific sizes and shapes.\n \nIncreasing an item's size makes it too big for some pockets\nit used to fit into.\n \nConversely, making an item smaller means it will fit into\nmore pockets, and pockets will be able to contain\nmore of it.\n \nLower is generall better.",
	L"\n \nDue to its attachments, ammo or inherent abilities,\nthis weapon's reliability has been modified.\n \nIf positive, the weapon's condition will deteriorate\nslower when used in combat. Otherwise, the\nweapon deteriorates faster.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's camouflage in woodland backgrounds.\n \nTo make good on a positive Woodland Camo modifier, the\nwearer needs to stay close to trees or tall grass.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's camouflage in urban backgrounds.\n \nTo make good on a positive Urban Camo modifier, the\nwearer needs to stay close to asphalt or concrete.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's camouflage in desert backgrounds.\n \nTo make good on a positive Desert Camo modifier, the\nwearer needs to stay close to sand, gravel, or\ndesert vegetation.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's camouflage in snowy backgrounds.\n \nTo make good on a positive Snow Camo modifier, the\nwearer needs to stay close to snowy tiles.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's stealth ability by making it\nmore or less difficult to HEAR the character moving\nwhile in Sneaking mode.\n \nNote that this does NOT change a character's visibility,\nonly the amount of noise they make while sneaking.\n \nHigher is better.",
	L"\n \nWhen this weapon is held in hand, it modifies the\nsoldier's Hearing Range by the listed number of tiles.\n \nA positive bonus makes it possible to hear noises\nfrom a greater distance.\n \nConversely, a negative modifier impairs the wearer's hearing.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit modifies the wearer's Vision Range by the\nlisted number of tiles, thanks to attachments or\ninherent properties of the weapon.\n \nThis General modifier works in all conditions.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit modifies the wearer's Vision Range by the\nlisted number of tiles, thanks to attachments or\ninherent properties of the weapon.\n \nThis Night-Vision modifier works only when light\nlevels are sufficiently low.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit modifies the wearer's Vision Range by the\nlisted number of tiles, thanks to attachments or\ninherent properties of the weapon.\n \nThis Day-Vision modifier works only when light\nlevels are average or higher.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit modifies the wearer's Vision Range by the\nlisted number of tiles, thanks to attachments or\ninherent properties of the weapon.\n \nThis Bright-Vision modifier works only when light\nlevels are very high, for example when looking\ninto tiles lit by Break-Lights or at high noon.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit modifies the wearer's Vision Range by the\nlisted number of tiles, thanks to attachments or\ninherent properties of the weapon.\n \nThis Cave-Vision modifier works only in the dark\nand only underground.\n \nHigher is better.",
	L"\n \nWhen this weapon is raised to the shooting position,\nit changes the wearer's field-of-view.\n \nNarrowing the field of view shortens sightrange to\neither side.\n \nLower is better.",
	L"\n \nThis is the shooter's ability to\ncope with recoil during Burst or Autofire volleys.\n \nHigher is better.",
	L"\n \nThis is the shooter's ability to\nfrequently reasses how much counter-force they\nneed to apply against a gun's recoil.\n \nNaturally, this has no effect if the weapon lacks\nboth Burst and Auto-Fire modes.\n \nLower frequency makes volleys more accurate on the whole,\nand also makes longer volleys more accurate assuming\nthe shooter can overcome recoil correctly.\n \nLower is better.",
	L"\n \nThis weapon's to-hit is being modified by\nan ammo, attachment, or built-in attributes.\n \nIncreased To-Hit allows the gun to hit targets\nmore often, assuming it is also well-aimed.\n \nHigher is better.",
	L"\n \nThis weapon's Aim Bonus is being modified by\nan ammo, attachment, or built-in attributes.\n \nIncreased Aim Bonus allows the gun to hit\ntargets at longer ranges more often, assuming\nit is also well-aimed.\n \nHigher is better.",
};

// HEADROCK HAM 4: Text for the new CTH indicator.
STR16 gzNCTHlabels[]=
{
	L"���������",	//SINGLE
	L"��",
};
//////////////////////////////////////////////////////
// HEADROCK HAM 4: End new UDB texts and tooltips
//////////////////////////////////////////////////////

#endif //RUSSIAN
