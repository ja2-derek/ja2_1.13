#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
#else
	#include "Language Defines.h"
	#if defined( CHINESE )
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

#if defined( CHINESE )

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

STR16 pCreditsJA2113[] =
{
	L"@T,{;JA2 v1.13 Development Team",
	L"@T,C144,R134,{;Coding",
	L"@T,C144,R134,{;Graphics and Sounds",
	L"@};(Various other mods!)",
	L"@T,C144,R134,{;Items",
	L"@T,C144,R134,{;Other Contributors",
	L"@};(All other community members who contributed input and feedback!)",
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
//	L".38 cal",
//	L"9mm",
//	L".45 cal",
//	L".357 cal",
//	L"12 gauge",
//	L"CAWS",
//	L"5.45mm",
//	L"5.56mm",
//	L"7.62mm NATO",
//	L"7.62mm WP",
//	L"4.7mm",
//	L"5.7mm",
//	L"Monster",
//	L"Rocket",
//	L"", // dart
//	L"", // flame
//	L".50 cal", // barrett
//	L"9mm Hvy", // Val silent
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
//	L".38 cal",
//	L"9mm",
//	L".45 cal",
//	L".357 cal",
//	L"12 gauge",
//	L"CAWS",
//	L"5.45mm",
//	L"5.56mm",
//	L"7.62mm N.",
//	L"7.62mm WP",
//	L"4.7mm",
//	L"5.7mm",
//	L"Monster",
//	L"Rocket",
//	L"dart", // dart
//	L"", // flamethrower
//	L".50 cal", // barrett
//	L"9mm Hvy", // Val silent
//};


CHAR16 WeaponType[MAXITEMS][30] =
{
	L"����",
	L"��ǹ",
	L"�Զ���ǹ",
	L"���ǹ",
	L"��ǹ",
	L"�ѻ���ǹ",
	L"ͻ����ǹ",
	L"���ǹ",
	L"����ǹ",
};

CHAR16 TeamTurnString[][STRING_LENGTH] =
{
	L"��ҵĻغ�",	// player's turn
	L"�о��Ļغ�",
	L"���εĻغ�",
	L"����Ļغ�",
	L"ƽ��Ļغ�",
	L"Player_Plan",// planning turn
	L"#1 �ͻ���",//hayden
	L"#2 �ͻ���",//hayden
	L"#3 �ͻ���",//hayden
	L"#4 �ͻ���",//hayden

};

CHAR16 Message[][STRING_LENGTH] =
{
	L"",

	// In the following 8 strings, the %s is the merc's name, and the %d (if any) is a number.

	L"%s��������ͷ��������ʧȥ��1���ǻۣ�",
	L"%s�������˼粿������ʧȥ��1�����ɣ�",
	L"%s�����������ţ�����ʧȥ��1��������",
	L"%s���������Ȳ�������ʧȥ��1�����ݣ�",
	L"%s��������ͷ��������ʧȥ��%d���ǻۣ�",
	L"%s�������˼粿������ʧȥ��%d�����ɣ�",
	L"%s�����������ţ�����ʧȥ��%d��������",
	L"%s���������Ȳ�������ʧȥ��%d�����ݣ�",
	L"�жϣ�",

	// The first %s is a merc's name, the second is a string from pNoiseVolStr,
	// the third is a string from pNoiseTypeStr, and the last is a string from pDirectionStr

	L"", //OBSOLETE
	L"���Ԯ�������ˣ�",

	// In the following four lines, all %s's are merc names

	L"%sװ�ҩ��",
	L"%sû���㹻���ж�������",
	L"%s���ڽ��а�����(�������ȡ��)",
	L"%s��%s���ڽ��а�����(�������ȡ��)",
	// the following 17 strings are used to create lists of gun advantages and disadvantages
	// (separated by commas)
	L"����",	//"reliable",
	L"������",	//"unreliable",
	L"�����޸�",	//"easy to repair",
	L"�����޸�",	//"hard to repair",
	L"ɱ������",	//"high damage",
	L"ɱ������",	//"low damage",
	L"���ٿ�",	//"quick firing",
	L"������",	//"slow firing",
	L"���Զ",	//"long range",
	L"��̽�",	//"short range",
	L"��ӯ",	//"light",
	L"����",	//"heavy",
	L"С��",	//"small",
	L"����ɨ��",	//"fast burst fire",
	L"�޷�ɨ��",	//"no burst fire",
	L"װ������",	//"large magazine",
	L"װ������",	//"small magazine",

	// In the following two lines, all %s's are merc names

	L"%s��αװʧЧ�ˡ�",
	L"%s��αװ��ϴ���ˡ�",

	// The first %s is a merc name and the second %s is an item name

	L"��������û�е�ҩ�ˣ�",
	L"%s͵����%s��",

	// The %s is a merc name

	L"%s����������ɨ�䡣",

	L"���Ѿ�װ���˸ø�����",
	L"�����Ʒ��",

	// Both %s's are item names

	L"�㲻�ܰ�%s��%s�����һ��",

	L"��",
	L"�˳��ӵ�",
	L"����",
	
	//You cannot use "item(s)" and your "other item" at the same time.
	//Ex:  You cannot use sun goggles and you gas mask at the same time.
	L"�㲻��ͬʱʹ��%s��%s��",
	L"��ѹ��ѡ�е���Ʒ�ŵ���һ��Ʒ�����⸽�����У������Ϳ��ܺϳ�����Ʒ��",
	L"��ѹ��ѡ�е���Ʒ�ŵ���һ��Ʒ�����⸽�����У������Ϳ��ܺϳ�����Ʒ��(������һ�Σ�����Ʒ�����ݡ�)",
	L"�÷����ĵо���δ������",
	L"�㻹�ø�%s%s", 
	L"%s��������ͷ����",
	L"����ս����",
	L"�������������Եġ���ȷ��Ҫ��������?",
	L"%s�о���������!",
	L"%s�ȵ��˴���ʯ���ӣ�������!",
	L"%sû�ܴӵ�����������%s!",
	L"%s�޸���%s��",	//"%s has repaired the %s",
	//L"Interrupt for ",
	L"�жϣ� ",
	L"Ͷ����",	//"Surrender?",
	L"���˾ܾ���İ�����",	//"This person refuses your aid.",
	L"�Ҳ���ô��Ϊ��",	//"I DON'T think so!",
/*
   	L"To travel in Skyrider's chopper, you'll have to ASSIGN mercs to VEHICLE/HELICOPTER first.",
	L"%s only had enough time to reload ONE gun",
*/
   	L"Ҫ���Skyrider��ֱ���ɻ�, ����Ȱ�Ӷ�����䵽��ͨ����/ֱ���ɻ���",
	L"%s��ʱ��ֻ����һ֧ǹװ�ҩ",
	L"Ѫè�Ļغ�",	//"Bloodcats' turn",
	L"ȫ�Զ�",	//"full auto",
	L"no full auto",
	L"�Ƚ�׼",	//"accurate",
	L"���Ǻ�׼", //"inaccurate",
	L"���ܵ���",	//"no semi auto",
	L"The enemy has no more items to steal!",
	L"The enemy has no item in its hand!",
};


// the names of the towns in the game

CHAR16 pTownNames[MAX_TOWNS][MAX_TOWN_NAME_LENGHT] =
{
	L"",
	L"Omerta",
	L"Drassen",
	L"Alma",
	L"Grumm",
	L"Tixa",
	L"Cambria",
	L"San Mona",
	L"Estoni",
	L"Orta",
	L"Balime",
	L"Meduna",
	L"Chitzena",
};

// the types of time compression. For example: is the timer paused? at normal speed, 5 minutes per second, etc.
// min is an abbreviation for minutes

STR16 sTimeStrings[] =
{
	L"��ͣ",	//"Paused",
	L"��ͨ",	//"Normal",
	L"5����",	//"5 min",
	L"30����",	//"30 min",
	L"60����",	//"60 min",
	L"6Сʱ",	//"6 hrs", 
};


// Assignment Strings: what assignment does the merc  have right now? For example, are they on a squad, training, 
// administering medical aid (doctor) or training a town. All are abbreviated. 8 letters is the longest it can be.

STR16 pAssignmentStrings[] =
{
	L"��1С��",
	L"��2С��",
	L"��3С��",
	L"��4С��",
	L"��5С��",
	L"��6С��",
	L"��7С��",
	L"��8С��",
	L"��9С��",
	L"��10С��",
	L"��11С��",
	L"��12С��",
	L"��13С��",
	L"��14С��",
	L"��15С��",
	L"��16С��",
	L"��17С��",
	L"��18С��",
	L"��19С��",
	L"��20С��",
	L"���",	//"On Duty", // on active duty
	L"ҽ��",	//"Doctor", // administering medical aid
	L"����",	//"Patient", // getting medical aid
	L"��ͨ����",	//"Vehicle", // in a vehicle
	L"��;��",	//"In Trans", // in transit - abbreviated form
	L"����",	//"Repair", // repairing
	L"����",	//"Practice", // training themselves  
	L"���",	//"Militia", // training a town to revolt 
	L"����",	//"Trainer", // training a teammate
	L"ѧԱ",	//"Student", // being trained by someone else 
	L"����",	//"Dead", // dead
	L"������",	//"Incap.", // abbreviation for incapacitated
	L"ս��",	//"POW", // Prisoner of war - captured
	L"ҽԺ",	//Hospital", // patient in a hospital 
	L"��",	//"Empty",	// Vehicle is empty
};


STR16 pMilitiaString[] =
{
	L"���",	//"Militia", // the title of the militia box
	L"δ��������",	//"Unassigned", //the number of unassigned militia troops
	//"You can't redistribute militia while there are hostilities in the area!",
	L"�������ео����ڣ����޷����·��������",};


STR16 pMilitiaButtonString[] =
{
	L"�Զ�", // auto place the militia troops for the player
	L"���", // done placing militia troops
};

STR16 pConditionStrings[] = 
{
	L"����",	//"Excellent", //the state of a soldier .. excellent health
	L"����",	//"Good", // good health
	L"��ͨ",	//"Fair", // fair health
	L"����",	//"Wounded", // wounded health
	L"ƣ��",	//"Fatigued", // tired
	L"ʧѪ",	//"Bleeding", // bleeding to death
	L"����",	//"Unconscious", // knocked out 
	L"����",	//"Dying", // near death
	L"����",	//"Dead", // dead
};

STR16 pEpcMenuStrings[] =
{
	/*
	L"On Duty", // set merc on active duty
	L"Patient", // set as a patient to receive medical aid
	L"Vehicle", // tell merc to enter vehicle
	L"Unescort", // let the escorted character go off on their own
	L"Cancel", // close this menu
	*/
	L"���",
	L"����",
	L"��ͨ����",
	L"�޻���",
	L"ȡ��",
};


// look at pAssignmentString above for comments

STR16 pPersonnelAssignmentStrings[] =
{
	/*
	L"Squad 1",
	L"Squad 2",
	L"Squad 3",
	L"Squad 4",
	L"Squad 5",
	L"Squad 6",
	L"Squad 7",
	L"Squad 8",
	L"Squad 9",
	L"Squad 10",
	L"Squad 11",
	L"Squad 12",
	L"Squad 13",
	L"Squad 14",
	L"Squad 15",
	L"Squad 16",
	L"Squad 17",
	L"Squad 18",
	L"Squad 19",
	L"Squad 20",
	*/
	L"��1С��",
	L"��2С��",
	L"��3С��",
	L"��4С��",
	L"��5С��",
	L"��6С��",
	L"��7С��",
	L"��8С��",
	L"��9С��",
	L"��10С��",
	L"��11С��",
	L"��12С��",
	L"��13С��",
	L"��14С��",
	L"��15С��",
	L"��16С��",
	L"��17С��",
	L"��18С��",
	L"��19С��",
	L"��20С��",
	L"���",	//"On Duty",
	L"ҽ��",	//"Doctor",
	L"����",	//"Patient",
	L"��ͨ����",	//"Vehicle",
	L"��;��",	//"In Transit",
	L"����",	//"Repair",
	L"����",	//"Practice", 
    	L"ѵ�����",	//"Training Militia", 
	L"����",	//"Trainer",
	L"ѧԱ",	//"Student", 
	L"����",	//"Dead",
	L"������",	//"Incap.",
	L"����",	//"POW",
	L"ҽԺ",	//"Hospital", 
	L"��",	//"Empty",	// Vehicle is empty
};


// refer to above for comments

STR16 pLongAssignmentStrings[] =
{
/*
	L"Squad 1",
	L"Squad 2",
	L"Squad 3",
	L"Squad 4",
	L"Squad 5",
	L"Squad 6",
	L"Squad 7",
	L"Squad 8",
	L"Squad 9",
	L"Squad 10",
	L"Squad 11",
	L"Squad 12",
	L"Squad 13",
	L"Squad 14",
	L"Squad 15",
	L"Squad 16",
	L"Squad 17",
	L"Squad 18",
	L"Squad 19",
	L"Squad 20",
*/
	L"��1С��",
	L"��2С��",
	L"��3С��",
	L"��4С��",
	L"��5С��",
	L"��6С��",
	L"��7С��",
	L"��8С��",
	L"��9С��",
	L"��10С��",
	L"��11С��",
	L"��12С��",
	L"��13С��",
	L"��14С��",
	L"��15С��",
	L"��16С��",
	L"��17С��",
	L"��18С��",
	L"��19С��",
	L"��20С��",
	L"���",	//"On Duty",
	L"ҽ��",	//"Doctor",
	L"����",	//"Patient",
	L"��ͨ����",	//"Vehicle",
	L"��;��",	//"In Transit",
	L"����",	//"Repair",
	L"��ϰ",	//"Practice", 
	L"ѵ�����",	//"Train Militia",
	L"ѵ������",	//"Train Teammate",
	L"ѧԱ",	//"Student", 
	L"����",	//"Dead",
	L"������",	//"Incap.",
	L"������",	//"POW",
	L"ҽԺ",	//"Hospital", // patient in a hospital 
	L"��",	//"Empty",	// Vehicle is empty
};


// the contract options

STR16 pContractStrings[] =
{
	L"��ͬѡ�",	//"Contract Options:", 
	L"", // a blank line, required
	L"��Ӷһ��",	//"Offer One Day", // offer merc a one day contract extension
	L"��Ӷһ��",	//"Offer One Week", // 1 week
	L"��Ӷ����",	//"Offer Two Weeks", // 2 week
	L"���",	//"Dismiss", // end merc's contract
	L"ȡ��",	//"Cancel", // stop showing this menu
};

STR16 pPOWStrings[] =
{
	L"����",	//"POW",  //an acronym for Prisoner of War
	L"??",
};

STR16 pLongAttributeStrings[] =
{
	L"����",	//"STRENGTH", 
	L"����",	//"DEXTERITY",  
	L"����",	//"AGILITY", 
	L"�ǻ�",	//"WISDOM", 
	L"ǹ��",	//"MARKSMANSHIP",
	L"ҽ��",	//"MEDICAL",
	L"��е",	//"MECHANICAL",
	L"�쵼",	//"LEADERSHIP",
	L"����",	//"EXPLOSIVES",
	L"����",	//"LEVEL",
};

STR16 pInvPanelTitleStrings[] =
{
	L"����",	//"Armor", // the armor rating of the merc
	L"����",	//"Weight", // the weight the merc is carrying
	L"αװ",	//"Camo", // the merc's camouflage rating
	L"αװ",	//"Camouflage:",
	L"����",	//"Protection:",
};

STR16 pShortAttributeStrings[] =
{
	L"����",	//"Agi", // the abbreviated version of : agility
	L"����",	//"Dex", // dexterity
	L"����",	//"Str", // strength
	L"�쵼",	//"Ldr", // leadership
	L"�ǻ�",	//"Wis", // wisdom
	L"����",	//"Lvl", // experience level
	L"ǹ��",	//"Mrk", // marksmanship skill
	L"����",	//"Exp", // explosive skill
	L"��е",	//"Mec", // mechanical skill
	L"ҽ��",	//"Med", // medical skill
};


STR16 pUpperLeftMapScreenStrings[] =
{
	L"����",	//"Assignment", // the mercs current assignment 
	L"��ͬ", 	// the contract info about the merc
	L"����",	//"Health", // the health level of the current merc
	L"ʿ��",	//"Morale", // the morale of the current merc
	L"״̬",	//"Cond.",	// the condition of the current vehicle
	L"����",	//"Fuel",	// the fuel level of the current vehicle
};

STR16 pTrainingStrings[] =
{
	/*
	L"Practice", // tell merc to train self 
  L"Militia", // tell merc to train town 
	L"Trainer", // tell merc to act as trainer
	L"Student", // tell merc to be train by other 
	*/
	L"����",
	L"���",
	L"����",
	L"ѧԱ",
};

STR16 pGuardMenuStrings[] =
{
	/*
	L"Fire Rate:", // the allowable rate of fire for a merc who is guarding
	L" Aggressive Fire", // the merc can be aggressive in their choice of fire rates
	L" Conserve Ammo", // conserve ammo 
	L" Refrain From Firing", // fire only when the merc needs to 
	L"Other Options:", // other options available to merc
	L" Can Retreat", // merc can retreat
	L" Can Seek Cover",  // merc is allowed to seek cover
	L" Can Assist Teammates", // merc can assist teammates
	L"Done", // done with this menu
	L"Cancel", // cancel this menu
	*/
	L"����:", // the allowable rate of fire for a merc who is guarding
	L"����ʽ���", // the merc can be aggressive in their choice of fire rates
	L"��Լ��ҩ", // conserve ammo 
	L"�б��������", // fire only when the merc needs to 
	L"����ѡ��:", // other options available to merc
	L" ���Գ���", // merc can retreat
	L" ����Ѱ������",  // merc is allowed to seek cover
	L" ���԰�������", // merc can assist teammates
	L"���", // done with this menu
	L"ȡ��", // cancel this menu
};

// This string has the same comments as above, however the * denotes the option has been selected by the player

STR16 pOtherGuardMenuStrings[] =
{
	/*
	L"Fire Rate:",
	L" *Aggressive Fire*",
	L" *Conserve Ammo*",
	L" *Refrain From Firing*",
	L"Other Options:",
	L" *Can Retreat*",
	L" *Can Seek Cover*",
	L" *Can Assist Teammates*",
	L"Done",
	L"Cancel",*/
	L"����:",
	L" *����ʽ���*",
	L" *��Լ��ҩo*",
	L" *�б��������*",
	L"����ѡ��:",
	L" *���Գ���*",
	L" *���Կ���������*",
	L" *���԰�������*",
	L"���",
	L"ȡ��",
};

STR16 pAssignMenuStrings[] =
{
	/*
	L"On Duty", // merc is on active duty
	L"Doctor", // the merc is acting as a doctor
	L"Patient", // the merc is receiving medical attention
	L"Vehicle", // the merc is in a vehicle
	L"Repair", // the merc is repairing items 
	L"Train", // the merc is training
	L"Cancel", // cancel this menu
	*/
	L"���",
	L"ҽ��",
	L"����",
	L"��ͨ����",
	L"����",
	L"ѵ��",
	L"ȡ��",
};

//lal
STR16 pMilitiaControlMenuStrings[] =
{
/*
	L"Attack", // set militia to aggresive
	L"Hold Position", // set militia to stationary
	L"Retreat", // retreat militia
	L"Come to me", // retreat militia
	L"Get down", // retreat militia	
	L"Take cover",
	L"All: Attack", 
	L"All: Hold Position",
	L"All: Retreat",
	L"All: Come to me",
	L"All: Spread out",
	L"All: Get down",
	L"All: Take cover",
	//L"All: Find items",
	L"Cancel", // cancel this menu*/

	L"����", // set militia to aggresive
	L"ԭ�ؼ���", // set militia to stationary
	L"����", // retreat militia
	L"���ҿ�£", // retreat militia
	L"�Ե�", // retreat militia 
	L"����",
	L"������: ����", 
	L"������: ԭ�ؼ���",
	L"������: ����",
	L"������: ���ҿ�£",
	L"������: ��ɢ",
	L"������: �Ե�",
	L"������: ����",
//L"All: Find items",
	L"ȡ��", // cancel this menu
};

//STR16 pTalkToAllMenuStrings[] =
//{
//	L"Attack", // set militia to aggresive
//	L"Hold Position", // set militia to stationary
//	L"Retreat", // retreat militia
//	L"Come to me", // retreat militia
//	L"Get down", // retreat militia		 
//	L"Cancel", // cancel this menu
//};

STR16 pRemoveMercStrings[] =
{
	/*
	L"Remove Merc", // remove dead merc from current team
	L"Cancel",
	*/
	L"�Ƴ�Ӷ��",
	L"ȡ��"
};

STR16 pAttributeMenuStrings[] =
{
	L"����",	//"Strength",
	L"����",	//"Dexterity",
	L"����",	//"Agility",
	L"����",	//"Health",
	L"ǹ��",	//"Marksmanship",
	L"ҽ��",	//"Medical",
	L"��е",	//"Mechanical",
	L"�쵼",	//"Leadership",
	L"����",	//"Explosives",
	L"ȡ��",	//"Cancel",
};

STR16 pTrainingMenuStrings[] =
{
/*
 L"Practice", // train yourself 
 L"Militia", // train the town 
 L"Trainer", // train your teammates 
 L"Student",  // be trained by an instructor 
 L"Cancel", // cancel this menu
*/
	L"����",
	L"���",
	L"����",
	L"ѧԱ",
	L"ȡ��",
};


STR16 pSquadMenuStrings[] =
{
	/*
	L"Squad  1",
	L"Squad  2",
	L"Squad  3",
	L"Squad  4",
	L"Squad  5",
	L"Squad  6",
	L"Squad  7",
	L"Squad  8",
	L"Squad  9",
	L"Squad 10",
	L"Squad 11",
	L"Squad 12",
	L"Squad 13",
	L"Squad 14",
	L"Squad 15",
	L"Squad 16",
	L"Squad 17",
	L"Squad 18",
	L"Squad 19",
	L"Squad 20",
	L"Cancel",
	*/
	L"��1С��",
	L"��2С��",
	L"��3С��",
	L"��4С��",
	L"��5С��",
	L"��6С��",
	L"��7С��",
	L"��8С��",
	L"��9С��",
	L"��10С��",
	L"��11С��",
	L"��12С��",
	L"��13С��",
	L"��14С��",
	L"��15С��",
	L"��16С��",
	L"��17С��",
	L"��18С��",
	L"��19С��",
	L"��20С��",
	L"ȡ��",
};

STR16 pPersonnelTitle[] =
{
	//L"Personnel", // the title for the personnel screen/program application
	L"����",
};

STR16 pPersonnelScreenStrings[] =
{
	L"������",	//"Health: ", // health of merc
	L"���ݣ�",	//"Agility: ", 
	L"���ɣ�",	//"Dexterity: ",
	L"������",	//"Strength: ",
	L"�쵼��",	//"Leadership: ",
	L"�ǻۣ�",	//"Wisdom: ",
	L"����",	//"Exp. Lvl: ", // experience level
	L"ǹ����",	//"Marksmanship: ", 
	L"��е��",	//"Mechanical: ",
	L"���ƣ�",	//"Explosives: ",
	L"ҽ�ƣ�",	//"Medical: ",
	L"ҽ�Ʊ�֤��", //"Med. Deposit: ", // amount of medical deposit put down on the merc
	L"��ͬʣ��ʱ�䣺", //"Remaining Contract: ", // cost of current contract
	L"��������",	//"Kills: ", // number of kills by merc
	L"��������",	//"Assists: ", // number of assists on kills by merc
	L"��н��",	//"Daily Cost:", // daily cost of merc
	L"����������",	//"Tot. Cost to Date:", // total cost of merc
	L"��ͬ����:", 	//"Contract:",//cost of current contract
	L"��������",	//"Tot. Service to Date:", // total service rendered by merc
	L"Ƿ��Ӷ��:", 	//"Salary Owing:", // amount left on MERC merc to be paid
	L"�����ʣ�",	//"Hit Percentage:", // percentage of shots that hit target
	L"ս��������",	//"Battles:", // number of battles fought
	L"���˴�����",	//"Times Wounded:", // number of times merc has been wounded
	L"���ܣ�",	//"Skills:",
	L"û�м���",	//"No Skills",
};


//These string correspond to enums used in by the SkillTrait enums in SoldierProfileType.h
STR16 gzMercSkillText[] = 
{
	L"û�м���",	//"No Skill",
	L"����",	//"Lock picking",
	L"ͽ�ָ�",	//"Hand to hand",
	L"����",	//"Electronics",
	L"ҹս",	//"Night ops",
	L"Ͷ��",	//"Throwing",
	L"��ѧ",	//"Teaching",
	L"������",	//"Heavy Weapons",
	L"�Զ�����",	//"Auto Weapons",
	L"Ǳ��",	//"Stealthy",
	L"˫������",	//"Ambidextrous",
	L"͵��",	//"Thief",
	L"����",	//"Martial Arts",
	L"����",	//"Knifing",
	L"������",	//"Sniper",
	L"αװ",	//"Camouflage",						//JA25: modified
	L"αװ��������",	//"Camouflage (Urban)",						
	L"αװ��ɳĮ��",	//"Camouflage (Desert)",						
	L"αװ��ѩ�أ�",	//"Camouflage (Snow)",						
	L"ר��",	//"(Expert)",
};


// This is pop up help text for the options that are available to the merc

STR16 pTacticalPopupButtonStrings[] =
{
	L"վ��/���� (|S)",	//"|Stand/Walk",
	L"�׷�/�׷�ǰ��(|C)", //"|Crouch/Crouched Move",
	L"վ��/���� (|R)",	//"Stand/|Run",
	L"����/����ǰ��(|P)",	//"|Prone/Crawl",
	L"�鿴(|L)",		//"|Look",
	L"�ж�",		//"Action",
	L"��̸",		//"Talk",
	L"��� (|C|t|r|l)", //Examine (|C|t|r|l)

	// Pop up door menu
	L"���ֿ���",		//"Open Manually",
	L"�������",		//"Examine for Traps",
	L"����",		//"Lockpick",
	L"����",		//"Force Open",
	L"�������",		//"Untrap",
	L"����",		//"Lock",
	L"����",		//"Unlock",
	L"ʹ������ըҩ",  	//"Use Door Explosive",
	L"ʹ���˹�",		//"Use Crowbar",
	L"ȡ�� (|E|s|c)",	//"Cancel (|E|s|c)",
	L"�ر�",		//"Close",
};

// Door Traps. When we examine a door, it could have a particular trap on it. These are the traps.

STR16 pDoorTrapStrings[] =
{
	/*
	L"no trap",
	L"an explosion trap",
	L"an electric trap",
	L"a siren trap",
	L"a silent alarm trap",
	*/
	L"û������",
	L"һ����ը����",
	L"һ����������",
	L"һ����������",
	L"һ��������������",
};

// Contract Extension. These are used for the contract extension with AIM mercenaries.

STR16 pContractExtendStrings[] =
{
	/*
	L"day",
	L"week",
	L"two weeks",*/
	L"��",
	L"��",
	L"����",
};

// On the map screen, there are four columns. This text is popup help text that identifies the individual columns.

STR16 pMapScreenMouseRegionHelpText[] =
{
	L"ѡ������",	//"Select Character",
	L"��������",	//"Assign Merc",
	L"�����о�·��",	//"Plot Travel Route",
	L"ǩԼ (|C)",	//"Merc |Contract",
	L"�Ƴ�Ӷ��",	//"Remove Merc",
	L"˯��",	//"Sleep", 

};

// volumes of noises 

STR16 pNoiseVolStr[] =
{
/*
	L"FAINT",
	L"DEFINITE",
	L"LOUD",
	L"VERY LOUD",
*/
	L"΢����",
	L"������",
	L"������",
	L"�ǳ�������",
};

// types of noises 

STR16 pNoiseTypeStr[] = // OBSOLETE
{
/*
	L"UNKNOWN",
	L"sound of MOVEMENT",
	L"CREAKING",
	L"SPLASHING",
	L"IMPACT",
	L"GUNSHOT",
	L"EXPLOSION",
	L"SCREAM",
	L"IMPACT",
	L"IMPACT",
	L"SHATTERING",
	L"SMASH",
*/
	L"δ֪",
	L"�ƶ���",
	L"շ����",
	L"������",
	L"ײ����",
	L"ǹ��",
	L"��ը��",
	L"�����",
	L"ײ����",
	L"ײ����",
	L"������",
	L"������",
};

// Directions that are used to report noises

STR16 pDirectionStr[] = 
{
	/*
	L"the NORTHEAST",
	L"the EAST",
	L"the SOUTHEAST",
	L"the SOUTH",
	L"the SOUTHWEST",
	L"the WEST",
	L"the NORTHWEST",
	L"the NORTH",
	*/
	L"������",
	L"����",
	L"���Ϸ�",
	L"�Ϸ�",
	L"���Ϸ�",
	L"����",
	L"������",
	L"����"
};

// These are the different terrain types. 

STR16 pLandTypeStrings[] =
{
	L"����",	//"Urban",
	L"��·",	//"Road",
	L"ƽԭ",	//"Plains",
	L"ɳĮ",	//"Desert",
	L"��ľ",	//"Woods",
	L"ɭ��",	//"Forest",	 
	L"����",	//"Swamp",
	L"����",	//"Water",	
	L"ɽ��",	//"Hills",
	L"����ͨ��",	//"Impassable",
	L"����",	//"River",	//river from north to south
	L"����",	//"River",	//river from east to west
	L"���",	//"Foreign Country",
	//NONE of the following are used for directional travel, just for the sector description.
	L"�ȴ�",	//"Tropical",
	L"ũ��",	//"Farmland",
	L"ƽԭ����·",	//"Plains, road",
	L"��ľ����·",	//"Woods, road",
	L"ũׯ����·",	//"Farm, road",
	L"�ȴ�����·",	//"Tropical, road",
	L"ɭ�֣���·",	//"Forest, road",
	L"����",	//"Coastline",
	L"ɽ�أ���·",	//"Mountain, road",
	L"��������·",	//"Coastal, road",
	L"ɳĮ����·",	//"Desert, road",
	L"���󣬹�·",	//"Swamp, road",
	L"��ľ��SAM��������",	//"Woods, SAM site",
	L"ɳĮ��SAM��������",	//"Desert, SAM site",
	L"�ȴ���SAM��������",	//"Tropical, SAM site",
	L"Meduna, SAM��������",	//"Meduna, SAM site",
	
	//These are descriptions for special sectors
	L"CambriaҽԺ",	//"Cambria Hospital",
	L"Drassen����",	//"Drassen Airport",
	L"Meduna����",	//"Meduna Airport",
	L"SAM��������",	//"SAM site",
	L"���������δ�",	//"Rebel Hideout", //The rebel base underground in sector A10
	L"Tixa����",	//"Tixa Dungeon",	//The basement of the Tixa Prison (J9)
	L"���γ�Ѩ",	//"Creature Lair",	//Any mine sector with creatures in it
	L"Orta������",	//"Orta Basement",	//The basement of Orta (K4)
	L"�ص�",	//"Tunnel",		//The tunnel access from the maze garden in Meduna 
						//leading to the secret shelter underneath the palace
	L"��������",	//"Shelter",		//The shelter underneath the queen's palace
	L"",					//Unused
};

STR16 gpStrategicString[] =
{
	L"",	//Unused
	//L"%s have been detected in sector %c%d and another squad is about to arrive.",	//STR_DETECTED_SINGULAR
	L"%s��%c%d�����������ˣ���һС�Ӽ������",
	//L"%s have been detected in sector %c%d and other squads are about to arrive.",	//STR_DETECTED_PLURAL
	L"%s��%c%d�����������ˣ���������С�Ӽ������",
	//L"Do you want to coordinate a simultaneous arrival?",		//STR_COORDINATE
	L"�������Ϊͬʱ������",												//STR_COORDINATE

	//Dialog strings for enemies.

	//L"The enemy offers you the chance to surrender.",	//STR_ENEMY_SURRENDER_OFFER
	L"�о�����һ��Ͷ���Ļ��ᡣ",
	//L"The enemy has captured your remaining unconscious mercs.",	//STR_ENEMY_CAPTURED
	L"�о���²�˻����е�Ӷ����",

	//The text that goes on the autoresolve buttons							

	//L"Retreat", 		//The retreat button				//STR_AR_RETREAT_BUTTON
	L"����",
	//L"Done",		//The done button				//STR_AR_DONE_BUTTON
	L"���",

	//The headers are for the autoresolve type (MUST BE UPPERCASE)

	L"����",		//"DEFENDING",							//STR_AR_DEFEND_HEADER
	L"����",		//"ATTACKING",						//STR_AR_ATTACK_HEADER
	L"����ս",		//"ENCOUNTER",						//STR_AR_ENCOUNTER_HEADER
	L"����",	//"Sector",	//The Sector A9 part of the header		//STR_AR_SECTOR_HEADER

	//The battle ending conditions						

	L"ʤ����",	//"VICTORY!",								//STR_AR_OVER_VICTORY
	L"ʧ�ܣ�",	//"DEFEAT!",								//STR_AR_OVER_DEFEAT
	L"Ͷ����",	//"SURRENDERED!",							//STR_AR_OVER_SURRENDERED
	L"������",	//"CAPTURED!",								//STR_AR_OVER_CAPTURED
	L"���ˣ�",	//"RETREATED!",								//STR_AR_OVER_RETREATED

	//These are the labels for the different types of enemies we fight in autoresolve.

	L"���",	//"Militia",							//STR_AR_MILITIA_NAME,
	L"����",	//"Elite",							//STR_AR_ELITE_NAME,
	L"ʿ��",	//"Troop",							//STR_AR_TROOP_NAME,
	L"������Ա",	//"Admin",								//STR_AR_ADMINISTRATOR_NAME,
	L"����",	//"Creature",								//STR_AR_CREATURE_NAME,

	//Label for the length of time the battle took

	L"ս����ʱ",	//"Time Elapsed",						//STR_AR_TIME_ELAPSED,

	//Labels for status of merc if retreating.  (UPPERCASE)			

	L"�ѳ���",		//"RETREATED",						//STR_AR_MERC_RETREATED,
	L"���ڳ���",		//"RETREATING",						//STR_AR_MERC_RETREATING,
	L"����",		//"RETREAT",						//STR_AR_MERC_RETREAT,

	//PRE BATTLE INTERFACE STRINGS 
	//Goes on the three buttons in the prebattle interface.  The Auto resolve button represents
	//a system that automatically resolves the combat for the player without having to do anything.
	//These strings must be short (two lines -- 6-8 chars per line)

	L"�Զ�ս��",	//"Auto Resolve",							//STR_PB_AUTORESOLVE_BTN,
	L"����ս��",	//"Go To Sector",							//STR_PB_GOTOSECTOR_BTN,
	L"����Ӷ��",	//"Retreat Mercs",							//STR_PB_RETREATMERCS_BTN,

	//The different headers(titles) for the prebattle interface.
	L"�����о�",	//"ENEMY ENCOUNTER",						//STR_PB_ENEMYENCOUNTER_HEADER,
	L"�о�����",	//"ENEMY INVASION",						//STR_PB_ENEMYINVASION_HEADER, // 30
	L"�о�����",	//"ENEMY AMBUSH", 
	L"�����ռ��",	//"ENTERING ENEMY SECTOR",			//STR_PB_ENTERINGENEMYSECTOR_HEADER
	L"���ι���",		//"CREATURE ATTACK",					//STR_PB_CREATUREATTACK_HEADER
	L"Ѫè����",		//"BLOODCAT AMBUSH",					//STR_PB_BLOODCATAMBUSH_HEADER
	L"����Ѫè��Ѩ",	//"ENTERING BLOODCAT LAIR",		

	//Various single words for direct translation.  The Civilians represent the civilian
	//militia occupying the sector being attacked.  Limited to 9-10 chars

	L"����",	//"Location",
	L"�о�",	//"Enemies",
	L"Ӷ��",	//"Mercs",
	L"���",	//"Militia",
	L"����",	//"Creatures",
	L"Ѫè",	//"Bloodcats",
	L"����",	//"Sector",
	L"����",	//"None",	//If there are no uninvolved mercs in this fight.
	L"N/A",	//"N/A",	//Acronym of Not Applicable
	L"��",	//"d",			//One letter abbreviation of day
	L"Сʱ",	//"h",			//One letter abbreviation of hour

	//TACTICAL PLACEMENT USER INTERFACE STRINGS
	//The four buttons 

	L"���",	//"Clear",
	L"��ɢ",  	//"Spread", 
	L"����",	//"Group",
	L"���",	//"Done",

	//The help text for the four buttons.  Use \n to denote new line (just like enter).
/*
	L"|Clears all the mercs' positions, \nand allows you to re-enter them manually.", 
	L"Randomly |spreads your mercs out \neach time it's pressed.",
	L"Allows you to select where you wish to |group your mercs.",
	L"Click this button when you're finished \nchoosing your mercs' positions. (|E|n|t|e|r)",
	L"You must place all of your mercs \nbefore you start the battle.",
*/
	L"�������Ӷ���Ĳ���Ȼ�������\n�����ֶ������ǽ��а��š�(|c)", 
	L"ÿ�ΰ�����ť���ͻ����� \n�����ɢ�ز���Ӷ����(|s)",
	L"�����ѡ�����뼯�еز���Ӷ���ĵط���(|g)",
	L"������ɶ�Ӷ�������\n�밴����ť�� (|E|n|t|e|r)",
	L"��ʼս��ǰ�������\n������Ӷ����ɲ���",

	//Various strings (translate word for word)

	L"����",   			//"Sector", 
	L"ѡ������λ��",  		//"Choose entry positions", 

	//Strings used for various popup message boxes.  Can be as long as desired.
/*
	L"Doesn't look so good there. It's inaccessible. Try a different location.",
	L"Place your mercs in the highlighted section of the map.",
*/
	L"��������̫�á��޷��������������ͬ��λ�ðɡ�",
	L"���Ӷ�����ڵ�ͼ�ĸ��������",

	//This message is for mercs arriving in sectors.  Ex:  Red has arrived in sector A9.
	//Don't uppercase first character, or add spaces on either end.

	L"����÷�����", //"has arrived in sector", 

	//These entries are for button popup help text for the prebattle interface.  All popup help
	//text supports the use of \n to denote new line.  Do not use spaces before or after the \n.
/*
	L"|Automatically resolves combat for you\nwithout loading map.",
	L"Can't use auto resolve feature when\nthe player is attacking.",
	L"|Enter the sector to engage the enemy.",
	L"|Retreat group to their previous sector.",				//singular version
	L"|Retreat all groups to their previous sectors.", //multiple groups with same previous sector
*/
	L"�Զ����ս��������Ҫ\n����÷�����ͼ��",
	L"������ڹ���ʱ���޷�ʹ��\n�Զ�ս�����ܡ�",
	L"����÷����͵о���ս(|E)",
	L"��С�ӳ��˵���ǰ�ķ�����(|R)",				//singular version
	L"������С�ӳ��˵���ǰ�ķ�����(|R)", //multiple groups with same previous sector

	//various popup messages for battle conditions.  

	//%c%d is the sector -- ex:  A9
	//L"Enemies attack your militia in sector %c%d.",
	L"�о�������%c%d��������������˹�����",

	//%c%d is the sector -- ex:  A9
	//L"Creatures attack your militia in sector %c%d.",
	L"����������%c%d��������������˹�����",
	//1st %d refers to the number of civilians eaten by monsters,  %c%d is the sector -- ex:  A9
	//Note:  the minimum number of civilians eaten will be two.
	//L"Creatures attack and kill %d civilians in sector %s.",
	L"���ι����˷���%s���Ե���%d��ƽ��",
	//%s is the sector location -- ex:  A9: Omerta
	//L"Enemies attack your mercs in sector %s.  None of your mercs are able to fight!",
	L"�о������ڷ���%s��Ӷ�������˹��������Ӷ����û���ܽ���ս����",
	//%s is the sector location -- ex:  A9: Omerta
	//L"Creatures attack your mercs in sector %s.  None of your mercs are able to fight!",
	L"���������ڷ���%s��Ӷ�������˹��������Ӷ����û���ܽ���ս����",
};

STR16 gpGameClockString[] = 
{
	//This is the day represented in the game clock.  Must be very short, 4 characters max.
	//L"Day",
	L"��",
};

//When the merc finds a key, they can get a description of it which 
//tells them where and when they found it.
STR16 sKeyDescriptionStrings[2] =
{
	L"�ҵ�Կ�׵ķ���:",		//"Sector Found:",	
	L"�ҵ�Կ�׵�����:",		//"Day Found:",	
};

//The headers used to describe various weapon statistics.

CHAR16		gWeaponStatsDesc[][ 16 ] =
{
	// HEADROCK: Changed this for Extended Description project
	L"״̬��",	//"Status:",
	L"���� (%s)��",	//"Weight (%s):", 
	L"AP Costs",	
	L"��̣�",	//"Rng:",		// Range
	L"ɱ������",	//"Dam:",		// Damage
	L"��ҩ",	//"Amount:", 	// Number of bullets left in a magazine
	L"AP:",			// abbreviation for Action Points
	L"=",
	L"=",
					//Lal: additional strings for tooltips
	/*
	L"Accuracy:",	//9
	L"Range:",		//10	
	L"Damage:", 	//11
	L"Weight:",		//12
	L"Stun Damage:",//13
	*/
	L"׼ȷ��:", //9
	L"���:", //10 
	L"ɱ����:", //11
	L"����:", //12
	L"��ѣɱ����:",//13
	// HEADROCK: Added new strings for extended description ** REDUNDANT **
	L"AUTOPEN:",	//14
	L"AUTO/5:",		//15
	L"Amount:",		//16
};
// HEADROCK: Several arrays of tooltip text for new Extended Description Box
// Please note, several of these are artificially inflated to 19 entries to help fix a complication with
// changing item type while watching its description box
STR16		gzWeaponStatsFasthelp[ 27 ] =
{
	L"Range",
	L"Damage",
	L"Burst/Auto Penalty",
	L"Autofire shots per 5 AP",
	L"Accuracy",
	L"Reliability",
	L"Repair Ease",
	L"APs to ready",
	L"APs to fire Single",
	L"APs to fire Burst",
	L"APs to fire Auto",	//10
	L"APs to Reload",
	L"APs to Reload Manually",
	L"Flash Suppression",
	L"Loudness (Lower is better)",
	L"To-Hit Modifier",
	L"Average Best Laser Range",
	L"Aiming Modifier",
	L"Min. Range for Aiming Bonus",
	L"Bipod Modifier",
	L"APs to Throw",	//20
	L"APs to Launch",
	L"APs to Stab",
	L"No Single Shot!",
	L"No Burst Mode!",
	L"No Auto Mode!",
	L"APs to Bash",
};

STR16		gzWeaponStatsFasthelpTactical[ 27 ] =
{
	L"Range",
	L"Damage",
	L"Burst/Auto Penalty",
	L"Autofire shots per 5 AP",
	L"Accuracy",
	L"Reliability",
	L"Repair Ease",
	L"APs to ready",
	L"APs to fire Single",
	L"APs to fire Burst",
	L"APs to fire Auto",	//10
	L"APs to Reload",
	L"APs to Reload Manually",
	L"To-Hit Modifier",
	L"Average Best Laser Range",
	L"Aiming Modifier",
	L"Min. Range for Aiming Bonus",
	L"Flash Suppression",
	L"Loudness (Lower is better)",
	L"Bipod Modifier",
	L"APs to Throw",	//20
	L"APs to Launch",
	L"APs to Stab",
	L"No Single Shot!",
	L"No Burst Mode!",
	L"No Auto Mode!",
	L"APs to Bash",
};

STR16		gzAmmoStatsFasthelp[ 20 ] =
{
	L"Armor Penetration (Lower is better)",
	L"Bullet Tumble (Higher is better)",
	L"Pre-impact Explosion (Higher is better)",
	L"Tracer Effect",
	L"Anti-Tank",
	L"Lockbuster",
	L"Ignores Armor",
	L"Acidic",
	L"Range Modifier",
	L"Damage Modifier",
	L"To-Hit Modifier",
	L"Burst/Auto Penalty Modifier (Higher is better)",
	L"Reliability Modifier",
	L"Loudness Modifier (Lower is better)",
	L"",
	L"",
	L"",
	L"",
	L"",
	L"",
};

STR16		gzArmorStatsFasthelp[ 20 ] =
{
	L"Protection",
	L"Coverage (Higher is better)",
	L"Degrade Rate (Lower is better)",
	L"AP Modifier",
	L"To-Hit Modifier",
	L"Woodland Camo",
	L"Urban Camo",
	L"Desert Camo",
	L"Snow Camo",
	L"Stealth Modifier",
	L"Vision Range Modifier",
	L"Day Vision Range Modifier",
	L"Night Vision Range Modifier",
	L"Bright Light Vision Range Modifier",
	L"Cave Vision Range Modifier",
	L"Tunnel Vision Percentage",
	L"Hearing Range Modifier",
	L"",
	L"",
	L"",
};

STR16		gzExplosiveStatsFasthelp[ 20 ] =
{
	L"Damage",
	L"Stun Damage",
	L"Blast Loudness (Lower is better)",
	L"Volatility!!! (Lower is better)",
	L"Blast Radius",
	L"Effect Start Radius",
	L"Effect Final Radius ",
	L"Effect Duration",
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
	L"Item Size Modifier (Lower is better)", // 0
	L"Reliability Modifier",
	L"Loudness Modifier (Lower is better)",
	L"Hides Muzzle Flash",
	L"Bipod Modifier",
	L"Range Modifier", // 5
	L"To-Hit Modifier",
	L"Best Laser Range",
	L"Aiming Bonus Modifier",
	L"Burst Size Modifier",
	L"Burst Penalty Modifier (Higher is better)", // 10
	L"Auto-Fire Penalty Modifier (Higher is better)",
	L"AP Modifier",
	L"AP to Burst Modifier (Lower is better)",
	L"AP to Auto-Fire Modifier (Lower is better)",
	L"AP to Ready Modifier (Lower is better)", // 15
	L"AP to Reload Modifier (Lower is better)",
	L"Magazine Size Modifier",
	L"AP to Attack Modifier (Lower is better)",
	L"Damage Modifier",
	L"Melee Damage Modifier", // 20
	L"Woodland Camo",
	L"Urban Camo",
	L"Desert Camo",
	L"Snow Camo",
	L"Stealth Modifier", // 25
	L"Hearing Range Modifier",
	L"Vision Range Modifier",
	L"Day Vision Range Modifier",
	L"Night Vision Range Modifier",
	L"Bright Light Vision Range Modifier", //30
	L"Cave Vision Range Modifier",
	L"Tunnel Vision Percentage (Lower is better)",
	L"Minimum Range for Aiming Bonus",
};

// HEADROCK: End new tooltip text

//The headers used for the merc's money.

CHAR16 gMoneyStatsDesc[][ 13 ] =
{
	L"ʣ��",	//"Amount",
	L"���:",	//"Remaining:",//this is the overall balance
	L"�ָ�",	//"Amount",
	L"���:",	//"To Split:", // the amount he wants to separate from the overall balance to get two piles of money

	L"��ǰ",	//"Current",
	L"���",	//"Balance",
	L"��ȡ",	//"Amount to",
	L"���",	//"Withdraw",	
};

//The health of various creatures, enemies, characters in the game. The numbers following each are for comment
//only, but represent the precentage of points remaining. 

CHAR16 zHealthStr[][13] =
{
	L"����",	//"DYING",		//	>= 0
	L"��Σ",	//"CRITICAL", 		//	>= 15
	L"����",	//"POOR",		//	>= 30
	L"����",	//"WOUNDED",    	//	>= 45
	L"����",	//"HEALTHY",    	//	>= 60
	L"ǿ׳",	//"STRONG",     	// 	>= 75
    L"����",	//"EXCELLENT",		// 	>= 90
};

STR16	gzMoneyAmounts[6] = 
{ 
	L"$1000",
	L"$100",
	L"$10",
	L"���",	//"Done",
	L"�ָ�",	//"Separate",
	L"��ȡ",	//"Withdraw",
};

// short words meaning "Advantages" for "Pros" and "Disadvantages" for "Cons." 
CHAR16		gzProsLabel[10] = 
{
	//L"Pros:",
	L"�ŵ㣺",
};

CHAR16		gzConsLabel[10] = 
{
	//L"Cons:",
	L"ȱ�㣺",
};

//Conversation options a player has when encountering an NPC
CHAR16 zTalkMenuStrings[6][ SMALL_STRING_LENGTH ] =
{
/*
	L"Come Again?", 	//meaning "Repeat yourself" 
	L"Friendly",		//approach in a friendly
	L"Direct",		//approach directly - let's get down to business
	L"Threaten",		//approach threateningly - talk now, or I'll blow your face off
	L"Give",		
	L"Recruit",
*/
	L"��˵һ�Σ�",
	L"�Ѻ�",
	L"ֱ��",
	L"����",
	L"����",
	L"��ļ",
};

//Some NPCs buy, sell or repair items. These different options are available for those NPCs as well.
CHAR16 zDealerStrings[4][ SMALL_STRING_LENGTH ]=
{
	L"��/��",	//"Buy/Sell",
	L"��",		//"Buy",
	L"��",		//"Sell",
	L"����",	//"Repair",
};

CHAR16 zDialogActions[1][ SMALL_STRING_LENGTH ] = 
{
	L"���",	//"Done",
};


//These are vehicles in the game.

STR16 pVehicleStrings[] =
{
 L"��������",	//"Eldorado",
 L"����",	//"Hummer", // a hummer jeep/truck -- military vehicle
 L"�����賵",	//"Icecream Truck",
 L"����",	//"Jeep",
 L"̹��",	//"Tank",
 L"ֱ���ɻ�",	//"Helicopter",
};

STR16 pShortVehicleStrings[] =
{
	L"��������",	//"Eldor.",
	L"����",	//"Hummer",			// the HMVV
	L"�����賵",	//"Truck",
	L"����",	//"Jeep",
	L"̹��",	//"Tank",
	L"ֱ���ɻ�",	//"Heli", 				// the helicopter
};

STR16	zVehicleName[] =
{
/*	L"Eldorado",
	L"Hummer",		//a military jeep. This is a brand name.
	L"Truck",			// Ice cream truck
	L"Jeep",
	L"Tank",
	L"Heli", 		//an abbreviation for Helicopter
*/
	L"��������",	//"Eldor.",
	L"����",	//"Hummer",			// the HMVV
	L"�����賵",	//"Truck",
	L"����",	//"Jeep",
	L"̹��",	//"Tank",
	L"ֱ���ɻ�",	//"Heli", 				// the helicopter
};


//These are messages Used in the Tactical Screen

CHAR16 TacticalStr[][ MED_STRING_LENGTH ] =
{
	L"��Ϯ",				//"Air Raid",
	L"�Զ�����?",	//"Apply first aid automatically?",
	
	// CAMFIELD NUKE THIS and add quote #66.
	
	//L"%s notices that items are missing from the shipment.",
	L"%s���������Ļ�Ʒ��ȱ�˼�����",
	// The %s is a string from pDoorTrapStrings
	
	L"������%s.", 	//"The lock has %s.", 
	L"û��������",	//"There's no lock.",
	L"�ɹ���",	//"Success!",
	L"ʧ�ܡ�",	//"Failure.",
	L"�ɹ���",	//"Success!",
	L"ʧ��",	//"Failure.",
	L"����û�б��������塣",	//"The lock isn't trapped.",
	L"�ɹ���",	//"Success!",
	// The %s is a merc name
	L"%sû�ж�Ӧ��Կ�ס�",	//"%s doesn't have the right key.",
	L"���ϵ����屻����ˡ�",	//"The lock is untrapped.",
	L"����û�б��������塣",	//"The lock isn't trapped.",
	L"��ס�ˡ�",	//"Locked.",
	L"��",	//"DOOR",
	L"�������",	//"TRAPPED",
	L"��ס��",	//"LOCKED",
	L"û����",	//"UNLOCKED",
	L"�����õ�",	//"SMASHED",
	L"������һ�����ء���������",	//"There's a switch here.  Activate it?",
	L"������壿",	//"Disarm trap?",
	L"��һ��...",	//"Prev...",
	L"��һ��...",	//"Next...",
	L"�����...",	//"More...",

	// In the next 2 strings, %s is an item name

	L"%s�����ڵ����ˡ�",	//"The %s has been placed on the ground.",
	L"%s������%s�ˡ�",	//"The %s has been given to %s.",

	// In the next 2 strings, %s is a name

	L"%s�Ѿ�����ȫ֧����",	//"%s has been paid in full.",
	L"%s����Ƿ%d��",	//"%s is still owed %d.",
	L"ѡ��������Ƶ��",  //"Choose detonation frequency:",	
	//in this case, frequency refers to a radio signal
	L"�趨�����غϺ�ը��",	//"How many turns 'til she blows:", //how much time, in turns, until the bomb blows
	L"�趨ң���׹ܵ�Ƶ�ʣ�", //"Set remote detonator frequency:",	//in this case, frequency refers to a radio signal
	L"�������?",	//"Disarm boobytrap?",
	L"�Ƶ����죿",	//"Remove blue flag?",
	L"���������������",	//"Put blue flag here?",
	L"�����غ�",	//"Ending Turn",

	// In the next string, %s is a name. Stance refers to way they are standing.

	//L"You sure you want to attack %s ?",
	L"��ȷ��Ҫ����%s��",
	//L"Ah, vehicles can't change stance.",
	L"�����޷��䶯���ơ�",
	//L"The robot can't change its stance.",
	L"�������޷��䶯���ơ�",

	// In the next 3 strings, %s is a name

	L"%s�޷��������Ϊ�����ơ�",	//"%s can't change to that stance here.",
	L"%s�޷������ﱻ������",	//"%s can't have first aid done here.",
	L"%s����Ҫ������",		//"%s doesn't need first aid.",
	L"�����ƶ����Ƕ���",		//"Can't move there.",
	//L"Your team's full. No room for a recruit.",	//there's no room for a recruit on the player's team
	L"��Ķ����Ѿ���Ա�ˡ�û�п�λ��Ӷ�¶�Ա��",

	// In the next string, %s is a name

	L"%s�Ѿ�����ļ��",	//"%s has been recruited.",

	// Here %s is a name and %d is a number

	L"����Ƿ%s$%d.",	//"%s is owed $%d.",

	// In the next string, %s is a name

	L"����%s��?",		//"Escort %s?",

	// In the next string, the first %s is a name and the second %s is an amount of money (including $ sign)

	L"Ҫ��Ӷ%s��(ÿ�յ�֧��%s)?",	//"Hire %s for %s per day?",

	// This line is used repeatedly to ask player if they wish to participate in a boxing match. 

	L"��Ҫ����ȭ��������?",		//"You want to fight?",	

	// In the next string, the first %s is an item name and the 
	// second %s is an amount of money (including $ sign)

	L"Ҫ��%s��(��֧��%s)?",		//L"Buy %s for %s?",

	// In the next string, %s is a name

	L"%s���ܵ�%dС�ӵĻ��͡�",	//"%s is being escorted on squad %d.",

	// These messages are displayed during play to alert the player to a particular situation

	L"����",	//"JAMMED",					//weapon is jammed.
	L"��������Ҫ%s�ھ����ӵ���",	//"Robot needs %s caliber ammo.",		//Robot is out of ammo
	L"�ӵ��Ƕ����ǲ����ܡ�",	//"Throw there? Not gonna happen.",		//Merc can't throw to the destination he selected
	
	// These are different buttons that the player can turn on and off.

	L"Ǳ��ģʽ (|Z)",	//"Stealth Mode (|Z)",
	L"��ͼ��Ļ (|M)",	//"|Map Screen",
	L"�����غ� (|D)",	//"|Done (End Turn)",
	L"̸��",	//"Talk",
	L"����",	//"Mute",
	L"���� (|P|g|U|p)",	//"Stance Up (|P|g|U|p)",
	L"����� (|T|a|b)",	//"Cursor Level (|T|a|b)",
	L"����/��Ծ",	//"Climb / Jump",
	L"���� (|P|g|D|n)",	//"Stance Down (|P|g|D|n)",
	L"���",	//"Examine (|C|t|r|l)",
	L"��һ��Ӷ��",	//"Previous Merc",
	L"��һ��Ӷ�� (|S|p|a|c|e)",	//"Next Merc (|S|p|a|c|e)",
	L"ѡ�� (|O)",	//"|Options",
	L"ɨ��ģʽ (|B)",	//"|Burst Mode",
	L"�鿴/ת��(|L)",	//"|Look/Turn",
	L"����: %d/%d\n����: %d/%d\nʿ��: %s",	//"Health: %d/%d\nEnergy: %d/%d\nMorale: %s",
	L"��?",		//"Heh?",		//this means "what?" 
	L"����",	//"Cont",		//an abbrieviation for "Continued" 
	L"��%s�رս���ģʽ��",			//"Mute off for %s.",
	L"��%s�򿪽���ģʽ��",			//"Mute on for %s.",
	L"�;ö�: %d/%d\n����: %d/%d",		//"Health: %d/%d\nFuel: %d/%d",	
	L"�³�",	//"Exit Vehicle" ,
	L"�л�С�� ( |S|h|i|f|t |S|p|a|c|e )",	//"Change Squad ( |S|h|i|f|t |S|p|a|c|e )",
	L"��ʻ",	//"Drive",
	L"N/A",	//"N/A",		//this is an acronym for "Not Applicable." 
	L"ʹ�� (ȭͷ)",		//"Use ( Hand To Hand )",
	L"ʹ�� (����)",			//"Use ( Firearm )",
	L"ʹ�� (����)",			//"Use ( Blade )",
	L"ʹ�� (��ըƷ)",	//"Use ( Explosive )",
	L"ʹ�� (ҽ����Ʒ)",	//"Use ( Medkit )",
	L"(ץס)",	//"(Catch)",
	L"(װ�ҩ)",	//"(Reload)",
	L"(����)",	//"(Give)",
	L"%s�������ˡ�",	//"%s has been set off.",
	L"%s�ѵ��",	//"%s has arrived.",
	L"%s�������ж�����(AP)��", //"%s ran out of Action Points.",
	L"%s�޷��ж���",	//"%s isn't available.",
	L"%s�������ˡ�",	//"%s is all bandaged.",
	L"%s�����˱�����", //"%s is out of bandages.",
	L"����������ео���",	//"Enemy in sector!",
	L"��Ұ��û�ео���",	//"No enemies in sight.",
	L"û���㹻���ж�����(AP)��",	//"Not enough Action Points.",
	L"û��ʹ��ң������",	//"Nobody's using the remote.",
	L"ɨ������ӵ�!", //"Burst fire emptied the clip!", 
	L"�б�",	//"SOLDIER",	
	L"����",	//"CREPITUS",	
	L"���",	//"MILITIA",
	L"ƽ��",	//"CIVILIAN",
	L"�뿪����", 	//"Exiting Sector",
	L"ȷ��",	//"OK",
	L"ȡ��",	//"Cancel",
	L"ѡ��Ӷ��",	//"Selected Merc",
	L"С�ӵ�����Ӷ��",		//"All Mercs in Squad",	
	L"ǰ������",		//"Go to Sector",
	L"ǰ����ͼ",			//"Go to Map",	
	L"�㲻�ܴ�����뿪���������",	//"You can't leave the sector from this side.",
	L"%s̫Զ�ˡ�",		//"%s is too far away.",	
	L"����ʾ����",	//"Removing Treetops",
	L"��ʾ����",	//"Showing Treetops",
	L"��ѻ"	,	//"CROW",				//Crow, as in the large black bird
	L"����",	//"NECK",
	L"ͷ��",	//"HEAD",
	L"����",	//"TORSO",
	L"�Ȳ�",	//"LEGS",
	L"Ҫ����Ů������֪�����鱨��",	//"Tell the Queen what she wants to know?",
	L"���ָ��ID",	//"Fingerprint ID aquired",
	L"ָ��ID��Ч���޷�ʹ�ø�������",	//"Invalid fingerprint ID. Weapon non-functional",
	L"���Ŀ��",	//"Target aquired",
	L"·����ס��",	//"Path Blocked",
	L"��Ǯ/ȡǮ",	//"Deposit/Withdraw Money",	//Help text over the $ button on the Single Merc Panel 
	L"û����Ҫ������",			//"No one needs first aid.",
	L"����",											// Short form of JAMMED, for small inv slots
	L"�޷��������",  //"Can't get there.",	// used ( now ) for when we click on a cliff
	//L"Path is blocked. Do you want to switch places with this person?",
	L"·����ס�ˡ���Ҫ������˽���λ����?",
	L"���˾ܾ��ƶ���",	//"The person refuses to move.",
	// In the following message, '%s' would be replaced with a quantity of money (e.g. $200)
	L"��ͬ��֧��%s��",	//"Do you agree to pay %s?",
	L"��Ҫ�������������?",	//"Accept free medical treatment?",
	L"��ͬ����Ӷ����Daryl�����?",		//"Agree to marry Daryl?",
	L"Կ�����",				//"Key Ring Panel",
	L"�㲻��������EPC��",	//"You cannot do that with an EPC.",
	L"��ɱKrott?",		//"Spare Krott?",
	L"������������Ч��̡�",	//"Out of effective weapon range.",
	L"��",			//"Miner",
	L"����ֻ���ڷ���������",	//"Vehicle can only travel between sectors",
	L"���ڲ����Զ�����",	//"Can't autobandage right now",
	L"%s����ס��",	//"Path Blocked for %s",	//"Path Blocked for %s",
	L"��Deidranna�ľ��ӷ�²��Ӷ��������Ѻ�����",	//"Your mercs, who were captured by Deidranna's army are imprisoned here!",
	L"����������",	//"Lock hit",
	L"�����ƻ���",	//"Lock destroyed",
	L"��������ʹ�������š�",	//"Somebody else is trying to use this door.",
	L"�;ö�: %d/%d\n����: %d/%d",			//"Health: %d/%d\nFuel: %d/%d",	
	L"%s������%s��",	//"%s cannot see %s.",  // Cannot see person trying to talk to
	L"�������Ƴ�",	//"Attachment removed",
	L"���Ѿ��������������޷�ӵ�и���ĳ�����",	//"Can not gain another vehicle as you already have 2",
};

//Varying helptext explains (for the "Go to Sector/Map" checkbox) what will happen given different circumstances in the "exiting sector" interface.
STR16 pExitingSectorHelpText[] =
{
	//Helptext for the "Go to Sector" checkbox button, that explains what will happen when the box is checked.
	//L"If checked, the adjacent sector will be immediately loaded.",
	L"������У������������ڽ��ķ�����",
	//L"If checked, you will be placed automatically in the map screen\nas it will take time for your mercs to travel.",
	L"������У��㽫�������Զ������ڵ�ͼ��Ļ��\n��Ϊ���Ӷ��Ҫ��Щʱ�����о���",

	//If you attempt to leave a sector when you have multiple squads in a hostile sector.
	//L"This sector is enemy occupied and you can't leave mercs here.\nYou must deal with this situation before loading any other sectors.",
	L"�÷������о�ռ�ݡ��㲻�ܽ�Ӷ���������\n�ڽ�����������ǰ���������������������",

	//Because you only have one squad in the sector, and the "move all" option is checked, the "go to sector" option is locked to on. 
	//The helptext explains why it is locked.
	//L"By moving your remaining mercs out of this sector,\nthe adjacent sector will immediately be loaded.",
	L"�����µ�Ӷ���뿪��������\n�����������ڽ��ķ�����",
	//L"By moving your remaining mercs out of this sector,\nyou will be placed automatically in the map screen\nas it will take time for your mercs to travel.",
	L"�����µ�Ӷ���뿪��������\n�㽫�������Զ������ڵ�ͼ��Ļ��\n��Ϊ���Ӷ��Ҫ��Щʱ�����о���",


	//If an EPC is the selected merc, it won't allow the merc to leave alone as the merc is being escorted.  The "single" button is disabled.
	//L"%s needs to be escorted by your mercs and cannot leave this sector alone.",
	L"%s��Ҫ�����Ӷ�����ͣ����������޷������뿪��������",

	//If only one conscious merc is left and is selected, and there are EPCs in the squad, the merc will be prohibited from leaving alone.
	//There are several strings depending on the gender of the merc and how many EPCs are in the squad.
	//DO NOT USE THE NEWLINE HERE AS IT IS USED FOR BOTH HELPTEXT AND SCREEN MESSAGES!
/*
	L"%s cannot leave this sector alone as he is escorting %s.", //male singular
	L"%s cannot leave this sector alone as she is escorting %s.", //female singular
	L"%s cannot leave this sector alone as he is escorting multiple characters.", //male plural
	L"%s cannot leave this sector alone as she is escorting multiple characters.", //female plural
*/
	L"%s�޷������뿪����������Ϊ���û���%s��", //male singular
	L"%s�޷������뿪����������Ϊ���û���%s��", //female singular
	L"%s�޷������뿪����������Ϊ���û��Ͷ��ˡ�", //male plural
	L"%s�޷������뿪����������Ϊ���û��Ͷ��ˡ�", //female plural



	//If one or more of your mercs in the selected squad aren't in range of the traversal area, then the  "move all" option is disabled,
	//and this helptext explains why.
	//L"All of your mercs must be in the vicinity\nin order to allow the squad to traverse.",
	L"���Ҫ��С���ڷ������ƶ��Ļ���\n���ȫ����Ա�������ڸ�����",


	L"", //UNUSED

	//Standard helptext for single movement.  Explains what will happen (splitting the squad)
	//L"If checked, %s will travel alone, and\nautomatically get reassigned to a unique squad.",
	L"������У� %s�������о���\n���ұ��Զ����·��䵽һ��������С���С�",

	//Standard helptext for all movement.  Explains what will happen (moving the squad)
	//L"If checked, your currently selected\nsquad will travel, leaving this sector.",
	L"������У��㵱ǰѡ�е�С��\n�����뿪����������ʼ�о���",

	//This strings is used BEFORE the "exiting sector" interface is created.  If you have an EPC selected and you attempt to tactically
	//traverse the EPC while the escorting mercs aren't near enough (or dead, dying, or unconscious), this message will appear and the
	//"exiting sector" interface will not appear.  This is just like the situation where
	//This string is special, as it is not used as helptext.  Do not use the special newline character (\n) for this string.
	//L"%s is being escorted by your mercs and cannot leave this sector alone. Your other mercs must be nearby before you can leave.",
	L"%s���ڱ����Ӷ�����ͣ����������޷������뿪�����������Ӷ�������ڸ����Ի������������뿪��",
};



STR16 pRepairStrings[] = 
{
/*	L"Items", 		// tell merc to repair items in inventory
	L"SAM Site", 		// tell merc to repair SAM site - SAM is an acronym for Surface to Air Missile
	L"Cancel", 		// cancel this menu
	L"Robot", 		// repair the robot
*/
	L"��Ʒ",
	L"SAM��������",
	L"ȡ��",
	L"������",
};


// NOTE: combine prestatbuildstring with statgain to get a line like the example below.
// "John has gained 3 points of marksmanship skill." 

STR16 sPreStatBuildString[] =
{
	L"ɥʧ", 	//"lost",// the merc has lost a statistic
	L"���", 	//"gained", // the merc has gained a statistic
	L"��",		//"point of",// singular
	L"��",		//"points of",// plural
	L"��",		// "level of",//singular
	L"��",		// "levels of",//plural
};

STR16 sStatGainStrings[] =
{
	L"������",	//"health.",
	L"���ݡ�",	//"agility.",
	L"���ɡ�",	//"dexterity.",
	L"�ǻۡ�",	//"wisdom.",
	L"ҽ�Ƽ��ܡ�",	//"medical skill.",
	L"���Ƽ��ܡ�",	//"explosives skill.",
	L"��е���ܡ�",	//"mechanical skill.",
	L"ǹ�����ܡ�",	//"marksmanship skill.",
	L"����",	//"experience.",
	L"����",	//"strength.",
	L"�쵼",	//"leadership.",
};


STR16 pHelicopterEtaStrings[] =
{
	L"�ܾ��룺",	//"Total Distance:  ", 			// total distance for helicopter to travel
	L"��ȫ��",	//" Safe:  ", 			// distance to travel to destination
	L"����ȫ��",	//" Unsafe:", 			// distance to return from destination to airport
	L"�ܼۣ�",	//"Total Cost: ", 		// total cost of trip by helicopter
	L"��ʱ��",	//"ETA:  ", 			// ETA is an acronym for "estimated time of arrival" 
	L"ֱ�������������������ڵ�ռ����½��",	//"Helicopter is low on fuel and must land in hostile territory!",	// warning that the sector the helicopter is going to use for refueling is under enemy control -> 
 	L"�˿ͣ�",	//"Passengers: ",
 	L"ѡ��Skyrider���ǡ���½�㡱?",	//"Select Skyrider or the Arrivals Drop-off?",
 	L"Skyrider",
 	L"��½��",	//"Arrivals",
};

STR16 sMapLevelString[] =
{
	L"�ز㣺",	//"L"Sublevel:", 			// what level below the ground is the player viewing in mapscreen
};

STR16 gsLoyalString[] =
{
	L"�ҳ϶�:",	//L"Loyal", 			// the loyalty rating of a town ie : Loyal 53%
};


// error message for when player is trying to give a merc a travel order while he's underground.

STR16 gsUndergroundString[] =
{
	L"�����ڵص��´��о����",	//L"can't get travel orders underground.", 
};

STR16 gsTimeStrings[] =
{
/*	L"h",				// hours abbreviation
	L"m",				// minutes abbreviation
	L"s",				// seconds abbreviation
	L"d",				// days abbreviation
	*/
	L"Сʱ",
	L"����",
	L"��",
	L"��",
};

// text for the various facilities in the sector

STR16 sFacilitiesStrings[] =
{
	L"��",		//"None",
	L"ҽԺ",	//"Hospital",
	L"����",	//"Industry",
	L"����",	//"Prison",
	L"���»���",	//"Military",
	L"����",	//"Airport",
	L"�г�",	//"Shooting Range",		// a field for soldiers to practise their shooting skills
};

// text for inventory pop up button

STR16 pMapPopUpInventoryText[] =
{
	//L"Inventory",
	//L"Exit",
	L"���",
	L"�뿪",
};

// town strings

STR16 pwTownInfoStrings[] =
{
	L"��С",	//"Size",				// 0 // size of the town in sectors
	L"", 							// blank line, required
	L"ռ���",	//"Control", 				// how much of town is controlled
	L"��",		//"None", 				// none of this town
	L"����",	//"Associated Mine", 			// mine associated with this town
	L"�ҳ϶�",	//"Loyalty",				// 5 // the loyalty level of this town
	L"���",	//"Trained", 				// the forces in the town trained by the player
	L"",
	L"��Ҫ��ʩ",	//"Main Facilities", 			// main facilities in this town
	L"�ȼ�",	//"Level", 				// the training level of civilians in this town
	L"���ѵ����",	//"Civilian Training",			// 10 // state of civilian training in town
	L"���",	//"Militia", 				// the state of the trained civilians in the town
};

// Mine strings

STR16 pwMineStrings[] =
{
	L"��",	//"Mine",				// 0
	L"����",	//"Silver",
	L"���",	//"Gold",
	L"��ǰ�ղ���",	//"Daily Production",
	L"��߲���",	//"Possible Production",	
	L"����",	//"Abandoned",					// 5
	L"�ر�",	//"Shut Down",
	L"�����ľ�",	//"Running Out",
	L"����",	//"Producing",
	L"״̬",	//"Status",
	L"������",	//"Production Rate",
	L"��ʯ����",		//"Ore Type",			// 10
	L"ռ���",	//"Town Control",
	L"�ҳ϶�",	//"Town Loyalty",
//	L"Working Miners",
};

// blank sector strings

STR16 pwMiscSectorStrings[] =
{
	//L"Enemy Forces",
	L"�о�",
	//L"Sector",
	L"����",
	//L"# of Items",
	L"��Ʒ����",
	//L"Unknown",
	L"δ֪",
	//L"Controlled",
	L"��ռ��",
	//L"Yes",
	L"��",
	//L"No",
	L"��",
};

// error strings for inventory

STR16 pMapInventoryErrorString[] =
{
	//L"%s isn't close enough.",	//Merc is in sector with item but not close enough
	L"%s��������",
	//L"Can't select that merc.",  //MARK CARTER
	L"�޷�ѡ���Ӷ����",
	//L"%s isn't in the sector to take that item.",
	L"%s������������������õ������Ʒ��",
	//L"During combat, you'll have to pick up items manually.",
	L"��ս��ʱ��������Լ����ּ�����Ʒ��",
	//L"During combat, you'll have to drop items manually.",
	L"��ս��ʱ��������Լ����ַ�����Ʒ��",
	//L"%s isn't in the sector to drop that item.",
	L"%s���ڸ÷��������ܷ����Ǹ���Ʒ��",
	L"During combat, you can't reload with an ammo crate.",
};

STR16 pMapInventoryStrings[] =
{
	//L"Location", 			// sector these items are in
	//L"Total Items", 		// total number of items in sector
	L"λ��",
	L"��Ʒ����",
};


// help text for the user

STR16 pMapScreenFastHelpTextList[] =
{
/*
	L"To change a merc's assignment to such things as another squad, doctor or repair, click within the 'Assign' column",
	L"To give a merc a destination in another sector, click within the 'Dest' column",
	L"Once a merc has been given a movement order, time compression allows them to get going.",
	L"Left click selects the sector. Left click again to give a merc movement orders, or Right click to get sector summary information.",
	L"Press 'h' at any time in this screen to get this help dialogue up.",
	L"Test Text",
	L"Test Text",
	L"Test Text",
	L"Test Text",
	L"There isn't much you can do on this screen until you arrive in Arulco. When you've finalized your team, click on the Time Compression button at the lower right. This will advance time until your team arrives in Arulco.",
*/
	L"���Ҫ�ı�Ӷ���ķ������񣬱���ֵ���һ��С�ӡ���ҽ������������ȣ��밴 '����' ����",
	L"Ҫ��Ӷ������һ������Ϊ�о�Ŀ�꣬�밴'Dest'����",
	L"һ����Ӷ���´����о����� ���밴ʱ��ѹ����ť�������ǿ�ʼ�н���",
	L"��������ѡ��÷������ٴ��������Զ�Ӷ���´��о�����, ��������һ��Ի�ȡ������ϢС�ᡣ",
	L"�κ�ʱ���ڸ���Ļ�¶����԰�'h'�����Ե����������ڡ�",
	L"�����ı�",
	L"�����ı�",
	L"�����ı�",
	L"�����ı�",
	L"����δ��ʼArulco֮�ã������������Ļ�������¿����������Ѷ�Ա����Ӷ�ú���������·��ġ�ʱ��ѹ������ť�����������Ķ��鵽��Arulcoǰ��ʱ���ǰ���ˡ�",
};

// movement menu text

STR16 pMovementMenuStrings[] =
{
	L"����Ӷ��",	//"Move Mercs In Sector", 	// title for movement box 
	L"�����о�·��",	//"Plot Travel Route", 		// done with movement menu, start plotting movement
	L"ȡ��",	//"Cancel", 		// cancel this menu
	L"����",	//"Other",		// title for group of mercs not on squads nor in vehicles
};


STR16 pUpdateMercStrings[] =
{
/*
	L"Oops:", 			// an error has occured
	L"Mercs Contract Expired:", 	// this pop up came up due to a merc contract ending
	L"Mercs Completed Assignment:", // this pop up....due to more than one merc finishing assignments
	L"Mercs Back on the Job:", // this pop up ....due to more than one merc waking up and returing to work
	L"Mercs Catching Some Z's:", // this pop up ....due to more than one merc being tired and going to sleep
	L"Contracts Expiring Soon:", 	// this pop up came up due to a merc contract ending
*/
	L"����:", 			// an error has occured
	L"Ӷ����ͬ������:", 	// this pop up came up due to a merc contract ending
	L"Ӷ������˷��������:", // this pop up....due to more than one merc finishing assignments
	L"Ӷ�������ˣ������ɻ�:", // this pop up ....due to more than one merc waking up and returing to work
	L"Ӷ��������:", // this pop up ....due to more than one merc being tired and going to sleep
	L"��ͬ�쵽����:", 	// this pop up came up due to a merc contract ending
};

// map screen map border buttons help text

STR16 pMapScreenBorderButtonHelpText[] =
{
/*
	L"Show To|wns",
	L"Show |Mines",
	L"Show |Teams & Enemies",
	L"Show |Airspace",
	L"Show |Items",
	L"Show Militia & Enemies (|Z)",
*/	
	L"��ʾ���� (|W)",
	L"��ʾ�� (|M)",
	L"��ʾ����͵��� (|T)",
	L"��ʾ��� (|A)",
	L"��ʾ��Ʒ (|I)",
	L"��ʾ����͵��� (|Z)",
};


STR16 pMapScreenBottomFastHelp[] =
{
	L"�ʼǱ����� (|L)",	//"|Laptop",
	L"ս����Ļ (|E|s|c)",	//"Tactical (|E|s|c)",
	L"ѡ�� (|O)",	//"|Options",
	L"ʱ��ѹ�� (|+)",	//"Time Compress (|+)", 	// time compress more
	L"ʱ��ѹ�� (|-)",	//"Time Compress (|-)", 	// time compress less
	L"��һ��Ϣ (|U|p)\n��һҳ (|P|g|U|p)",	//"Previous Message (|U|p)\nPrevious Page (|P|g|U|p)", 	// previous message in scrollable list
	L"��һ��Ϣ (|D|o|w|n)\n��һҳ (|P|g|D|n)", 	// next message in the scrollable list
	L"��ʼ/ֹͣʱ��ѹ�� (|S|p|a|c|e)",	//"Start/Stop Time (|S|p|a|c|e)",	// start/stop time compression
};

STR16 pMapScreenBottomText[] =
{
	L"�ʻ����",	//"Current Balance", 	// current balance in player bank account
};

STR16 pMercDeadString[] =
{
	L"%s���ˡ�",	//"%s is dead.",
};


STR16 pDayStrings[] =
{
	//L"Day",
	L"��",
};

// the list of email sender names

STR16 pSenderNameList[] =
{
	L"Enrico",
	L"Psych Pro Inc",
	L"�������",		//"Help Desk",
	L"Psych Pro Inc",
	L"Speck",
	L"R.I.S.",		//5
	L"Barry",
	L"Blood",
	L"Lynx",
	L"Grizzly",
	L"Vicki",			//10
	L"Trevor",
	L"Grunty",
	L"Ivan",
	L"Steroid",
	L"Igor",			//15
	L"Shadow",
	L"Red",
	L"Reaper",
	L"Fidel",
	L"Fox",				//20
	L"Sidney",
	L"Gus",
	L"Buns",
	L"Ice",
	L"Spider",		//25
	L"Cliff",
	L"Bull",
	L"Hitman",
	L"Buzz",
	L"Raider",		//30
	L"Raven",
	L"Static",
	L"Len",
	L"Danny",
	L"Magic",
	L"Stephen",
	L"Scully",
	L"Malice",
	L"Dr.Q",
	L"Nails",
	L"Thor",
	L"Scope",
	L"Wolf",
	L"MD",
	L"Meltdown",
	//----------
	L"M.I.S. ���չ�˾",	//"M.I.S. Insurance",
	L"Bobby Rays",
	L"Kingpin",
	L"John Kulba",
	L"A.I.M.",
};


// next/prev strings

STR16 pTraverseStrings[] =
{
/*
  L"Previous",
  L"Next",
*/
  L"��һ��",
  L"��һ��",
};

// new mail notify string 

STR16 pNewMailStrings[] =
{
 L"�����µ��ʼ�...",	//"You have new mail...",
};


// confirm player's intent to delete messages

STR16 pDeleteMailStrings[] =
{
  L"ɾ���ʼ���",	//"Delete mail?",
  L"ɾ��δ�����ʼ���",	//"Delete UNREAD mail?",
};


// the sort header strings

STR16 pEmailHeaders[] =
{
	L"���ԣ�",	//"From:",
	L"���⣺",	//"Subject:",
	L"���ڣ�",	//"Day:",
};

// email titlebar text

STR16 pEmailTitleText[] =
{
	L"����",	//"Mail Box",
};


// the financial screen strings
STR16 pFinanceTitle[] =
{
	L"�ʲ�",	//"Bookkeeper Plus",		//the name we made up for the financial program in the game
};

STR16 pFinanceSummary[] =
{
	L"���룺",	//"Credit:", 				// credit (subtract from) to player's account
	L"֧����",	//"Debit:", 				// debit (add to) to player's account
	L"����ʵ�����룺",	//"Yesterday's Actual Income:",
	L"����������",	//"Yesterday's Other Deposits:",
	L"����֧����",		//"Yesterday's Debits:",
	L"����������",	//"Balance At Day's End:",
	L"����ʵ�����룺",	//"Today's Actual Income:",
	L"����������",	//"Today's Other Deposits:",
	L"����֧����",		//"Today's Debits:",
	L"���յ�ǰ��",	//"Current Balance:",
	L"Ԥ�����룺",		//"Forecasted Income:",
	L"����Ԥ����",	//"Projected Balance:", 		// projected balance for player for tommorow
};


// headers to each list in financial screen

STR16 pFinanceHeaders[] =
{
	L"����",	//"Day", 				// the day column
	L"����",	//"Credit", 			// the credits column (to ADD money to your account)
	L"֧��",	//"Debit",				// the debits column (to SUBTRACT money from your account)
	L"���׼�¼",	//"Transaction", // transaction type - see TransactionText below
	L"���",	//"Balance", 		// balance at this point in time
	L"ҳ��",	//"Page", 				// page number
	L"��", 		// the day(s) of transactions this page displays 
};


STR16 pTransactionText[] =
{
	L"��Ȼ��ֵ��Ϣ",	//"Accrued Interest",		// interest the player has accumulated so far
	L"�������",		//"Anonymous Deposit",
	L"���׷���", 	//"Transaction Fee", 
	L"�ѹ�Ӷ",	//"Hired", 				// Merc was hired
	L"��Bobby Ray�����Ʒ", 	//"Bobby Ray Purchase",	// Bobby Ray is the name of an arms dealer
	L"��M.E.R.C������",		//"Settled Accounts at M.E.R.C.",
	L"%s��ҽ�Ʊ�֤��", 	//"Medical Deposit for %s", 		// medical deposit for merc
	L"IMP������������",	//"IMP Profile Analysis", 		// IMP is the acronym for International Mercenary Profiling
	L"Ϊ%s������", 	//"Purchased Insurance for %s", 
	L"����%s�ı�������",	//"Reduced Insurance for %s",
	L"�ӳ�%s�ı�������",	//"Extended Insurance for %s", 				// johnny contract extended
	L"ȡ��%s�ı���",	//"Canceled Insurance for %s", 
	L"%s�ı�������", 	//"Insurance Claim for %s",		// insurance claim for merc
	L"1��",	//"a day", 				// merc's contract extended for a day
	L"1��",	//"1 week", 				// merc's contract extended for a week
	L"2��",	//"2 weeks", 				// ... for 2 weeks
	L"�ɿ�����",	//"Mine income", 
	L"", //String nuked
	L"��",	//"Purchased Flowers",
	L"%s��ҽ�Ʊ�֤���ȫ���˿�",	//"Full Medical Refund for %s",
	L"%s��ҽ�Ʊ�֤��Ĳ����˿�",	//"Partial Medical Refund for %s",
	L"%s��ҽ�Ʊ�֤��û���˿�",	//"No Medical Refund for %s",
	L"����%s��Ǯ",	//"Payment to %s",	// %s is the name of the npc being paid
	L"֧����%s��Ӷ��", 	//"Transfer Funds to %s", 		// transfer funds to a merc
	L"%s�˻ص�Ӷ��", 	//"Transfer Funds from %s",	// transfer funds from a merc
	L"��%sѵ�����",	//"Equip militia in %s", // initial cost to equip a town's militia
	L"��%s��������Ʒ��",	//"Purchased items from %s.",//is used for the Shop keeper interface.  The dealers name will be appended to the end of the string.
	L"%s���",		//"%s deposited money.",	
	L"Sold Item(s) to the Locals",
};

STR16 pTransactionAlternateText[] =
{
	L"�ı���", 		//"Insurance for", 		// insurance for a merc
	L"�ӳ�%s�ĺ�ͬһ�ա�",  //"Ext. %s's contract by one day.", 	// entend mercs contract by a day
	L"�ӳ�%s�ĺ�ͬһ�ܡ�",	//"Ext. %s contract by 1 week.",	
	L"�ӳ�%s�ĺ�ͬ���ܡ�",	//"Ext. %s contract by 2 week.",	
};

// helicopter pilot payment 

STR16 pSkyriderText[] =
{
	L"���� Skyrider $%d",	//"Skyrider was paid $%d", 			// skyrider was paid an amount of money
	L"��Ƿ Skyrider $%d",	//"Skyrider is still owed $%d", 		// skyrider is still owed an amount of money
	L"Skyrider ��ɲ�������",	//"Skyrider has finished refueling",	// skyrider has finished refueling
	L"",//unused
	L"",//unused
	L"Skyrider �������ٴη��е�׼����",	//"Skyrider is ready to fly once more.", // Skyrider was grounded but has been freed
	//L"Skyrider has no passengers.  If it is your intention to transport mercs in this sector, assign them to Vehicle/Helicopter first.",
	L"Skyrider û�г˿͡��������ͼ�������������Ӷ��������Ҫ�������ǽ��롰��ͨ���ߡ���>��ֱ���ɻ�����",};


// strings for different levels of merc morale

STR16 pMoralStrings[] =
{
	L"����",	//"Great", 
	L"����",	//"Good",
	L"�ȶ�",	//"Stable",
	L"����",	//"Poor",
	L"�ֻ�",	//"Panic",
	L"���",	//"Bad",
};

// Mercs equipment has now arrived and is now available in Omerta or Drassen.

STR16 pLeftEquipmentString[] =
{ 
/*
	L"%s's equipment is now available in Omerta (A9).", 
	L"%s's equipment is now available in Drassen (B13).",
*/
	L"%s��װ�����ڿ�����Omerta (A9)��á�", 
	L"%s��װ�����ڿ�����Drassen (B13)��á�",
};

// Status that appears on the Map Screen

STR16 pMapScreenStatusStrings[] =
{
/*
	L"Health",
	L"Energy",
	L"Morale",
	L"Condition",	// the condition of the current vehicle (its "health")
	L"Fuel",	// the fuel level of the current vehicle (its "energy")
*/
	L"����",
	L"����",
	L"ʿ��",
	L"״̬",
	L"����",
};


STR16 pMapScreenPrevNextCharButtonHelpText[] =
{
	L"��һӶ�� (|L|e|f|t)",	//"Previous Merc (|L|e|f|t)", 			// previous merc in the list
	L"��һӶ�� (|R|i|g|h|t)",	//"Next Merc (|R|i|g|h|t)", 				// next merc in the list
};


STR16 pEtaString[] =
{
	L"��ʱ��",//L"ETA:", 				// eta is an acronym for Estimated Time of Arrival
};

STR16 pTrashItemText[] =
{
	L"�㽫�����ټ������ˡ���ȷ����",	//"You'll never see it again. You sure?", 	// do you want to continue and lose the item forever
	L"�����Ʒ�������ǳ��ǳ���Ҫ�������Ҫ�ӵ�����",	//"This item looks REALLY important. Are you REALLY REALLY sure you want to trash it?", // does the user REALLY want to trash this item
};


STR16 pMapErrorString[] = 
{
	L"С�Ӳ����о�����Ϊ������˯����", //L"Squad can't move with a sleeping merc on it.",

//1-5
	L"����Ҫ�ص����棬�����ƶ�С�ӡ�",	//"Move the squad above ground first.",
	L"�о��������ǵ�ռ��!", 	//"Movement orders? It's a hostile sector!",
	L"�����Ӷ������С�ӻ��߽�ͨ���߲��ܿ�ʼ�о���", //"Mercs must be assigned to a squad or vehicle in order to travel."
	L"������û���κζ�Ա��", 	//"You don't have any team members yet.",	// you have no members, can't do anything 
	L"Ӷ���޷�������",	//"Merc can't comply.",		 		// merc can't comply with your order
//6-10
/*
	L"needs an escort to move. Place him on a squad with one.", // merc can't move unescorted .. for a male
	L"needs an escort to move. Place her on a squad with one.", // for a female
	L"Merc hasn't yet arrived in Arulco!",
	L"Looks like there's some contract negotiations to settle first.",
	L"Cannot give a movement order. Air raid is going on.",
*/
	L"��Ҫ���˻��Ͳ����о���������ֽ�һ��С���", // merc can't move unescorted .. for a male
	L"��Ҫ���˻��Ͳ����о���������ֽ�һ��С���", // for a female
	L"Ӷ����δ����Arulco!",
	L"��������̸�׺�ͬ��",
	L"�޷������о����Ŀǰ�п�Ϯ��",
//11-15
/*
	L"Movement orders? There's a battle going on!",
	L"You have been ambushed by bloodcats in sector %s!",
	L"You have just entered what appears to be a bloodcat lair in sector I16!", 
	L"", 
	L"The SAM site in %s has been taken over.",
*/
	L"�о�? ��������ս����!",
	L"���ڷ���%s��Ѫè������!",
	L"��ոս�����I16������������Ѫè�ĳ�Ѩ!", 
	L"", 
	L"��%s��SAM�������ر��о�ռ���ˡ�",
//16-20
/*
	L"The mine in %s has been taken over. Your daily income has been reduced to %s per day.",
	L"The enemy has taken over sector %s uncontested.",
	L"At least one of your mercs could not be put on this assignment.",
	L"%s could not join %s as it is already full",
	L"%s could not join %s as it is too far away.",
*/
	L"��%s�Ŀ󾮱��о�ռ���ˡ�����������½�Ϊÿ��%s��",
	L"�о�δ�⵽�ֿ�����ռ����%s",
	L"������һ�����Ӷ�����ܱ������������",
	L"%s�޷�����%s����Ϊ���Ѿ���Ա��",
	L"%s�޷�����%s����Ϊ��̫Զ�ˡ�",
//21-25
/*
	L"The mine in %s has been captured by enemy forces!",
	L"Enemy forces have just invaded the SAM site in %s",
	L"Enemy forces have just invaded %s",
	L"Enemy forces have just been spotted in %s.",
	L"Enemy forces have just taken over %s.",
*/
	L"��%s�Ŀ󾮱��о�ռ����!",
	L"�о�������%s����SAM��������",
	L"�о�������%s",
	L"�о���%s��û��",
	L"�о�ռ����%s.",
//26-30
/*
	L"At least one of your mercs is not tired.",
	L"At least one of your mercs could not be woken up.",
	L"Militia will not appear until they have finished training.",
	L"%s cannot be given movement orders at this time.",
	L"Militia that are not within town boundaries cannot be moved to another sector.",
*/
	L"���Ӷ����������һ�˲���˯�ߡ�",
	L"���Ӷ����������һ�˲���������",
	L"ѵ����ϣ��Ż���������",
	L"�����޷���%s�´��о����",
	L"���ڳ���߽������޷��о�����һ��������",
//31-35
	//L"You can't have militia in %s.",
	L"�㲻����%sӵ�������",
	//L"A vehicle can't move while empty!",
	L"���ǿյģ��޷��ƶ���!",
	//L"%s is too injured to travel!",
	L"%s����̫�����ˣ��޷��о�!",
	//L"You must leave the museum first!",
	L"����������뿪����ݣ�",
	//L"%s is dead!",
	L"%s���ˣ�",
//36-40
	//L"%s can't switch to %s because it's moving",
	L"%s�޷�ת��%s��Ϊ�����ƶ���",
	//"%s can't enter the vehicle that way",
	L"%s�޷��������뽻ͨ����",	
	//"%s can't join %s",
	L"%s�޷�����%s",	
	//L"You can't compress time until you hire some new mercs!",
	L"�����Ӷ�µ�Ӷ��ǰ���㲻��ѹ��ʱ�䡣",
	//L"This vehicle can only travel along roads!",
	L"����ֻ���ڹ�·�Ͽ���",
//41-45
	//L"You can't reassign mercs who are on the move",
	L"��Ӷ���ƶ�ʱ���㲻�����·�������",
	//L"Vehicle is out of gas!",
	L"����û���ˣ�",
	//L"%s is too tired to travel.",
	L"%s̫���ˣ����²����о���",
	//L"Nobody aboard is able to drive the vehicle.",
	L"����û�����ܹ���ʻ��",
	//L"One or more members of this squad can't move right now.",
	L"���С�ӵ�Ӷ�����ڲ����ƶ���",
//46-50
	//L"One or more of the OTHER mercs can't move right now.",
	L"����Ӷ�����ڲ����ƶ���",	
	//L"Vehicle is too damaged!",
	L"�������𻵵�̫�����ˣ�",	
	//L"Note that only two mercs may train militia in each sector.",
	L"ÿ������ֻ��������Ӷ����ѵ�������",
	//L"The robot can't move without its controller. Place them together in the same squad.",
	L"û��ң��Ա���������޷��ƶ���������Ƿ�����ͬһ��С�ӡ�",
};


// help text used during strategic route plotting
STR16 pMapPlotStrings[] =
{
	//L"Click again on the destination to confirm your final route, or click on another sector to place more waypoints.",
	L"�ٵ��һ��Ŀ�ĵ���ȷ��������·�ߣ����ߵ����һ�����������ø����·�㡣",
	//L"Travel route confirmed.",
	L"�о�·����ȷ�ϡ�",
	//L"Destination unchanged.",
	L"Ŀ�ĵ�δ�ı䡣",
	//L"Travel route canceled.",
	L"�о�·����ȡ����",
	//L"Travel route shortened.",
	L"�о�·�������̡�",
};


// help text used when moving the merc arrival sector
STR16 pBullseyeStrings[] =
{
/*
	L"Click on the sector where you would like the mercs to arrive instead.",
	L"OK.  Arriving mercs will be dropped off in %s",
	L"Mercs can't be flown there, the airspace isn't secured!",
	L"Canceled.  Arrival sector unchanged",
	L"Airspace over %s is no longer secure!  Arrival sector was moved to %s.",
*/
	L"���������Ӷ����½�ķ�����",
	L"�õġ�Ӷ������%s��½",
	L"Ӷ�����ܷ��������ղ���ȫ!",
	L"ȡ������½����δ�ı�",
	L"%s�ϵ�������ڲ���ȫ��!��½��������Ϊ%s��",

};


// help text for mouse regions

STR16 pMiscMapScreenMouseRegionHelpText[] =
{
	L"��������Ļ (|E|n|t|e|r)",	//"Enter Inventory (|E|n|t|e|r)",
	L"�ӵ���Ʒ",	//"Throw Item Away",
	L"�뿪�����Ļ (|E|n|t|e|r)",	//"Exit Inventory (|E|n|t|e|r)",
};



// male version of where equipment is left
STR16 pMercHeLeaveString[] =
{
/*
	L"Have %s leave his equipment where he is now (%s) or later on in Drassen (B13) upon catching flight out of Arulco?",
	L"Have %s leave his equipment where he is now (%s) or later on in Omerta (A9) upon catching flight out of Arulco?",
	L"is about to leave and will drop off his equipment in Omerta (A9).",
	L"is about to leave and will drop off his equipment in Drassen (B13).",
	L"%s is about to leave and will drop off his equipment in %s.",
*/
	L"��%s��װ���������������ڵĵط�(%s)��������Drassen (B13)�ǻ�����Arulco����װ����������?",
	L"��%s��װ���������������ڵĵط�(%s)��������Omerta (A9)�ǻ�����Arulco����װ����������?",
	L"Ҫ�뿪�ˣ�����װ����������Omerta (A9)��",
	L"Ҫ�뿪�ˣ�����װ����������Drassen (B13)��",
	L"%sҪ�뿪�ˣ�����װ����������%s��",
};


// female version
STR16 pMercSheLeaveString[] =
{
/*
	L"Have %s leave her equipment where she is now (%s) or later on in Drassen (B13) upon catching flight out of Arulco?",
	L"Have %s leave her equipment where she is now (%s) or later on in Omerta (A9) upon catching flight out of Arulco?",
	L"is about to leave and will drop off her equipment in Omerta (A9).",
	L"is about to leave and will drop off her equipment in Drassen (B13).",
	L"%s is about to leave and will drop off her equipment in %s.",
*/
	L"��%s��װ���������������ڵĵط�(%s)��������Drassen (B13)�ǻ�����Arulco����װ����������?",
	L"��%s��װ���������������ڵĵط�(%s)��������Omerta (A9)�ǻ�����Arulco����װ����������?",
	L"Ҫ�뿪�ˣ�����װ����������Omerta (A9)��",
	L"Ҫ�뿪�ˣ�����װ����������Drassen (B13)��",
	L"%sҪ�뿪�ˣ�����װ����������%s��",
};


STR16 pMercContractOverStrings[] =
{
	//"'s contract ended, so he's gone home.", 		// merc's contract is over and has departed
	L"�ĺ�ͬ�����ˣ��������ؼ��ˡ�",
	//L"'s contract ended, so she's gone home.", 		// merc's contract is over and has departed
	L"�ĺ�ͬ�����ˣ��������ؼ��ˡ�",
	//L"'s contract was terminated, so he left.", 		// merc's contract has been terminated
	L"�ĺ�ͬ��ֹ�ˣ��������뿪�ˡ�",
	//L"'s contract was terminated, so she left.",		// merc's contract has been terminated
	L"�ĺ�ͬ��ֹ�ˣ��������뿪�ˡ�",
	//L"You owe M.E.R.C. too much cash, so %s took off.", // Your M.E.R.C. account is invalid so merc left
	L"��Ƿ��M.E.R.C.̫��Ǯ������%s�뿪�ˡ�",
};

// Text used on IMP Web Pages

// WDS: Allow flexible numbers of IMPs of each sex
//    note: I only updated the English text to remove "three" below
STR16 pImpPopUpStrings[] =
{
	//L"Invalid Authorization Code",
	L"��Ч����Ȩ��",
	//L"You Are About To Restart The Entire Profiling Process. Are You Certain?",
	L"����ͼ���¿�ʼ�������ԡ���ȷ����",
	//L"Please Enter A Valid Full Name and Gender",
	L"��������ȷ��ȫ�����Ա�",
	//L"Preliminary analysis of your financial status shows that you cannot afford a profile analysis.",
	L"����Ĳ���״����Ԥ�ȷ�����ʾ�����޷��������������ķ��á�",
  	//L"Not A Valid Option At This Time.",
	L"���ڲ��Ǹ���Ч��ѡ��",
	//L"To complete an accurate profile, you must have room for at least one team member.",
	L"Ҫ����������������Ķ����б���������һ����λ��",
	//L"Profile Already Completed.",
	L"������ϡ�",
	L"�޷��Ӵ����϶���I.M.P.�������ݡ�",	//"Cannot load I.M.P. character from disk.",
	L"���Ѿ��ﵽI.M.P.�������ޡ�",	//"You have already reached the maximum number of I.M.P. characters.",
	L"���Ѿ��ﵽI.M.P.���Ա��������ޡ�",	//"You have already the maximum number of I.M.P characters with that gender on your team.",
	L"���޷�֧����I.M.P.����ķ��á�",	//"You cannot afford the I.M.P character.",
	L"�µ�I.M.P.�����������Ķ��顣",	//"The new I.M.P character has joined your team.",
};


// button labels used on the IMP site

STR16 pImpButtonText[] =
{
	L"��������",	//"About Us", 			// about the IMP site
	L"��ʼ",	//"BEGIN", 			// begin profiling
	L"�Ը�",	//"Personality", 		// personality section
	L"����",	//"Attributes", 		// personal stats/attributes section
	L"Ф��",	//"Portrait", 			// the personal portrait selection
	L"ɤ��%d",	//"Voice %d", 			// the voice selection
	L"���",	//"Done", 			// done profiling
	L"���¿�ʼ",	//"Start Over", 		// start over profiling
	L"�ǵģ���ѡ���˸���ͻ���Ļش�",	//"Yes, I choose the highlighted answer.", 
	L"��",	//"Yes", 
	L"��",	//"No",
	L"����",	//"Finished", 			// finished answering questions
	L"��һ��",	//"Prev", 			// previous question..abbreviated form
	L"��һ��",	//"Next", 			// next question
	L"�ǵģ���ȷ����",	//"YES, I AM.", 		// yes, I am certain 
	L"�����������¿�ʼ��",	//"NO, I WANT TO START OVER.", // no, I want to start over the profiling process
	L"��",	//"YES, I DO.",
	L"��",	//"NO",
	L"����",	//"Back", 			// back one page
	L"ȡ��",	//"Cancel", 			// cancel selection
	L"�ǵģ���ȷ����",	//"Yes, I am certain.",
	L"���������ٿ�����",	//"No, let me have another look.",
	L"ע��",	//"Registry", 			// the IMP site registry..when name and gender is selected
	L"����...",	//"Analyzing", 			// analyzing your profile results
	L"���",	//"OK",
	L"ɤ��",	//"Voice",
};

STR16 pExtraIMPStrings[] =
{
	/*
	L"With the voice now selected, it is time to select your skills.",
	L"To complete the process, select your attributes.",
	L"To commence actual profiling, select portrait.",
	L"Now that you have completet your portrait choice, select the voice sample that best fits you.",
	*/
	L"����ɤ��ѡ���ˣ�����ѡ���������յļ��ܡ�",
	L"���ѡ������������ע�ᡣ",
	L"��ʼʵ�ʷ�����ѡ������Ф��",
	L"����ѡ�����������Ƶ�ɤ����",
};

STR16 pFilesTitle[] =
{
  	L"�ļ��鿴��",	//L"File Viewer",
};

STR16 pFilesSenderList[] =
{
	/*
  L"Recon Report", 		// the recon report sent to the player. Recon is an abbreviation for reconissance
	L"Intercept #1", 		// first intercept file .. Intercept is the title of the organization sending the file...similar in function to INTERPOL/CIA/KGB..refer to fist record in files.txt for the translated title
	L"Intercept #2",	   // second intercept file
	L"Intercept #3",			 // third intercept file
	L"Intercept #4", // fourth intercept file
	L"Intercept #5", // fifth intercept file
	L"Intercept #6", // sixth intercept file
	*/
	L"��챨��",
	L"1��ͨ����",
	L"2��ͨ����",
	L"3��ͨ����",
	L"4��ͨ����",
	L"5��ͨ����",
	L"6��ͨ����",
};

// Text having to do with the History Log

STR16 pHistoryTitle[] =
{
		L"��־",//L"History Log",
};

STR16 pHistoryHeaders[] =
{
	/*
	L"Day", 			// the day the history event occurred
	L"Page", 			// the current page in the history report we are in
	L"Day", 			// the days the history report occurs over
	L"Location", 			// location (in sector) the event occurred
	L"Event", 			// the event label
*/
	L"��",
	L"ҳ��",
	L"����",
	L"λ��",
	L"�¼�",
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
	L"��A.I.M��Ӷ��%s��",	//"%s was hired from A.I.M.", 										// merc was hired from the aim site
	L"��M.E.R.C��Ӷ��%s��",	//"%s was hired from M.E.R.C.", 									// merc was hired from the aim site
	L"%s���ˡ�",	//"%s died.", 															// merc was killed
	L"��M.E.R.C������",	//"Settled Accounts at M.E.R.C.",								// paid outstanding bills at MERC
	L"����Enrico Chivaldori��ί��",	//"Accepted Assignment From Enrico Chivaldori",	
	//6-10
	L"IMP������",	//"IMP Profile Generated",
	L"Ϊ%s�����ա�",	//"Purchased Insurance Contract for %s.", 				// insurance contract purchased
	L"ȡ��%s�ı��պ�ͬ��",	//"Canceled Insurance Contract for %s.", 				// insurance contract canceled
	L"�յ�%s�ı������⡣",	//"Insurance Claim Payout for %s.", 							// insurance claim payout for merc
	L"�ӳ�һ��%s�ĺ�ͬ��",	//"Extended %s's contract by a day.", 						// Extented "mercs name"'s for a day
	//11-15
	L"�ӳ�һ��%s�ĺ�ͬ��",	//"Extended %s's contract by 1 week.", 					// Extented "mercs name"'s for a week
	L"�ӳ�����%s�ĺ�ͬ��",	//"Extended %s's contract by 2 weeks.", 					// Extented "mercs name"'s 2 weeks
	L"%s������ˡ�",	//"%s was dismissed.", 													// "merc's name" was dismissed.
	L"%s�˳��ˡ�",	//"%s quit.", 																// "merc's name" quit.
	L"��ʼ����",	//"quest started.", 	// a particular quest started														// a particular quest started
	//16-20
	L"�������",	//"quest completed.",
	L"��%s�Ŀ�����̸",	//"Talked to head miner of %s",									// talked to head miner of town
	L"�����%s",	//"Liberated %s",
	L"��������",	//"Cheat Used",
	L"ʳ����������ʹ�Omerta",	//"Food should be in Omerta by tomorrow",
	//21-25
	L"%s��Ӳ���Ϊ��Daryl Hick������",	//"%s left team to become Daryl Hick's wife",
	L"%s�ĺ�ͬ�����ˡ�",	//"%s's contract expired.",
	L"��ļ��%s��",	//"%s was recruited.",
	L"Enrico��Թ��չ����",	//"Enrico complained about lack of progress",
	L"ս��ʤ��",	//"Battle won",
	//26-30
	L"%s�Ŀ󾮿�ʼȱ����ʯ",	//"%s mine started running out of ore",
	L"%s�Ŀ󾮲����˿�ʯ",	//"%s mine ran out of ore",
	L"%s�Ŀ󾮹ر���",	//"%s mine was shut down",
	L"%s�Ŀ󾮸�����",	//"%s mine was reopened",
	L"����һ����Tixa�ļ�����",	//"Found out about a prison called Tixa.",
	//31-35
	L"������һ����Orta����������������",	//"Heard about a secret weapons plant called Orta.",
	L"��Orta�Ŀ�ѧ�Ҿ����˴����Ļ��ǹ��",	//"Scientist in Orta donated a slew of rocket rifles.",
	L"DeidrannaŮ����������ʬ��ĳЩ���顣", //"Queen Deidranna has a use for dead bodies.",
	L"Frank̸������San Mona��ȭ��������",	//"Frank talked about fighting matches in San Mona.",
	L"һ������˵���ڿ��￴����һЩ������",	//"A patient thinks he saw something in the mines.",
	//36-40
	L"����һ����Devin���ˣ������۱�ը�",	//"Met someone named Devin - he sells explosives.",
	L"ż��Mike��ǰAIM���ˣ�",	//"Ran into the famous ex-AIM merc Mike!",
	L"����Tony����������������",	//"Met Tony - he deals in arms.",
	L"��Krott��ʿ����õ�һ�ѻ��ǹ��",	//"Got a rocket rifle from Sergeant Krott.",
	L"��AngelƤ�µ����Լ����Kyle��",	//"Gave Kyle the deed to Angel's leather shop.",
	//41-45
	L"Madlab������һ�������ˡ�", 		//"Madlab offered to build a robot.",
	L"Gabby�������Ը����ӵ�����ҩ��",	//"Gabby can make stealth concoction for bugs.",
	L"KeithЪҵ�ˡ�",			//"Keith is out of business.",	
	L"Howard��DeidrannaŮ���ṩ�軯�",	//"Howard provided cyanide to Queen Deidranna.",
	L"����Keith -Cambria���ӻ��̡�",	// "Met Keith - all purpose dealer in Cambria.",
	//46-50
	L"����Howrd��һ����Balime��ҽҩ�̡�",	//"Met Howard - deals pharmaceuticals in Balime",
	L"����Perko��������һ��С�����ڡ���",	//"Met Perko - runs a small repair business.",
	L"������Balime��Sam������һ�����ꡣ",	//"Met Sam of Balime - runs a hardware shop.",
	L"Franz�����Ӳ�Ʒ��������������⡣",	//"Franz deals in electronics and other goods.",
	L"Arnold��Grumm����һ������ꡣ",	//"Arnold runs a repair shop in Grumm.",
	//51-55
	L"Fredo��Grumm������Ӳ�Ʒ��",	//"Fredo repairs electronics in Grumm.",
	L"�յ���Balime����Ǯ�˵ľ�",	//"Received donation from rich guy in Balime.",
	L"����һ����Jake�ķ�Ʒ���ˡ�",	//"Met a junkyard dealer named Jake.",
	L"һ�������߸�������һ�ŵ���Կ�׿���",	//"Some bum gave us an electronic keycard.",
	L"��¸��Walter�������򿪵����ҵ��š�",  //"Bribed Walter to unlock the door to the basement.",
	//56-60
	L"���Dave�����ͣ�������ѽ��м��͡�", //"If Dave has gas, he'll provide free fillups.",
	L"��¸Pablo��",	//"Greased Pablo's palms.",
	L"Kingping�û���San Mona���е�Ǯ��",	//"Kingpin keeps money in San Mona mine.",
	L"%sӮ��ȭ����",	//"%s won Extreme Fighting match",
	L"%s����ȭ����",	//"%s lost Extreme Fighting match",
	//61-65
	L"%sɥʧ��ȭ�����Ĳ����ʸ�",	//"%s was disqualified in Extreme Fighting",
	L"�ڷ����Ŀ����ҵ�һ���Ǯ��",	//"Found a lot of money stashed in the abandoned mine.",
	L"����Kingpin�ɳ���ɱ�֡�",	//"Encountered assassin sent by Kingpin.",
	L"�÷���ʧ��",	//"Lost control of sector",		//ENEMY_INVASION_CODE
	L"�ɹ������÷���",	//"Defended sector",
	//66-70
	L"��սʧ��",		//"Lost battle",			//ENEMY_ENCOUNTER_CODE
	L"�����ķ���",		//"Fatal ambush",		//ENEMY_AMBUSH_CODE
	L"ɱ���˵о��ķ���",	//"Wiped out enemy ambush",
	L"����ʧ��",	//"Unsuccessful attack", 		//ENTERING_ENEMY_SECTOR_CODE
	L"�����ɹ���",	//"Successful attack!",
	//71-75
	L"���ι���",		//"Creatures attacked",	/CREATURE_ATTACK_CODE
	L"��Ѫè�Ե���",	//"Killed by bloodcats",//BLOODCAT_AMBUSH_CODE
	L"�׵���Ѫè",	//"Slaughtered bloodcats",
	L"%s���ɵ���",	//"%s was killed",
	L"��һ���ֲ����ӵ�ͷ­����Carmen��",	//"Gave Carmen a terrorist's head",
	L"Slay����",				//"Slay left",	
	L"�ɵ���%s",				//"Killed %s",
};

STR16 pHistoryLocations[] =
{
	L"N/A",						// N/A is an acronym for Not Applicable
};

// icon text strings that appear on the laptop

STR16 pLaptopIcons[] =
{
	L"����",	//"E-mail",
	L"��ҳ",	//"Web",
	L"����",	//"Financial",
	L"����",	//"Personnel",
	L"��־",	//"History",
	L"�ļ�",	//"Files",
	L"�ر�",	//"Shut Down",
	L"sir-FER 4.0 �������İ�",	//"sir-FER 4.0",// our play on the company name (Sirtech) and web surFER
};

// bookmarks for different websites
// IMPORTANT make sure you move down the Cancel string as bookmarks are being added

STR16 pBookMarkStrings[] =
{
	L"A.I.M.",
	L"Bobby Ray's",
	L"I.M.P",
	L"M.E.R.C.",
	L"��Ĺ",	//"Mortuary",
	L"����",	//"Florist",
	L"MIS���չ�˾",	//"Insurance",
	L"ȡ��",	//"Cancel",
};

STR16 pBookmarkTitle[] =
{
	L"�ղؼ�",	//"Bookmarks",
	L"�һ��ԷŽ��ղؼУ������Ժ���ʱ�ҳ�档",  //"Right click to access this menu in the future.",
};

// When loading or download a web page

STR16 pDownloadString[] =
{
	L"����...",	//"Downloading",
	L"����...",	//"Reloading",
};

//This is the text used on the bank machines, here called ATMs for Automatic Teller Machine

STR16 gsAtmSideButtonText[] =
{
	L"�õ�",			//"OK",
	L"��ȡ", 			//"Take", // take money from merc
	L"����", 			// "Give", //give money to merc
	L"ȡ��", 			//"Cancel", // cancel transaction
	L"���", 			// "Clear", //clear amount being displayed on the screen
};

STR16 gsAtmStartButtonText[] =
{
	L"ת�� $", 	//"Transfer $", 	// transfer money to merc -- short form
	L"״̬",	//"Stats", 			// view stats of the merc
	L"��Ʒ�嵥",	//"Inventory", 			// view the inventory of the merc
	L"��Ӷ��ͬ",	//"Employment",
};

STR16 sATMText[ ]=
{
	L"ת�ʣ�",	//"Transfer Funds?", 		// transfer funds to merc?
	L"ȷ����",	//"Ok?", 			// are we certain?
	L"������",	//"Enter Amount", 		// enter the amount you want to transfer to merc
	L"ѡ������", 	//"Select Type", 	// select the type of transfer to merc
	L"�ʽ���", 	// "Insufficient Funds", //not enough money to transfer to merc
	L"������$10�ı���", //"Amount must be a multiple of $10",// transfer amount must be a multiple of $10
};

// Web error messages. Please use foreign language equivilant for these messages. 
// DNS is the acronym for Domain Name Server
// URL is the acronym for Uniform Resource Locator

STR16 pErrorStrings[] =
{
	L"����",		//"Error",
	L"������û��DNS��ڡ�",	//"Server does not have DNS entry.",
	L"����URL��ַ���ٴγ������ӡ�", //"Check URL address and try again.",
	L"�õ�",			//"OK",
	L"��������ʱ��ʱ����Ԥ����Ҫ�ϳ��Ĵ���ʱ�䡣", //"Intermittent Connection to Host. Expect longer transfer times.", 
};


STR16 pPersonnelString[] =
{
	L"Ӷ����",	//L"Mercs:", 			// mercs we have
};


STR16 pWebTitle[ ]=
{
	L"sir-FER 4.0 �������İ�",	//L"sir-FER 4.0",		// our name for the version of the browser, play on company name
};


// The titles for the web program title bar, for each page loaded

STR16 pWebPagesTitles[] =
{
	L"A.I.M.",
	L"A.I.M. ��Ա",	//"A.I.M. Members",
	L"A.I.M. Ф��",	//"A.I.M. Mug Shots",		// a mug shot is another name for a portrait
	L"A.I.M. ����",	//"A.I.M. Sort",
	L"A.I.M.",
	L"A.I.M. ǰ��Ա",	//"A.I.M. Alumni",
	L"A.I.M. ����",	//"A.I.M. Policies",
	L"A.I.M. ��ʷ",	//"A.I.M. History",
	L"A.I.M. ����",	//"A.I.M. Links",
	L"M.E.R.C.",
	L"M.E.R.C. �˺�",	//"M.E.R.C. Accounts",
	L"M.E.R.C. ע��",	//"M.E.R.C. Registration",
	L"M.E.R.C. ����",	//"M.E.R.C. Index",
	L"Bobby Ray's",
	L"Bobby Ray's - ǹе",	//"Bobby Ray's - Guns",
	L"Bobby Ray's - ��ҩ",	//"Bobby Ray's - Ammo",
	L"Bobby Ray's - ����",	//"Bobby Ray's - Armor",
	L"Bobby Ray's - �ӻ�",	//"Bobby Ray's - Misc",							//misc is an abbreviation for miscellaneous				
	L"Bobby Ray's - ���ֻ�",	//"Bobby Ray's - Used",
	L"Bobby Ray's - �ʹ�",	//"Bobby Ray's - Mail Order",
	L"I.M.P.",
	L"I.M.P.",
	L"���ϻ��ܷ���˾",			//"United Floral Service",
	L"���ϻ��ܷ���˾ - ����",		//"United Floral Service - Gallery",
	L"���ϻ��ܷ���˾ - ����",		//L"United Floral Service - Order Form",	
	L"���ϻ��ܷ���˾ - �ؿ�",	//"United Floral Service - Card Gallery",
	L"Malleus, Incus & Stapes���չ�˾",	//"Malleus, Incus & Stapes Insurance Brokers",
	L"��Ϣ",			//"Information",	
	L"��ͬ",			//"Contract",	
	L"����",			//"Comments",
	L"McGillicutty's ��Ĺ",		//"McGillicutty's Mortuary",
	L"",
	L"�޷��ҵ�URL",			//"URL not found.",
	L"Bobby Ray's - ������˻�", 	//"Bobby Ray's - Recent Shipments",
	L"",
	L"",
};

STR16 pShowBookmarkString[] =
{
	L"Sir-Help",
	L"�ٴε��ҳ���ԷŽ��ղؼС�",	//"Click Web Again for Bookmarks.",
};

STR16 pLaptopTitles[] =
{
	L"����",	//"Mail Box",
	L"�ļ��鿴��",	//"File Viewer",
	L"����",	//"Personnel",
	L"�ʲ�",	//"Bookkeeper Plus",
	L"��־",	//"History Log",
};

STR16 pPersonnelDepartedStateStrings[] =
{
	//reasons why a merc has left.
	L"����",	//"Killed in Action",
	L"���",	//"Dismissed",
	L"������",	//"Other",
	L"���",	//"Married",
	L"��ͬ����",	//"Contract Expired",
	L"�˳�",	//"Quit",
};
// personnel strings appearing in the Personnel Manager on the laptop

STR16 pPersonelTeamStrings[] =
{
	L"��ǰ��Ա��",	//"Current Team",
	L"��ӳ�Ա��",	//"Departures",
	L"ÿ�ջ��ѣ�",	//"Daily Cost:",
	L"�����н��",	//"Highest Cost:",
	L"�����н��",	//"Lowest Cost:",
	L"�ж���������",	//"Killed in Action:",
	L"��ͣ�",	//"Dismissed:",
	L"������",	//"Other:",
};


STR16 pPersonnelCurrentTeamStatsStrings[] =
{
	L"���",	//"Lowest",
	L"ƽ��",	//"Average",
	L"���",	//"Highest",
};


STR16 pPersonnelTeamStatsStrings[] =
{
	/*
	L"HLTH",
	L"AGI",
	L"DEX",
	L"STR",
	L"LDR",
	L"WIS",
	L"LVL",
	L"MRKM",
	L"MECH",
	L"EXPL",
	L"MED",*/
	L"����",
	L"����",
	L"����",
	L"����",
	L"�쵼",
	L"�ǻ�",
	L"����",
	L"ǹ��",
	L"��е",
	L"����",
	L"ҽ��",
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
	L"��ͬ",	//"Contract",
};

// text that appears on the update panel buttons

STR16 pUpdatePanelButtons[] =
{
	L"����",	//"Continue",
	L"ֹͣ",	//"Stop",
};

// Text which appears when everyone on your team is incapacitated and incapable of battle

CHAR16 LargeTacticalStr[][ LARGE_STRING_LENGTH ] =
{
	//"You have been defeated in this sector!",
	L"�����������ս���ˣ�",
	//L"The enemy, having no mercy for the team's soul, devours each and every one of you!",
	L"�����������ش�������Ķ�Ա��",
	//L"Your unconscious team members have been captured!",
	L"��Ļ��ԵĶ�Ա����²�ˣ�",
	//L"Your team members have been taken prisoner by the enemy.",
	L"��Ķ�Ա���˵о��ķ�²��",
};


//Insurance Contract.c
//The text on the buttons at the bottom of the screen.

STR16			InsContractText[] = 
{ 
	L"��һҳ",	//"Previous",
	L"��һҳ",	//"Next",
	L"����",	//"Accept",
	L"���",	//"Clear",
};



//Insurance Info
// Text on the buttons on the bottom of the screen

STR16		InsInfoText[] = 
{ 
	L"��һҳ",	//"Previous", 
	L"��һҳ",	//"Next",
};



//For use at the M.E.R.C. web site. Text relating to the player's account with MERC

STR16			MercAccountText[] = 
{
	// Text on the buttons on the bottom of the screen
	// Text on the buttons on the bottom of the screen
	L"֧��",	//"Authorize",
	L"��ҳ",	//"Home",
	L"�˺ţ�",	//"Account #:",
	L"Ӷ��",	//"Merc",
	L"����",	//"Days",
	L"��н",	//"Rate",	//5
	L"����",	//"Charge",
	L"�ϼƣ�",	//"Total:",
	L"��ȷ��Ҫ֧��%s��",	//"Are you sure you want to authorize the payment of %s?",		//the %s is a string that contains the dollar amount ( ex. "$150" )
};

// Merc Account Page buttons
STR16			MercAccountPageText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"��һҳ",//"Previous",
  L"��һҳ",//"Next",
};


