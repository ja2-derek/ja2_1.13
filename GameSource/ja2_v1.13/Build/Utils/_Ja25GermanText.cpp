// WANNE: Yes, this should be disabled, otherwise we get weird behavior when running the game with a VS 2005 build!
//#pragma setlocale("GERMAN")

#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25GermanText.h"
#else
	#include "Language Defines.h"
	#ifdef GERMAN
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25GermanText_public_symbol(void){;}

#ifdef GERMAN

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	//L"Entfernung zum Ziel: %d Felder, Helligkeit: %d/%d",
	L"Verbinden Sie den Transmitter mit Ihrem Laptop-Computer.",
	L"Sie haben nicht genug Geld, um %s anzuheuern",
	L"Das obenstehende Honorar deckt f�r einen begrenzten Zeitraum die Kosten der Gesamtmission, und schlie�t untenstehendes Equipment mit ein.",
	L"Engagieren Sie %s jetzt und nutzen Sie den Vorteil unseres beispiellosen 'Ein Betrag f�r alles'-Honorars. Das pers�nliche Equipment des S�ldners ist gratis in diesem Preis mit inbegriffen.",
	L"Honorar",
	L"Da ist noch jemand im Sektor...",
	//L"Waffen-Rchwt.: %d Felder, Trefferwahrsch.: %d Prozent",
	L"Deckung anzeigen",
	L"Sichtfeld",
	L"Neue Rekruten k�nnen dort nicht hinkommen.",
	L"Da Ihr Laptop keinen Transmitter besitzt, k�nnen Sie keine neuen Teammitglieder anheuern. Vielleicht ist dies eine guter Zeitpunkt, ein gespeichertes  Spiel zu laden oder ein neues zu starten!",
	L"%s h�rt das Ger�usch knirschenden Metalls unter Jerry hervordringen. Es klingt gr�sslich - die Antenne ihres Laptop-Computers ist  zerst�rt.",  //the %s is the name of a merc.  @@@  Modified
	L"Nach Ansehen des Hinweises, den Commander Morris hinterlie�, erkennt %s eine einmalige Gelegenheit. Der Hinweis enth�lt Koordinaten f�r den Start von Raketen gegen verschiedene St�dte in Arulco. Aber er enth�lt auch die Koordinaten des Startpunktes - der Raketenanlage.",
	L"Das Kontroll-Board studierend, entdeckt %s, dass die Zahlen umgedreht werden k�nnten, so dass die Raketen diese Anlage selbst zerst�ren. %s muss nun einen Fluchtweg finden. Der Aufzug scheint die schnellstm�gliche Route zu bieten...",         //!!! The original reads:	L"Noticing the control panel %s, figures the numbers can be reversed..." That sounds odd for me, but I think the comma is placed one word too late... (correct?)
	L"Dies ist ein IRON MAN-Spiel, und es kann nicht gespeichert werden, wenn sich Gegner in der N�he befinden.",		
	L"(Kann w�hrend Kampf nicht speichern)", 
	L"Der Name der aktuellen Kampagne enth�lt mehr als 30 Buchstaben.",						
	L"Die aktuelle Kampagne kann nicht gefunden werden.",																	
	L"Kampagne: Standard ( %S )",																							
	L"Kampagne: %S",																													
	L"Sie haben die Kampagne %S gew�hlt. Diese ist eine vom Spieler modifizierte Version der Originalkampagne von JA2UB. M�chten Sie die Kampagne %S spielen?",			
	L"Um den Editor zu benutzen, m�ssen Sie eine andere als die Standardkampgane ausw�hlen.",		
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	L"Schl�sser knacken",
	L"Nahkampf",
	L"Elektronik",
	L"Nachteinsatz",
	L"Werfen",
	L"Lehren",
	L"Schwere Waffen",
	L"Autom. Waffen",
	L"Schleichen",
	L"Beidh�ndig geschickt",
	L"Messer",
	L"Dach-Treffer Bonus",
	L"Getarnt",
	L"Kampfsport",

	L"Keine",
	L"B.S.E. - Spezialisierungen",
	L"(Experte)",
};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"MG-Sch�tze",	//LOOTF - Alle Namen sehr gewagt, aber wenigstens volldeutsch.
	L"Grenadier"	,
	L"Pr�zisionssch�tze",
	L"Pfadfinder",
	L"Pistolensch�tze",		//Option: Pistolensch�tze
	L"Faustk�mpfer",
	L"Gruppenf�hrer",		//GrpFhr und ZgFhr sind schei�e, aber mir f�llt ohne Dienstgrade n�scht ein
	L"Mechaniker",			//Option: Techniker
	L"Sanit�ter",			//Option: Rettungsassistent

	L"Nichts",
	L"B.S.E. Hauptfertigkeiten",

	// second names
	L"MG-Veteran",		//Option "MG-Veteran"?
	L"Artillerist",
	L"Scharfsch�tze",
	L"J�ger",			//"Ranger" ist toll, aber nicht wirklich deutsch
	L"Revolverheld",
	L"Kampfsportler",		//Kung-Fu-Typ ohne Nennung von Kung-Fu oder Wu-Shu oder derart Zeug, PS: KampfSPORTLER ist kacke
	L"Zugf�hrer",
	L"Ingenieur",
	L"Arzt",
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
	L"Beidh�nder",			// alt. "Beidh�ndig geschickt"
	L"Messerk�mpfer",		// alt. "Hieb- und Stichwaffen"	//gesucht: Begriff f�r Nahkampfwaffenk�mpfer
	L"Messerwerfer",		// alt. "Wurfwaffen"
	L"Nachtmensch",			// alt. "Nachteinsatz"
	L"Schleicher",			// alt. "Schleichen"
	L"L�ufer",				// alt. "Athletisch"
	L"Kraftsportler",		// alt. "Bodybuilding"
	L"Sprengmeister",		// alt. "Kampfmittel"
	L"Ausbilder",			// alt. "Lehren"
	L"Aufkl�rer",			// alt. "Sp�hen"

	L"Keine",
	L"B.S.E. Nebenfertigkeiten",
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"+%d%s Trefferchance mit Sturmgewehren\n",
	L"+%d%s Trefferchance mit Maschinenpistolen\n",
	L"+%d%s Trefferchance mit Maschinengewehren\n",
	L"-%d%s APs ben�tigt f�r MG-Feuerst��e (Burst/Auto) abzugeben\n",
	L"-%d%s APs ben�tigt um Maschinengewehre auszurichten\n",
	L"Trefferratenabzug bei Feuerst��en reduziert um %d%s\n",
	L"Reduzierte Chance bei Feuerst��en ungewollt mehr Sch�sse abzugeben\n",


};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"-%d%s APs ben�tigt um Granatwerfer abzufeuern\n",
	L"-%d%s APs ben�tigt um Raketenwerfer abzufeuern\n",
	L"+%d%s Trefferchance mit Granatwerfern\n",
	L"+%d%s Trefferchance mit Raketenwerfern\n",
	L"-%d%s APs ben�tigt f�r den Abschuss von M�rsergranaten\n",
	L"Trefferchancenreduktion f�r M�rser gesenkt um %d%s\n",
	L"+%d%s Schaden an Panzern mit schweren Waffen, Granaten und Bomben\n",
	L"+%d%s schaden an allen anderen Zielen mit schweren Waffen\n",

};
STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"+%d%s Trefferchance mit Gewehren\n",
	L"+%d%s Trefferchance mit Scharfsch�tzengewehren\n",
	L"-%d%s effektive Reichweite zum Ziel mit allen Waffen\n",
	L"+%d%s Zielbonus pro Zielerfassungs-Klick (au�er f�r Faustfeuerwaffen)\n",
	L"+%d%s Schaden pro Schuss",
	L" plus",
	L" f�r jeden Zielerfassungs-Klick",
	L" nach dem ersten",
	L" nach dem zweiten",
	L" nach dem dritten",
	L" nach dem vierten",
	L" nach dem f�nften",
	L" nach dem sechsten",
	L" nach dem siebenten",
	L"-%d%s APs ben�tigt um ein Repetiergewehr erneut fertigzuladen.\n",
	L"Gibt einen weiteren Ziel-Klick f�r gewehrartige Waffen\n",
	L"Gibt weitere %d Ziel-Klicks f�r gewehrartige Waffen\n",

};
STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"+%d%s Trefferchance mit Gewehren\n",
	L"+%d%s Trefferchance mit Schrotflinten\n",
	L"-%d%s APs gebraucht um Schrotflinten zu repetieren\n",
	L"+%d%s Marschgeschwindigkeit der Gruppe zwischen Sektoren zu Fu�\n",
	L"+%d%s Marschgeschwindigkeit der Gruppe zwischen Sektoren bei Benutzung von Fahrzeugen (au�er dem Helikopter)\n",
	L"-%d%s weniger Energieverlust beim Reisen zwischen Sektoren\n",
	L"-%d%s Einfluss durch schlechtes Wetter\n",
	L"+%d%s Tarnungs-Effektivit�t\n",
	L"-%d%s Abnutzung von Gesichtstarnung durch Wasser oder Zeit\n",

};
STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"-%d%s APs ben�tigt um mit Pistolen oder Revolvern zu schie�en\n",
	L"+%d%s effektive Reichweite mit Pistolen und Revolvern\n",
	L"+%d%s Trefferchance mit  mit Pistolen und Revolvern\n",
	L"+%d%s Trefferchance mit vollautomatischen Pistolen",
	L" (nur bei Einzelfeuer)",
	L"+%d%s Zielbonus pro Klick mit Pistolen, vollautomatischen Pistolen und Revolvern\n",
	L"-%d%s APs ben�tigt um Pistolen und Revolver in Vorhalte zu bringe\n",
	L"-%d%s APs ben�tigt um Pistolen, vollautomatische Pistolen und Revolver nachzuladen\n",
	L"Gibt f�r Pistolen, vollautomatische Pistolen und Revolver einen weiteren Zielklick\n",
	L"%d weiteren Zielklick f�r Pistolen, vollautomatische Pistolen und Revolver\n",

};
STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"-%d%s AP-Kosten f�r den Faustkampf (blo�e H�nde oder mit Schlagring)\n",
	L"+%d%s Trefferchance bei Nahkampfangriffen mit blo�en H�nden\n",
	L"+%d%s Trefferchance bei Nahkampfangriffen mit dem Schlagring\n",
	L"+%d%s Schaden im Faustkampf (blo�e H�nde oder mit Schlagring)\n",
	L"+%d%s Ausdauerschaden im Faustkampf (blo�e H�nde oder mit Schlagring)\n",
	L"Ein im Nahkampf niedergestreckter Gegner braucht etwas l�nger um sich zu erholen\n",
	L"Ein im Nahkampf niedergestreckter Gegner braucht l�nger um sich zu erholen\n",
	L"Ein im Nahkampf niedergestreckter Gegner braucht deutlich l�nger um sich zu erholen\n",
	L"Ein im Nahkampf niedergestreckter Gegner braucht viel l�nger um sich zu erholen\n",
	L"Ein im Nahkampf niedergestreckter Gegner braucht sehr viel l�nger um sich zu erholen\n",
	L"Ein im Nahkampf niedergestreckter Gegner schl�ft wie ein Baby bevor er sich erholt\n",
	L"Ein im Nahkampf niedergestreckter Gegner steht vermutlich erstmal gar nicht mehr auf\n",
	L"Ein gezielter Schlag richtet +%d%s mehr Schaden an\n",
	L"Ein gezielter Tornadotritt richtet +%d%s mehr Schaden an\n",
	L"+%d%s Chance, Schl�gen und Tritten auszuweichen\n",
	L"Dazu +%d%s Chance mit freien H�nden",
	L" oder nur mit Schlagring",
	L" (+%d%s mit Schlagring)",
	L"+Dazu %d%s Chance, Schl�gen und Tritten mit ausger�stetem Schlagring auszuweichen\n",
	L"+%d%s Chance einem Angriff mit einer beliebigen Nahkampfwaffe auszuweichen\n",
	L"-%d%s APs ben�tigt um einen Gegner zu entwaffnen\n",
	L"-%d%s APs ben�tigt um die K�rperhaltung zu �ndern, sich umzudrehen, auf oder von D�chern zu klettern und Hindernisse zu �berspringen\n",
	L"-%d%s APs ben�tigt um die K�rperhaltung zu �ndern (stehen, ducken, liegen)\n",
	L"-%d%s APs ben�tigt um sich umzudrehen\n",
	L"-%d%s APs ben�tigt um auf oder von D�chern zu klettern und Hindernisse zu �berspringen\n",
	L"+%d%s Chance eine T�r erfolgreich einzutreten\n",
	L"Sie erhalten besondere Kung-Fu-Animationen f�r den Nahkampf\n",

};
STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"+%d%s APs pro Runde f�r die umgebenden S�ldner innerhalb des Einflussbereichs\n",
	L"+%d effektiven Erfahrungslevel f�r umgebende S�ldner im Einflussbereich mit weniger Erfahrungsgrad als der %s\n",
	L"+%d auf den Erfahrungslevel beim Berechnen des Gruppeneffekts auf Unterdr�ckungsfeuer\n",
	L"+%d%s Resistenz gegen Unterdr�ckungsfeuer f�r jeden S�ldner im Einflussbereich, auch den %s\n",
	L"+%d Moralgewinn f�r umgebende S�ldner innerhalb des Einflussbereichs\n",
	L"-%d Moralverlust f�r umgebende S�ldner innerhalb des Einflussbereichs\n",
	L"Der Einflussbereich hat einen Radius von %d Feldern",
	L" (%d Felder mit Kopfh�rer-Funkger�t)",
	L"(Maximal auf einen S�ldner wirkende Boni: %d )\n",
	L"+%d%s Resistenz gegen Angst f�r %s\n",
	L"Nachteil: %dx Moralverlust bei Tod des %ss f�r alle anderen S�ldner\n",

};
STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"+%d%s schnellere Reparaturen\n",
	L"+%d%s mehr Erfolg beim Knacken normaler und elektronischer Schl�sser\n",
	L"+%d%s mehr Erfolg beim Entsch�rfen elektronischer Fallen\n",
	L"+%d%s mehr Erfolg beim Anbringen besonderer Gegenst�nde und Verbinden von Ger�tschaften\n",
	L"+%d%s mehr Erfolg beim Beheben von Waffenst�rungen im Gefecht\n",
	L"Der Malus beim Reparieren elektronischer Gegenst�nde wird um %d%s gesenkt\n",
	L"Erh�hte Chance, Fallen und Minen zu entdecken (+%d zum Erkennungslevel)\n",
	L"+%d%s Trefferchance des Roboters, wenn vom %s gesteuert\n",
	L"Der %s kann den Roboter reparieren\n",
	L"%d%s Reduzierung des Geschwindigkeitsabzugs beim Reparieren des Roboters\n",
};
STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"Kann chirurgisch operieren (Benutzung eines Arztkoffers auf einen verletzten S�ldner)\n",
	L"Die Operation stellt sofort %d%s der verlorenen Lebenspunkte wieder her.",
	L" (Dieser Vorgang verbraucht einen Gro�teil des Arztkoffers.)",
	L"Kann verlorene Attributpunkte (von kritischen Treffern) durch",
	L" eine Operation oder",
	L" den Auftrag 'Doktor' wiederherstellen.\n",
	L"+%d%s bessere Heilungsrate beim Einsatz am Patienten\n",
	L"+%d%s schnelleres Anlegen von Wundverb�nden\n",
	L"+%d%s nat�rliche Regenerationsrate aller S�ldner im selben Sektor",
	L" (maximal %d Instanzen dieses Bonus pro Sektor)",

};
STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"Keine Boni",
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"Die Ungenauigkeit beim Schie�en mit zwei Waffen wird um %d%s reduziert\n",
	L"+%d%s schnelleres Nachladen mit Magazinen\n",
	L"+%d%s schnelleres Nachladen mit einzelnen Patronen\n",
	L"-%d%s APs ben�tigt um Gegenst�nde aufzuheben\n",
	L"-%d%s APs ben�tigt f�r die Handhabe des Rucksacks\n",
	L"-%d%s APs ben�tigt um mit T�ren zu interagieren\n",
	L"-%d%s APs ben�tigt um Bomben und Minen zu legen oder zu entsch�rfen\n",
	L"-%d%s APs needed to attach items\n",
};
STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"-%d%s APs ben�tigt f�r den Angriff mit Klingenwaffen\n",
	L"+%d%s Trefferchance mit Klingenwaffen\n",
	L"+%d%s Trefferchance mit Schlagwaffen\n",
	L"+%d%s Schaden mit Klingenwaffen\n",
	L"+%d%s Schaden mit Schlagwaffen\n",
	L"Ein gezielter Hieb mit einer Nahkampfwaffe richtet %d%s mehr Schaden an\n",
	L"+%d%s Chance Angriffen durch Klingenwaffen auszuweichen\n",
	L"Dazu +%d%s Chance Klingenwaffen auszuweichen wenn man selber eine in der Hand hat\n",
	L"+%d%s Chance Angriffen durch Schlagwaffen auszuweichen\n",
	L"Dazu +%d%s Chance Schlagwaffen auszuweichen wenn man eine Klingenwaffe f�hrt\n",

};
STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"-%d%s Basis-APs ben�tigt f�r den Angriff mit Wurfwaffen\n",
	L"+%d%s maximale Reichweite beim Einsatz von Wurfwaffen\n",
	L"+%d%s Trefferchance mit Wurfwaffen\n",
	L"+%d%s Trefferchance mit Wurfwaffen f�r jeden Ziel-Klick\n",
	L"+%d%s Schaden geworfener Klingen\n",
	L"+%d%s Schaden geworfener Klingen f�r jeden Ziel-Klick\n",
	L"+%d%s Chance auf kritischen Treffer beim Angriff mit Wurfwaffen, falls das Ziel den Werfer nicht bemerkt hat\n",
	L"+%d Multiplikator f�r kritische Treffer durch Wurfwaffen\n",
	L"Gibt einen weiteren Zielklick beim Einsatz von Wurfwaffen\n",
	L"Gibt %d weitere Zielklicks beim Einsatz von Wurfwaffen\n",

};
STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"+%d zur effektiven Sichtweite im Dunkeln\n",
	L"+%d zum allgemeinen effektiven H�rweite\n",
	L"Dazu +%d zum effektive H�rweite in der Dunkelheit\n",
	L"+%d zum Unterbrechungs-Modifikator in der Dunkelheit\n",
	L"-%d weniger Schlafbedarf\n",

};
STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"-%d%s APs zum Schleichen n�tig\n",
	L"+%d%s Chance beim Schleichen kein Ger�usch zu erzeugen zu sein\n",
	L"+%d%s Chance, 'unsichtbar' zu sein wenn man sich nicht verr�t (schleichen)\n",
	L"Der Abzug der berechneten Sichtdeckung beim Bewegen ist %d%s geringer\n",

};
STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"-%d%s APs ben�tigt f�r Bewegung (rennen, aufrecht oder geduckt gehen, gleiten, schwimmen, usw.)\n",
	L"-%d%s weniger Ausdauerverbrauch f�r f�r Bewegung, Dachklettern, Hindernisse �berwinden, usw.\n",
};
STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"Hat eine Schadensresistenz von %d%s\n",
	L"+%d%s effektive St�rke f�r das Berechnen der maximalen Traglast\n",
	L"%d%s weniger Energieverlust beim Erleiden von Schl�gen und Tritten\n",
	L"F�llt bei Beintreffern weniger leicht um durch um %d%s erh�hte Schadenstoleranz\n",

};
STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"-%d%s APs ben�tigt um Handgranaten und �hnliches zu werfen\n",
	L"+%d%s mehr Reichweite beim Werfen von Handgranaten und �hnlichem\n",
	L"+%d%s mehr Wurfgenauigkeit beim Einsatz von Handgranaten und �hnlichem\n",
	L"Gelegte Bomben und Minen sind +%d%s effizienter\n",
	L"+%d%s mehr Erfolg beim Anbringen von Z�ndern an Sprengstoff\n",
	L"+%d%s mehr Erfolg beim Sch�rfen und Entsch�rfen von Bomben\n",
	L"Verringerte Chance, dass der Gegner eigene Bomben und Minen entdeckt (%d zum Bombenlevel)\n",
	L"Erh�hter Erfolg beim Aufbrechen einer T�r mit einer Durchbruchladung (Schaden multipliziert mit %d)\n",

};
STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"Bei der Ausbildung von Milizen +%d%s schneller\n",
	L"Bei der Ausbildung von Milizen +%d%s Bonus zur effektiven F�hrungsf�higkeit\n",
	L"Beim Ausbilden von S�ldnern +%d%s schneller\n",
	L"Beim Ausbilden von S�ldnern +d% zum effektiven F�higkeitslevel des Ausbilders\n",
	L"Beim eigenst�ndigen Lernen +%d%s schneller\n",

};
STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"+%d zur effektiven Sichtweite mit Zielfernrohren an Waffen\n",
	L"+%d zur effektiven Sichtweite mit Doppelfernrohren und losen Zielfernrohren\n",
	L"-%d Tunnelblick mit Doppelfernrohren und losen Zielfernrohren\n",
	L"Auf der Weltkarte wird in angrenzenden Sektoren die genaue Feindst�rke (Anzahl) bestimmt\n",
	L"Auf der Weltkarte wird in angrenzenden Sektoren die Pr�senz von vorhandenem Feind enth�llt\n",
	L"Verhindert, dass der Feind die Gruppe in den Hinterhalt lockt\n",
	L"Verhindert, das Umzingeln der Gruppe durch Bloodcats\n",

};
STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"Keine Boni",
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"+%d%s Bonus zum Schl�sser Knacken\n",		// 0
	L"+%d%s Trefferchance im Faustkampf\n",
	L"+%d%s Schaden im Faustkampf\n",
	L"+%d%s Chance Schl�gen auszuweichen\n",
	L"Bei der Reparatur und Bedienung von Elektrotechnik\n(Schl�sser, Fallen, Fernz�nder, Roboter...) kein Abzug\n",
	L"+%d zur effektiven Sichtweite im Dunkeln\n",
	L"+%d zur allgemeinen effektiven H�rweite\n",
	L"Dazu +%d zur effektiven H�rweite in der Dunkelheit\n",
	L"+%d zum Unterbrechungsmodifikator in der Dunkelheit\n",
	L"-%d weniger Schlafbedarf\n",
	L"+%d%s maximale Reichweite beim Werfen\n",	// 10
	L"+%d%s Trefferchance beim Werfen\n",
	L"+%d%s Chance auf sofortige T�tung mit Wurfmesser wenn unbemerkt\n",
	L"+%d%s Bonus zum Trainieren von Milizen und anderen S�ldnern\n",
	L"+%d%s effektive F�hrungsfertigkeit beim Ausbilden von Milizen\n",
	L"+%d%s Trefferchance mit Raketen-/Granatwerfern und M�rsern\n",
	L"Trefferchancenabzug bei Dauerfeuer und Feuersto� wird durch %d geteilt\n",
	L"Das Verschie�en von zu viel Munition bei Dauerfeuer wird unwahrscheinlicher\n",
	L"+%d%s Chance sich leise zu bewegen\n",
	L"+%d%s stealth (unsichtbar sein, wenn man sich nicht verr�t)\n",
	L"Beim Schie�en mit zwei Waffen mit jeder so pr�zise wie mit nur einer\n",	// 20
	L"+%d%s Trefferchance mit Stichwaffen\n",
	L"+%d%s Chance, Stichwaffen auszuweichen, wenn man selber eine f�hrt\n",
	L"+%d%s Chance, Stichwaffen auszuweichen, wenn man etwas anderes in der Hand hat\n",
	L"+%d%s Chance Schl�gen auszuweichen, wenn man eine Stichwaffe h�lt\n",
	L"-%d%s effektive Reichweite zum Ziel mit allen Waffen\n",
	L"+%d%s Bonus zum Zielen pro Mausklick\n",
	L"Immer vollst�ndig getarnt sein\n",
	L"+%d%s Trefferchance im Faustkampf\n",
	L"+%d%s Schaden im Faustkampf\n",
	L"+%d%s Chance, Schl�ge mit leeren H�nden zu blocken\n",	// 30
	L"+%d%s Chance, Schl�ge mit etwas in der Hand zu blocken\n",
	L"+%d%s Chance, Stichwaffenangriffen auszuweichen\n",
	L"Kann angeschlagenen Gegnern einen Tornadotritt verpassen, der doppelten Schaden anrichtet\n",
	L"Sie erhalten besondere Animationen f�r den Faustkampf (etwas fern�stlicher)\n",
	L"Keine Boni",
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
	L"V: Keine Vorteile.\nN: Keine Nachteile.",
	L"V: Hat eine erh�hte Leistung im Verbund mit anderen S�ldnern.\nN: Erh�lt keinen Moralzuwachs, wenn niemand in der N�he ist.",
	L"V: Hat eine erh�hte Leistung, wenn niemand in der N�he ist.\nN: Erh�lt keinen Moralzuwachs im Verbund mit anderen S�ldnern.",
	L"V: Seine Moral sinkt etwas langsamer und steigt schneller.\nN: Hat weniger Chance, Fallen und Minen zu entdecken.",
	L"V: Erh�lt Boni beim Ausbilden von Miliz und kann besser mit Menschen reden.\nN: Erh�lt keinen Moralzuwachs f�r Aktionen anderer S�ldner.",
	L"V: Lernt etwas schneller in Schulung durch sich selbst oder andere.\nN: Hat weniger Unterdr�ckungs- und Angstresistenz.",
	L"V: Verbraucht etwas weniger Energie, au�er bei Aufgaben in Medizin, Technik oder anspruchsvollen Ausbildung.\nN: Weisheit, F�hrungskraft, Sprengstoff-, Mechanik- und Medizinkenntnisse entwickeln sich bei ihm langsamer.",
	L"V: Hat eine leicht erh�hte Trefferchance bei Feuerst��en und richtet etwas mehr Schaden im Nahkampf an.\n    Erh�lt ein wenig mehr Moralzuwachs beim T�ten.\nN: Ist schlechter bei Aufgaben, die Geduld erfordern, wie Reparatur, Schlossknacken, Fallen Entsch�rfen, Patientenbetreuung und Ausbildung von Miliz.",
	L"V: Erh�lt Boni f�r Aufgaben mit Geduldsanspruch wie Reparatur, Schlossknacken, Fallen Entsch�rfen, Patientenbetreuung und Ausbildung von Miliz.\nN: Erh�lt weniger oft Unterbrechungen im Kampf.",
	L"V: Erh�hte Resistenz gegen�ber Unterdr�ckungsfeuer und Angst.\n    Verliert weniger Moral beim Erleiden von Schaden oder dem Tod von Kameraden.\nN: Wird leichter getroffen, und kann seltener Feindfeuer durch schnelle Bewegung ausweichen.",
	L"V: Erh�lt Moralzuwachs f�r T�tigkeiten au�erhalb des K�mpfens (au�er der Ausbildung von Milizkr�ften).\nN: Erh�lt keinerlei Moral beim T�ten.",
	L"V: Hat eine h�here Chance, Statussch�den anzurichten und kann besonders fiese Wunden austeilen.\n   Erh�lt mehr Moral f�r erfolgreiche Statussch�den.\nN: Kann schlechter mit Leuten reden und seine Moral sinkt schneller, wenn er nicht k�mpft.",
	L"V: Hat eine erh�hte Leistung wenn S�ldner des anderen Geschlechts in der N�he sind.\nN: Die Moral anderer naher S�ldner des gleichen Geschlechts steigt langsamer.",

};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"Keine Auswirkungen.",
	L"Hat Atemnot und allgemein schlechtere Leistung in tropischen und W�stensektoren.",
	L"Kann Panikattacken erleiden, wenn in gewissen Situationen auf sich gestellt.",
	L"Zeigt geringere Leistung unter Tage (in H�hlen und Kellern).",
	L"Kann beim Versuch zu schwimmen leicht ertrinken.",
	L"Ertr�gt den Anblick gro�er Insekten nicht und\nzeigt verringerte Leistung in tropischen Sektoren.",
	L"Vergisst manchmal seine Befehle und verliert dadurch im Kampf einen Teil seiner APs.",
	L"Dreht im Umgang mit Waffen manchmal durch und gibt Dauerfeuer.\nIst ihm das mit seiner Waffe nicht m�glich, kann das zu Moralabz�gen f�hren.",
};



