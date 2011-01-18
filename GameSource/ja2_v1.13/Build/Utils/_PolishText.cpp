//#pragma setlocale("POLISH")
#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
#else
	#include "Language Defines.h"
	#if defined( POLISH )
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_PolishText_public_symbol(void){;}

#ifdef POLISH

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

	Other examples are used multiple times, like the Esc key  or "|E|s|c" or Space -> (|S|p|a|c|j|a)

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

CHAR16  gszAimPages[ 6 ][ 20 ] =
{
	L"Str. 1/2", //0
	L"Str. 2/2",
	
	L"Str. 1/3",
	L"Str. 2/3",
	L"Str. 3/3",
	
	L"Str. 1/1", //5
};

// by Jazz: TODO.Translate
CHAR16 zGrod[][500] =
{
	L"Robot", //0    // Robot
};

STR16 pCreditsJA2113[] =
{
	L"@T,{;JA2 v1.13 Development Team",
	L"@T,C144,R134,{;Kodowanie",
	L"@T,C144,R134,{;Grafika i d�wi�ki",
	L"@};(R�ne inne mody!)",
	L"@T,C144,R134,{;Przedmioty",
	L"@T,C144,R134,{;Pozostali autorzy",
	L"@};(Wszyscy pozostali cz�onkowie sceny JA kt�rzy nas wsparli!)",
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
//	L"Monstrum",
//	L"Rakiety",
//	L"strza�ka", // dart
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
//	L"Monstrum",
//	L"Rakiety",
//	L"strza�ka", // dart
//	L"", // flamethrower
//	L".50 cal", // barrett
//	L"9mm Hvy", // Val silent
//};


CHAR16 WeaponType[MAXITEMS][30] =
{
	L"Inny",
	L"Pistolet",
	L"Pistolet maszynowy",
	L"Karabin maszynowy",
	L"Karabin",
	L"Karabin snajperski",
	L"Karabin bojowy",
	L"Lekki karabin maszynowy",
	L"Strzelba"
};

CHAR16 TeamTurnString[][STRING_LENGTH] =
{
	L"Tura gracza", // player's turn
	L"Tura przeciwnika",
	L"Tura stworze�",
	L"Tura samoobrony",
	L"Tura cywili"
	L"Player_Plan",// planning turn
	L"Client #1",//hayden
	L"Client #2",//hayden
	L"Client #3",//hayden
	L"Client #4",//hayden
};

CHAR16 Message[][STRING_LENGTH] =
{
	L"",

	// In the following 8 strings, the %s is the merc's name, and the %d (if any) is a number.

	L"%s dosta�(a) w g�ow� i traci 1 punkt inteligencji!",
	L"%s dosta�(a) w rami� i traci 1 punkt zr�czno�ci!",
	L"%s dosta�(a) w klatk� piersiow� i traci 1 punkt si�y!",
	L"%s dosta�(a) w nogi i traci 1 punkt zwinno�ci!",
	L"%s dosta�(a) w g�ow� i traci %d pkt. inteligencji!",
	L"%s dosta�(a) w rami� i traci %d pkt. zr�czno�ci!",
	L"%s dosta�(a) w klatk� piersiow� i traci %d pkt. si�y!",
	L"%s dosta�(a) w nogi i traci %d pkt. zwinno�ci!",
	L"Przerwanie!",

	// The first %s is a merc's name, the second is a string from pNoiseVolStr,
	// the third is a string from pNoiseTypeStr, and the last is a string from pDirectionStr

	L"", //OBSOLETE
	L"Dotar�y twoje posi�ki!",

	// In the following four lines, all %s's are merc names

	L"%s prze�adowuje.",
	L"%s posiada za ma�o Punkt�w Akcji!",
	L"%s udziela pierwszej pomocy. (Naci�nij dowolny klawisz aby przerwa�.)",
	L"%s i %s udzielaj� pierwszej pomocy. (Naci�nij dowolny klawisz aby przerwa�.)",
	// the following 17 strings are used to create lists of gun advantages and disadvantages
	// (separated by commas)
	L"niezawodna",
	L"zawodna",
	L"�atwa w naprawie",
	L"trudna do naprawy",
	L"solidna",
	L"niesolidna",
	L"szybkostrzelna",
	L"wolno strzelaj�ca",
	L"daleki zasi�g",
	L"kr�tki zasi�g",
	L"ma�a waga",
	L"du�a waga",
	L"niewielkie rozmiary",
	L"szybki ci�g�y ogie�",
	L"brak mo�liwo�ci strzelania seri�",
	L"du�y magazynek",
	L"ma�y magazynek",

	// In the following two lines, all %s's are merc names

	L"%s: kamufla� si� star�.",
	L"%s: kamufla� si� zmy�.",

	// The first %s is a merc name and the second %s is an item name

	L"Brak amunicji w dodatkowej broni!",
	L"%s ukrad�(a): %s.",

	// The %s is a merc name

	L"%s ma bro� bez funkcji ci�g�ego ognia.",

	L"Ju� masz co� takiego do��czone.",
	L"Po��czy� przedmioty?",

	// Both %s's are item names

	L"%s i %s nie pasuj� do siebie.",

	L"Brak",
	L"Wyjmij amunicj�",
	L"Dodatki",
	
	//You cannot use "item(s)" and your "other item" at the same time.
	//Ex:  You cannot use sun goggles and you gas mask at the same time.
	L" %s i %s nie mog� by� u�ywane jednocze�nie.",

	L"Element, kt�ry masz na kursorze myszy mo�e by� do��czony do pewnych przedmiot�w, poprzez umieszczenie go w jednym z czterech slot�w.",
	L"Element, kt�ry masz na kursorze myszy mo�e by� do��czony do pewnych przedmiot�w, poprzez umieszczenie go w jednym z czterech slot�w. (Jednak w tym przypadku, przedmioty do siebie nie pasuj�.)",
	L"Ten sektor nie zosta� oczyszczony z wrog�w!",
	L"Wci�� musisz da� %s %s", 
	L"%s dosta�(a) w g�ow�!",
	L"Przerwa� walk�?",
	L"Ta zmiana b�dzie trwa�a. Kontynuowa�?",
	L"%s ma wi�cej energii!",
	L"%s po�lizgn��(n�a) si� na kulkach!",
	L"%s nie chwyci�(a) - %s!",    //to by�o - L"%s nie zdo�a� chwyci� %s!",		teraz jest - L"%s nie zdo�a� zabra� %s z r�ki wroga!",
	L"%s naprawi�(a) %s",
	L"Przerwanie dla: ",
	L"Podda� si�?",
	L"Ta osoba nie chce twojej pomocy.",
	L"NIE S�DZ�!",
  	L"Aby podr�owa� helikopterem Skyridera, musisz najpierw zmieni� przydzia� najemnik�w na POJAZD/HELIKOPTER.",
	L"%s mia�(a) czas by prze�adowa� tylko jedn� bro�",
	L"Tura dzikich kot�w",
	L"ogie� ci�g�y",
	L"brak ognia ci�g�ego",
	L"celna",
	L"niecelna",
	L"bro� samoczynna",
	L"Wr�g nie ma przedmiot�w, kt�re mo�na ukra��!",
	L"Wr�g nie ma �adnego przedmiotu w r�ce!",
	
	//add new camo string
	L"%s: kamufla� pustynny si� star�.",
	L"%s: kamufla� pustynny si� zmy�.",
	
	L"%s: kamufla� le�ny si� star�.",
	L"%s: kamufla� le�ny si� zmy�.",
	
	L"%s: kamufla� miejski si� star�.",
	L"%s: kamufla� miejski si� zmy�.",
	
	L"%s: kamufla� zimowy si� star�.",
	L"%s: kamufla� zimowy si� zmy�.",

	L"Niemo�esz przydzieli� %s do tego slotu.",
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
	L"Pauza",
	L"Normalna",
	L"5 min.",
	L"30 min.",
	L"60 min.",
	L"6 godz.", //NEW
};


// Assignment Strings: what assignment does the merc  have right now? For example, are they on a squad, training, 
// administering medical aid (doctor) or training a town. All are abbreviated. 8 letters is the longest it can be.

STR16 pAssignmentStrings[] =
{
	L"Oddz. 1",
	L"Oddz. 2",
	L"Oddz. 3",
	L"Oddz. 4",
	L"Oddz. 5",
	L"Oddz. 6",
	L"Oddz. 7",
	L"Oddz. 8",
	L"Oddz. 9",
	L"Oddz. 10",
	L"Oddz. 11",
	L"Oddz. 12",
	L"Oddz. 13",
	L"Oddz. 14",
	L"Oddz. 15",
	L"Oddz. 16",
	L"Oddz. 17",
	L"Oddz. 18",
	L"Oddz. 19",
	L"Oddz. 20",
	L"S�u�ba", // on active duty
	L"Lekarz", // administering medical aid
	L"Pacjent", // getting medical aid
	L"Pojazd", // in a vehicle
	L"Podr�", // in transit - abbreviated form
	L"Naprawa", // repairing
	L"Praktyka", // training themselves  
	L"Samoobr.", // training a town to revolt 
	L"R.Samoobr.", //training moving militia units
	L"Instruk.", // training a teammate
	L"Ucze�", // being trained by someone else 
	L"Staff", // operating a strategic facility			// TODO.Translate
	L"Rest", // Resting at a facility					// TODO.Translate
	L"Nie �yje", // dead
	L"Obezw�.", // abbreviation for incapacitated
	L"Jeniec", // Prisoner of war - captured
	L"Szpital", // patient in a hospital 
	L"Pusty",	// Vehicle is empty
};


STR16 pMilitiaString[] =
{
	L"Samoobrona", // the title of the militia box
	L"Bez przydzia�u", //the number of unassigned militia troops
	L"Nie mo�esz przemieszcza� oddzia��w samoobrony gdy nieprzyjaciel jest w sektorze!",
	L"Cz�� samoobrony nie zosta�a przydzielona do sektoru. Czy chcesz ich rozwi�za�?",
};


STR16 pMilitiaButtonString[] =
{
	L"Automatyczne", // auto place the militia troops for the player
	L"OK", // done placing militia troops
	L"Rozwi��", // HEADROCK HAM 3.6: Disband militia
};

STR16 pConditionStrings[] = 
{
	L"Doskona�y", //the state of a soldier .. excellent health
	L"Dobry", // good health
	L"Do�� dobry", // fair health
	L"Ranny", // wounded health	
	L"Zm�czony",//L"Wyczerpany", // tired
	L"Krwawi", // bleeding to death
	L"Nieprzyt.", // knocked out 
	L"Umieraj�cy", // near death
	L"Nie �yje", // dead
};

STR16 pEpcMenuStrings[] =
{
	L"S�u�ba", // set merc on active duty
	L"Pacjent", // set as a patient to receive medical aid
	L"Pojazd", // tell merc to enter vehicle
	L"Wypu��", // let the escorted character go off on their own
	L"Anuluj", // close this menu
};


// look at pAssignmentString above for comments

STR16 pPersonnelAssignmentStrings[] =
{
	L"Oddz. 1",
	L"Oddz. 2",
	L"Oddz. 3",
	L"Oddz. 4",
	L"Oddz. 5",
	L"Oddz. 6",
	L"Oddz. 7",
	L"Oddz. 8",
	L"Oddz. 9",
	L"Oddz. 10",
	L"Oddz. 11",
	L"Oddz. 12",
	L"Oddz. 13",
	L"Oddz. 14",
	L"Oddz. 15",
	L"Oddz. 16",
	L"Oddz. 17",
	L"Oddz. 18",
	L"Oddz. 19",
	L"Oddz. 20",
	L"S�u�ba",
	L"Lekarz",
	L"Pacjent",
	L"Pojazd",
	L"Podr�",
	L"Naprawa",
	L"Praktyka",
	L"Trenuje samoobron�",
	L"Training Mobile Militia",	// TODO.Translate
	L"Instruktor",
	L"Ucze�",
	L"Facility Staff",			// TODO.Translate
	L"Resting at Facility",		// TODO.Translate
	L"Nie �yje",
	L"Obezw�adniony",
	L"Jeniec",
	L"Szpital",
	L"Pusty",	// Vehicle is empty
};


// refer to above for comments

STR16 pLongAssignmentStrings[] =
{
	L"Oddzia� 1",
	L"Oddzia� 2",
	L"Oddzia� 3",
	L"Oddzia� 4",
	L"Oddzia� 5",
	L"Oddzia� 6",
	L"Oddzia� 7",
	L"Oddzia� 8",
	L"Oddzia� 9",
	L"Oddzia� 10",
	L"Oddzia� 11",
	L"Oddzia� 12",
	L"Oddzia� 13",
	L"Oddzia� 14",
	L"Oddzia� 15",
	L"Oddzia� 16",
	L"Oddzia� 17",
	L"Oddzia� 18",
	L"Oddzia� 19",
	L"Oddzia� 20",
	L"S�u�ba",
	L"Lekarz",
	L"Pacjent",
	L"Pojazd",
	L"W podr�y",
	L"Naprawa",
	L"Praktyka",
	L"Trenuj samoobron�",
	L"Train Mobiles",		// TODO.Translate
	L"Trenuj oddzia�",
	L"Ucze�",
	L"Staff Facility",		// TODO.Translate
	L"Rest at Facility",	// TODO.Translate
	L"Nie �yje",
	L"Obezw�adniony",
	L"Jeniec",
	L"W szpitalu", // patient in a hospital 
	L"Pusty",	// Vehicle is empty
};


// the contract options

STR16 pContractStrings[] =
{
	L"Opcje kontraktu:", 
	L"", // a blank line, required
	L"Zaproponuj 1 dzie�", // offer merc a one day contract extension
	L"Zaproponuj 1 tydzie�", // 1 week
	L"Zaproponuj 2 tygodnie", // 2 week
	L"Zwolnij", // end merc's contract
	L"Anuluj", // stop showing this menu
};

STR16 pPOWStrings[] =
{
	L"Jeniec",  //an acronym for Prisoner of War
	L"??",
};

STR16 pLongAttributeStrings[] =
{
	L"SI�A", //The merc's strength attribute. Others below represent the other attributes.
	L"ZR�CZNO��",  
	L"ZWINNO��", 
	L"INTELIGENCJA", 
	L"UMIEJ�TNO�CI STRZELECKIE",
	L"WIEDZA MEDYCZNA",
	L"ZNAJOMO�� MECHANIKI",
	L"UMIEJ�TNO�� DOWODZENIA",
	L"ZNAJOMO�� MATERIA��W WYBUCHOWYCH",
	L"POZIOM DO�WIADCZENIA",
};

STR16 pInvPanelTitleStrings[] =
{
	L"Os�ona", // the armor rating of the merc
	L"Ekwip.", // the weight the merc is carrying
	L"Kamuf.", // the merc's camouflage rating
	L"Kamufla�:",
	L"Ochrona:",
};

STR16 pShortAttributeStrings[] =
{
	L"Zwn", // the abbreviated version of : agility
	L"Zrc", // dexterity
	L"Si�", // strength
	L"Dow", // leadership
	L"Int", // wisdom
	L"Do�", // experience level
	L"Str", // marksmanship skill
	L"Wyb", // explosive skill
	L"Mec", // mechanical skill
	L"Med", // medical skill
};


STR16 pUpperLeftMapScreenStrings[] =
{
	L"Przydzia�", // the mercs current assignment 
	L"Kontrakt", // the contract info about the merc
	L"Zdrowie", // the health level of the current merc
	L"Morale", // the morale of the current merc
	L"Stan",	// the condition of the current vehicle
	L"Paliwo",	// the fuel level of the current vehicle
};

STR16 pTrainingStrings[] =
{
	L"Praktyka", // tell merc to train self 
	L"Samoobrona", // tell merc to train town 
	L"Instruktor", // tell merc to act as trainer
	L"Ucze�", // tell merc to be train by other 
};

STR16 pGuardMenuStrings[] =
{
	L"Limit ognia:", // the allowable rate of fire for a merc who is guarding
	L" Agresywny ogie�", // the merc can be aggressive in their choice of fire rates
	L" Oszcz�dzaj amunicj�", // conserve ammo 
	L" Strzelaj w ostateczno�ci", // fire only when the merc needs to 
	L"Inne opcje:", // other options available to merc
	L" Mo�e si� wycofa�", // merc can retreat
	L" Mo�e szuka� schronienia",  // merc is allowed to seek cover
	L" Mo�e pomaga� partnerom", // merc can assist teammates
	L"OK", // done with this menu
	L"Anuluj", // cancel this menu
};

// This string has the same comments as above, however the * denotes the option has been selected by the player

STR16 pOtherGuardMenuStrings[] =
{
	L"Limit ognia:",
	L" *Agresywny ogie�*",
	L" *Oszcz�dzaj amunicj�*",
	L" *Strzelaj w ostateczno�ci*",
	L"Inne opcje:",
	L" *Mo�e si� wycofa�*",
	L" *Mo�e szuka� schronienia*",
	L" *Mo�e pomaga� partnerom*",
	L"OK",
	L"Anuluj",
};

STR16 pAssignMenuStrings[] =
{
	L"S�u�ba", // merc is on active duty
	L"Lekarz", // the merc is acting as a doctor
	L"Pacjent", // the merc is receiving medical attention
	L"Pojazd", // the merc is in a vehicle
	L"Naprawa", // the merc is repairing items 
	L"Szkolenie", // the merc is training
	L"Facility", // the merc is using/staffing a facility	// TODO.Translate
	L"Anuluj", // cancel this menu
};

//lal
STR16 pMilitiaControlMenuStrings[] =
{
	L"Atakuj", // set militia to aggresive
	L"Utrzymaj pozycj�", // set militia to stationary
	L"Wycofaj si�", // retreat militia
	L"Chod� do mnie", // retreat militia
	L"Padnij", // retreat militia	
	L"Kryj si�",
	L"Wszyscy: Atakujcie", 
	L"Wszyscy: Utrzymajcie pozycje",
	L"Wszyscy: Wycofajcie si�",
	L"Wszyscy: Chod�cie do mnie",
	L"Wszyscy: Rozproszcie si�",
	L"Wszyscy: Padnijcie",
	L"Wszyscy: Kryjcie si�",
	//L"Wszyscy: Szukajcie przedmiot�w",
	L"Anuluj", // cancel this menu
};

//STR16 pTalkToAllMenuStrings[] =
//{
//	L"Atak", // set militia to aggresive
//	L"Utrzymaj pozycj�", // set militia to stationary
//	L"Odwr�t", // retreat militia
//	L"Za mn�", // retreat militia
//	L"Padnij", // retreat militia		 
//	L"Anuluj", // cancel this menu
//};

STR16 pRemoveMercStrings[] =
{
	L"Usu� najemnika", // remove dead merc from current team
	L"Anuluj",
};

STR16 pAttributeMenuStrings[] =
{
	L"Si�a",
	L"Zr�czno��",
	L"Zwinno��",
	L"Zdrowie",
	L"Um. strzeleckie",
	L"Wiedza med.",
	L"Zn. mechaniki",
	L"Um. dowodzenia",
	L"Zn. mat. wyb.",
	L"Anuluj",
};

STR16 pTrainingMenuStrings[] =
{
 L"Praktyka", // train yourself 
 L"Samoobrona", // train the town 
 L"Mobile Militia",		// TODO.Translate
 L"Instruktor", // train your teammates 
 L"Ucze�",  // be trained by an instructor 
 L"Anuluj", // cancel this menu
};


STR16 pSquadMenuStrings[] =
{
	L"Oddzia�  1",
	L"Oddzia�  2",
	L"Oddzia�  3",
	L"Oddzia�  4",
	L"Oddzia�  5",
	L"Oddzia�  6",
	L"Oddzia�  7",
	L"Oddzia�  8",
	L"Oddzia�  9",
	L"Oddzia� 10",
	L"Oddzia� 11",
	L"Oddzia� 12",
	L"Oddzia� 13",
	L"Oddzia� 14",
	L"Oddzia� 15",
	L"Oddzia� 16",
	L"Oddzia� 17",
	L"Oddzia� 18",
	L"Oddzia� 19",
	L"Oddzia� 20",
	L"Anuluj",
};

STR16 pPersonnelTitle[] =
{
	L"Personel", // the title for the personnel screen/program application
};

STR16 pPersonnelScreenStrings[] =
{
	L"Zdrowie: ", // health of merc
	L"Zwinno��: ", 
	L"Zr�czno��: ",
 	L"Si�a: ",
 	L"Um. dowodzenia: ",
 	L"Inteligencja: ",
 	L"Poziom do�w.: ", // experience level
 	L"Um. strzeleckie: ", 
 	L"Zn. mechaniki: ",
 	L"Zn. mat. wybuchowych: ",
 	L"Wiedza medyczna: ",
 	L"Zastaw na �ycie: ", // amount of medical deposit put down on the merc
 	L"Bie��cy kontrakt: ", // cost of current contract
 	L"Liczba zab�jstw: ", // number of kills by merc
 	L"Liczba asyst: ", // number of assists on kills by merc
 	L"Dzienny koszt:", // daily cost of merc
 	L"Og�lny koszt:", // total cost of merc
 	L"Warto�� kontraktu:", // cost of current contract
 	L"Us�ugi og�em", // total service rendered by merc
 	L"Zaleg�a kwota", // amount left on MERC merc to be paid
 	L"Celno��:", // percentage of shots that hit target
 	L"Ilo�� walk:", // number of battles fought
 	L"Ranny(a):", // number of times merc has been wounded
 	L"Umiej�tno�ci:",
 	L"Brak umi�j�tno�ci",
	L"Osi�gni�cia:", // added by SANDRO
};

// SANDRO - helptexts for merc records
STR16 pPersonnelRecordsHelpTexts[] =
{
	L"Elitarni: %d\n",
	L"Regularni: %d\n",
	L"Administratorzy: %d\n",
	L"Wrodzy Cywile: %d\n",
	L"Stworzenia: %d\n",
	L"Czo�gi: %d\n", 
	L"Inne: %d\n",

	L"Do najemnik�w: %d\n",
	L"Milicja: %d\n",
	L"Inni: %d\n",

	L"Strza��w: %d\n",
	L"Wystrzelonych Pocisk�w: %d\n",
	L"Rzuconych Granat�w: %d\n",
	L"Rzuconych No�y: %d\n",
	L"Atak�w No�em: %d\n",
	L"Atak�w Wr�cz: %d\n",
	L"Udanych Trafie�: %d\n",

	L"Zamki Otwarte Wytrychem: %d\n",
	L"Zamki Wy�amane: %d\n",
	L"Usuni�te Pu�apka: %d\n",
	L"Zdetonowane �adunki: %d\n",
	L"Naprawione Przedmioty: %d\n",
	L"Po��czone Przedmioty: %d\n",
	L"Ukradzione Przedmioty: %d\n",
	L"Wytrenowana Milicja: %d\n",
	L"Zabanda�owani Najemnicy: %d\n",
	L"Wykonane Operacje Chirurgiczne: %d\n",
	L"Spotkani NPC: %d\n",
	L"Odkryte Sektory: %d\n",
	L"Unikni�te Zasadzki: %d\n",
	L"Wykonane Zadania: %d\n",

	L"Bitwy Taktyczne: %d\n",
	L"Bitwy Autorozstrzygni�te: %d\n",
	L"Wykonane Odwroty: %d\n",
	L"Napotkanych Zasadzek: %d\n",
	L"Najwi�ksza Walka: %d Wrog�w\n",

	L"Postrzelony: %d\n",
	L"Ugodzony No�em: %d\n",
	L"Uderzony: %d\n",
	L"Wysadzony W Powietrze: %d\n",
	L"Uszkodzonych Atrybut�w: %d\n",
	L"Poddany Zabiegom Chirurgicznym: %d\n",
	L"Wypadk�w Przy Pracy: %d\n",

	L"Charakter:",
	L"Niepe�nosprawno��:",
};


//These string correspond to enums used in by the SkillTrait enums in SoldierProfileType.h
STR16 gzMercSkillText[] = 
{
	L"Brak umiej�tno�ci",
	L"Otwieranie zamk�w",
	L"Walka wr�cz",		//JA25: modified
	L"Elektronika",
	L"Nocne operacje",			//JA25: modified
	L"Rzucanie",
	L"Szkolenie",
	L"Ci�ka bro�",
	L"Bro� automatyczna",
	L"Skradanie si�",
	L"Obur�czno��",
	L"Kradzie�",
	L"Sztuki walki",
	L"Bro� bia�a",
	L"Snajper",				//JA25: modified
	L"Kamufla�",						//JA25: modified
	// SANDRO - removed this
	//L"Kamufla� (miasto)",
	//L"Kamufla� (pustynia)",
	//L"Kamufla� (�nieg)",
	L"(Eksp.)",
};

//////////////////////////////////////////////////////////
// SANDRO - added this
STR16 gzMercSkillTextNew[] = 
{
// Major traits
L"Brak Umiej�tno�ci",
L"Bro� Automatyczna",
L"Bro� Ci�ka",
L"Strzelec Wyborowy",
L"My�liwy",
L"Pistolero",
L"Walka Wr�cz",
L"Zast�pca Szeryfa",
L"Technik",
L"Paramedyk",
// Minor traits
L"Obur�czno��",
L"Walka Wr�cz",
L"Rzucanie",
L"Operacje Nocne",
L"Ukradkowo��",
L"Atletyka",
L"Bodybuilding",
L"�adunki Wybuchowe",
L"Uczenie",
L"Zwiad",
// second names for major skills
L"Strzelec RKMu",
L"Bombardier",
L"Snajper",
L"My�liwy",
L"Pistolero",
L"Sztuki Walki",
L"Dow�dca Dru�yny",
L"In�ynier",
L"Doktor",
L"Wi�cej...",
};
//////////////////////////////////////////////////////////


// This is pop up help text for the options that are available to the merc

STR16 pTacticalPopupButtonStrings[] =
{
	L"W|sta�/Id�",
	L"S|chyl si�/Id�",
	L"Wsta�/Biegnij (|R)",
	L"|Padnij/Czo�gaj si�",
	L"Patrz (|L)",
	L"Akcja",
	L"Rozmawiaj",
	L"Zbadaj (|C|t|r|l)",

	// Pop up door menu
	L"Otw�rz",
	L"Poszukaj pu�apek",
	L"U�yj wytrych�w",
	L"Wywa�",
	L"Usu� pu�apki",
	L"Zamknij na klucz",
	L"Otw�rz kluczem",
	L"U�yj �adunku wybuchowego",
	L"U�yj �omu",
	L"Anuluj (|E|s|c)",
	L"Zamknij"
};

// Door Traps. When we examine a door, it could have a particular trap on it. These are the traps.

STR16 pDoorTrapStrings[] =
{
	L"nie posiada �adnych pu�apek",
	L"ma za�o�ony �adunek wybuchowy",
	L"jest pod napi�ciem",
	L"posiada syren� alarmow�",
	L"posiada dyskretny alarm"
};

// Contract Extension. These are used for the contract extension with AIM mercenaries.

STR16 pContractExtendStrings[] =
{
	L"dzie�",
	L"tydzie�",
	L"dwa tygodnie",
};

// On the map screen, there are four columns. This text is popup help text that identifies the individual columns.

STR16 pMapScreenMouseRegionHelpText[] =
{
	L"Wyb�r postaci",
	L"Przydzia� najemnika",
	L"Nanie� tras� podr�y",
	L"Kontrakt najemnika",
	L"Usu� najemnika",
	L"�pij", 
};

// volumes of noises 

STR16 pNoiseVolStr[] =
{
	L"CICHY",
	L"WYRA�NY",
	L"G�O�NY",
	L"BARDZO G�O�NY"
};

// types of noises 

STR16 pNoiseTypeStr[] = // OBSOLETE
{
	L"NIEOKRE�LONY D�WI�K",
	L"ODG�OS RUCHU",
	L"ODG�OS SKRZYPNI�CIA",
	L"PLUSK",
	L"ODG�OS UDERZENIA",
	L"STRZA�",
	L"WYBUCH",
	L"KRZYK",
	L"ODG�OS UDERZENIA",
	L"ODG�OS UDERZENIA",
	L"�OMOT",
	L"TRZASK"
};

// Directions that are used to report noises

STR16 pDirectionStr[] = 
{
	L"P�N-WSCH",
	L"WSCH",
	L"P�D-WSCH",
	L"P�D",
	L"P�D-ZACH",
	L"ZACH",
	L"P�N-ZACH",
	L"P�N"
};

// These are the different terrain types. 

STR16 pLandTypeStrings[] =
{
	L"Miasto",
	L"Droga",
	L"Otwarty teren",
	L"Pustynia",
	L"Las",
	L"Las",	 
	L"Bagno",
	L"Woda",	
	L"Wzg�rza",
	L"Teren nieprzejezdny",
	L"Rzeka",	//river from north to south
	L"Rzeka",	//river from east to west
	L"Terytorium innego kraju",
	//NONE of the following are used for directional travel, just for the sector description.
	L"Tropiki",
	L"Pola uprawne",
	L"Otwarty teren, droga",
	L"Las, droga",
	L"Las, droga",
	L"Tropiki, droga",
	L"Las, droga",
	L"Wybrze�e",
	L"G�ry, droga",
	L"Wybrze�e, droga",
	L"Pustynia, droga",
	L"Bagno, droga",
	L"Las, Rakiety Z-P",
	L"Pustynia, Rakiety Z-P",
	L"Tropiki, Rakiety Z-P",
	L"Meduna, Rakiety Z-P",
	
	//These are descriptions for special sectors
	L"Szpital w Cambrii",
	L"Lotnisko w Drassen",
	L"Lotnisko w Medunie",
	L"Rakiety Z-P",
	L"Kryj�wka rebeliant�w", //The rebel base underground in sector A10
	L"Tixa - Lochy",	//The basement of the Tixa Prison (J9)
	L"Gniazdo stworze�",	//Any mine sector with creatures in it
	L"Orta - Piwnica",	//The basement of Orta (K4)
	L"Tunel",				//The tunnel access from the maze garden in Meduna 
						//leading to the secret shelter underneath the palace
	L"Schron",				//The shelter underneath the queen's palace
	L"",							//Unused
};

STR16 gpStrategicString[] =
{
	L"",	//Unused
	L"%s wykryto w sektorze %c%d, a inny oddzia� jest w drodze.",	//STR_DETECTED_SINGULAR
	L"%s wykryto w sektorze %c%d, a inne oddzia�y s� w drodze.",	//STR_DETECTED_PLURAL
	L"Chcesz skoordynowa� jednoczesne przybycie?",			//STR_COORDINATE

	//Dialog strings for enemies.

	L"Wr�g daje ci szans� si� podda�.",			//STR_ENEMY_SURRENDER_OFFER
	L"Wr�g schwyta� reszt� twoich nieprzytomnych najemnik�w.",	//STR_ENEMY_CAPTURED

	//The text that goes on the autoresolve buttons							

	L"Odwr�t", 		//The retreat button				//STR_AR_RETREAT_BUTTON
	L"OK",		//The done button				//STR_AR_DONE_BUTTON

	//The headers are for the autoresolve type (MUST BE UPPERCASE)

	L"OBRONA",								//STR_AR_DEFEND_HEADER
	L"ATAK",								//STR_AR_ATTACK_HEADER
	L"STARCIE",								//STR_AR_ENCOUNTER_HEADER
	L"Sektor",		//The Sector A9 part of the header		//STR_AR_SECTOR_HEADER

	//The battle ending conditions						

	L"ZWYCI�STWO!",								//STR_AR_OVER_VICTORY
	L"PORA�KA!",								//STR_AR_OVER_DEFEAT
	L"KAPITULACJA!",							//STR_AR_OVER_SURRENDERED
	L"NIEWOLA!",								//STR_AR_OVER_CAPTURED
	L"ODWR�T!",								//STR_AR_OVER_RETREATED

	//These are the labels for the different types of enemies we fight in autoresolve.

	L"Samoobrona",							//STR_AR_MILITIA_NAME,
	L"Elity",								//STR_AR_ELITE_NAME,
	L"�o�nierze",								//STR_AR_TROOP_NAME,
	L"Administrator",							//STR_AR_ADMINISTRATOR_NAME,
	L"Stworzenie",								//STR_AR_CREATURE_NAME,

	//Label for the length of time the battle took

	L"Czas trwania",							//STR_AR_TIME_ELAPSED,

	//Labels for status of merc if retreating.  (UPPERCASE)			

	L"WYCOFA�(A) SI�",								//STR_AR_MERC_RETREATED,
	L"WYCOFUJE SI�",								//STR_AR_MERC_RETREATING,
	L"WYCOFAJ SI�",								//STR_AR_MERC_RETREAT,

	//PRE BATTLE INTERFACE STRINGS 
	//Goes on the three buttons in the prebattle interface.  The Auto resolve button represents
	//a system that automatically resolves the combat for the player without having to do anything.
	//These strings must be short (two lines -- 6-8 chars per line)

	L"Rozst. autom.",							//STR_PB_AUTORESOLVE_BTN,
	L"Id� do sektora",							//STR_PB_GOTOSECTOR_BTN,
	L"Wycof. ludzi",							//STR_PB_RETREATMERCS_BTN,

	//The different headers(titles) for the prebattle interface.
	L"STARCIE Z WROGIEM",							//STR_PB_ENEMYENCOUNTER_HEADER,
	L"INWAZJA WROGA",							//STR_PB_ENEMYINVASION_HEADER, // 30
	L"ZASADZKA WROGA",								//STR_PB_ENEMYAMBUSH_HEADER
	L"WEJ�CIE DO WROGIEGO SEKTORA",				//STR_PB_ENTERINGENEMYSECTOR_HEADER
	L"ATAK STWOR�W",							//STR_PB_CREATUREATTACK_HEADER
	L"ATAK DZIKICH KOT�W",							//STR_PB_BLOODCATAMBUSH_HEADER
	L"WEJ�CIE DO LEGOWISKA DZIKICH KOT�W",			//STR_PB_ENTERINGBLOODCATLAIR_HEADER

	//Various single words for direct translation.  The Civilians represent the civilian
	//militia occupying the sector being attacked.  Limited to 9-10 chars

	L"Po�o�enie",
	L"Wrogowie",
	L"Najemnicy",
	L"Samoobrona",
	L"Stwory",
	L"Dzikie koty",
	L"Sektor",
	L"Brak",		//If there are no uninvolved mercs in this fight.
	L"N/D",			//Acronym of Not Applicable
	L"d",			//One letter abbreviation of day
	L"g",			//One letter abbreviation of hour

	//TACTICAL PLACEMENT USER INTERFACE STRINGS
	//The four buttons 

	L"Wyczy��",
	L"Rozprosz",
	L"Zgrupuj",
	L"OK",

	//The help text for the four buttons.  Use \n to denote new line (just like enter).

	L"Kasuje wszystkie pozy|cje najemnik�w, \ni pozwala ponownie je wprowadzi�.", 
	L"Po ka�dym naci�ni�ciu rozmie|szcza\nlosowo twoich najemnik�w.",
	L"|Grupuje najemnik�w w wybranym miejscu.",
	L"Kliknij ten klawisz gdy ju� rozmie�cisz \nswoich najemnik�w. (|E|n|t|e|r)",
	L"Musisz rozmie�ci� wszystkich najemnik�w \nzanim rozpoczniesz walk�.",

	//Various strings (translate word for word)

	L"Sektor",
	L"Wybierz pocz�tkowe pozycje",

	//Strings used for various popup message boxes.  Can be as long as desired.

	L"To miejsce nie jest zbyt dobre. Jest niedost�pne. Spr�buj gdzie indziej.",
	L"Rozmie�� swoich najemnik�w na pod�wietlonej cz�ci mapy.",

	//This message is for mercs arriving in sectors.  Ex:  Red has arrived in sector A9.
	//Don't uppercase first character, or add spaces on either end.

	L"przyby�(a) do sektora", 

	//These entries are for button popup help text for the prebattle interface.  All popup help
	//text supports the use of \n to denote new line.  Do not use spaces before or after the \n.
	L"Automatycznie prowadzi walk� za ciebie, \nnie �aduj�c planszy. (|A)",
	L"Atakuj�c sektor wroga \nnie mo�na automatycznie rozstrzygn�� walki.",
	L"Wej�cie do sektora \nby nawi�za� walk� z wrogiem. (|E)",
	L"Wycofuje oddzia� \ndo s�siedniego sektora. (|R)",				//singular version
	L"Wycofuje wszystkie oddzia�y \ndo s�siedniego sektora. (|R)", //multiple groups with same previous sector

	//various popup messages for battle conditions.  

	//%c%d is the sector -- ex:  A9
	L"Nieprzyjaciel zatakowa� oddzia�y samoobrony w sektorze %c%d.",
	//%c%d is the sector -- ex:  A9
	L"Stworzenia zaatakowa�y oddzia�y samoobrony w sektorze %c%d.",
	//1st %d refers to the number of civilians eaten by monsters,  %c%d is the sector -- ex:  A9
	//Note:  the minimum number of civilians eaten will be two.
	L"Stworzenia zatakowa�y i zabi�y %d cywili w sektorze %s.",
	//%c%d is the sector -- ex:  A9
	L"Nieprzyjaciel zatakowa� twoich najemnik�w w sektorze %s.  �aden z twoich najemnik�w nie mo�e walczy�!",
	//%c%d is the sector -- ex:  A9
	L"Stworzenia zatakowa�y twoich najemnik�w w sektorze %s.  �aden z twoich najemnik�w nie mo�e walczy�!",

};

STR16 gpGameClockString[] = 
{
	//This is the day represented in the game clock.  Must be very short, 4 characters max.
	L"Dzie�",	
};

//When the merc finds a key, they can get a description of it which 
//tells them where and when they found it.
STR16 sKeyDescriptionStrings[2] =
{
	L"Zn. w sektorze:",
	L"Zn. w dniu:",
};

//The headers used to describe various weapon statistics.

CHAR16		gWeaponStatsDesc[][ 17 ] =
{
	// HEADROCK: Changed this for Extended Description project
	L"Stan:",
	L"Waga:", 
	L"PA Koszty",	
	L"Zas.:",		// Range
	L"Si�a:",		// Damage
	L"Ilo��:", 		// Number of bullets left in a magazine
    L"PA:",                 // abbreviation for Action Points
	L"=",
	L"=",
						//Lal: additional strings for tooltips
	L"Celno��:",	//9
	L"Zasi�g:",		//10	
	L"Si�a:",		//11
	L"Waga:",		//12
	L"Og�uszenie:",//13
	// HEADROCK: Added new strings for extended description ** REDUNDANT **
	L"Attachments:",	//14	// TODO.Translate
	L"AUTO/5:",		//15
	L"Remaining ammo:",		//16	// TODO.Translate

	L"Domy�lne:",	//17 //WarmSteel - So we can also display default attachments

};

// HEADROCK: Several arrays of tooltip text for new Extended Description Box
// Please note, several of these are artificially inflated to 19 entries to help fix a complication with
// changing item type while watching its description box
STR16		gzWeaponStatsFasthelp[ 32 ] =
{
	L"Celno��",
	L"Obra�.",
	L"Zas.",
	L"Aiming Levels",
	L"Modf. celowania",
	L"�redni max zasg. lasera",
	L"T�umienie b�ysku",
	L"G�o�no�� (mniej - lepiej)",
	L"Stan",
	L"Trud napraw",
	L"Min. zasg. dla bonusu cel.",
	L"Modyf. trafie�",
	L"",	//12
	L"AP/przygot.",
	L"AP za 1 strza�",
	L"AP za seri�",
	L"AP za Auto",
	L"AP/prze�aduj",
	L"AP/prze�aduj r�cznie",
	L"",	//19
	L"Modf. dw�jnogu",
	L"Auto/5AP",
	L"PA: (mniej - lepiej)",	//22
	L"AP za rzut",
	L"AP za strza�",
	L"AP/cios-n�",
	L"Wy�. 1 strza�!",
	L"Wy�. seri�!",
	L"Wy�. auto!",
	L"AP/cios-�om",
	L"Autofire Penalty (Lower is better)",
    L"Burst Penalty (Lower is better)",
};

STR16		gzWeaponStatsFasthelpTactical[ 32 ] =
{
	L"Celno��",
	L"Obra�.",
	L"Zas.",
	L"Aiming Levels",
	L"Modf. celowania",
	L"�redni max zasg. lasera",
	L"T�umienie b�ysku",
	L"G�o�no�� (mniej - lepiej)",
	L"Stan",
	L"Trud napraw",
	L"Min. zasg. dla bonusu cel.",
	L"Modyf. trafie�",
	L"",	//12
	L"AP/przygot.",
	L"AP za 1 strza�",
	L"AP za seri�",
	L"AP za Auto",
	L"AP/prze�aduj",
	L"AP/prze�aduj r�cznie",
	L"",	//19
	L"Modf. dw�jnogu",
	L"Auto/5AP",
	L"PA: (mniej - lepiej)",	//22
	L"AP za rzut",
	L"AP za strza�",
	L"AP/cios-n�",
	L"Wy�. 1 strza�!",
	L"Wy�. seri�!",
	L"Wy�. auto!",
	L"AP/cios-�om",
	L"Autofire Penalty (Lower is better)",
    L"Burst Penalty (Lower is better)",
};

STR16		gzAmmoStatsFasthelp[ 20 ] =
{
	L"Penetracja os�on (mniej � lepiej)",
	L"Moc obalaj�ca (wi�cej � lepiej)",
	L"Eksplozja przed celem (wi�cej � lepiej)",
	L"Efekt smugowy",
	L"P. czo�g.",
	L"Nisc zamka",
	L"Pomija os�on�",
	L"Korozj",
	L"Modyf. zasg.",
	L"Modyf. obra�e�",
	L"Modyf. trafie�",
	L"Autofire Penalty Modifier (Higher is better)",
	L"Modyf. kary za seri� (wi�cej � lepiej)",
	L"Modyf. sprawno�ci",
	L"Modyf. g�o�no�ci (mniej - lepiej)",
	L"",
	L"",
	L"",
	L"",
	L"",
};

STR16		gzArmorStatsFasthelp[ 20 ] =
{
	L"Os�ona",
	L"Pokrycie (wi�cej - lepiej)",
	L"Zu�ycie (mniej - lepiej)",
	L"Modyf. AP",
	L"Modyf. trafie�",
	L"Kam le�ny",
	L"Kam miasto",
	L"Kam pustyn.",
	L"Kam �nieg",
	L"Modyf. skradania",
	L"Modyf. zasg. wzroku",
	L"Modyf. zasg. wzroku/dzie�",
	L"Modyf. zasg. wzroku/noc",
	L"Modyf. zasg. wzroku/jasne �wiat�o",
	L"Modyf. zasg. wzr./jaskinia",
	L"Widzenie tunelowe (w %)",
	L"Modyf. zasg. s�uchu",
	L"",
	L"",
	L"",
};

STR16		gzExplosiveStatsFasthelp[ 20 ] =
{
	L"Obra�.",
	L"Og�uszanie",
	L"G�o�n. wybuchu (mniej - lepiej)",
	L"Niestabilno��! (mniej - lepiej)",
	L"Zsg. wybuchu",
	L"Zsg efektu pocz�tk.",
	L"Zsg. efektu ko�cow.",
	L"Trwanie efektu",
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
	L"Modyf. rozmiaru (mniej - lepiej)", // 0
	L"Modyf. sprawno�ci",
	L"Modyf. g�o�no�ci (mniej - lepiej)",
	L"Ukrywa b�ysk",
	L"Modf. dw�jnogu",
	L"Modyf. zasi�gu", // 5
	L"Modyf. trafie�",
	L"Max zasg. lasera",
	L"Modf bonusu celowania",
	L"Modyf. d�ug. serii",
	L"Modyf. kary za seri� (wi�cej - lepiej)", // 10
	L"Modyf. kary za ogie� auto (wi�cej - lepiej)",
	L"Modyf. AP",
	L"Modyf. AP za seri� (mniej - lepiej)",
	L"Modyf. AP za ogie� auto (mniej - lepiej)",
	L"Modf AP/przygotwanie (mniej - lepiej)", // 15
	L"Modf AP/prze�adowanie (mniej - lepiej)",
	L"Modyf. wlk. magazynka",
	L"Modyf. AP/atak (mniej - lepiej)",
	L"Modyf. obra�e�",
	L"Modf obr. walki wr�cz", // 20
	L"Kam le�ny",
	L"Kam miasto",
	L"Kam pustyn.",
	L"Kam �nieg",
	L"Modyf. skradania", // 25
	L"Modyf. zasg. s�uchu",
	L"Modyf. zasg. wzroku",
	L"Modyf. zasg. wzroku/dzie�",
	L"Modyf. zasg. wzroku/noc",
	L"Modyf. zasg. wzroku/jasne �wiat�o", //30
	L"Modyf. zasg. wzr./jaskinia",
	L"Widzenie tunelowe w % (mniej - lepiej)",
	L"Min. zasg. dla bonusu cel.",
};

// HEADROCK: End new tooltip text

// HEADROCK HAM 4: New condition-based text similar to JA1.
STR16 gConditionDesc[] =
{
	L"In ",
	L"PERFECT",
	L"EXCELLENT",
	L"GOOD",
	L"FAIR",
	L"POOR",
	L"BAD",
	L"TERRIBLE",
	L" condition."
};

//The headers used for the merc's money.

CHAR16 gMoneyStatsDesc[][ 13 ] =
{
	L"Kwota",
	L"Pozosta�o:", //this is the overall balance
	L"Kwota",
	L"Wydzieli�:", // the amount he wants to separate from the overall balance to get two piles of money

	L"Bie��ce",
	L"Saldo",
	L"Kwota do",
	L"podj�cia",
};

//The health of various creatures, enemies, characters in the game. The numbers following each are for comment
//only, but represent the precentage of points remaining. 

CHAR16 zHealthStr[][13] =
{
	L"UMIERAJ�CY",		//	>= 0
	L"KRYTYCZNY", 		//	>= 15
	L"KIEPSKI",		//	>= 30
	L"RANNY",    	//	>= 45
	L"ZDROWY",    	//	>= 60
	L"SILNY",     	// 	>= 75
	L"DOSKONA�Y",		// 	>= 90
};

STR16	gzMoneyAmounts[6] = 
{ 
	L"$1000",
	L"$100",
	L"$10",
	L"OK",
	L"Wydziel",
	L"Podejmij",
};

// short words meaning "Advantages" for "Pros" and "Disadvantages" for "Cons." 
CHAR16		gzProsLabel[10] = 
{
	L"Zalety:",
};

CHAR16		gzConsLabel[10] = 
{
	L"Wady:",
};

//Conversation options a player has when encountering an NPC
CHAR16 zTalkMenuStrings[6][ SMALL_STRING_LENGTH ] =
{
	L"Powt�rz", 	//meaning "Repeat yourself"
	L"Przyja�nie",		//approach in a friendly
	L"Bezpo�rednio",		//approach directly - let's get down to business
	L"Gro�nie",		//approach threateningly - talk now, or I'll blow your face off
	L"Daj",		
	L"Rekrutuj",
};

//Some NPCs buy, sell or repair items. These different options are available for those NPCs as well.
CHAR16 zDealerStrings[4][ SMALL_STRING_LENGTH ]=
{
	L"Kup/Sprzedaj",
	L"Kup",
	L"Sprzedaj",
	L"Napraw",
};

CHAR16 zDialogActions[1][ SMALL_STRING_LENGTH ] = 
{
	L"OK",
};


//These are vehicles in the game.

STR16 pVehicleStrings[] =
{
 L"Eldorado",
 L"Hummer", // a hummer jeep/truck -- military vehicle
 L"Furgonetka z lodami",
 L"Jeep",
 L"Czo�g",
 L"Helikopter",
};

STR16 pShortVehicleStrings[] =
{
	L"Eldor.",
	L"Hummer",			// the HMVV
	L"Furg.",
	L"Jeep",
	L"Czo�g",
	L"Heli.", 				// the helicopter
};

STR16	zVehicleName[] =
{
	L"Eldorado",
	L"Hummer",		//a military jeep. This is a brand name.
	L"Furg.",			// Ice cream truck
	L"Jeep",
	L"Czo�g",
	L"Heli.", 		//an abbreviation for Helicopter
};


//These are messages Used in the Tactical Screen

CHAR16 TacticalStr[][ MED_STRING_LENGTH ] =
{
	L"Nalot",
	L"Udzieli� automatycznie pierwszej pomocy?",
	
	// CAMFIELD NUKE THIS and add quote #66.
	
	L"%s zauwa�y�(a) �e dostawa jest niekompletna.",
	
	// The %s is a string from pDoorTrapStrings
	
	L"Zamek %s.", 
	L"Brak zamka.",
	L"Sukces!",
	L"Niepowodzenie.",
	L"Sukces!",
	L"Niepowodzenie.",
	L"Zamek nie ma pu�apek.",
	L"Sukces!",
	// The %s is a merc name
	L"%s nie posiada odpowiedniego klucza.",
	L"Zamek zosta� rozbrojony.",
	L"Zamek nie ma pu�apek.",
	L"Zamkni�te.",
	L"DRZWI",
	L"ZABEZP.",
	L"ZAMKNI�TE",
	L"OTWARTE",
	L"ROZWALONE",
	L"Tu jest prze��cznik. W��czy� go?",
	L"Rozbroi� pu�apk�?",
	L"Poprz...",
	L"Nast...",
	L"Wi�cej...",

	// In the next 2 strings, %s is an item name

	L"%s - po�o�ono na ziemi.",
	L"%s - przekazano do - %s.",

	// In the next 2 strings, %s is a name

	L"%s otrzyma�(a) ca�� zap�at�.",
	L"%s - nale�no�� wobec niej/niego wynosi jeszcze %d.",
	L"Wybierz cz�stotliwo�� sygna�u detonuj�cego:",  	//in this case, frequency refers to a radio signal
	L"Ile tur do eksplozji:",	//how much time, in turns, until the bomb blows
	L"Ustaw cz�stotliwo�� zdalnego detonatora:", 	//in this case, frequency refers to a radio signal
	L"Rozbroi� pu�apk�?",
	L"Usun�� niebiesk� flag�?",
	L"Umie�ci� tutaj niebiesk� flag�?",
	L"Ko�cz�ca tura",

	// In the next string, %s is a name. Stance refers to way they are standing.

	L"Na pewno chcesz zaatakowa� - %s?",
	L"Pojazdy nie mog� zmienia� pozycji.",
	L"Robot nie mo�e zmienia� pozycji.",

	// In the next 3 strings, %s is a name

	L"%s nie mo�e zmieni� pozycji w tym miejscu.",
	L"%s nie mo�e tu otrzyma� pierwszej pomocy.",	
	L"%s nie potrzebuje pierwszej pomocy.",
	L"Nie mo�na ruszy� w to miejsce.",
	L"Oddzia� jest ju� kompletny. Nie ma miejsca dla nowych rekrut�w.",	//there's no room for a recruit on the player's team

	// In the next string, %s is a name

	L"%s pracuje ju� dla ciebie.",

	// Here %s is a name and %d is a number

	L"%s - nale�no�� wobec niej/niego wynosi %d$.",

	// In the next string, %s is a name

	L"%s - Eskortowa� t� osob�?",

	// In the next string, the first %s is a name and the second %s is an amount of money (including $ sign)

	L"%s - Zatrudni� t� osob� za %s dziennie?",

	// This line is used repeatedly to ask player if they wish to participate in a boxing match. 

	L"Chcesz walczy�?",

	// In the next string, the first %s is an item name and the 
	// second %s is an amount of money (including $ sign)

	L"%s - Kupi� to za %s?",

	// In the next string, %s is a name

	L"%s jest pod eskort� oddzia�u %d.",

	// These messages are displayed during play to alert the player to a particular situation

	L"ZACI�TA",					//weapon is jammed.
	L"Robot potrzebuje amunicji kaliber %s.",		//Robot is out of ammo
	L"Rzuci� tam? To niemo�liwe.",		//Merc can't throw to the destination he selected

	// These are different buttons that the player can turn on and off.

	L"Skradanie si� (|Z)",
	L"Ekran |Mapy",
	L"Koniec tury (|D)",
	L"Rozmowa",
	L"Wycisz",
	L"Pozycja do g�ry (|P|g|U|p)",
	L"Poziom kursora (|T|a|b)",
	L"Wspinaj si� / Zeskocz (|J)",
	L"Pozycja w d� (|P|g|D|n)",
	L"Bada� (|C|t|r|l)",
	L"Poprzedni najemnik",
	L"Nast�pny najemnik (|S|p|a|c|j|a)",
	L"|Opcje",
	L"Ci�g�y ogie� (|B)",
	L"Sp�jrz/Obr�� si� (|L)",
	L"Zdrowie: %d/%d\nEnergia: %d/%d\nMorale: %s",
	L"Co?",					//this means "what?"
	L"Kont",					//an abbrieviation for "Continued"
	L"%s ma w��czone potwierdzenia g�osowe.",
	L"%s ma wy��czone potwierdzenia g�osowe.",
	L"Stan: %d/%d\nPaliwo: %d/%d",
	L"Wysi�d� z pojazdu" ,
	L"Zmie� oddzia� ( |S|h|i|f|t |S|p|a|c|j|a )",
	L"Prowad�",
	L"N/D",						//this is an acronym for "Not Applicable."
	L"U�yj ( Walka wr�cz )",
	L"U�yj ( Broni palnej )",
	L"U�yj ( Broni bia�ej )",
	L"U�yj ( Mat. wybuchowych )",
	L"U�yj ( Apteczki )",
	L"(�ap)",
	L"(Prze�aduj)",
	L"(Daj)",
	L"%s - pu�apka zosta�a uruchomiona.",
	L"%s przyby�(a) na miejsce.",
	L"%s straci�(a) wszystkie Punkty Akcji.",
	L"%s jest nieosi�galny(na).",
	L"%s ma ju� za�o�one opatrunki.",
	L"%s nie ma banda�y.",
	L"Wr�g w sektorze!",
	L"Nie ma wroga w zasi�gu wzroku.",
	L"Zbyt ma�o Punkt�w Akcji.",
	L"Nikt nie u�ywa zdalnego sterowania.",
	L"Ci�g�y ogie� opr�ni� magazynek!",
	L"�O�NIERZ",
	L"STW�R",
	L"SAMOOBRONA",
	L"CYWIL",
	L"Wyj�cie z sektora",
	L"OK",
	L"Anuluj",
	L"Wybrany najemnik",
	L"Wszyscy najemnicy w oddziale",
	L"Id� do sektora",
	L"Otw�rz map�",
	L"Nie mo�na opu�ci� sektora z tej strony.",
	L"%s jest zbyt daleko.",
	L"Usu� korony drzew",
	L"Poka� korony drzew",
	L"WRONA",				//Crow, as in the large black bird
	L"SZYJA",
	L"G�OWA",
	L"TU��W",
	L"NOGI",
	L"Powiedzie� kr�lowej to, co chce wiedzie�?",
	L"Wz�r odcisku palca pobrany",
	L"Niew�a�ciwy wz�r odcisku palca. Bro� bezu�yteczna.",
	L"Cel osi�gni�ty",
	L"Droga zablokowana",
	L"Wp�ata/Podj�cie pieni�dzy",		//Help text over the $ button on the Single Merc Panel 
	L"Nikt nie potrzebuje pierwszej pomocy.",
	L"Zac.",						// Short form of JAMMED, for small inv slots
	L"Nie mo�na si� tam dosta�.",					// used ( now ) for when we click on a cliff
	L"Przej�cie zablokowane. Czy chcesz zamieni� si� miejscami z t� osob�?",
	L"Osoba nie chce si� przesun��.",
	// In the following message, '%s' would be replaced with a quantity of money (e.g. $200)
	L"Zgadzasz si� zap�aci� %s?",
	L"Zgadzasz si� na darmowe leczenie?",
	L"Zgadasz si� na ma��e�stwo z Darylem?",
	L"K�ko na klucze",
	L"Nie mo�esz tego zrobi� z eskortowan� osob�.",
	L"Oszcz�dzi� Krotta?",
	L"Poza zasi�giem broni",
	L"G�rnik",
	L"Pojazdem mo�na podr�owa� tylko pomi�dzy sektorami",
	L"Teraz nie mo�na automatycznie udzieli� pierwszej pomocy",
	L"Przej�cie zablokowane dla - %s",
	L"Twoi najemnicy, schwytani przez �o�nierzy Deidranny, s� tutaj uwi�zieni!",
	L"Zamek zosta� trafiony",
	L"Zamek zosta� zniszczony",
	L"Kto� inny majstruje przy tych drzwiach.",
	L"Stan: %d/%d\nPaliwo: %d/%d",
	L"%s nie widzi - %s.",  // Cannot see person trying to talk to
	L"Dodatek usuni�ty",
	L"Nie mo�esz zdoby� kolejnego pojazdu, poniewa� posiadasz ju� 2",
};

//Varying helptext explains (for the "Go to Sector/Map" checkbox) what will happen given different circumstances in the "exiting sector" interface.
STR16 pExitingSectorHelpText[] =
{
	//Helptext for the "Go to Sector" checkbox button, that explains what will happen when the box is checked.
	L"Je�li zaznaczysz t� opcj�, to s�siedni sektor zostanie natychmiast za�adowany.",
	L"Je�li zaznaczysz t� opcj�, to na czas podr�y pojawi si� automatycznie ekran mapy.",

	//If you attempt to leave a sector when you have multiple squads in a hostile sector.
	L"Ten sektor jest okupowany przez wroga i nie mo�esz tu zostawi� najemnik�w.\nMusisz upora� si� z t� sytuacj� zanim za�adujesz inny sektor.",

	//Because you only have one squad in the sector, and the "move all" option is checked, the "go to sector" option is locked to on. 
	//The helptext explains why it is locked.
	L"Gdy wyprowadzisz swoich pozosta�ych najemnik�w z tego sektora,\ns�siedni sektor zostanie automatycznie za�adowany.",
	L"Gdy wyprowadzisz swoich pozosta�ych najemnik�w z tego sektora,\nto na czas podr�y pojawi si� automatycznie ekran mapy.",

	//If an EPC is the selected merc, it won't allow the merc to leave alone as the merc is being escorted.  The "single" button is disabled.
	L"%s jest pod eskort� twoich najemnik�w i nie mo�e bez nich opu�ci� tego sektora.",

	//If only one conscious merc is left and is selected, and there are EPCs in the squad, the merc will be prohibited from leaving alone.
	//There are several strings depending on the gender of the merc and how many EPCs are in the squad.
	//DO NOT USE THE NEWLINE HERE AS IT IS USED FOR BOTH HELPTEXT AND SCREEN MESSAGES!
	L"%s nie mo�e sam opu�ci� tego sektora, gdy� %s jest pod jego eskort�.", //male singular
	L"%s nie mo�e sama opu�ci� tego sektora, gdy� %s jest pod jej eskort�.", //female singular
	L"%s nie mo�e sam opu�ci� tego sektora, gdy� eskortuje inne osoby.", //male plural
	L"%s nie mo�e sama opu�ci� tego sektora, gdy� eskortuje inne osoby.", //female plural

	//If one or more of your mercs in the selected squad aren't in range of the traversal area, then the  "move all" option is disabled,
	//and this helptext explains why.
	L"Wszyscy twoi najemnicy musz� by� w pobli�u,\naby oddzia� m�g� si� przemieszcza�.",

	L"", //UNUSED

	//Standard helptext for single movement.  Explains what will happen (splitting the squad)
	L"Je�li zaznaczysz t� opcj�, %s b�dzie podr�owa� w pojedynk�\ni automatycznie znajdzie si� w osobnym oddziale.",

	//Standard helptext for all movement.  Explains what will happen (moving the squad)
	L"Je�li zaznaczysz t� opcj�, aktualnie\nwybrany oddzia� opu�ci ten sektor.",

	//This strings is used BEFORE the "exiting sector" interface is created.  If you have an EPC selected and you attempt to tactically
	//traverse the EPC while the escorting mercs aren't near enough (or dead, dying, or unconscious), this message will appear and the
	//"exiting sector" interface will not appear.  This is just like the situation where
	//This string is special, as it is not used as helptext.  Do not use the special newline character (\n) for this string.
	L"%s jest pod eskort� twoich najemnik�w i nie mo�e bez nich opu�ci� tego sektora. Aby opu�ci� sektor twoi najemnicy musz� by� w pobli�u.",
};



STR16 pRepairStrings[] = 
{
	L"Wyposa�enie", 		// tell merc to repair items in inventory
	L"Baza rakiet Z-P", // tell merc to repair SAM site - SAM is an acronym for Surface to Air Missile
	L"Anuluj", 		// cancel this menu
	L"Robot", 		// repair the robot
};


// NOTE: combine prestatbuildstring with statgain to get a line like the example below.
// "John has gained 3 points of marksmanship skill." 

STR16 sPreStatBuildString[] =
{
	L"traci", 		// the merc has lost a statistic
	L"zyskuje", 		// the merc has gained a statistic
	L"pkt.",	// singular
	L"pkt.",	// plural
	L"pkt.",	// singular
	L"pkt.",	// plural
};

STR16 sStatGainStrings[] =
{
	L"zdrowia.",
	L"zwinno�ci.",
	L"zr�czno�ci.",
	L"inteligencji.",
	L"umiej�tno�ci medycznych.",
	L"umiej�tno�ci w dziedzinie materia��w wybuchowych.",
	L"umiej�tno�ci w dziedzinie mechaniki.",
	L"umiej�tno�ci strzeleckich.",
	L"do�wiadczenia.",
	L"si�y.",
	L"umiej�tno�ci dowodzenia.",
};


STR16 pHelicopterEtaStrings[] =
{
	L"Ca�kowita trasa:  ",// total distance for helicopter to travel
	L" Bezp.:   ", 			// distance to travel to destination
	L" Niebezp.:", 			// distance to return from destination to airport
	L"Ca�kowity koszt: ", 		// total cost of trip by helicopter
	L"PCP:  ", 			// ETA is an acronym for "estimated time of arrival" 
	L"Helikopter ma ma�o paliwa i musi wyl�dowa� na terenie wroga.",	// warning that the sector the helicopter is going to use for refueling is under enemy control -> 
  L"Pasa�erowie: ",
  L"Wyb�r Skyridera lub pasa�er�w?",
  L"Skyrider",
  L"Pasa�erowie",
};

STR16 sMapLevelString[] =
{
	L"Poziom:", 			// what level below the ground is the player viewing in mapscreen
};

STR16 gsLoyalString[] =
{
	L"Lojalno�ci", 			// the loyalty rating of a town ie : Loyal 53%
};


// error message for when player is trying to give a merc a travel order while he's underground.

STR16 gsUndergroundString[] =
{
	L"nie mo�na wydawa� rozkaz�w podr�y pod ziemi�.", 
};

STR16 gsTimeStrings[] =
{
	L"g",				// hours abbreviation
	L"m",				// minutes abbreviation
	L"s",				// seconds abbreviation
	L"d",				// days abbreviation
};

// text for the various facilities in the sector

STR16 sFacilitiesStrings[] =
{
	L"Brak", 		
	L"Szpital",  		 
	L"Factory",	// TODO.Translate
	L"Wi�zienie",
	L"Baza wojskowa",
	L"Lotnisko",
	L"Strzelnica",		// a field for soldiers to practise their shooting skills
};

// text for inventory pop up button

STR16 pMapPopUpInventoryText[] =
{
	L"Inwentarz",
	L"Zamknij",
};

// town strings

STR16 pwTownInfoStrings[] =
{
	L"Rozmiar",					// 0 // size of the town in sectors
	L"", 						// blank line, required
	L"Pod kontrol�", 					// how much of town is controlled
	L"Brak", 					// none of this town
	L"Przynale�na kopalnia", 				// mine associated with this town
	L"Lojalno��",					// 5 // the loyalty level of this town
	L"Wyszkolonych", 					// the forces in the town trained by the player
	L"",
	L"G��wne obiekty", 				// main facilities in this town
	L"Poziom", 					// the training level of civilians in this town
	L"Szkolenie cywili",				// 10 // state of civilian training in town
	L"Samoobrona", 					// the state of the trained civilians in the town
	L"Mobile Training",			// HEADROCK HAM 3.6: The stat of Mobile militia training in town	// TODO.Translate
};

// Mine strings

STR16 pwMineStrings[] =
{
	L"Kopalnia",						// 0
	L"Srebro",
	L"Z�oto",
	L"Dzienna produkcja",
	L"Mo�liwa produkcja",
	L"Opuszczona",				// 5
	L"Zamkni�ta",
	L"Na wyczerpaniu",
	L"Produkuje",
	L"Stan",
	L"Tempo produkcji",
	L"Typ z�o�a",				// 10
	L"Kontrola miasta",
	L"Lojalno�� miasta",
//	L"G�rnicy",
};

// blank sector strings

STR16 pwMiscSectorStrings[] =
{
	L"Si�y wroga",
	L"Sektor",
	L"Przedmiot�w",
	L"Nieznane",
	L"Pod kontrol�",
	L"Tak",
	L"Nie",
};

// error strings for inventory

STR16 pMapInventoryErrorString[] =
{
	L"%s jest zbyt daleko.",	//Merc is in sector with item but not close enough
	L"Nie mo�na wybra� tego najemnika.",  //MARK CARTER
	L"%s nie mo�e st�d zabra� tego przedmiotu, gdy� nie jest w tym sektorze.",
	L"Podczas walki nie mo�na korzysta� z tego panelu.",
	L"Podczas walki nie mo�na korzysta� z tego panelu.",
	L"%s nie mo�e tu zostawi� tego przedmiotu, gdy� nie jest w tym sektorze.",
	L"W trakcie walki nie mo�esz do�adowywa� magazynka.",
};

STR16 pMapInventoryStrings[] =
{
	L"Po�o�enie", 			// sector these items are in
	L"Razem przedmiot�w", 		// total number of items in sector
};


// help text for the user

STR16 pMapScreenFastHelpTextList[] =
{
	L"Kliknij w kolumnie 'Przydz.', aby przydzieli� najemnika do innego oddzia�u lub wybranego zadania.",
	L"Aby wyznaczy� najemnikowi cel w innym sektorze, kliknij pole w kolumnie 'Cel'.",
	L"Gdy najemnicy otrzymaj� ju� rozkaz przemieszczenia si�, kompresja czasu pozwala im szybciej dotrze� na miejsce.",
	L"Kliknij lewym klawiszem aby wybra� sektor. Kliknij ponownie aby wyda� najemnikom rozkazy przemieszczenia, lub kliknij prawym klawiszem by uzyska� informacje o sektorze.",
	L"Naci�nij w dowolnym momencie klawisz 'H' by wy�wietli� okienko pomocy.",
	L"Pr�bny tekst",
	L"Pr�bny tekst",
	L"Pr�bny tekst",
	L"Pr�bny tekst",
	L"Niewiele mo�esz tu zrobi�, dop�ki najemnicy nie przylec� do Arulco. Gdy ju� zbierzesz sw�j oddzia�, kliknij przycisk Kompresji Czasu, w prawym dolnym rogu. W ten spos�b twoi najemnicy szybciej dotr� na miejsce.",
};

// movement menu text

STR16 pMovementMenuStrings[] =
{
	L"Przemie�� najemnik�w", 	// title for movement box 
	L"Nanie� tras� podr�y", 		// done with movement menu, start plotting movement
	L"Anuluj", 		// cancel this menu
	L"Inni",		// title for group of mercs not on squads nor in vehicles
};


STR16 pUpdateMercStrings[] =
{
	L"Oj:", 			// an error has occured
	L"Wygas� kontrakt najemnik�w:", 	// this pop up came up due to a merc contract ending
	L"Najemnicy wype�nili zadanie:", // this pop up....due to more than one merc finishing assignments
	L"Najemnicy wr�cili do pracy:", // this pop up ....due to more than one merc waking up and returing to work
	L"Odpoczywaj�cy najemnicy:", // this pop up ....due to more than one merc being tired and going to sleep
	L"Wkr�tce wygasn� kontrakty:", 	// this pop up came up due to a merc contract ending
};

// map screen map border buttons help text

STR16 pMapScreenBorderButtonHelpText[] =
{
	L"Poka� miasta (|W)",
	L"Poka� kopalnie (|M)",
	L"Poka� oddzia�y i wrog�w (|T)",
	L"Poka� przestrze� powietrzn� (|A)",
	L"Poka� przedmioty (|I)",
	L"Poka� samoobron� i wrog�w (|Z)",
	L"Show Mobile Militia Restrictions", // HEADROCK HAM 4: Mobile Restrictions Button
};


STR16 pMapScreenBottomFastHelp[] =
{
	L"|Laptop",
	L"Ekran taktyczny (|E|s|c)",
	L"|Opcje",
	L"Kompresja czasu (|+)", 	// time compress more
	L"Kompresja czasu (|-)", 	// time compress less
	L"Poprzedni komunikat (|S|t|r|z|a|�|k|a |w |g|�|r|�)\nPoprzednia strona (|P|g|U|p)", 	// previous message in scrollable list
	L"Nast�pny komunikat (|S|t|r|z|a|�|k|a |w |d|�|�)\nNast�pna strona (|P|g|D|n)", 	// next message in the scrollable list
	L"W��cz/Wy��cz kompresj� czasu (|S|p|a|c|j|a)",	// start/stop time compression
};

STR16 pMapScreenBottomText[] =
{
	L"Saldo dost�pne", 	// current balance in player bank account
};

STR16 pMercDeadString[] =
{
	L"%s nie �yje.",
};


STR16 pDayStrings[] =
{
	L"Dzie�",
};

// the list of email sender names

CHAR16 pSenderNameList[500][128] =
{
	L"",
};
/*
{
	L"Enrico",
	L"Psych Pro Inc",
	L"Pomoc",
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
	L"M.I.S. Ubezpieczenia",	
	L"Bobby Rays",
	L"Kingpin",
	L"John Kulba",
	L"A.I.M.",
};
*/

// next/prev strings

STR16 pTraverseStrings[] =
{
  L"Poprzedni",
  L"Nast�pny",
};

// new mail notify string 

STR16 pNewMailStrings[] =
{
 L"Masz now� poczt�...",
};


// confirm player's intent to delete messages

STR16 pDeleteMailStrings[] =
{
 L"Usun�� wiadomo��?",
 L"Usun�� wiadomo��?",
};


// the sort header strings

STR16 pEmailHeaders[] =
{
 	L"Od:",
 	L"Temat:",
 	L"Dzie�:",
};

// email titlebar text

STR16 pEmailTitleText[] =
{
 	L"Skrzynka odbiorcza",
};


// the financial screen strings
STR16 pFinanceTitle[] =
{
	L"Ksi�gowy Plus",		//the name we made up for the financial program in the game
};

STR16 pFinanceSummary[] =
{
	L"Wyp�ata:", 				// credit (subtract from) to player's account
	L"Wp�ata:", 				// debit (add to) to player's account
	L"Wczorajsze wp�ywy:",
	L"Wczorajsze dodatkowe wp�ywy:",
	L"Wczorajsze wydatki:",
	L"Saldo na koniec dnia:",
	L"Dzisiejsze wp�ywy:",
	L"Dzisiejsze dodatkowe wp�ywy:",
	L"Dzisiejsze wydatki:",
	L"Saldo dost�pne:",
	L"Przewidywane wp�ywy:",
	L"Przewidywane saldo:", 		// projected balance for player for tommorow
};


// headers to each list in financial screen

STR16 pFinanceHeaders[] =
{
	L"Dzie�", 					// the day column
	L"Ma", 				// the credits column (to ADD money to your account)
	L"Winien",				// the debits column (to SUBTRACT money from your account)
	L"Transakcja", 			// transaction type - see TransactionText below
	L"Saldo", 				// balance at this point in time
	L"Strona", 				// page number
	L"Dzie� (dni)", 		// the day(s) of transactions this page displays 
};


STR16 pTransactionText[] =
{
	L"Naros�e odsetki",			// interest the player has accumulated so far
	L"Anonimowa wp�ata",
	L"Koszt transakcji", 
	L"Wynaj�to -", 				// Merc was hired
	L"Zakupy u Bobby'ego Ray'a", 		// Bobby Ray is the name of an arms dealer
	L"Uregulowanie rachunk�w w M.E.R.C.",
	L"Zastaw na �ycie dla - %s", 		// medical deposit for merc
	L"Analiza profilu w IMP", 		// IMP is the acronym for International Mercenary Profiling
	L"Ubezpieczneie dla - %s", 
	L"Redukcja ubezp. dla - %s",
	L"Przed�. ubezp. dla - %s", 				// johnny contract extended
	L"Anulowano ubezp. dla - %s", 
	L"Odszkodowanie za - %s", 		// insurance claim for merc
	L"1 dzie�", 				// merc's contract extended for a day
	L"1 tydzie�", 				// merc's contract extended for a week
	L"2 tygodnie", 				// ... for 2 weeks
	L"Przych�d z kopalni", 
	L"", //String nuked
	L"Zakup kwiat�w",
	L"Pe�ny zwrot zastawu za - %s",
	L"Cz�ciowy zwrot zastawu za - %s",
	L"Brak zwrotu zastawu za - %s",
	L"Zap�ata dla - %s",		// %s is the name of the npc being paid
	L"Transfer funduszy do - %s", 			// transfer funds to a merc
	L"Transfer funduszy od - %s", 		// transfer funds from a merc
	L"Samoobrona w - %s", // initial cost to equip a town's militia
	L"Zakupy u - %s.",	//is used for the Shop keeper interface.  The dealers name will be appended to the end of the string.
	L"%s wp�aci�(a) pieni�dze.",
	L"Sprzedano rzecz(y) miejscowym",
	L"Wykorzystanie Plac�wki", // HEADROCK HAM 3.6	
	L"Utrzymanie Samoobr.", // HEADROCK HAM 3.6
};

STR16 pTransactionAlternateText[] =
{
	L"Ubezpieczenie dla -", 				// insurance for a merc
	L"Przed�. kontrakt z - %s o 1 dzie�.", 				// entend mercs contract by a day
	L"Przed�. kontrakt z - %s o 1 tydzie�.",
	L"Przed�. kontrakt z - %s o 2 tygodnie.",
};

// helicopter pilot payment 

STR16 pSkyriderText[] =
{
	L"Skyriderowi zap�acono %d$", 			// skyrider was paid an amount of money
	L"Skyriderowi trzeba jeszcze zap�aci� %d$", 		// skyrider is still owed an amount of money
	L"Skyrider zatankowa�",	// skyrider has finished refueling
	L"",//unused
	L"",//unused
	L"Skyrider jest got�w do kolejnego lotu.", // Skyrider was grounded but has been freed
	L"Skyrider nie ma pasa�er�w. Je�li chcesz przetransportowa� najemnik�w, zmie� ich przydzia� na POJAZD/HELIKOPTER.",
};


// strings for different levels of merc morale

STR16 pMoralStrings[] =
{
 L"�wietne", 
 L"Dobre",
 L"Stabilne",
 L"S�abe",
 L"Panika",
 L"Z�e",
};

// Mercs equipment has now arrived and is now available in Omerta or Drassen.

STR16 pLeftEquipmentString[] =
{ 
	L"%s - jego/jej sprz�t jest ju� w Omercie( A9 ).", 
	L"%s - jego/jej sprz�t jest ju� w Drassen( B13 ).",
};

// Status that appears on the Map Screen

STR16 pMapScreenStatusStrings[] =
{
	L"Zdrowie",
	L"Energia",
	L"Morale",
	L"Stan",	// the condition of the current vehicle (its "health")
	L"Paliwo",	// the fuel level of the current vehicle (its "energy")
};


STR16 pMapScreenPrevNextCharButtonHelpText[] =
{
	L"Poprzedni najemnik (|S|t|r|z|a|�|k|a |w |l|e|w|o)", 			// previous merc in the list
	L"Nast�pny najemnik (|S|t|r|z|a|�|k|a |w |p|r|a|w|o)", 				// next merc in the list
};


STR16 pEtaString[] =
{
	L"PCP:", 				// eta is an acronym for Estimated Time of Arrival
};

STR16 pTrashItemText[] =
{
	L"Wi�cej tego nie zobaczysz. Czy na pewno chcesz to zrobi�?", 	// do you want to continue and lose the item forever
	L"To wygl�da na co� NAPRAWD� wa�nego. Czy NA PEWNO chcesz to zniszczy�?", // does the user REALLY want to trash this item
};


STR16 pMapErrorString[] = 
{
	L"Oddzia� nie mo�e si� przemieszcza�, je�li kt�ry� z najemnik�w �pi.",

//1-5
	L"Najpierw wyprowad� oddzia� na powierzchni�.",
	L"Rozkazy przemieszczenia? To jest sektor wroga!",
	L"Aby podr�owa� najemnicy musz� by� przydzieleni do oddzia�u lub pojazdu.",
	L"Nie masz jeszcze ludzi.", 		// you have no members, can't do anything 
	L"Najemnik nie mo�e wype�ni� tego rozkazu.",			 		// merc can't comply with your order
//6-10
	L"musi mie� eskort�, aby si� przemieszcza�. Umie�� go w oddziale z eskort�.", // merc can't move unescorted .. for a male
	L"musi mie� eskort�, aby si� przemieszcza�. Umie�� j� w oddziale z eskort�.", // for a female
	L"Najemnik nie przyby� jeszcze do Arulco!",
	L"Wygl�da na to, �e trzeba wpierw uregulowa� sprawy kontraktu.",
	L"Nie mo�na przemie�ci� najemnika. Trwa nalot powietrzny.",
//11-15
	L"Rozkazy przemieszczenia? Trwa walka!",
	L"Zaatakowa�y ci� dzikie koty, w sektorze %s!",
	L"W sektorze %s znajduje si� co�, co wygl�da na legowisko dzikich kot�w!", 
	L"", 
	L"Baza rakiet Ziemia-Powietrze zosta�a przej�ta.",
//16-20
	L"%s - kopalnia zosta�a przej�ta. Tw�j dzienny przych�d zosta� zredukowany do %s.",
	L"Nieprzyjaciel bezkonfliktowo przej�� sektor %s.",
	L"Przynajmniej jeden z twoich najemnik�w nie zosta� do tego przydzielony.",
	L"%s nie mo�e si� przy��czy�, poniewa� %s jest pe�ny",
	L"%s nie mo�e si� przy��czy�, poniewa� %s jest zbyt daleko.",
//21-25
	L"%s - kopalnia zosta�a przej�ta przez si�y Deidranny!",
	L"Si�y wroga w�a�nie zaatakowa�y baz� rakiet Ziemia-Powietrze w - %s.",
	L"Si�y wroga w�a�nie zaatakowa�y - %s.",
	L"W�a�nie zauwa�ono si�y wroga w - %s.",
	L"Si�y wroga w�a�nie przej�y - %s.",
//26-30
	L"Przynajmniej jeden z twoich najemnik�w nie m�g� si� po�o�y� spa�.",
	L"Przynajmniej jeden z twoich najemnik�w nie m�g� wsta�.",
	L"Oddzia�y samoobrony nie pojawi� si� dop�ki nie zostan� wyszkolone.",
	L"%s nie mo�e si� w tej chwili przemieszcza�.",
	L"�o�nierze samoobrony, kt�rzy znajduj� si� poza granicami miasta, nie mog� by� przeniesieni do innego sektora.",
//31-35
	L"Nie mo�esz trenowa� samoobrony w - %s.",
	L"Pusty pojazd nie mo�e si� porusza�!",
	L"%s ma zbyt wiele ran by podr�owa�!",
	L"Musisz wpierw opu�ci� muzeum!",
	L"%s nie �yje!",
//36-40
	L"%s nie mo�e si� zamieni� z - %s, poniewa� si� porusza",
	L"%s nie mo�e w ten spos�b wej�c do pojazdu",
	L"%s nie mo�e si� do��czy� do - %s",
	L"Nie mo�esz kompresowa� czasu dop�ki nie zatrudnisz sobie kilku nowych najemnik�w!",
	L"Ten pojazd mo�e si� porusza� tylko po drodze!",
//41-45
	L"Nie mo�na zmienia� przydzia�u najemnik�w, kt�rzy s� w drodze",
	L"Pojazd nie ma paliwa!",
	L"%s jest zbyt zm�czony(na) by podr�owa�.",
	L"�aden z pasa�er�w nie jest w stanie kierowa� tym pojazdem.",
	L"Jeden lub wi�cej cz�onk�w tego oddzia�u nie mo�e si� w tej chwili przemieszcza�.",
//46-50
	L"Jeden lub wi�cej INNYCH cz�onk�w tego oddzia�u nie mo�e si� w tej chwili przemieszcza�.",
	L"Pojazd jest uszkodzony!",
	L"Pami�taj, �e w jednym sektorze tylko dw�ch najemnik�w mo�e trenowa� �o�nierzy samoobrony.",
	L"Robot nie mo�e si� porusza� bez operatora. Umie�� ich razem w jednym oddziale.",
};


// help text used during strategic route plotting
STR16 pMapPlotStrings[] =
{
	L"Kliknij ponownie sektor docelowy, aby zatwierdzi� tras� podr�y, lub kliknij inny sektor, aby j� wyd�u�y�.",
	L"Trasa podr�y zatwierdzona.",
	L"Cel podr�y nie zosta� zmieniony.",
	L"Trasa podr�y zosta�a anulowana.",
	L"Trasa podr�y zosta�a skr�cona.",
};


// help text used when moving the merc arrival sector
STR16 pBullseyeStrings[] =
{
	L"Kliknij sektor, do kt�rego maj� przylatywa� najemnicy.",
	L"Dobrze. Przylatuj�cy najemnicy b�d� zrzucani w %s",
	L"Najemnicy nie mog� tu przylatywa�. Przestrze� powietrzna nie jest zabezpieczona!",
	L"Anulowano. Sektor zrzutu nie zosta� zmieniony.",
	L"Przestrze� powietrzna nad %s nie jest ju� bezpieczna! Sektor zrzutu zosta� przesuni�ty do %s.",
};


// help text for mouse regions

STR16 pMiscMapScreenMouseRegionHelpText[] =
{
	L"Otw�rz wyposa�enie (|E|n|t|e|r)",
	L"Zniszcz przedmiot",
	L"Zamknij wyposa�enie (|E|n|t|e|r)",
};



// male version of where equipment is left
STR16 pMercHeLeaveString[] =
{
	L"Czy %s ma zostawi� sw�j sprz�t w sektorze, w kt�rym si� obecnie znajduje (%s), czy w Dressen (B13), sk�d odlatuje? ",
	L"Czy %s ma zostawi� sw�j sprz�t w sektorze, w kt�rym si� obecnie znajduje (%s), czy w Omercie (A9), sk�d odlatuje?",
	L"wkr�tce odchodzi i zostawi sw�j sprz�t w Omercie (A9).",
	L"wkr�tce odchodzi i zostawi sw�j sprz�t w Drassen (B13).",
	L"%s wkr�tce odchodzi i zostawi sw�j sprz�t w %s.",
};


// female version
STR16 pMercSheLeaveString[] =
{
	L"Czy %s ma zostawi� sw�j sprz�t w sektorze, w kt�rym si� obecnie znajduje (%s), czy w Dressen (B13), sk�d odlatuje? ",
	L"Czy %s ma zostawi� sw�j sprz�t w sektorze, w kt�rym si� obecnie znajduje (%s), czy w Omercie (A9), sk�d odlatuje?",
	L"wkr�tce odchodzi i zostawi sw�j sprz�t w Omercie (A9).",
	L"wkr�tce odchodzi i zostawi sw�j sprz�t w Drassen (B13).",
	L"%s wkr�tce odchodzi i zostawi sw�j sprz�t w %s.",
};


STR16 pMercContractOverStrings[] =
{
	L" zako�czy� kontrakt wi�c wyjecha�.", 		// merc's contract is over and has departed
	L" zako�czy�a kontrakt wi�c wyjecha�a.", 		// merc's contract is over and has departed
	L" - jego kontrakt zosta� zerwany wi�c odszed�.", 		// merc's contract has been terminated
	L" - jej kontrakt zosta� zerwany wi�c odesz�a.",		// merc's contract has been terminated
	L"Masz za du�y d�ug wobec M.E.R.C. wi�c %s odchodzi.", // Your M.E.R.C. account is invalid so merc left
};

// Text used on IMP Web Pages

// WDS: Allow flexible numbers of IMPs of each sex
//    note: I only updated the English text to remove "three" below
STR16 pImpPopUpStrings[] =
{
	L"Nieprawid�owy kod dost�pu",
	L"Czy na pewno chcesz wznowi� proces okre�lenia profilu?",
	L"Wprowad� nazwisko oraz p�e�",
	L"Wst�pna kontrola stanu twoich finans�w wykaza�a, �e nie sta� ci� na analiz� profilu.",
	L"Opcja tym razem nieaktywna.",
	L"Aby wykona� profil, musisz mie� miejsce dla przynajmniej jednego cz�onka za�ogi.",
	L"Profil zosta� ju� wykonany.",
	L"Nie mo�na za�adowa� postaci I.M.P. z dysku.",
	L"Wykorzysta�e� ju� maksymaln� liczb� postaci I.M.P.",
	L"Masz ju� w oddziale trzy postacie I.M.P. tej samej p�ci.",					//L"You have already the maximum number of I.M.P characters with that gender on your team.",  BY�o ->>L"You have already three I.M.P characters with the same gender on your team.",
	L"Nie sta� ci� na posta� I.M.P.",
	L"Nowa posta� I.M.P. do��czy�a do oddzia�u.",
};


// button labels used on the IMP site

STR16 pImpButtonText[] =
{
	L"O Nas", 			// about the IMP site
	L"ZACZNIJ", 			// begin profiling
	L"Umiej�tno�ci", 		// personality section
	L"Atrybuty", 		// personal stats/attributes section
	L"Appearance", 			// changed from portrait
	L"G�os %d", 			// the voice selection
	L"Gotowe", 			// done profiling
	L"Zacznij od pocz�tku", 		// start over profiling
	L"Tak, wybieram t� odpowied�.", 
	L"Tak", 
	L"Nie",
	L"Sko�czone", 			// finished answering questions
	L"Poprz.", 			// previous question..abbreviated form
	L"Nast.", 			// next question
	L"TAK, JESTEM.", 		// yes, I am certain 
	L"NIE, CHC� ZACZ�� OD NOWA.", // no, I want to start over the profiling process
	L"TAK",
	L"NIE",
	L"Wstecz", 			// back one page
	L"Anuluj", 			// cancel selection
	L"Tak.",
	L"Nie, Chc� spojrze� jeszcze raz.",
	L"Rejestr", 			// the IMP site registry..when name and gender is selected
	L"Analizuj�...", 			// analyzing your profile results
	L"OK",
	L"Posta�", // Change from "Voice"
};

STR16 pExtraIMPStrings[] =
{
	// These texts have been also slightly changed 
	L"Po wybraniu twoich cech pora wybra� twoje umiej�tno�ci.",
	L"Wybierz twoje atrybuty.",
	L"Aby dokona� prawdziwego profilowania wybie� portret, g�os i kolory.",
	L"Teraz, po wybraniu wygl�du, przejd� do analizy postaci.",
};

STR16 pFilesTitle[] =
{
	L"Przegl�darka plik�w",
};

STR16 pFilesSenderList[] =
{
	L"Raport Rozp.", 		// the recon report sent to the player. Recon is an abbreviation for reconissance
	L"Intercept #1", 		// first intercept file .. Intercept is the title of the organization sending the file...similar in function to INTERPOL/CIA/KGB..refer to fist record in files.txt for the translated title
	L"Intercept #2",	   // second intercept file
	L"Intercept #3",			 // third intercept file
	L"Intercept #4", // fourth intercept file
	L"Intercept #5", // fifth intercept file
	L"Intercept #6", // sixth intercept file
};

// Text having to do with the History Log

STR16 pHistoryTitle[] =
{
	L"Historia",
};

STR16 pHistoryHeaders[] =
{
	L"Dzie�", 			// the day the history event occurred
	L"Strona", 			// the current page in the history report we are in
	L"Dzie�", 			// the days the history report occurs over
	L"Po�o�enie", 			// location (in sector) the event occurred
	L"Zdarzenie", 			// the event label
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
	L"%s naj�ty(ta) w A.I.M.", 										// merc was hired from the aim site
	L"%s naj�ty(ta) w M.E.R.C.", 									// merc was hired from the aim site
	L"%s ginie.", 															// merc was killed
	L"Uregulowano rachunki w M.E.R.C.",								// paid outstanding bills at MERC
	L"Przyj�to zlecenie od Enrico Chivaldori",	
	//6-10
	L"Profil IMP wygenerowany",
	L"Podpisano umow� ubezpieczeniow� dla %s.", 				// insurance contract purchased
	L"Anulowano umow� ubezpieczeniow� dla %s.", 				// insurance contract canceled
	L"Wyp�ata ubezpieczenia za %s.", 							// insurance claim payout for merc
	L"Przed�u�ono kontrakt z: %s o 1 dzie�.", 						// Extented "mercs name"'s for a day
	//11-15
	L"Przed�u�ono kontrakt z: %s o 1 tydzie�.", 					// Extented "mercs name"'s for a week
	L"Przed�u�ono kontrakt z: %s o 2 tygodnie.", 					// Extented "mercs name"'s 2 weeks
	L"%s zwolniony(na).", 													// "merc's name" was dismissed.
	L"%s odchodzi.", 																		// "merc's name" quit.
	L"przyj�to zadanie.", 															// a particular quest started
	//16-20
	L"zadanie wykonane.",
	L"Rozmawiano szefem kopalni %s",									// talked to head miner of town
	L"Wyzwolono - %s",
	L"U�yto kodu Cheat",
	L"�ywno�� powinna by� jutro w Omercie",
	//21-25
	L"%s odchodzi, aby wzi�� �lub z Darylem Hickiem",
	L"Wygas� kontrakt z - %s.",
	L"%s zrekrutowany(na).",
	L"Enrico narzeka na brak post�p�w",
	L"Walka wygrana",
	//26-30
	L"%s - w kopalni ko�czy si� ruda",
	L"%s - w kopalni sko�czy�a si� ruda",
	L"%s - kopalnia zosta�a zamkni�ta",
	L"%s - kopalnia zosta�a otwarta",
	L"Informacja o wi�zieniu zwanym Tixa.",
	//31-35
	L"Informacja o tajnej fabryce broni zwanej Orta.",
	L"Naukowiec w Orcie ofiarowa� kilka karabin�w rakietowych.",
	L"Kr�lowa Deidranna robi u�ytek ze zw�ok.",
	L"Frank opowiedzia� o walkach w San Monie.",
	L"Pewien pacjent twierdzi, �e widzia� co� w kopalni.",
	//36-40
	L"Go�� o imieniu Devin sprzedaje materia�y wybuchowe.",
	L"Spotkanie ze s�awynm eks-najemnikiem A.I.M. - Mike'iem!",
	L"Tony handluje broni�.",
	L"Otrzymano karabin rakietowy od sier�anta Krotta.",
	L"Dano Kyle'owi akt w�asno�ci sklepu Angela.",
	//41-45
	L"Madlab zaoferowa� si� zbudowa� robota.",
	L"Gabby potrafi zrobi� mikstur� chroni�c� przed robakami.",
	L"Keith wypad� z interesu.",
	L"Howard dostarcza� cyjanek kr�lowej Deidrannie.",
	L"Spotkanie z handlarzem Keithem w Cambrii.",
	//46-50
	L"Spotkanie z aptekarzem Howardem w Balime",
	L"Spotkanie z Perko, prowadz�cym ma�y warsztat.",
	L"Spotkanie z Samem z Balime - prowadzi sklep z narz�dziami.",
	L"Franz handluje sprz�tem elektronicznym.",
	L"Arnold prowadzi warsztat w Grumm.",
	//51-55
	L"Fredo naprawia sprz�t elektroniczny w Grumm.",
	L"Otrzymano darowizn� od bogatego go�cia w Balime.",
	L"Spotkano Jake'a, kt�ry prowadzi z�omowisko.",
	L"Jaki� w��cz�ga da� nam elektroniczn� kart� dost�pu.",
	L"Przekupiono Waltera, aby otworzy� drzwi do piwnicy.",
	//56-60
	L"Dave oferuje darmowe tankowania, je�li b�dzie mia� paliwo.",
	L"Greased Pablo's palms.",
	L"Kingpin trzyma pieni�dze w kopalni w San Mona.",
	L"%s wygra�(a) walk�",
	L"%s przegra�(a) walk�",
	//61-65
	L"%s zdyskwalifikowany(na) podczas walki",
	L"Znaleziono du�o pieni�dzy w opuszczonej kopalni.",
	L"Spotkano zab�jc� nas�anego przez Kingpina.",
	L"Utrata kontroli nad sektorem",				//ENEMY_INVASION_CODE
	L"Sektor obroniony",
	//66-70
	L"Przegrana bitwa",							//ENEMY_ENCOUNTER_CODE
	L"Fatalna zasadzka",						//ENEMY_AMBUSH_CODE
	L"Usunieto zasadzk� wroga",
	L"Nieudany atak",			//ENTERING_ENEMY_SECTOR_CODE
	L"Udany atak!",
	//71-75
	L"Stworzenia zaatakowa�y",			//CREATURE_ATTACK_CODE
	L"Zabity(ta) przez dzikie koty",			//BLOODCAT_AMBUSH_CODE
	L"Wyr�ni�to dzikie koty",
	L"%s zabity(ta)",
	L"Przekazano Carmenowi g�ow� terrorysty",
	L"Slay odszed�",
	L"Zabito: %s",
};

STR16 pHistoryLocations[] =
{
	L"N/D",						// N/A is an acronym for Not Applicable
};

// icon text strings that appear on the laptop

STR16 pLaptopIcons[] =
{
	L"E-mail",
	L"Sie�",
	L"Finanse",
	L"Personel",
	L"Historia",
	L"Pliki",
	L"Zamknij",
	L"sir-FER 4.0",			// our play on the company name (Sirtech) and web surFER
};

// bookmarks for different websites
// IMPORTANT make sure you move down the Cancel string as bookmarks are being added

STR16 pBookMarkStrings[] =
{
	L"A.I.M.",
	L"Bobby Ray's",
	L"I.M.P",
	L"M.E.R.C.",
	L"Pogrzeby",
	L"Kwiaty",
	L"Ubezpieczenia",
	L"Anuluj",
};

STR16 pBookmarkTitle[] =
{
	L"Ulubione",
	L"Aby w przysz�o�ci otworzy� to menu, kliknij prawym klawiszem myszy.",
};

// When loading or download a web page

STR16 pDownloadString[] =
{
	L"�adowanie strony...",
	L"Otwieranie strony...",
};

//This is the text used on the bank machines, here called ATMs for Automatic Teller Machine

STR16 gsAtmSideButtonText[] =
{
	L"OK",
	L"We�", 			// take money from merc
	L"Daj", 			// give money to merc
	L"Anuluj", 			// cancel transaction
	L"Skasuj", 			// clear amount being displayed on the screen
};

STR16 gsAtmStartButtonText[] =
{
	L"Transfer $", 		// transfer money to merc -- short form
	L"Atrybuty", 			// view stats of the merc
	L"Wyposa�enie", 			// view the inventory of the merc
	L"Zatrudnienie",
};

STR16 sATMText[ ]=
{
	L"Przes�a� fundusze?", 		// transfer funds to merc?
	L"OK?", 			// are we certain?
	L"Wprowad� kwot�", 		// enter the amount you want to transfer to merc
	L"Wybierz typ", 		// select the type of transfer to merc
	L"Brak �rodk�w", 	// not enough money to transfer to merc
	L"Kwota musi by� podzielna przez $10", // transfer amount must be a multiple of $10
};

// Web error messages. Please use foreign language equivilant for these messages. 
// DNS is the acronym for Domain Name Server
// URL is the acronym for Uniform Resource Locator

STR16 pErrorStrings[] =
{
	L"B��d",
	L"Serwer nie posiada DNS.",	
	L"Sprawd� adres URL i spr�buj ponownie.",
	L"OK",
	L"Niestabilne po��czenie z Hostem. Transfer mo�e trwa� d�u�ej.",
};


STR16 pPersonnelString[] =
{
	L"Najemnicy:", 			// mercs we have
};


STR16 pWebTitle[ ]=
{
	L"sir-FER 4.0",		// our name for the version of the browser, play on company name
};


// The titles for the web program title bar, for each page loaded

STR16 pWebPagesTitles[] =
{
	L"A.I.M.",
	L"A.I.M. Cz�onkowie",
	L"A.I.M. Portrety",		// a mug shot is another name for a portrait
	L"A.I.M. Lista",
	L"A.I.M.",
	L"A.I.M. Weterani",
	L"A.I.M. Polisy",
	L"A.I.M. Historia",
	L"A.I.M. Linki",
	L"M.E.R.C.",
	L"M.E.R.C. Konta",
	L"M.E.R.C. Rejestracja",
	L"M.E.R.C. Indeks",
	L"Bobby Ray's",
	L"Bobby Ray's - Bro�",
	L"Bobby Ray's - Amunicja",
	L"Bobby Ray's - Pancerz",
	L"Bobby Ray's - R�ne",							//misc is an abbreviation for miscellaneous				
	L"Bobby Ray's - U�ywane",
	L"Bobby Ray's - Zam�wienie pocztowe",
	L"I.M.P.",
	L"I.M.P.",
	L"United Floral Service",
	L"United Floral Service - Galeria",
	L"United Floral Service - Zam�wienie",
	L"United Floral Service - Galeria kartek",
	L"Malleus, Incus & Stapes - Brokerzy ubezpieczeniowi",
	L"Informacja",
	L"Kontrakt",
	L"Uwagi",
	L"McGillicutty - Zak�ad pogrzebowy",
	L"",
	L"Nie odnaleziono URL.",
	L"Bobby Ray's - Ostatnie dostawy",
	L"",
	L"",
};

STR16 pShowBookmarkString[] =
{
	L"Sir-Pomoc",
	L"Kliknij ponownie Sie� by otworzy� menu Ulubione.",
};

STR16 pLaptopTitles[] =
{
	L"Poczta",
	L"Przegl�darka plik�w",
	L"Personel",
	L"Ksi�gowy Plus",
	L"Historia",
};

STR16 pPersonnelDepartedStateStrings[] =
{
	//reasons why a merc has left.
	L"�mier� w akcji",
	L"Zwolnienie",
	L"Inny",
	L"Ma��e�stwo",
	L"Koniec kontraktu",
	L"Rezygnacja",
};
// personnel strings appearing in the Personnel Manager on the laptop

STR16 pPersonelTeamStrings[] =
{
	L"Bie��cy oddzia�",
	L"Wyjazdy",
	L"Koszt dzienny:",
	L"Najwy�szy koszt:",
	L"Najni�szy koszt:",
	L"�mier� w akcji:",
	L"Zwolnienie:",
	L"Inny:",
};


STR16 pPersonnelCurrentTeamStatsStrings[] =
{
	L"Najni�szy",
	L"�redni",
	L"Najwy�szy",
};


STR16 pPersonnelTeamStatsStrings[] =
{
	L"ZDR",
	L"ZWN",
	L"ZRCZ",
	L"SI�A",
	L"DOW",
	L"INT",
	L"DO�W",
	L"STRZ",
	L"MECH",
	L"WYB",
	L"MED",
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
	L"Kontrakt",
};

// text that appears on the update panel buttons

STR16 pUpdatePanelButtons[] =
{
	L"Dalej",
	L"Stop",
};

// Text which appears when everyone on your team is incapacitated and incapable of battle

CHAR16 LargeTacticalStr[][ LARGE_STRING_LENGTH ] =
{
	L"Pokonano ci� w tym sektorze!",
	L"Wr�g nie zna lito�ci i po�era was wszystkich!",
	L"Nieprzytomni cz�onkowie twojego oddzia�u zostali pojmani!",
	L"Cz�onkowie twojego oddzia�u zostali uwi�zieni.",
};


//Insurance Contract.c
//The text on the buttons at the bottom of the screen.

STR16			InsContractText[] = 
{ 
	L"Wstecz",
	L"Dalej",
	L"Akceptuj�",
	L"Skasuj",
};



//Insurance Info
// Text on the buttons on the bottom of the screen

STR16		InsInfoText[] = 
{ 
	L"Wstecz", 
	L"Dalej"
};



//For use at the M.E.R.C. web site. Text relating to the player's account with MERC

STR16			MercAccountText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"Autoryzacja",
	L"Strona g��wna",
	L"Konto #:",
	L"Najemnik",
	L"Dni",
	L"Stawka",	//5
	L"Op�ata",
	L"Razem:",
	L"Czy na pewno chcesz zatwierdzi� p�atno��: %s?",		//the %s is a string that contains the dollar amount ( ex. "$150" )
};