//For use at the M.E.R.C. web site. Text relating a MERC mercenary


STR16			MercInfo[] =
{
/*
	L"Health",
	L"Agility",
	L"Dexterity",
	L"Strength",
	L"Leadership",
	L"Wisdom",
	L"Experience Lvl",
	L"Marksmanship",
	L"Mechanical",
	L"Explosive",
	L"Medical",
*/	
	L"����",
	L"����",
	L"����",
	L"����",
	L"�쵼",
	L"�ǻ�",
	L"����",
	L"ǹ��",
	L"��е",
	L"����",
	L"ҽ��",

	L"��һλ",	//"Previous",
	L"��Ӷ",	//"Hire",
	L"��һλ",	//"Next",
	L"������Ϣ",	//"Additional Info",
	L"��ҳ",	//"Home",
	L"�ѹ�Ӷ",	//"Hired",
	L"��н��",	//"Salary:",
	L"ÿ��",		//"Per Day",
	L"����",	//"Deceased",

	L"���������Ӷ��̫���Ӷ�������ֻ�ܹ�18�ˡ�",	//"Looks like you're trying to hire too many mercs. Your limit is 18.",
	L"���ɹ�Ӷ",	//"Unavailable",											
};



// For use at the M.E.R.C. web site. Text relating to opening an account with MERC