STR16 gzIMPProfileCostText[]=
{
	L"Ein Profil kostet %d$. Genehmigen Sie die Zahlung? ",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"Sie k�nnen das neue Fertigkeitensystem nicht ohne aktiviertem PROFEX-Utility benutzen. Suchen Sie in Ihrer ja2_options.ini den Eintrag: READ_PROFILE_DATA_FROM_XML.",
};
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Sie haben sich f�r den Ironman-Modus entschieden. Mit dieser Einstellung k�nnen Sie das Spiel nicht speichern, wenn Feinde im Sektor sind. Sind Sie sicher, dass Sie im Ironman-Modus spielen wollen?",
};

STR16 gzDisplayCoverText[]=
{
	L"Deckung: %d/100 %s, Helligkeit: %d/100",
	L"Waffen-Reichweite: %d/%d Felder, Trefferwahrscheinlichkeit: %d/100",
	L"Waffen-Reichweite: %d/%d Felder, Lauf-Genauigkeit: %d/100",
	L"Deckungsanzeige ausschalten",
	L"Zeige Ansicht f�r S�ldner",
	L"Zeige Gefahrenbereich f�r S�ldner",
	L"Wald", // wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"Stadt",
	L"W�ste",
	L"Schnee", // NOT USED!!!
	L"Wald und W�ste",
	L"" // yes empty for now
};


#endif