// Merc Account Page buttons
STR16			MercAccountPageText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"Wstecz",
	L"Dalej",
};

//For use at the M.E.R.C. web site. Text relating a MERC mercenary


STR16			MercInfo[] =
{
	L"Zdrowie",
	L"Zwinno��",
	L"Sprawno��",
	L"Si�a",
	L"Um. dowodz.",
	L"Inteligencja",
	L"Poz. do�wiadczenia",
	L"Um. strzeleckie",
	L"Zn. mechaniki",
	L"Mat. wybuchowe",
	L"Wiedza medyczna",

	L"Poprzedni",
	L"Najmij",
	L"Nast�pny",
	L"Dodatkowe informacje",
	L"Strona g��wna",
	L"Naj�ty",
	L"Koszt:",
	L"Dziennie",
	L"Nie �yje",

	L"Wygl�da na to, �e chcesz wynaj�� zbyt wielu najemnik�w. Limit wynosi 18.",
	L"Niedost�pny",
};



// For use at the M.E.R.C. web site. Text relating to opening an account with MERC

STR16			MercNoAccountText[] =
{
	//Text on the buttons at the bottom of the screen
	L"Otw�rz konto",
	L"Anuluj",
	L"Nie posiadasz konta. Czy chcesz sobie za�o�y�?"
};



