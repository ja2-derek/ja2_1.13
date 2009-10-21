#pragma setlocale("FRENCH")
#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
	#include "_Ja25Frenchtext.h"
#else
	#include "Language Defines.h"
	#ifdef FRENCH
		#include "text.h"
		#include "Fileman.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_Ja25FrenchText_public_symbol(void){;}

#ifdef FRENCH

// VERY TRUNCATED FILE COPIED FROM JA2.5 FOR ITS FEATURES FOR JA2 GOLD

STR16	zNewTacticalMessages[]=
{
	//L"Distance cible: %d tiles, Brightness: %d/%d",
	L"Attache le transpondeur � votre PC portable.",
	L"Vous n'avez pas les moyens d'engager %s",
	L"Pour une dur�e limit�e, les frais ci-dessus couvrent la mission enti�re, �quipement ci-dessous compris.",
	L"Engagez %s et d�couvrez d�s � pr�sent notre prix \"tout compris\".  Aussi inclus dans cette incroyable offerte l'�quipement personnel du mercenaire sans frais suppl�mentaires.",
	L"Frais",
	L"Il y a quelqu'un d'autre dans le secteur...",
	//L"Port�e arme: %d tiles, Probabilit�s: %d pourcent",
	L"Afficher couverture",
	L"Ligne de vision",
	L"Les nouvelles recrues ne peuvent arriver ici.",
	L"Comme votre PC n'a pas de transpondeur, vous ne pouvez engager de nouvelles recrues. Revenez � une sauvegarde pr�c�dente et r�essayez.",
	L"%s entend le son de m�tal broy� provenant d'en dessous du corps de Jerry.  On dirait que l'antenne de votre PC ne sers plus � rien.",  //the %s is the name of a merc.  @@@  Modified
	L"Apres avoir scann� la note laiss�e par le Deputy Commander Morris, %s sent une oppurtinit�. La note contient les coordonn�es pour le lancement de missiles sur Arulco. Elle contient aussi l'emplacement de l'usine d'o� les missiles proviennent.",
	L"En examinant le panneau de contr�le, %s s'aper�o�t que less chiffres peuvent �tre invers�s, pour que les missiles d�truisent cette m�me usine.  %s a besoin de trouver un chemin pour s'enfuir.  L'ascenseur semble �tre la solution la plus rapide...",
	L"Ceci est un jeu IRON MAN et vous ne pouvez sauvegarder s'il ya des ennemis dans les parages.",	//	@@@  new text
	L"(ne peut sauvegarder en plein combat)", //@@@@ new text
	L"Le nom de la campagne actuelle est sup�rieur � 30 lettres.",							// @@@ new text
	L"La campagne actuelle est introuvable.",																	// @@@ new text
	L"Campaign: Defaut ( %S )",																							// @@@ new text
	L"Campaign: %S",																													// @@@ new text
	L"Vous avez choisi la campagne %S. Cette campagne est un mod d'unfinished business. Etes vous s�r de vouloir jouer la campagne %S ?",			// @@@ new text
	L"Pour pouvoir utiliser l'�diteur, veuillez choisir une autre campagne que celle par defaut.",		///@@new
};

//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	L"crochetage",
	L"combat � mains nues",
	L"Electronique",
	L"Operations de nuit",
	L"Lancer",
	L"Enseigner",
	L"Armes lourdes",
	L"Armes automatiques",
	L"Discretion",
	L"Ambidextre",
	L"Couteau",
	L"Tireur isol�",
	L"Camouflage",
	L"Arts martiaux",

	L"aucune",
	L"Sp�cialt�s I.M.P.",
};
//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Vous avez choisi le mode IRON MAN. La difficult�e du jeu s'en trouveras considerablement augment�e du fait de l'imposssiblit� de sauvegarder en territoire ennemi. Ce param�tre prendra effet tout au long de la partie.  Etes vous vraiment s�r de vouloir jouer en mode IRON MAN ?",
};

STR16 gzDisplayCoverText[]=
{
	L"Cover: %d/100 %s, Brightness: %d/100",
	L"Gun Range: %d/%d tiles, Chance to hit: %d/100",
	L"Disabling cover display",
	L"Showing mercenary view",
	L"Showing danger zones for mercenary",
	L"Wood", // wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"Urban",
	L"Desert",
	L"Snow", // NOT USED!!!
	L"Wood and Desert",
	L"" // yes empty for now
};


#endif