STR16			MercNoAccountText[] =
{
	//Text on the buttons at the bottom of the screen
	L"����",	//"Open Account",
	L"ȡ��",	//"Cancel",
	L"��û���ʻ�����ϣ����һ����",	//"You have no account.  Would you like to open one?",
};



// For use at the M.E.R.C. web site. MERC Homepage

STR16			MercHomePageText[] =
{
	//Description of various parts on the MERC page
	//L"Speck T. Kline, founder and owner",
	L"Speck T. Kline, �����ߺ�����Ȩӵ����",
	L"�����������",	//"To open an account press here",
	L"�鿴�ʻ��������",	//"To view account press here",
	L"�鿴�ļ��������",	//"To view files press here",
	// The version number on the video conferencing system that pops up when Speck is talking
	L"Speck Com v3.2",	//"Speck Com v3.2",
};

// For use at MiGillicutty's Web Page.

STR16			sFuneralString[] =
{
	/*
	L"McGillicutty's Mortuary: Helping families grieve since 1983.",
	L"Funeral Director and former A.I.M. mercenary Murray \"Pops\" McGillicutty is a highly skilled and experienced mortician.",
	L"Having been intimately involved in death and bereavement throughout his life, Pops knows how difficult it can be.",
	L"McGillicutty's Mortuary offers a wide range of bereavement services, from a shoulder to cry on to post-mortem reconstruction for badly disfigured remains.",
	L"Let McGillicutty's Mortuary help you and your loved one rest in peace.",
	*/
	L"McGillicutty��Ĺ��1983��ҵ�������ͥ����ҵ��",
	L"���񲿾����A.I.M.ǰӶ�� Murray \"Pops\" McGillicutty��һ������ḻ��ҵ������������ҵ�ߡ�",
	L"Pops���������������һ���ӽ��������ǳ���Ϥ��ҵ��",
	L"McGillicutty��Ĺ�ṩ���ָ����ĵ�����񣺴ӿ��������ſ����ļ�򵽶����ر��ε������������������",
	L"McGillicutty��Ĺ�����������˵İ�Ϣ�ء�",
	// Text for the various links available at the bottom of the page
	/*
	L"SEND FLOWERS",
	L"CASKET & URN COLLECTION",
	L"CREMATION SERVICES",
	L"PRE- FUNERAL PLANNING SERVICES",
	L"FUNERAL ETIQUETTE",
*/
	L"�׻�",
	L"�ǻҺ�",
	L"�������",
	L"��������",
	L"�������",
	// The text that comes up when you click on any of the links ( except for send flowers ).
/*
	L"Regretably, the remainder of this site has not been completed due to a death in the family. Pending reading of the will and disbursement of assets, the site will be completed as soon as possible.",
	L"Our sympathies do, however, go out to you at this trying time.  Please come again.",
*/
	L"�ܱ�Ǹ�����ڼ�������ȥ��������վ��ʣ�ಿ����δ��ɡ�һ����������������ͲƲ��������⣬����վ�ᾡ�콨��á�",
	L"�ܱ�Ǹ�����ǣ����ڻ��ǲ����ڼ䣬���Ժ��������ʡ�",

};