// For use at the M.E.R.C. web site. MERC Homepage

STR16			MercHomePageText[] =
{
	//Description of various parts on the MERC page
	L"Speck T. Kline, za�o�yciel i w�a�ciciel",
	L"Aby otworzy� konto naci�nij tu",
	L"Aby zobaczy� konto naci�nij tu",
	L"Aby obejrze� akta naci�nij tu",
	// The version number on the video conferencing system that pops up when Speck is talking
	L"Speck Com v3.2",
};

// For use at MiGillicutty's Web Page.

STR16			sFuneralString[] =
{
	L"Zak�ad pogrzebowy McGillicutty, pomaga rodzinom pogr��onym w smutku od 1983.",
	L"Kierownik, by�y najemnik A.I.M. Murray \'Pops\' McGillicutty jest do�wiadczonym pracownikiem zak�adu pogrzebowego.",
	L"Przez ca�e �ycie obcowa� ze �mierci�, 'Pops' wie jak trudne s� te chwile.",
	L"Zak�ad pogrzebowy McGillicutty oferuje szeroki zakres us�ug, od duchowego wsparcia po rekonstrukcj� silnie zniekszta�conych zw�ok.",
	L"Pozw�l by McGillicutty ci pom�g� a tw�j ukochany b�dzie spoczywa� w pokoju.",

	// Text for the various links available at the bottom of the page
	L"WY�LIJ KWIATY",
	L"KOLEKCJA TRUMIEN I URN",
	L"US�UGI KREMA- CYJNE",
	L"US�UGI PLANOWANIA POGRZEBU",
	L"KARTKI POGRZE- BOWE",

	// The text that comes up when you click on any of the links ( except for send flowers ).
	L"Niestety, z powodu �mierci w rodzinie, nie dzia�aj� jeszcze wszystkie elementy tej strony.",
	L"Przepraszamy za powy�sze uniedogodnienie."
};

