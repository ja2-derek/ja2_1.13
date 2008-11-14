#pragma setlocale("POLISH")
#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25Polishtext.h"
#else
	#include "Language Defines.h"
	#ifdef POLISH
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

#ifdef POLISH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	L"Odleg�o�� od celu (w polach): %d, Jasno�� = %d/%d",
	L"Nadajnik zosta� pod��czony do twojego laptopa.",
	L"Nie mo�esz zatrudni� %s(a)",
	L"Na okre�lony czas, poni�sze honorarium pokryje koszt ca�ej misji razem z wyposa�eniem zamieszonym poni�ej.",
	L"Zatrudnij %s(a) ju� teraz i we� udzia� naszej promocji 'jedno honorarium pokrywa wszystko'.  Ponadto w tej niewiarygodnej ofercie ca�y ekwipunek najemnika dostaniesz za darmo.",
	L"Honorarium",
	L"Kto� jest w sektorze...",
	L"Zasi�g broni (w polach): %d, Szansa na trafienie: %d procent",
	L"Poka� os�on�",
	L"Zasi�g wzroku",
	L"Nowi rekruci nie mog� tam przyby�.",
	L"Dop�ki tw�j laprop b�dzie bez nadajnika, nie b�dziesz m�g� zatrudnia� nowych cz�onk�w zespo�u.  Mo�liwe, �e to odpowiedni moment �eby odczyta� zapisany stan gry lub zacz�� gra� od nowa!",
	L"%s s�yszy d�wi�k zgniatanego metalu dochodz�cy spod cia�a Jerrego.  To niestety zabrzmia�o jak d�wi�k zgniatanej anteny od twojego laptopa.",  //the %s is the name of a merc.  @@@  Modified
	L"After scanning the note left behind by Deputy Commander Morris, %s senses an oppurtinity.  The note contains the coordinates for launching missiles against different towns in Arulco.  It also gives the coodinates of the origin - the missile facility.",
	L"Noticing the control panel, %s figures the numbers can be reveresed, so that the missile might destroy this very facility.  %s needs to find an escape route.  The elevator appears to offer the fastest solution...",
	L"To jest tryb CZ�OWIEK ZE STALI i nie mo�esz zapisywa� gry gdy wr�g jest w sektorze.",	//	@@@  new text
	L"(Nie mo�na zapisywa� gry podczas walki)", //@@@@ new text
	L"Kampania ma wi�cej ni� 30 postaci.",							// @@@ new text
	L"Nie mo�na odnale�� kampanii.",																	// @@@ new text
	L"Kampania: Standardowa ( %S )",																							// @@@ new text
	L"Kampania: %S",																													// @@@ new text
	L"Wybra�e� kampani� %S. Ta kampania zosta�a stworzona przez fan�w gry. Czy jeste� pewien, �e chcesz w ni� zagra�?",			// @@@ new text
	L"�eby u�y� edytora powiniene� wcze�niej wybra� kampani� inn� ni� standardowa.",		///@@new
};

//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	L"Otwieranie zamk�w",
	L"Walka wr�cz",
	L"Elektronika",
	L"Operacje nocne",
	L"Rzucanie",
	L"Szkolenie",
	L"Bro� ci�ka",
	L"Bro� automatyczna",
	L"Skradanie si�",
	L"Obur�czno��",
	L"Bro� bia�a",
	L"Snajper",
	L"Kamufla�",
	L"Sztuki walki",

	L"Brak",
	L"Umiej�tno�ci",
};
//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Wybra�e� tryb CZ�OWIEK ZE STALI. Opcja ta sprawi, �e gra b�dzie du�o trudniejsza poniewa� nie b�dzie mo�liwo�ci zapisywania gry podczas walki. B�dzie to mia�o wp�yw na ca�y przebieg rozgrywki. Czy na pewno chcesz gra� w trybie CZ�OWIEK ZE STALI?",
};


#endif