// Text for the florist Home page

STR16			sFloristText[] = 
{
	//Text on the button on the bottom of the page

	//L"Gallery",
	L"����"

	//Address of United Florist

	L"\"We air-drop anywhere\"",
	L"1-555-SCENT-ME",
	L"333 NoseGay Dr, Seedy City, CA USA 90210",
	L"http://www.scent-me.com",

	// detail of the florist page
/*
	L"We're fast and efficient!",
	L"Next day delivery to most areas worldwide, guaranteed.  Some restrictions apply.",
	L"Lowest prices in the world, guaranteed!",
	L"Show us a lower advertised price for any arrangements, and receive a dozen roses, absolutely free.",
	L"Flying Flora, Fauna & Flowers Since 1981.",
	L"Our decorated ex-bomber aviators will air-drop your bouquet within a ten mile radius of the requested location.  Anytime - Everytime!",
	L"Let us satisfy your floral fantasy.",
	L"Let Bruce, our world-renowned floral designer, hand-pick the freshest, highest quality flowers from our very own greenhouse.",
	L"And remember, if we don't have it, we can grow it - Fast!",
	*/
	L"���ǿ��ٸ�Ч!",
	L"��֤���ʻ��ڵڶ����͵������ϴ󲿷ֵ����������������ơ�",
	L"��֤�۸����������������!",
	L"�����Ƿ�Ӧ�����Ǽ۸���͵��ͻ������棬���ǻ�����һ�������ѵ�õ�塣",
	L"�Դ�1981������������ֲ��Ͷ�����ʻ���",
	L"���ǹ����˱��䷢��ѫ�µ�ǰ��ը������Ա�������ܰ�����ʻ���Ͷ��ָ��λ�õ�ʮӢ��뾶�ڡ��������� - ÿ������!",
	L"��������������ʻ���Ʒλ��",
	L"��Bruce�����ǵ����������Ļ������ʦ�������ǵĻ�����Ϊ������ժȡ�����ʡ������ʵĻ�����",
	L"�������ס���������û����Ҫ�Ļ����������ֳ��� - �ܿ�!",
};