// Text for the florist Home page

STR16			sFloristText[] = 
{
	//Text on the button on the bottom of the page

	L"Galeria",

	//Address of United Florist

	L"\"Zrzucamy z samolotu w dowolnym miejscu\"",
	L"1-555-POCZUJ-MNIE",
	L"333 Dr Nos, Miasto Nasion, CA USA 90210",
	L"http://www.poczuj-mnie.com",

	// detail of the florist page

	L"Dzia�amy szybko i sprawnie!",	
	L"Gwarantujemy dostaw� w dowolny punkt na Ziemi, nast�pnego dnia po z�o�eniu zam�wienia!",
	L"Oferujemy najni�sze ceny na �wiecie!",	
	L"Poka� nam ofert� z ni�sz� cen�, a dostaniesz w nagrod� tuzin r�, za darmo!",
	L"Lataj�ca flora, fauna i kwiaty od 1981.",
	L"Nasz ozdobiony bombowiec zrzuci tw�j bukiet w promieniu co najwy�ej dziesi�ciu mil od ��danego miejsca. Kiedy tylko zechcesz!",
	L"Pozw�l nam zaspokoi� twoje kwieciste fantazje.",
	L"Bruce, nasz �wiatowej renomy projektant bukiet�w, zerwie dla ciebie naj�wie�sze i najwspanialsze kwiaty z naszej szklarni.",
	L"I pami�taj, je�li czego� nie mamy, mo�emy to szybko zasadzi�!"
};



//Florist OrderForm

STR16			sOrderFormText[] = 
{
	//Text on the buttons

	L"Powr�t",
	L"Wy�lij",
	L"Skasuj",
	L"Galeria",

	L"Nazwa bukietu:",
	L"Cena:",			//5
	L"Zam�wienie numer:",
	L"Czas dostawy",
	L"nast. dnia",
	L"dostawa gdy to b�dzie mo�liwe",
	L"Miejsce dostawy",			//10
	L"Dodatkowe us�ugi",
	L"Zgnieciony bukiet($10)",
	L"Czarne R�e($20)",
	L"Zwi�dni�ty bukiet($10)",
	L"Ciasto owocowe (je�eli b�dzie)($10)",		//15
	L"Osobiste kondolencje:",
	L"Ze wzgl�du na rozmiar karteczek, tekst nie mo�e zawiera� wi�cej ni� 75 znak�w.",
	L"...mo�esz te� przejrze� nasze",

	L"STANDARDOWE KARTKI",	
	L"Informacja o rachunku",//20

	//The text that goes beside the area where the user can enter their name

	L"Nazwisko:",
};




//Florist Gallery.c

STR16		sFloristGalleryText[] =
{
	//text on the buttons

	L"Poprz.",	//abbreviation for previous
	L"Nast.",	//abbreviation for next

	L"Kliknij wybran� pozycj� aby z�o�y� zam�wienie.",
	L"Uwaga: $10 dodatkowej op�aty za zwi�dni�ty lub zgnieciony bukiet.",

	//text on the button

	L"G��wna",
};

//Florist Cards

STR16			sFloristCards[] =
{
	L"Kliknij sw�j wyb�r",
	L"Wstecz"
};



// Text for Bobby Ray's Mail Order Site

STR16			BobbyROrderFormText[] = 
{
	L"Formularz zam�wienia",				//Title of the page
	L"Ilo��",					// The number of items ordered
	L"Waga (%s)",			// The weight of the item
	L"Nazwa",				// The name of the item
	L"Cena",				// the item's weight
	L"Warto��",				//5	// The total price of all of items of the same type
	L"W sumie",				// The sub total of all the item totals added
	L"Transport",		// S&H is an acronym for Shipping and Handling 
	L"Razem",			// The grand total of all item totals + the shipping and handling
	L"Miejsce dostawy",	
	L"Czas dostawy",			//10	// See below
	L"Koszt (za %s.)",			// The cost to ship the items
	L"Ekspres - 24h",			// Gets deliverd the next day
	L"2 dni robocze",			// Gets delivered in 2 days
	L"Standardowa dostawa",			// Gets delivered in 3 days
	L" Wyczy��",//15			// Clears the order page
	L" Akceptuj�",			// Accept the order
	L"Wstecz",				// text on the button that returns to the previous page
	L"Strona g��wna",				// Text on the button that returns to the home page
	L"* oznacza u�ywane rzeczy",		// Disclaimer stating that the item is used
	L"Nie sta� ci� na to.",		//20	// A popup message that to warn of not enough money
	L"<BRAK>",				// Gets displayed when there is no valid city selected
	L"Miejsce docelowe przesy�ki: %s. Potwierdzasz?",		// A popup that asks if the city selected is the correct one
	L"Waga przesy�ki*",			// Displays the weight of the package
	L"* Min. Waga",				// Disclaimer states that there is a minimum weight for the package
	L"Dostawy",
};

STR16			BobbyRFilter[] =
{
	// Guns
	L"Inny",
	L"Pistolet",
	L"Pistolet maszynowy",
	L"Karabin maszynowy",
	L"Karabin",
	L"Karabin snajperski",
	L"Karabin bojowy",
	L"Lekki karabin maszynowy",
	L"Strzelba",

	// Ammo
	L"Pistolet",
	L"Pistolet maszynowy",
	L"Karabin maszynowy",
	L"Karabin",
	L"Karabin snajperski",
	L"Karabin bojowy",
	L"Lekki karabin maszynowy",
	L"Strzelba",

	// Used
	L"Bro�",
	L"Pancerz",
	L"Oporz�dzenie",
	L"R�ne",

	// Armour
	L"He�my",
	L"Kamizelki",
	L"Getry ochronne",
	L"P�ytki ceramiczne",

	// Misc
	L"Ostrza",
	L"No�e do rzucania",
	L"Punch. W.",
	L"Granaty",
	L"Bomby",
	L"Apteczki",
	L"Ekwipunek",
	L"Na twarz",
	L"Oporz�dzenie",	//LBE Gear
	L"Inne",
};


// This text is used when on the various Bobby Ray Web site pages that sell items

STR16			BobbyRText[] = 
{
	L"Zam�w",				// Title
	// instructions on how to order
	L"Kliknij wybrane towary. Lewym klawiszem zwi�kszasz ilo�� towaru, a prawym zmniejszasz. Gdy ju� skompletujesz swoje zakupy przejd� do formularza zam�wienia.",			

	//Text on the buttons to go the various links

	L"Poprzednia",		// 
	L"Bro�", 			//3
	L"Amunicja",			//4
	L"Ochraniacze",			//5
	L"R�ne",			//6	//misc is an abbreviation for miscellaneous
	L"U�ywane",			//7
	L"Nast�pna",
	L"FORMULARZ",
	L"Strona g��wna",			//10

	//The following 2 lines are used on the Ammunition page.  
	//They are used for help text to display how many items the player's merc has
	//that can use this type of ammo

	L"Tw�j zesp� posiada",//11
	L"szt. broni do kt�rej pasuje amunicja tego typu", //12

	//The following lines provide information on the items

	L"Waga:",			// Weight of all the items of the same type
	L"Kal:",			// the caliber of the gun
	L"Mag:",			// number of rounds of ammo the Magazine can hold
	L"Zas:",				// The range of the gun
	L"Si�a:",				// Damage of the weapon	
	L"CS:",			// Weapon's Rate Of Fire, acronym ROF
	L"Koszt:",			// Cost of the item
	L"Na stanie:",			// The number of items still in the store's inventory
	L"Ilo�� na zam�w.:",		// The number of items on order
	L"Uszkodz.",			// If the item is damaged
	L"Waga:",			// the Weight of the item
	L"Razem:",			// The total cost of all items on order
	L"* Stan: %%",		// if the item is damaged, displays the percent function of the item

	//Popup that tells the player that they can only order 10 items at a time
	
	L"Przepraszamy za to utrudnienie, ale na jednym zam�wieniu mo�e si� znajdowa� tylko 10 pozycji! Je�li potrzebujesz wi�cej, z�� kolejne zam�wienie.",

	// A popup that tells the user that they are trying to order more items then the store has in stock

	L"Przykro nam. Chwilowo nie mamy tego wi�cej na magazynie. Prosz� spr�bowa� p�niej.",

	//A popup that tells the user that the store is temporarily sold out

	L"Przykro nam, ale chwilowo nie mamy tego towaru na magazynie",

};


// Text for Bobby Ray's Home Page

STR16			BobbyRaysFrontText[] =
{
	//Details on the web site

	L"Tu znajdziesz nowo�ci z dziedziny broni i osprz�tu wojskowego",
	L"Zaspokoimy wszystkie twoje potrzeby w dziedzinie materia��w wybuchowych",
	L"U�YWANE RZECZY",

	//Text for the various links to the sub pages

	L"RӯNE",
	L"BRO�",
	L"AMUNICJA",		//5
	L"OCHRANIACZE",

	//Details on the web site

	L"Je�li MY tego nie mamy, to znaczy, �e nigdzie tego nie dostaniesz!",
	L"W trakcie budowy",
};



// Text for the AIM page.
// This is the text used when the user selects the way to sort the aim mercanaries on the AIM mug shot page

STR16			AimSortText[] =
{
	L"Cz�onkowie A.I.M.",				// Title
	// Title for the way to sort
	L"Sortuj wg:",					

	// sort by...

	L"Ceny",											
	L"Do�wiadczenia",
	L"Um. strzeleckich",
	L"Um. med.",
	L"Zn. mat. wyb.",
	L"Zn. mechaniki",

	//Text of the links to other AIM pages

	L"Portrety najemnik�w",
	L"Akta najemnika",
	L"Poka� galeri� by�ych cz�onk�w A.I.M.",

	// text to display how the entries will be sorted

	L"Rosn�co",
	L"Malej�co",
};


//Aim Policies.c
//The page in which the AIM policies and regulations are displayed

STR16		AimPolicyText[] =
{
	// The text on the buttons at the bottom of the page

	L"Poprzednia str.",
	L"Strona g��wna", 
	L"Przepisy",
	L"Nast�pna str.",
	L"Rezygnuj�",
	L"Akceptuj�",
};



//Aim Member.c
//The page in which the players hires AIM mercenaries

// Instructions to the user to either start video conferencing with the merc, or to go the mug shot index

STR16			AimMemberText[] =
{
	L"Lewy klawisz myszy",
	L"kontakt z najemnikiem",
	L"Prawy klawisz myszy",
	L"lista portret�w",
};

//Aim Member.c
//The page in which the players hires AIM mercenaries

STR16			CharacterInfo[] =
{
	// The various attributes of the merc

	L"Zdrowie",
	L"Zwinno��",
	L"Sprawno��",
	L"Si�a",
	L"Um. dowodzenia",
	L"Inteligencja",
	L"Poziom do�w.",
	L"Um. strzeleckie",
	L"Zn. mechaniki",
	L"Zn. mat. wyb.",
	L"Wiedza med.",				//10

	// the contract expenses' area

	L"Zap�ata",
	L"Czas",
	L"1 dzie�",
	L"1 tydzie�",
	L"2 tygodnie",

	// text for the buttons that either go to the previous merc, 
	// start talking to the merc, or go to the next merc

	L"Poprzedni",
	L"Kontakt",
	L"Nast�pny",

	L"Dodatkowe informacje",				// Title for the additional info for the merc's bio
	L"Aktywni cz�onkowie",		//20		// Title of the page
	L"Opcjonalne wyposa�enie:",				// Displays the optional gear cost
	L"gear",			//"gear",	//tais: Displays the optional gear cost in nsgi, this moved and can have only a small room, so just make it "gear" without extra's
	L"Wymagany jest zastaw na �ycie",			// If the merc required a medical deposit, this is displayed
	L"Zestaw nr 1",				// Text on Starting Gear Selection Button 1
	L"Zestaw nr 2",				// Text on Starting Gear Selection Button 2
	L"Zestaw nr 3",				// Text on Starting Gear Selection Button 3
	L"Zestaw nr 4",				// Text on Starting Gear Selection Button 4
	L"Zestaw nr 5",				// Text on Starting Gear Selection Button 5
};


//Aim Member.c
//The page in which the player's hires AIM mercenaries

//The following text is used with the video conference popup

STR16			VideoConfercingText[] =
{
	L"Warto�� kontraktu:",				//Title beside the cost of hiring the merc

	//Text on the buttons to select the length of time the merc can be hired

	L"Jeden dzie�",										
	L"Jeden tydzie�",
	L"Dwa tygodnie",

	//Text on the buttons to determine if you want the merc to come with the equipment 

	L"Bez sprz�tu",
	L"We� sprz�t",

	// Text on the Buttons

	L"TRANSFER",			// to actually hire the merc
	L"ANULUJ",				// go back to the previous menu
	L"WYNAJMIJ",				// go to menu in which you can hire the merc
	L"ROZ��CZ",				// stops talking with the merc
	L"OK",									
	L"NAGRAJ SI�",			// if the merc is not there, you can leave a message 

	//Text on the top of the video conference popup

	L"Wideo konferencja z - ",		
	L"��cz�. . .",

	L"z zastawem"			// Displays if you are hiring the merc with the medical deposit
};



//Aim Member.c
//The page in which the player hires AIM mercenaries

// The text that pops up when you select the TRANSFER FUNDS button

STR16			AimPopUpText[] =
{
	L"TRANSFER ZAKO�CZONY POMY�LNIE",	// You hired the merc
	L"PRZEPROWADZENIE TRANSFERU NIE MO�LIWE",		// Player doesn't have enough money, message 1
	L"BRAK �RODK�W",				// Player doesn't have enough money, message 2

	// if the merc is not available, one of the following is displayed over the merc's face

	L"Wynaj�to",											
	L"Prosz� zostaw wiadomo��",
	L"Nie �yje",

	//If you try to hire more mercs than game can support

	L"You have a full team of mercs already.",

	L"Nagrana wiadomo��",
	L"Wiadomo�� zapisana",
};


//AIM Link.c

STR16			AimLinkText[] =
{
	L"A.I.M. Linki",	//The title of the AIM links page
};



//Aim History

// This page displays the history of AIM

STR16			AimHistoryText[] =
{
	L"A.I.M. Historia",					//Title

	// Text on the buttons at the bottom of the page

	L"Poprzednia str.",
	L"Strona g��wna", 
	L"Byli cz�onkowie",
	L"Nast�pna str."
};


//Aim Mug Shot Index

//The page in which all the AIM members' portraits are displayed in the order selected by the AIM sort page.

STR16			AimFiText[] =
{
	// displays the way in which the mercs were sorted

	L"ceny",
	L"do�wiadczenia",
	L"um. strzeleckich",
	L"um. medycznych",
	L"zn. materia��w wyb.",
	L"zn. mechaniki",

	// The title of the page, the above text gets added at the end of this text

	L"Cz�onkowie A.I.M. posortowani rosn�co wg %s",
	L"Cz�onkowie A.I.M. posortowani malej�co wg %s",

	// Instructions to the players on what to do

	L"Lewy klawisz",
	L"Wyb�r najemnika",			//10
	L"Prawy klawisz",
	L"Opcje sortowania",

	// Gets displayed on top of the merc's portrait if they are...

	L"Wyjecha�(a)",
	L"Nie �yje",						//14
	L"Wynaj�to",
};



//AimArchives.
// The page that displays information about the older AIM alumni merc... mercs who are no longer with AIM

STR16			AimAlumniText[] =
{
	// Text of the buttons

	L"STRONA 1",
	L"STRONA 2",
	L"STRONA 3",

	L"Byli cz�onkowie A.I.M.",	// Title of the page


	L"OK"			// Stops displaying information on selected merc
};






//AIM Home Page

STR16			AimScreenText[] =
{
	// AIM disclaimers
	
	L"Znaki A.I.M. i logo A.I.M. s� prawnie chronione w wi�kszo�ci kraj�w.",
	L"Wi�c nawet nie my�l o pr�bie ich podrobienia.",
	L"Wszelkie prawa zastrze�one A.I.M. 2005, Ltd.",

	//Text for an advertisement that gets displayed on the AIM page

	L"United Floral Service",
	L"\"Zrzucamy gdziekolwiek\"",				//10
	L"Zr�b to jak nale�y...",
	L"...za pierwszym razem",
	L"Bro� i akcesoria, je�li czego� nie mamy, to tego nie potrzebujesz.",
};


//Aim Home Page

STR16			AimBottomMenuText[] =
{
	//Text for the links at the bottom of all AIM pages
	L"Strona g��wna",
	L"Cz�onkowie",
	L"Byli cz�onkowie",
	L"Przepisy",
	L"Historia",
	L"Linki",
};



//ShopKeeper Interface
// The shopkeeper interface is displayed when the merc wants to interact with 
// the various store clerks scattered through out the game.

STR16 SKI_Text[ ] = 
{
	L"TOWARY NA STANIE",		//Header for the merchandise available
	L"STRONA",				//The current store inventory page being displayed
	L"KOSZT OGӣEM",				//The total cost of the the items in the Dealer inventory area
	L"WARTO�� OGӣEM",			//The total value of items player wishes to sell
	L"WYCENA",				//Button text for dealer to evaluate items the player wants to sell
	L"TRANSAKCJA",			//Button text which completes the deal. Makes the transaction.
	L"OK",				//Text for the button which will leave the shopkeeper interface.
	L"KOSZT NAPRAWY",			//The amount the dealer will charge to repair the merc's goods
	L"1 GODZINA",			// SINGULAR! The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"%d GODZIN(Y)",		// PLURAL!   The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"NAPRAWIONO",		// Text appearing over an item that has just been repaired by a NPC repairman dealer
	L"Brak miejsca by zaoferowa� wi�cej rzeczy.",	//Message box that tells the user there is no more room to put there stuff
	L"%d MINUT(Y)",		// The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"Upu�� przedmiot na ziemi�.",
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
	L"OK",						// Transfer the money
	L"We�",					// Take money from the player
	L"Daj",					// Give money to the player
	L"Anuluj",					// Cancel the transfer
	L"Skasuj",					// Clear the money display
};


//Shopkeeper Interface
STR16	gzSkiAtmText[] = 
{	

	// Text on the bank machine panel that....
	L"Wybierz",			// tells the user to select either to give or take from the merc
	L"Wprowad� kwot�",			// Enter the amount to transfer
	L"Transfer got�wki do najemnika",		// Giving money to the merc
	L"Transfer got�wki od najemnika",		// Taking money from the merc
	L"Brak �rodk�w",			// Not enough money to transfer
	L"Saldo",				// Display the amount of money the player currently has
};


STR16	SkiMessageBoxText[] =
{
	L"Czy chcesz do�o�y� %s ze swojego konta, aby pokry� r�nic�?",
	L"Brak �rodk�w. Brakuje ci %s",
	L"Czy chcesz przeznaczy� %s ze swojego konta, aby pokry� koszty?",
	L"Popro� o rozpocz�cie transakscji",
	L"Popro� o napraw� wybranych przedmiot�w",
	L"Zako�cz rozmow�",
	L"Saldo dost�pne",
};


//OptionScreen.c

STR16	zOptionsText[] = 
{
	//button Text
	L"Zapisz gr�",
	L"Odczytaj gr�",
	L"Wyj�cie",
	L">>",
	L"<<",
	L"OK",

	//Text above the slider bars
	L"Efekty",
	L"Dialogi",
	L"Muzyka",

	//Confirmation pop when the user selects..
	L"Zako�czy� gr� i wr�ci� do g��wnego menu?",

	L"Musisz w��czy� opcj� dialog�w lub napis�w.",
};


//SaveLoadScreen 
STR16			zSaveLoadText[] = 
{
	L"Zapisz gr�",
	L"Odczytaj gr�",
	L"Anuluj",
	L"Zapisz wybran�",
	L"Odczytaj wybran�",

	L"Gra zosta�a pomy�lnie zapisana",
	L"B��D podczas zapisu gry!",
	L"Gra zosta�a pomy�lnie odczytana",
	L"B��D podczas odczytu gry!",

	L"Wersja gry w zapisanym pliku r�ni si� od bie��cej. Prawdopodobnie mo�na bezpiecznie kontynuowa�. Kontynuowa�?",
	L"Zapisane pliki gier mog� by� uszkodzone. Czy chcesz je usun��?",

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.	
#ifdef JA2BETAVERSION
	L"Nieprawid�owa wersja zapisu gry. W razie problem�w prosimy o raport. Kontynuowa�?",
#else
	L"Pr�ba odczytu starszej wersji zapisu gry. Zaktualizowa� ten zapis i odczyta� gr�?",
#endif

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	L"Nieprawid�owa wersja zapisu gry. W razie problem�w prosimy o raport. Kontynuowa�?",
#else
	L"Pr�ba odczytu starszej wersji zapisu gry. Zaktualizowa� ten zapis i odczyta� gr�?",
#endif

	L"Czy na pewno chcesz nadpisa� gr� na pozycji %d?",
	L"Chcesz odczyta� gr� z pozycji",


	//The first %d is a number that contains the amount of free space on the users hard drive,
	//the second is the recommended amount of free space.
	L"Brak miejsca na dysku twardym.  Na dysku wolne jest %d MB, a wymagane jest przynajmniej %d MB.",	

	L"Zapisuj�...",			//When saving a game, a message box with this string appears on the screen

	L"Standardowe uzbrojenie",
	L"Ca�e mn�stwo broni",
	L"Realistyczna gra",
	L"Elementy S-F",

	L"Stopie� trudno�ci",
	L"Platynowy tryb", //Placeholder English

	L"Wyposa�enie Bobby Ray's",
	L"Normalne",
	L"�wietne",
	L"Wy�mienite",
	L"Niewiarygodne",

	L"Nowy inwentarz nie dzia�a w rozdzielczo�ci 640x480. Aby z niego korzysta� zmie� rozdzielczo�� i spr�buj ponownie.",
	L"Nowy inwentarz nie korzysta z domy�lnego folderu 'Data'.",
};



//MapScreen
STR16		zMarksMapScreenText[] =
{
	L"Poziom mapy",
	L"Nie masz jeszcze �o�nierzy samoobrony.  Musisz najpierw wytrenowa� mieszka�c�w miast.",
	L"Dzienny przych�d",
	L"Najmemnik ma polis� ubezpieczeniow�", 
    L"%s nie potrzebuje snu.", 
	L"%s jest w drodze i nie mo�e spa�", 
	L"%s jest zbyt zm�czony(na), spr�buj troch� p�niej.",
	L"%s prowadzi.",
	L"Oddzia� nie mo�e si� porusza� je�eli jeden z najemnik�w �pi.",

	// stuff for contracts
	L"Mimo, �e mo�esz op�aci� kontrakt, to jednak nie masz got�wki by op�aci� sk�adk� ubezpieczeniow� za najemnika.",
	L"%s - sk�adka ubezpieczeniowa najemnika b�dzie kosztowa� %s za %d dzie�(dni). Czy chcesz j� op�aci�?",
	L"Inwentarz sektora",
	L"Najemnik posiada zastaw na �ycie.", 
	
	// other items
	L"Lekarze", // people acting a field medics and bandaging wounded mercs 
	L"Pacjenci", // people who are being bandaged by a medic 
	L"Gotowe", // Continue on with the game after autobandage is complete 
	L"Przerwij", // Stop autobandaging of patients by medics now 
	L"Przykro nam, ale ta opcja jest wy��czona w wersji demo.", // informs player this option/button has been disabled in the demo 
	L"%s nie ma zestawu narz�dzi.",
	L"%s nie ma apteczki.",
	L"Brak ch�tnych ludzi do szkolenia, w tej chwili.",
	L"%s posiada ju� maksymaln� liczb� oddzia��w samoobrony.",
	L"Najemnik ma kontrakt na okre�lony czas.",
	L"Kontrakt najemnika nie jest ubezpieczony",
	L"Mapa",		// 24
	// HEADROCK HAM 4: Prompt messages when turning on Mobile Militia Restrictions view.
	L"You currently have no Mobile Militia. Return to this view mode once you've recruited some.",
	L"This view shows where your Mobile Militia can and cannot go. GREY = Mobile Militia refuse to go here. RED = Mobile Militia can go here, but you've told them not to. YELLOW = Mobile Militia can enter this sector, but not leave. GREEN = Mobile Militia can go here freely. Right click a Green/Yellow sector to cycle its behavior.",
};


STR16 pLandMarkInSectorString[] =
{
	L"Oddzia� %d zauwa�y� kogo� w sektorze %s",
};

// confirm the player wants to pay X dollars to build a militia force in town
STR16 pMilitiaConfirmStrings[] =
{
	L"Szkolenie oddzia�u samoobrony b�dzie kosztowa�o $", // telling player how much it will cost
	L"Zatwierdzasz wydatek?", // asking player if they wish to pay the amount requested
	L"Nie sta� ci� na to.", // telling the player they can't afford to train this town
	L"Kontynuowa� szkolenie samoobrony w - %s (%s %d)?", // continue training this town?
	L"Koszt $", // the cost in dollars to train militia
	L"( T/N )",   // abbreviated yes/no
	L"",	// unused
	L"Szkolenie samoobrony w %d sektorach b�dzie kosztowa�o $ %d. %s", // cost to train sveral sectors at once
	L"Nie masz %d$, aby wyszkoli� samoobron� w tym mie�cie.",
	L"%s musi mie� %d% lojalno�ci, aby mo�na by�o kontynuowa� szkolenie samoobrony.",
	L"Nie mo�esz ju� d�u�ej szkoli� samoobrony w mie�cie %s.",
	L"Nie masz %d$ i nie mo�esz trenowa� tutaj ruchomej samoobrony.", // HEADROCK HAM 3.6: Mobile Militia
	L"Kontynuuj trening ruchomej samoobrony w %s (%s %d)?", // HEADROCK HAM 3.6: Mobile Militia
	L"Trenowanie ruchomej samoobrony w %d sektorach b�dzie kosztowa� %d$. %s", // HEADROCK HAM 3.6: Mobile Militia
	L"Trenowanie ruchomej samoobrony b�dzie kosztowa� $", // HEADROCK HAM 3.6: Mobile Militia
};

//Strings used in the popup box when withdrawing, or depositing money from the $ sign at the bottom of the single merc panel
STR16	gzMoneyWithdrawMessageText[] = 
{
	L"Jednorazowo mo�esz wyp�aci� do 20,000$.",
	L"Czy na pewno chcesz wp�aci� %s na swoje konto?",
};

STR16	gzCopyrightText[] = 
{
	L"Prawa autorskie nale�� do (C) 1999 Sir-tech Canada Ltd. Wszelkie prawa zastrze�one.",
};