//Florist OrderForm

STR16			sOrderFormText[] = 
{
	//Text on the buttons

	L"����",	//"Back",
	L"����",	//"Send",
	L"���",	//"Clear",
	L"����",	//"Gallery",

	L"�������ƣ�",			//"Name of Bouquet:",
	L"�۸�",			//"Price:",//5
	L"�����ţ�",			//"Order Number:",
	L"�ͻ�����",			//"Delivery Date",
	L"�ڶ���",			//"next day",	
	L"������ȥ",			//"gets there when it gets there",
	L"�ͻ�Ŀ�ĵ�",			//"Delivery Location",//10
	L"�������",			//"Additional Services",	
	L"���εĻ���($10)",		//"Crushed Bouquet($10)",
	L"��õ��($20)",			//"Black Roses($20)",
	L"��ή�Ļ���($10)",		//"Wilted Bouquet($10)",	
	L"ˮ������(����еĻ�)($10)",	//"Fruit Cake (if available)($10)",	//15
	L"˽�����",			//"Personal Sentiments:",
	//L"Due to the size of gift cards, your message can be no longer than 75 characters.",
	L"��д�Ļ����ܶ���75�֡�",
	L"...����ѡ�������ṩ��",	//L"...or select from one of our",
	L"��׼�ؿ�",			//"STANDARDIZED CARDS",	
	L"������Ϣ",			//"Billing Information",	//20		

	//The text that goes beside the area where the user can enter their name

	L"������",				//"Name:",
};