//option Text
STR16		zOptionsToggleText[] = 
{
	L"Dialogi",
	L"Wycisz potwierdzenia",
	L"Napisy",
	L"Wstrzymuj napisy",
	L"Animowany dym",
	L"Drastyczne sceny",
	L"Nigdy nie ruszaj mojej myszki!",
	L"Stara metoda wyboru",
	L"Pokazuj tras� ruchu",
	L"Pokazuj chybione strza�y",
	L"Potwierdzenia Real-Time",
	L"Najemnik �pi/budzi si�",
	L"U�ywaj systemu metrycznego",
	L"O�wietlenie podczas ruchu",
	L"Przyci�gaj kursor do najemnik�w",
	L"Przyci�gaj kursor do drzwi",
	L"Pulsuj�ce przedmioty",
	L"Pokazuj korony drzew",
	L"Pokazuj siatk�",
	L"Pokazuj kursor 3D",
	L"Pokazuj szans� na trafienie",
	L"Zamiana kursora granatnika",
	L"Pozw�l na przechwa�ki wrog�w", // Changed from "Enemies Drop all Items" - SANDRO
	L"Wysoki k�t strza��w z granatnika",
	L"Pozw�l na skradanie si� w czasie rzeczywistym", // Changed from "Restrict extra Aim Levels" - SANDRO
	L"Spacja = nast�pny oddzia�",
	L"Pokazuj cienie przedmiot�w",
	L"Pokazuj zasi�g broni w polach",
	L"Efekt smugowy dla poj. strza�u",
	L"Odg�osy padaj�cego deszczu",
	L"Pokazuj wrony",
	L"Show Soldier Tooltips",
	L"Automatyczny zapis",
	L"Cichy Skyrider",
	L"Niskie obci��enie procesora",
	L"Rozszerzone Okno Opisu (EDB)",	//Enhanced Description Box
	L"Wymu� tryb turowy",					// add forced turn mode
	L"Stat Progress Bars",					// Show progress towards stat increase		// TODO.Translate
	L"Alternate Strategy-Map Colors",		// Change color scheme of Strategic Map
	L"Alternate bullet graphics",			// Show alternate bullet graphics (tracers) // TODO.Translate
	L"--Cheat Mode Options--",				// TOPTION_CHEAT_MODE_OPTIONS_HEADER,
	L"Force Bobby Ray shipments",			// force all pending Bobby Ray shipments
	L"-----------------",					// TOPTION_CHEAT_MODE_OPTIONS_END
	L"--DEBUG OPTIONS--",					// an example options screen options header (pure text)
	L"Report Miss Offsets",					// Screen messages showing amount and direction of shot deviation.	// TODO.Translate
	L"Reset ALL game options",				// failsafe show/hide option to reset all options
	L"Do you really want to reset?",		// a do once and reset self option (button like effect)
	L"Debug Options in other builds",		// allow debugging in release or mapeditor
	L"DEBUG Render Option group",			// an example option that will show/hide other options
	L"Render Mouse Regions",				// an example of a DEBUG build option
	L"-----------------",					// an example options screen options divider (pure text)

	// this is THE LAST option that exists (debug the options screen, doesnt do anything, except exist)
	L"THE_LAST_OPTION",
};

//This is the help text associated with the above toggles.
STR16	zOptionsScreenHelpText[] =
{
	// HEADROCK HAM 4: Added more tooltip text to some toggles, in order to explain them better.

	//speech
	L"Je�li W��CZONE, w grze pojawia� si� b�d� dialogi.",

	//Mute Confirmation
	L"Je�li W��CZONE, g�osowe potwierdzenia postaci zostan� wyciszone.",

	//Subtitles
	L"Je�li W��CZONE, pojawia� si� b�d� napisy podczas rozm�w z innymi postaciami.",

	//Key to advance speech
	L"Je�li W��CZONE, napisy pojawiaj�ce si� podczas dialog�w b�d� znika�y dopiero po klikni�ciu.",

	//Toggle smoke animation
	L"Je�li W��CZONE, dym z granat�w b�dzie animowany. Mo�e spowolni� dzia�anie gry.",

	//Blood n Gore
	L"Je�li W��CZONE, pokazywane b�d� bardzo drastyczne sceny.",

	//Never move my mouse
	L"Je�li W��CZONE, kursor nie b�dzie automatycznie ustawia� si� nad pojawiaj�cymi si� okienkami dialogowymi.",

	//Old selection method
	L"Je�li W��CZONE, wyb�r postaci b�dzie dzia�a� tak jak w poprzednich cz�ciach gry.",

	//Show movement path
	L"Je�li W��CZONE, b�dziesz widzia� tras� ruchu w trybie Real-Time.",

	//show misses
	L"Je�li W��CZONE, b�dzie m�g� obserwowa� w co trafiaj� twoje kule gdy spud�ujesz.",
	
	//Real Time Confirmation
	L"Je�li W��CZONE, ka�dy ruch najemnika w trybie Real-Time b�dzie wymaga� dodatkowego, potwierdzaj�cego klikni�cia.",

	//Sleep/Wake notification
	L"Je�li W��CZONE, wy�wietlana b�dzie informacja, �e najemnik po�o�y� si� spa� lub wsta� i wr�ci� do pracy.",

	//Use the metric system
	L"Je�li W��CZONE, gra b�dzie u�ywa�a systemu metrycznego.",

	//Merc Lighted movement
	L"Je�li W��CZONE, teren wok� najemnika b�dzie o�wietlony podczas ruchu. Mo�e spowolni� dzia�anie gry.",

	//Smart cursor
	L"Je�li W��CZONE, kursor b�dzie automatycznie ustawia� si� na najemnikach gdy znajdzie si� w ich pobli�u.",

	//snap cursor to the door
	L"Je�li W��CZONE, kursor b�dzie automatycznie ustawia� si� na drzwiach gdy znajdzie si� w ich pobli�u.",

	//glow items 
	L"Je�li W��CZONE, przedmioty b�d� pulsowa�. ( |I )",

	//toggle tree tops
	L"Je�li W��CZONE, wy�wietlane b�d� korony drzew. ( |T )",

	//toggle wireframe
	L"Je�li W��CZONE, wy�wietlane b�d� zarysy niewidocznych �cian. ( |W )",

	L"Je�li W��CZONE, kursor ruchu wy�wietlany b�dzie w 3D. ( |Home )",

	// Options for 1.13
	L"Je�li W��CZONE, kursor b�dzie pokazywa� szans� na trafienie.",
	L"Je�li W��CZONE, seria z granatnika b�dzie u�ywa�a kursora serii z broni palnej.",
	L"Je�eli w��czone, to wrogowie b�d� czasami komentowa� pewne akcje.", // Changed from Enemies Drop All Items - SANDRO
	L"Je�li W��CZONE, granatniki b�d� strzela�y pod wysokim k�tem. ( |Q )",
	L"Je�li W��CZONE, zapobiega przej�ciu do trybu turowego po zauwa�eniu wroga podczas skradania. Aby wymusi� tryb turowy z t� opcj� aktywn� naci�nij |C|t|r+|X.", // Changed from Restrict Extra Aim Levels - SANDRO
	L"Je�li W��CZONE, |S|p|a|c|j|a wybiera kolejny oddzia�.",
	L"Je�li W��CZONE, pokazywane b�d� cienie przedmiot�w.",
	L"Je�li W��CZONE, zasi�g broni b�dzie wy�wietlany w polach.",
	L"Je�li W��CZONE, pojedynczy strza� b�dzie z efektem pocisku smugowego",
	L"Je�li W��CZONE, b�dziesz s�ysza� padaj�cy deszcz.",
	L"Je�li W��CZONE, w grze pojawia� si� b�d� wrony.",
	L"Gdy ta opcja jest AKTYWNA, wskazanie postaci wroga kursorem i naci�ni�cie A|l|t uka�e okienko informacji dodatkowych.",
	L"Je�li W��CZONE, gra b�dzie zapisywana ka�dorazowo po zako�czeniu tury gracza.",
	L"Je�li W��CZONE, Skyrider nie b�dzie nic m�wi�.",
	L"Je�li W��CZONE, gra b�dzie obci��a�a procesor w mniejszym stopniu.",
	L"Je�li W��CZONE, rozszerzone opisy b�d� pokazane dla przedmiot�w i broni.",
	L"Je�li W��CZONE i wr�g jest obecny, \ntryb turowy jest w��czony, \ndop�ki sektor nie zostanie oczyszczony (|C|T|R|L+|S|H|I|F|T+|A|L|T+|T).",	// add forced turn mode
	L"Gdy W��CZONE, pokazuje post�p w do�wiadczeniu postaci.",
	L"When ON, the Strategic Map will be colored differently based on exploration.",
	L"Gdy W��CZONE, zast�puje star� animacj� pocisku now�.",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_HEADER",
	L"Wymu� wszystkie oczekiwane dostawy od Bobby Ray's.",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_END",
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_HEADER",			// an example options screen options header (pure text)
	L"|H|A|M |4 |D|e|b|u|g: When ON, will report the distance each bullet deviates from the\ncenter of the target, taking all NCTH factors into account.",
	L"Kliknij by naprawi� b��dy w ustawieniach gry.",							// failsafe show/hide option to reset all options
	L"Kliknij by naprawi� b��dy w ustawieniach gry.",							// a do once and reset self option (button like effect)
	L"Udost�pnia tryb debugowania w edytorze map oraz wersji ko�cowej.",				// allow debugging in release or mapeditor
	L"Prze��cz na tryb wy�wietlania/ukrycia opcji renderowania debugowego.",						// an example option that will show/hide other options
	L"Wy�wietl wymiary wok� kursora myszy.",			// an example of a DEBUG build option
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_END",				// an example options screen options divider (pure text)


	// this is THE LAST option that exists (debug the options screen, doesnt do anything, except exist)
	L"TOPTION_LAST_OPTION",
};

STR16	gzGIOScreenText[] =
{
	L"POCZ�TKOWE USTAWIENIA GRY",
	L"Styl gry",
	L"Realistyczny",
	L"S-F",
	L"Platynowy", //Placeholder English
	L"Opcje broni",
	L"Mn�stwo broni",
	L"Standardowe uzbrojenie",
	L"Stopie� trudno�ci",
	L"Nowicjusz",
	L"Do�wiadczony",
	L"Ekspert",
	L"SZALONY",
	L"Start",		// TODO.Translate
	L"Anuluj",
	L"Rozszerzony poziom trudno�ci",
	L"Zapis gry w dowolnym momencie",
	L"CZ�OWIEK ZE STALI",
	L"Nie dzia�a w wersji demo",
	L"Wyposa�enie Bobby Ray's",
	L"Normalne",
	L"�wietne",
	L"Wy�mienite",
	L"Niewiarygodne",
	L"Ekwipunek / Dodatki",
	L"Nie u�ywany",
	L"Nie u�ywany",
	L"Wczytaj gr� MP",
	L"POCZ�TKOWE USTAWIENIA GRY (Only the server settings take effect)",
	// Added by SANDRO
	L"Cechy umiej�tno�ci",
	L"Stare",
	L"Nowe",
	L"Maks. liczba IMP",
	L"Jeden",
	L"Dwa",
	L"Trzy",
	L"Cztery",
	L"Pi��",
	L"Sze��",
	L"Wrogowie upuszczaj� ca�o�� ekwipunku",
	L"Wy��czone",
	L"W��czone",
	L"Liczba terroryst�w",
	L"Losowe",
	L"Wszystkie",
	L"Tajne sk�ady proni",
	L"Losowe",
	L"Wszystkie",
	L"Szybko�� zwi�kszania dost�pno�ci przedmiot�w",
	L"Bardzo wolna",
	L"Wolna",
	L"Normala",
	L"Szybka",
	L"Bardzo szybkia",

	L"Stare / Stare",
	L"Nowe / Stare",
	L"Nowe / Nowe",
};

STR16	gzMPJScreenText[] =
{
	L"MULTIPLAYER",
	L"Do��cz",
	L"Uruchom serwer",
	L"Anuluj",
	L"Od�wie�",
	L"Nazwa gracza",
	L"IP Serwera",
	L"Port",
	L"Nazwa serwera",
	L"# Plrs",			// ?? if plrs=players then "# graczy"
	L"Wersja",
	L"Typ rozgrywki",
	L"Ping",
	L"Musisz poda� nazw� gracza",
	L"Musisz poda� odpowiedni numer IP serwera.\n (np. 84.114.195.239).",
	L"Musisz poda� odpowiedni port serwera pomi�dzy 1 i 65535.",
};

// TODO.Translate
STR16 gzMPJHelpText[] =
{
	L"Visit http://webchat.quakenet.org/?channels=ja2-multiplayer to find other players.",

	L"HOST",
	L"Enter '127.0.0.1' for the IP and the Port number should be greater than 60000.",
	L"Be sure that the Port (UDP, TCP) is forwarded on your Router. For more information see: http://portforward.com",
	L"You have to send (via IRC, ICQ, etc) your external IP (http://www.whatismyip.com) and the Port number to the other players.",
	L"Click on 'Host' to host a new Multiplayer Game.",
	
	L"JOIN",
	L"The host has to send (via IRC, ICQ, etc) you the external IP and the Port number.",
	L"Enter the external IP and the Port number from the host.",
	L"Click on 'Join' to join an already hosted Multiplayer Game.",
};

// TODO.Translate
STR16	gzMPHScreenText[] =
{
	L"HOST GAME",
	L"Start",
	L"Cancel",
	L"Server Name",
	L"Game Type",
	L"Deathmatch",
	L"Team-Deathmatch",
	L"Co-Operative",
	L"Maximum Players",
	L"Maximum Mercs",
	L"Merc Selection",
	L"Merc Hiring",
	L"Hired by Player",
	L"Starting Cash",
	L"Allow Hiring Same Merc",
	L"Report Hired Mercs",
	L"Bobby Rays",
	L"Sector Starting Edge",
	L"You must enter a server name",
	L"",
	L"",
	L"Starting Time",
	L"",
	L"",
	L"Weapon Damage",
	L"",
	L"Timed Turns",
	L"",
	L"Enable Civilians in CO-OP",
	L"",
	L"Maximum Enemies in CO-OP",
	L"Synchronize Game Directory",
	L"MP Sync. Directory",
	L"You must enter a file transfer directory.",
	L"(Use '/' instead of '\\' for directory delimiters.)",
	L"The specified synchronisation directory does not exist.",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	// Max. Enemies / Report Hired Merc / Enable Civs in CO-OP
	L"Yes",
	L"No",
	// Starting Time
	L"Morning",
	L"Afternoon",
	L"Night",
	// Starting Cash
	L"Low",
	L"Medium",
	L"Heigh",
	L"Unlimited",
	// Time Turns
	L"Never",
	L"Slow",
	L"Medium",
	L"Fast",
	// Weapon Damage
	L"Very low",
	L"Low",
	L"Normal",
	// Merc Hire
	L"Random",
	L"Normal",
	// Sector Edge
	L"Random",
	L"Selectable",
	// Bobby Ray / Hire same merc
	L"Disable",
	L"Allow",
};

STR16 pDeliveryLocationStrings[] =
{
	L"Austin",			//Austin, Texas, USA	
	L"Bagdad",			//Baghdad, Iraq (Suddam Hussein's home)
	L"Drassen",			//The main place in JA2 that you can receive items.  The other towns are dummy names...
	L"Hong Kong",		//Hong Kong, Hong Kong
	L"Bejrut",			//Beirut, Lebanon	(Middle East)
	L"Londyn",			//London, England
	L"Los Angeles",	//Los Angeles, California, USA (SW corner of USA)
	L"Meduna",			//Meduna -- the other airport in JA2 that you can receive items.
	L"Metavira",		//The island of Metavira was the fictional location used by JA1
	L"Miami",				//Miami, Florida, USA (SE corner of USA)
	L"Moskwa",			//Moscow, USSR
	L"Nowy Jork",		//New York, New York, USA
	L"Ottawa",			//Ottawa, Ontario, Canada -- where JA2 was made!
	L"Pary�",				//Paris, France
	L"Trypolis",			//Tripoli, Libya (eastern Mediterranean)
	L"Tokio",				//Tokyo, Japan
	L"Vancouver",		//Vancouver, British Columbia, Canada (west coast near US border)
};

STR16 pSkillAtZeroWarning[] =
{ //This string is used in the IMP character generation.  It is possible to select 0 ability
	//in a skill meaning you can't use it.  This text is confirmation to the player.
	L"Na pewno? Warto�� zero oznacza brak jakichkolwiek umiej�tno�ci w tej dziedzinie.",
};

STR16 pIMPBeginScreenStrings[] =
{
	L"( Maks. 8 znak�w )",
};

STR16 pIMPFinishButtonText[ 1 ]=
{
	L"Analizuj�",
};

STR16 pIMPFinishStrings[ ]=
{
	L"Dzi�kujemy, %s", //%s is the name of the merc
};

// the strings for imp voices screen
STR16 pIMPVoicesStrings[] =
{
	L"G�os", 
};

STR16 pDepartedMercPortraitStrings[ ]=
{
	L"�mier� w akcji",
	L"Zwolnienie",
	L"Inny",
};

// title for program
STR16 pPersTitleText[] =
{
	L"Personel",
};

// paused game strings
STR16 pPausedGameText[] =
{
	L"Gra wstrzymana",
	L"Wzn�w gr� (|P|a|u|s|e)",
	L"Wstrzymaj gr� (|P|a|u|s|e)",
};


STR16 pMessageStrings[] =
{
	L"Zako�czy� gr�?",
	L"OK",
	L"TAK",
	L"NIE",
	L"ANULUJ",
	L"NAJMIJ",
	L"LIE",
	L"Brak opisu", //Save slots that don't have a description.
	L"Gra zapisana.",
	L"Gra zapisana.",
	L"Szybki zapis", //10	The name of the quicksave file (filename, text reference)
	L"SaveGame",	//The name of the normal savegame file, such as SaveGame01, SaveGame02, etc.
	L"sav",				//The 3 character dos extension (represents sav)
	L"..\\SavedGames", //The name of the directory where games are saved.
	L"Dzie�",
	L"Najemn.",
	L"Wolna pozycja", //An empty save game slot
	L"Demo",				//Demo of JA2
	L"Debug",				//State of development of a project (JA2) that is a debug build
	L"",			//Release build for JA2
	L"strz/min",					//20	Abbreviation for Rounds per minute -- the potential # of bullets fired in a minute.
	L"min",					//Abbreviation for minute.
	L"m",						//One character abbreviation for meter (metric distance measurement unit).
	L"kul",				//Abbreviation for rounds (# of bullets)
	L"kg",					//Abbreviation for kilogram (metric weight measurement unit)
	L"lb",					//Abbreviation for pounds (Imperial weight measurement unit)
	L"Strona g��wna",				//Home as in homepage on the internet.
	L"USD",					//Abbreviation to US dollars
	L"N/D",					//Lowercase acronym for not applicable.
	L"Tymczasem",		//Meanwhile
	L"%s przyby�(a) do sektora %s%s", //30	Name/Squad has arrived in sector A9.  Order must not change without notifying
																		//SirTech
	L"Wersja",
	L"Wolna pozycja na szybki zapis",
	L"Ta pozycja zarezerwowana jest na szybkie zapisy wykonywane podczas gry kombinacj� klawiszy ALT+S.",
	L"Otwarte",
	L"Zamkni�te",
	L"Brak miejsca na dysku twardym.  Na dysku wolne jest %s MB, a wymagane jest przynajmniej %s MB.",
	L"Naj�to - %s z A.I.M.", 
	L"%s z�apa�(a) %s",		//'Merc name' has caught 'item' -- let SirTech know if name comes after item.
	L"%s zaaplikowa�(a) sobie lekarstwo", //'Merc name' has taken the drug
	L"%s nie posiada wiedzy medycznej",//40	'Merc name' has no medical skill.

	//CDRom errors (such as ejecting CD while attempting to read the CD)
	L"Integralno�� gry zosta�a nara�ona na szwank.",
	L"B��D: Wyj�to p�yt� CD",

	//When firing heavier weapons in close quarters, you may not have enough room to do so.
	L"Nie ma miejsca, �eby st�d odda� strza�.",
	
	//Can't change stance due to objects in the way...
	L"Nie mo�na zmieni� pozycji w tej chwili.",

	//Simple text indications that appear in the game, when the merc can do one of these things.
	L"Upu��",
	L"Rzu�",
	L"Podaj",

	L"%s przekazano do - %s.", //"Item" passed to "merc".  Please try to keep the item %s before the merc %s, otherwise,
											 //must notify SirTech.
	L"Brak wolnego miejsca, by przekaza� %s do - %s.", //pass "item" to "merc".  Same instructions as above.

	//A list of attachments appear after the items.  Ex:  Kevlar vest ( Ceramic Plate 'Attached )'
	L" do��czono]",			// 50

	//Cheat modes
	L"Pierwszy poziom lamerskich zagrywek osi�gni�ty",
	L"Drugi poziom lamerskich zagrywek osi�gni�ty",

	//Toggling various stealth modes
	L"Oddzia� ma w��czony tryb skradania si�.",
	L"Oddzia� ma wy��czony tryb skradania si�.",
	L"%s ma w��czony tryb skradania si�.",
	L"%s ma wy��czony tryb skradania si�.",

	//Wireframes are shown through buildings to reveal doors and windows that can't otherwise be seen in 
	//an isometric engine.  You can toggle this mode freely in the game.
	L"Dodatkowe siatki w��czone.",
	L"Dodatkowe siatki wy��czone.",

	//These are used in the cheat modes for changing levels in the game.  Going from a basement level to
	//an upper level, etc.  
	L"Nie mo�na wyj�� do g�ry z tego poziomu...",
	L"Nie ma ju� ni�szych poziom�w...",		// 60
	L"Wej�cie na %d poziom pod ziemi�...",
	L"Wyj�cie z podziemii...",

	L"'s",		// used in the shop keeper inteface to mark the ownership of the item eg Red's gun
	L"Automatyczne centrowanie ekranu wy��czone.",
	L"Automatyczne centrowanie ekranu w��czone.",
	L"Kursor 3D wy��czony.",
	L"Kursor 3D w��czony.",
	L"Oddzia� %d aktywny.",
	L"%s - Nie sta� ci� by wyp�aci� jej/jemu dzienn� pensj� w wysoko�ci %s.",	//first %s is the mercs name, the seconds is a string containing the salary
	L"Pomi�",				// 70
	L"%s nie mo�e odej�� sam(a).",
	L"Utworzono zapis gry o nazwie SaveGame99.sav. W razie potrzeby zmie� jego nazw� na SaveGame01..10. Wtedy b�dzie mo�na go odczyta� ze standardowego okna odczytu gry.",
	L"%s wypi�(a) troch� - %s",
	L"Przesy�ka dotar�a do Drassen.",
 	L"%s przyb�dzie do wyznaczonego punktu zrzutu (sektor %s) w dniu %d, oko�o godziny %s.",		//first %s is mercs name, next is the sector location and name where they will be arriving in, lastely is the day an the time of arrival	
	L"Lista historii zaktualizowana.",
	L"Seria z granatnika u�ywa kursora celowania (dost�pny ogie� rozproszony)",		//L"Grenade Bursts use Targeting Cursor (Spread fire enabled)", BY�O -->>L"Grenade Bursts - Using Targeting Cursor (Spread fire enabled)",
	L"Seria z granatnika u�ywa kursora trajektorii (dost�pny ogie� rozproszony)",		//L"Grenade Bursts use Trajectory Cursor (Spread fire disabled)", BY�O -->L"Grenade Bursts - Using Trajectory Cursor (Spread fire disabled)",
	L"Enabled Soldier Tooltips", // Changed from Drop All On - SANDRO
	L"Disabled Soldier Tooltips", // Changed from Drop All Off - SANDRO
	L"Granatniki strzelaj� pod standardowymi k�tami",					//L"Grenade Launchers fire at standard angles", BY�o->>L"Grenade Launchers - Fire at standard angles",
	L"Granatniki strzelaj� pod wysokimi k�tami",						//L"Grenade Launchers fire at higher angles", BY�o-->>L"Grenade Launchers - Fire at high angles",
	// forced turn mode strings
    L"Forced Turn Mode",
	L"Normal turn mode",
	L"Exit combat mode",
	L"Forced Turn Mode Active, Entering Combat",
#ifdef JA2BETAVERSION
	L"Automatyczny zapis zosta� pomy�lnie wykonany.",
#endif
	L"..\\SavedGames\\MP_SavedGames", //The name of the directory where games are saved.
	L"Client",

	L"Nie mo�esz u�ywa� nowego trybu wyposa�enia i nowego systemu dodatk�w jednocze�nie.",
};


CHAR16 ItemPickupHelpPopup[][40] =
{
	L"OK",
	L"W g�r�",
	L"Wybierz wszystko",
	L"W d�",
	L"Anuluj",
};

STR16 pDoctorWarningString[] =
{
	L"%s jest za daleko, aby podda� si� leczeniu.",
	L"Lekarze nie mogli opatrzy� wszystkich rannych.",
};

STR16 pMilitiaButtonsHelpText[] =
{
	L"Podnie�(Prawy klawisz myszy)/upu��(Lewy klawisz myszy) Zielonych �o�nierzy", // button help text informing player they can pick up or drop militia with this button
	L"Podnie�(Prawy klawisz myszy)/upu��(Lewy klawisz myszy) Do�wiadczonych �o�nierzy",
	L"Podnie�(Prawy klawisz myszy)/upu��(Lewy klawisz myszy) Weteran�w",
	L"Umieszcza jednakow� ilo�� �o�nierzy samoobrony w ka�dym sektorze.",
};

STR16 pMapScreenJustStartedHelpText[] =
{
	L"Zajrzyj do A.I.M. i zatrudnij kilku najemnik�w (*Wskaz�wka* musisz otworzy� laptopa)", // to inform the player to hired some mercs to get things going
	L"Je�li chcesz ju� uda� si� do Arulco, kliknij przycisk kompresji czasu, w prawym dolnym rogu ekranu.", // to inform the player to hit time compression to get the game underway
};

STR16 pAntiHackerString[] = 
{
	L"B��d. Brakuje pliku, lub jest on uszkodzony. Gra zostanie przerwana.",
};


STR16 gzLaptopHelpText[] =
{
	//Buttons:
	L"Przegl�danie poczty",
	L"Przegl�danie stron internetowych",
	L"Przegl�danie plik�w i za��cznik�w pocztowych",
	L"Rejestr zdarze�",
	L"Informacje o cz�onkach oddzia�u",
	L"Finanse i rejestr transakcji",
	L"Koniec pracy z laptopem",

	//Bottom task bar icons (if they exist):
	L"Masz now� poczt�",
	L"Masz nowe pliki",

	//Bookmarks:
	L"Mi�dzynarodowe Stowarzyszenie Najemnik�w",
	L"Bobby Ray's - Internetowy sklep z broni�",
	L"Instytut Bada� Najemnik�w",
	L"Bardziej Ekonomiczne Centrum Rekrutacyjne",
	L"McGillicutty's - Zak�ad pogrzebowy",
	L"United Floral Service",
	L"Brokerzy ubezpieczeniowi",
};


STR16	gzHelpScreenText[] =
{
	L"Zamknij okno pomocy",	
};

STR16 gzNonPersistantPBIText[] =
{
	L"Trwa walka. Najemnik�w mo�na wycofa� tylko na ekranie taktycznym.",
	L"W|ejd� do sektora, aby kontynuowa� walk�.",
	L"|Automatycznie rozstrzyga walk�.",
	L"Nie mo�na automatycznie rozstrzygn�� walki, gdy atakujesz.",
	L"Nie mo�na automatycznie rozstrzygn�� walki, gdy wpadasz w pu�apk�.",
	L"Nie mo�na automatycznie rozstrzygn�� walki, gdy walczysz ze stworzeniami w kopalni.",
	L"Nie mo�na automatycznie rozstrzygn�� walki, gdy w sektorze s� wrodzy cywile.",
	L"Nie mo�na automatycznie rozstrzygn�� walki, gdy w sektorze s� dzikie koty.",
	L"TRWA WALKA",
	L"W tym momencie nie mo�esz si� wycofa�.",
};

STR16 gzMiscString[] =
{
	L"�o�nierze samoobrony kontynuuj� walk� bez pomocy twoich najemnik�w...",
	L"W tym momencie tankowanie nie jest konieczne.",
	L"W baku jest %d%% paliwa.",
	L"�o�nierze Deidranny przej�li ca�kowit� kontrol� nad - %s.",
	L"Nie masz ju� gdzie zatankowa�.",
};

STR16	gzIntroScreen[] = 
{
	L"Nie odnaleziono filmu wprowadzaj�cego",
};

// These strings are combined with a merc name, a volume string (from pNoiseVolStr),
// and a direction (either "above", "below", or a string from pDirectionStr) to 
// report a noise.
// e.g. "Sidney hears a loud sound of MOVEMENT coming from the SOUTH."
STR16 pNewNoiseStr[] =
{
	L"%s s�yszy %s D�WI�K dochodz�cy z %s.",
	L"%s s�yszy %s ODG�OS RUCHU dochodz�cy z %s.",
	L"%s s�yszy %s ODG�OS SKRZYPNI�CIA dochodz�cy z %s.",
	L"%s s�yszy %s PLUSK dochodz�cy z %s.",
	L"%s s�yszy %s ODG�OS UDERZENIA dochodz�cy z %s.",
	L"%s s�yszy %s WYBUCH dochodz�cy z %s.",
	L"%s s�yszy %s KRZYK dochodz�cy z %s.",
	L"%s s�yszy %s ODG�OS UDERZENIA dochodz�cy z %s.",
	L"%s s�yszy %s ODG�OS UDERZENIA dochodz�cy z %s.",
	L"%s s�yszy %s �OMOT dochodz�cy z %s.",
	L"%s s�yszy %s TRZASK dochodz�cy z %s.",
};

STR16 wMapScreenSortButtonHelpText[] =
{
	L"Sortuj wed�ug kolumny Imi� (|F|1)",
	L"Sortuj wed�ug kolumny Przydzia� (|F|2)",
	L"Sortuj wed�ug kolumny Sen (|F|3)",
	L"Sortuj wed�ug kolumny Lokalizacja (|F|4)",
	L"Sortuj wed�ug kolumny Cel podr�y (|F|5)",
	L"Sortuj wed�ug kolumny Wyjazd (|F|6)",
};



STR16		BrokenLinkText[] = 
{
	L"B��d 404",
	L"Nie odnaleziono strony.",
};


STR16 gzBobbyRShipmentText[] = 
{
	L"Ostatnie dostawy",
	L"Zam�wienie nr ",
	L"Ilo�� przedmiot�w",
	L"Zam�wiono:",
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
	L"(wci�� uczy si� interpunkcji)",					// Shaun Lyng
	L"(\"Sko�czone, tylko to posk�adam\")",	//Kris \"The Cow Rape Man\" Marnes
	L"(robi� si� na to za stary)",				// Ian Currie
	L"(i pracuje nad Wizardry 8)",						// Linda Currie
	L"(zmuszony pod broni� do ko�cowych test�w jako�ci produktu)",			// Eric \"WTF\" Cheng
	L"(Opu�ci� nas dla Stowarzyszenia na Rzecz Rozs�dnych Wynagrodze�. Ciekawe czemu... )",	// Lynn Holowka
	L"",																			// Norman \"NRG\" Olsen
	L"",																			// George Brooks
	L"(mi�o�nik zespo�u Dead Head i jazzu)",						// Andrew Stacey
	L"(tak naprawd� na imi� ma Robert)",							// Scot Loving
	L"(jedyna odpowiedzialna osoba)",					// Andrew \"Big Cheese Doddle\" Emmons
	L"(teraz mo�e wr�ci� do motocrossu)",	// Dave French
	L"(ukradziony z projektu Wizardry 8)",							// Alex Meduna
	L"(zrobi� przedmioty i ekrany wczytywania!!)",	// Joey \"Joeker\" Whelan",
};

STR16 sRepairsDoneString[] =
{
	L"%s sko�czy�(a) naprawia� w�asne wyposa�enie",
	L"%s sko�czy�(a) naprawia� bro� i ochraniacze wszystkich cz�onk�w oddzia�u",
	L"%s sko�czy�(a) naprawia� wyposa�enie wszystkich cz�onk�w oddzia�u",
	L"%s sko�czy�(a) naprawia� ci�kie wyposa�enie wszystkich cz�onk�w oddzia�u",
	L"%s sko�czy�(a) naprawia� �rednie wyposa�enie wszystkich cz�onk�w oddzia�u",
	L"%s sko�czy�(a) naprawia� lekkie wyposa�enie wszystkich cz�onk�w oddzia�u",
	L"%s sko�czy�(a) naprawia� str�j LBE wszystkich cz�onk�w oddzia�u",
};

STR16 zGioDifConfirmText[]=
{
	L"Wybrano opcj� NOWICJUSZ. Opcja ta jest przeznaczona dla niedo�wiadczonych graczy, lub dla tych, kt�rzy nie maj� ochoty na d�ugie i ci�kie walki. Pami�taj, �e opcja ta ma wp�yw na przebieg ca�ej gry. Czy na pewno chcesz gra� w trybie Nowicjusz?",
	L"Wybrano opcj� DO�WIADCZONY. Opcja ta jest przenaczona dla graczy posiadaj�cych ju� pewne do�wiadczenie w grach tego typu. Pami�taj, �e opcja ta ma wp�yw na przebieg ca�ej gry. Czy na pewno chcesz gra� w trybie Do�wiadczony?",
	L"Wybrano opcj� EKSPERT. Jakby co, to ostrzegali�my ci�. Nie obwiniaj nas, je�li wr�cisz w plastikowym worku. Pami�taj, �e opcja ta ma wp�yw na przebieg ca�ej gry. Czy na pewno chcesz gra� w trybie Ekspert?",
	L"Wybrano opcj� SZALONY. OSTRZE�ENIE: Nie obwiniaj nas, je�li wr�cisz w malutkich kawa�eczkach... Deidranna NAPRAWD� skopie ci ty�ek. Mocno. Pami�taj, �e opcja ta ma wp�yw na przebieg ca�ej gry. Czy na pewno chcesz gra� w trybie SZALONY?",
};

STR16 gzLateLocalizedString[] =
{
	L"%S - nie odnaleziono pliku...",

	//1-5
	L"Robot nie mo�e opu�ci� sektora bez operatora.",

	//This message comes up if you have pending bombs waiting to explode in tactical.
	L"Nie mo�na teraz kompresowa� czasu.  Poczekaj na fajerwerki!",  

	//'Name' refuses to move.
	L"%s nie chce si� przesun��.",

	//%s a merc name
	L"%s ma zbyt ma�o energii, aby zmieni� pozycj�.",

	//A message that pops up when a vehicle runs out of gas.
	L"%s nie ma paliwa i stoi w sektorze %c%d.",

	//6-10

	// the following two strings are combined with the pNewNoise[] strings above to report noises
	// heard above or below the merc
	L"G�RY",
	L"DO�U",

	//The following strings are used in autoresolve for autobandaging related feedback.
	L"�aden z twoich najemnik�w nie posiada wiedzy medycznej.",
	L"Brak �rodk�w medycznych, aby za�o�y� rannym opatrunki.",
	L"Zabrak�o �rodk�w medycznych, aby za�o�y� wszystkim rannym opatrunki.",
	L"�aden z twoich najemnik�w nie potrzebuje pomocy medycznej.",
	L"Automatyczne zak�adanie opatrunk�w rannym najemnikom.",
	L"Wszystkim twoim najemnikom za�o�ono opatrunki.",

	//14
	L"Arulco",

  L"(dach)",

	L"Zdrowie: %d/%d",

	//In autoresolve if there were 5 mercs fighting 8 enemies the text would be "5 vs. 8"
	//"vs." is the abbreviation of versus.
	L"%d vs. %d",
	
	L"%s - brak wolnych miejsc!",  //(ex "The ice cream truck is full")

  L"%s nie potrzebuje pierwszej pomocy lecz opieki lekarza lub d�u�szego odpoczynku.",

	//20
	//Happens when you get shot in the legs, and you fall down.
	L"%s dosta�(a) w nogi i upad�(a)!",
	//Name can't speak right now.
	L"%s nie mo�e teraz m�wi�.",

	//22-24 plural versions 
	L"%d zielonych �o�nierzy samoobrony awansowa�o na weteran�w.",
	L"%d zielonych �o�nierzy samoobrony awansowa�o na regularnych �o�nierzy.",
	L"%d regularnych �o�nierzy samoobrony awansowa�o na weteran�w.",

	//25
	L"Prze��cznik",

	//26
	//Name has gone psycho -- when the game forces the player into burstmode (certain unstable characters)
	L"%s dostaje �wira!",

	//27-28
	//Messages why a player can't time compress.
	L"Niebezpiecznie jest kompresowa� teraz czas, gdy� masz najemnik�w w sektorze %s.",
	L"Niebezpiecznie jest kompresowa� teraz czas, gdy� masz najemnik�w w kopalni zaatakowanej przez robale.",

	//29-31 singular versions 
	L"1 zielony �o�nierz samoobrony awansowa� na weterana.",
	L"1 zielony �o�nierz samoobrony awansowa� na regularnego �o�nierza.",
	L"1 regularny �o�nierz samoobrony awansowa� na weterana.",

	//32-34
	L"%s nic nie m�wi.",
	L"Wyj�� na powierzchni�?",
	L"(Oddzia� %d)",

	//35
	//Ex: "Red has repaired Scope's MP5K".  Careful to maintain the proper order (Red before Scope, Scope before MP5K)
	L"%s naprawi�(a) najemnikowi - %s, jego/jej - %s",

	//36
	L"DZIKI KOT",

	//37-38 "Name trips and falls"
	L"%s potyka si� i upada",
	L"Nie mo�na st�d podnie�� tego przedmiotu.",

	//39
	L"�aden z twoich najemnik�w nie jest w stanie walczy�.  �o�nierze samoobrony sami b�d� walczy� z robalami.",

	//40-43
	//%s is the name of merc.
	L"%s nie ma �rodk�w medycznych!",
	L"%s nie posiada odpowiedniej wiedzy, aby kogokolwiek wyleczy�!",
	L"%s nie ma narz�dzi!",
	L"%s nie posiada odpowiedniej wiedzy, aby cokolwiek naprawi�!",

	//44-45
	L"Czas naprawy",
	L"%s nie widzi tej osoby.",

	//46-48
	L"%s - przed�u�ka lufy jego/jej broni odpada!",
	L"W tym sektorze mo�e by� maks. %d instruktor�w szkol�cych samoobron�.",
  	L"Na pewno?",

	//49-50
	L"Kompresja czasu",
	L"Pojazd ma pe�ny zbiornik paliwa.",

	//51-52 Fast help text in mapscreen.
	L"Kontynuuj kompresj� czasu (|S|p|a|c|j|a)",
	L"Zatrzymaj kompresj� czasu (|E|s|c)",

	//53-54 "Magic has unjammed the Glock 18" or "Magic has unjammed Raven's H&K G11" 
	L"%s odblokowa�(a) - %s",
	L"%s odblokowa�(a) najemnikowi - %s, jego/jej - %s",

	//55 
	L"Nie mo�na kompresowa� czasu, gdy otwarty jest inwentarz sektora.",

	L"Nie odnaleziono p�yty nr 2 Jagged Alliance 2.",

	L"Przedmioty zosta�y pomy�lnie po��czone.",
	
	//58
	//Displayed with the version information when cheats are enabled.
	L"Bie��cy/Maks. post�p: %d%%/%d%%",

	L"Eskortowa� Johna i Mary?",
	
	// 60
	L"Prze��cznik aktywowany.",

	L"%s: dodatki do pancerza zosta�y zniszczone!",
	L"%s wystrzeli�(a) %d pocisk(�w) wi�cej ni� to by�o zamierzone!",
	L"%s wystrzeli�(a) 1 pocisk(�w) wi�cej ni� to by�o zamierzone!",
};

STR16 gzCWStrings[] = 
{
	L"Wezwa� posi�ki do %s z przyleg�ych sektor�w?",
};

// WANNE: Tooltips
STR16 gzTooltipStrings[] =
{
	// Debug info
	L"%s|Miejsce: %d\n",
	L"%s|Jasno��: %d / %d\n",
	L"%s|Odleg�o�� do |Celu: %d\n",
	L"%s|I|D: %d\n",
	L"%s|Rozkazy: %d\n",
	L"%s|Postawa: %d\n",
	L"%s|Aktualne |P|A: %d\n",
	L"%s|Aktualne |Zdrowie: %d\n",
	// Full info
	L"%s|He�m: %s\n",
	L"%s|Kamizelka: %s\n",
	L"%s|Getry ochronne: %s\n",
	// Limited, Basic
	L"|Pancerz: ",
	L"he�m ",
	L"kamizelka ",
	L"getry ochronne",
	L"u�ywane",
	L"brak pancerza",
	L"%s|N|V|G: %s\n",
	L"brak NVG",
	L"%s|Maska |Gazowa: %s\n",
	L"brak maski gazowej",
	L"%s|Pozycja |G�owy |1: %s\n",
	L"%s|Pozycja |G��w |2: %s\n",
	L"\n(w plecaku) ",
	L"%s|Bro�: %s ",
	L"brak broni",
	L"rewolwer",
	L"SMG",
	L"karabin",
	L"MG",
	L"strzelba",
	L"n�",
	L"bro� Ci�ka",
	L"brak he�mu",
	L"brak kamizelki",
	L"brak getr�w ochronnych",
	L"|Pancerz: %s\n", 
	 // Added - SANDRO
	L"%s|Umiej�tno�� 1: %s\n",
	L"%s|Umiej�tno�� 2: %s\n", 
	L"%s|Umiej�tno�� 3: %s\n",
};

STR16 New113Message[] =
{
	L"Nadesz�a burza.",
	L"Burza sko�czy�a si�.",
	L"Rozpada� si� deszcz.",
	L"Deszcz przesta� pada�.",
	L"Uwa�aj na snajper�w...",
	L"Ogie� d�awi�cy!",	
	L"BRST",
	L"AUTO",
	L"GL",
	L"GL BRST",
	L"GL AUTO",
	L"Snajper!",
	L"Nie mo�na podzieli� pieni�dzy z powodu przedmiotu na kursorze.",
	L"Przybycie nowych rekrut�w zosta�o przekierowane do sektora %s , z uwagi na to, �e poprzedni punkt zrzutu w sektorze %s jest zaj�ty przez wroga.",
	L"Przedmiot usuni�ty",
	L"Usuni�to wszystkie przedmioty tego typu",
	L"Przedmiot sprzedany",
	L"Wszystkie przedmioty tego typu sprzedane",
	L"Sprawd� swoje gogle",
	// Real Time Mode messages
	L"W trakcie walki",
	L"Brak wrog�w w zasi�gu wzroku",
	L"Wy��czone skradanie w czasie rzeczywistym",
	L"W��czone skradanie w czasie rzeczywistym",
	//L"Spotkano wroga! (Ctrl + x by uruchomi� tryb turowy)",
	L"Spotkano wroga!", // this should be enough - SANDRO
	//////////////////////////////////////////////////////////////////////////////////////
	// These added by SANDRO
	L"%s dokona�(a) udanej kradzie�y!",
	L"%s nie posiada wystarczaj�cej liczby PA by ukra�� wszystkie zaznaczone przedmioty.",
	L"Chcesz operowa� %s zanim u�yjesz banda�y? (mo�esz przywr�ci� oko�o %i punkt�w zdrowia.)",
	L"Chcesz operowa� %s zanim u�yjesz banda�y? (mo�esz przywr�ci� oko�o %i punkt�w zdrowia.)",
	L"Czy chcesz najpierw operowa� przed u�yciem banda�y? (%i pacjent(�w))",
	L"Czy chcesz najpierw operowa� pacjenta?",
	L"Czy podczas udzielania pierwszej pomocy wykonywa� niezb�dne operacje?",
	L"operacja na %s zako�czona.",
	L"%s otrzymuje trafienie w korpus i traci punkt maksymalnego zdrowia!",
	L"%s otrzymuje trafienie w korpus i traci %d punkt�w maksymalnego zdrowia!",
	L"%s odzyska�(a) utracony punkt %s",
	L"%s odzyska�(a) %d utraconych punkt�w %s",
	L"Twoja umiej�tno�� zwiadowcy uchroni�a ci� przed zasadzk�!",
	L"Twoja umiej�tno�� zwiadowcy pozwoli�a ci omin�� stado krwawych kot�w!",
	L"%s zosta� trafiony w pachwin� i pada na ziemi�!",
	//////////////////////////////////////////////////////////////////////////////
};

STR16 New113HAMMessage[] = 
{
	// 0 - 5
	L"%s kuli si� ze strachu!",
	L"%s zosta� przyparty do muru!",
	L"%s odda�(a) wi�cej strza��w ni� zamierza�(a)!",
	L"Nie mo�esz szkoli� samoobrony w tym sektorze.",
	L"Samoobrona znajduje %s.",
	L"Nie mo�na szkoli� samoobrony, gdy wr�g jest w sektorze!", 
	// 6 - 10
	L"%s Brak odpowiednich umiej�tno�ci dowodzenia do szkolenia samoobrony.",
	L"W tym sektorze jest dozwolonych nie wi�cej ni� %d instruktor�w samoobrony.",
	L"W %s oraz okolicy nie ma miejsca dla nowych oddzia��w samoobrony!",
	L"Musisz mie� conajmniej %d jednostek samoobrony w ka�dym z %s wyzwolonych sektor�w zanim b�dziesz m�g� szkoli� tu nowe oddzia�y.",
	L"Nie mo�esz obsadzi� fabryki dop�ki w okolicy s� wrogie jednostki!",  // not sure
	// 11 - 15
	L"%s zbyt niska inteligencja do obsadzenia tej fabryki.",
	L"%s posiada ju� maksymaln� liczb� personelu.",
	L"Obsadzenie tej fabryki b�dzie kosztowa� $%d za godzin�. Chcesz kontynuowa�?",
	L"Nie posiadasz funduszy potrzebnych na op�acenie wszystkich fabryk. Zap�acono $%d, ale wci�� pozosta�o $%d do zap�aty. Tubylcy s� zaniepokojeni.",
	L"Nie posiadasz funduszy potrzebnych na op�acenie wszystkich fabryk. Pozosta�o $%d do zap�aty. Tubylcy s� zaniepokojeni.",
	// 16 - 20
	L"Zalegasz $%d dla Fabryki i nie posiadasz funduszy umo�liwiaj�cych sp�at� d�ugu!",
	L"Zalegasz $%d dla Fabryki!. Nie mo�esz przydzieli� tego najemnika do fabryki do momentu sp�aty d�ugu.",
	L"Zalegasz $%d dla Fabryki!. Czy chcesz sp�aci� ten d�ug?",
	L"Niedost�pny w tym sektorze",
	L"Dzienne wydatki",
	// 21 - 25
	L"Brak funduszy do op�acenia wykazanych jednostek samoobrony! %d jednostek opuszcza oddzia�y i wraca do domu.",
};

// WANNE: This are the email texts, when one of the 4 new 1.13 MERC mercs have levelled up, that Speck sends
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16	New113MERCMercMailTexts[] =
{
	// Gaston: Text from Line 39 in Email.edt
	L"Niniejszym informuj�, i� w zwi�zku z dotychczasowymi osi�gni�ciami Gastona, op�ata za jego us�ugi zosta�a podniesiona. Osobi�cie, nie jestem tymfaktem zaskoczony.  � � Speck T. Kline � ",
	// Stogie: Text from Line 43 in Email.edt
	L"Informujemy, i� od chwili obecnej cena za us�ugi �wiadczone przez pana Stoggiego wzros�a w zwi�zku ze wzrostem jego umiej�tno�ci. � � Speck T. Kline � ", 
	// Tex: Text from Line 45 in Email.edt
	L"Informujemy, i� nabyte przez Texa do�wiadczenie upowa�nia go do wy�szego wynagrodzenia, z tego wzgl�du jego wynagrodzenie zosta�o zwi�kszone w celu lepszego odzwierciedlenia jego warto�ci. � � Speck T. Kline � ",
	// Biggens: Text from Line 49 in Email.edt
	L"Prosz� o zwr�cenie uwagi, i� w zwi�zku ze wzrostem jako�ci us�ug �wiadczonych przez pana Biggens`a jego pensja tak�e uleg�a podwy�szeniu. � � Speck T. Kline � ",
};

// TODO.Translate
// WANNE: This is email text (each 2 line), when we left a message on AIM and now the merc is back
STR16	New113AIMMercMailTexts[] =
{
	// Monk
	L"PD z Serwera AIM: Wiadomo�� od - Victor Kolesnikov",
	L"Hej, tu Monk. Dosta�em Twoj� wiadomo��. Ju� jestem z powrotem  - je�li chcesz si� skontaktowa�. � � Zadzwo�. �",

	// Brain
	L"PD z Serwera AIM: Wiadomo�� od - Janno Allik",
	L"Jestem ju� got�w do przyj�cia nowego zadania. Wszystko musi mie� swoj� por�. � � Janno Allik �",

	// Scream
	L"PD z Serwera AIM: Wiadomo�� od - Lennart Vilde",
	L"Lennart Vilde jest obecnie dost�pny! �",

	// Henning
	L"PD z Serwera AIM: Wiadomo�� od - Henning von Branitz",
	L"Otrzyma�em Twoj� wiadomo��, dzi�kuj�. Je�li chcesz om�wi� mo�liwo�� zatrudnienia, skontaktuj si� ze mn� za po�rednictwem strony AIM . � � Na razie! � � Henning von Branitz �",

	// Luc
	L"PD z Serwera AIM: Wiadomo�� od - Luc Fabre",
	L"Otrzyma�em wiadomo��, merci! Ch�tnie rozwa�� Twoje propozycje. Wiesz, gdzie mnie znale��. � � Oczekuj� odpowiedzi �",

	// Laura
	L"PD z Serwera AIM: Wiadomo�� od - Laura Colin",
	L"Pozdrowienia! Dobrze, �e zostawi�e� wiadomo��.  Sprawa wygl�da interesuj�co. � � Zajrzyj jeszcze raz do AIM. Ch�tnie poznam wi�cej informacji. � � Wyrazy szacunku � � Dr Laura Colin �",

	// Grace
	L"PD z Serwera AIM: Wiadomo�� od - Graziella Girelli",
	L"Chcia�e� si� ze mn� skontaktowa�, ale Ci si� nie uda�o.� � Mia�am spotkanie rodzinne, na pewno to rozumiesz. Teraz mam ju� do�� swojej rodziny i bardzo si� uciesz�, je�li skontaktujesz si� ze mn� ponownie za po�rednictwem witryny AIM . � � Ciao! �",

	// Rudolf
	L"PD z Serwera AIM: Wiadomo�� od - Rudolf Steiger",
	L"Wiesz, ile telefon�w odbieram ka�dego dnia? Co drugi baran my�li, �e mo�e do mnie wydzwania�.  � � W ka�dym razie ju� jestem, je�li masz dla mnie co� ciekawego.�",
};

// WANNE: These are the missing skills from the impass.edt file
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16 MissingIMPSkillsDescriptions[] =
{
	// Sniper
	L"Snajper: Sokole oczy! Mo�esz odstrzeli� skrzyd�a muszce ze stu jard�w. � ",
	// Camouflage
	L"Kamufla�: Przy tobie nawet krzaki wygl�daj� na sztuczne! � ",	
	// SANDRO - new strings for new traits added
	// Ranger
	L"Stra�nik: To ty jeste� tym z pustyni Teksasu! � ",	
	// Gunslinger
	L"Rewolwerowiec: Z pistoletem lub dwoma, mo�esz by� tak �mierciono�ny jak Billy Kid! � ",
	// Squadleader
	L"Przyw�dca: Urodzony dow�dca i szef, jeste� naprawd� grub� ryb� bez kitu! � ",
	// Technician
	L"Mechanik: Naprawa sprz�tu, rozbrajanie pu�apek, podk�adanie bomb, to twoja dzia�ka! � ",
	// Doctor
	L"Chirurg: Mo�esz przeprowadzi� skomplikowan� operacj� przy u�yciu scyzoryka i gumy do �ucia! � ",
	// Athletics
	L"Atleta: Kondycji m�g�by ci pozazdro�ci� niejeden marato�czyk! � ",
	// Bodybuilding
	L"Budowa cia�a: Ta ogromna muskularna posta�, kt�rej nie spos�b przeoczy�, to w rzeczy samej ty! � ",
	// Demolitions
	L"Materia�y wybuchowe: Potrafisz wysadzi� miasto przy u�yciu standardowego wyposa�enia kuchni! � ",
	// Scouting
	L"Zwiadowca: Nic nie umknie twej uwadze! � ",
};