//Florist Gallery.c

STR16		sFloristGalleryText[] =
{
	//text on the buttons

	L"��һҳ",	//"Prev",	//abbreviation for previous
	L"��һҳ",	//"Next",	//abbreviation for next

	//L"Click on the selection you want to order.",
	L"�������Ҫ�����Ļ��ܡ�",
	//L"Please Note: there is an additional $10 fee for all wilted or crushed bouquets.",
	L"��ע�⣺Ϊ�˷�ֹ�����еĿ�ή�ͱ��Σ�ÿ��������$10��װ�ѡ�",
	//text on the button

	L"��ҳ",	//"Home",
};

//Florist Cards

STR16			sFloristCards[] =
{
	L"��������Ҫ�����ĺؿ�",	//"Click on your selection",
	L"����",			//"Back",
};



// Text for Bobby Ray's Mail Order Site

STR16			BobbyROrderFormText[] = 
{
	L"����",		//"Order Form",		//Title of the page
	L"����",			//"Qty",			// The number of items ordered
	L"���� ��%s��",		//"Weight (%s)",	// The weight of the item
	L"��Ʒ����",		//"Item Name",		// The name of the item
	L"��Ʒ����",		//"Unit Price",			// the item's weight
	L"�ܼ�",		//"Total",		//5	// The total price of all of items of the same type
	L"ȫ����Ʒ�ܼ�",		//"Sub-Total",		// The sub total of all the item totals added
	L"�˷� (��Ŀ�ĵض���)",	//	"S&H (See Delivery Loc.)",	// S&H is an acronym for Shipping and Handling 
	L"ȫ������",		//"Grand Total",		// The grand total of all item totals + the shipping and handling
	L"�ͻ�Ŀ�ĵ�",	//"Delivery Location",			
	L"�����ٶ�",	//"Shipping Speed",		//10	// See below
	L"�˷�(ÿ%s)",	//"Cost (per %s.)",		// The cost to ship the items
	L"��ҹ�ٵ�",	//"Overnight Express",		// Gets deliverd the next day
	L"2������",	//"2 Business Days",		// Gets delivered in 2 days
	L"��׼����",	//"Standard Service",		// Gets delivered in 3 days
	L"�������",		//"Clear Order",	//15// Clears the order page
	L"ȷ�϶���",	//"Accept Order",		// Accept the order
	L"����",		//"Back",	// text on the button that returns to the previous page
	L"��ҳ",		//"Home",	// Text on the button that returns to the home page
	L"*������ֻ�",	//"* Denotes Used Items",	// Disclaimer stating that the item is used
	L"���޷�֧��������á�",	//"You can't afford to pay for this.",		//20	// A popup message that to warn of not enough money
	L"<��>",		//"<NONE>",		// Gets displayed when there is no valid city selected
	L"��ȷ��Ҫ�Ѹö����ﶩ������Ʒ����%s��?",	//"Are you sure you want to send this order to %s?",	// A popup that asks if the city selected is the correct one
	L"��������**",	//"Package Weight**",		// Displays the weight of the package
	L"** ��С������",		//"** Min. Wt.",			// Disclaimer states that there is a minimum weight for the package	
	L"�˻�",		//"Shipments",	
};

STR16			BobbyRFilter[] =
{
	// Guns
	L"������", //"Heavy W.",
	L"��ǹ", //"Pistol",
	L"�Զ���ǹ", //"M. Pistol",
	L"���ǹ", //"SMG",
	L"�iǹ", //"Rifle",
	L"�ѻ��iǹ", //"SN Rifle",
	L"ͻ���iǹ", //"AS Rifle",
	L"��ǹ", //"MG",
	L"����ǹ", //"Shotgun",

	// Ammo
	L"��ǹ", //"Pistol",
	L"�Զ���ǹ", //"M. Pistol",
	L"���ǹ", //"SMG",
	L"�iǹ", //"Rifle",
	L"�ѻ��iǹ", //"SN Rifle",
	L"ͻ���iǹ", //"AS Rifle",
	L"��ǹ", //"MG",
	L"����ǹ", //"Shotgun",

	// Used
	L"ǹе", //"Guns",
	L"����", //"Armor",
	L"Я�о�", //"LBE Gear",
	L"����", //"Misc",

	// Armour
	L"ͷ��", //"Helmets",
	L"������", //"Vests",
	L"��ս��", //"Leggings",
	L"������", //"Plates",

	// Misc
	L"����", //"Blades",
	L"�ɵ�", //"Th. Knives",
	L"������", //"Punch. W.",
	L"����/��", //"Grenades",
	L"ըҩ", //"Bombs",
	L"ҽ����Ʒ", //"Med. Kits",
	L"������װ", //"Kits",
	L"ͨѶ/ҹ��", //"Face Items",
	L"Я�о�"//"LBE Gear",
	L"����/��׼��"//"Misc.",
};


// This text is used when on the various Bobby Ray Web site pages that sell items

STR16			BobbyRText[] = 
{
	L"����",				//"To Order",	// Title
	// instructions on how to order
	//L"Click on the item(s). For more than one, keep on clicking. Right click for less. Once you've selected all you'd like to buy, go on to the order form.",
	L"��������Ʒ�����Ҫ���������������������һ��Լ���Ҫ������������һ��ѡ������Ҫ�����ģ���ǰ������ҳ�档",
		
	
	//Text on the buttons to go the various links

	L"��һҳ",	//"Previous Items",		// 
	L"ǹе",	//"Guns", 			//3
	L"��ҩ",	//"Ammo",			//4
	L"����",	//"Armor",			//5
	L"����",	//"Misc.",			//6	//misc is an abbreviation for miscellaneous
	L"���ֻ�",	//"Used",			//7
	L"��һҳ",	//"More Items",
	L"������",	//"ORDER FORM",
	L"��ҳ",	//"Home",			//10

	//The following 2 lines are used on the Ammunition page.  
	//They are used for help text to display how many items the player's merc has
	//that can use this type of ammo

	L"��Ķ�����",		//"Your team has",//11
	L"����ʹ�ø����͵�ҩ������", 	//"weapon(s) that use this type of ammo", //12

	//The following lines provide information on the items

	L"������",	//"Weight:",		// Weight of all the items of the same type
	L"�ھ���",	//"Cal:",			// the caliber of the gun
	L"�ص�����",	//"Mag:",			// number of rounds of ammo the Magazine can hold
	L"��̣�",	//"Rng:",			// The range of the gun
	L"ɱ������",	//"Dam:",			// Damage of the weapon	
	L"���٣�",	//"ROF:",			// Weapon's Rate Of Fire, acronym ROF
	L"���ۣ�",	//"Cost:",			// Cost of the item
	L"��棺",	//"In stock:",			// The number of items still in the store's inventory
	L"��������",	//"Qty on Order:",		// The number of items on order
	L"����",	//"Damaged",			// If the item is damaged
	L"������",	//"Weight:",			// the Weight of the item
	L"С�ƣ�",	//"SubTotal:",			// The total cost of all items on order
	L"* %% ����",	//"* %% Functional",		// if the item is damaged, displays the percent function of the item

	//Popup that tells the player that they can only order 10 items at a time
	
	//L"Darn!  This here on-line order form will only accept 10 items per order.  If you're looking to order more stuff (and we hope you are), kindly make a separate order and accept our apologies.",
	L"��!  ������������߶���һ��ֻ����10����Ʒ�Ķ������������Ҫ�������ණ��������ϣ����ˣ�����������ǵ�Ǹ�⣬�ٿ�һ�ݶ�����",


	// A popup that tells the user that they are trying to order more items then the store has in stock

	//L"Sorry. We don't have any more of that in stock right now. Please try again later.",
	L"��Ǹ��������Ʒ�����������ڽ��������Ժ�����������",

	//A popup that tells the user that the store is temporarily sold out

	//L"Sorry, but we are currently out of stock on all items of that type.",
	L"��Ǹ��������Ʒ��������ȱ����",

};


// Text for Bobby Ray's Home Page

STR16			BobbyRaysFrontText[] =
{
	//Details on the web site

	L"������������𱬵ľ���Ӧ",	//"This is the place to be for the newest and hottest in weaponry and military supplies",
	L"���ǻ���������������ָ���������",	//"We can find the perfect solution for all your explosives needs",
	L"���ֻ�",	//"Used and refitted items",

	//Text for the various links to the sub pages

	L"�ӻ�",	//"Miscellaneous",
	L"ǹе",	//"GUNS",
	L"��ҩ",	//"AMMUNITION",		//5
	L"����",	//"ARMOR",

	//Details on the web site

	L"����һ�ң����޷ֵꡣ",	//"If we don't sell it, you can't get it!",
	L"��վ������",	//"Under Construction",
};



// Text for the AIM page.
// This is the text used when the user selects the way to sort the aim mercanaries on the AIM mug shot page

STR16			AimSortText[] =
{
	L"A.I.M��Ա",	//"A.I.M. Members",				// Title
	// Title for the way to sort
	L"����",	//"Sort By:",					

	// sort by...

	L"н��",	//"Price",											
	L"����",	//"Experience",
	L"ǹ��",	//"Marksmanship",
	L"ҽ��",	//"Medical",
	L"����",	//"Explosives",
	L"��е",	//"Mechanical",

	//Text of the links to other AIM pages

	L"�鿴Ӷ����Ф������",	//"View the mercenary mug shot index",
	L"�鿴������Ӷ������",	//"Review the individual mercenary's file",
	L"���A.I.Mǰ��Ա",	//"Browse the A.I.M. Alumni Gallery",

	// text to display how the entries will be sorted

	L"����",	//"Ascending",
	L"����",	//"Descending",
};


//Aim Policies.c
//The page in which the AIM policies and regulations are displayed

STR16		AimPolicyText[] =
{
	// The text on the buttons at the bottom of the page

	L"��һҳ",	//"Previous Page",
	L"AIM��ҳ",	//"AIM HomePage", 
	L"��������",	//"Policy Index",
	L"��һҳ",	//"Next Page",
	L"��ͬ��",	//Disagree",
	L"ͬ��",	//"Agree",
};



//Aim Member.c
//The page in which the players hires AIM mercenaries

// Instructions to the user to either start video conferencing with the merc, or to go the mug shot index

STR16			AimMemberText[] =
{
	L"������",	//"Left Click",
	L"��ϵӶ����",	//"to Contact Merc.",
	L"����һ�",	//"Right Click",
	L"�ص�Ф��������",	//"for Mug Shot Index.",
};					

//Aim Member.c
//The page in which the players hires AIM mercenaries

STR16			CharacterInfo[] =
{
	// The various attributes of the merc
/*
	L"Health",										
	L"Agility",										
	L"Dexterity",									
	L"Strength",
	L"Leadership",
	L"Wisdom",
	L"Experience Lvl",
	L"Marksmanship",
	L"Mechanical",
	L"Explosive",
	L"Medical",				//10
	*/
	L"����",
	L"����",
	L"����",
	L"����",
	L"�쵼",
	L"�ǻ�",
	L"����",
	L"ǹ��",
	L"��е",
	L"����",
	L"ҽ��",
	// the contract expenses' area

	L"����",	//"Fee",							
	L"��ͬ",	//"Contract",				
	L"һ��",	//"one day",					
	L"һ��",	//"one week",
	L"����",	//"two weeks",

	// text for the buttons that either go to the previous merc, 
	// start talking to the merc, or go to the next merc

	L"��һλ",	//"Previous",
	L"��ϵ",	//"Contact",
	L"��һλ",	//"Next",

	L"������Ϣ",	//"Additional Info",				// Title for the additional info for the merc's bio
	L"���۳�Ա",	//"Active Members",		//20		// Title of the page
	L"��ѡװ����",	//"Optional Gear:",				// Displays the optional gear cost
	L"����ҽ�Ʊ�֤��",	//"MEDICAL deposit required",			// If the merc required a medical deposit, this is displayed
};


//Aim Member.c
//The page in which the player's hires AIM mercenaries

//The following text is used with the video conference popup

STR16			VideoConfercingText[] =
{
	L"��ͬ�ܼۣ�",	//"Contract Charge:",				//Title beside the cost of hiring the merc

	//Text on the buttons to select the length of time the merc can be hired

	L"һ��",	//"One Day",										
	L"һ��",	//"One Week",
	L"����",	//"Two Weeks",

	//Text on the buttons to determine if you want the merc to come with the equipment 

	L"����װ��",	//"No Equipment",
	L"����װ��",	//"Buy Equipment",

	// Text on the Buttons

	L"ת��",	//"TRANSFER FUNDS",			// to actually hire the merc
	L"ȡ��",	//"CANCEL",				// go back to the previous menu
	L"��Ӷ",	//"HIRE",				// go to menu in which you can hire the merc
	L"�Ҷ�",	//"HANG UP",				// stops talking with the merc
	L"���",	//"OK",									
	L"����",	//"LEAVE MESSAGE",			// if the merc is not there, you can leave a message 

	//Text on the top of the video conference popup

	L"��ƵͨѶ��",	//"Video Conferencing with",		
	L"�������ӡ���",	//"Connecting. . .",

	L"����ҽ��",	//"with medical"			// Displays if you are hiring the merc with the medical deposit
};



//Aim Member.c
//The page in which the player hires AIM mercenaries

// The text that pops up when you select the TRANSFER FUNDS button

STR16			AimPopUpText[] =
{
	L"����ת�ʳɹ�",	//"ELECTRONIC FUNDS TRANSFER SUCCESSFUL",	// You hired the merc
	L"�޷�����ת��",	//"UNABLE TO PROCESS TRANSFER",		// Player doesn't have enough money, message 1
	L"�ʽ���",	//"INSUFFICIENT FUNDS",				// Player doesn't have enough money, message 2

	// if the merc is not available, one of the following is displayed over the merc's face

	L"ִ��������",	//"On Assignment",											
	L"������",	//"Please Leave Message",
	L"����",	//"Deceased",

	//If you try to hire more mercs than game can support

	L"��Ķ�������18�ˣ��Ѿ���Ա�ˡ�",	//"You have a full team of 18 mercs already.",

	L"Ԥ¼��Ϣ",	//"Pre-recorded message",
	L"�����Ѽ�¼",	//"Message recorded",
};


//AIM Link.c

STR16			AimLinkText[] =
{
	L"A.I.M ����",//	L"A.I.M. Links",	//The title of the AIM links page
};



//Aim History

// This page displays the history of AIM

STR16			AimHistoryText[] =
{
	L"A.I.M ��ʷ",	//"A.I.M. History",					//Title

	// Text on the buttons at the bottom of the page

	L"��һҳ",	//"Previous Page",
	L"��ҳ",	//"Home", 
	L"A.I.M ǰ��Ա",	//"A.I.M. Alumni",
	L"��һҳ",	//"Next Page",
};


//Aim Mug Shot Index

//The page in which all the AIM members' portraits are displayed in the order selected by the AIM sort page.

STR16			AimFiText[] =
{
	// displays the way in which the mercs were sorted

	L"н��",	//"Price",
	L"����",	//"Experience",
	L"ǹ��",	//"Marksmanship",
	L"ҽ��",	//"Medical",
	L"����",	//"Explosives",
	L"��е",	//"Mechanical",


	// The title of the page, the above text gets added at the end of this text

	L"����%s�������е�A.I.M��Ա",	//"A.I.M. Members Sorted Ascending By %s",
	L"����%s�������е�A.I.M��Ա",	//"A.I.M. Members Sorted Descending By %s",

	// Instructions to the players on what to do

	L"������",	//"Left Click",
	L"ѡ��Ӷ����",	//"To Select Merc",			//10
	L"����һ�",	//"Right Click",
	L"�ص�����ѡ�",	//"For Sorting Options",

	// Gets displayed on top of the merc's portrait if they are...

	L"�뿪",	//"Away",
	L"����",	//"Deceased",						//14
	L"������",	//"On Assign",
};



//AimArchives.
// The page that displays information about the older AIM alumni merc... mercs who are no longer with AIM

STR16			AimAlumniText[] =
{
	// Text of the buttons
/*
	L"PAGE 1",
	L"PAGE 2",
	L"PAGE 3",

	L"A.I.M. Alumni",	// Title of the page

	L"DONE"			// Stops displaying information on selected merc
	*/
	L"��һҳ",
	L"�ڶ�ҳ",
	L"����ҳ",
	L"A.I.M ǰ��Ա",
	L"���",
};






//AIM Home Page

STR16			AimScreenText[] =
{
	// AIM disclaimers
/*	
	L"A.I.M. and the A.I.M. logo are registered trademarks in most countries.",
	L"So don't even think of trying to copy us.",
	L"Copyright 2005 A.I.M., Ltd.  All rights reserved.",			//1.13 modified to 2005

	//Text for an advertisement that gets displayed on the AIM page

	L"United Floral Service",
	L"\"We air-drop anywhere\"",				//10
	L"Do it right",
	L"... the first time",
	L"Guns and stuff, if we dont have it, you dont need it.",
*/
	L"A.I.M. �� A.I.M. ͼ�����������������Ѿ�ע�ᡣ",
	L"��Ȩ���У���ð�ؾ���",
	L"Copyright 1998-1999 A.I.M., Ltd.  All rights reserved.",

	//Text for an advertisement that gets displayed on the AIM page

	L"���ϻ��ܷ���˾",
	L"\"���ǽ������˵��κεط�\"",				//10
	L"�ѻ�ɺ�",
	L"... ��һ��",
	L"ǹе���ӻ���ֻ��һ�ң����޷ֵꡣ",
};


//Aim Home Page

STR16			AimBottomMenuText[] =
{
	//Text for the links at the bottom of all AIM pages
	L"��ҳ",	//"Home",
	L"��Ա",	//"Members",
	L"ǰ��Ա",	//"Alumni",
	L"����",	//"Policies",
	L"��ʷ",	//"History",
	L"����",	//"Links",
};



//ShopKeeper Interface
// The shopkeeper interface is displayed when the merc wants to interact with 
// the various store clerks scattered through out the game.

STR16 SKI_Text[ ] = 
{
	L"�����Ʒ",	//"MERCHANDISE IN STOCK",	//Header for the merchandise available
	L"ҳ��",			//"PAGE",	//The current store inventory page being displayed
	L"�ܼ۸�",			//"TOTAL COST",		//The total cost of the the items in the Dealer inventory area
	L"�ܼ�ֵ",			//"TOTAL VALUE",	//The total value of items player wishes to sell
	L"����",			//"EVALUATE",		//Button text for dealer to evaluate items the player wants to sell
	L"ȷ�Ͻ���",			//"TRANSACTION",	//Button text which completes the deal. Makes the transaction.
	L"���",			//"DONE",	//Text for the button which will leave the shopkeeper interface.
	L"�����",			//"REPAIR COST",	//The amount the dealer will charge to repair the merc's goods
	L"1Сʱ",			//"1 HOUR",// SINGULAR! The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"%dСʱ",		//"%d HOURS",// PLURAL!   The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"�Ѿ��޺�",		//"REPAIRED",// Text appearing over an item that has just been repaired by a NPC repairman dealer
	L"��û�п����λ�����Ŷ����ˡ�",	//"There is not enough room in your offer area.",//Message box that tells the user there is no more room to put there stuff
	L"%d����",		//"%d MINUTES",	// The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"����Ʒ���ڵ��ϡ�",	//"Drop Item To Ground.",
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
	L"ȷ��",	//"OK",				// Transfer the money
	L"��",		//"Take",				// Take money from the player
	L"��",		//"Give",				// Give money to the player
	L"ȡ��",	//"Cancel",				// Cancel the transfer
	L"���",	//"Clear",				// Clear the money display
};


//Shopkeeper Interface
STR16	gzSkiAtmText[] = 
{	

	// Text on the bank machine panel that....
	L"ѡ������",			//"Select Type",	// tells the user to select either to give or take from the merc
	L"��������",		//"Enter Amount",	// Enter the amount to transfer
	L"��Ǯ��Ӷ��",	//"Transfer Funds To Merc",// Giving money to the merc
	L"��Ӷ������Ǯ",	//"Transfer Funds From Merc",	// Taking money from the merc
	L"�ʽ���",		//"Insufficient Funds",	// Not enough money to transfer
	L"���",			//"Balance",	// Display the amount of money the player currently has
};


STR16	SkiMessageBoxText[] =
{
	/*
	L"Do you want to deduct %s from your main account to cover the difference?",
	L"Not enough funds.  You're short %s",
	L"Do you want to deduct %s from your main account to cover the cost?",
	L"Ask the dealer to start the transaction",
	L"Ask the dealer to repair the selected items",
	L"End conversation",
	L"Current Balance",
	*/
	L"��Ҫ�����ʻ�����ȡ%s��֧����?",
	L"�ʽ��㡣��ȱ��%s��",
	L"��Ҫ�����ʻ�����ȡ%s��֧����?",
	L"�������˿�ʼ����",
	L"������������ѡ����Ʒ",
	L"�����Ի�",
	L"��ǰ���",
};


//OptionScreen.c

STR16	zOptionsText[] = 
{
	//button Text
	L"������Ϸ",	//"Save Game",
	L"������Ϸ",	//"Load Game",
	L"�˳�",	//"Quit",
	L"���",	//"Done",

	//Text above the slider bars
	L"Ч����",	//"Effects",
	L"����",	//"Speech",
	L"����",	//"Music",

	//Confirmation pop when the user selects..
	//L"Quit game and return to the main menu?",
	L"�˳����ص���Ϸ���˵���",

	//L"You need either the Speech option, or the Subtitle option to be enabled.",
	L"�����ѡ���������͡��Ի���ʾ���е�����һ�",
};


//SaveLoadScreen 
STR16			zSaveLoadText[] = 
{
	L"������Ϸ",	//"Save Game",
	L"������Ϸ",	//"Load Game",
	L"ȡ��",	//"Cancel",
	L"ѡ��Ҫ�浵��λ��",	//"Save Selected",
	L"ѡ��Ҫ������λ��",	//"Load Selected",

	L"������Ϸ�ɹ�",	//"Saved the game successfully",
	L"������Ϸ����",	//"ERROR saving the game!",
	L"������Ϸ�ɹ�",	//"Loaded the game successfully",
	L"������Ϸ����",	//"ERROR loading the game!",

	//L"The game version in the saved game file is different then the current version.  It is most likely safe to continue.  Continue?",
	L"�浵����Ϸ�汾��ͬ�ڵ�ǰ����Ϸ�汾����ȡ���Ļ��ܿ�����Ϸ�����������С�Ҫ��ȡ�ô浵��",
	//L"The saved game files may be invalidated.  Do you want them all deleted?",
	L"�浵�����Ѿ���Ч����Ҫɾ��������",

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	//L"Save version has changed. Please report if there any problems. Continue?",
	L"�浵�汾�Ѹı䡣������������뱨�档������",
#else
	//L"Attempting to load an older version save. Automatically update and load the save?",
	L"��ͼ�����ϰ汾�Ĵ浵���Զ�����������浵��",
#endif

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	//L"Save version and game version have changed. Please report if there are any problems. Continue?",
	L"�浵�汾����Ϸ�汾�Ѹı䡣������������뱨�档������",
#else
	//L"Attempting to load an older version save. Automatically update and load the save?",
	L"��ͼ�����ϰ汾�Ĵ浵����Ҫ�Զ����²�����浵��",
#endif

	//L"Are you sure you want to overwrite the saved game in slot #%d?",
	L"��ȷ����Ҫ��#%dλ�õĴ浵������?",
	//L"Do you want to load the game from slot #",
	L"��Ҫ��#��λ������浵��",


	//The first %d is a number that contains the amount of free space on the users hard drive,
	//the second is the recommended amount of free space.
	//L"You are running low on disk space.  You only have %d Megs free and Jagged should have at least %d Megs free.",	
	L"���Ӳ�̿ռ䲻����������ֻ�� %dM ���ÿռ䣬JA2��Ҫ���� %dM ���ÿռ䡣",

	L"����...",	//"Saving...",			//When saving a game, a message box with this string appears on the screen

	L"��ͨ����",		//"Normal Guns",	
	L"����ǰ��Լ����",	//"Tons of Guns",
	L"��ʵ���",		//"Realistic style",
	L"�ƻ÷��",		//"Sci Fi style",
	L"�Ѷ�",		//"Difficulty",	
	L"Platinum Mode", //Placeholder English

	L"Bobby Ray's",
	L"Normal Selection",
	L"Great Selection",
	L"Excellent Selection",
	L"Awesome Selection",

	L"New Inventory does not work in 640x480 screen size.  Please resize and try again.",
	L"New Inventory does not work from the default 'Data' folder.",
};



//MapScreen
STR16		zMarksMapScreenText[] =
{
	L"��ͼ���",	//"Map Level",
	L"��û�������Ҫӵ������������ѵ������",	//"You have no militia.  You need to train town residents in order to have a town militia.",
	L"ÿ������",	//"Daily Income",
	L"Ӷ�������ٱ���",	//"Merc has life insurance", 
	L"%s��ƣ�͡�",	//"%s isn't tired.", 
	L"%s�о��У�����˯��",	//"%s is on the move and can't sleep", 
	L"%s̫���ˣ��Ȼ�����ԡ�",	//"%s is too tired, try a little later.",
	L"%s���ڿ�����",	//"%s is driving.",
	L"������˯��ʱ���������鲻���ж���",	//"Squad can't move with a sleeping merc on it.",

	// stuff for contracts
	L"����֧����ͬ������ã��������Ǯ��������Ӷ���������ٱ��ա�",
	//L"%s insurance premium will cost %s for %d extra day(s). Do you want to pay?",
	L"Ҫ��%s���ѱ��ս�%s ���ӳ����պ�ͬ%d�졣��Ҫ������",
	L"�������",	//"Sector Inventory",
	L"Ӷ����ҽ�Ʊ�֤��",	//"Merc has a medical deposit.",
	
	// other items
	L"ҽ��", 	//"Medics", // people acting a field medics and bandaging wounded mercs 
	L"����", 	//"Patients", // people who are being bandaged by a medic 
	L"���", 	//"Done", // Continue on with the game after autobandage is complete 
	L"ֹͣ", 	//"Stop", // Stop autobandaging of patients by medics now 
	//L"Sorry. This option has been disabled in this demo.", // informs player this option/button has been disabled in the demo 
	L"��Ǹ����Ϸȡ���˸�ѡ��Ĺ��ܡ�",
	L"%sû�й����䡣",	//"%s doesn't have a repair kit.",
	L"%sû��ҽҩ�䡣",	//"%s doesn't have a medical kit.",
	//L"There aren't enough people willing to be trained right now.",
	L"����û���㹻����Ը����������",
	L"%s������Ѿ�ѵ�����ˡ�",	//"%s is full of militia.",
	L"Ӷ����һ����ʱ�ĺ�ͬ��",	//"Merc has a finite contract.", 
 	L"Ӷ���ĺ�ͬûͶ��", //"Merc's contract is not insured",
	L"��ͼ�ſ�",//"Map Overview",		// 24
};


STR16 pLandMarkInSectorString[] =
{
	//L"Squad %d has noticed someone in sector %s",
	L"��%dС����%s������������",
};

// confirm the player wants to pay X dollars to build a militia force in town
STR16 pMilitiaConfirmStrings[] =
{
	//L"Training a squad of town militia will cost $", // telling player how much it will cost
	L"ѵ��һ�����Ҫ����$",
	//L"Approve expenditure?", // asking player if they wish to pay the amount requested
	L"ͬ��֧����",
	//L"You can't afford it.", // telling the player they can't afford to train this town
	L"���޷�֧����",
	//L"Continue training militia in %s (%s %d)?", // continue training this town?
	L"������%s (%s %d)ѵ�������",
	//L"Cost $", // the cost in dollars to train militia
	L"����$",
	L"( Y/N )",   // abbreviated yes/no
	L"",	// unused
	//L"Training town militia in %d sectors will cost $ %d. %s", // cost to train sveral sectors at once
	L"��%d����ѵ�����������$%d��%s",
	//L"You cannot afford the $%d to train town militia here.",
	L"���޷�֧��$%d�Թ�������ѵ�������",
	//L"%s needs a loyalty of %d percent for you to be able to continue training militia.",
	L"%s���ҳ϶ȱ���ﵽ%d���Ϸ���ѵ�������",
	//L"You cannot train the militia in %s any further.",
	L"�㲻����%sѵ������ˡ�",
};

//Strings used in the popup box when withdrawing, or depositing money from the $ sign at the bottom of the single merc panel
STR16	gzMoneyWithdrawMessageText[] = 
{
	//L"You can only withdraw up to $20,000 at a time.",
	L"��ÿ���������ȡ$20,000��",
	//L"Are you sure you want to deposit the %s into your account?",
	L"��ȷ��Ҫ��%s��������ʻ���",
};

STR16	gzCopyrightText[] = 
{
	L"Copyright (C) 1999 Sir-tech Canada Ltd.  All rights reserved.",
};

//option Text
STR16		zOptionsToggleText[] = 
{
	L"����",		//"Speech",
	L"ȷ�Ͼ�Ĭ",		//"Mute Confirmations",
	L"��ʾ�Ի�����",	//"SubTitles",
	L"��ʾ�Ի�����ʱ��ͣ",		//"Pause Text Dialogue",
	L"�̻�Ч��",		//"Animate Smoke",
	L"Ѫ��Ч��",		//"Blood n Gore",
	L"���ƶ����",		//"Never Move My Mouse!",
	L"�ɵ�ѡ��ʽ",	//"Old Selection Method",
	L"��ʾ�ƶ�·��",	//"Show Movement Path",
	L"��ʾδ����",		//"Show Misses",
	L"ʵʱȷ��",		//"Real Time Confirmation",
	L"��ʾ˯��/����ʱ����ʾ",	//"Display sleep/wake notifications",
	L"ʹ�ù���ϵͳ",		//"Use Metric System",
	L"Ӷ���ƶ�ʱ������ʾ",	//"Merc Lights during Movement",
	L"����Ӷ��",	//"Snap Cursor to Mercs",
	L"������",		//"Snap Cursor to Doors",
	L"��Ʒ����",	//"Make Items Glow",
	L"��ʾ����",	//"Show Tree Tops",
	L"��ʾ����",		//"Show Wireframes",
	L"��ʾ3D���",	//"Show 3D Cursor",

	L"��ʾ���л���",	//"Show Chance to Hit on cursor",
	L"�񵯷���������ʱʹ��ǹ�����",	//"GL Burst uses Burst cursor",
	L"���˵���������Ʒ",	//"Enemies Drop all Items",
	L"����������񵯷���",	//"High angle Grenade launching",
	L"���ƶ������׼",	//"Restrict extra Aim Levels",
	L"���ո��ѡ����һ֧С��",	//"Space selects next Squad",
	L"��ʾ��Ʒ��Ӱ",	//"Show Item Shadow",
	L"�ø�����ʾ�������",	//"Show Weapon Ranges in Tiles",
	L"����ҷ�ⵯ��ʾҷ��",	//"Tracer effect for single shot",
	L"����",	//"Rain noises",
	L"������ѻ",	//"Allow crows",
	L"�������I.M.P�����Ը�",	//"Random I.M.P personality",
	L"�Զ�����",	//"Auto save",
	L"��Ĭ��Skyrider",	//"Silent Skyrider",
	L"����CPU��ʹ����",	//"Low CPU usage",
	L"Enhanced Description Box",
};

//This is the help text associated with the above toggles.
STR16	zOptionsScreenHelpText[] =
{
	//speech
	//L"Keep this option ON if you want to hear character dialogue.",
	L"���������������Ի��������ѡ�",

	//Mute Confirmation
	//L"Turns characters' verbal confirmations on or off.",
	L"�򿪻�ر�����Ŀ�ͷȷ�ϡ�",

		//Subtitles
	//L"Controls whether on-screen text is displayed for dialogue.",
    L"�Ƿ���ʾ�Ի������֡�",
	
	//Key to advance speech
	//L"If Subtitles are ON, turn this on also to be able to take your time reading NPC dialogue.",
    L"�������ʾ�Ի����֡��Ѵ򿪣����ѡ����������㹻��ʱ�����Ķ�NPC�ĶԻ���",

	//Toggle smoke animation
	//L"Turn off this option if animating smoke slows down your game's framerate.",
	L"����̻�Ч��ʹ����Ϸ�������ر����ѡ�",

	//Blood n Gore
	//L"Turn this option OFF if blood offends you.",
    L"�����Ѫʹ����ö��ģ��ر����ѡ�",

	//Never move my mouse
	//L"Turn this option OFF to have your mouse automatically move over pop-up confirmation boxes when they appear.",
     L"�ر����ѡ���ʹ��Ĺ���Զ��Ƶ�������ȷ�϶Ի����ϡ�",

	//Old selection method
	//L"Turn this ON for character selection to work as in previous JAGGED ALLIANCE games (which is the opposite of how it works otherwise).",
	L"�����ѡ�ʹ����Ѫ����1����Ӷ��ѡ��ʽ��",

	//Show movement path
	//L"Turn this ON to display movement paths in Real-time (or leave it off and use the SHIFT key when you do want them displayed).",
	L"�����ѡ���ʵʱ��ʾ�ƶ�·��(�رմ�ѡ��������Ҫ��ʾ·���Ļ���ʹ��SHIFT��)��",

	//show misses
	//L"Turn ON to have the game show you where your bullets ended up when you \"miss\".",
	L"�����ѡ��ʱ������ʾδ����Ŀ����ӵ���㡣",
	
	//Real Time Confirmation
	//L"When ON, an additional \"safety\" click will be required for movement in Real-time.",
	L"����ʱ������ʵʱģʽ����һ��ȷ�϶Ի���",

	//Sleep/Wake notification
	//L"When ON, you will be notified when mercs on \"assignment\" go to sleep and resume work.",
	L"����ʱ�������������Ӷ��˯��������ʱ����ʾ�㡣",

	//Use the metric system
	//L"When ON, uses the metric system for measurements; otherwise it uses the Imperial system.",
	L"����ʱ��ʹ�ù���ϵͳ������ʹ��Ӣ��ϵͳ��",

	//Merc Lighted movement
	//L"When ON, the merc will light the ground while walking.  Turn OFF for faster frame rate.",
	L"����ʱ��Ӷ���ƶ�ʱ�������ر��ر����ѡ���ʹ��Ϸ����ʾ�ٶȱ�졣",

	//Smart cursor
	//L"When ON, moving the cursor near your mercs will automatically highlight them.",
	L"����ʱ������ƶ���Ӷ������ʱ�������ʾӶ����",

	//snap cursor to the door
	//L"When ON, moving the cursor near a door will automatically position the cursor over the door.",
	L"����ʱ����꿿����ʱ���Զ���λ�����ϡ�",

	//glow items 
	//L"When ON, |Items continuously glow",
	L"����ʱ����Ʒ�᲻�ϵ���˸��(|I)",

	//toggle tree tops
	//L"When ON, shows the |Tree tops.",
	L"����ʱ����ʾ���ڡ�(|T)",

	//toggle wireframe
	//L"When ON, displays |Wireframes for obscured walls.",
	L"��ʾδ̽����ǽ��������(|W)",

	//L"When ON, the movement cursor is shown in 3D. ( |Home )",
	L"��ʱ���ƶ�ʱ�Ĺ��Ϊ3Dʽ����(|H)",

	// Options for 1.13
	//L"When ON, the chance to hit is shown on the cursor.",
	L"����ʱ���ڹ������ʾ���л��ʡ�",
	L"When ON, GL burst uses burst cursor.",
	//L"When ON, dead enemies drop all items.",
	L"����ʱ�������ĵ��˵������е���Ʒ��",
	//L"When ON, grenade launchers fire grenades at higher angles (|Q).",
	L"����ʱ���񵯷�����������ýϸ����Ƿ����񵯡�(|Q)",
	//L"When ON, aim levels beyond 4 are restricted to rifles and sniper rifles.",
	L"����ʱ���ѻ���ǹ�����ǹ֧���ʹ��4APȥ��׼��",
	//L"When ON, |S|p|a|c|e selects next squad automatically.",
	L"����ʱ�����ո���Զ��л�����һС�ӡ�(|S|p|a|c|e)",
	L"When ON, item shadows will be shown.",
	//L"When ON, weapon ranges will be shown in tiles.",
	L"����ʱ���ø�����ʾ������̡�",
	//L"When ON, tracer effect will be shown for single shots.",
	L"����ʱ������ҷ�ⵯҲ��ʾҷ�⡣",
	L"����ʱ������ʱ��������ˮ��Ч��",	//"When ON, you will hear rain noises when it is raining.",
	//L"When ON, the crows are present in game.",
	L"����ʱ��������ѻ���֡�",
	L"����ʱ, I.M.P������Ը������Ϊ������ɡ�",	//"When ON, I.M.P characters will get random personality and attitude.",
	L"When ON, game will be saved after each players turn.",
	//L"When ON, Skyrider will not talk anymore.",
	L"����ʱ��Skyrider�����ֳ�Ĭ��",
	//L"When ON, game will run with much lower CPU usage.",
	L"����ʱ����Ϸ��ʹ�ø��ٵ�CPU��Դ��",
	L"When ON, enhanced descriptions will be shown for items and weapons.",
};


STR16	gzGIOScreenText[] =
{
	L"��Ϸ��ʼ����",
	L"��Ϸ���",
	L"��ʵ",
	L"�ƻ�",
	L"Platinum",
	L"Items",
	L"Tons of Guns",
	L"Normal Guns",
	L"�Ѷ�",
	L"����",
	L"����",
	L"ר��",
	L"����",
	L"ȷ��",
	L"ȡ��",
	L"�����Ѷ�",
	L"����ʱ����",
	L"����ģʽ",
	L"��Demo�н���",
	L"Bobby Ray's Selection",
	L"Normal",
	L"Great",
	L"Excellent",
	L"Awesome",
	L"Inventory System",
	L"Old",
	L"New",
	L"Load MP Game",
	L"INITIAL GAME SETTINGS (Only the server settings take effect)",
};

STR16 pDeliveryLocationStrings[] =
{
	L"��˹͡",	//"Austin",			//Austin, Texas, USA	
	L"�͸��",	//"Baghdad",			//Baghdad, Iraq (Suddam Hussein's home)
	L"Drassen",			//The main place in JA2 that you can receive items.  The other towns are dummy names...
	L"���",	//"Hong Kong",		//Hong Kong, Hong Kong
	L"��³��",	//"Beirut",			//Beirut, Lebanon	(Middle East)
	L"�׶�",	//"London",			//London, England
	L"��ɼ�",	//"Los Angeles",	//Los Angeles, California, USA (SW corner of USA)
	L"Meduna",			//Meduna -- the other airport in JA2 that you can receive items.
	L"Metavira",		//The island of Metavira was the fictional location used by JA1
	L"������",	//"Miami",				//Miami, Florida, USA (SE corner of USA)
	L"Ī˹��",	//"Moscow",			//Moscow, USSR
	L"ŦԼ",	//"New York",		//New York, New York, USA
	L"��̫��",	//"Ottawa",			//Ottawa, Ontario, Canada -- where JA2 was made!
	L"����",	//"Paris",				//Paris, France
	L"���貨��",	//"Tripoli",			//Tripoli, Libya (eastern Mediterranean)
	L"����",	//"Tokyo",				//Tokyo, Japan
	L"�¸绪",	//"Vancouver",		//Vancouver, British Columbia, Canada (west coast near US border)
};

STR16 pSkillAtZeroWarning[] =
{ //This string is used in the IMP character generation.  It is possible to select 0 ability
	//in a skill meaning you can't use it.  This text is confirmation to the player.
	L"��ȷ��������ζ���㲻��ӵ������ܡ�",
};

STR16 pIMPBeginScreenStrings[] =
{
	L"(���8���ַ�)",	//"( 8 Characters Max )",
};

STR16 pIMPFinishButtonText[ 1 ]=
{
	L"����...",
};

STR16 pIMPFinishStrings[ ]=
{
	L"лл�㣬%s",
};

// the strings for imp voices screen
STR16 pIMPVoicesStrings[] =
{
	L"ɤ��",
};

STR16 pDepartedMercPortraitStrings[ ]=
{
	L"����",	//"Killed in Action",
	L"���",		//"Dismissed",
	L"����",		//"Other",
};

// title for program
STR16 pPersTitleText[] =
{
	L"���¹���",
};

// paused game strings
STR16 pPausedGameText[] =
{
	L"��Ϸ��ͣ",	//"Game Paused",
	L"������Ϸ (|P|a|u|s|e)",	//"Resume Game (|P|a|u|s|e)",
	L"��ͣ��Ϸ (|P|a|u|s|e)",	//"Pause Game (|P|a|u|s|e)",
};


STR16 pMessageStrings[] =
{
	L"�˳���Ϸ",	//"Exit Game?",
	L"ȷ��",	//"OK",
	L"��",	//"YES",
	L"��",	//"NO",
	L"ȡ��",	//"CANCEL",
	L"�ٴι�Ӷ",	//"REHIRE",
	L"����",	//"LIE",		//
	L"û������",	//"No description", //Save slots that don't have a description.
	L"��Ϸ�ѱ��档",	//"Game Saved.",
	L"��Ϸ�ѱ��档",	//"Game Saved.",
	L"QuickSave", 	//"QuickSave", //The name of the quicksave file (filename, text reference)
	L"SaveGame",	//"SaveGame",//The name of the normal savegame file, such as SaveGame01, SaveGame02, etc.
	L"sav",				//The 3 character dos extension (represents sav)
	L"..\\SavedGames", //The name of the directory where games are saved.
	L"��",	//"Day",
	L"��Ӷ��",	//"Mercs",
	L"��",	//"Empty Slot", //An empty save game slot
	L"Demo",				//Demo of JA2
	L"Debug",				//State of development of a project (JA2) that is a debug build
	L"Release",			//Release build for JA2
	L"rpm",					//Abbreviation for Rounds per minute -- the potential # of bullets fired in a minute.
	L"����",	//"min",					//Abbreviation for minute.
	L"��",	//"m",						//One character abbreviation for meter (metric distance measurement unit).
	L"rnds",				//Abbreviation for rounds (# of bullets)
	L"����",	//"kg",					//Abbreviation for kilogram (metric weight measurement unit)
	L"��",	//"lb",					//Abbreviation for pounds (Imperial weight measurement unit)
	L"��ҳ",	//"Home",				//Home as in homepage on the internet.
	L"USD",					//Abbreviation to US dollars
	L"n/a",					//Lowercase acronym for not applicable.
	L"���ͬʱ",	//"Meanwhile",	//Meanwhile
	L"%s�ѵ���%s%s����",	//"%s has arrived in sector %s%s", //Name/Squad has arrived in sector A9.  Order must not change without notifying																		//SirTech
	
	L"Version",
	L"û�п��ٴ浵",	//"Empty Quick Save Slot",
	//L"This slot is reserved for Quick Saves made from the tactical and map screens using ALT+S.",
	L"��λ��������Quick Save�����ٴ浵��������ս����Ļ���ߵ�ͼ��Ļ��ALT+S���п��ٴ浵��",
	L"�򿪵�",	//"Opened",
	L"�رյ�",	//"Closed",

	//L"You are running low on disk space.  You only have %sMB free and Jagged Alliance 2 requires %sMB.",
	L"���̿ռ䲻�㡣ֻ��%sMB���ÿռ䣬����Ѫ����2����Ҫ%sMB��",
	L"��AIM��Ӷ��%s", 		//"Hired %s from AIM", 
	L"%sץס��%s.",	//"%s has caught %s.",	//'Merc name' has caught 'item' -- let SirTech know if name comes after item.
	L"%s���������", 	//"%s has taken the drug.", //'Merc name' has taken the drug
	L"%sû��ҽ�Ƽ���",	//"%s has no medical skill",//'Merc name' has no medical skill.

	//CDRom errors (such as ejecting CD while attempting to read the CD)
	L"The integrity of the game has been compromised.",
	L"ERROR: Ejected CD-ROM",

	//When firing heavier weapons in close quarters, you may not have enough room to do so.
	//L"There is no room to fire from here.",
	L"û�пռ�ʩչ���������",	//"There is no room to fire from here.",
	
	//Can't change stance due to objects in the way...
	L"�����޷��ı����ơ�",	//"Cannot change stance at this time.",

	//Simple text indications that appear in the game, when the merc can do one of these things.
	L"����",	//"Drop",
	L"Ͷ��",	//"Throw",
	L"����",	//"Pass",

	L"��%s������%s��", //"%s passed to %s.", //"Item" passed to "merc".  Please try to keep the item %s before the merc %s, otherwise,
									 //must notify SirTech.
	L"û���㹻��λ�԰�%s����%s",	//"No room to pass %s to %s.", //pass "item" to "merc".  Same instructions as above.

	//A list of attachments appear after the items.  Ex:  Kevlar vest ( Ceramic Plate 'Attached )'
	L"���� )",	//" Attached )",

	//Cheat modes
	L"�������׵ȼ�һ",	//"Cheat level ONE reached",
	L"�������׵ȼ���",	//"Cheat level TWO reached",

	//Toggling various stealth modes
	L"С�ӽ���Ǳ��ģʽ��",	//"Squad on stealth mode.",
	L"С���˳�Ǳ��ģʽ��",	//"Squad off stealth mode.",
	L"%s����Ǳ��ģʽ��",	//"%s on stealth mode.",	
	L"%s�˳�Ǳ��ģʽ��",	//"%s off stealth mode.",

	//Wireframes are shown through buildings to reveal doors and windows that can't otherwise be seen in 
	//an isometric engine.  You can toggle this mode freely in the game.
	L"����ʾ����",	//"Extra Wireframes On",	
	L"�ر���ʾ����",	//"Extra Wireframes Off",

	//These are used in the cheat modes for changing levels in the game.  Going from a basement level to
	//an upper level, etc.  
	L"�޷��������ȥ...",	//"Can't go up from this level...",
	L"û�и��͵Ĳ���...",	//"There are no lower levels...",
	L"���������%d��...",	//"Entering basement level %d...",
	L"�뿪������...",			//"Leaving basement...",	

	L"��",	//"'s",		// used in the shop keeper inteface to mark the ownership of the item eg Red's gun
	L"�رո���ģʽ��",	//"Follow mode OFF.",
	L"�򿪸���ģʽ��",	//"Follow mode ON.",
	L"����ʾ3D��ꡣ",	//"3D Cursor OFF.",
	L"��ʾ3D��ꡣ",	//"3D Cursor ON.",
	L"��%dС�Ӽ��",	//"Squad %d active.",
	L"���޷�֧��%s��%s��н",	//"You cannot afford to pay for %s's daily salary of %s",	//first %s is the mercs name, the seconds is a string containing the salary
	L"����",			//"Skip",
	L"%s���ܶ����뿪",	//"%s cannot leave alone.",
	L"һ���ļ���ΪSaveGame99.sav�Ĵ浵�������ˡ������Ҫ�Ļ����������ΪSaveGame01 - SaveGame10��Ȼ���������������浵�ˡ�",	//"A save has been created called, SaveGame99.sav.  If needed, rename it to SaveGame01 - SaveGame10 and then you will have access to it in the Load screen.",
	L"%s���˵�%s",	//"%s drank some %s",
	L"Drassen�յ��˰�����",	//"A package has arrived in Drassen.",
 	L"%s������ָ������½��(����%s)�� ��%d��%s��",	//"%s should arrive at the designated drop-off point (sector %s) on day %d, at approximately %s.",		//first %s is mercs name, next is the sector location and name where they will be arriving in, lastely is the day an the time of arrival
	L"��־�Ѿ����¡�",	//"History log updated.",
	L"Grenade Bursts use Targeting Cursor (Spread fire enabled)",
	L"�񵯷���������ʱʹ�õ������(������ɨ��",	//"Grenade Bursts use Trajectory Cursor (Spread fire disabled)",
	L"������Ʒȫ��",	//"Drop All Enabled",
	L"������Ʒȫ��",	//"Drop All Disabled",
	L"�񵯷��������������Ƿ�����",	//"Grenade Launchers fire at standard angles",
	L"�񵯷������Խϸ����Ƿ�����",	//L"Grenade Launchers fire at higher angles",
#ifdef JA2BETAVERSION
	L"Successfully Saved the Game into the End Turn Auto Save slot.",
#endif
	L"..\\SavedGames\\MP_SavedGames", //The name of the directory where games are saved.//84
	L"�ͻ���", //"Client",
};


CHAR16 ItemPickupHelpPopup[][40] =
{
	L"ȷ��",		//"OK",	
	L"���Ϲ���",		//"Scroll Up",
	L"ѡ��ȫ��",		//"Select All",
	L"���¹���",		//"Scroll Down",
	L"ȡ��",		//"Cancel",
};

STR16 pDoctorWarningString[] =
{
	//L"%s isn't close enough to be healed.",
	L"%s�����������ܱ����ơ�",
	//L"Your medics were unable to completely bandage everyone.",
	L"���ҽ�����ܰ�����ÿ���ˡ�",
};

STR16 pMilitiaButtonsHelpText[] =
{
	/*
	L"Pick up(Right Click)/drop(Left Click) Green Troops", // button help text informing player they can pick up or drop militia with this button
	L"Pick up(Right Click)/drop(Left Click) Regular Troops",
	L"Pick up(Right Click)/drop(Left Click) Veteran Troops",
	L"Distribute available militia equally among all sectors",
*/
	L"����(�һ�)/����(���)�±�",
	L"����(�һ�)/����(���)�ϱ�",
	L"����(�һ�)/����(���)����",
	L"�ڸ�������ƽ���ֲ����",
};

STR16 pMapScreenJustStartedHelpText[] =
{
	//L"Go to AIM and hire some mercs ( *Hint* it's in the Laptop )", // to inform the player to hired some mercs to get things going
	//L"When you're ready to travel to Arulco, click on the Time Compression button at the bottom right of the screen.", // to inform the player to hit time compression to get the game underway
	L"ȥAIM�ͼ���Ӷ��( *��ʾ* �ڱʼǱ�������)",
	L"����׼������ǰ��Arulco�������Ļ���·���ʱ��ѹ����ť��",
};

STR16 pAntiHackerString[] = 
{
	L"���󡣶�ʧ�����ļ�����Ϸ���˳���",
};


STR16 gzLaptopHelpText[] =
{
	//Buttons:
	/*
	L"View email",
	L"Browse various web sites",
	L"View files and email attachments",
	L"Read log of events",
	L"View team info",
	L"View financial summary and history",
	L"Close laptop",
	*/
	L"�鿴�ʼ�",
	L"�����ҳ",
	L"�鿴�ļ����ʼ��ĸ���",
	L"�Ķ��¼���־",
	L"�鿴������Ϣ",
	L"�鿴����򱨺ͼ�¼",
	L"�رձʼǱ�����",

	//Bottom task bar icons (if they exist):
	//L"You have new mail",
	//L"You have new file(s)",
	L"�����µ��ʼ�",
	L"�����µ��ļ�",

	//Bookmarks:
/*
	L"Association of International Mercenaries",
	L"Bobby Ray's online weapon mail order",
	L"Institute of Mercenary Profiling",
	L"More Economic Recruiting Center",
	L"McGillicutty's Mortuary",
	L"United Floral Service",
	L"Insurance Brokers for A.I.M. contracts",
*/
	L"����Ӷ������",
	L"Bobby Ray����������",
	L"Ӷ�����������о���",
	L"�����±�����",
	L"McGillicutty��Ĺ",
	L"���ϻ��ܷ���˾",
	L"A.I.Mָ�����մ�����",
};