STR16 NewInvMessage[] = 
{
	L"Nie mo�esz teraz podnie�� plecaka.",
	L"Nie ma miejsca, aby po�o�y� tutaj plecak",
	L"Nie znaleziono plecaka",
	L"Zamek b�yskawiczny dzia�a tylko podczas walki.",
	L"Nie mo�esz si� przemieszcza�, gdy zamek plecaka jest aktywny.",
	L"Na pewno chcesz sprzeda� wszystkie przedmioty z tego sektora?",
	L"Na pewno chcesz skasowa� wszystkie przedmioty z tego sektora?",
	L"Nie mo�na wspina� si� z plecakiem",
};

// WANNE - MP: Multiplayer messages
STR16 MPServerMessage[] =
{
	// 0
	L"Inicjacja serwera RakNet...",
	L"Serwer w�., oczekiwanie na po��czenie",
	L"Musisz teraz po��czy� swojego klienta z serwerem, wciskaj�c 2",
	L"Serwer ju� dzia�a",
	L"W�. nie powiod�o si�. Przerwanie.",
	// 5
	L"%d/%d klient�w gotowych na tryb realtime.",
	L"Serwer roz��czony i wy�.",
	L"Serwer nie dzia�a",
	L"�adowanie klient�w, czekaj.",
	L"Nie mo�na zmienia� miejsc zrzutu po starcie serwera.",
	// 10
	L"Wys�ano '%S' pliku - 100/100",
	L"Zako�czono wysy�anie plik�w do '%S'.",
	L"Rozpocz�to wysy�anie plik�w do '%S'.",
};

STR16 MPClientMessage[] =
{
	// 0
	L"Inicjacja klienta RakNet�",
	L"��czenie z IP: %S ...",
	L"Otrzymano ustawienia:",
	L"Jeste� ju� po��czony.",
	L"Jeste� ju� w trakcie ��czenia",
	// 5
	L"Klient #%d - '%S' wynaj�� '%s'.",
	L"Klient #%d - '%S' has hired another merc.",
	L"Gotowy! Wszystkich gotowych - %d/%d.",
	L"Nie jeste� ju� gotowy. Gotowych - %d/%d.",
	L"Pocz�tek bitwy...",
	// 10
	L"Klient #%d - '%S' jest got�w. Gotowych - %d/%d.",
	L"Klient #%d - '%S' nie jest ju� gotowy. Gotowych - %d/%d",
	L"Jeste� got�w. Czekanie na pozosta�ych� Naci�nij OK., je�li ju� nie jeste� got�w.",
	L"Zaczynajmy ju�!",
	L"Klient A musi dzia�a�, by zacz�� gr�.",
	// 15
	L"Nie mo�na zacz��. Brak najemnik�w.",
	L"Czekaj na zgod� serwera, by odblokowa� laptopa�",
	L"Przerwano",
	L"Koniec przerwania",
	L"Po�o�enie siatki myszy:",
	// 20
	L"X: %d, Y: %d",
	L"Numer siatki %d",
	L"W�a�ciwo�ci serwera",
	L"Ustaw r�cznie stopie� nadrz�dno�ci serwera: �1� � w�.laptop/rekrut.; �2�- w�./�aduj poziom; �3� � odblok. UI; �4� � ko�czy rozmieszczanie",	
	L"Sektor=%s, MaxKlient�w=%d, Max Najem=%d, Tryb_Gry=%d, TenSamNaj=%d, Mno�nik obra�.=%f, TuryCzas=%d, Sek/ruch=%d, Dis BobbyRay=%d, Wy� Aim/Merc Ekwip=%d, Wy� morale=%d, Test=%d",
	// 25
	L"",
	L"Nowe po��czenie Client #%d - '%S'.",
	L"Dru�yna: %d.",//not used any more
	L"'%s' (klient %d - '%S') zabity przez '%s' (client %d - '%S')",
	L"Wyrzucono #%d - '%S'",
	// 30
	L"Zacz�� tur� dla klient�w nr: #1 - '%S' | #2 - '%S' | #3 - '%S' | #4 - '%S'",
	L"Pocz�tek tury dla #%d",
	L"��danie trybu realtime�",
	L"Zmieniono w tryb realtime.",
	L"B��d. Co� posz�o nie tak przy prze��czaniu.",
	// 35
	L"Odblokowa� laptopy? (Czy gracze s� ju� pod��czeni?)",
	L"Serwer odblokowa� laptopa. Zaczynaj rekrutowa�!",
	L"Przerywaj�cy",
	L"Nie mo�esz zmienia� strefy zrzutu, je�li nie  jeste� serwerem gry.",
	L"Odrzuci�e� ofert� poddania si�, gdy� grasz w trybie Multiplayer.",
	// 40
	L"Wszyscy twoi ludzie s� martwi!",
	L"Tryb obserwatora w�..",
	L"Zosta�e� pokonany!",
	L"Wspinanie wy��czone w MP",
	L"Wynaj�to '%s'",
	// 45
	L"Nie mo�esz zmieni� mapy w trakcie dokonywania zakupu",
	L"Mapa zmieniona na '%s'",
	L"Klient '%s' roz��czony, usuwanie z gry",
	L"Zosta�e� roz��czony, powr�t do g��wnego menu",
	L"Pr�ba po��czenia zako�czona niepowodzeniem, kolejna por�ba za 5 sekund, %i pr�b pozosta�o...",
	//50
	L"Pr�ba po��czenia zako�czona niepowodzeniem, rezygnacja z kolejnych pr�b...",
	L"Nie mo�esz rozpocz�� gry dop�ki nie s� pod��czeni inni gracze",
	L"%s : %s",
	L"Wy�lij do wszystkich",
	L"Wy�lij do sprzymierze�c�w",
	// 55
	L"Nie mo�na do��czy� do gry. Ta gra ju� si� rozpocz�a",
	L"%s (dru�yna): %s",
	L"#%i - '%s'",
	L"%S - 100/100",
	L"%S - %i/100",
	// 60
	L"Pobrano wszystkie pliki z serwera.",
	L"Pobrano '%S' z serwera",
	L"Rozpocz�to pobieranie '%s' z serwera",
	L"Nie mo�na rozpocz�� gry dop�ki wszyscy nie zako�cz� pobierania plik�w z serwera",
	L"Ten serwer przed rozpocz�ciem gry wymaga pobrania zmodyfikowanych plik�w, czy chcesz kontynuowa�",
	// 65
	L"Naci�nij 'Gotowe' aby przej�� do ekranu taktycznego",
	L"Nie mo�na si� po��czy� poniewa� twoja wersja %S r�ni si� od wersji %S na serwerze.",
	L"Zabi�e� wrog� jednostk�",
	L"Nie mo�na do��czy� do gry. Ta gra ju� si� rozpocz�a",
	L"The server has choosen New Inventory (NIV), but your screen resolution does not support NIV.",
	// 70		// TODO.Translate
	L"Could not save received file '%S'",
	L"%s's bomb was disarmed by &s",
	L"You loose, what a shame",	// All over red rover
	L"Spectator mode disabled",
	L"Choose client number to kick:",
	// 75
	L"Team #%d is wiped out.",
	L"Client failed to start. Terminating.",
	L"Client disconnected and shutdown.",
	L"Client is not running.",
};

STR16 gszMPEdgesText[] =
{
	L"Pn", //- P�noc
	L"Pd", //- Po�udnie
	L"W", //- Wsch�d
	L"Z", //- Zach�d
	L"C",   // "C" - Centralny
};

STR16 gszMPTeamNames[] =
{
	L"Foxtrot",
	L"Bravo",
	L"Delta",
	L"Charlie",
	L"N/D",         // Acronym of Not Applicable
};

STR16 gszMPMapscreenText[] =
{
	L"Tryb gry: ",
	L"Gracze: ",
	L"Mercs each: ",
	L"Nie mo�esz zmieni� pocz�tkowego wierzcho�ka dop�ki laptop jest odblokowany.",
	L"Nie mo�esz zmienia� dru�yn dop�ki laptop jest odblokowany.",
	L"Losowi najemnicy: ",
	L"T", //if "Y" means Yes here
	L"Poziom trudno�ci:",
	L"Wersja serwera:",
};

STR16 gzMPSScreenText[] =
{
	L"Tabela punkt�w",
	L"Kontynuuj",
	L"Anuluj",
	L"Gracz",
	L"Zabitych",
	L"Liczba zgon�w",
	L"Armia kr�lowej",
	L"Trafienia",
	L"Strza�y chybione",
	L"Celno��",
	L"Obra�enia zadane",
	L"Obra�enia otrzymane",
	L"Czekaj na po��czenie z serwerem aby nacisn�� 'Kontynuuj'",
};

STR16 gzMPCScreenText[] =
{
	L"Anuluj",
	L"��czenie z serwerem",
	L"Pobieranie ustawie� serwera",
	L"Pobieranie plik�w",
	L"Naci�nij 'ESC' aby anulowa� lub 'Y' aby wej�� na chat",
	L"Naci�nij 'ESC'aby anuowa�",
	L"Gotowe",
};

STR16 gzMPChatToggleText[] =
{
	L"Wy�lij do wszystkich",
	L"Wy�lij do sprzymierze�c�w",
};

STR16 gzMPChatboxText[] =
{
	L"Multiplayer Chat",
	L"Chat: Naci�nij 'ENTER' aby wys�a� lub 'ESC' by anulowa�",
};

// Following strings added - SANDRO
STR16 pSkillTraitBeginIMPStrings[] =
{
	// Odno�nie starych umiej�tno�ci
	L"Na nast�pnej stronie, wybierzesz umiej�tno�ci dotycz�ce twojej specjalizacji jako najemnika. Nie mo�na wybra� wi�cej ni� dw�ch r�nych umiej�tno�ci, albo jednej w stopniu eksperta.",
	
	//L"Mo�esz tak�e wybra� jedn�, albo nawet nie wybra� �adnej umiej�tno�ci, co da ci bonus do liczby punkt�w atrybut�w. Zauwa�, �e elektronika i obur�czno�� nie mog� by� wybrane w stopniu eksperta.",

	// TODO.Translate (added Camouflage)
	L"You can also choose only one or even no traits, which will give you a bonus to your attribute points as a compensation. Note that Electronics, Ambidextrous and Camouflage traits cannot be achieved at expert levels.",

	// Odno�nie nowych/pomniejszych umiej�tno�ci
	L"Nast�pny etap dotyczy wybierania umiej�tno�ci dotycz�cych twojej specjalizacji jako najemnika. Na pierwszej stronie, mo�esz wybra� do dw�ch g��wnych umiej�tno�ci, kt�re reprezentuj� twoj� rol� w zespole. Druga strona to lista pomniejszych cech, kt�re reprezentuj� twoj� osobowo��.",
	L"Wybranie wi�cej ni� trzech jednocze�nie jest niemo�liwe. Oznacza to, �e je�eli nie wybierzesz �adnych g��wnych umiej�tno�ci, mo�esz wybra� trzy pomniejsze cechy. Je�li wybierzesz 2 g��wne umiej�tno�ci (albo jedn� zaawansowan�), mo�esz wybra� tylko jedn� cech� dodatkow�...",
};

STR16 sgAttributeSelectionText[] = 
{
	L"Prosz�, wybierz swoje atrybuty fizyczne zgodnie z twoimi prawdziwymi umiej�tno�ciami. Nie mo�esz podnie�� �adnego z powy�szych wynik�w.",
	L"Przegl�d atrybut�w i umiej�tno�ci I.M.P..",
	L"Punkty bonusowe.:",
	L"Poziom startowy",
	// New strings for new traits
	L"Na nast�pnej stronie wybierzesz swoje atrybuty fizyczne i umiej�tno�ci. 'Atrybuty' to: zdrowie, zwinno��, zr�czno��, si�a oraz inteligencja. Atrybuty nie mog� by� ni�sze ni� %d.",
	L"Reszta to 'umiej�tno�ci', w przeciwie�stwie do atrybut�w, mog� by� ustawione na zero, co oznacza, �e nie masz w nich kompletnie �adnej wprawy.",
	L"Wszystkie punkty s� na pocz�tku ustawione na minimum. Zauwa�, �e niekt�re atrybuty s� ustawione na warto�ciach, co ma zwi�zek z wcze�niej wybranymi umiej�tno�ciami. Nie mo�esz ustawi� ich ni�ej.",
};

STR16 pCharacterTraitBeginIMPStrings[] =
{
	L"Analiza charakteru I.M.P.",
	L"Analiza charakteru to nast�pny krok w tworzeniu twojego profile. Na pierwszej stronie zostanie ci przedstawiona lista cech charakteru do wybrania. Domy�lamy si�, �e mo�esz identyfikowa� si� z wi�ksz� ich ilo�ci�, jednak b�dziesz m�g� wybra� tylko jedn�. Wybierz tak�, z kt�r� czujesz si� najbardziej zwi�zany.",
	L"Druga strona przedstawia list� niepe�nosprawno�ci, na kt�re mo�esz cierpie�. Je�li cierpisz na jedn� z nich, wybierz j� (wierzymy, �e ka�dy ma tylko jedn� tak� niepe�nosprawno��). B�d� szczery, poniewa� to wa�ne, by poinformowa� potencjalnych pracodawc�w o twoim faktycznym stanie zdrowia.",
};

STR16 gzIMPAttitudesText[]=
{
	L"Normalny",
	L"Przyjazny",
	L"Samotnik",
	L"Optymista",
	L"Pesymista",
	L"Agresywny",
	L"Arogancki",
	L"Gruba ryba",
	L"Dupek",
	L"Tch�rz",
	L"Nastawienie I.M.P.-a",
};

STR16 gzIMPCharacterTraitText[]=
{
	L"Normalny",
	L"Towarzyski",
	L"Samotnik",
	L"Optymista",
	L"Asertywny",
	L"Intelektualista",
	L"Prymityw",
	L"Agresywny",
	L"Flegmatyk",
	L"Nieustraszony",
	L"Pacyfista",
	L"Podst�pny",
	L"Gwiazdor",
	L"Cechy charakteru I.M.P.-a",
};

STR16 gzIMPColorChoosingText[] = 
{
	L"Kolory i sylwetka cia�a I.M.P.-a",
	L"Kolory I.M.P.",
	L"Prosz� wybra� odpowiednie kolory sk�ry, w�os�w i ubra� oraz swoj� sylwetk� cia�a.",
	L" Prosz� wybra� odpowiednie kolory sk�ry, w�os�w i ubra�.",
	L"Zaznacz, by u�ywa� alternatywnego sposobu trzymania broni.",
	L"\n(Uwaga: b�dziesz potrzebowa� do tego du�ej si�y.)",
};

STR16 sColorChoiceExplanationTexts[]=
{
	L"Kolor w�os�w",
	L"Kolor sk�ry",
	L"Kolor koszulki",
	L"Kolor spodni",
	L"Normalne cia�o",
	L"Du�e cia�o",
};

STR16 gzIMPDisabilityTraitText[]=
{
	L"Bez niepe�nosprawno�ci",
	L"Nie lubi ciep�a",
	L"Nerwowy",
	L"Klaustrofobik",
	L"Nie umie p�ywa�",
	L"Boi si� owad�w",
	L"Zapominalski",
	L"Psychol",
	L"Niepe�nosprawno�ci I.M.P.-a",
};

// HEADROCK HAM 3.6: Error strings for assigning a merc to a facility
STR16 gzFacilityErrorMessage[]=
{
	L"%s nie ma wystarczaj�cej si�y, by tego dokona�",
	L"%s nie ma wystarczaj�cej zr�czno�ci, by tego dokona�",
	L"%s nie ma wystarczaj�cej zwinno�ci, by tego dokona�",
	L"%s nie ma do�� zdrowia, by tego dokona�",
	L"%s nie ma wystarczaj�cej inteligencji, by tego dokona�",
	L"%s nie ma wystarczaj�cej celno�ci, by tego dokona�",
	// 6 - 10
	L"%s nie ma wystarczaj�cych um. medycznych, by tego dokona�.",
	L"%s nie ma wystarczaj�cych um. mechaniki, by tego dokona�.",
	L"%s nie ma wystarczaj�cych um. dowodzenia, by tego dokona�.",
	L"%s nie ma wystarczaj�cych um. mat. wyb., by tego dokona�.",
	L"%s nie ma wystarczaj�cego do�wiadczenia, by tego dokona�.",
	// 11 - 15
	L"%s ma za ma�e morale, by tego dokona�",
	L"%s nie ma wystarczaj�co du�o energii, by tego dokona�",
	L"W %s jest zbyt ma�a lojalno��. Mieszka�cy nie pozwol� ci tego zrobi�.",
	L"W %s pracuje ju� zbyt wiele os�b.",
	L"W %s zbyt wiele os�b wykonuje ju� to polecenie.",
	// 16 - 20
	L"%s nie znajduje przedmiot�w do naprawy.",
	L"%s traci nieco %s, pracuj�c w sektorze %s",
	L"%s traci nieco %s, pracuj�c w %s w sektorze %s",
	L"%s odnosi rany, pracuj�c w sektorze %s i wymaga natychmiastowej pomocy medycznej!",
	L"%s odnosi rany, pracuj�c w %s w sektorze %s i wymaga natychmiastowej pomocy medycznej!",
	// 21 - 25
	L"%s odnosi rany, pracuj�c w sektorze %s. Nie wygl�da to jednak bardzo powa�nie.",
	L"%s odnosi rany, pracuj�c w %s w sektorze %s. Nie wygl�da to jednak bardzo powa�nie.",
	L"Mieszka�cy miasta %s wydaj� si� poirytowani tym, �e %s przebywa w ich okolicy.",
	L"Mieszka�cy miasta %s wydaj� si� poirytowani tym, �e %s pracuje w %s.",
	L"%s po swych dzia�aniach w sektorze %s powoduje spadek poparcia w regionie.",
	// 26 - 30
	L"%s swymi dzia�aniami w %s w %s powoduje spadek poparcia w regionie.",
	L"%s jest w stanie upojenia alkoholowego",
	L"%s ci�ko choruje w sektorze %s i przechodzi w stan spoczynku",
	L"%s ci�zko choruje i nie mo�e dalej pracowa� w %s w %s",
	L"%s doznaje ci�kich obra�e� w sektorze %s",	//	%s was injured in sector %s. // <--- This is a log message string.
	// 31 - 35
	L"%s doznaje ci�kich obra�e� w sektorze %s", //<--- This is a log message string.


};

STR16 gzFacilityRiskResultStrings[]=
{
	L"Si�a",
	L"Zwinno��",
	L"Zr�czno��",
	L"Inteligencja",
	L"Zdrowie",
	L"Umiej�tno�ci strzeleckie",   //short: "Um. strzeleckie"
	// 5-10
	L"Umiej�tno�� dowodzenia",   //short: "Um. dowodzenia"
	L"Znajomo�� mechaniki",   //short: "Zn. mechaniki"
	L"Wiedza medyczna",
	L"Znajomo�� materia��w wybuchowych",   //short: "Zn. mat. wybuchowych"
};

STR16 gzFacilityAssignmentStrings[]=
{
	L"AMBIENT",
	L"Staff",
	L"Odpoczywa"
	L"Naprawa ekwipunku",
	L"Naprawa %s",
	L"Naprawa Robota",
	// 6-10
	L"Lekarz",
	L"Pacjent",
	L"Trening si�y",
	L"Trening zr�czno�ci",
	L"Trening zwinno�ci",
	L"Trening zdrowia",
	// 11-15
	L"Trening um. strzeleckich",
	L"Trening wiedzy medycznej",
	L"Trening zn. mechaniki",
	L"Trening dowodzenia",
	L"Trening zn. mat. wybuchowych",
	// 16-20
	L"Ucze� si�a",
	L"Ucze� zr�czno��",
	L"Ucze� zwinno��",
	L"Ucze� zdrowie",
	L"Ucze� um. strzeleckie",
	// 21-25
	L"Ucze� wiedza medyczna",
	L"Ucze� zn. mechaniki",
	L"Ucze� um. dowodzenia",
	L"Ucze� zn. mat. wybuchowych",
	L"Instruktor si�a",
	// 26-30
	L"Instruktor zr�czno��",
	L"Instruktor zwinno��",
	L"Instruktor zdrowie",
	L"Instruktor um. strzeleckie",
	L"Instruktor wiedza medyczna",
	// 30-35
	L"Instruktor zn. mechaniki",
	L"Instruktor um. dowodzenia",
	L"Instruktor zn. mat. wybuchowych",
};

STR16 Additional113Text[]=
{
	L"Jagged Alliance 2 v1.13 trybie okienkowym wymaga g��bi koloru 16-bitowego lub mniej.",
};

// SANDRO - Taunts (here for now, xml for future, I hope)
STR16 sEnemyTauntsFireGun[]=
{
	L"Masz cwelu!",
	L"A masz!",
	L"Na�ryj si�!",
	L"Jeste�cie moi!",
	L"Zdychaj!",
	L"Boisz si� kurwo?",
	L"To dopiero zaboli!",
	L"Dawaj skurwielu!",
	L"Dawaj! Nie mam ca�ego dnia!",
	L"Chod� do tatusia!",
	L"Zaraz p�jdziesz do piachu!",
	L"Wracasz do domu w d�bowej jesionce frajerze!",
	L"Chcesz si� zabawi�?"
	L"Trzeba by�o zosta� w domu kurwo."
	L"Ciota!",
};

STR16 sEnemyTauntsFireLauncher[]=
{

	L"Urz�dzamy grilla.",
	L"Mam dla ciebie prezent.",
	L"Bum!",
	L"U�miech!",
};

STR16 sEnemyTauntsThrow[]=
{
	L"�ap!",
	L"A masz!",
	L"Przysz�a kryska na Matyska!",
	L"To dla ciebie!",
	L"Hahahaha!",
	L"�ap �winio!",
	L"Uwielbiam to.",
};

STR16 sEnemyTauntsChargeKnife[]=
{
	L"Zedr� ci skalp!",
	L"Chod� do tatusia.",
	L"Pochwal si� flakami!",
	L"Por�n� ci� na kawa�ki!",
	L"Skurwysyny!",
};

STR16 sEnemyTauntsRunAway[]=
{
	L"Jeste�my po uszy w g�wnie...",
	L"Id� do wojska -m�wili. Nie ma chuja, nie po to!",
	L"Mam ju� do��.",
	L"O m�j Bo�e.",
	L"Za to mi nie p�ac�.",
	L"Nie wytrzymam tego!",
	L"Wr�c� z kumplami.",

};

STR16 sEnemyTauntsSeekNoise[]=
{
	L"S�ysza�em to!",
	L"Kto tam?",
	L"Co to by�o?",
	L"Hej! Co do...",

};

STR16 sEnemyTauntsAlert[]=
{
	L"S� tutaj!",
	L"Czas zacz�� zabaw�."
	L"Liczy�em na to, �e to si� nie stanie.",

};

STR16 sEnemyTauntsGotHit[]=
{
	L"Au!",
	L"U�...",
	L"To... boli!",
	L"Skurwysyny!",
	L"Po�a�ujecie... tego.",
	L"Co do..!",
	L"Teraz si�... wkurwi�em.",

};

//////////////////////////////////////////////////////
// HEADROCK HAM 4: Begin new UDB texts and tooltips
//////////////////////////////////////////////////////
STR16 gzItemDescTabButtonText[] =
{
	L"Description",
	L"General",
	L"Advanced",
};

STR16 gzItemDescTabButtonShortText[] =
{
	L"Desc",
	L"Gen",
	L"Adv",
};

STR16 gzItemDescGenHeaders[] =
{
	L"Primary",
	L"Secondary",
	L"AP Costs",
	L"Burst / Autofire",
};

STR16 gzItemDescGenIndexes[] =
{
	L"Prop.",
	L"0",
	L"+/-",
	L"=",
};

STR16 gzUDBButtonTooltipText[]=
{
	L"|D|e|s|c|r|i|p|t|i|o|n |P|a|g|e:\n \nShows basic textual information about this item.",
	L"|G|e|n|e|r|a|l |P|r|o|p|e|r|t|i|e|s |P|a|g|e:\n \nShows specific data about this item.",
	L"|A|d|v|a|n|c|e|d| |P|r|o|p|e|r|t|i|e|s |P|a|g|e:\n \nShows bonuses given by this item.",
};

STR16 gzUDBHeaderTooltipText[]=
{
	L"|P|r|i|m|a|r|y |P|r|o|p|e|r|t|i|e|s:\n \nProperties and data related to this item's class\n(Weapon / Armor / etcetera).",
	L"|S|e|c|o|n|d|a|r|y |P|r|o|p|e|r|t|i|e|s:\n \nAdditional features of this item,\nand/or possible secondary abilities.",
	L"|A|P |C|o|s|t|s:\n \nVarious Action Point costs to fire\nor manipulate this weapon.",
	L"|B|u|r|s|t |/ |A|u|t|o|f|i|r|e |P|r|o|p|e|r|t|i|e|s:\n \nData related to firing this weapon in\nBurst or Autofire modes.",
};

STR16 gzUDBGenIndexTooltipText[]=
{
	L"|P|r|o|p|e|r|t|y |i|c|o|n\n \nMouse-over to reveal the property's name.",
	L"|B|a|s|i|c |v|a|l|u|e\n \nThe basic value given by this item, excluding any\nbonuses or penalties from attachments or ammo.",
	L"|A|t|t|a|c|h|m|e|n|t |B|o|n|u|s|e|s\n \nBonus or penalty given by ammo, any attachments,\nor low item condition.",
	L"|F|i|n|a|l |V|a|l|u|e\n \nThe final value given by this item, including any\nbonuses/penalties from attachments or ammo.",
};

STR16 gzUDBAdvIndexTooltipText[]=
{
	L"Property icon (mouse-over to reveal name).",
	L"Bonus/penalty given while |s|t|a|n|d|i|n|g.",
	L"Bonus/penalty given while |c|r|o|u|c|h|i|n|g.",
	L"Bonus/penalty given while |p|r|o|n|e.",
	L"Bonus/penalty given",
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
	L"|L|i|g|h|t |E|n|d |R|a|d|i|u|s",
	L"|M|u|s|t|a|r|d |G|a|s |E|n|d |R|a|d|i|u|s",
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
};

// HEADROCK HAM 4: Text for the new CTH indicator.
STR16 gzNCTHlabels[]=
{
	L"SINGLE",
	L"AP",
};
//////////////////////////////////////////////////////
// HEADROCK HAM 4: End new UDB texts and tooltips
//////////////////////////////////////////////////////

#endif //POLISH