STR16	gzHelpScreenText[] =
{
	L"�˳�������Ļ",	
};

STR16 gzNonPersistantPBIText[] =
{
	//L"There is a battle in progress. You can only retreat from the tactical screen.",
	L"ս�����ڽ����У���ֻ����ս����Ļ���г��ˡ�",
	//L"|Enter sector to continue the current battle in progress.",
	L"����÷���������ս����(|E)",
	//L"|Automatically resolves the current battle.",
	L"�Զ�������ս����(|A)",
	//L"You can't automatically resolve a battle when you are the attacker.",
	L"�������ʱ�������Զ����ս����",
	//L"You can't automatically resolve a battle while you are being ambushed.",
	L"������������ʱ�������Զ����ս����",
	//L"You can't automatically resolve a battle while you are fighting creatures in the mines.",
	L"���ڿ����������սʱ�������Զ����ս����",
	//L"You can't automatically resolve a battle while there are hostile civilians.",
	L"���ежԵ�ƽ��ʱ�������Զ����ս����",
	//L"You can't automatically resolve a battle while there are bloodcats.",
	L"��Ѫèʱ�������Զ����ս����",
	//L"BATTLE IN PROGRESS",
	L"ս��������",
	//L"You cannot retreat at this time.",
	L"�㲻������ʱ���ˡ�",
};

STR16 gzMiscString[] =
{
	//L"Your militia continue to battle without the aid of your mercs...",
	L"��û�����Ӷ����֧Ԯ�£��������ս��...",
	L"���ڳ�������Ҫ���͡�",	//"The vehicle does not need anymore fuel right now.",
	L"����װ��%d�����͡�",	//"The fuel tank is %d%% full.",
	//L"Deidranna's army has regained complete control over %s.",
	L"DeidrannaŮ���ľ���������ȫռ����%s��",
	L"�㶪ʧ�˼��͵㡣",	//"You have lost a refueling site.",
};

STR16	gzIntroScreen[] = 
{
	//L"Cannot find intro video",
	L"�Ҳ�����Ƶ�ļ�",
};

// These strings are combined with a merc name, a volume string (from pNoiseVolStr),
// and a direction (either "above", "below", or a string from pDirectionStr) to 
// report a noise.
// e.g. "Sidney hears a loud sound of MOVEMENT coming from the SOUTH."
STR16 pNewNoiseStr[] =
{
	//L"%s hears a %s sound coming from %s.",
	L"%s����%s��������%s��",
	//L"%s hears a %s sound of MOVEMENT coming from %s.",
	L"%s����%s�ƶ�������%s��",
	//L"%s hears a %s CREAKING coming from %s.",
	L"%s����%s֨֨������%s��",
	//L"%s hears a %s SPLASHING coming from %s.",
	L"%s����%s��ˮ������%s��",
	//L"%s hears a %s IMPACT coming from %s.",
	L"%s����%sײ��������%s��",
	//L"%s hears a %s EXPLOSION to %s.",
	L"%s����%s��ը������%s��",
	//L"%s hears a %s SCREAM to %s.",
	L"%s����%s���������%s��",
	//L"%s hears a %s IMPACT to %s.",
	L"%s����%sײ��������%s��",
	//L"%s hears a %s IMPACT to %s.",
	L"%s����%sײ��������%s��",
	//L"%s hears a %s SHATTERING coming from %s.",
	L"%s����%s����������%s��",
	//L"%s hears a %s SMASH coming from %s.",
	L"%s����%s����������%s��",
};

STR16 wMapScreenSortButtonHelpText[] =
{
	/*
	L"Sort by Name (|F|1)",
	L"Sort by Assignment (|F|2)",
	L"Sort by Sleep Status (|F|3)",
	L"Sort by Location (|F|4)",
	L"Sort by Destination (|F|5)",
	L"Sort by Departure Time (|F|6)",
	*/
	L"���������� (|F|1)",
	L"���������� (|F|2)",
	L"��˯��״̬���� (|F|3)",
	L"���ص����� (|F|4)",
	L"��Ŀ�ĵ����� (|F|5)",
	L"��Ԥ�����ʱ������ (|F|6)",
};



STR16		BrokenLinkText[] = 
{
	L"����404",	//"Error 404",
	L"��վδ�ҵ�",	//"Site not found.",
};


STR16 gzBobbyRShipmentText[] = 
{
	L"�����˻�",	//"Recent Shipments",
	L"���� #",		//"Order #",
	L"��Ʒ����",	//"Number Of Items",
	L"��������",		//"Ordered On",
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
	L"Game Internals Programmer", 			// Chris Camfield
	L"Co-designer/Writer",							// Shaun Lyng
	L"Strategic Systems & Editor Programmer",					//Kris \"The Cow Rape Man\" Marnes
	L"Producer/Co-designer",						// Ian Currie
	L"Co-designer/Map Designer",				// Linda Currie
	L"Artist",													// Eric \"WTF\" Cheng
	L"Beta Coordinator, Support",				// Lynn Holowka
	L"Artist Extraordinaire",						// Norman \"NRG\" Olsen
	L"Sound Guru",											// George Brooks
	L"Screen Designer/Artist",					// Andrew Stacey
	L"Lead Artist/Animator",						// Scot Loving
	L"Lead Programmer",									// Andrew \"Big Cheese Doddle\" Emmons
	L"Programmer",											// Dave French
	L"Strategic Systems & Game Balance Programmer",					// Alex Meduna
	L"Portraits Artist",								// Joey \"Joeker\" Whelan",
};

STR16	gzCreditNameFunny[]=
{
	L"", 																			// Chris Camfield
	L"(still learning punctuation)",					// Shaun Lyng
	L"(\"It's done. I'm just fixing it\")",	//Kris \"The Cow Rape Man\" Marnes
	L"(getting much too old for this)",				// Ian Currie
	L"(and working on Wizardry 8)",						// Linda Currie
	L"(forced at gunpoint to also do QA)",			// Eric \"WTF\" Cheng
	L"(Left us for the CFSA - go figure...)",	// Lynn Holowka
	L"",																			// Norman \"NRG\" Olsen
	L"",																			// George Brooks
	L"(Dead Head and jazz lover)",						// Andrew Stacey
	L"(his real name is Robert)",							// Scot Loving
	L"(the only responsible person)",					// Andrew \"Big Cheese Doddle\" Emmons
	L"(can now get back to motocrossing)",	// Dave French
	L"(stolen from Wizardry 8)",							// Alex Meduna
	L"(did items and loading screens too!)",	// Joey \"Joeker\" Whelan",
};

STR16 sRepairsDoneString[] =
{
/*
	L"%s finished repairing own items",
	L"%s finished repairing everyone's guns & armor",
	L"%s finished repairing everyone's equipped items",
	L"%s finished repairing everyone's carried items",
	L"%s finished repairing everyone's carried items",
	L"%s finished repairing everyone's carried items",
*/
	L"%s�޸����Լ�����Ʒ��",
	L"%s�޸��������˵�ǹ�ͻ��ס�",
	L"%s�޸��������˵�װ����",
	L"%s�޸��������˵�Я����Ʒ��",
	L"%s�޸��������˵�Я����Ʒ��",
	L"%s�޸��������˵�Я����Ʒ��",
};

STR16 zGioDifConfirmText[]=
{
	//L"You have chosen NOVICE mode. This setting is appropriate for those new to Jagged Alliance, those new to strategy games in general, or those wishing shorter battles in the game. Your choice will affect things throughout the entire course of the game, so choose wisely. Are you sure you want to play in Novice mode?",
	L"��ѡ���ˡ����֡�ģʽ�����������Ϊ��Щ������Ѫ���˵����׼���ģ����ǸսӴ�������Ϸ����������ϣ��������ս�������ѡ�����������Ϸ����Ч���������������ǵ�ѡ�������Ҫ�桰���֡�ģʽ��",
	//L"You have chosen EXPERIENCED mode. This setting is suitable for those already familiar with Jagged Alliance or similar games. Your choice will affect things throughout the entire course of the game, so choose wisely. Are you sure you want to play in Experienced mode?",
	L"��ѡ���ˡ����֡�ģʽ�����������Ϊ��Щ�Ѿ���Ϥ��Ѫ���˻�������Ϸ�����׼���ġ����ѡ�����������Ϸ����Ч���������������ǵ�ѡ�������Ҫ�桰���֡�ģʽ��",
	//L"You have chosen EXPERT mode. We warned you. Don't blame us if you get shipped back in a body bag. Your choice will affect things throughout the entire course of the game, so choose wisely. Are you sure you want to play in Expert mode?",
	L"��ѡ���ˡ�ר�ҡ�ģʽ�����Ǿ����㣬����㱻װ��ʬ�����˻�������Ҫ�������Ǳ�Թ�����ѡ�����������Ϸ����Ч���������������ǵ�ѡ�������Ҫ�桰ר�ҡ�ģʽ��",
	//L"You have chosen INSANE mode. WARNING: Don't blame us if you get shipped back in little pieces... Deidranna WILL kick your ass.  Hard.  Your choice will affect things throughout the entire course of the game, so choose wisely. Are you sure you want to play in INSANE mode?",
	L"��ѡ���ˡ����ģʽ�����棺����㱻װ�����ϴ���һ����˻�������Ҫ�������Ǳ�Թ��Ů����ݺݵ���Ű�㡣���ѡ�����������Ϸ����Ч���������������ǵ�ѡ�������Ҫ�桰���ģʽ��",
};

STR16 gzLateLocalizedString[] =
{
	L"û���ҵ�loadscreen�����ļ�%S...",	//"%S loadscreen data file not found...",

	//1-5
	//L"The robot cannot leave this sector when nobody is using the controller.",
	L"����û��������ң�������������޷��뿪��������",

	//This message comes up if you have pending bombs waiting to explode in tactical.
	//L"You can't compress time right now.  Wait for the fireworks!", 
	L"�������޷�ѹ��ʱ�䡣��ȴ�ը����ը��", 

	//'Name' refuses to move.
	//L"%s refuses to move.",
	L"%s�ܾ��ƶ���",

	//%s a merc name
	L"%s�������㣬�޷��ı����ơ�",	//"%s does not have enough energy to change stance.",

	//A message that pops up when a vehicle runs out of gas.
	L"%s���ͺľ���������%c%d��ê�ˡ�",	//"The %s has run out of gas and is now stranded in %c%d.",


	//6-10

	// the following two strings are combined with the pNewNoise[] strings above to report noises
	// heard above or below the merc
	//L"above",
	L"�Ϸ�",
	//L"below",
	L"�·�",

	//The following strings are used in autoresolve for autobandaging related feedback.
	//L"None of your mercs have any medical ability.",
	L"Ӷ����û����ҽ�Ƽ��ܡ�",
	//L"There are no medical supplies to perform bandaging.",
	L"û���㹻��ҽ����Ʒ���а�����",
	//L"There weren't enough medical supplies to bandage everybody.",
	L"û���㹻��ҽ����Ʒ�������˽��а�����",
	L"Ӷ����û����Ҫ������",	//"None of your mercs need bandaging.",	
	L"�Զ�����Ӷ����",	//"Bandages mercs automatically.",
	L"ȫ��Ӷ���ѱ�������ϡ�",	//"All your mercs are bandaged.",

	//14
	L"Arulco",

	//L"(roof)",
	L"�ݶ�",

	//L"Health: %d/%d",
	L"������%d/%d",

	//In autoresolve if there were 5 mercs fighting 8 enemies the text would be "5 vs. 8"
	//"vs." is the abbreviation of versus.
	L"%d vs. %d",
	
	//L"The %s is full!",  //(ex "The ice cream truck is full")
	L"%s���ˡ�",

 	//L"%s does not need immediate first aid or bandaging but rather more serious medical attention and/or rest.",
	L"%s���ڲ��ð���������������Ҫ��������ƺ���Ϣ��",
	//20
	//Happens when you get shot in the legs, and you fall down.
	//L"%s is hit in the leg and collapses!",
	L"%s�������Ȳ������ҵ����ˣ�",
	//Name can't speak right now.
	//L"%s can't speak right now.",
	L"%s���ڲ���˵����",

	//22-24 plural versions 
	//L"%d green militia have been promoted to veteran militia.",
	L"%d���±�������Ϊ������",
	//L"%d green militia have been promoted to regular militia.",
	L"%d���±�������Ϊ�ϱ���",
	//L"%d regular militia have been promoted to veteran militia.",
	L"%d���ϱ�������Ϊ������",

	//25
	//L"Switch",
	L"����",

	//26
	//Name has gone psycho -- when the game forces the player into burstmode (certain unstable characters)
	//L"%s goes psycho!",
	L"%����ˣ�",

	//27-28
	//Messages why a player can't time compress.
	//L"It is currently unsafe to compress time because you have mercs in sector %s.",
	L"����ѹ��ʱ�䲻��ȫ����Ϊ����Ӷ���ڷ���%s��",
	//L"It is currently unsafe to compress time when mercs are in the creature infested mines.",
	L"����ѹ��ʱ�䲻��ȫ����Ϊ����Ӷ���ڱ����θ�Ⱦ�Ŀ󾮡�",
	

	//29-31 singular versions 
	//L"1 green militia has been promoted to a veteran militia.",
	L"1���±�������Ϊ������",
	//L"1 green militia has been promoted to a regular militia.",
	L"1���±�������Ϊ�ϱ���",
	//L"1 regular militia has been promoted to a veteran militia.",
	L"1���ϱ�������Ϊ������",

	//32-34
	L"%s���",	//"%s doesn't say anything.",
	//L"Travel to surface?",
	L"�ص����棿",
	L"(��%dС��)",	//"(Squad %d)",

	//35
	//Ex: "Red has repaired Scope's MP5K".  Careful to maintain the proper order (Red before Scope, Scope before MP5K)
	//L"%s has repaired %s's %s",
	L"%s�޸���%s��%s��",

	//36
	//L"BLOODCAT",
	L"Ѫè",

	//37-38 "Name trips and falls"
	//L"%s trips and falls",
	L"%s�ȵ����壬�����ˡ�",
	//L"This item can't be picked up from here.",
	L"�����Ʒ���ܴ��������",

	//39
	//L"None of your remaining mercs are able to fight.  The militia will fight the creatures on their own.",
	L"�����е�Ӷ����û���ܽ���ս��������ǽ����Ժ�������ս��",

	//40-43
	//%s is the name of merc.
	L"%s������ҽҩ�����ҩƷ��",	//"%s ran out of medical kits!",	
	L"%sû�����輼����ҽ�����ˣ�",	//"%s lacks the necessary skill to doctor anyone!",
	L"%s���깤������Ĺ��ߣ�",	//"%s ran out of tool kits!",
	L"%sû�����輼����������Ʒ��",	//"%s lacks the necessary skill to repair anything!",

	//44-45
	L"Repair Time",
	//L"%s cannot see this person.",
	L"%s����������ˡ�",

	//46-48
	L"%s������ǹ�ܵ������ˣ�",	//"%s's gun barrel extender falls off!",
	L"��ÿ��������ֻ�����в�����%d��Ӷ��ѵ�������",	//"No more than %d militia trainers are permitted per sector.",	
  	L"��ȷ����",			//"Are you sure?",

	//49-50
	//L"Time Compression",
	L"ʱ��ѹ��",
	//L"The vehicle's gas tank is now full.",
	L"�����������Ѿ��������ˡ�",

	//51-52 Fast help text in mapscreen.
	//L"Continue Time Compression (|S|p|a|c|e)",
	L"����ʱ��ѹ�� (|S|p|a|c|e)",
	//L"Stop Time Compression (|E|s|c)",
	L"ֹͣʱ��ѹ�� (|E|s|c)",


	//53-54 "Magic has unjammed the Glock 18" or "Magic has unjammed Raven's H&K G11" 
	L"%s������˿��ǵ�%s",	//L"%s has unjammed the %s",
	L"%s������˿��ǵ�%s��%s",	//L"%s has unjammed %s's %s",

	//55 
	L"�鿴�������ʱ���޷�ѹ��ʱ��",	//L"Can't compress time while viewing sector inventory.",	

	L"The Jagged Alliance 2 v1.13 PLAY DISK was not found. Program will now exit.",

	//L"Items successfully combined.",
	L"��Ʒ��ϳɹ���",
	
	//58
	//Displayed with the version information when cheats are enabled.
	L"��ǰ/����չ�� %d%%/%d%%",		//"Current/Max Progress: %d%%/%d%%",

	//L"Escort John and Mary?",
	L"����John��Mary��",
	
	// 60
	L"���ر�����",		//"Switch Activated.",

	L"%s���մ�Ƭ�Ѿ�������!",	//"%s's ceramic plates have been smashed!",
	L"%s�����%d���ӵ���",	//"%s fires %d more rounds than intended!",
	L"%s�����%d���ӵ���",	//"%s fires %d more round than intended!",
};

STR16 gzCWStrings[] = 
{
	//L"Call reinforcements from adjacent sectors?",
	L"�Ƿ�����ڽ������Ԯ����",
};

// WANNE: Tooltips
STR16 gzTooltipStrings[] =
{
	// Debug info
	/*L"%s|Location: %d\n",
	L"%s|Brightness: %d / %d\n",
	L"%s|Range to |Target: %d\n",
	L"%s|I|D: %d\n",
	L"%s|Orders: %d\n",
	L"%s|Attitude: %d\n",
	L"%s|Current |A|Ps: %d\n",
	L"%s|Current |Health: %d\n",
	*/
	L"%sλ�ã�%d\n",
	L"%s���ȣ�%d / %d\n",
	L"%sĿ����룺%d\n",
	L"%sID: %d\n",
	L"%s������%d\n",
	L"%s����: %d\n",
	L"%s��ǰ AP: %d\n",
	L"%s��ǰ����: %d\n",
	// Full info
	/*
	L"%s|Helmet: %s\n",
	L"%s|Vest: %s\n",
	L"%s|Leggings: %s\n",
	*/
	L"%sͷ����%s\n",
	L"%s�����£�%s\n",
	L"%s��ս�㣺%s\n",
	// Limited, Basic
	L"|Armor: ",
	L"Helmet ",
	L"Vest ",
	L"Leggings",
	L"worn",
	L"no Armor",
	L"%s|N|V|G: %s\n",
	L"no NVG",
	L"%s|Gas |Mask: %s\n",
	L"no Gas Mask",
	L"%s|Head |Position |1: %s\n",
	L"%s|Head |Position |2: %s\n",
	L"\n(in Backpack) ",
	L"%s|Weapon: %s ",
	L"no Weapon",
	L"Handgun",
	L"SMG",
	L"Rifle",
	L"MG",
	L"Shotgun",
	L"Knife",
	L"Heavy Weapon",
	L"no Helmet",
	L"no Vest",
	L"no Leggings",
	L"|Armor: %s\n", 
};

STR16 New113Message[] =
{
	L"Storm started.",
	L"Storm ended.",
	L"Rain started.",
	L"Rain ended.",
	L"Watch out for snipers...",
	L"Suppression fire!",	
	L"BRST",
	L"AUTO",
	L"GL",
	L"GL BRST",
	L"GL AUTO",
	L"Sniper!",
	L"Unable to split money due to having an item on your cursor.",
	L"Arrival of new recruits is being rerouted to sector %s, as scheduled drop-off point of sector %s is enemy occupied.",
	L"Deleted item",
	L"Deleted all items of this type",
	L"Sold item",
	L"Sold all items of this type",
};

// WANNE: This are the email texts, when one of the 4 new 1.13 MERC mercs have levelled up, that Speck sends
// INFO: Do not replace the ?characters. They indicate the <B2> (-> Newline) from the edt files
STR16	New113MERCMercMailTexts[] =
{
	// Gaston: Text from Line 39 in Email.edt
	L"Hereby be informed that due to Gastons's past performance his fees for services rendered have undergone an increase. Personally, I'm not surprised. ??Speck T. Kline ?",
	// Stogie: Text from Line 43 in Email.edt
	L"Please be advised that, as of this moment, Stogies's fees for services rendered have increased to coincide with the increase in his abilities. ??Speck T. Kline ?", 
	// Tex: Text from Line 45 in Email.edt
	L"Please be advised that Tex's experience entitles him to more equitable compensation. He's fees have therefore been increased to more accurately reflect his worth. ??Speck T. Kline ?",
	// Biggens: Text from Line 49 in Email.edt
	L"Please take note. Due to the improved performance of Biggens his fees for services rendered have undergone an increase. ??Speck T. Kline ?",
};

// WANNE: These are the missing skills from the impass.edt file
// INFO: Do not replace the ?characters. They indicate the <B2> (-> Newline) from the edt files
STR16 MissingIMPSkillsDescriptions[] =
{
	// Sniper
	L"Sniper: Eyes of a hawk, you can shoot the wings from a fly at a hundred yards! ?",
	// Camouflage
	L"Camouflage: Besides you even bushes look synthetic! ?",	
};

STR16 NewInvMessage[] = 
{
	L"Cannot pickup backpack at this time",
	L"No place to put backpack",
	L"Backpack not found",
	L"Zipper only works in combat",
	L"Can not move while backpack zipper active",
	L"Are you sure you want to sell all sector items?",
	L"Are you sure you want to delete all sector items?",
	L"Cannot climb while wearing a backpack",
};

// WANNE - MP: Multiplayer messages
STR16 MPServerMessage[] =
{
	// 0
	L"Initiating RakNet server...",
	L"Server started, waiting for connections...",
	L"You must now connect with your client to the server by pressing '2'.",
	L"Server is already running.",
	L"Server failed to start. Terminating.",
	// 5
	L"%d/%d clients are ready for realtime-mode.",
	L"Server disconnected and shutdown.",
	L"Server is not running.",
	L"Clients are still loading, please wait...",
	L"You cannot change dropzone after the server has started.",
};

STR16 MPClientMessage[] =
{
	// 0
	L"Initiating RakNet client...",		
	L"Connecting to IP: %S ...",
	L"Received game settings:",
	L"You are already connected.",
	L"You are already connecting...",
	// 5
	L"Client #%d - '%S' has hired '%s'.",
	L"Client #%d - '%S' has hired another merc.",
	L"You are ready - Total ready = %d/%d.",
	L"You are no longer ready - Total ready = %d/%d.",
	L"Starting battle...",
	// 10
	L"Client #%d - '%S' is ready - Total ready = %d/%d.",
	L"Client #%d - '%S' is no longer ready - Total ready = %d/%d",
	L"You are ready. Awaiting other clients... Press 'OK' if you are not ready anymore.",
	L"Let us the battle begin!",
	L"A client must be running for starting the game.",
	// 15
	L"Game cannot start. No mercs are hired...",
	L"Awaiting 'OK' from server to unlock the laptop...",
	L"Interrupted",
	L"Finish from interrupt",
	L"Mouse Grid Coordinates:",
	// 20
	L"X: %d, Y: %d",
	L"Grid Number: %d",
	L"Server only feature",
	L"Choose server manual override stage:  ('1' - Enable laptop/hiring)  ('2' - Launch/load level)  ('3' - Unlock UI)  ('4' - Finish placement)",
	//L"Sector=%s, Max Clients=%d, Max Mercs=%d, Game_Mode=%d, Same Merc=%d, Damage Multiplier=%f, Enemies=%d, Creatures=%d, Militias=%d, Civilians=%d, Timed Turns=%d, Secs/Tic=%d, Starting Cash=$%d, Tons of Guns=%d, Sci-Fi=%d, Difficulty=%d, Iron-Man=%d, BobbyRays Range=%d, Dis BobbyRay=%d, Dis Aim/Merc Equip=%d, Dis Morale=%d, Testing=%d",
	L"Sector=%s, Max Clients=%d, Max Mercs=%d, Game_Mode=%d, Same Merc=%d, Damage Multiplier=%f, Timed Turns=%d, Secs/Tic=%d, Dis BobbyRay=%d, Dis Aim/Merc Equip=%d, Dis Morale=%d, Testing=%d",

	// 25
	L"Testing and cheat function '9' is enabled.",
	L"New connection: Client #%d - '%S', Edge: %d, Team: %d.",
	L"Team: %d.",//not used any more
	L"'%s' (client %d - '%S') was killed by '%s' (client %d - '%S')",
	L"Kicked client #%d - '%S'",
	// 30
	L"Start turn for client number: #1 - '%S' | #2 - '%S' | #3 - '%S' | #4 - '%S'",
	L"Starting turn for client #%d",
	L"Requesting for realtime...",
	L"Switched back to realtime.",
	L"Error: Something went wrong switching back.",
	// 35
	L"Unlock laptop for hiring? (Are all clients connected?)",
	L"The server has unlocked the laptop. Begin hiring!",
	L"Interruptor.",
	L"You cannot change dropzone if you are only the client and not the server.",
	L"You declined the offer to surrender, because you are in a multiplayer game.",
	// 40
	L"All your mercs are wiped dead!",
	L"Spectator mode enabled.",
	L"You have been defeated!",
	L"Sorry, climbing is disable in MP",
	L"You Hired '%s'",
};

STR16 MPHelp[] =
{
	// 0
	L"Welcome to Jagged Alliance 2 v1.13 Multiplayer",
	L"Press 'F1' for help",
	L"Multiplayer controls (from strategy screen)",
	L"* first set up ja2_mp.ini *",
	L"'1' - Start server", 
	// 5
	L"'2' - Connect to server",
	L"'3' - If server unlock laptop, set client ready for battle",
	L"'4' - Quit server and client",
	L"'5' - Display mouse coords (from tactical screen)",
	L"'7' - Popup dialog for server override panel",
	// 10
	L"'F2' - Display secondary help",
	L"See readme_mp.html for further details",
	L"Tips: (assuming ja2_mp.ini is set up)",
	L"* Make sure all clients have unique CLIENT_NUM *",
	L"* Game save doesn't record bobby rays order *",
	// 15
	L"* Avoid placing opposed mercs in immediate sight *",
	L"'F1' - Display primary help",
};

#endif //ENGLISH
