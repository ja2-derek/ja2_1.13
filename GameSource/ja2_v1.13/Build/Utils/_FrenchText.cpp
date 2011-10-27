// WANNE: Yes, this should be disabled, otherwise we get weird behavior when running the game with a VS 2005 build!
//#pragma setlocale("FRENCH")

#ifdef PRECOMPILEDHEADERS
	#include "Utils All.h"
#else
	#include "Language Defines.h"
	#ifdef FRENCH
		#include "text.h"
		#include "Fileman.h"
		#include "Scheduling.h"
		#include "EditorMercs.h"
		#include "Item Statistics.h"
	#endif
#endif

//suppress : warning LNK4221: no public symbols found; archive member will be inaccessible
void this_is_the_FrenchText_public_symbol(void){;}

#ifdef FRENCH

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
	L"Supprimer",
};

STR16 FaceDirs[8] = 
{ 
	L"NORD",
	L"NORD-est",
	L"EST",
	L"SUD-EST",
	L"SUD",
	L"SUD-OUEST",
	L"OUEST",
	L"NORD-OUEST"
};

STR16 iEditorMercsToolbarText[] = 
{
 L"Activer l'affichage du joueur", //0
 L"Activer l'affichage des ennemis",
 L"Activer l'affichage des cr�atures",
 L"Activer l'affichage des rebelles",
 L"Activer l'affichage des civils",
 
 L"Joueur",
 L"Ennemi",
 L"Cr�ature",
 L"Rebelle",
 L"Civil",
 
 L"PLACEMENT DETAILLE", //10
 L"Information g�n�ral mode",
 L"Apparence physique mode",
 L"Attribut mode",
 L"Inventaire mode",
 L"ID profile mode",
 L"Calendrier mode",
 L"Calendrier mode",
 L"SUPPRIMER",
 L"Supprimer le mercenaire s�lectionn� (SUPPR).",
 L"SUIVANT", //20
 L"Mercenaire suivant (ESPACE).",
 L"Changer l'existance prioritaire",
 L"Changer si le placement a/nacc�s � toutes les portes.",
 
 //Orders
 L"STATIONNAIRE",
 L"EN DEFENSE",
 L"AU TELEPHONE",
 L"CHERCHER LES ENNEMIS",
 L"PATROUILLE RAPPROCHE",
 L"PATROUILLE ELOIGNE",
 L"POINT DE RASSEMBLEMENT", //30
 L"TOUR DE PATROUILLE",
 
 //Attitudes
 L"DEFENSE",
 L"SOLO BRAVE",
 L"SOUTIEN BRAVE",
 L"AGGRESIF",
 L"SOLO RUSE",
 L"SOUTIEN RUSE",
 
 L"S�lectionn� le mercenaire pour faire face � %s",
 
 L"Trouv�",
 L"MAUVAIS", //40
 L"FAIBLE",
 L"MOYEN",
 L"BON",
 L"EXCELLENT",
 
 L"MAUVAIS",
 L"FAIBLE",
 L"MOYEN",
 L"BON",
 L"EXCELLENT",
 
 L"Couleur pr�c�dente", //50
 L"Couleur suivante",
 
 L"Corps pr�c�dent",
 L"Corps suivant",
 
 L"Changer la variation de temps (+ ou - 15 minutes)",
 L"Changer la variation de temps (+ ou - 15 minutes)",
 L"Changer la variation de temps (+ ou - 15 minutes)",
 L"Changer la variation de temps (+ ou - 15 minutes)",
 
 L"Pas d'action",
 L"Pas d'action",
 L"Pas d'action", //60
 L"Pas d'action",
 
 L"Effacer le calendrier",
 
 L"trouver le mercenaire s�lectionn�",
};

STR16 iEditorBuildingsToolbarText[] =
{
	L"TOITS",  //0
	L"MURS",
	L"INFO PIECE",

	L"Placer les murs en utilisant la m�thode de s�lection",
	L"Placer les portes en utilisant la m�thode de s�lection",
	L"Placer les toits en utilisant la m�thode de s�lection",
	L"Placer les fen�tres en utilisant la m�thode de s�lection",
	L"Placer les murs endommag�s en utilisant la m�thode de s�lection.",
	L"Placer les meubles en utilisant la m�thode de s�lection",
	L"Placer les d�calcomanies murales en utilisant la m�thode de s�lection",
	L"Placer les �tages en utilisant la m�thode de s�lection", //10
	L"Placer les meubles g�n�riques en utilisant la m�thode de s�lection",
	L"Placer les murs avec la m�thode courte",
	L"Placer les portes avec la m�thode courte",
	L"Placer les fen�tres avec la m�thode courte",
	L"Placer les murs endommag�s avec la m�thode courte",
	L"V�rouiller ou pi�ger les porte existantes",

	L"Ajouter une nouvelle salle",
	L"Editer les m�rs de caverne.",
	L"Enlevez un secteur de la construction existante.",
	L"Enlevez une construction", //20
	L"Ajoutez/remplacez le toit de la construction par un nouveau toit plat.",
	L"Copier une construction",
	L"Bouger une construction",
	L"Dessiner le num�ro de pi�ce",
	L"Supprimer le num�ro de pi�ce",

	L"Activer le mode supprimer",
	L"Effacer le dernier changement",
	L"Taille du cycle",

};

STR16 iEditorItemsToolbarText[] =
{
	L"Armes", //0
	L"Munitions",
	L"Armures",
	L"LBE",
	L"Exp",
	L"E1",
	L"E2",
	L"E3",
	L"D�tentes",
	L"Cl�s",
};

STR16 iEditorMapInfoToolbarText[] =
{
	L"Ajouter une source de lumi�re ambiante", //0
	L"Basculer en fausse lumi�re ambiante.",
	L"Ajouter des r�seaux de sortie (clic droit pour une requ�te existante).",
	L"Taille de cycle",
	L"Effacer le dernier changement",
	L"Basculer en mode supprimer",
	L"Sp�cifier un point au NORD pour valider le but.",
	L"Sp�cifier un point � l'OUEST pour valider le but.",
	L"Sp�cifier un point � l'EST pour valider le but.",
	L"Sp�cifier un point au SUD pour valider le but.",
	L"Sp�cifier un point du centre pour valider le but.", //10
	L"Sp�cifier un point isol� pour valider le but.",
};

STR16 iEditorOptionsToolbarText[]=
{
	L"Nouvelle carte",  //0
	L"Nouveau sous-sol",
	L"Nouveau niveau de caverne",
	L"Sauvegarder la carte",
	L"Charger la carte",
	L"S�l�ctionner un tileset",
	L"Quitter le mode �diteur",
	L"Quitter le jeu.",
	L"Cr�er un carte de radar",
	L"La carte v�rifi�e, elle sera sauv�e sur le format original JA2.\nCette option est seulement valable sur les cartes de taille 'normales' qui ne font pas r�f�rence aux nombres de r�seau (ex: r�seau de sortie) > 25600.",
	L"La carte v�rifi�e et charg�e, elle sera �largie automatiquement selon les rang�es et colonnes choisies.",
};

STR16 iEditorTerrainToolbarText[] =
{
	L"Dessiner des textures de sol", //0
	L"S�lectionner les textures du sol de la carte",
	L"Placer les rives et falaises",
	L"Dessiner les routes",
	L"D�ssiner les d�bris",
	L"Placer les arbres & buissons",
	L"Placer les rochers",
	L"Placer barrils & autres camelotes",
	L"Remplisser le secteur",
	L"Effacer le dernier changement",
	L"Basculer en mode supprimer", //10
	L"Taille du cycle",
	L"Augmenter la densit� de la brosse",
	L"Diminuer la densit� de la brosse",
};

STR16 iEditorTaskbarInternalText[]=
{
	L"Terrain", //0
	L"B�timent",
	L"Objets",
	L"Mercenaires",
	L"Map Info",
	L"Options",
};

//Editor Taskbar Utils.cpp

STR16 iRenderMapEntryPointsAndLightsText[] =
{
	L"Point d'entr�e NORD", //0
	L"Point d'entr�e OUEST",
	L"Point d'entr�e EST",
	L"Point d'entr�e SUD",
	L"Point d'entr�e centre",
	L"Point d'entr�e isol�",
	
	L"Principale",
	L"Nuit",
	L"24 heures",
};

STR16 iBuildTriggerNameText[] =
{
	L"D�clencheur de panique 1", //0
	L"D�clencheur de panique 2",
	L"D�clencheur de panique 3",
	L"D�clencheur %d",
	 
	L"Action de pression",
	L"Action de panique 1",
	L"Action de panique 2",
	L"Action de panique 3",
	L"Action %d",
};

STR16 iRenderDoorLockInfoText[]=
{
	L"Pas de verrouillage d'ID", //0
	L"Pi�ge explosif",
	L"Pi�ge �lectrique",
	L"Pi�ge sonore",
	L"Alarme silencieuse",
	L"Super pi�ge �lectrique", //5
	L"Pi�ge sonore de maison close",
	L"Pi�ge de level %d",
};

STR16 iRenderEditorInfoText[]=
{
	L"Enregistrer la map au format vanilla JA2 (v1.12) (Version: 5.00 / 25)", //0
	L"Aucune carte n'est actuellement charg�e.",
	L"Fichier:  %S, Tileset actuel:  %s",
	L"Elargir la map au chargement",
};
//EditorBuildings.cpp
STR16 iUpdateBuildingsInfoText[] =
{
	L"BASCULER", //0
	L"VUES",
	L"MODE DE SELECTION",
	L"METHODE COURTE",
	L"MODE DE CONSTRUCTION",
	L"Pi�ce #", //5
};

STR16 iRenderDoorEditingWindowText[] =
{
	L"Modification des attributs de verrouillage � l'index %d de la carte.",
	L"V�rrouillage ID",
	L"Type de pi�ge",
	L"Niveau du pi�ge",
	L"V�rrouill�",
};

//EditorItems.cpp

STR16 pInitEditorItemsInfoText[] = 
{
	L"Action de pression", //0
	L"Action de panique 1",
	L"Action de panique 2",
	L"Action de panique 3",
	L"Action %d",
	
	L"D�clencheur de panique 1", //5
	L"D�clencheur de panique 2",
	L"D�clencheur de panique 3",
	L"D�clencheur %d",
};

STR16 pDisplayItemStatisticsTex[] =
{
	L"Info Status Ligne 1",
	L"Info Status Ligne 2",
	L"Info Status Ligne 3",
	L"Info Status Ligne 4",
	L"Info Status Ligne 5",
};

//EditorMapInfo.cpp
STR16 pUpdateMapInfoText[] =
{
	L"R", //0
	L"G",
	L"B",
	
	L"Amorcer",
	L"Nuit",
	L"24 Hrs", //5

	L"Rayon",

	L"Souterrain",
	L"Niveau de lumi�re",

	L"Ext�rieur",
	L"Sous-sol", //10
	L"Caves",

	L"Restreint",
	L"D�filer ID",

	L"Destination",
	L"Secteur", //15
	L"Destination",
	L"Niveau sous-sol",
	L"Dest.",
	L"Grille No",
};
//EditorMercs.cpp
CHAR16 gszScheduleActions[ 11 ][20] =
{
	L"Pas d'action",
	L"Porte v�rrouill�",
	L"Porte d�v�rouill�",
	L"Porte ouverte",
	L"Porte ferm�e",
	L"Aller � la No",
	L"Quitter le secteur",
	L"Entrer secteur",
	L"Rester secteur",
	L"Dormir",
	L"Ignorez cela !"
};

STR16 zDiffNames[5] = 
{ 
	L"Mauviette", 
	L"Simplet", 
	L"Moyen",
	L"Dur", 
	L"Utilisateurs de st�ro�de seulement" 
};

STR16 EditMercStat[12] = 
{ 
	L"Sant� max",
	L"Sant� actuel",
	L"Force",
	L"Agilit�",
	L"Dext�rit�",
	L"Charisme",
	L"Sagesse",
	L"Tir",
	L"Explosif",
	L"M�decine",
	L"M�canique",
	L"Niveau exp", 
};


STR16 EditMercOrders[8] = 
{ 
	L"Stationnaire",
	L"En garde",
	L"Patrouille proche",
	L"Patrouille lointaine",
	L"Point de patrouille",
	L"Sur Appel",
	L"Chercher ennemi", 
	L"Point de patrouille al�atoire",
};

STR16 EditMercAttitudes[6] = 
{ 
	L"Defensif",
	L"Solitaire courageux",
	L"Brave copain",
	L"Solitaire Rus�",
	L"Copain Rus�",
	L"Aggressif", 
};

STR16 pDisplayEditMercWindowText[] =
{
	L"Nom mercenaire :", //0
	L"Ordres:",
	L"Attitude de combat :",
};

STR16 pCreateEditMercWindowText[] = 
{
	L"Couleur mercenaire", //0
	L"Fait",
	
	L"Mercenaire pr�c�dent attendant les ordres",
	L"Mercenaire suivant attendant les ordres", 
	
	L"Mercenaire pr�c�dent pour l'attidude de combat",
	L"Mercenaire suivant pour l'attidude de combat",	//5
	
	L"Diminuer les stats du mercenaire",
	L"Augmenter les stats du mercenaire",
};

STR16 pDisplayBodyTypeInfoText[] =
{
	L"Al�atoire", //0
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
	L" --=ORDRES=-- ", //0
	L"--=ATTITUDE=--",
	
	L"ATTRIBUS",
	L"RELATIF",
	
	L"EQUIPEMENT",
	L"RELATIF",
			
	L"ATTRIBUS",
	L"RELATIF",
	
	L"Arm�e",
	L"Admin",
	L"Elite", //10
	
	L"Niveau d'exp.",
	L"Sante",
	L"Sante Max.",
	L"Tir",
	L"Force",
	L"Agilit�",
	L"Dext�rit�",
	L"Sagesse",
	L"Commandement",
	L"Explosif", //20
	L"M�dicine",
	L"M�canique",
	L"Moral",
	
	L"Couleur cheveux :",
	L"Couleur peau :",
	L"Couleur veste :",
	L"Couleur pantalon :",
	
	L"ALEATOIRE",
	L"ALEATOIRE",
	L"ALEATOIRE", //30
	L"ALEATOIRE",
	
	L"En sp�cifiant un indice de profil, toutes les informations seront extraites du profil ",
	L"et remplacer par les valeurs que vous avez �dit�. Les fonctions d'�dition seront aussi d�sactiv� ",
	L"bien, que vous serez toujours en mesure de regarder les stats, etc. En appuyant sur ENTREE cela extraira ",
	L"automatiquement le num�ro que vous avez tap�.  Un champ vide effacera le profil. Le nombre",
	L"actuel de profil allant de 0 � ",
	
	L"Profil actuel:  n/a              ",
	L"Profil actuel : %s",
	
	L"STATIONNAIRE",
	L"EN APPEL", //40
	L"MIS EN GARDE",
	L"CHERCHEZ ENNEMIE",
	L"PATROUILLE PROCHE",
	L"PATROUILLE LONTAINE",
	L"PATROUILLE DE POINT",
	L"TOUR DE PATROUILLE",

	L"Action",
	L"Temps",
	L"V",
	L"Grille No 1", //50
	L"Grille No 2",
	L"1)",
	L"2)",
	L"3)",
	L"4)",
	
	L"v�rouill�",
	L"d�v�rouill�",
	L"ouvert",
	L"fermer",
	
	L"Cliquez sur la grille no adjacente � la porte que vous souhaitez %s.", //60
	L"Cliquez sur la grille no o� vous voulez aller avoir %s la porte.",
	L"Cliquez sur la grille no o� vous voulez aller.",
	L"Cliquez sur la grille no o� vous voulez dormir.	La personne retournera automatiquement � sa position initiale lorsqu'elle se r�veillera.",
	L" Cliquez sur la ESC pour annuler l'entr�e de cette ligne dans le calendrier.",
};

CHAR16 pRenderMercStringsText[][100] =
{
	L"Slot #%d",
	L"Ordres de patrouille sans waypoints",
	L"Waypoints sans ordres de patrouille",
};

STR16 pClearCurrentScheduleText[] =
{
	L"Pas d'action",
};

STR16 pCopyMercPlacementText[] =
{
	L"Placement non copi� car aucun placement s�lectionn�.",
	L"Placement copi�.",
};

STR16 pPasteMercPlacementText[] = 
{
	L"Placement non coll� car aucun placement n'a �t� enregistr�.",
	L"Placement coll�.",
	L"Placement non coll� car le nombre maximum de placement pour cette �quipe est d�pass�.",
};

//editscreen.cpp
STR16 pEditModeShutdownText[] = 
{
	L"Quitter l'�diteur ?",
};

STR16 pHandleKeyboardShortcutsText[] = 
{
	L"Etes-vous sur de vouloir retirer toute les lumi�res ?", //0
	L"Etes-vous s�r de vouloir renverser le calendrier ?",
	L"Etes-vous s�r de vouloir effacer tous les horaires ?",
	
	L"Cliquage de placement activ�",
	L"Cliquage de placement d�sactiv�",
	
	L"Dessin des hauteur activ�", //5
	L"Dessin des hauteur d�sactiv�",
	
	L"Nombre de points de bord: N=%d E=%d S=%d O=%d",
	
	L"Placement al�atoire activ�",
	L"Placement al�atoire d�sactiv�",
	
	L"Retirer la c�me des arbres", //10
	L"Montrer la c�me des arbres",
	
	L"R�initialisation de l'aggrandissement de la carte",
	
	L"Ancienne m�thode d'aggrandissement",
	L"Aggrandissment fait",
};

STR16 pPerformSelectedActionText[] = 
{
	L"Cr�ation du carte radar pour %S", //0
	
	L"Supprimer la carte actuelle et commencer un nouveau niveau de sous-sol ?",
	L"Supprimer la carte actuelle et commencer un nouveau niveau de cave ?",
	L"Supprimer la carte actuelle et commencer un nouveau niveau ext�rieur ?",
	
	L" Essuyer les textures du sol ? ",
};

STR16 pWaitForHelpScreenResponseText[] = 
{
	L"HOME", //0
	L"Activer l'�diteur de faux �clairage ON/OFF",

	L"INSER",
	L"Activer le mode de remplissage ON/OFF",

	L"BKSPC",
	L"Annuler la derni�re modification",

	L"DEL",
	L"Effacement rapide d'objet sous le curseur de la souris",

	L"ESC",
	L"Quitter l'�diteur",

	L"PGUP/PGDN", //10
	L"Changement d'objets qui doivent �tre coll�",

	L"F1",
	L"Ecran d'aide",

	L"F10",
	L"Sauvegarder la carte actuelle",

	L"F11",
	L"Charger la carte",

	L"+/-",
	L"Changement l'obscurit� de .01",

	L"SHFT +/-",  //20
	L"Changement l'obscurit� de .05",

	L"0 - 9",
	L"Changer le nom de carte/tileset",

	L"b",
	L"Changer la taille du pinceau",

	L"d",
	L"Dessinez des d�bris",

	L"o",
	L"Dessinez des obstacles",

	L"r", //30
	L"Dessinez des rochers",

	L"t",
	L"Acriver l'affichage des arbres ON/OFF",

	L"g",
	L"Dessinez les textures du sol",

	L"w",
	L"Dessinez les murs des b�timents",

	L"e",
	L"Activer le mode effacer ON/OFF",

	L"h",  //40
	L"Activer les toits ON/OFF",
};

STR16 pAutoLoadMapText[] =
{
	L"La carte vient d'�tre corrompu. N'enregistrer pas, ne quittez pas, demander � parler � Kris ! Si il n'est pas l�, sauver la carte en utilisant un nom de fichier temporaire et documenter tout ce que vous venez de faire, surtout la derni�re action !",
	L"Le calendrier vient d'�tre corrompu.  N'enregistrer pas, ne quittez pas, demander � parler � Kris ! Si il n'est pas l�, sauver la carte en utilisant un nom de fichier temporaire et documenter tout ce que vous venez de faire, surtout la derni�re action !",
};

STR16 pShowHighGroundText[] =
{
	L"Afficher les marqueurs des textures de sol",
	L"Cacher les marqueurs des textures de sol",
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
	L"CHARGER",
	L"SAUVER",
	L"MISE A JOUR",
};

STR16 pRenderSectorInformationText[] =
{
	L"Tileset:  %s", //0
	L"Info. version:  R�sum�:  1.%02d,  Carte:  %1.2f / %02d",
	L"Nombre d'objets:  %d", 
	L"Nombre de lumi�re:  %d",
	L"Nombre de points d'entr�:  %d",
	
	L"N",
	L"E",
	L"S",
	L"O",
	L"C",
	L"I", //10
	
	L"Nombre de pi�ces :  %d",
	L"Population totale :  %d",
	L"Ennemis :  %d",
	L"Admins :  %d",
	
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
 L"Petit", 
 L"Moyen", 
 L"Large", 
 L"Tr�s large", 
 L"Largeur: xx", 
 L"Secteur" 
 };

//---

CHAR16  gszAimPages[ 6 ][ 20 ] =
{
	L"Page 1/2", //0
	L"Page 2/2",
	
	L"Page 1/3",
	L"Page 2/3",
	L"Page 3/3",
	
	L"Page 1/1", //5
};

CHAR16 zGrod[][500] =
{
	L"Robot", //0    // Robot
};

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
//	L"cal .38",
//	L"9mm",
//	L"cal .45",
//	L"cal .357",
//	L"cal 12",
//	L"CAWS",
//	L"5.45mm",
//	L"5.56mm",
//	L"7.62mm OTAN",
//	L"7.62mm PV",
//	L"4.7mm",
//	L"5.7mm",
//	L"Monstre",
//	L"Roquette",
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
//	L"cal .38",
//	L"9mm",
//	L"cal .45",
//	L"cal .357",
//	L"cal 12",
//	L"CAWS",
//	L"5.45mm",
//	L"5.56mm",
//	L"7.62mm O.",
//	L"7.62mm PV",
//	L"4.7mm",
//	L"5.7mm",
//	L"Monstre",
//	L"Roquette",
//	L"", // dart
//	L"", // Lance-Flammes
//	L".50 cal", // barrett
//	L"9mm Hvy", // Val silent
//};


CHAR16 WeaponType[][30] =
{
	L"Divers",
	L"Pistolet",
	L"Pistolet-mitrailleur",
	L"Mitraillette",
	L"Fusil",
	L"Fusil de pr�cision",
	L"Fusil d'assaut",
	L"Mitrailleuse l�g�re",
	L"Fusil � pompe",
};

CHAR16 TeamTurnString[][STRING_LENGTH] =
{
	L"Tour du joueur", // player's turn
	L"Tour de l'ennemi",
	L"Tour des cr�atures",
	L"Tour de la milice",
	L"Tour des civils",
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

	L"%s est touch�(e) � la t�te et perd un point de sagesse !",
	L"%s est touch�(e) � l'�paule et perd un point de dext�rit� !",
	L"%s est touch�(e) � la poitrine et perd un point de force !",
	L"%s est touch�(e) � la jambe et perd un point d'agilit� !",
	L"%s est touch�(e) � la t�te et perd %d points de sagesse !",
	L"%s est touch�(e) � l'�paule et perd %d points de dext�rit� !",
	L"%s est touch�(e) � la poitrine et perd %d points de force !",
	L"%s est touch�(e) � la jambe et perd %d points d'agilit� !",
	L"Interruption !",

	// The first %s is a merc's name, the second is a string from pNoiseVolStr,
	// the third is a string from pNoiseTypeStr, and the last is a string from pDirectionStr

	L"", //OBSOLETE
	L"Les renforts sont arriv�s !",

	// In the following four lines, all %s's are merc names

	L"%s recharge.",
	L"%s n'a pas assez de Points d'Action !",
	L"%s applique les premiers soins (Appuyez sur une touche pour annuler).",
	L"%s et %s appliquent les premiers soins (Appuyez sur une touche pour annuler).",
	// the following 17 strings are used to create lists of gun advantages and disadvantages
	// (separated by commas)
	L"fiable",
	L"peu fiable",
	L"facile � entretenir",
	L"difficile � entretenir",
	L"puissant",
	L"peu puissant",
	L"cadence de tir �lev�e",
	L"faible cadence de tir",
	L"longue port�e",
	L"courte port�e",
	L"l�ger",
	L"lourd",
	L"petit",
	L"tir en rafale",
	L"pas de tir en rafale",
	L"grand chargeur",
	L"petit chargeur",

	// In the following two lines, all %s's are merc names

	L"Le camouflage de %s s'est effac�.",
	L"Le camouflage de %s est parti.",

	// The first %s is a merc name and the second %s is an item name

	L"La deuxi�me arme est vide !",
	L"%s a vol� le/la %s.",

	// The %s is a merc name

	L"L'arme de %s ne peut pas tirer en rafale.",

	L"Vous avez d�j� ajout� cet accessoire.",
	L"Combiner les objets ?",

	// Both %s's are item names

	L"Vous ne pouvez combiner un(e) %s avec un(e) %s.",

	L"Aucun",
	L"Retirer chargeur",
	L"Accessoires",
	
	//You cannot use "item(s)" and your "other item" at the same time.
	//Ex:  You cannot use sun goggles and you gas mask at the same time.
	L"Vous ne pouvez utiliser votre %s et votre %s simultan�ment.",

	L"Vous pouvez combiner cet accessoire avec certains objets en le mettant dans l'un des quatre emplacements disponibles.",
	L"Vous pouvez combiner cet accessoire avec certains objets en le mettant dans l'un des quatre emplacements disponibles (Ici, cet accessoire n'est pas compatible avec cet objet).",
	L"Ce secteur n'a pas �t� s�curis� !",
	L"Vous devez donner %s � %s",//inverted !! you still need to give the letter to X
	L"%s a �t� touch� � la t�te !",
	L"Rompre le combat ?",
	L"Cet accessoire ne pourra plus �tre enlev�. D�sirez-vous toujours le mettre ?",
	L"%s se sent beaucoup mieux !",
	L"%s a gliss� sur des billes !",
	L"%s n'est pas parvenu � ramasser le/la %s !",
	L"%s a r�par� le %s",
	L"Interruption pour ",
	L"Voulez-vous vous rendre ?",
	L"Cette personne refuse votre aide.",
	L"JE NE CROIS PAS !",
	L"Pour utiliser l'h�licopt�re de Skyrider, vous devez ASSIGNER vos mercenaires au VEHICULE.",
	L"%s ne peut recharger qu'UNE arme",
	L"Tour des chats sauvages",
	L"automatique",
	L"Pas de tir auto",
	L"pr�cis",
	L"peu pr�cis",
	L"Pas de coup par coup",
	L"L'ennemi n'as plus rien � voler!",
	L"L'ennemi n'a rien dans les mains!",

	L"%s a perdu son camouflage de d�sert.",
	L"%s a perdu son camouflage de d�sert � cause de l'eau.",
	
	L"%s a perdu son camouflage de bois.",
	L"%s a perdu son camouflage de bois � cause de l'eau",
	
	L"%s a perdu son camouflage urbain.",
	L"%s a perdu son camouflage urbain � cause de l'eau.",
	
	L"%s a perdu son camouflage de neige.",
	L"%s a perdu son camouflage de neige � cause de l'eau.",

	L"Vous ne pouvez pas attacher %s � cette emplacement.",
	L"%s n'ira dans aucun emplacement de libre.",
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
	L"Pause",
	L"Normal",
	L"5 min",
	L"30 min",
	L"60 min",
	L"6 hrs", 
};


// Assignment Strings: what assignment does the merc  have right now? For example, are they on a squad, training, 
// administering medical aid (doctor) or training a town. All are abbreviated. 8 letters is the longest it can be.

STR16 pAssignmentStrings[] =
{
	L"Esc. 1",
	L"Esc. 2",
	L"Esc. 3",
	L"Esc. 4",
	L"Esc. 5",
	L"Esc. 6",
	L"Esc. 7",
	L"Esc. 8",
	L"Esc. 9",
	L"Esc. 10",
	L"Esc. 11",
	L"Esc. 12",
	L"Esc. 13",
	L"Esc. 14",
	L"Esc. 15",
	L"Esc. 16",
	L"Esc. 17",
	L"Esc. 18",
	L"Esc. 19",
	L"Esc. 20",
	L"Service", // on active duty
	L"Docteur", // administering medical aid
	L"Patient", // getting medical aid
	L"Transport", // in a vehicle
	L"Transit", // in transit - abbreviated form
	L"R�paration", // repairing
	L"Formation", // training themselves  
	L"Milice", // training a town to revolt
	L"Milice M.", //training moving militia units	
	L"Entra�neur", // training a teammate
	L"El�ve", // being trained by someone else 
	L"Exploitation", // operating a strategic facility
	L"Repos", // Resting at a facility
	L"Mort(e)", // dead
	L"Incap.", // abbreviation for incapacitated
	L"Captur�", // Prisoner of war - captured
	L"H�pital", // patient in a hospital 
	L"Vide",	// Vehicle is empty
};


STR16 pMilitiaString[] =
{
	L"Milice", // the title of the militia box
	L"Disponibles", //the number of unassigned militia troops
	L"Vous ne pouvez r�organiser la milice lors d'un combat !",
	L"Des milices ne sont pas assign�es � un secteur. Voulez-vous les dissoudre ?",
};


STR16 pMilitiaButtonString[] =
{
	L"Auto", // auto place the militia troops for the player
	L"OK", // done placing militia troops
	L"Dissoudre", // HEADROCK HAM 3.6: Disband militia
};

STR16 pConditionStrings[] = 
{
	L"Excellent", //the state of a soldier .. excellent health
	L"Bon", // good health
	L"En forme", // fair health
	L"Bless�", // wounded health
	L"Fatigu�", // tired
	L"Epuis�", // bleeding to death
	L"Inconscient", // knocked out 
	L"Mourant", // near death
	L"Mort", // dead
};

STR16 pEpcMenuStrings[] =
{
	L"Service", // set merc on active duty
	L"Patient", // set as a patient to receive medical aid
	L"Transport", // tell merc to enter vehicle
	L"Laisser", // let the escorted character go off on their own
	L"Annuler", // close this menu
};


// look at pAssignmentString above for comments

STR16 pPersonnelAssignmentStrings[] =
{
	L"Esc. 1",
	L"Esc. 2",
	L"Esc. 3",
	L"Esc. 4",
	L"Esc. 5",
	L"Esc. 6",
	L"Esc. 7",
	L"Esc. 8",
	L"Esc. 9",
	L"Esc. 10",
	L"Esc. 11",
	L"Esc. 12",
	L"Esc. 13",
	L"Esc. 14",
	L"Esc. 15",
	L"Esc. 16",
	L"Esc. 17",
	L"Esc. 18",
	L"Esc. 19",
	L"Esc. 20",
	L"Service",
	L"Docteur",
	L"Patient",
	L"Transport",
	L"Transit",
	L"R�paration",
	L"Formation", 
	L"Milice",
	L"Forme la milice mobile",
	L"Entra�neur",
	L"El�ve",
	L"Exploitation infras.",	
	L"Repos infras.",
	L"Mort(e)",
	L"Incap.",
	L"Captur�(e)",
	L"H�pital", 
	L"Vide",	// Vehicle is empty
};


// refer to above for comments

STR16 pLongAssignmentStrings[] =
{
	L"Esc. 1",
	L"Esc. 2",
	L"Esc. 3",
	L"Esc. 4",
	L"Esc. 5",
	L"Esc. 6",
	L"Esc. 7",
	L"Esc. 8",
	L"Esc. 9",
	L"Esc. 10",
	L"Esc. 11",
	L"Esc. 12",
	L"Esc. 13",
	L"Esc. 14",
	L"Esc. 15",
	L"Esc. 16",
	L"Esc. 17",
	L"Esc. 18",
	L"Esc. 19",
	L"Esc. 20",
	L"Service",
	L"Docteur",
	L"Patient",
	L"Transport",
	L"Transit",
	L"R�paration",
	L"Formation", 
	L"Milice",
	L"Milice mobile",
	L"Entra�neur",
	L"El�ve",
	L"Exploitation infras.",	
	L"Repos infras.",
	L"Mort(e)",
	L"Incap.",
	L"Captur�(e)",
	L"H�pital", // patient in a hospital 
	L"Vide",	// Vehicle is empty
};


// the contract options

STR16 pContractStrings[] =
{
	L"Options du contrat :", 
	L"", // a blank line, required
	L"Extension 1 jour", // offer merc a one day contract extension
	L"Extension 1 semaine", // 1 week
	L"Extension 2 semaines", // 2 week
	L"Renvoyer", // end merc's contract
	L"Annuler", // stop showing this menu
};

STR16 pPOWStrings[] =
{
	L"Captur�(e)",  //an acronym for Prisoner of War
	L"??",
};

STR16 pLongAttributeStrings[] =
{
	L"FORCE", 
	L"DEXTERITE",  
	L"AGILITE", 
	L"SAGESSE", 
	L"PRECISION",
	L"MEDECINE",
	L"MECANIQUE",
	L"COMMANDEMENT",
	L"EXPLOSIFS",
	L"NIVEAU",
};

STR16 pInvPanelTitleStrings[] =
{
	L"Protec.", // the armor rating of the merc
	L"Poids", // the weight the merc is carrying
	L"Cam.", // the merc's camouflage rating
	L"Camouflage :",
	L"Protection :",
};

STR16 pShortAttributeStrings[] =
{
	L"Agi", // the abbreviated version of : agilit�
	L"Dex", // dext�rit�
	L"For", // strength
	L"Com", // leadership
	L"Sag", // sagesse
	L"Niv", // experience level
	L"Tir", // marksmanship skill
	L"Exp", // explosive skill
	L"M�c", // mechanical skill
	L"M�d", // medical skill
};


STR16 pUpperLeftMapScreenStrings[] =
{
	L"Affectation", // the mercs current assignment 
	L"Contrat", // the contract info about the merc
	L"Sant�", // the health level of the current merc
	L"Moral", // the morale of the current merc
	L"Cond.",	// the condition of the current vehicle
	L"Carb.",	// the fuel level of the current vehicle
};

STR16 pTrainingStrings[] =
{
	L"Formation", // tell merc to train self 
	L"Milice", // tell merc to train town 
	L"Entra�neur", // tell merc to act as trainer
	L"El�ve", // tell merc to be train by other 
};

STR16 pGuardMenuStrings[] =
{
	L"Cadence de tir :", // the allowable rate of fire for a merc who is guarding
	L"Feu � volont�", // the merc can be aggressive in their choice of fire rates
	L"Economiser munitions", // conserve ammo 
	L"Tir restreint", // fire only when the merc needs to 
	L"Autres Options :", // other options available to merc
	L"Retraite", // merc can retreat
	L"Abri",  // merc is allowed to seek cover
	L"Assistance", // merc can assist teammates
	L"OK", // done with this menu
	L"Annuler", // cancel this menu
};

// This string has the same comments as above, however the * denotes the option has been selected by the player

STR16 pOtherGuardMenuStrings[] =
{
	L"Cadence de tir :",
	L"*Feu � volont�*",
	L"*Economiser munitions*",
	L"*Tir restreint*",
	L"Autres Options :",
	L"*Retraite*",
	L"*Abri*",
	L"*Assistance*",
	L"OK",
	L"Annuler",
};

STR16 pAssignMenuStrings[] =
{
	L"Service", // merc is on active duty
	L"Docteur", // the merc is acting as a doctor
	L"Patient", // the merc is receiving medical attention
	L"Transport", // the merc is in a vehicle
	L"R�paration", // the merc is repairing items 
	L"Formation", // the merc is training
	L"Construction", // the merc is using/staffing a facility
	L"Annuler", // cancel this menu
};

//lal
STR16 pMilitiaControlMenuStrings[] =
{
	L"Attaquez", // set militia to aggresive
	L"Tenez la Position", // set militia to stationary
	L"Retraite", // retreat militia
	L"Rejoignez moi", // retreat militia
	L"Couchez vous", // retreat militia	
	L"A couvert!",
	L"All: Attaquez", 
	L"All: Tenez la Position",
	L"All: Retraite",
	L"All: Rejoignez-moi",
	L"All: Dispersez-vous",
	L"All: Couchez-vous",
	L"All: A couvert!",
	//L"All: Trouver materiel",
	L"Annuler", // cancel this menu
};

//STR16 pTalkToAllMenuStrings[] =
//{
//	L"Attaquez", // set militia to aggresive
//	L"Tenez la Position", // set militia to stationary
//	L"Retraite", // retreat militia
//	L"Rejoignez-moi", // retreat militia
//	L"Couchez-vous", // retreat militia		 
//	L"Annuler", // cancel this menu
//};

STR16 pRemoveMercStrings[] =
{
	L"Enlever Merc", // remove dead merc from current team
	L"Annuler",
};

STR16 pAttributeMenuStrings[] =
{
	L"Force",
	L"Dext�rit�",
	L"Agilit�",
	L"Sant�",
	L"Tir",
	L"M�decine",
	L"M�canique",
	L"Commandement",
	L"Explosifs",
	L"Annuler",
};

STR16 pTrainingMenuStrings[] =
{
	L"Formation", // train yourself 
	L"Milice", // train the town 
	L"Milice mobile",
	L"Entra�neur", // train your teammates 
	L"El�ve",  // be trained by an instructor 
	L"Annuler", // cancel this menu
};


STR16 pSquadMenuStrings[] =
{
	L"Esc. 1",
	L"Esc. 2",
	L"Esc. 3",
	L"Esc. 4",
	L"Esc. 5",
	L"Esc. 6",
	L"Esc. 7",
	L"Esc. 8",
	L"Esc. 9",
	L"Esc. 10",
	L"Esc. 11",
	L"Esc. 12",
	L"Esc. 13",
	L"Esc. 14",
	L"Esc. 15",
	L"Esc. 16",
	L"Esc. 17",
	L"Esc. 18",
	L"Esc. 19",
	L"Esc. 20",
	L"Annuler",
};

STR16 pPersonnelTitle[] =
{
	L"Personnel", // the title for the personnel screen/program application
};

STR16 pPersonnelScreenStrings[] =
{
	L"Sant� : ", // health of merc
	L"Agilit� : ", 
	L"Dext�rit� : ",
	L"Force : ",
	L"Commandement : ",
	L"Sagesse : ",
	L"Niv. Exp. : ", // experience level
	L"Tir : ", 
	L"M�canique : ",
	L"Explosifs : ",
	L"M�decine : ",
	L"Acompte m�d. : ", // amount of medical deposit put down on the merc
	L"Contrat : ", // cost of current contract
	L"Tu�s : ", // number of kills by merc
	L"Participation : ", // number of assists on kills by merc
	L"Co�t/jour :", // daily cost of merc
	L"Co�t total :", // total cost of merc
	L"Contrat :", // cost of current contract
	L"Services rendus :", // total service rendered by merc
	L"Salaires dus :", // amount left on MERC merc to be paid
	L"Tir r�ussis :", // percentage of shots that hit target
	L"Batailles :", // number of battles fought
	L"Blessures :", // number of times merc has been wounded
	L"Sp�cialit�s :",
	L"Aucune sp�cialit�",
	L"R�alisation :", // added by SANDRO
};

// SANDRO - helptexts for merc records
STR16 pPersonnelRecordsHelpTexts[] =
{
	L"Soldats d'�lite : %d\n",
	L"Soldats r�guliers : %d\n",
	L"Soldats d'administrations : %d\n",
	L"Groupe hostile : %d\n",
	L"Cr�atures : %d\n",
	L"Tanks : %d\n", 
	L"Autres : %d\n",

	L"Mercenaires : %d\n",
	L"Milices : %d\n",
	L"Autres : %d\n",

	L"Coups tir�s : %d\n",
	L"Missiles tir�s : %d\n",
	L"Grenades lanc�s : %d\n",
	L"Couteaus lanc�s : %d\n",
	L"Attaques au couteau : %d\n",
	L"Attaques au corps-�-corps : %d\n",
	L"Tirs r�ussis : %d\n",

	L"Serrures crochet�es : %d\n",
	L"Serrures fractur�es : %d\n",
	L"Pi�ges retir�s : %d\n",
	L"Bombes explos�es : %d\n",
	L"Objets r�par�s : %d\n",
	L"Objets combin�s : %d\n",
	L"objets vol�s : %d\n",
	L"Milices entrain�es : %d\n",
	L"Mercs soign�s : %d\n",
	L"Chirurgies faites : %d\n",
	L"Personnes rencontr�es : %d\n",
	L"Secteurs d�couverts : %d\n",
	L"Embuscades emp�ch�es : %d\n",
	L"Qu�tes fa�tes : %d\n",

	L"Tactiques de combats : %d\n",
	L"Combats autor�solus : %d\n",
	L"Temps �coul�s : %d\n",
	L"Embuscades exp�riment�es : %d\n",
	L"Meilleurs combats : %d Ennemies\n",

	L"Tirs : %d\n",
	L"Poignard�s : %d\n",
	L"Poings : %d\n",
	L"D�truit : %d\n",
	L"D�g�ts subit en installant : %d\n",
	L"Chirurgies subies : %d\n",
	L"Facility accidents : %d\n",

	L"Caract�re :",
	L"Faiblesse :",

	L"Attitudes :",	// WANNE: For old traits display instead of "Character:"!
};


//These string correspond to enums used in by the SkillTrait enums in SoldierProfileType.h
STR16 gzMercSkillText[] = 
{
	L"Aucune sp�cialit�",
	L"Crochetage",
	L"Combat � mains nues",
	L"Electronique",
	L"Op�rations de nuit",
	L"Lancer",
	L"Enseigner",
	L"Armes lourdes",
	L"Armes automatiques",
	L"Discretion",
	L"Ambidextre",
	L"Voleur",
	L"Arts martiaux",
	L"Couteau",
	L"Tireur isol�",
	L"Camouflage",					
	L"(Expert)",
};

//////////////////////////////////////////////////////////
// SANDRO - added this
STR16 gzMercSkillTextNew[] = 
{
	// Major traits
	L"Aucune sp�cialit�",

	L"Armes automatiques",
	L"Armes lourdes",
	L"Tireur d'�lite",
	L"Scout",
	L"Bandit",
	L"Corps-�-corps",
	L"Manager",
	L"Technicien",
	L"M�decin",
	// Minor traits
	L"Ambidextre",
	L"M�l�e",
	L"Lancer",
	L"Op�rations de nuit",
	L"Discr�tion",
	L"Athl�tic",
	L"Masse musculaire",
	L"D�molition",
	L"Enseigner",
	L"Reconnaissance",
	// second names for major skills
	L"Mitrailleur",
	L"Bombardier",
	L"Sniper",
	L"Chasseur",
	L"Combattant",
	L"Arts martiaux",
	L"Commandant",
	L"Ing�nieur",
	L"Chirurgien",
	L"Plus...",
};
//////////////////////////////////////////////////////////


// This is pop up help text for the options that are available to the merc

STR16 pTacticalPopupButtonStrings[] =
{
	L"Debout/Marcher (|S)",
	L"Accroupi/Avancer (|C)",
	L"Debout/Courir (|R)",
	L"A terre/Ramper (|P)",
	L"Regarder (|L)",
	L"Action",
	L"Parler",
	L"Examiner (|C|t|r|l)",

	// Pop up door menu
	L"Ouvrir � la main",
	L"Examen pouss�",
	L"Crocheter",
	L"Enfoncer",
	L"D�samorcer",
	L"Verrouiller",
	L"D�verrouiller",
	L"Utiliser explosif",
	L"Utiliser pied de biche",
	L"Annuler (|E|c|h|a|p)",
	L"Fermer",
};

// Door Traps. When we examine a door, it could have a particular trap on it. These are the traps.

STR16 pDoorTrapStrings[] =
{
	L"aucun pi�ge",
	L"un pi�ge explosif",
	L"un pi�ge �lectrique",
	L"une alarme sonore",
	L"une alarme silencieuse",
};

// Contract Extension. These are used for the contract extension with AIM mercenaries.

STR16 pContractExtendStrings[] =
{
	L"jour",
	L"semaine",
	L"2 semaines",
};

// On the map screen, there are four columns. This text is popup help text that identifies the individual columns.

STR16 pMapScreenMouseRegionHelpText[] =
{
	L"Choix du personnage",
	L"Affectation",
	L"Destination",
	L"|Contrat du mercenaire",
	L"Retirer mercenaire",
	L"Repos", 
};

// volumes of noises 

STR16 pNoiseVolStr[] =
{
	L"FAIBLE",
	L"MOYEN",
	L"FORT",
	L"TRES FORT",
};

// types of noises 

STR16 pNoiseTypeStr[] = // OBSOLETE
{
	L"INCONNU",
	L"MOUVEMENT",
	L"GRINCEMENT",
	L"CLAPOTEMENT",
	L"IMPACT",
	L"COUP DE FEU",
	L"EXPLOSION",
	L"CRI",
	L"IMPACT",
	L"IMPACT",
	L"BRUIT",
	L"COLLISION",
};

// Directions that are used to report noises

STR16 pDirectionStr[] = 
{
	L"au NORD-EST",
	L"� l'EST",
	L"au SUD-EST",
	L"au SUD",
	L"au SUD-OUEST",
	L"� l'OUEST",
	L"au NORD-OUEST",
	L"au NORD",
};

// These are the different terrain types. 

STR16 pLandTypeStrings[] =
{
	L"Ville",
	L"Route",
	L"Plaine",
	L"D�sert",
	L"Bois",
	L"For�t",	 
	L"Marais",
	L"Eau",	
	L"Collines",
	L"Infranchissable",
	L"Rivi�re",	//river from north to south
	L"Rivi�re",	//river from east to west
	L"Pays �tranger",
	//NONE of the following are used for directional travel, just for the sector description.
	L"Tropical",
	L"Cultures",
	L"Plaines, route",
	L"Bois, route",
	L"Ferme, route",
	L"Tropical, route",
	L"For�t, route",
	L"Route c�ti�re",
	L"Montagne, route",
	L"C�te, route",
	L"D�sert, route",
	L"Marais, route",
	L"Bois, site SAM",
	L"D�sert, site SAM",
	L"Tropical, site SAM",
	L"Meduna, site SAM",
	
	//These are descriptions for special sectors
	L"H�pital de Cambria",
	L"A�roport de Drassen",
	L"A�roport de Meduna",
	L"Site SAM",
	L"Base rebelle", //The rebel base underground in sector A10
	L"Prison de Tixa",	//The basement of the Tixa Prison (J9)
	L"Repaire de cr�atures",	//Any mine sector with creatures in it
	L"Sous-sols d'Orta",	//The basement of Orta (K4)
	L"Tunnel",				//The tunnel access from the maze garden in Meduna 
										//leading to the secret shelter underneath the palace
	L"Abri",				//The shelter underneath the queen's palace
	L"",							//Unused
};

STR16 gpStrategicString[] =
{
	L"",	//Unused
	L"%s d�tect� dans le secteur %c%d et une autre escouade est en route.",	//STR_DETECTED_SINGULAR
	L"%s d�tect� dans le secteur %c%d et d'autres escouades sont en route.",	//STR_DETECTED_PLURAL
	L"Voulez-vous coordonner une arriv�e simultan�e ?",													//STR_COORDINATE

	//Dialog strings for enemies.

	L"L'ennemi vous propose de vous rendre.",			//STR_ENEMY_SURRENDER_OFFER
	L"L'ennemi a captur� vos mercenaires inconscients.",	//STR_ENEMY_CAPTURED

	//The text that goes on the autoresolve buttons							

	L"Retraite", 		//The retreat button				//STR_AR_RETREAT_BUTTON
	L"OK",		//The done button				//STR_AR_DONE_BUTTON

	//The headers are for the autoresolve type (MUST BE UPPERCASE)

	L"DEFENSEURS",								//STR_AR_DEFEND_HEADER
	L"ATTAQUANTS",								//STR_AR_ATTACK_HEADER
	L"RENCONTRE",								//STR_AR_ENCOUNTER_HEADER
	L"Secteur",		//The Sector A9 part of the header		//STR_AR_SECTOR_HEADER

	//The battle ending conditions						

	L"VICTOIRE !",								//STR_AR_OVER_VICTORY
	L"DEFAITE !",								//STR_AR_OVER_DEFEAT
	L"REDDITION !",							//STR_AR_OVER_SURRENDERED
	L"CAPTURE !",								//STR_AR_OVER_CAPTURED
	L"RETRAITE !",								//STR_AR_OVER_RETREATED

	//These are the labels for the different types of enemies we fight in autoresolve.

	L"Milice",							//STR_AR_MILITIA_NAME,
	L"Elite",								//STR_AR_ELITE_NAME,
	L"Troupe",								//STR_AR_TROOP_NAME,
	L"Admin",								//STR_AR_ADMINISTRATOR_NAME,
	L"Cr�ature",								//STR_AR_CREATURE_NAME,

	//Label for the length of time the battle took

	L"Temps �coul�",							//STR_AR_TIME_ELAPSED,

	//Labels for status of merc if retreating.  (UPPERCASE)			

	L"SE RETIRE",								//STR_AR_MERC_RETREATED,
	L"EN RETRAITE",								//STR_AR_MERC_RETREATING,
	L"RETRAITE",								//STR_AR_MERC_RETREAT,

	//PRE BATTLE INTERFACE STRINGS 
	//Goes on the three buttons in the prebattle interface.  The Auto resolve button represents
	//a system that automatically resolves the combat for the player without having to do anything.
	//These strings must be short (two lines -- 6-8 chars per line)

	L"Auto.",							//STR_PB_AUTORESOLVE_BTN,
	L"Combat",							//STR_PB_GOTOSECTOR_BTN,
	L"Retraite",							//STR_PB_RETREATMERCS_BTN,

	//The different headers(titles) for the prebattle interface.
	L"ENNEMI REPERE",							//STR_PB_ENEMYENCOUNTER_HEADER,
	L"ATTAQUE ENNEMIE",							//STR_PB_ENEMYINVASION_HEADER, // 30
	L"EMBUSCADE !",								//STR_PB_ENEMYAMBUSH_HEADER
	L"VOUS PENETREZ EN SECTEUR ENNEMI",				//STR_PB_ENTERINGENEMYSECTOR_HEADER
	L"ATTAQUE DE CREATURES",							//STR_PB_CREATUREATTACK_HEADER
	L"AMBUSCADE DE CHATS SAUVAGES",							//STR_PB_BLOODCATAMBUSH_HEADER
	L"VOUS ENTREZ DANS LE REPAIRE DES CHATS SAUVAGES",			//STR_PB_ENTERINGBLOODCATLAIR_HEADER

	//Various single words for direct translation.  The Civilians represent the civilian
	//militia occupying the sector being attacked.  Limited to 9-10 chars

	L"Lieu",
	L"Ennemis",
	L"Mercs",
	L"Milice",
	L"Cr�atures",
	L"Chats",
	L"Secteur",
	L"Aucun",		//If there are non uninvolved mercs in this fight.
	L"N/A",			//Acronym of Not Applicable
	L"j",			//One letter abbreviation of day
	L"h",			//One letter abbreviation of hour

	//TACTICAL PLACEMENT USER INTERFACE STRINGS
	//The four buttons 

	L"Annuler",
	L"Dispers�",
	L"Group�",
	L"OK",

	//The help text for the four buttons.  Use \n to denote new line (just like enter).

	L"Annule le d�ploiement des mercenaires \net vous permet de les d�ployer vous-m�me. (|C)", 
	L"Disperse al�atoirement vos mercenaires \n� chaque fois. (|S)",
	L"Vous permet de placer votre groupe de mercenaires. (|G)",
	L"Cliquez sur ce bouton lorsque vous avez d�ploy� \nvos mercenaires. (|E|n|t|r|�|e)",
	L"Vous devez d�ployer vos mercenaires \navant d'engager le combat.",

	//Various strings (translate word for word)

	L"Secteur",
	L"D�finissez les points d'entr�e",

	//Strings used for various popup message boxes.  Can be as long as desired.

	L"Il semblerait que l'endroit soit inaccessible...",
	L"D�ployez vos mercenaires dans la zone en surbrillance.",

	//This message is for mercs arriving in sectors.  Ex:  Red has arrived in sector A9.
	//Don't uppercase first character, or add spaces on either end.

	L"est arriv� dans le secteur", 

	//These entries are for button popup help text for the prebattle interface.  All popup help
	//text supports the use of \n to denote new line.  Do not use spaces before or after the \n.
	L"R�solution automatique du combat\nsans charger la carte. (|A)",
	L"R�solution automatique impossible lorsque\nvous attaquez.",
	L"P�n�trez dans le secteur pour engager le combat. (|E)",
	L"Faire retraite vers le secteur pr�c�dent. (|R)",				//singular version
	L"Faire retraite vers les secteurs pr�c�dents. (|R)", //multiple groups with same previous sector

	//various popup messages for battle conditions.  

	//%c%d is the sector -- ex:  A9
	L"L'ennemi attaque votre milice dans le secteur %c%d.",
	//%c%d is the sector -- ex:  A9
	L"Les cr�atures attaquent votre milice dans le secteur %c%d.",
	//1st %d refers to the number of civilians eaten by monsters,  %c%d is the sector -- ex:  A9
	//Note:  the minimum number of civilians eaten will be two.
	L"Les cr�atures ont tu� %d civils dans le secteur %s.",
	//%s is the sector location -- ex:  A9: Omerta
	L"L'ennemi attaque vos mercenaires dans le secteur %s. Aucun de vos hommes ne peut combattre !",
	//%s is the sector location -- ex:  A9: Omerta
	L"Les cr�atures attaquent vos mercenaires dans le secteur %s. Aucun de vos hommes ne peut combattre !",

};

STR16 gpGameClockString[] = 
{
	//This is the day represented in the game clock.  Must be very short, 4 characters max.
	L"Jour",	
};

//When the merc finds a key, they can get a description of it which 
//tells them where and when they found it.
STR16 sKeyDescriptionStrings[2] =
{
	L"Secteur :",
	L"Jour :",
};

//The headers used to describe various weapon statistics.

CHAR16		gWeaponStatsDesc[][ 17 ] =
{
	// HEADROCK: Changed this for Extended Description project
	L"Etat :",
	L"Poids :", 
	L"P. d'action",	
	L"Por. :",		// Range
	L"D�g. :",		// Damage
	L"Munitions :", 		// Number of bullets left in a magazine
	L"PA :",			// abbreviation for Action Points
	L"=",
	L"=",
						//Lal: additional strings for tooltips
	L"Precision :",	//9
	L"Port�e :",		//10	
	L"D�gats :", 	//11
	L"Poids :",		//12
	L"Etourdissement :",//13
	// HEADROCK: Added new strings for extended description ** REDUNDANT **
	L"Accessoire :",	//14
	L"AUTO/5:",		//15
	L"Munit. rest. :",		//16
	L"Par d�faut :",	//17 //WarmSteel - So we can also display default attachments

};

// HEADROCK: Several arrays of tooltip text for new Extended Description Box
// Please note, several of these are artificially inflated to 19 entries to help fix a complication with
// changing item type while watching its description box
STR16		gzWeaponStatsFasthelp[ 32 ] =
{
	L"Pr�cision",
	L"D�gats",
	L"Port�e",
	L"Niveaux de vis�e",
	L"Facteur de vis�e",
	L"Meilleurs port�e maser moyenne",
	L"Cache-flammes",
	L"Intensit� sonore (Valeur faible recommand�e)",
	L"Fiabilit�",
	L"Facilit� d'entretien",
	L"Port�e mini pour bonus vis�e",
	L"Facteur de toucher",
	L"",	//12
	L"PA pour mettre en joue",
	L"PA par tir",
	L"PA par rafale",
	L"PA pour tir auto.",
	L"PA pour recharger",
	L"PA pour recharger manuellement",
	L"",	//19
	L"Facteur du bipied",
	L"Nombre de tirs pour 5 PA",
	L"P�nalit� Rafale/Auto (Valeur faible recommand�e)",	//22
	L"PA pour jeter",
	L"PA pour lancer",
	L"PA pour poignarder",
	L"Pas de tir simple!",
	L"Pas de tir en rafale!",
	L"Pas de tir auto.!",
	L"PA pour frapper",
	L"P�nalit� Auto (Moins c'est mieux)",
    L"P�nalit� Rafale (Moins c'est mieux)",
};

STR16		gzWeaponStatsFasthelpTactical[ 32 ] =
{
	L"Pr�cision",
	L"D�gats",
	L"Port�e",
	L"Niveaux de vis�e",
	L"Facteur de vis�e",
	L"Moyenne meilleurs port�es laser",
	L"Cache-flammes",
	L"Intensit� sonore (Valeur faible recommand�e)",
	L"Fiabilit�",
	L"Facilit� d'entretien",
	L"Port�e mini pour bonus vis�e",
	L"Facteur de toucher",
	L"",	//12
	L"PA pour mettre en joue",
	L"PA par tir",
	L"PA par rafale",
	L"PA pour tir auto.",
	L"PA pour recharger",
	L"PA pour recharger manuellement",
	L"P�nalit� Rafale (Moins c'est mieux)",	//19
	L"Facteur de bipied",
	L"Nombre de tirs pour 5 PA",
	L"P�nalit� Auto (Moins c'est mieux)",
	L"P�nalit� Rafale/Auto (Moins c'est mieux)",	//23
	L"PA pour jeter",
	L"PA pour lancer",
	L"PA pour poignarder",
	L"Pas de tir simple!",
	L"Pas de tir en rafale!",
	L"Pas de tir auto.!",
	L"PA pour frapper",
    L"",
};

STR16		gzMiscItemStatsFasthelp[ 34 ] =
{
	L"Facteur d'encombrement (Valeur faible recommand�e)", // 0
	L"Facteur de fiabilit�",
	L"Facteur d'intensit� sonore (Valeur faible recommand�e)",
	L"Cache-flammes",
	L"Facteur de bipied",
	L"Facteur de port�e", // 5
	L"Facteur de toucher",
	L"Port�e laser optimum",
	L"Facteur de bonus de vis�e",
	L"Facteur de longueur de rafale",
	L"Facteur de p�nalit� de rafale (Valeur �lev�e recommand�e)", // 10
	L"Facteur de p�nalit� tir auto. (Valeur �lev�e recommand�e)",
	L"Facteur de PA",
	L"Facteur de PA rafale (Valeur faible recommand�e)",
	L"Facteur de PA tir auto (Valeur faible recommand�e)",
	L"Facteur de PA mise en joue (Valeur faible recommand�er)", // 15
	L"Facteur de PA recharger (Valeur faible recommand�e)",
	L"Facteur de capacit� chargeur",
	L"Facteur de PA attaque (Valeur faible recommand�e)",
	L"Facteur de d�gats",
	L"Facteur de d�gats M�l�e", // 20
	L"Camouflage bois",
	L"Camouflage urbain",
	L"Camouflage d�sert",
	L"Camouflage neige",
	L"Facteur de discr�tion", // 25
	L"Facteur de port�e auditive",
	L"Facteur de port�e visuelle",
	L"Facteur de port�e visuelle jour",
	L"Facteur de port�e visuelle nuit",
	L"Facteur de port�e visuelle faible lumiere", //30
	L"Facteur de port�e visuelle Cave",
	L"Pourcentage d'effet tunnel (Valeur faible recommand�e)",
	L"Port�e minimale pour bonus de vis�e",
};

// HEADROCK: End new tooltip text

// HEADROCK HAM 4: New condition-based text similar to JA1.
STR16 gConditionDesc[] =
{
	L"En ",
	L"PARFAITE",
	L"EXCELLENTE",
	L"BONNE",
	L"MOYENNE",
	L"FAIBLE",
	L"MAUVAISE",
	L"TERRIBLE",
	L" condition."
};

//The headers used for the merc's money.

CHAR16 gMoneyStatsDesc[][ 13 ] =
{
	L"Montant",
	L"Restant :", //this is the overall balance
	L"Montant",
	L"Partager :", // the amount he wants to separate from the overall balance to get two piles of money

	L"Solde",
	L"actuel :",
	L"Montant",
	L"� retirer :",
};

//The health of various creatures, enemies, characters in the game. The numbers following each are for comment
//only, but represent the precentage of points remaining. 

CHAR16 zHealthStr[][13] =
{
	L"MOURANT",		//	>= 0
	L"CRITIQUE", 		//	>= 15
	L"FAIBLE",		//	>= 30
	L"BLESSE",    	//	>= 45
	L"EN FORME",    	//	>= 60
	L"BON",     	// 	>= 75
	L"EXCELLENT",		// 	>= 90
};

STR16	gzMoneyAmounts[6] = 
{ 
	L"1000",
	L"100",
	L"10",
	L"OK",
	L"Partager",
	L"Retirer",
};

// short words meaning "Advantages" for "Pros" and "Disadvantages" for "Cons." 
CHAR16		gzProsLabel[10] = 
{
	L"Plus : ",
};

CHAR16		gzConsLabel[10] = 
{
	L"Moins : ",
};

//Conversation options a player has when encountering an NPC
CHAR16 zTalkMenuStrings[6][ SMALL_STRING_LENGTH ] =
{
	L"Pardon ?", 	//meaning "Repeat yourself" 
	L"Amical",		//approach in a friendly
	L"Direct",		//approach directly - let's get down to business
	L"Mena�ant",		//approach threateningly - talk now, or I'll blow your face off
	L"Donner",		
	L"Recruter",
};

//Some NPCs buy, sell or repair items. These different options are available for those NPCs as well.
CHAR16 zDealerStrings[4][ SMALL_STRING_LENGTH ]=
{
	L"Acheter/Vendre",
	L"Acheter",
	L"Vendre",
	L"R�parer",
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
 L"Camion de glaces",
 L"Jeep",
 L"Char",
 L"H�licopt�re",
};

STR16 pShortVehicleStrings[] =
{
	L"Eldor.",
	L"Hummer",			// the HMVV
	L"Camion",
	L"Jeep",
	L"Char",
	L"H�lico", 				// the helicopter
};

STR16	zVehicleName[] =
{
	L"Eldorado",
	L"Hummer",		//a military jeep. This is a brand name.
	L"Camion",			// Ice cream truck
	L"Jeep",
	L"Char",
	L"H�lico", 		//an abbreviation for Helicopter
};


//These are messages Used in the Tactical Screen

CHAR16 TacticalStr[][ MED_STRING_LENGTH ] =
{
	L"Raid a�rien",
	L"Appliquer les premiers soins ?",
	
	// CAMFIELD NUKE THIS and add quote #66.
	
	L"%s a remarqu� qu'il manque des objets dans cet envoi.",
	
	// The %s is a string from pDoorTrapStrings
	
	L"La serrure est pi�g�e par %s.", 
	L"Pas de serrure.",
	L"R�ussite !",
	L"Echec.",
	L"R�ussite !",
	L"Echec.",
	L"La serrure n'est pas pi�g�e.",
	L"R�ussite !",
	// The %s is a merc name
	L"%s ne poss�de pas la bonne cl�.",
	L"Le pi�ge est d�samorc�.",
	L"La serrure n'est pas pi�g�e.",
	L"Verrouill�e.",
	L"PORTE",
	L"PIEGEE",
	L"VERROUILLEE",
	L"OUVERTE",
	L"ENFONCEE",
	L"Un interrupteur. Voulez-vous l'actionner ?",
	L"D�samorcer le pi�ge ?",
	L"Pr�c...",
	L"Suiv...",
	L"Plus...",

	// In the next 2 strings, %s is an item name

	L"%s pos�(e) � terre.",
	L"%s donn�(e) � %s.",

	// In the next 2 strings, %s is a name

	L"%s a �t� pay�.",
	L"%d dus � %s.",
	L"Choisir la fr�quence de d�tonation :",  	//in this case, frequency refers to a radio signal
	L"Nombre de tours avant explosion :",	//how much time, in turns, until the bomb blows
	L"D�finir la fr�quence radio :", 	//in this case, frequency refers to a radio signal
	L"D�samorcer le pi�ge ?",
	L"Enlever le drapeau bleu ?",
	L"Poser un drapeau bleu ?",
	L"Fin du tour",

	// In the next string, %s is a name. Stance refers to way they are standing.

	L"Voulez-vous vraiment attaquer %s ?",
	L"Les v�hicules ne peuvent changer de position.",
	L"Le robot ne peut changer de position.",

	// In the next 3 strings, %s is a name

	L"%s ne peut adopter cette position ici.",
	L"%s ne peut recevoir de premiers soins ici.",	
	L"%s n'a pas besoin de premiers soins.",
	L"Impossible d'aller ici.",
	L"Votre escouade est au complet. Vous ne pouvez pas ajouter quelqu'un.",	//there's non room for a recruit on the player's team

	// In the next string, %s is a name

	L"%s a �t� recrut�(e).",

	// Here %s is a name and %d is a number

	L"Vous devez %d $ � %s.",

	// In the next string, %s is a name

	L"Escorter %s ?",

	// In the next string, the first %s is a name and the second %s is an amount of money (including $ sign)

	L"Engager %s � %s la journ�e ?",

	// This line is used repeatedly to ask player if they wish to participate in a boxing match. 

	L"Voulez-vous engager le combat ?",

	// In the next string, the first %s is an item name and the 
	// second %s is an amount of money (including $ sign)

	L"Acheter %s pour %s ?",

	// In the next string, %s is a name

	L"%s est escort�(e) par l'escouade %d.",

	// These messages are displayed during play to alert the player to a particular situation

	L"ENRAYE",					//weapon is jammed.
	L"Le robot a besoin de munitions calibre %s.",		//Robot is out of ammo
	L"Lancer ici ? Aucune chance.",		//Merc can't throw to the destination he selected

	// These are different buttons that the player can turn on and off.

	L"Discretion (|Z)",
	L"Carte (|M)",
	L"Fin du tour (|D)",
	L"Parler �",
	L"Muet",
	L"Se relever (|P|g|U|p)",
	L"Niveau du curseur (|T|a|b)",
	L"Escalader/Sauter (|J)",
	L"Se coucher (|P|g|D|n)",
	L"Examiner (|C|t|r|l)",
	L"Mercenaire pr�c�dent",
	L"Mercenaire suivant (|E|s|p|a|c|e)",
	L"Options (|O)",
	L"Rafale (|B)",
	L"Regarder/Pivoter (|L)",
	L"Sant� : %d/%d\nEnergie : %d/%d\nMoral : %s",
	L"Pardon ?",					//this means "what?" 
	L"Suite",					//an abbrieviation for "Continued" 
	L"Sourdine d�sactiv�e pour %s.",
	L"Sourdine activ�e pour %s.",
	L"Etat : %d/%d\nCarburant : %d/%d",
	L"Sortir du v�hicule" ,
	L"Changer d'escouade ( |M|a|j| |E|s|p|a|c|e )",
	L"Conduire",
	L"N/A",						//this is an acronym for "Not Applicable." 
	L"Utiliser (Mains nues)",
	L"Utiliser (Arme � feu)",
	L"Utiliser (Couteau)",
	L"Utiliser (Explosifs)",
	L"Utiliser (Trousse de soins)",
	L"(Prendre)",
	L"(Recharger)",
	L"(Donner)",
	L"%s part.",
	L"%s arrive.",
	L"%s n'a plus de Points d'Action.",
	L"%s n'est pas disponible.",
	L"%s est couvert de bandages.",
	L"%s n'a plus de bandages.",
	L"Ennemi dans le secteur !",
	L"Pas d'ennemi en vue.",
	L"Pas assez de Points d'Action.",
	L"T�l�commande inutilis�e.",
	L"La rafale a vid� le chargeur !",
	L"SOLDAT",
	L"CREPITUS",
	L"Milice",
	L"CIVIL",
	L"Quitter Secteur",
	L"OK",
	L"Annuler",
	L"Mercenaire",
	L"Tous",
	L"GO",
	L"Carte",
	L"Vous ne pouvez pas quitter ce secteur par ce c�t�.",
	L"%s est trop loin.",
	L"Enlever cime des arbres",
	L"Afficher cime des arbres",
	L"CORBEAU",				//Crow, as in the large black bird
	L"COU",
	L"TETE",
	L"TORSE",
	L"JAMBES",
	L"Donner informations � la Reine ?",
	L"Acquisition de l'ID digitale",
	L"ID digitale refus�e. Arme d�sactiv�e.",
	L"Cible acquise",
	L"Chemin bloqu�",
	L"D�p�t/Retrait",		//Help text over the $ button on the Single Merc Panel 
	L"Personne n'a besoin de premiers soins.",
	L"Enra.",											// Short form of JAMMED, for small inv slots
	L"Impossible d'aller ici.",					// used ( now ) for when we click on a cliff
	L"Chemin bloqu�. Voulez-vous changer de place avec cette personne ?",
	L"La personne refuse de bouger.",
	// In the following message, '%s' would be replaced with a quantity of money (e.g. $200)
	L"Etes-vous d'accord pour payer %s ?",
	L"Acceptez-vous le traitement m�dical gratuit ?",
	L"Voulez-vous �pouser Daryl ?",
	L"Trousseau de Cl�s",
	L"Vous ne pouvez pas faire �a avec ce personnage.",
	L"Epargner Krott ?",
	L"Hors de port�e",
	L"Mineur",
	L"Un v�hicule ne peut rouler qu'entre des secteurs",
	L"Impossible d'apposer des bandages maintenant",
	L"Chemin bloqu� pour %s",
	L"Vos mercenaires captur�s par l'arm�e de Deidranna sont emprisonn�s ici !",
	L"Verrou touch�",
	L"Verrou d�truit",
	L"Quelqu'un d'autre veut essayer sur cette porte.",
	L"Etat : %d/%d\nCarburant : %d/%d",
	L"%s ne peut pas voir %s.",  // Cannot see person trying to talk to
	L"Accessoire retir�",
	L"Ne peut pas gagner un autre v�hicule car vous en avez d�j� 2",
};

//Varying helptext explains (for the "Go to Sector/Map" checkbox) what will happen given different circumstances in the "exiting sector" interface.
STR16 pExitingSectorHelpText[] =
{
	//Helptext for the "Go to Sector" checkbox button, that explains what will happen when the box is checked.
	L"Si vous cochez ce bouton, le secteur adjacent sera imm�diatement charg�.",
	L"Si vous cochez ce bouton, vous arriverez directement dans l'�cran de carte\nle temps que vos mercenaires arrivent.",

	//If you attempt to leave a sector when you have multiple squads in a hostile sector.
	L"Vous ne pouvez laisser vos mercenaires ici.\nVous devez d'abord nettoyer ce secteur.",

	//Because you only have one squad in the sector, and the "move all" option is checked, the "go to sector" option is locked to on. 
	//The helptext explains why it is locked.
	L"Faites sortir vos derniers mercenaires du secteur\npour charger le secteur adjacent.",
	L"Faites sortir vos derniers mercenaires du secteur\npour aller dans l'�cran de carte le temps que vos mercenaires fassent le voyage.",

	//If an EPC is the selected merc, it won't allow the merc to leave alone as the merc is being escorted.  The "single" button is disabled.
	L"%s doit �tre escort�(e) par vos mercenaires et ne peut quitter ce secteur tout seul.",

	//If only one conscious merc is left and is selected, and there are EPCs in the squad, the merc will be prohibited from leaving alone.
	//There are several strings depending on the gender of the merc and how many EPCs are in the squad.
	//DO NOT USE THE NEWLINE HERE AS IT IS USED FOR BOTH HELPTEXT AND SCREEN MESSAGES!
	L"%s escorte %s, il ne peut quitter ce secteur seul.", //male singular
	L"%s escorte %s, elle ne peut quitter ce secteur seule.", //female singular
	L"%s escorte plusieurs personnages, il ne peut quitter ce secteur seul.", //male plural
	L"%s escorte plusieurs personnages, elle ne peut quitter ce secteur seule.", //female plural

	//If one or more of your mercs in the selected squad aren't in range of the traversal area, then the  "move all" option is disabled,
	//and this helptext explains why.
	L"Tous vos mercenaires doivent �tre dans les environs\npour que l'escouade avance.",

	L"", //UNUSED

	//Standard helptext for single movement.  Explains what will happen (splitting the squad)
	L"Si vous cochez ce bouton, %s voyagera seul et sera\nautomatiquement assign� � une nouvelle escouade.",

	//Standard helptext for all movement.  Explains what will happen (moving the squad)
	L"Si vous cochez ce bouton, votre escouade\nquittera le secteur.",

	//This strings is used BEFORE the "exiting sector" interface is created.  If you have an EPC selected and you attempt to tactically
	//traverse the EPC while the escorting mercs aren't near enough (or dead, dying, or unconscious), this message will appear and the
	//"exiting sector" interface will not appear.  This is just like the situation where
	//This string is special, as it is not used as helptext.  Do not use the special newline character (\n) for this string.
	L"%s est escort� par vos mercenaires et ne peut quitter ce secteur seul. Vos mercenaires doivent �tre � proximit�.",
};



STR16 pRepairStrings[] = 
{
	L"Objets", 		// tell merc to repair items in inventory
	L"Site SAM", 		// tell merc to repair SAM site - SAM is an acronym for Surface to Air Missile
	L"Annuler", 		// cancel this menu
	L"Robot", 		// repair the robot
};


// NOTE: combine prestatbuildstring with statgain to get a line like the example below.
// "John has gained 3 points of marksmanship skill." 

STR16 sPreStatBuildString[] =
{
	L"perd", 			// the merc has lost a statistic
	L"gagne", 		// the merc has gained a statistic
	L"point en",	// singular
	L"points en",	// plural
	L"niveau d'",	// singular
	L"niveaux d'",	// plural
};

STR16 sStatGainStrings[] =
{
	L"sant�.",
	L"agilit�.",
	L"dext�rit�.",
	L"sagesse.",
	L"comp�tence m�dicale.",
	L"comp�tence en explosifs.",
	L"comp�tence m�canique.",
	L"tir",
	L"exp�rience.",
	L"force.",
	L"commandement.",
};


STR16 pHelicopterEtaStrings[] =
{
	L"Distance totale :  ", 			// total distance for helicopter to travel
	L" Aller :  ", 			// distance to travel to destination
	L" Retour : ", 			// distance to return from destination to airport
	L"Co�t : ", 		// total cost of trip by helicopter
	L"HPA :  ", 			// ETA is an acronym for "estimated time of arrival" 
	L"L'h�licopt�re n'a plus de carburant et doit se poser en terrain ennemi !",	// warning that the sector the helicopter is going to use for refueling is under enemy control -> 
  L"Passagers : ",
  L"S�lectionner Skyrider ou l'aire d'atterrissage ?",
  L"Skyrider",
  L"Arriv�e",
};

STR16 sMapLevelString[] =
{
	L"Niveau souterrain :", 			// what level below the ground is the player viewing in mapscreen
};

STR16 gsLoyalString[] =
{
	L"Loyaut�", 			// the loyalty rating of a town ie : Loyal 53%
};


// error message for when player is trying to give a merc a travel order while he's underground.

STR16 gsUndergroundString[] =
{
	L"Impossible de donner des ordres.", 
};

STR16 gsTimeStrings[] =
{
	L"h",				// hours abbreviation
	L"m",				// minutes abbreviation
	L"s",				// seconds abbreviation
	L"j",				// days abbreviation
};

// text for the various facilities in the sector

STR16 sFacilitiesStrings[] =
{
	L"Aucun",
	L"H�pital",
	L"Usine",
	L"Prison",
	L"Militaire",
	L"A�roport",
	L"Champ de tir",		// a field for soldiers to practise their shooting skills
};

// text for inventory pop up button

STR16 pMapPopUpInventoryText[] =
{
	L"Inventaire",
	L"Quitter",
};

// town strings

STR16 pwTownInfoStrings[] =
{
	L"Taille",					// 0 // size of the town in sectors
	L"", 						// blank line, required
	L"Contr�le", 					// how much of town is controlled
	L"Aucune", 					// none of this town
	L"Mine associ�e", 				// mine associated with this town
	L"Loyaut�",					// 5 // the loyalty level of this town
	L"Forces entra�n�es", 					// the forces in the town trained by the player
	L"",
	L"Principales installations", 				// main facilities in this town
	L"Niveau", 					// the training level of civilians in this town
	L"Formation",				// 10 // state of civilian training in town
	L"Milice", 					// the state of the trained civilians in the town
	L"Formation mobile",			// HEADROCK HAM 3.6: The stat of Mobile militia training in town
};

// Mine strings

STR16 pwMineStrings[] =
{
	L"Mine",						// 0
	L"Argent",
	L"Or",
	L"Production quotidienne",
	L"Production estim�e",
	L"Abandonn�e",				// 5
	L"Ferm�e",
	L"Epuis�e",
	L"Production",
	L"Etat",
	L"Productivit�",
	L"Type de minerai",				// 10
	L"Contr�le de la ville",
	L"Loyaut� de la ville",
//	L"Mineurs au travail",
};

// blank sector strings

STR16 pwMiscSectorStrings[] =
{
	L"Forces ennemies",
	L"Secteur",
	L"# d'objets",
	L"Inconnu",
	L"Contr�l�",
	L"Oui",
	L"Non",
};

// error strings for inventory

STR16 pMapInventoryErrorString[] =
{
	L"%s n'est pas assez pr�s.",	//Merc is in sector with item but not close enough
	L"S�lection impossible.",  //MARK CARTER
	L"%s n'est pas dans le bon secteur.",
	L"En combat, vous devez prendre les objets vous-m�me.",
	L"En combat, vous devez abandonner les objets vous-m�me.",
	L"%s n'est pas dans le bon secteur.",
	L"Pendant le combat, vous ne pouvez pas recharger avec une caisse de munitions.",
};

STR16 pMapInventoryStrings[] =
{
	L"Lieu", 			// sector these items are in
	L"Objets", 		// total number of items in sector
};


// help text for the user

STR16 pMapScreenFastHelpTextList[] =
{
	L"Cliquez sur la colonne Affectation pour assigner un mercenaire � une nouvelle t�che",
	L"Cliquez sur la colonne Destination pour ordonner � un mercenaire de se rendre dans un secteur",
	L"Utilisez la compression du temps pour que le voyage du mercenaire vous paraisse moins long.",
	L"Cliquez sur un secteur pour le s�lectionner. Cliquez � nouveau pour donner un ordre de mouvement � un mercenaire ou effectuez un clic droit pour obtenir des informations sur le secteur.",
	L"Appuyez sur 'H' pour afficher l'aide en ligne.",
	L"Test Texte",
	L"Test Texte",
	L"Test Texte",
	L"Test Texte",
	L"Cet �cran ne vous est d'aucune utilit� tant que vous n'�tes pas arriv� � Arulco. Une fois votre �quipe constitu�e, cliquez sur le bouton de compression du temps en bas � droite. Le temps vous para�tra moins long...",
};

// movement menu text

STR16 pMovementMenuStrings[] =
{
	L"D�placement", 	// title for movement box 
	L"Route", 		// done with movement menu, start plotting movement
	L"Annuler", 		// cancel this menu
	L"Autre",		// title for group of mercs not on squads nor in vehicles
};


STR16 pUpdateMercStrings[] =
{
	L"Oups :", 			// an error has occured
	L"Expiration du contrat :", 	// this pop up came up due to a merc contract ending
	L"T�ches accomplies :", // this pop up....due to more than one merc finishing assignments
	L"Mercenaires disponibles :", // this pop up ....due to more than one merc waking up and returing to work
	L"Mercenaires au repos :", // this pop up ....due to more than one merc being tired and going to sleep
	L"Contrats arrivant � �ch�ance :", 	// this pop up came up due to a merc contract ending
};

// map screen map border buttons help text

STR16 pMapScreenBorderButtonHelpText[] =
{
	L"Villes (|W)",
	L"Mines (|M)",
	L"Escouades & Ennemis (|T)",
	L"Espace a�rien (|A)",
	L"Objets (|I)",
	L"Milice & Ennemis (|Z)",
	L"Montrer la milice mobile |Restrictions", // HEADROCK HAM 4: Mobile Restrictions Button
};

STR16 pMapScreenInvenButtonHelpText[] =
{
	L"Suivant (|.)",		// next page
	L"Pr�c�dent (|,)",		// previous page
	L"Quitter l'inventaire du secteur (|E|s|c)",	// exit sector inventory
};

STR16 pMapScreenBottomFastHelp[] =
{
	L"PC Portable (|L)",
	L"Tactique (|E|c|h|a|p)",
	L"Options (|O)",
	L"Compression du temps (|+)", 	// time compress more
	L"Compression du temps (|-)", 	// time compress less
	L"Message pr�c�dent (|U|p)\nPage pr�c�dente (|P|g|U|p)", 	// previous message in scrollable list
	L"Message suivant (|D|o|w|n)\nPage suivante (|P|g|D|n)", 	// next message in the scrollable list
	L"Interrompre/Reprendre (|S|p|a|c|e)",	// start/stop time compression
};

STR16 pMapScreenBottomText[] =
{
	L"Solde actuel", 	// current balance in player bank account
};

STR16 pMercDeadString[] =
{
	L"%s est mort(e).",
};


STR16 pDayStrings[] =
{
	L"Jour",
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
	L"Help Desk",
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
	L"Stephan",
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
	L"M.I.S. Assurance",	
	L"Bobby Ray",
	L"Kingpin",
	L"John Kulba",
	L"A.I.M.",
};
*/

// next/prev strings

STR16 pTraverseStrings[] =
{
  L"Pr�c�dent",
  L"Suivant",
};

// new mail notify string 

STR16 pNewMailStrings[] =
{
 L"Nouveaux messages...",
};


// confirm player's intent to delete messages

STR16 pDeleteMailStrings[] =
{
 L"Effacer message ?",
 L"Effacer message NON CONSULTE ?",
};


// the sort header strings

STR16 pEmailHeaders[] =
{
	L"De :",
	L"Sujet :",
	L"Date :",
};

// email titlebar text

STR16 pEmailTitleText[] =
{
	L"Bo�te mail",
};


// the financial screen strings
STR16 pFinanceTitle[] =
{
	L"Bookkeeper Plus",		//the name we made up for the financial program in the game
};

STR16 pFinanceSummary[] =
{
	L"Cr�dit :", 				// credit (subtract from) to player's account
	L"D�bit :", 				// debit (add to) to player's account
	L"Revenus (hier) :",
	L"D�p�ts (hier) :",
	L"D�penses (hier) :",
	L"Solde (fin de journ�e) :",
	L"Revenus (aujourd'hui) :",
	L"D�p�ts (aujourd'hui) :",
	L"D�penses (aujourd'hui) :",
	L"Solde actuel :",
	L"Revenus (pr�vision) :",
	L"Solde (pr�vision) :", 		// projected balance for player for tommorow
};


// headers to each list in financial screen

STR16 pFinanceHeaders[] =
{
  L"Jour", 				// the day column
	L"Cr�dit", 			// the credits column (to ADD money to your account)
	L"D�bit",				// the debits column (to SUBTRACT money from your account)
	L"Transaction", // transaction type - see TransactionText below
	L"Solde", 		// balance at this point in time
	L"Page", 				// page number
	L"Jour(s)", 			// the day(s) of transactions this page displays 
};


STR16 pTransactionText[] =
{
	L"Int�r�ts cumul�s",			// interest the player has accumulated so far
	L"D�p�t anonyme",
	L"Commission", 
	L"Engag�", 				// Merc was hired
	L"Achats Bobby Ray", 		// Bobby Ray is the name of an arms dealer
	L"R�glement M.E.R.C.",
	L"Acompte m�dical pour %s", 		// medical deposit for merc
	L"Analyse IMP", 		// IMP is the acronym for International Mercenary Profiling
	L"Assurance pour %s", 
	L"R�duction d'assurance pour %s",
	L"Extension d'assurance pour %s", 				// johnny contract extended
	L"Annulation d'assurance pour %s", 
	L"Indemnisation pour %s", 		// insurance claim for merc
	L"1 jour", 				// merc's contract extended for a day
	L"1 semaine", 				// merc's contract extended for a week
	L"2 semaines", 				// ... for 2 weeks
	L"Revenus des mines", 
	L"", //String nuked
	L"Achat de fleurs",
	L"Remboursement m�dical pour %s",
	L"Remb. m�dical partiel pour %s",
	L"Pas de remb. m�dical pour %s",
	L"Paiement � %s",		// %s is the name of the npc being paid
	L"Transfert de fonds pour %s", 			// transfer funds to a merc
	L"Transfert de fonds de %s", 		// transfer funds from a merc
	L"Co�t milice de %s", // initial cost to equip a town's militia
	L"Achats � %s.",	//is used for the Shop keeper interface.  The dealers name will be appended to the en d of the string.
	L"Montant d�pos� par %s.",
	L"Materiel vendu � la population",
	L"Infrastucture utilis�e", // HEADROCK HAM 3.6
	L"Entretien de la milice", // HEADROCK HAM 3.6
};

STR16 pTransactionAlternateText[] =
{
	L"Assurance pour", 				// insurance for a merc
	L"Ext. contrat de %s (1 jour).", 				// entend mercs contract by a day
	L"Ext. contrat de %s (1 semaine).",
	L"Ext. contrat de %s (2 semaines).",
};

// helicopter pilot payment 

STR16 pSkyriderText[] =
{
	L"Skyrider a re�u %d $", 			// skyrider was paid an amount of money
	L"Skyrider attend toujours ses %d $", 		// skyrider is still owed an amount of money
	L"Skyrider a fait le plein",	// skyrider has finished refueling
	L"",//unused
	L"",//unused
	L"Skyrider est pr�t � red�coller.", // Skyrider was grounded but has been freed
	L"Skyrider n'a pas de passagers. Si vous voulez envoyer des mercenaires dans ce secteur, n'oubliez pas de les assigner � l'h�licopt�re.",
};


// strings for different levels of merc morale

STR16 pMoralStrings[] =
{
	L"Superbe", 
	L"Bon",
	L"Stable",
	L"Bas",
	L"Paniqu�",
	L"Mauvais",
};

// Mercs equipment has now arrived and is now available in Omerta or Drassen.

STR16 pLeftEquipmentString[] =
{ 
	L"L'�quipement de %s est maintenant disponible � Omerta (A9).", 
	L"L'�quipement de %s est maintenant disponible � Drassen (B13).",
};

// Status that appears on the Map Screen

STR16 pMapScreenStatusStrings[] =
{
	L"Sant�",
	L"Energie",
	L"Moral",
	L"Etat",	// the condition of the current vehicle (its "Sant�")
	L"Carburant",	// the fuel level of the current vehicle (its "energy")
};


STR16 pMapScreenPrevNextCharButtonHelpText[] =
{
	L"Mercenaire pr�c�dent (|G|a|u|c|h|e)", 			// previous merc in the list
	L"Mercenaire suivant (|D|r|o|i|t|e)", 				// next merc in the list
};


STR16 pEtaString[] =
{
	L"HPA :", 				// eta is an acronym for Estimated Time of Arrival
};

STR16 pTrashItemText[] =
{
	L"Vous ne le reverrez jamais. Vous �tes s�r de vous ?", 	// do you want to continue and lose the item forever
	L"Cet objet a l'air VRAIMENT important. Vous �tes bien s�r (mais alors BIEN SUR) de vouloir l'abandonner ?", // does the user REALLY want to trash this item
};


STR16 pMapErrorString[] = 
{
	L"L'escouade ne peut se d�placer si l'un de ses membres se repose.",

//1-5
	L"D�placez d'abord votre escouade.",
	L"Des ordres de mouvement ? C'est un secteur hostile !",
	L"Les mercenaires doivent d'abord �tre assign�s � une escouade ou un vehicule.",
	L"Vous n'avez plus aucun membre dans votre escouade.", 		// you have non members, can't do anything 
	L"Le mercenaire ne peut ob�ir.",			 		// merc can't comply with your order
//6-10
	L"doit �tre escort�. Mettez-le dans une escouade.", // merc can't move unescorted .. for a male
	L"doit �tre escort�e. Mettez-la dans une escouade.", // for a female
	L"Ce mercenaire n'est pas encore arriv� !",
	L"Il faudrait d'abord revoir les termes du contrat...",
	L"",
//11-15
	L"Des ordres de mouvement ? Vous �tes en plein combat !",
	L"Vous �tes tomb� dans une embuscade de chats sauvages dans le secteur %s !",
	L"Vous venez d'entrer dans le repaire des chats sauvages (secteur %s) !", 
	L"", 
	L"Le site SAM en %s est sous contr�le ennemi.",
//16-20
	L"La mine en %s est sous contr�le ennemi. Votre revenu journalier est r�duit � %s.",
	L"L'ennemi vient de prendre le contr�le du secteur %s.",
	L"L'un au moins de vos mercenaires ne peut effectuer cette t�che.",
	L"%s ne peut rejoindre %s (plein).",
	L"%s ne peut rejoindre %s (�loignement).",
//21-25
	L"La mine en %s a �t� reprise par les forces de Deidranna !",
	L"Les forces de Deidranna viennent d'envahir le site SAM en %s",
	L"Les forces de Deidranna viennent d'envahir %s",
	L"Les forces de Deidranna ont �t� aper�ues en %s.",
	L"Les forces de Deidranna viennent de prendre %s.",
//26-30
	L"L'un au moins de vos mercenaires n'est pas fatigu�.",
	L"L'un au moins de vos mercenaires ne peut �tre r�veill�.",
	L"La milice n'appara�t sur l'�cran qu'une fois son entra�nement achev�.",
	L"%s ne peut recevoir d'ordre de mouvement pour le moment.",
	L"Les miliciens qui ne se trouvent pas dans les limites d'une ville ne peuvent �tre d�plac�s.",
//31-35
	L"Vous ne pouvez pas entra�ner de milice en %s.",
	L"Un v�hicule ne peut se d�placer s'il est vide !",
	L"L'�tat de sant� de %s ne lui permet pas de voyager !",
	L"Vous devez d'abord quitter le mus�e !",
	L"%s est mort(e) !",
//36-40
	L"%s ne peut passer � %s (en mouvement)",
	L"%s ne peut pas p�n�trer dans le v�hicule de cette fa�on",
	L"%s ne peut rejoindre %s",
	L"Vous devez d'abord engager des mercenaires !",
	L"Ce v�hicule ne peut circuler que sur les routes !",
//41-45
	L"Vous ne pouvez r�affecter des mercenaires qui sont en d�placement",
	L"Plus d'essence !",
	L"%s est trop fatigu�(e) pour entreprendre ce voyage.",
	L"Personne n'est capable de conduire ce v�hicule.",
	L"L'un au moins des membres de cette escouade ne peut se d�placer.",
//46-50
	L"L'un au moins des AUTRES mercenaires ne peut se d�placer.",
	L"Le v�hicule est trop endommag� !",
	L"Deux mercenaires au plus peuvent �tre assign�s � l'entra�nement de la milice dans chaque secteur.",
	L"Le robot ne peut se d�placer sans son contr�leur. Mettez-les ensemble dans la m�me escouade.",
};


// help text used during strategic route plotting
STR16 pMapPlotStrings[] =
{
	L"Cliquez � nouveau sur votre destination pour la confirmer ou cliquez sur d'autres secteurs pour d�finir de nouvelles �tapes.",
	L"Route confirm�e.",
	L"Destination inchang�e.",
	L"Route annul�e.",
	L"Route raccourcie.",
};


// help text used when moving the merc arrival sector
STR16 pBullseyeStrings[] =
{
	L"Cliquez sur la nouvelle destination de vos mercenaires.",
	L"OK. Les mercenaires arriveront en %s",
	L"Les mercenaires ne peuvent �tre d�ploy�s ici, l'espace a�rien n'est pas s�curis� !",
	L"Annul�. Secteur d'arriv�e inchang�.",
	L"L'espace a�rien en %s n'est plus s�r ! Le secteur d'arriv�e est maintenant %s.",
};


// help text for mouse regions

STR16 pMiscMapScreenMouseRegionHelpText[] =
{
	L"Inventaire (|E|n|t|r|�|e)",
	L"Lancer objet",
	L"Quitter Inventaire (|E|n|t|r|�|e)",
};



// male version of where equipment is left
STR16 pMercHeLeaveString[] =
{
	L"%s doit-il abandonner son �quipement sur place (%s) ou � Drassen (B13) avant de quitter Arulco ?",
	L"%s doit-il abandonner son �quipement sur place (%s) ou � Omerta (A9) avant de quitter Arulco ?",
	L"est sur le point de partir et laissera son �quipement � Omerta (A9).",
	L"est sur le point de partir et laissera son �quipement � Drassen (B13).",
	L"%s est sur le point de partir et laissera son �quipement en %s.",
};


// female version
STR16 pMercSheLeaveString[] =
{
	L"%s doit-elle abandonner son �quipement sur place (%s) ou � Drassen (B13) avant de quitter Arulco ?",
	L"%s doit-elle abandonner son �quipement sur place (%s) ou � Omerta (A9) avant de quitter Arulco ?",
	L"est sur le point de partir et laissera son �quipement � Omerta (A9).",
	L"est sur le point de partir et laissera son �quipement � Drassen (B13).",
	L"%s est sur le point de partir et laissera son �quipement en %s.",
};


STR16 pMercContractOverStrings[] =
{
	L"a rempli son contrat, il est rentr� chez lui.", 		// merc's contract is over and has departed
	L"a rempli son contrat, elle est rentr�e chez elle.", 		// merc's contract is over and has departed
	L"est parti, son contrat ayant �t� annul�.", 		// merc's contract has been terminated
	L"est partie, son contrat ayant �t� annul�.",		// merc's contract has been terminated
	L"Vous devez trop d'argent � la M.E.R.C., %s quitte Arulco.", // Your M.E.R.C. account is invalid so merc left
};

// Text used on IMP Web Pages

// WDS: Allow flexible numbers of IMPs of each sex
//    note: I only updated the English text to remove "three" below
STR16 pImpPopUpStrings[] =
{
	L"Code Incorrect",
	L"Vous allez �tablir un nouveau profil. Etes-vous s�r de vouloir recommencer ?",
	L"Veuillez entrer votre nom et votre sexe.",
	L"Vous n'avez pas les moyens de vous offrir une analyse de profil.",
	L"Option inaccessible pour le moment.",
	L"Pour que cette analyse soit efficace, il doit vous rester au moins une place dans votre escouade.",
	L"Profil d�j� �tabli.",
	L"Impossible de charger le profil.",
	L"Vous avez d�j� atteint le nombre maximum d'IMP.",
	L"Vous avez d�j� trois IMP du m�me sexe dans l'�quipe.",
	L"Vous n'avez pas les moyens.",
	L"Le nouvel IMP a rejoint votre �quipe.",
};


// button labels used on the IMP site

STR16 pImpButtonText[] =
{
	L"Nous", 			// about the IMP site
	L"COMMENCER", 			// begin profiling
	L"Personnalit�", 		// personality section
	L"Caract�ristiques", 		// personal stats/attributes section
	L"Apparence", 			// changed from portrait
	L"Voix %d", 			// the voice selection
	L"OK", 			// done profiling
	L"Recommencer", 		// start over profiling
	L"Oui, la r�ponse en surbrillance me convient.", 
	L"Oui", 
	L"Non",
	L"Termin�", 			// finished answering questions
	L"Pr�c.", 			// previous question..abbreviated form
	L"Suiv.", 			// next question
	L"OUI, JE SUIS SUR.", 		// oui, I am certain 
	L"NON, JE VEUX RECOMMENCER.", // non, I want to start over the profiling process
	L"OUI",
	L"NON",
	L"Retour", 			// back one page
	L"Annuler", 			// cancel selection
	L"Oui, je suis s�r.",
	L"Non, je ne suis pas s�r.",
	L"Registre", 			// the IMP site registry..when name and gender is selected
	L"Analyse", 			// analyzing your profile results
	L"OK",
	L"Caract�re", // Change from "Voice"
};

STR16 pExtraIMPStrings[] =
{
	// These texts have been also slightly changed
	L"Vos traits de caract�res �tant choisis, il est temps de choisir vos comp�tences.",
	L"Pour compl�ter le processus, choisissez vos attributs.",
	L"Pour commencer votre profil r�el, choisissez un portrait, une voix et vos couleurs",
	L"Maintenant que vous avez compl�t� votre apparence, procc�dons � l'analyse de votre personnage.",
};

STR16 pFilesTitle[] =
{
  L"Fichiers",
};

STR16 pFilesSenderList[] =
{
L"Rapport Arulco", 		// the recon report sent to the player. Recon is an abbreviation for reconissance
	L"Interception #1", 		// first intercept file .. Intercept is the title of the organization sending the file...similar in function to INTERPOL/CIA/KGB..refer to fist record in files.txt for the translated title
	L"Interception #2",	   // second intercept file
	L"Interception #3",			 // third intercept file
	L"Interception #4", // fourth intercept file
	L"Interception #5", // fifth intercept file
	L"Interception #6", // sixth intercept file
};

// Text having to do with the History Log

STR16 pHistoryTitle[] =
{
	L"Historique",
};

STR16 pHistoryHeaders[] =
{
	L"Jour", 			// the day the history event occurred
	L"Page", 			// the current page in the history report we are in
	L"Jour", 			// the days the history report occurs over
	L"Lieu", 			// location (in sector) the event occurred
	L"Ev�nement", 			// the event label
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
	L"%s engag�(e) sur le site de l'A.I.M.", 										// merc was hired from the aim site
	L"%s engag�(e) sur le site M.E.R.C.", 									// merc was hired from the aim site
	L"%s meurt.", 															// merc was killed
	L"Versements M.E.R.C.",								// paid outstanding bills at MERC
	L"Ordre de mission d'Enrico Chivaldori accept�",	
	//6-10
	L"Profil IMP",
	L"Souscription d'un contrat d'assurance pour %s.", 				// insurance contract purchased
	L"Annulation du contrat d'assurance de %s.", 				// insurance contract canceled
	L"Indemnit� pour %s.", 							// insurance claim payout for merc
	L"Extension du contrat de %s (1 jour).", 						// Extented "mercs name"'s for a day
	//11-15
	L"Extension du contrat de %s (1 semaine).", 					// Extented "mercs name"'s for a week
	L"Extension du contrat de %s (2 semaines).", 					// Extented "mercs name"'s 2 weeks
	L"%s a �t� renvoy�(e).", 													// "merc's name" was dismissed.
	L"%s a d�missionn�.", 																		// "merc's name" quit.
	L"qu�te commenc�e.", 															// a particular quest started
	//16-20
	L"qu�te achev�e.",
	L"Entretien avec le chef des mineurs de %s",									// talked to head miner of town
	L"Lib�ration de %s",
	L"Activation du mode triche",
	L"Le ravitaillement devrait arriver demain � Omerta",
	//21-25
	L"%s a quitt� l'escouade pour �pouser Daryl Hick",
	L"Expiration du contrat de %s.",
	L"Recrutement de %s.",
	L"Plainte d'Enrico pour manque de r�sultats",
	L"Victoire",
	//26-30
	L"La mine de %s commence � s'�puiser",
	L"La mine de %s est �puis�e",
	L"La mine de %s a �t� ferm�e",
	L"La mine de %s a �t� r�ouverte",
	L"Une prison du nom de Tixa a �t� d�couverte.",
	//31-35
	L"Rumeurs sur une usine d'armes secr�tes : Orta.",
	L"Les chercheurs d'Orta vous donnent des fusils � roquettes.",
	L"Deidranna fait des exp�riences sur les cadavres.",
	L"Frank parle de combats organis�s � San Mona.",
	L"Un t�moin pense avoir aper�u quelque chose dans les mines.",
	//36-40
	L"Rencontre avec Devin - vend des explosifs.",
	L"Rencontre avec Mike, le fameux ex-mercenaire de l'AIM !",
	L"Rencontre avec Tony - vend des armes.",
	L"Fusil � roquettes r�cup�r� aupr�s du Sergent Krott.",
	L"Acte de propri�t� du magasin d'Angel donn� � Kyle.",
	//41-45
	L"Madlab propose de construire un robot.",
	L"Gabby fait des d�coctions rendant invisible aux cr�atures.",
	L"Keith est hors-jeu.",
	L"Howard fournit du cyanure � la Reine Deidranna.",
	L"Rencontre avec Keith - vendeur � Cambria.",
	//46-50
	L"Rencontre avec Howard - pharmacien � Balime",
	L"Rencontre avec Perko - r�parateur en tous genres.",
	L"Rencontre avec Sam de Balime - vendeur de mat�riel.",
	L"Franz vend du mat�riel �lectronique.",
	L"Arnold tient un magasin de r�parations � Grumm.",
	//51-55
	L"Fredo r�pare le mat�riel �lectronique � Grumm.",
	L"Don provenant d'un homme influent de Balime.",
	L"Rencontre avec Jake, vendeur de pi�ces d�tach�es.",
	L"Cl� �lectronique re�ue.",
	L"Corruption de Walter pour ouvrir l'acc�s aux sous-sols.",
	//56-60
	L"Dave refait gratuitement le plein s'il a du carburant.",
	L"Pot-de-vin donn� � Pablo.",
	L"Kingpin cache un tr�sor dans la mine de San Mona.",
	L"Victoire de %s dans l'Extreme Fighting",
	L"D�faite de %s dans l'Extreme Fighting",
	//61-65
	L"Disqualification de %s dans l'Extreme Fighting",
	L"Importante somme d�couverte dans la mine abandonn�e.",
	L"Rencontre avec un tueur engag� par Kingpin.",
	L"Perte du secteur",				//ENEMY_INVASION_CODE
	L"Secteur d�fendu",
	//66-70
	L"D�faite",							//ENEMY_ENCOUNTER_CODE
	L"Embuscade",						//ENEMY_AMBUSH_CODE
	L"Embuscade ennemie d�jou�e",
	L"Echec de l'attaque",			//ENTERING_ENEMY_SECTOR_CODE
	L"R�ussite de l'attaque !",
	//71-75
	L"Attaque de cr�atures",			//CREATURE_ATTACK_CODE
	L"Ambuscade de chats sauvages",			//BLOODCAT_AMBUSH_CODE
	L"Elimination des chats sauvages",
	L"%s a �t� tu�(e)",
	L"T�te de terroriste donn�e � Carmen",
	L"Reste Slay",
	L"%s a �t� tu�(e)",
};

STR16 pHistoryLocations[] =
{
	L"N/A",						// N/A is an acronym for Not Applicable
};

// icon text strings that appear on the laptop

STR16 pLaptopIcons[] =
{
	L"E-mail",
	L"Internet",
	L"Finances",
	L"Personnel",
	L"Historique",
	L"Fichiers",
	L"Eteindre",
	L"sir-FER 4.0",			// our play on the company name (Sirtech) and web surFER
};

// bookmarks for different websites
// IMPORTANT make sure you move down the Cancel string as bookmarks are being added

STR16 pBookMarkStrings[] =
{
	L"A.I.M.",
	L"Bobby Ray",
	L"I.M.P",
	L"M.E.R.C.",
	L"Morgue",
	L"Fleuriste",
	L"Assurance",
	L"Annuler",
};

STR16 pBookmarkTitle[] =
{
	L"Favoris",
	L"Faites un clic droit pour acc�der plus tard � ce menu.",
};

// When loading or download a web page

STR16 pDownloadString[] =
{
	L"T�l�chargement",
	L"Chargement",
};

//This is the text used on the bank machines, here called ATMs for Automatic Teller Machine

STR16 gsAtmSideButtonText[] =
{
	L"OK",
	L"Prendre", 			// take money from merc
	L"Donner", 			// give money to merc
	L"Annuler", 			// cancel transaction
	L"Effacer", 			// clear amount being displayed on the screen
};

STR16 gsAtmStartButtonText[] =
{
	L"Transf�rer $", 		// transfer money to merc -- short form
	L"Stats", 			// view stats of the merc
	L"Inventaire", 			// view the inventory of the merc
	L"T�che",
};

STR16 sATMText[ ]=
{
	L"Transf�rer les fonds ?", 		// transfer funds to merc?
	L"Ok ?", 			// are we certain?
	L"Entrer montant", 		// enter the amount you want to transfer to merc
	L"Choix du type", 		// select the type of transfer to merc
	L"Fonds insuffisants", 	// not enough money to transfer to merc
	L"Le montant doit �tre un multiple de 10 $", // transfer amount must be a multiple of $10
};

// Web error messages. Please use foreign language equivilant for these messages. 
// DNS is the acronym for Domain Name Server
// URL is the acronym for Uniform Resource Locator

STR16 pErrorStrings[] =
{
	L"Erreur",
	L"Le serveur ne trouve pas l'entr�e DNS.",	
	L"V�rifiez l'adresse URL et essayez � nouveau.",
	L"OK",
	L"Connexion � l'h�te.",
};


STR16 pPersonnelString[] =
{
	L"Mercenaires :", 			// mercs we have
};


STR16 pWebTitle[ ]=
{
	L"sir-FER 4.0",		// our name for the version of the browser, play on company name
};


// The titles for the web program title bar, for each page loaded

STR16 pWebPagesTitles[] =
{
	L"A.I.M.",
	L"Membres A.I.M.",
	L"Galerie A.I.M.",		// a mug shot is another name for a portrait
	L"Tri A.I.M.",
	L"A.I.M.",
	L"Anciens A.I.M.",
	L"R�glement A.I.M.",
	L"Historique A.I.M.",
	L"Liens A.I.M.",
	L"M.E.R.C.",
	L"Comptes M.E.R.C.",
	L"Enregistrement M.E.R.C.",
	L"Index M.E.R.C.",
	L"Bobby Ray",
	L"Bobby Ray - Armes",
	L"Bobby Ray - Munitions",
	L"Bobby Ray - Protections",
	L"Bobby Ray - Divers",							//misc is an abbreviation for miscellaneous				
	L"Bobby Ray - Occasions",
	L"Bobby Ray - Commande",
	L"I.M.P.",
	L"I.M.P.",
	L"Service des Fleuristes Associ�s",
	L"Service des Fleuristes Associ�s - Exposition",
	L"Service des Fleuristes Associ�s - Bon de commande",
	L"Service des Fleuristes Associ�s - Cartes",
	L"Malleus, Incus & Stapes Courtiers",
	L"Information",
	L"Contrat",
	L"Commentaires",
	L"Morgue McGillicutty",
	L"",
	L"URL introuvable.",
	L"Bobby Ray - Derni�res commandes",
	L"",
	L"",
};

STR16 pShowBookmarkString[] =
{
	L"Sir-Help",
	L"Cliquez � nouveau pour acc�der aux Favoris.",
};

STR16 pLaptopTitles[] =
{
	L"Bo�te mail",
	L"Fichiers",
	L"Personnel",
	L"Bookkeeper Plus",
	L"Historique",
};

STR16 pPersonnelDepartedStateStrings[] =
{
	//reasons why a merc has left.
	L"Mort en mission",
	L"Parti(e)",
	L"Autre",
	L"Mariage",
	L"Contrat termin�",
	L"Quitter",
};
// personnel strings appearing in the Personnel Manager on the laptop

STR16 pPersonelTeamStrings[] =
{
	L"Equipe actuelle",
	L"D�parts",
	L"Co�t quotidien :",
	L"Co�t maximum :",
	L"Co�t minimum :",
	L"Morts en mission :",
	L"D�mission�s :",
	L"Autres :",
};


STR16 pPersonnelCurrentTeamStatsStrings[] =
{
	L"Minimum",
	L"Moyenne",
	L"Maximum",
};


STR16 pPersonnelTeamStatsStrings[] =
{
	L"SAN",
	L"AGI",
	L"DEX",
	L"FOR",
	L"COM",
	L"SAG",
	L"NIV",
	L"TIR",
	L"TECH",
	L"EXPL",
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
	L"Contrat",
};

// text that appears on the update panel buttons

STR16 pUpdatePanelButtons[] =
{
	L"Continuer",
	L"Stop",
};

// Text which appears when everyone on your team is incapacitated and incapable of battle

CHAR16 LargeTacticalStr[][ LARGE_STRING_LENGTH ] =
{
	L"Vous avez �t� vaincu dans ce secteur !",
	L"L'ennemi, sans aucune compassion, ne fait pas de quartier !",
	L"Vos mercenaires inconscients ont �t� captur�s !",
	L"Vos mercenaires ont �t� faits prisonniers.",
};


//Insurance Contract.c
//The text on the buttons at the bottom of the screen.

STR16			InsContractText[] = 
{ 
	L"Pr�c�dent",
	L"Suivant",
	L"Accepter",
	L"Annuler",
};



//Insurance Info
// Text on the buttons on the bottom of the screen

STR16		InsInfoText[] = 
{ 
	L"Pr�c�dent", 
	L"Suivant",
};



//For use at the M.E.R.C. web site. Text relating to the player's account with MERC

STR16			MercAccountText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"Autoriser",
	L"Home",
	L"Compte # :",
	L"Mercenaire",
	L"Jours",
	L"Taux",	//5
	L"Montant",
	L"Total :",
	L"D�sirez-vous autoriser le versement de %s ?",		//the %s is a string that contains the dollar amount ( ex. "$150" )
};

// Merc Account Page buttons
STR16			MercAccountPageText[] = 
{
	// Text on the buttons on the bottom of the screen
	L"Previous",
  L"Next",
};


//For use at the M.E.R.C. web site. Text relating a MERC mercenary


STR16			MercInfo[] =
{
	L"Sant�",
	L"Agilit�",
	L"Dext�rit�",
	L"Force",
	L"Commandement",
	L"Sagesse",
	L"Niveau",
	L"Tir",
	L"M�canique",
	L"Explosifs",
	L"M�decine",

	L"Pr�c�dent",
	L"Engager",
	L"Suivant",
	L"Infos compl�mentaires",
	L"Home",
	L"Engag�",
	L"Salaire :",
	L"Par jour",
	L"D�c�d�(e)",

	L"Vous ne pouvez engager plus de 18 mercenaires.",
	L"Indisponible",											
};



// For use at the M.E.R.C. web site. Text relating to opening an account with MERC

STR16			MercNoAccountText[] =
{
	//Text on the buttons at the bottom of the screen
	L"Ouvrir compte",
	L"Annuler",
	L"Vous ne poss�dez pas de compte. D�sirez-vous en ouvrir un ?",
};



// For use at the M.E.R.C. web site. MERC Homepage

STR16			MercHomePageText[] =
{
	//Description of various parts on the MERC page
	L"Speck T. Kline, fondateur",
	L"Cliquez ici pour ouvrir un compte",
	L"Cliquez ici pour voir votre compte",
	L"Cliquez ici pour consulter les fichiers",
	// The version number on the video conferencing system that pops up when Speck is talking
	L"Speck Com v3.2",
	L"Le transfert a �chou�. Aucun fonds disponible.",
};

// For use at MiGillicutty's Web Page.

STR16			sFuneralString[] =
{
	L"Morgue McGillicutty : A votre �coute depuis 1983.",
	L"Murray \"Pops\" McGillicutty, notre directeur bien aim�, est un ancien mercenaire de l'AIM. Sa sp�cialit� : la mort des autres.",
	L"Pops l'a c�toy�e pendant si longtemps qu'il est un expert de la mort, � tous points de vue.",
	L"La morgue McGillicutty vous offre un large �ventail de services fun�raires, depuis une �coute compr�hensive jusqu'� la reconstitution des corps... dispers�s.",
	L"Laissez donc la morgue McGillicutty vous aider, pour que votre compagnon repose enfin en paix.",

	// Text for the various links available at the bottom of the page
	L"ENVOYER FLEURS",
	L"CERCUEILS & URNES",
	L"CREMATION",
	L"SERVICES FUNERAIRES",
	L"NOTRE ETIQUETTE",

	// The text that comes up when you click on any of the links ( except for send flowers ).
	L"Le concepteur de ce site s'est malheureusement absent� pour cause de d�c�s familial. Il reviendra d�s que possible pour rendre ce service encore plus efficace.",
	L"Veuillez croire en nos sentiments les plus respectueux dans cette p�riode qui doit vous �tre douloureuse.",
};

// Text for the florist Home page

STR16			sFloristText[] = 
{
	//Text on the button on the bottom of the page

	L"Vitrine",

	//Address of United Florist

	L"\"Nous livrons partout dans le monde\"",
	L"0-800-SENTMOI",
	L"333 NoseGay Dr, Seedy City, CA USA 90210",
	L"http://www.sentmoi.com",

	// detail of the florist page

	L"Rapides et efficaces !",
	L"Livraison en 24 heures partout dans le monde (ou presque).",
	L"Les prix les plus bas (ou presque) !",
	L"Si vous trouvez moins cher, nous vous livrons gratuitement une douzaine de roses !",
	L"Flore, Faune & Fleurs depuis 1981.",
	L"Nos bombardiers (recycl�s) vous livrent votre bouquet dans un rayon de 20 km (ou presque). N'importe quand - N'importe o� !",
	L"Nous r�pondons � tous vos besoins (ou presque) !",
	L"Bruce, notre expert fleuriste-conseil, trouvera pour vous les plus belles fleurs et vous composera le plus beau bouquet que vous ayez vu !",
	L"Et n'oubliez pas que si nous ne l'avons pas, nous pouvons le faire pousser - et vite !",
};



//Florist OrderForm

STR16			sOrderFormText[] = 
{
	//Text on the buttons

	L"Retour",
	L"Envoi",
	L"Annuler",
	L"Galerie",

	L"Nom du bouquet :",
	L"Prix :",			//5
	L"R�f�rence :",
	L"Date de livraison",
	L"jour suivant",
	L"d�s que possible",
	L"Lieu de livraison",			//10
	L"Autres services",
	L"Pot Pourri (10$)",
	L"Roses Noires (20$)",
	L"Nature Morte (10$)",
	L"G�teau (si dispo)(10$)",		//15
	L"Carte personnelle :",
	L"Veuillez �crire votre message en 75 caract�res maximum...",
	L"...ou utiliser l'une de nos",

	L"CARTES STANDARDS",	
	L"Informations",//20

	//The text that goes beside the area where the user can enter their name

	L"Nom :",
};




//Florist Gallery.c

STR16		sFloristGalleryText[] =
{
	//text on the buttons

	L"Pr�c.",	//abbreviation for previous
	L"Suiv.",	//abbreviation for next

	L"Cliquez sur le bouquet que vous d�sirez commander.",
	L"Note : les bouquets \"pot pourri\" et \"nature morte\" vous seront factur�s 10$ suppl�mentaires.",

	//text on the button

	L"Home",
};

//Florist Cards

STR16			sFloristCards[] =
{
	L"Faites votre choix",
	L"Retour",
};



// Text for Bobby Ray's Mail Order Site

STR16			BobbyROrderFormText[] = 
{
	L"Commande",				//Title of the page
	L"Qt�",					// The number of items ordered
	L"Poids (%s)",			// The weight of the item
	L"Description",				// The name of the item
	L"Prix unitaire",				// the item's weight
	L"Total",				//5	// The total price of all of items of the same type
	L"Sous-total",				// The sub total of all the item totals added
	L"Transport",		// S&H is an acronym for Shipping and Handling 
	L"Total",			// The grand total of all item totals + the shipping and handling
	L"Lieu de livraison",				
	L"Type d'envoi",			//10	// See below
	L"Co�t (par %s.)",			// The cost to ship the items
	L"Du jour au lendemain",			// Gets deliverd the next day
	L"2 c'est mieux qu'un",			// Gets delivered in 2 days
	L"Jamais 2 sans 3",			// Gets delivered in 3 days
	L"Effacer commande",//15			// Clears the order page
	L"Confirmer commande",			// Accept the order
	L"Retour",				// text on the button that returns to the previous page
	L"Home",				// Text on the button that returns to the home page
	L"* Mat�riel d'occasion",		// Disclaimer stating that the item is used
	L"Vous n'avez pas les moyens.",		//20	// A popup message that to warn of not enough money
	L"<AUCUNE>",				// Gets displayed when there is non valid city selected
	L"Etes-vous s�r de vouloir envoyer cette commande � %s ?",		// A popup that asks if the city selected is the correct one
	L"Poids total **",			// Displays the weight of the package
	L"** Pds Min.",				// Disclaimer states that there is a minimum weight for the package
	L"Envois",	
};

STR16			BobbyRFilter[] =
{
	// Guns
	L"Arm.poing",
	L"Pist. M.",
	L"Mitraill.",
	L"Fusil",
	L"Sniper",
	L"F.d'assa.",
	L"M. l�g�re",
	L"F.� pompe",
	L"Arm.Lourd",

	// Ammo
	L"Arm.poing",
	L"Pist. M.",
	L"Mitraill.",
	L"Fusil",
	L"Sniper",
	L"F.d'assa.",
	L"M. l�g�re",
	L"F.� pompe",

	// Used
	L"Armes",
	L"Protec.",
	L"Mat. LBE",
	L"Divers",

	// Armour
	L"Casques",
	L"Vestes",
	L"Pant.",
	L"Blindage",

	// Misc
	L"Couteau",
	L"Cout de L.",
	L"M�l�e",
	L"Grenades",
	L"Explosifs",
	L"Kits Med.",
	L"Kits",
	L"Mat. Face",
	L"Mat. LBE",
	L"Divers",
};


// This text is used when on the various Bobby Ray Web site pages that sell items

STR16			BobbyRText[] = 
{
	L"Pour commander",				// Title
	// instructions on how to order
	L"Cliquez sur les objets d�sir�s. Cliquez � nouveau pour s�lectionner plusieurs exemplaires d'un m�me objet. Effectuez un clic droit pour d�s�lectionner un objet. Il ne vous reste plus qu'� passer commande.",			

	//Text on the buttons to go the various links

	L"Objets pr�c�dents",		// 
	L"Armes", 			//3
	L"Munitions",			//4
	L"Protection",			//5
	L"Divers",			//6	//misc is an abbreviation for miscellaneous
	L"Occasion",			//7
	L"Autres objets",
	L"BON DE COMMANDE",
	L"Home",			//10

	//The following 2 lines are used on the Ammunition page.  
	//They are used for help text to display how many items the player's merc has
	//that can use this type of ammo

	L"Votre �quipe poss�de",//11
	L"arme(s) qui utilise(nt) ce type de munitions", //12

	//The following lines provide information on the items

	L"Poids :",		// Weight of all the items of the same type
	L"Cal :",			// the caliber of the gun
	L"Chrg :",			// number of rounds of ammo the Magazine can hold
	L"Port�e:",			// The range of the gun
	L"D�gats:",			// Damage of the weapon	
	L"CdT :",			// Weapon's Rate Of Fire, acronym ROF
	L"Prix :",			// Cost of the item
	L"En r�serve :",			// The number of items still in the store's inventory
	L"Qt� command�e :",		// The number of items on order
	L"Endommag�",			// If the item is damaged
	L"Poids :",			// the Weight of the item
	L"Sous-total :",			// The total cost of all items on order
	L"* %% efficacit�",		// if the item is damaged, displays the percent function of the item

	//Popup that tells the player that they can only order 10 items at a time
	
	L"Pas de chance ! Vous ne pouvez commander que 10 objets � la fois. Si vous d�sirez passer une commande plus importante, il vous faudra remplir un nouveau bon de commande.",

	// A popup that tells the user that they are trying to order more items then the store has in stock

	L"Nous sommes navr�s, mais nos stocks sont vides. N'h�sitez pas � revenir plus tard !",

	//A popup that tells the user that the store is temporarily sold out

	L"Nous sommes navr�s, mais nous n'en avons plus en rayon.",

};


// Text for Bobby Ray's Home Page

STR16			BobbyRaysFrontText[] =
{
	//Details on the web site

	L"Vous cherchez des armes et du mat�riel militaire ? Vous avez frapp� � la bonne porte",
	L"Un seul credo : force de frappe !",
	L"Occasions et secondes mains",

	//Text for the various links to the sub pages

	L"Divers",
	L"ARMES",
	L"MUNITIONS",		//5
	L"PROTECTIONS",

	//Details on the web site

	L"Si nous n'en vendons pas, c'est que �a n'existe pas !",
	L"En Construction",
};



// Text for the AIM page.
// This is the text used when the user selects the way to sort the aim mercanaries on the AIM mug shot page

STR16			AimSortText[] =
{
	L"Membres A.I.M.",				// Title
	// Title for the way to sort
	L"Tri par :",					

	// sort by...

	L"Prix",											
	L"Exp�rience",
	L"Tir",
	L"M�decine",
	L"Explosifs",
	L"M�canique",

	//Text of the links to other AIM pages

	L"Afficher l'index de la galerie de portraits",
	L"Consulter le fichier individuel",
	L"Consulter la galerie des anciens de l'A.I.M.",

	// text to display how the entries will be sorted

	L"Ascendant",
	L"Descendant",
};


//Aim Policies.c
//The page in which the AIM policies and regulations are displayed

STR16		AimPolicyText[] =
{
	// The text on the buttons at the bottom of the page

	L"Pr�c�dent",
	L"Home AIM", 
	L"Index",
	L"Suivant",
	L"Je refuse",
	L"J'accepte",
};



//Aim Member.c
//The page in which the players hires AIM mercenaries

// Instructions to the user to either start video conferencing with the merc, or to go the mug shot index

STR16			AimMemberText[] =
{
	L"Cliquez pour",
	L"contacter le mercenaire.",
	L"Clic droit pour",
	L"afficher l'index.",
};					

//Aim Member.c
//The page in which the players hires AIM mercenaries

STR16			CharacterInfo[] =
{
	// The various attributes of the merc

	L"Sant�",										
	L"Agilit�",										
	L"Dext�rit�",									
	L"Force",
	L"Commandement",
	L"Sagesse",
	L"Niveau",
	L"Tir",
	L"M�canique",
	L"Explosifs",
	L"M�decine",				//10

	// the contract expenses' area

	L"Paie",							
	L"Contrat",				
	L"1 jour",					
	L"1 semaine",
	L"2 semaines",

	// text for the buttons that either go to the previous merc, 
	// start talking to the merc, or go to the next merc

	L"Pr�c�dent",
	L"Contacter",
	L"Suivant",

	L"Info. compl�mentaires",				// Title for the additional info for the merc's bio
	L"Membres actifs",		//20		// Title of the page
	L"Mat�riel optionnel :",				// Displays the optional gear cost
	L"gear",			//"gear",	//tais: Displays the optional gear cost in nsgi, this moved and can have only a small room, so just make it "gear" without extra's
	L"D�p�t M�dical",			// If the merc required a medical deposit, this is displayed
	L"Kit 1",				// Text on Starting Gear Selection Button 1 
	L"Kit 2",				// Text on Starting Gear Selection Button 2
	L"Kit 3",				// Text on Starting Gear Selection Button 3
	L"Kit 4",				// Text on Starting Gear Selection Button 4
	L"Kit 5",				// Text on Starting Gear Selection Button 5
};


//Aim Member.c
//The page in which the player's hires AIM mercenaries

//The following text is used with the video conference popup

STR16			VideoConfercingText[] =
{
	L"Contrat :",				//Title beside the cost of hiring the merc

	//Text on the buttons to select the length of time the merc can be hired

	L"1 jour",										
	L"1 semaine",
	L"2 semaines",

	//Text on the buttons to determine if you want the merc to come with the equipment 

	L"Pas d'�quipement",
	L"Acheter �quipement",

	// Text on the Buttons

	L"TRANSFERT",			// to actually hire the merc
	L"Annuler",				// go back to the previous menu
	L"ENGAGER",				// go to menu in which you can hire the merc
	L"RACCROCHER",				// stops talking with the merc
	L"OK",									
	L"MESSAGE",			// if the merc is not there, you can leave a message 

	//Text on the top of the video conference popup

	L"Conf�rence vid�o avec",		
	L"Connexion. . .",

	L"d�p�t compris"			// Displays if you are hiring the merc with the medical deposit
};



//Aim Member.c
//The page in which the player hires AIM mercenaries

// The text that pops up when you select the TRANSFER FUNDS button

STR16			AimPopUpText[] =
{
	L"TRANSFERT ACCEPTE",	// You hired the merc
	L"TRANSFERT REFUSE",		// Player doesn't have enough money, message 1
	L"FONDS INSUFFISANTS",				// Player doesn't have enough money, message 2

	// if the merc is not available, one of the following is displayed over the merc's face

	L"En mission",											
	L"Veuillez laisser un message",
	L"D�c�d�(e)",

	//If you try to hire more mercs than game can support

	L"Equipe de mercenaires d�j� au complet.",

	L"Message pr�-enregistr�",
	L"Message enregistr�",
};


//AIM Link.c

STR16			AimLinkText[] =
{
	L"Liens A.I.M.",	//The title of the AIM links page
};



//Aim History

// This page displays the history of AIM

STR16			AimHistoryText[] =
{
	L"Historique A.I.M.",					//Title

	// Text on the buttons at the bottom of the page

	L"Pr�c�dent",
	L"Home", 
	L"Anciens",
	L"Suivant",
};


//Aim Mug Shot Index

//The page in which all the AIM members' portraits are displayed in the order selected by the AIM sort page.

STR16			AimFiText[] =
{
	// displays the way in which the mercs were sorted

	L"Prix",
	L"Exp�rience",
	L"Tir",
	L"M�decine",
	L"Explosifs",
	L"M�canique",

	// The title of the page, the above text gets added at the end of this text

	L"Tri ascendant des membres de l'A.I.M. par %s",
	L"Tri descendant des membres de l'A.I.M. par %s",

	// Instructions to the players on what to do

	L"Cliquez pour",
	L"s�lectionner le mercenaire",			//10
	L"Clic droit pour",
	L"les options de tri",

	// Gets displayed on top of the merc's portrait if they are...

	L"Absent(e)",
	L"D�c�d�(e)",						//14
	L"En mission",
};



//AimArchives.
// The page that displays information about the older AIM alumni merc... mercs who are no longer with AIM

STR16			AimAlumniText[] =
{
	// Text of the buttons

	L"PAGE 1",
	L"PAGE 2",
	L"PAGE 3",

	L"Anciens",	// Title of the page

	L"OK"			// Stops displaying information on selected merc
};






//AIM Home Page

STR16			AimScreenText[] =
{
	// AIM disclaimers
	
	L"A.I.M. et le logo A.I.M. sont des marques d�pos�es dans la plupart des pays.",
	L"N'esp�rez m�me pas nous copier !",
	L"Copyright 2008-2009 A.I.M., Ltd. Tous droits r�serv�s.",

	//Text for an advertisement that gets displayed on the AIM page

	L"Service des Fleuristes Associ�s",
	L"\"Nous livrons partout dans le monde\"",				//10
	L"Faites-le dans les r�gles de l'art",
	L"... la premi�re fois",
	L"Si nous ne l'avons pas, c'est que vous n'en avez pas besoin.",
};


//Aim Home Page

STR16			AimBottomMenuText[] =
{
	//Text for the links at the bottom of all AIM pages
	L"Accueil",
	L"Membres",
	L"Anciens",
	L"R�glement",
	L"Historique",
	L"Liens",
};



//ShopKeeper Interface
// The shopkeeper interface is displayed when the merc wants to interact with 
// the various store clerks scattered through out the game.

STR16 SKI_Text[ ] = 
{
	L"MARCHANDISE EN STOCK",		//Header for the merchandise available
	L"PAGE",				//The current store inventory page being displayed
	L"COUT TOTAL",				//The total cost of the the items in the Dealer inventory area
	L"VALEUR TOTALE",			//The total value of items player wishes to sell
	L"EVALUATION",				//Button text for dealer to evaluate items the player wants to sell
	L"TRANSACTION",			//Button text which completes the deal. Makes the transaction.
	L"OK",				//Text for the button which will leave the shopkeeper interface.
	L"COUT REPARATION",			//The amount the dealer will charge to repair the merc's goods
	L"1 HEURE",			// SINGULAR! The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"%d HEURES",		// PLURAL!   The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"REPARE",		// Text appearing over an item that has just been repaired by a NPC repairman dealer
	L"Plus d'emplacements libres.",	//Message box that tells the user there is non more room to put there stuff
	L"%d MINUTES",		// The text underneath the inventory slot when an item is given to the dealer to be repaired
	L"Objet l�ch� � terre.",
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
	L"Prendre",					// Take money from the player
	L"Donner",					// Give money to the player
	L"Annuler",					// Cancel the transfer
	L"Effacer",					// Clear the money display
};


//Shopkeeper Interface
STR16	gzSkiAtmText[] = 
{	

	// Text on the bank machine panel that....
	L"Choix",			// tells the user to select either to give or take from the merc
	L"Montant",			// Enter the amount to transfer
	L"Transfert de fonds au mercenaire",		// Giving money to the merc
	L"Transfert de fonds du mercenaire",		// Taking money from the merc
	L"Fonds insuffisants",			// Not enough money to transfer
	L"Solde",				// Display the amount of money the player currently has
};


STR16	SkiMessageBoxText[] =
{
	L"Voulez-vous d�duire %s de votre compte pour combler la diff�rence ?",
	L"Pas assez d'argent. Il vous manque %s",
	L"Voulez-vous d�duire %s de votre compte pour couvrir le co�t ?",
	L"Demander au vendeur de lancer la transaction",
	L"Demander au vendeur de r�parer les objets s�lectionn�s",
	L"Terminer l'entretien",
	L"Solde actuel",
};


//OptionScreen.c

STR16	zOptionsText[] = 
{
	//button Text
	L"Sauvegarder",
	L"Charger",
	L"Quitter",
	L">>",
	L"<<",
	L"OK",

	//Text above the slider bars
	L"Effets",
	L"Dialogue",
	L"Musique",

	//Confirmation pop when the user selects..
	L"Quitter la partie et revenir au menu principal ?",

	L"Activez le mode Dialogue ou Sous-titre.",
};


//SaveLoadScreen 
STR16			zSaveLoadText[] = 
{
	L"Enregistrer",
	L"Charger partie",
	L"Annuler",
	L"Enregistrement",
	L"Chargement",

	L"Enregistrement r�ussi",
	L"ERREUR lors de la sauvegarde !",
	L"Chargement r�ussi",
	L"ERREUR lors du chargement !",

	L"La version de la sauvegarde est diff�rente de celle du jeu. D�sirez-vous continuer?",
	L"Les fichiers de sauvegarde sont peut-�tre alt�r�s. Voulez-vous les effacer?",

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	L"La version de la sauvegarde a chang�. D�sirez-vous continuer ?",
#else
	L"Tentative de chargement d'une sauvegarde de version pr�c�dente. Voulez-vous effectuer une mise � jour ?",
#endif

	//Translators, the next two strings are for the same thing.  The first one is for beta version releases and the second one
	//is used for the final version.  Please don't modify the "#ifdef JA2BETAVERSION" or the "#else" or the "#endif" as they are
	//used by the compiler and will cause program errors if modified/removed.  It's okay to translate the strings though.
#ifdef JA2BETAVERSION
	L"La version de la sauvegarde a chang�. D�sirez-vous continuer?",
#else
	L"Tentative de chargement d'une sauvegarde de version pr�c�dente. Voulez-vous effectuer une mise � jour?",
#endif

	L"Etes-vous s�r de vouloir �craser la sauvegarde #%d ?",
	L"Voulez-vous charger la sauvegarde #%d ?",


	//The first %d is a number that contains the amount of free space on the users hard drive,
	//the second is the recommended amount of free space.
	L"Votre risquez de manquer d'espace disque. Il ne vous reste que %d Mo de libre alors que le jeu n�cessite %d Mo d'espace libre.",	

	L"Enregistrement...",			//When saving a game, a message box with this string appears on the screen

	L"Quelques Armes",
	L"Toutes Armes",
	L"Style r�aliste",
	L"Style SF",

	L"Difficult�",
	L"Platinum Mode", //Placeholder English

	L"Bobby Ray",
	L"Bonne Selection",
	L"Meilleure Selection",
	L"Excellente Selection",
	L"Superbe Selection",

	L"Le nouvel inventaire (NIV) ne peut se lancer en 640x480. Changez de r�solution.",
	L"Le nouvel inventaire (NIV) ne fonctionne pas depuis le dossier \"data\" original.",
};



//MapScreen
STR16		zMarksMapScreenText[] =
{
	L"Niveau carte",
	L"Vous n'avez pas de milice : vous devez entra�ner les habitants de la ville.",
	L"Revenu quotidien",
	L"Assurance vie", 
	L"%s n'est pas fatigu�.", 
	L"%s est en mouvement et ne peut dormir.", 
	L"%s est trop fatigu� pour ob�ir.",
	L"%s conduit.",
	L"L'escouade ne peut progresser si l'un de ses membres se repose.",

	// stuff for contracts
	L"Vous pouvez payer les honoraires de ce mercenaire, mais vous ne pouvez pas vous offrir son assurance.",
	L"La prime d'assurance de %s co�te %s pour %d jour(s) suppl�mentaire(s). Voulez-vous les payer ?",
	L"Inventaire du Secteur",
	L"Le mercenaire a un d�p�t m�dical.",
	
	// other items
	L"Docteurs", // people acting a field medics and bandaging wounded mercs 
	L"Patients", // people who are being bandaged by a medic 
	L"OK", // Continue on with the game after autobandage is complete 
	L"Stop", // Stop autobandaging of patients by medics now 
	L"D�sol�. Cette option n'est pas disponible.", // informs player this option/button has been disabled in the demo 
	L"%s n'a pas de trousse � outil.",
	L"%s n'a pas de trousse de soins.",
	L"Il y a trop peu de volontaires pour l'entra�nement.",
	L"%s ne peut pas former plus de miliciens.",
	L"Le mercenaire a un contrat d�termin�.", 
	L"Ce mercenaire n'est pas assur�.",
	L"Ecran carte",		// 24
	// HEADROCK HAM 4: Prompt messages when turning on Mobile Militia Restrictions view.
	L"Vous n'avez actuellement aucune Milice Mobile. Retournez � ce mode du vue quand vous en aurez recrut�.",
	L"Cette vue montre o� votre Milice Mobile peut et ne peut pas aller. Gris = La Milice Mobile refuse d'aller ici. ROUGE = La Milice Mobile peut aller ici, mais vous avez dit de ne pas y aller. JAUNE = La Milice Mobile peut entrer dans ce secteur, mais ne peut en sortir. VERT = la Milice Mobile peut aller ici librement. Right click a Green/Yellow sector to cycle its behavior.",
};


STR16 pLandMarkInSectorString[] =
{
	L"L'escouade %d a remarqu� quelque chose dans le secteur %s",
};

// confirm the player wants to pay X dollars to build a militia force in town
STR16 pMilitiaConfirmStrings[] =
{
	L"L'entra�nement de la milice vous co�tera $", // telling player how much it will cost
	L"Etes-vous d'accord ?", // asking player if they wish to pay the amount requested
	L"Vous n'en avez pas les moyens.", // telling the player they can't afford to train this town
	L"Voulez-vous poursuivre l'entra�nement de la milice � %s (%s %d) ?", // continue training this town?
	L"Co�t $", // the cost in dollars to train militia
	L"(O/N)",   // abbreviated oui/non
	L"",	// unused
	L"L'entra�nement des milices dans %d secteurs vous co�tera %d $. %s", // cost to train sveral sectors at once
	L"Vous ne pouvez pas payer les %d $ n�cessaires � l'entra�nement.",
	L"Vous ne pouvez poursuivre l'entra�nement de la milice � %s que si cette ville est � niveau de loyaut� de %d pour-cent.",
	L"Vous ne pouvez plus entra�ner de milice � %s.",
	L"Yous ne pouvez pas payer les %d $ n�cessaires � l'entra�nement de la milice mobile.", // HEADROCK HAM 3.6: Mobile Militia
	L"Voulez-vous poursuivre l'entra�nement de la milice mobile � %s (%s %d)?", // HEADROCK HAM 3.6: Mobile Militia	
	L"L'entra�nement des milices mobiles dans %d secteurs vous co�tera %d $. %s", // HEADROCK HAM 3.6: Mobile Militia
	L"L'entra�nement de la milice mobile vous co�tera $", // HEADROCK HAM 3.6: Mobile Militia
};

//Strings used in the popup box when withdrawing, or depositing money from the $ sign at the bottom of the single merc panel
STR16	gzMoneyWithdrawMessageText[] = 
{
	L"Vous ne pouvez retirer que 20 000 $ � la fois.",
	L"Etes-vous s�r de vouloir d�poser %s sur votre compte ?",
};

STR16	gzCopyrightText[] = 
{
	L"Copyright (C) 1999 Sir-tech Canada Ltd. Tous droits r�serv�s.",
};

//option Text
STR16		zOptionsToggleText[] = 
{
	L"Dialogue",
	L"Confirmations muettes",
	L"Sous-titres",
	L"Pause des dialogues",
	L"Animation fum�e",
	L"Du sang et des tripes",
	L"Ne pas toucher � ma souris !",
	L"Ancienne m�thode de s�lection",
	L"Afficher chemin",
	L"Afficher tirs manqu�s",
	L"Confirmation temps r�el",
	L"Notifications sommeil/r�veil",
	L"Syst�me m�trique",
	L"Mouvemts mercenaires �clair�s",
	L"Figer curseur sur mercenaires",
	L"Figer curseur sur les portes",
	L"Objets en surbrillance",
	L"Afficher cimes",
	L"Affichage fil de fer",
	L"Curseur to�t",
	L"Afficher chance de toucher",
	L"Curseur raf. pour raf. lance G.",
	L"Remarques des ennemis", // Changed from "Enemies Drop all Items" - SANDRO
	L"Lancemt Grenades grand angle",
	L"Autori. d�plcmt silenci. tps r�el", // Changed from "Restrict extra Aim Levels" - SANDRO
	L"Espace pour escouade suivante",
	L"Ombres objets",
	L"Afficher port�e armes en cases",
	L"Balle Tra�ante pour tir simple",
	L"Son de pluie",
	L"Afficher corbeaux",
	L"Afficher infobulle soldat",
	L"Sauvegarde auto",
	L"Silence Skyrider !",
	//L"Faible consommation processeur",
	L"EDB (mod rajoutant info utiles)",
	L"Mode tour par tour forc�",			// add forced turn mode
	L"Afficher deviation balle",					// Screen messages showing amount and direction of shot deviation.
	L"Couleur alternative map",		// Change color scheme of Strategic Map
	L"Montrer tirs alternatifs",			// Show alternate bullet graphics (tracers)
	L"Activ� NCTH",				// use NCTH
	L"Afficher �quipments portrait",
	L"Afficher icones portraits",
	L"D�sactiver �change curseur",		            // Disable Cursor Swap		
	L"--Cheat Mode Options--",				// TOPTION_CHEAT_MODE_OPTIONS_HEADER,
	L"Forcer envois Bobby Ray",			// force all pending Bobby Ray shipments
	L"-----------------",					// TOPTION_CHEAT_MODE_OPTIONS_END
	L"--DEBUG OPTIONS--",					// an example options screen options header (pure text)
	L"Barre de progression des stats",					// Show progress towards stat increase		
	L"R�initialiser TOUTES les options du jeu",				// failsafe show/hide option to reset all options
	L"Voulez-vous vraiment r�initialiser ?",		// a do once and reset self option (button like effect)
	L"Debug Options dans les autres releases",		// allow debugging in release or mapeditor
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
	L"Activez cette option pour entendre vos mercenaires lorsqu'ils parlent.",

	//Mute Confirmation
	L"Active/d�sactive les confirmations des mercenaires.",

	//Subtitles
	L"Affichage des sous-titres � l'�cran.",

	//Key to advance speech
	L"Si les sous-titres s'affichent � l'�cran, \ncette option vous permet de prendre le temps de les lire.",

	//Toggle smoke animation
	L"D�sactivez cette option si votre machine n'est pas suffisamment puissante.",

	//Blood n Gore
	L"D�sactivez cette option si le jeu vous para�t trop violent.",

	//Never move my mouse
	L"Activez cette option pour que le curseur ne se place pas automatiquement sur les boutons qui s'affichent.",

	//Old selection method
	L"Activez cette option pour retrouver vos automatismes de la version pr�c�dente.",

	//Show movement path
	L"Activez cette option pour afficher le chemin suivi par les mercenaires. \nVous pouvez la d�sactiver et utiliser la touche |M|A|J en cours de jeu.",

	//show misses
	L"Activez cette option pour voir o� atterrissent tous vos tirs.",
	
	//Real Time Confirmation
	L"Activez cette option pour afficher une confirmation de mouvement en temps r�el.",

	//Sleep/Wake notification
	L"Activez cette option pour �tre mis au courant de l'�tat de veille de vos mercenaires.",

	//Use the metric system
	L"Activez cette option pour que le jeu utilise le syst�me m�trique.",

	//Merc Lighted movement
	L"Activez cette option pour �clairer les environs des mercenaires. (|G) \nD�sactivez-le si votre machine n'est pas suffisamment puissante.",

	//Smart cursor
	L"Activez cette option pour que le curseur se positionne directement sur un mercenaire quand il est � proximit�.",

	//snap cursor to the door
	L"Activez cette option pour que le curseur se positionne directement sur une porte quand il est � proximit�.",

	//glow items 
	L"Activez cette option pour mettre les objets en �vidence. (|I)",

	//toggle tree tops
	L"Activez cette option pour afficher le cime des arbres. (|T)",

	//toggle wireframe
	L"Activez cette option pour afficher les murs en fil de fer. (|W)",

	L"Activez cette option pour afficher le curseur to�t. (|Home)",

	// Options for 1.13
	L"Si activ�, affiche une barre de probabilit�s de succ�s sur le curseur.",
	L"Si activ�, les rafales de lance grenades ont un curseur de rafale.",
	L"Si activ�, les ennemis feront de temps en temps des remarques sur certaines actions.", // Changed from Enemies Drop All Items - SANDRO
	L"Si activ�, les grenades lances grenades ont un grand angle (|Q).",
	L"Si activ�, le mode tour par tour ne sera pas actif si vous n'�tes pas vu ou entendu par l'ennemie � moins d'appuyer sur |C|t|r+|X.", // Changed from Restrict Extra Aim Levels - SANDRO
	L"Si activ�, |E|s|p|a|c|e selectionne l'escouade suivante.",
	L"Si activ�, les ombres d'objets sont affich�es.",
	L"Si activ�, la port�e des armes est affich�e en nombres de cases.",
	L"Si activ�, les effets de tra�antes sont affich�s pour les tir simples.",
	L"Si activ�, le son de pluie est audible quand il pleut.",
	L"Si activ�, les corbeaux sont pr�sents dans le jeu.",
	L"Si activ�, une fen�tre info-bulle appara�t lorsque vous appuyez sur |A|l|t et que le curseur est au dessus d'un ennemi.",
	L"Si activ�, le jeu est sauvegard� � chaque nouveau tour du joueur.",
	L"Si activ�, les confirmations insistantes de Skyrider cessent.",
	//L"Si activ�, le jeu restreint l'utilisation du processeur.",
	L"Si activ�, l'EDB sera affich� pour les armes et objets.",
	L"Si cette option est activ�e et que des ennemis sont pr�sents, \nle mode tour par tour est actif tant qu'il reste \ndes ennemis dans le secteur (|C|T|R|L+|S|H|I|F|T+|A|L|T+|T).",	// add forced turn mode
	L"Si activ�, montre la progression des caract�res � travers le gain de niveaux.",
	L"Si activ�, la carte strat�gique sera color� diff�remment selon l'exploration.",
	L"Si activ�, le graphisme des tirs alternatifs sera affich� quand vous tirerez.",
	L"Si activ�, le nouveau syst�me NCTH (chance de toucher) \nainsi que le nouveau curseur seront utilis�s.",
	L"Si activ�, vous verrez l'�quipement du mercenaire � travers son portrait.",
	L"Si activ�, vous verrez les icones correspondant � l'�quipement port� en bas � droite du portrait.",
	L"Si activ�, le curseur ne basculera pas entre changer de position et une autre action. Appuyez sur |x pour initier un �change rapide.",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_HEADER",
	L"Forcer tous les envois en attente de Bobby Ray",
	L"(text not rendered)TOPTION_CHEAT_MODE_OPTIONS_END",
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_HEADER",			// an example options screen options header (pure text)
	L"|H|A|M |4 |D|e|b|u|g: Si activ�, annoncera la distance de d�viation de chaque tir � partir\ndu centre de la cible, en prenant en compte tous les facteurs du NCTH.",
	L"Click me to fix corrupt game settings",							// failsafe show/hide option to reset all options
	L"Click me to fix corrupt game settings",							// a do once and reset self option (button like effect)
	L"Autoriser les options de debug dans les releases ou les mapeditor",				// allow debugging in release or mapeditor
	L"Toggle to display debugging render options",						// an example option that will show/hide other options
	L"Attempts to display slash-rects around mouse regions",			// an example of a DEBUG build option
	L"(text not rendered)TOPTION_DEBUG_MODE_OPTIONS_END",				// an example options screen options divider (pure text)


	// this is THE LAST option that exists (debug the options screen, doesnt do anything, except exist)
	L"TOPTION_LAST_OPTION",
};


STR16	gzGIOScreenText[] =
{
	L"CONFIGURATION DU JEU",
	L"Style de jeu",
	L"R�aliste",
	L"S-F",
	L"Platinum", //Placeholder English
	L"Armes disponibles",
	L"Toutes",
	L"Quelques unes",
	L"Difficult�",
	L"Novice",
	L"Exp�riment�",
	L"Expert",
	L"INCROYABLE",
	L"Commencer",
	L"Annuler",
	L"En combat",
	L"Sauv. � volont�",
	L"Iron Man",
	L"D�sactiv� pour la d�mo",
	L"Selection de Bobby Ray",
	L"Bonne",
	L"Meilleure",
	L"Excellente",
	L"Superbe",
	L"Inventaire / Accessoire",
	L"NON UTILISE",
	L"NON UTILISE",
	L"Charge jeu multi",
	L"CONFIGURATION DU JEU (Les param�tres serveur seulement prennent effet)",
	// Added by SANDRO
	L"Skill Traits",
	L"Ancien",
	L"Nouveau",
	L"Nombre max de merc I.M.P",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	L"Objets lach�s par les ennemis",
	L"Off",
	L"On",
	L"Nombre de terroristes",
	L"Al�atoire",
	L"Tous",
	L"Cachettes d'armes secr�tes",
	L"Al�atoire",
	L"Toutes",
	L"Progression des objets choisis",
	L"Tr�s lente",
	L"Lente",
	L"Normal",
	L"Rapide",
	L"Tr�s rapide",
	L"Ancien / Ancien",
	L"Nouveau / Ancien",
	L"Nouveau / Nouveau",
};

STR16	gzMPJScreenText[] =
{
	L"MULTIJOUEURS",
	L"Rejoindre",
	L"H�berger",
	L"Annuler",
	L"Rafraichir",
	L"Nom du joueur",
	L"IP du serveur",
	L"Port",
	L"nom du serveur",
	L"# Plrs",
	L"Version",
	L"Type de jeu",
	L"Ping",
	L"Vous devez entrer un nom de joueur",
	L"Vous devez entrer une adresse IP de serveur valide. Par exemple : 84.114.195.239",
	L"Vous devez entrer un port de serveur valide entre 1 et 65535.",
};


STR16 gzMPJHelpText[] =
{
	L"Visiter http://webchat.quakenet.org/?channels=ja2-multiplayer pour trouver d'autres joueurs.",

	L"HEBERGER",
	L"Entrer '127.0.0.1' pour l'IP et un nombre plus grand que 60000 pour le port.",
	L"Assurez vous que les ports (UDP, TCP) sont ouverts sur votre routeur. Pour plus d'informations visitez : http://portforward.com",
	L"Vous devez envoyer (via IRC, MSN, ICQ, etc) votre IP externe (http://www.whatismyip.com) et votre num�ro de port aux autres joueurs.",
	L"Cliquez sur 'H�berger' pour h�berger une nouvelle partie en multijoueurs.",
	
	L"REJOINDRE",
	L"L'h�bergeur doit vous envoyer (via IRC, MSN, ICQ, etc) son IP externe ansi que son num�ro de port.",
	L"Entrez l'IP externe ainsi que le port du serveur.",
	L"Cliquer sur 'Rejoindre' pour rejoindre une partie multijoueurs d�j� existante.",
};

STR16	gzMPHScreenText[] =
{
	L"HOST GAME",
	L"Commencer",
	L"Annuler",
	L"Nom du serveur",
	L"Type de jeu",
	L"Deathmatch",
	L"Team-Deathmatch",
	L"Co-Operative",
	L"Joueurs max.",
	L"Mercs max.",
	L"S�lection mercenaire",
	L"Mercenaire embauch�",
	L"Embauch� par les joueurs",
	L"D�part avec argent",
	L"Autoriser l'embauche d'un m�me mercenaire",
	L"Reporter les mercenaires embauch�s",
	L"Bobby Rays",
	L"Sector Starting Edge",
	L"Vous devez entrer un nom de serveur",
	L"",
	L"",
	L"D�parts",
	L"",
	L"",
	L"D�g�ts des armes",
	L"",
	L"Tounures pr�vues",
	L"",
	L"Activer les civils en CO-OP",
	L"",
	L"Maximum d'ennemies en CO-OP",
	L"Synchroniser le r�pertoire du jeu",
	L"MP Sync. Directory",
	L"Vous devez entrer un r�pertoire de transfert de fichier.",
	L"(Utilisez '/' au lieu '\\' pour d�limiter les dossiers.)",
	L"Le r�pertoire de synchronisation indiqu� n'existe pas.",
	L"1",
	L"2",
	L"3",
	L"4",
	L"5",
	L"6",
	// Max. Enemies / Report Hired Merc / Enable Civs in CO-OP
	L"Oui",
	L"Non",
	// Starting Time
	L"Matin",
	L"Apr�s-midi",
	L"Nuit",
	// Starting Cash
	L"Faible",
	L"Moyen",
	L"Haut",
	L"Illimit�",
	// Time Turns
	L"Jamais",
	L"Lent",
	L"Moyen",
	L"Rapide",
	// Weapon Damage
	L"Tr�s lent",
	L"Lent",
	L"Normal",
	// Merc Hire
	L"Al�atoire",
	L"Normal",
	// Sector Edge
	L"Al�atoire",
	L"S�lectionnable",
	// Bobby Ray / Hire same merc
	L"D�sactiver",
	L"Autoriser",
};

STR16 pDeliveryLocationStrings[] =
{
	L"Austin",			//Austin, Texas, USA	
	L"Bagdad",			//Baghdad, Iraq (Suddam Hussein's home)
	L"Drassen",			//The main place in JA2 that you can receive items.  The other towns are dummy names...
	L"Hong Kong",		//Hong Kong, Hong Kong
	L"Beyrouth",			//Beirut, Lebanon	(Middle East)
	L"Londres",			//London, England
	L"Los Angeles",	//Los Angeles, California, USA (SW corner of USA)
	L"Meduna",			//Meduna -- the other airport in JA2 that you can receive items.
	L"Metavira",		//The island of Metavira was the fictional location used by JA1
	L"Miami",				//Miami, Florida, USA (SE corner of USA)
	L"Moscou",			//Moscow, USSR
	L"New-York",		//New York, New York, USA
	L"Ottawa",			//Ottawa, Ontario, Canada -- where JA2 was made!
	L"Paris",				//Paris, France
	L"Tripoli",			//Tripoli, Libya (eastern Mediterranean)
	L"Tokyo",				//Tokyo, Japan
	L"Vancouver",		//Vancouver, British Columbia, Canada (west coast near US border)
};

STR16 pSkillAtZeroWarning[] =
{ //This string is used in the IMP character generation.  It is possible to select 0 ability
	//in a skill meaning you can't use it.  This text is confirmation to the player.
	L"Etes-vous s�r de vous ? Une valeur de ZERO signifie que vous serez INCAPABLE d'utiliser cette comp�tence.",
};

STR16 pIMPBeginScreenStrings[] =
{
	L"( 8 Caract�res Max )",
};

STR16 pIMPFinishButtonText[ 1 ]=
{
	L"Analyse",
};

STR16 pIMPFinishStrings[ ]=
{
	L"Nous vous remercions, %s", //%s is the name of the merc
};

// the strings for imp voices screen
STR16 pIMPVoicesStrings[] =
{
	L"Voix", 
};

STR16 pDepartedMercPortraitStrings[ ]=
{
	L"Mort(e)",
	L"Renvoy�(e)",
	L"Autre",
};

// title for program
STR16 pPersTitleText[] =
{
	L"Personnel",
};

// paused game strings
STR16 pPausedGameText[] =
{
	L"Pause",
	L"Reprendre (|P|a|u|s|e)",
	L"Pause (|P|a|u|s|e)",
};


STR16 pMessageStrings[] =
{
	L"Quitter la partie ?",
	L"OK",
	L"OUI",
	L"NON",
	L"Annuler",
	L"CONTRAT",
	L"MENT",
	L"Sans description", //Save slots that don't have a description.
	L"Partie sauvegard�e.",
	L"Partie sauvegard�e.",
	L"Sauvegarde rapide", //The name of the quicksave file (filename, text reference)
	L"Partie",	//The name of the normal savegame file, such as SaveGame01, SaveGame02, etc.
	L"sav",				//The 3 character dos extension (represents sav)
	L"..\\SavedGames", //The name of the directory where games are saved.
	L"Jour",
	L"Mercs",
	L"Vide", //An empty save game slot
	L"D�mo",				//Demo of JA2
	L"Debug",				//State of development of a project (JA2) that is a debug build
	L"Version",			//Release build for JA2
	L"bpm",					//Abbreviation for Rounds per minute -- the potential # of bullets fired in a minute.
	L"min",					//Abbreviation for minute.
	L"m",						//One character abbreviation for meter (metric distance measurement unit).
	L"balles",				//Abbreviation for rounds (# of bullets)
	L"kg",					//Abbreviation for kilogram (metric weight measurement unit)
	L"lb",					//Abbreviation for pounds (Imperial weight measurement unit)
	L"Accueil",				//Home as in homepage on the internet.
	L"USD",					//Abbreviation to US dollars
	L"n/a",					//Lowercase acronym for not applicable.
	L"Entre-temps",		//Meanwhile
	L"%s est arriv� dans le secteur %s%s", //Name/Squad has arrived in sector A9.  Order must not change without notifying
																		//SirTech
	L"Version",
	L"Emplacement de sauvegarde rapide vide",
	L"Cet emplacement est r�serv� aux sauvegardes rapides effectu�es depuis l'�cran tactique (ALT+S).",
	L"Ouverte",
	L"Ferm�e",
	L"Espace disque insuffisant. Il ne vous reste que %s Mo de libre et Jagged Alliance 2 n�cessite %s Mo.",
	L"%s embauch�(e) sur le site AIM", 
	L"%s prend %s.",		//'Merc name' has caught 'item' -- let SirTech know if name comes after item.
	L"%s a pris la drogue.", //'Merc name' has taken the drug
	L"%s n'a aucune comp�tence m�dicale.",//'Merc name' has non medical skill.

	//CDRom errors (such as ejecting CD while attempting to read the CD)
	L"L'int�grit� du jeu n'est plus assur�e.",
	L"ERREUR : CD-ROM manquant",

	//When firing heavier weapons in close quarters, you may not have enough room to do so.
	L"Pas assez de place !",
	
	//Can't change stance due to objects in the way...
	L"Impossible de changer de position ici.",

	//Simple text indications that appear in the game, when the merc can do one of these things.
	L"L�cher",
	L"Lancer",
	L"Donner",

	L"%s donn� � %s.", //"Item" passed to "merc".  Please try to keep the item %s before the merc %s, otherwise,
											 //must notify SirTech.
	L"Impossible de donner %s � %s.", //pass "item" to "merc".  Same instructions as above.

	//A list of attachments appear after the items.  Ex:  Kevlar vest ( Ceramic Plate 'Attached )'
	L" combin�]",

	//Cheat modes
	L"Triche niveau 1",
	L"Triche niveau 2",

	//Toggling various stealth modes
	L"Escouade en mode discretion.",
	L"Escouade en mode normal.",
	L"%s en mode discretion.",
	L"%s en mode normal.",

	//Wireframes are shown through buildings to reveal doors and windows that can't otherwise be seen in 
	//an isometric engine.  You can toggle this mode freely in the game.
	L"Fil de fer activ�",
	L"Fil de fer d�sactiv�",

	//These are used in the cheat modes for changing levels in the game.  Going from a basement level to
	//an upper level, etc.  
	L"Impossible de remonter...",
	L"Pas de niveau inf�rieur...",
	L"Entr�e dans le sous-sol %d...",
	L"Sortie du sous-sol...",

	L"'s",		// used in the shop keeper inteface to mark the ownership of the item eg Red's gun
	L"Mode poursuite d�sactiv�.",
	L"Mode poursuite activ�.",
	L"Curseur To�t d�sactiv�.",
	L"Curseur To�t activ�.",
	L"Escouade %d active.",
	L"Vous ne pouvez pas payer le salaire de %s qui se monte � %s",	//first %s is the mercs name, the seconds is a string containing the salary
	L"Passer",
	L"%s ne peut sortir seul.",
	L"Une sauvegarde a �t� cr�e (Partie99.sav). Renommez-la (Partie01 - Partie10) pour pouvoir la charger ult�rieurement.",
	L"%s a bu %s",
	L"Un colis vient d'arriver � Drassen.",
 	L"%s devrait arriver au point d'entr�e (secteur %s) au jour %d vers %s.",		//first %s is mercs name, next is the sector location and name where they will be arriving in, lastely is the day an the time of arrival
	L"Historique mis � jour.",
	L"Curseur de vis�e pour raf.Gre. (Dispersion activ�e)",
	L"Curseur de trajectoire raf.gre. (Dispersion desact.)",
	L"Enabled Soldier Tooltips", // Changed from Drop All On - SANDRO
	L"Disabled Soldier Tooltips", // Changed from Drop All Off - SANDRO
	L"Angles standards pour lance-grenades",
	L"Lance-grenades grands angles",
	// forced turn mode strings
    L"Mode tour par tour forc�",
	L"Mode tour par tour normal",
	L"Mode de combat quitt�",
	L"Mode tour par tour forc� activ�, mode de combat activ�",
#ifdef JA2BETAVERSION
	L"Partie enregistr�e dans l'emplacement de sauvegarde automatique.",
#endif
	L"..\\SavedGames\\MP_SavedGames", //The name of the directory where games are saved.
	L"Client",

	L"Vous ne pouvez pas utiliser l'ancien syst�me d'inventaire et le nouveau syst�me d'accessoire en m�me temps.",
};


CHAR16 ItemPickupHelpPopup[][40] =
{
	L"OK",
	L"D�filement haut",
	L"Tout s�lectionner",
	L"D�filement bas",
	L"Annuler",
};

STR16 pDoctorWarningString[] =
{
	L"%s est trop loin pour �tre soign�.",
	L"Impossible de soigner tout le monde.",
};

STR16 pMilitiaButtonsHelpText[] =
{
	L"Prendre (Clic droit)/poser (Clic gauche) Miliciens", // button help text informing player they can pick up or drop militia with this button
	L"Prendre (Clic droit)/poser (Clic gauche) Soldats",
	L"Prendre (Clic droit)/poser (Clic gauche) V�t�rans",
	L"R�partition automatique",
};

STR16 pMapScreenJustStartedHelpText[] =
{
	L"Allez sur le site de l'AIM et engagez des mercenaires ( *Truc* allez voir dans le Poste de travail)", // to inform the player to hired some mercs to get things going
	L"Cliquez sur le bouton de Compression du temps pour faire avancer votre �quipe sur le terrain.", // to inform the player to hit time compression to get the game underway
};

STR16 pAntiHackerString[] = 
{
	L"Erreur. Fichier manquant ou corrompu. L'application va s'arr�ter.",
};


STR16 gzLaptopHelpText[] =
{
	//Buttons:
	L"Voir messages",
	L"Consulter les sites Internet",
	L"Consulter les documents attach�s",
	L"Lire le compte-rendu",
	L"Afficher les infos de l'�quipe",
	L"Afficher les �tats financiers",
	L"Fermer le Poste de travail",

	//Bottom task bar icons (if they exist):
	L"Vous avez de nouveaux messages",
	L"Vous avez re�u de nouveaux fichiers",

	//Bookmarks:
	L"Association Internationale des Mercenaires",
	L"Bobby Ray : Petits et Gros Calibres",
	L"Institut des Mercenaires Professionnels",
	L"Mouvement pour l'Entra�nement et le Recrutement des Commandos",
	L"Morgue McGillicutty",
	L"Service des Fleuristes Associ�s",
	L"Courtiers d'Assurance des Mercenaires de l'A.I.M.",
};


STR16	gzHelpScreenText[] =
{
	L"Quitter l'�cran d'aide",	
};

STR16 gzNonPersistantPBIText[] =
{
	L"Vous �tes en plein combat. Vous pouvez donner l'ordre de retraite depuis l'�cran tactique.",
	L"P�n�trez dans le secteur pour reprendre le cours du combat. (|E)",
	L"R�solution automatique du combat. (|A)",
	L"R�solution automatique impossible lorsque vous �tes l'attaquant.",
	L"R�solution automatique impossible lorsque vous �tes pris en embuscade.",
	L"R�solution automatique impossible lorsque vous combattez des cr�atures dans les mines.",
	L"R�solution automatique impossible en pr�sence de civils hostiles.",
	L"R�solution automatique impossible en pr�sence de chats sauvages.",
	L"COMBAT EN COURS",
	L"Retraite impossible.",
};

STR16 gzMiscString[] =
{
	L"Votre milice continue le combat sans vos mercenaires...",
	L"Ce v�hicule n'a plus besoin de carburant pour le moment.",
	L"Le r�servoir est plein � %d%%.",
	L"L'arm�e de Deidranna a repris le contr�le de %s.",
	L"Vous avez perdu un site de ravitaillement.",
};

STR16	gzIntroScreen[] = 
{
	L"Vid�o d'introduction introuvable",
};

// These strings are combined with a merc name, a volume string (from pNoiseVolStr),
// and a direction (either "above", "below", or a string from pDirectionStr) to 
// report a noise.
// e.g. "Sidney hears a loud sound of MOVEMENT coming from the SOUTH."
STR16 pNewNoiseStr[] =
{
	L"%s entend un bruit de %s %s.",
	L"%s entend un bruit %s de MOUVEMENT %s.",
	L"%s entend un GRINCEMENT %s %s.",
	L"%s entend un CLAPOTIS %s %s.",
	L"%s entend un IMPACT %s %s.",
	L"%s entend une EXPLOSION %s %s.",
	L"%s entend un CRI %s %s.",
	L"%s entend un IMPACT %s %s.",
	L"%s entend un IMPACT %s %s.",
	L"%s entend un BRUIT %s %s.",
	L"%s entend un BRUIT %s %s.",
};

STR16 wMapScreenSortButtonHelpText[] =
{
	L"Tri par nom (|F|1)",
	L"Tri par affectation (|F|2)",
	L"Tri par �tat de veille (|F|3)",
	L"Tri par lieu (|F|4)",
	L"Tri par destination (|F|5)",
	L"Tri par date de d�part (|F|6)",
};



STR16		BrokenLinkText[] = 
{
	L"Erreur 404",
	L"Site introuvable.",
};


STR16 gzBobbyRShipmentText[] = 
{
	L"Derniers envois",
	L"Commande #",
	L"Quantit� d'objets",
	L"Command�",
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
	L"Programmeur", 			// Chris Camfield
	L"Co-designer/Ecrivain",							// Shaun Lyng
	L"Syst�mes strat�giques & Programmeur",					//Kris Marnes
	L"Producteur/Co-designer",						// Ian Currie
	L"Co-designer/Conception des cartes",				// Linda Currie
	L"Artiste",													// Eric \"WTF\" Cheng
	L"Coordination, Assistance",				// Lynn Holowka
	L"Artiste Extraordinaire",						// Norman \"NRG\" Olsen
	L"Gourou du son",											// George Brooks
	L"Conception �crans/Artiste",					// Andrew Stacey
	L"Artiste en chef/Animateur",						// Scot Loving
	L"Programmeur en chef",									// Andrew \"Big Cheese Doddle\" Emmons
	L"Programmeur",											// Dave French
	L"Syst�mes strat�giques & Programmeur",					// Alex Meduna
	L"Portraits",								// Joey \"Joeker\" Whelan",
};

STR16	gzCreditNameFunny[]=
{
	L"", 																			// Chris Camfield
	L"(ah, la ponctuation...)",					// Shaun Lyng
	L"(\"C'est bon, trois fois rien\")",	//Kris \"The Cow Rape Man\" Marnes
	L"(j'ai pass� l'�ge)",				// Ian Currie
	L"(et en plus je bosse sur Wizardry 8)",						// Linda Currie
	L"(on m'a forc� !)",			// Eric \"WTF\" Cheng
	L"(partie en cours de route...)",	// Lynn Holowka
	L"",																			// Norman \"NRG\" Olsen
	L"",																			// George Brooks
	L"(T�te de mort et fou de jazz)",						// Andrew Stacey
	L"(en fait il s'appelle Robert)",							// Scot Loving
	L"(la seule personne un peu responsable de l'�quipe)",					// Andrew \"Big Cheese Doddle\" Emmons
	L"(bon, je vais pouvoir r�parer ma moto)",	// Dave French
	L"(piqu� � l'�quipe de Wizardry 8)",							// Alex Meduna
	L"(conception des objets et des �crans de chargement !)",	// Joey \"Joeker\" Whelan",
};

STR16 sRepairsDoneString[] =
{
	L"%s a termin� la r�paration de ses objets",
	L"%s a termin� la r�paration des armes & protections",
	L"%s a termin� la r�paration des objets port�s",
	L"%s a fini de r�parer les grands objets port�s par chacun",
	L"%s a fini de r�parer les moyens objets port�s par chacun",
	L"%s a fini de r�parer les petits objets port�s par chacun",
	L"%s a fini de r�parer le m�canisme LBE de chacun",
};

STR16 zGioDifConfirmText[]=
{
	L"Vous avez choisi le mode de difficult� NOVICE. Ce mode de jeu est conseill� pour les joueurs qui d�couvrent Jagged Alliance, qui n'ont pas l'habitude de jouer � des jeux de strat�gie ou qui souhaitent que les combats ne durent pas trop longtemps. Ce choix influe sur de nombreux param�tres du jeu. Etes-vous certain de vouloir jouer en mode Novice ?",
	L"Vous avez choisi le mode de difficult� EXPERIMENTE. Ce mode de jeu est conseill� pour les joueurs qui ont d�j� jou� � Jagged Alliance ou des jeux de strat�gie. Ce choix influe sur de nombreux param�tres du jeu. Etes-vous certain de vouloir jouer en mode Exp�riment� ?",
	L"Vous avez choisi le mode de difficult� EXPERT. Vous aurez �t� pr�venu. Ne venez pas vous plaindre si vos mercenaires quittent Arulco dans un cerceuil. Ce choix influe sur de nombreux param�tres du jeu. Etes-vous certain de vouloir jouer en mode Expert ?",
	L"Vous avez choisi le mode de difficult� INCROYABLE. ATTENTION: Ne venez pas vous plaindre si vos mercenaires quittent Arulco en petits morceaux... Deidranna va vous tuer. A coup s�r.  Ce choix influe sur de nombreux param�tres du jeu. Etes-vous certain de vouloir jouer en mode INCROYABLE ?",
};

STR16 gzLateLocalizedString[] =
{
	L"Donn�es de l'�cran de chargement de %S introuvables...",

	//1-5
	L"Le robot ne peut quitter ce secteur par lui-m�me.",

	//This message comes up if you have pending bombs waiting to explode in tactical.
	L"Compression du temps impossible. C'est bient�t le feu d'artifice !",  

	//'Name' refuses to move.
	L"%s refuse d'avancer.",

	//%s a merc name
	L"%s n'a pas assez d'�nergie pour changer de position.",

	//A message that pops up when a vehicle runs out of gas.
	L"Le %s n'a plus de carburant ; le v�hicule est bloqu� � %c%d.",

	//6-10

	// the following two strings are combined with the pNewNoise[] strings above to report noises
	// heard above or below the merc
	L"au-dessus",
	L"en-dessous",

	//The following strings are used in autoresolve for autobandaging related feedback.
	L"Aucun de vos mercenaires n'a de comp�tence m�dicale.",
	L"Plus de bandages !",
	L"Pas assez de bandages pour soigner tout le monde.",
	L"Aucun de vos mercenaires n'a besoin de soins.",
	L"Soins automatiques.",
	L"Tous vos mercenaires ont �t� soign�s.",

	//14
	L"Arulco",

    L"(toit)",

	L"Sant� : %d/%d",

	//In autoresolve if there were 5 mercs fighting 8 enemies the text would be "5 vs. 8"
	//"vs." is the abbreviation of versus.
	L"%d contre %d",
	
	L"Plus de place dans le %s !",  //(ex "The ice cream truck is full")

    L"%s requiert des soins bien plus importants et/ou du repos.",

	//20
	//Happens when you get shot in the legs, and you fall down.
	L"%s a �t� touch� aux jambes ! Il ne peut plus tenir debout !",
	//Name can't speak right now.
	L"%s ne peut pas parler pour le moment.",

	//22-24 plural versions 
	L"%d miliciens ont �t� promus v�t�rans.",
	L"%d miliciens ont �t� promus soldats.",
	L"%d soldats ont �t� promus v�t�rans.",

	//25
	L"Echanger",

	//26
	//Name has gone psycho -- when the game forces the player into burstmode (certain unstable characters)
	L"%s est devenu dingue !",

	//27-28
	//Messages why a player can't time compress.
	L"Nous vous d�conseillons d'utiliser la Compression du temps ; vous avez des mercenaires dans le secteur %s.",
	L"Nous vous d�conseillons d'utiliser la Compression du temps lorsque vos mercenaires se trouvent dans des mines infest�es de cr�atures.",

	//29-31 singular versions 
	L"1 milicien a �t� promu v�t�ran.",
	L"1 milicien a �t� promu soldat.",
	L"1 soldat a �t� promu v�t�ran.",

	//32-34
	L"%s ne dit rien.",
	L"Revenir � la surface ?",
	L"(Escouade %d)",

	//35
	//Ex: "Red has repaired Scope's MP5K".  Careful to maintain the proper order (Red before Scope, Scope before MP5K)
	L"%s a r�par� pour %s : %s",//inverted order !!! Red has repaired the MP5 of Scope

	//36
	L"Chat",	// Max. 9 Characters. Should be "bloodcat".

	//37-38 "Name trips and falls"
	L"%s tr�buche et tombe",
	L"Cet objet ne peut �tre pris d'ici.",

	//39
	L"Il ne vous reste aucun mercenaire en �tat de se battre. La milice combattra les cr�atures seule.",

	//40-43
	//%s is the name of merc.
	L"%s n'a plus de trousse de soins !",
	L"%s n'a aucune comp�tence m�dicale !",
	L"%s n'a plus de trousse � outils !",
	L"%s n'a aucune comp�tence en m�canique !",

	//44-45
	L"Temps de r�paration",
	L"%s ne peut pas voir cette personne.",

	//46-48
	L"Le prolongateur de %s est tomb� !",
	L"Pas plus de %d personnes pour former la milice sont autoris�es dans ce secteur.",	
    L"Etes-vous s�r ?",

	//49-50
	L"Compression du temps",
	L"Le r�servoir est plein.",

	//51-52 Fast help text in mapscreen.
	L"Compression du temps (|E|s|p|a|c|e)",
	L"Arr�t de la Compression du temps (|E|c|h|a|p)",

	//53-54 "Magic has unjammed the Glock 18" or "Magic has unjammed Raven's H&K G11" 
	L"%s a d�senray� le %s",
	L"%s a d�senray� le %s de %s",//inverted !!! magic has unjammed the g11 of raven

	//55 
	L"Compression du temps impossible dans l'�cran d'inventaire.",

	L"Le CD Play de Jagged Alliance 2 est introuvable. L'application va se terminer.",

	L"Objets associ�s.",
	
	//58
	//Displayed with the version information when cheats are enabled.
	L"Actuel/Maximum : %d%%/%d%%",

	L"Escorter John et Mary ?",

	//60	
	L"Interrupteur activ�.",

	L"%s: attachement de protection d�truit !",
	L"%s tire %d fois de plus que pr�vu !",
	L"%s tire 1 fois de plus que pr�vu !",
};

STR16 gzCWStrings[] = 
{
	L"Faut-il appelez des renforts pour %s dans les secteurs adjacents ?",
};

// WANNE: Tooltips
STR16 gzTooltipStrings[] =
{
	// Debug info
	L"%s|Emplacement: %d\n",
	L"%s|Luminosit�: %d / %d\n",
	L"%s|Distance de la |Cible: %d\n",
	L"%s|I|D: %d\n",
	L"%s|Ordres: %d\n",
	L"%s|Attitude: %d\n",
	L"%s|P|A |Actuel: %d\n",
	L"%s|Sant� |Actuel: %d\n",
	// Full info
	L"%s|Casque: %s\n",
	L"%s|Veste: %s\n",
	L"%s|Pantalon: %s\n",
	// Limited, Basic
	L"|Armure: ",
	L"Casque ",
	L"Veste ",
	L"Pantalon",
	L"us�",
	L"pas d'armure",
	L"%s|L|V|N: %s\n",
	L"Pas de lunette de vision de nuit",
	L"%s|Masque |� |Gaz: %s\n",
	L"pas de masque � gaz",
	L"%s|Position |t�te |1: %s\n",
	L"%s|Position |t�te |2: %s\n",
	L"\n(dans le sac de transport) ",
	L"%s|Arme: %s ",
	L"pas d'arme",
	L"Pistolet",
	L"SMG",
	L"Fusil",
	L"MG",
	L"Fusil � pompe",
	L"Couteau",
	L"Armes lourdes",
	L"pas de casque",
	L"pas de veste",
	L"pas de pantalon",
	L"|Armure: %s\n", 
	 // Added - SANDRO
	L"%s|Comp�tence 1: %s\n",
	L"%s|Comp�tence 2: %s\n", 
	L"%s|Comp�tence 3: %s\n",
};

STR16 New113Message[] =
{
	L"La temp�te d�bute .",
	L"Temp�te finie.",
	L"Il commence � pleuvoir.",
	L"La pluie cesse.",
	L"Attention aux tireurs isol�s...",
	L"Tir de suppression !",	
	L"RAF.",
	L"AUTO",
	L"LG",
	L"RAF. LG",
	L"LG AUTO",
	L"Tireur embusqu� !",
	L"Unable to split money due to having an item on your cursor.",
	L"Arriv�e de nouvelles recrues est d�rout�e au secteur %s, car le point d'arriv�e pr�vu %s est sous contr�le ennemi.",
	L"Article supprim�",
	L"A supprim� tous les articles de ce type",
	L"Article vendu",
	L"A vendu tous les articles de ce type",
	L"Vous devriez v�rifier si votre accessoire de vision convient bien � ce type de lieu",
	// Real Time Mode messages
	L"Encore en combat",
	L"pas d'ennemie en vue",
	L"Mode silencieux en temps r�el d�sactiv�",
	L"Mode silencieux en temps r�el activ�",
	L"Ennemis rep�r�s !", // this should be enough - SANDRO
	//////////////////////////////////////////////////////////////////////////////////////
	// These added by SANDRO
	L"%s a r�ussi son vol !",
	L"%s n'avait pas assez de points d'action pour voler tous les articles choisis.",
	L"Voulez-vous faire de la chirurgie sur %s avant de le bander ? (Vous pouvez lui gu�rir %i Sant�.)",
	L"Voulez-vous faire de la chirurgie sur %s ? (Vous pouvez lui gu�rir %i Sant�.)",
	L"Voulez-vous lui faire les premiers soins d'abord ? (%i patient(s))",
	L"Voulez-vous faire les premiers soins sur ce patient d'abord ?",
	L"Appliquez les premiers soins automatiquement avec chirurgie ou sans ?",
	L"La chirurgie sur %s est finie.",
	L"%s est touch� au torse et perd un maximum de points de vie !",
	L"%s est touch� au torse et perd %d points de vie !",
	L"%s a regagn� 1 point sur les %s perdus",
	L"%s a regagn� %d points sur les %s perdus",
	L"Vos comp�tences de reconnaissance vous ont emp�ch�s d'�tre pris en embuscade par l'ennemi !",
	L"Gr�ce � vos comp�tences de reconnaissance vous avez r�ussi � �viter un groupe de f�lins !",
	L"%s est frapp� � l'aine et tombe dans la douleur !",
	//////////////////////////////////////////////////////////////////////////////////////
	L"Attention: Cadavre ennemi trouv� !!!",
	L"%s [%d rnds]\n%s %1.1f %s",

};

STR16 New113HAMMessage[] = 
{
	// 0 - 5
	L"%s sombre dans la peur !",
	L"%s est clou� au sol !",
	L"%s tire plus de fois que d�sir� !",
	L"Vous ne pouvez pas former de milice dans ce secteur.",
	L"La milice prend %s.",
	L"Vous ne pouvez pas former de milice alors que des ennemies sont pr�sents !", 
	// 6 - 10
	L"Manque %s points en Commandement pour former la milice.",
	L"Pas plus de %d milices mobiles peuvent �tre entrain�es dans ce secteur.",
	L"Aucune pi�ce dans %s ou autours pour des nouvelles milices mobiles !",
	L"Vous devez avoir %d villes de milice dans chaque secteur lib�r�e de %s  pour pouvoir former une milice mobile.",
	L"Ne peut pas diriger une installation tant que les ennemies sont pr�sents !",
	// 11 - 15
	L"Manque de %s en sagesse pour pourvoir installer des �quipements destin�s au personnel.",
	L"%s est d�ja enti�rement pourvu en personnel.",
	L"Cela va co�ter %d$ par heure pour construire cette infrastucture. Voulez-vous continuer ?",
	L"Vous n'avez pas assez d'argents pour payer toute les infrastructures aujourd'hui.%d $ ont d�j� �t� pay�s, mais vous devez encore %d $. Les habitants ne sont pas patients...",
	L"Vous n'avez pas assez d'argents pour payer toute les infrastructures aujourd'hui. Vous devez %d$. Les habitants ne sont pas patients...",
	// 16 - 20
	L"Vous avez une dette �chue de %d $ pour l'op�ration d'installation et aucun argent pour le r�gler !",
	L"Vous avez une dette �chue de %d $ pour l'op�ration d'installation. Vous ne pouvez pas assigner ce merc au installation avant que vous n'ayez assez d'argent pour r�gler la dette enti�re.",
	L"Vous avez une dette �chue de %d $ pour l'op�ration d'installation. Voulez-vous tout payer d'un coup ?",
	L"N/A est dans ce secteur",
	L"D�penses quotidiennes",
	// 21 - 25
	L"Fonds insuffisants pour payer toute la milice enr�l�e ! %d milices se sont dissolu et sont rentr�s chez eux.",
};

// WANNE: This are the email texts, when one of the 4 new 1.13 MERC mercs have levelled up, that Speck sends
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16	New113MERCMercMailTexts[] =
{
	// Gaston: Text from Line 39 in Email.edt
	L"Nous vous informons que de par ses perfomances pass�es, Gaston voit ses honoraires augment�s. Personellement, je ne suis pas surpris. � � Speck T. Kline � ",
	// Stogie: Text from Line 43 in Email.edt
	L"Soyez inform� que, � paritr de maintenant, le honoraires de Stogie ont augment�s en accord avec ses comp�tences. � � Speck T. Kline � ", 
	// Tex: Text from Line 45 in Email.edt
	L"Sachez que l'experience de Text lui autorisent une promotion. Son salaire a donc �t� ajust� pour refleter sa valeur �quitablement. � � Speck T. Kline � ",
	// Biggens: Text from Line 49 in Email.edt
	L"Prenez note. De par des performances accrues Biggens voit le prix de ses services augment�s. � � Speck T. Kline � ",
};

// WANNE: This is email text (each 2 line), when we left a message on AIM and now the merc is back
STR16	New113AIMMercMailTexts[] =
{
	// Monk
	L"TR du serveur AIM: Message de Victor Kolesnikov",
	L"Salut. Ici Monk. Message re�u. Je suis disponible si vous voulez me voir. � � J�attends votre appel. �",

	// Brain
	L"TR du serveur AIM: Message de Janno Allik",
	L"Je suis pr�t � conciderer votre offre. Il y a un temps et un lieu pour tout. � � Janno Allik �",

	// Scream
	L"TR du serveur AIM: Message de Lennart Vilde",
	L"Lennart Vilde est maintenant disponible! �",

	// Henning
	L"TR du serveur AIM: Message de Henning von Branitz",
	L"J�ai re�u votre message, merci. Pour parler d�embauche, contactez-moi sur le site web de l�AIM. � � Henning von Branitz �",

	// Luc
	L"TR du serveur AIM: Message de Luc Fabre",
	L"Message re�u, merci! Je suis heureux de consid�rer votre proposition. Vous savez o� me trouver. � � Au plaisir de vous entendre.�",

	// Laura
	L"TR du serveur AIM: Message de Dr. Laura Colin",
	L"Salutations! Merci pour votre message, il semble int�ressant. � � Visiter l�AIM � nouveau, je serais ravie d�en entendre plus. � � Cordialement! � � Dr. Laura Colin �",

	// Grace
	L"TR du serveur AIM: Message de Graziella Girelli",
	L"Vous vouliez me contacter, mais vous n�avez pas r�ussi.� � Une r�union de famille. Je suis s�r que vous comprenez? J�en ai maintenant assez de la famille et serait tr�s heureuse si vous voulez me contacter de nouveau sur le site AIM. � � Ciao! �",

	// Rudolf
	L"TR du serveur AIM: Message de Rudolf Steiger",
	L"Vous savez combien j�ai d�appel par jour ? Tous les branleurs pensent pouvoir m�appeler. � � Mais je suis de retour, si vous avez quelque chose d�int�ressant pour moi. �",

	// WANNE: Generic mail, for additional merc made by modders, index >= 178
	L"TR du serveur AIM: Message des disponibilit�s des mercs",
	L"J'ai re�u votre message. J'attends votre appel. �",
};

// WANNE: These are the missing skills from the impass.edt file
// INFO: Do not replace the � characters. They indicate the <B2> (-> Newline) from the edt files
STR16 MissingIMPSkillsDescriptions[] =
{
	// Sniper
	L"Tireur isol� : Des yeux de faucon, vous pouvez tirer les ailes d'une mouche � cent m�tres! � ",
	// Camouflage
	L"Camouflage : Sans compter que derri�re vous m�me les buissons semblent synth�tiques! � ",	
	// SANDRO - new strings for new traits added
	// Ranger
	L"Soldat: Vous �tes celui du d�serts du Texas, n'est-ce pas ! � ",	
	// Gunslinger
	L"Bandit: Avec un pistolet ou deux, vous pouvez �tre aussi mortel que Billy the Kid ! � ",
	// Squadleader
	L"Commandant: Naturel leader et commandant, vous �tes le gros calibre, sans blague ! � ",
	// Technician
	L"Technicien: Fixer les objets, retirer les pi�ges, planter les bombes, c'est �a votre boulot ! � ",
	// Doctor
	L"Docteur: Vous pouvez faire une intervention chirurgicale avec un couteau Suisse et un chewing gum et cela n'importe o� ! � ",
	// Athletics
	L"Athletic: Votre vitesse et votre vitalit�e sont au top des possibilit�es actuelles! � ",
	// Bodybuilding
	L"Culturiste: Cette grande figure muscl�e qui ne peut pas �tre domin�e est en fa�te vous en r�alit� ! � ",
	// Demolitions
	L"D�molition: Vous pouvez r�duire � n�ant toute une ville rien qu'avec des produits m�nagers ! � ",
	// Scouting
	L"Reconnaissance: Rien n'�chappe � votre vigilance ! � ",
};

STR16 NewInvMessage[] = 
{
	L"Le sac � dos ne peut �tre ramass� pour le moment",
	L"Pas de place pour le sac � dos",
	L"Sac � dos non trouv�",
	L"La fermeture �clair fonctionne seulement en combat",
	L"Ne peut se d�placer si la fermeture �clair est ouverte",
	L"�tes vous s�r de vouloir voulez vendre tous les articles du secteur ?",
	L"�tes vous s�r de vouloir supprimer tous les articles du secteur ?",
	L"Ne peut pas escalader avec un sac � dos",
};

// WANNE - MP: Multiplayer messages
STR16 MPServerMessage[] =
{
	// 0
	L"Initialisation du serveur RakNet..",
	L"Le serveur a d�marr�, en attente de connection...",
	L"Vous devez maintenant vous connecter avec votre client sur le serveur en pressant '2'.",
	L"Le serveur est d�j� d�marr�.",
	L"Le serveur n'a pas pu d�marr�. Termin�.",
	// 5
	L"%d/%d clients sont d�j� en mode realtime.",
	L"Le serveur s'est d�connect� et s'est �teint.",
	L"Le serveur n'est pas d�marr�.",
	L"Les clients sont en cours de chargement, veuillez patienter...",
	L"Vous ne pouvez pas changer de dropzone alors que le serveur vient de d�marrer.",
	// 10
	L"Fichier envoy� '%S' - 100/100",
	L"Envoie de fichier fini pour '%S'.",
	L"D�part d'envoie de fichier pour '%S'.",
	L"Utilisez la vue a�rienne pour s�lectionner la carte que vous voulez jouer. Si vous voulez changer de carte, vous devez le faire avant de cliquer sur 'D�marrer la partie'.",
};

STR16 MPClientMessage[] =
{
	// 0
	L"Initialisation du client RakNet...",		
	L"Connection � l'IP: %S ...",
	L"R�ception des optiosn de jeu:",
	L"Vous �tes d�j� connect�.",
	L"Vous �tes d�j� connect�...",
	// 5
	L"Client #%d - '%S' a engag� '%s'.",
	L"Client #%d - '%S' a engag� un autre mercenaire.",
	L"Vous �tes pr�t - Total pr�ts = %d/%d.",
	L"Vous n'�tes pas encore pr�ts - Total pr�t = %d/%d.",
	L"D�part de bataille...",
	// 10
	L"Client #%d - '%S' est pr�t - Total pr�ts = %d/%d.",
	L"Client #%d - '%S' n'est pas encore pr�t - Total pr�ts = %d/%d",
	L"Vous �tes pr�t. En attente des autre clients... Cliquez sur 'OK' si vous n'�tes plus pr�t.",
	L"Laissez-nous, la bataille commence !",
	L"Un client doit poser sa candidature pour d�marrer la partie.",
	// 15
	L"Le jeu ne peut d�marrer. Aucun mercenaire n'a �t� engag�...",
	L"En attente de 'OK' de la part du serveur pour ouvrir le portable...",
	L"Interrompu",
	L"Fin de l'interromption",
	L"Coordonn�es de r�seau de souris :",
	// 20
	L"X: %d, Y: %d",
	L"R�seau num�ro: %d",
	L"Le serveur figure seulement",
	L"Choissiez les �tapes � ignorer:  ('1' - Activer portable/l'embauche)  ('2' - lancer/charger level)  ('3' - Unlock UI)  ('4' - placement de finition)",	
	L"Secteur=%s, Clients max.=%d, Mercs max.=%d, Game_Mode=%d, Same Merc=%d, Multiplicateur de D�g�ts=%f, Timed Turns=%d, Secs/Tic=%d, Dis BobbyRay=%d, Dis Aim/Merc Equip=%d, Dis Morale=%d, Testing=%d",
	// 25
	L"",
	L"Nouvelle conncetion: Client #%d - '%S'.",
	L"Equipe: %d.",//not used any more
	L"'%s' (client %d - '%S') a �t� tu� par '%s' (client %d - '%S')",
	L"Client kick� #%d - '%S'",
	// 30
	L"D�but de manche pour les num�ros de clients: #1 - '%S' | #2 - '%S' | #3 - '%S' | #4 - '%S'",
	L"D�but de manche pour le client #%d",
	L"Requ�te pour le realtime...",
	L"Commutation en mode realtime.",
	L"Erreur lors de la commutation.",
	// 35
	L"D�v�rouiller le portable pour l'embauche ? (Tous les clients sont connect�s?)",
	L"Le serveur a d�v�rouill� le portable pour l'embauche. Vous pouvez commencez a embauch� !",
	L"Interruption.",
	L"Vous ne pouvez pas changer la dropzone si vous �tes seulement un client et pas le g�rant du serveur.",
	L"Vous avez d�clin� l'offre de vous rendre, car vous �tes dans une partie multijoueur.",
	// 40
	L"Tous vos mercenaires sont morts !",
	L"Mode spectateur activ�.",
	L"Vous avez �t� vaincu !",
	L"D�sol�, escalader sur les toits est interdit en multijoueur.",
	L"Vous avez embauch� '%s'",
	// 45
	L"Vous ne pouvez pas changer la carte une fois que l'achat a commenc�",
	L"Changement de carte : '%s'",
	L"Le client '%s' s'est d�connect�, il a �t� retir� du jeu",
	L"Vous avez �t� d�connect� du jeu, retourner au menu principal",
	L"Connection �chou�e, reconnection dans 5 s. Encore %i tentatives...",
	//50
	L"Connection �chou�e, abandon de l'op�ration...",
	L"Vous ne pouvez pas d�marrer la partie tant qu'un autre joueur ne s'est pas connect�",
	L"%s : %s",
	L"Envoyer � tous",
	L"Alli�s seulement",
	// 55
	L"Vous ne pouvez pas rejoindre cette partie car elle a d�j� commenc�.",
	L"%s (equipe): %s",
	L"#%i - '%s'",
	L"%S - 100/100",
	L"%S - %i/100",
	// 60
	L"R�ception de tous les fichiers depuis le serveur.",
	L"'%S' a fini de t�l�charger depuis le serveur.",
	L"'%S' a commenc� � t�l�charger depuis le serveur.",
	L"Vous ne pouvez pas d�marrer le jeu tant que tout les joueurs n'ont pas finit de recevoir les fichiers",
	L"Ce serveur requiert des fichiers modifi�s pour pouvoir jouer, voulez-vous continuer ?",
	// 65
	L"Cliquez sur 'Ready' pour aller � l'�cran tactique.",
	L"Vous ne pouvez pas vous connecter car votre version %S est diff�rente de celle du serveur %S.",
	L"Vous avez tu� un soldat ennemi.",
	L"Vous ne pouvez pas commencer la partie car toutes les �quipes sont les m�mes.",
	L"Le serveur a choisi l'option du Nouvel Inventaire (NI), mais la r�solution de votre �cran ne le supporte pas.",
	// 70
	L"Impossible de sauver les fichiers re�us '%S'",
	L"La bombe de %s a �t� d�samorc� par %s",
	L"Vous avez perdu, quel honte !",	// All over red rover
	L"Mode spectateur d�sactiv�",
	L"Choisir le num�ro du client a kick� :",
	// 75
	L"La team #%d a �t� an�antie.",
	L"Le client n'as pas r�ussi � d�marrer. Termin�.",
	L"Le client s'est d�connect� et s'est ferm�.",
	L"Le client n'est pas d�marr�.",
	L"INFO: Si le jeu est bloqu� (la barre de progression des adversaires ne se d�place pas), notifier le au serveur en appuyant sur ALT + E pour aller directement � votre tour de jeu !",
};

STR16 gszMPEdgesText[] =
{
	L"N",
	L"S",
	L"E",
	L"O",
	L"C",	// "C"enter
};

STR16 gszMPTeamNames[] =
{
	L"Foxtrot",
	L"Bravo",
	L"Delta",
	L"Charlie",
	L"N/A",		// Acronym of Not Applicable
};

STR16 gszMPMapscreenText[] =
{
	L"Type de jeu : ",
	L"Joueurs : ",
	L"Mercenaire pris : ",
	L"Vous ne pouvez pas changer le bord de d�part tant que le portable est ouvert.",
	L"Vous ne pouvez pas changer d'�quipe tant que le portable est ouvert.",
	L"Mercenaire al�atoire : ",
	L"Y",
	L"Difficult� :",
	L"Version Serveur :",
};

STR16 gzMPSScreenText[] =
{
	L"Tableaux des scores",
	L"Continue",
	L"Annul�",
	L"Joueurs",
	L"Tu�s",
	L"Morts",
	L"Arm�e de la reine",
	L"Touch�s",
	L"Rat�s",
	L"Pr�cision",
	L"D�g�ts faits",
	L"D�g�ts re�us",
	L"Attendez le serveur avant d'appuyer sur 'Continue'."
};

STR16 gzMPCScreenText[] =
{
	L"Annul�",
	L"Connection au serveur",
	L"Obtention des options du serveur",
	L"T�l�chargement des fichiers modifi�s",
	L"Appuyer sur 'ESC' pour annul� ou 'Y' pour parler",
	L"Appuyer sur 'ESC' pour annul�",
	L"Pr�t"
};

STR16 gzMPChatToggleText[] =
{
	L"Envoyer � tous",
	L"Envoyer aux alli�s seulement",
};

STR16 gzMPChatboxText[] =
{
	L"Chat multijoueurs",
	L"'ENTRER' pour envoyer, 'ESC' pour annuler",
};

// Following strings added - SANDRO
STR16 pSkillTraitBeginIMPStrings[] =
{
	// For old traits
	L"A la page suivante, vous allez choisir vos traits de comp�tence selon votre sp�cialisation professionnel comme un mercenaire. Pas plus de deux traits diff�rents ou un trait expert peuvent �tre choisis.",
	L"Vous pouvez aussi choisir seulement un ou m�me aucun trait, ce qui vous donnera un bonus � vos points d'attributs, une sorte de compensation. Notez que les comp�tences : m�canique, ambidextre et camouflage ne peuvent pas �tre prises aux niveaux experts.",
	// For new major/minor traits
	L"L'�tape suivante est le choix de vos traits de comp�tences. A la premi�re page vous pouvez choisir jusqu'� deux traits principaux, qui repr�sentent surtout votre r�le dans une �quipe. Tandis qu'� la deuxi�me page, c'est la liste de vos traits mineurs, qui repr�sentent des exploits personnels.",
	L"Pas plus de trois choix au total sont possibles. Ce qui signifie que si vous ne choisissez aucun trait principal, vous pourrez alors choisir trois traits secondaires. Si vous choisissez deux traits principaux (ou un en expert), vous pourrez alors choisir qu'un seul trait secondaire...",
};

STR16 sgAttributeSelectionText[] = 
{
	L"Ajustez s'il vous pla�t vos attributs physiques selon vos vraies capacit�s. Vous ne pouvez pas augmenter les scores au-dessus de",
	L"Examen des attributs et comp�tences de l'I.M.P.",
	L"Points bonus :",
	L"D�part au niveau",
	// New strings for new traits
	L"A la page suivante vous allez sp�cifier vos attributs physiques comme : la sant�, la dext�rit�, l'agilit�, la force et la sagesse. Les attributs ne peuvent pas aller plus bas que %d.",
	L"Le reste est appel� 'habilit�es' et � la diff�rence des attributs, ils peuvent �tre mis � z�ro signifiant que vous serez un incapable dans cette habilit�e !",
	L"Tous les scores sont mis � un minimum au d�but. Notez que certains attributs sont mis a des valeurs sp�cifiques correspondant aux traits de comp�tence que vous avez choisis. Vous ne pouvez pas mettre ces attributs plus bas.",
};

STR16 pCharacterTraitBeginIMPStrings[] =
{
	L"Analyse du cacract�re I.M.P.",
	L"L'analyse de votre personnage est la prochaine �tape. � la premi�re page on vous montrera une liste d'attitudes � choisir. Nous imaginons bien que vous pourriez vous identifier � plusieurs d'entre elles, mais vous ne pourrez en choisir qu'une seule. Choisissez celle qui vous correspond le plus. ",
	L"La deuxi�me page montre des handicaps que vous pourriez avoir. Si vous souffrez de n'importe lequel de ces handicaps, choisissez le (un seul choix est possible). Soyez honn�te, pensez que c'est un entretien d'embauche et qu'il est toujours important de faire connaitre votre vraie personnalit�.",
};

STR16 gzIMPAttitudesText[]=
{
	L"Normal",
	L"Amical",
	L"Solitaire",
	L"Optimiste",
	L"P�ssimiste",
	L"Aggressif",
	L"Arrogant",
	L"Gros tireur",
	L"Trou du cul",
	L"L�che",
	L"Attitudes I.M.P.",
};

STR16 gzIMPCharacterTraitText[]=
{
	L"Normal",
	L"Sociable",
	L"Solitaire",
	L"Optimiste",
	L"Assur�",
	L"Intellectuel",
	L"Primitif",
	L"Aggressif",
	L"Flegmatique",
	L"Intr�pide",
	L"Pacifiste",
	L"Malicieux",
	L"Frimeur",
	L"Traits de caract�re I.M.P.",
};

STR16 gzIMPColorChoosingText[] = 
{
	L"Teinte et musculature I.M.P.",
	L"Couleurs I.M.P.",
	L"Choisissez les couleurs respectives de votre peau, vos cheveux et vos v�tements. Ainsi que votre physionomie (traits physiques). ",
	L"Choisissez les couleurs respectives de votre peau, vos cheveux et vos v�tements.",
	L"Cocher i�i pour utiliser une prise en main alternative du fusil.",
	L"\n(Attention: vous devez avoir une grande force pour utiliser cela.)",
};

STR16 sColorChoiceExplanationTexts[]=
{
	L"Cheveux",
	L"Teinte",
	L"T-shirt",
	L"Pantalon",
	L"Corps normal",
	L"Corps muscl�",
};

STR16 gzIMPDisabilityTraitText[]=
{
	L"Pas d'handicap",
	L"Intol�rance � la chaleur",
	L"Nerveux",
	L"Claustrophobe",
	L"Mauvais nageur",
	L"Peur des insectes",
	L"Distrait",
	L"Psychotique",
	L"Handicaps I.M.P.",
};

// HEADROCK HAM 3.6: Error strings for assigning a merc to a facility
STR16 gzFacilityErrorMessage[]=
{
	L"%s n'as pas assez de force pour accomplir cette t�che.",
	L"%s n'as pas assez de dext�rit� pour accomplir cette t�che.",
	L"%s n'est pas assez agile pour accomplir cette t�che.",
	L"%s n'est pas assez en bonne sant� pour accomplir cette t�che.",
	L"%s n'as pas assez de sagesse pour accomplir cette t�che.",
	L"%s n'est pas assez bon tireur pour accomplir cette t�che.",
	// 6 - 10
	L"%s n'est pas assez bon m�decin pour accomplir cette t�che.",
	L"%s n'est pas assez bon en m�canique pour accomplir cette t�che.",
	L"%s n'est pas assez bon en commandement pour accomplir cette t�che.",
	L"%s n'est pas assez bon en explosif pour accomplir cette t�che.",
	L"%s n'a pas assez d'exp�rience pour accomplir cette t�che.",
	// 11 - 15
	L"%s n'a pas assez de moral pour accomplir cette t�che.",
	L"%s est trop �puis� pour effectuer cette t�che.",
	L"Loyaut� insuffisante � %s. Les habitants refusent de vous permettre de faire de cette t�che.",
	L"Trop de gens sont d�j� en train de travailler � %s.",
	L"Trop de gens sont d�j� en train de faire cette t�che � %s.",
	// 16 - 20
	L"%s n'as pas trouv� d'objets � r�parer.",
	L"%s a perdu %s alors qu'il travaillait dans le secteur %s !",
	L"%s a perdu %s alors qu'il travaillait sur %s � %s !",
	L"%s a �t� bless� alors qu'il travaillait dans le secteur %s et n�cessite des soins m�dicaux imm�diats !",
	L"%s a �t� bless� alors qu'il travaillait %s � %s et n�cessite des soins m�dicaux imm�diats !",
	// 21 - 25
	L"%s a �t� bless� alors qu'il travaillait dans le secteur %s. Il ne semble pas �tre en trop mauvais �tat.",
	L"%s a �t� bless� alors qu'il travaillait sur %s � %s. Il ne semble pas �tre en trop mauvais �tat.",
	L"Les r�sidents de %s semblent �tre exc�d�s par la pr�sence de %s.",
	L"Les r�sidents de %s semblent �tre exc�d�s par le travail de %s sur %s.",
	L"Les actions de %s dans le secteur %s ont caus� une perte de loyaut� � travers la r�gion !",
	// 26 - 30
	L"Les actions de %s sur %s � %s ont caus� une perte de loyaut� � travers la r�gion !",
	L"%s est ivre.", // <--- This is a log message string.
	L"%s est devenu gravement malade dans le secteur %s, et commence � manque � son devoir.",
	L"%s est devenu gravement malade et ne peut continuer son travail sur %s � %s.",
	L"%s a �t� bless� dans le secteur %s.", // <--- This is a log message string.
	// 31 - 35
	L"%s a �t� s�v�rement bless� dans le secteur %s.", //<--- This is a log message string.


};

STR16 gzFacilityRiskResultStrings[]=
{
	L"Force",
	L"Agilit�",
	L"Dext�rite",
	L"Sagesse",
	L"Sant�",
	L"Tir",
	// 5-10
	L"Commandant",
	L"M�canique",
	L"M�decin",
	L"Explosif",
};

STR16 gzFacilityAssignmentStrings[]=
{
	L"AMBIENT",
	L"Equipe",
	L"Reste",
	L"R�parer les objets",
	L"R�parer %s", // Vehicle name inserted here
	L"R�parer le Robot",
	// 6-10
	L"Docteur",
	L"Patient",
	L"Apprendre Force",
	L"Apprendre Dext�rit�",
	L"Apprendre Agilit�",
	L"Apprendre Sant�",
	// 11-15
	L"Apprendre Tir",
	L"Apprendre M�decin",
	L"Apprendre M�canique",
	L"Apprendre Commandement",
	L"Apprendre Explosif",
	// 16-20
	L"El�ve Force",
	L"El�ve Dext�rit�",
	L"El�ve Agilit�",
	L"El�ve Sant�",
	L"El�ve Tir",
	// 21-25
	L"El�ve M�decin",
	L"El�ve M�canique",
	L"El�ve Commandement",
	L"El�ve Explosif",
	L"Entraineur Force",
	// 26-30
	L"Entraineur Dext�rit�",
	L"Entraineur Agilit�",
	L"Entraineur Sant�",
	L"Entraineur Tir",
	L"Entraineur M�decin",
	// 30-35
	L"Entraineur M�canique",
	L"Entraineur Commandement",
	L"Entraineur Explosif",
};
STR16 Additional113Text[]=
{
	L"Jagged Alliance 2 v1.13 mode fen�tr� exige une profondeur de couleur de 16 bit ou moins.",

	// WANNE: Savegame slots validation against INI file
	L"Internal error in reading %s slots from Savegame: Number of slots in Savegame (%d) differs from defined slots in ja2_options.ini settings (%d)",
	L"Mercenaire (MAX_NUMBER_PLAYER_MERCS) / Vehicle (MAX_NUMBER_PLAYER_VEHICLES)", 
	L"Ennemi (MAX_NUMBER_ENEMIES_IN_TACTICAL)", 
	L"Cr�ature (MAX_NUMBER_CREATURES_IN_TACTICAL)", 
	L"Milice (MAX_NUMBER_MILITIA_IN_TACTICAL)", 
	L"Civil (MAX_NUMBER_CIVS_IN_TACTICAL)",
};

// SANDRO - Taunts (here for now, xml for future, I hope)
STR16 sEnemyTauntsFireGun[]=
{
	L"Suce moi �a !",
	L"Prends toi �a !",
	L"Viens par l� !",
	L"T'es � moi !",
	L"Meurs !",
	L"T'as peur enfoir� ?",
	L"Ca va faire mal !",
	L"Viens la batard !",
	L"Allez viens ! J'ai pas toute la vie !",
	L"Vas voir ta m�re !",
	L"Je vais t'envoyer sous terre dans peu de temps !",
	L"Retourne chez ta m�re, looserr !",
	L"Hey, tu veux jouer ?!",
	L"T'aurais du rester chez toi, p'tit con !",
	L"Encul� !",
};

STR16 sEnemyTauntsFireLauncher[]=
{

	L"On va faire un barbecue ici.",
	L"Un cadeau d'la part du patron !",
	L"Bim Bam Boum !",
	L"Sourit, l'oiseau va sortir !",
};

STR16 sEnemyTauntsThrow[]=
{
	L"Attrape !",
	L"Et c'est partit !",
	L"Prend toi �� !",
	L"Et un pour toi",
	L"Mouhahaha.",
	L"Attrape �a sale porc!",
	L"Sa va faire mal !.",
};

STR16 sEnemyTauntsChargeKnife[]=
{
	L"J'vais d�couper ton cr�ne.",
	L"Viens voir papa.",
	L"Montre moi tes couilles !",
	L"Je vais te d�couper en pi�ces !",
	L"Hannibal Lecter, ppfft tu me connais pas !",
};

STR16 sEnemyTauntsRunAway[]=
{
	L"On est vraiment dans un grosse merde...",
	L"Ils disent de rejoindre l'arm�e. Mais pas pour cette merde !",
	L"J'en ai assez.",
	L"Oh my God.",
	L"On n'est pas assez pay� pour �a !",
	L"C'est vraiment trop pour moi.",
	L"Je vais rammener quelques potes.",

};

STR16 sEnemyTauntsSeekNoise[]=
{
	L"T'as entendu !",
	L"Qui est l� ?",
	L"Qu'est ce que s'est ?",
	L"Hey ! What the...",

};

STR16 sEnemyTauntsAlert[]=
{
	L"Ils sont l� !",
	L"Yeah la partie peut commencer.",
	L"J'ai esp�r� que ceci n'arriverai jamais.",

};

STR16 sEnemyTauntsGotHit[]=
{
	L"Ouch !",
	L"Ugh !",
	L"Ca... �a fait mal !",
	L"You fuck !",
	L"Tu vas le regret.. uhh.. ter �a.",
	L"What the..!",
	L"Maintenant vous... m'avez �nerv� !",

};

//////////////////////////////////////////////////////
// HEADROCK HAM 4: Begin new UDB texts and tooltips
//////////////////////////////////////////////////////
STR16 gzItemDescTabButtonText[] =
{
	L"Description",
	L"G�n�ral",
	L"Avanc�s",
};

STR16 gzItemDescTabButtonShortText[] =
{
	L"Desc",
	L"Gen",
	L"Ava",
};

STR16 gzItemDescGenHeaders[] =
{
	L"Primaire",
	L"Secondaire",
	L"Co�t PA",
	L"Rafale / Auto",
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
	L"|P|a|g|e |d|e |d|e|s|c|r|i|p|t|i|o|n :\n \nMontre des informations textuelles de base sur cet objet.",
	L"|P|r|o|p|r|i|�|t|�|s |g|�|n|�|r|a|l|e|s :\n \nMontre des donn�es sp�cifiques de cet objet.",
	L"|P|r|o|p|r|i|�|t|�|s |a|v|a|n|c|�|e|s :\n \nMontre des bonus donn�s par cet objet.",
};

STR16 gzUDBHeaderTooltipText[]=
{
	L"|P|r|o|p|r|i|�|t|�|s |p|r|i|m|a|i|r|e|s :\n \nPropri�t�s et donn�es li�es � la classe de cet objet\n(Armes / Armures / etc).",
	L"|P|r|o|p|r|i|�|t|�|s |s|e|c|o|n|d|a|i|r|e|s :\n \nLes caract�ristiques suppl�mentaires de cet objet,\net/ou capacit�s secondaires possibles.",
	L"|C|o|�|t |e|n |P|A :\n \nCo�t en PA pour tirer ou manipuler cette arme.",
	L"|R|a|f|a|l|e |/ |A|u|t|o|m|a|t|i|q|u|e :\n \nDonn�es li�es au tir de cette arme en mode Rafale ou Auto.",
};

STR16 gzUDBGenIndexTooltipText[]=
{
	L"|P|r|o|p|r|i|�|t|� |i|c|�|n|e\n \nSurvol avec la souris pour r�v�ler le nom de la propri�t�.",
	L"|V|a|l|e|u|r |b|a|s|i|q|u|e\n \nValeurs de base donn�es par cet objet, excluant\nles bonus ou p�nalit�s li� aux accessoires ou munitions.",
	L"|B|o|n|u|s |d|e|s |a|c|c|e|s|s|o|i|r|e|s\n \nBonus ou p�nalit�s donn�e par les munitions ou accessoires.",
	L"|V|a|l|e|u|r |f|i|n|a|l|e\n \nValeur finale donn� par cette objet, incluant les\nbonus/p�nalit�s des accessoires et munitions.",
};

STR16 gzUDBAdvIndexTooltipText[]=
{
	L"Propri�t� ic�ne (survoler avec la souris pour voir le nom).",
	L"Bonus/p�nalit� donn� |d|e|b|o|u|t.",
	L"Bonus/p�nalit� donn� |a|c|c|r|o|u|p|i.",
	L"Bonus/p�nalit� donn� |c|o|u|c|h|�.",
	L"Bonus/p�nalit� donn�",
};

STR16 szUDBGenWeaponsStatsTooltipText[]=
{
	L"|P|r|�|c|i|s|i|o|n",
	L"|D|�|g|�|t",
	L"|P|o|r|t|�|e",
	L"|N|i|v|e|a|u |d|e |v|i|s|�|e",
	L"|A|g|g|r|a|n|d|i|s|s|e|m|e|n|t |d|e |l|a |l|u|n|e|t|t|e",
	L"|F|a|c|t|e|u|r |d|e |p|r|o|j|e|c|t|i|o|n",
	L"|C|o|u|v|e|r|t|u|r|e |d|u |f|l|a|s|h |d|u |c|a|n|o|n",
	L"|I|n|t|e|n|s|i|t|�",
	L"|F|i|a|b|i|l|i|t|�",
	L"|F|a|c|i|l|i|t|� |d|e |r|�|p|a|r|a|t|i|o|n",
	L"|P|o|r|t|�|e |m|i|n|i|m|u|m |p|o|u|r |b|o|n|u|s |d|e |v|i|s|�|e",
	L"|F|a|c|t|e|u|r |d|e |d|�|g|�|t|s",
	L"", // (12)
	L"|N|o|m|b|r|e |d|e |P|A| |p|o|u|r |m|e|t|t|r|e |e|n |j|o|u|e",
	L"|N|o|m|b|r|e |d|e |P|A| |p|o|u|r |t|i|r|e|r",
	L"|N|o|m|b|r|e |d|e |P|A| |t|i|r |e|n |R|a|f|a|l|e",
	L"|N|o|m|b|r|e |d|e |P|A| |t|i|r |e|n |A|u|t|o|m|a|t|i|q|u|e",
	L"|N|o|m|b|r|e |d|e |P|A| |p|o|u|r |r|e|c|h|a|r|g|e|r",
	L"|N|o|m|b|r|e |d|e |P|A| |p|o|u|r |r|e|c|h|a|r|g|e|r |m|a|n|u|e|l|l|e|m|e|n|t",
	L"|R|e|c|u|l |l|a|t|�|r|a|l",
	L"|R|e|c|u|l |v|e|r|t|i|c|a|l",
	L"|T|i|r |a|u|t|o|m|a|t|i|q|u|e |p|o|u|r |5 |P|A",
};

STR16 szUDBGenWeaponsStatsExplanationsTooltipText[]=
{
	L"\n \nD�termine si des balles tir�es par cette arme d�vieront\nloin de l'impact d'origine.\n \nEchelle: 0-100.\nValeur �lev�e recommand�e.",
	L"\n \nD�termine la quantit� moyenne de d�g�ts faits par\ndes balles tir�es de cette arme, avant\n de tenir compte de l'armure et de la p�n�tration d'armure.\n \nValeur �lev�e recommand�e.",
	L"\n \nDistance maximale (en cases) que vont parcourir les balles\ntir�es par cette arme avant de redescendre vers le sol.\n \nValeur �lev�e recommand�e.",
	L"\n \nCeci est le nombre de niveau de vis�e suppl�mentaire que\nvous pouvez ajouter en visant avec cette arme.\n \nR�duire le nombre de niveau de vis�e signifie que chaque\nniveau ajoute proportionnellement plus de pr�cision au tir.\nPar cons�quent, avoir peu de niveaux de vis�e vous\npermettera de garder une bonne pr�cision avec une vitesse\nde mise en joue �lev�e !\n \nValeur faible recommand�e.",
	L"\n \nUne valeur plus grande de *1.0, r�duit proportionnellement\nles erreurs de vis�e � distance.\n \nN'oubliez pas qu'un trop gros zoom sur une cible\nproche vous p�nalisera !\n \nLa valeur de 1.0 signifie qu'aucune lunette est install�e.",
	L"\n \nR�duit proportionnellement les erreurs de vis�e � distance.\n \nCes effets ne sont valables qu'� une distance donn�e,\net se dissipent ou disparaissent\n� une longue distance.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette propri�t� est en vigueur, l'arme\nne produit pas de flash lors du tir.\n \nLes ennemis ne seront plus en mesure de vous rep�rer\n� cause du flash du tir (mais ils\npourront toujours vous entendre !).",
	L"\n \nDistance (en cases) de l'intensit� sonore que fait votre arme\nlorsque vous tirez avec.\n \nLes ennemis plac�s en de�� de cette distance entendront\nvotre tir.\n \nValeur faible recommand�e.",
	L"\n \nD�termine la vitesse de d�terioration de cett arme\n� l'usage.\n \nValeur �lev�e recommand�e.",
	L"\n \nD�termine la difficult� de r�paration de cette arme.\n \nValeur �lev�e recommand�e.",
	L"\n \nPort�e minimum o� la lunette de vis�e fournit un bonus de vis�e.",
	L"\n \nFacteur de chance de toucher accord� par un laser.",
	L"", // (12)
	L"\n \nLe nombre de PA requis pour mettre en joue.\n \nQuand cette arme est pr�te, vous pouvez tirez plusieurs fois\nsans avoir de co�t suppl�mentaire.\n \nAnnule automatiquement cette op�ration si vous fa�tes des\nactions autre que pivoter ou tirer.\n \nValeur faible recommand�e.",
	L"\n \nLe nombre de PA requis pour effectuer\nune attaque simple avec cette arme.\n \nPour les fusils, c'est le co�t pour un tir\nsimple sans niveau de vis�e.\n \nSi cet icone est gris�, les tirs simples\n ne sont pas possible.\n \nValeur faible recommand�e.",
	L"\n \nLe nombre de PA requis pour tirer une Rafale.\n \nle nombre de balles tir�es pour chaque rafale est\nd�termin� par l'arme elle-m�me, et indiqu�\npar le nombre de balles sur cette icone.\n \nSi cette icone est gris�, le mode rafale \nn'est pas possible avec cette arme.\n \nValeur faible recommand�e.",
	L"\n \nLe nombre de PA requis pour tirer en Automatique.\n \nSi vous voulez tirez plus de balles,\ncela co�tera plus de PA.\n \nSi cette icone est gris�, le mode Auto\nn'est pas possible avec cette arme.\n \nValeur faible recommand�e.",
	L"\n \nLe nombre de PA requis pour recharger cette arme.\n \nValeur faible recommand�e.",
	L"\n \nLe nombre de PA requis pour recharger cette arme\nentre chaque tir.\n \nValeur faible recommand�e.",
	L"\n \nDistance � laquelle le canon va se d�placer horizontalement\napr�s chaque tir en mode Auto ou rafale.\n \nUn nombre positif indique qu'il se d�placera vers la droite.\nEt un nombre n�gatif pour la gauche.\n \nValeur proche de 0 recommand�e.",
	L"\n \nDistance � laquelle le canon va se d�placer verticalement\napr�s chaque tir en mode\nAuto ou rafale.\n \nUn nombre positif indique qu'il se d�placera vers le haut.\nEt un nombre n�gatif pour le bas.\n \nValeur proche de 0 recommand�e.",
	L"\n \nIndique le nombre de balles qui seront ajout�s\nau mode Auto tous les 5 PA que vous d�pensez.\n \nValeur �lev�e recommand�e.",
};

STR16 szUDBGenArmorStatsTooltipText[]=
{
	L"|V|a|l|e|u|r |d|e |p|r|o|t|e|c|t|i|o|n",
	L"|R|e|c|o|u|v|r|e|m|e|n|t",
	L"|T|a|u|x |d|e |d|�|g|r|a|d|a|t|i|o|n",
};

STR16 szUDBGenArmorStatsExplanationsTooltipText[]=
{
	L"\n \nCette propri�t� d'armure d�finit de combien elle\nabsorbe les d�g�ts de chaque attaque.\n \nN'oubliez pas que les attaques perforantes et\ndivers facteurs al�atoires peuvent alt�r�s\nla r�duction final des d�g�ts.\n \nValeur �lev�e recommand�e.",
	L"\n \nD�termine le recouvrement de l'armure\nsur votre corps.\n \nSi le recouvrement est inf�rieur � 100%, les attaques\nont une certaine chance de pass� � travers l'armure\nen causant de un maximum de d�g�ts.\n \nValeur �lev�e recommand�e.",
	L"\n \nIndique � quelle vitesse les conditions de l'armure\nvont chut�s, et qui est proportionnel aux\nd�g�ts subis.\n \nValeur faible recommand�e.",
};

STR16 szUDBGenAmmoStatsTooltipText[]=
{
	L"|T|a|u|x |d|e |p|�|n|�|t|r|a|t|i|o|n",
	L"|C|u|l|b|u|t|e |d|e |b|a|l|l|e",
	L"|P|r|e|-|I|m|p|a|c|t |E|x|p|l|o|s|i|o|n",
};

STR16 szUDBGenAmmoStatsExplanationsTooltipText[]=
{
	L"\n \nCeci est la capacit� de la balle � p�n�trer\nl'armure de la cible.\n \nAvec une valeur sup�rieure � 1.0, la balle r�duiera fortement\nla valeur de protection de l'armure touch�e.\n \nValeur �lev�e recommand�e.",
	L"\n \nD�termine le potentiel de la balle � faire des d�g�ts\nsur le corps apr�s avoir travers�e l'armure.\n \nAvec une valeur sup�rieure � 1.0, la balle fera de lourds d�g�ts\napr�s p�n�tration\nAvec une valeur inf�rieure � 1.0, la balle fera des d�g�ts moindre\napr�s p�n�tration.\n \nValeur �lev�e recommand�e.",
	L"\n \nMultiplicateur de potentiel de d�g�ts juste avant\nl'impact de la balle.\n \nAvec une valeur sup�rieure � 1.0, la balle fera de lourds d�g�ts\nUne valeur inf�rieure � 1.0 fera des d�g�ts moindre.\n \nValeur �lev�e recommand�e.",
};

STR16 szUDBGenExplosiveStatsTooltipText[]=
{
	L"|D|�|g|�|t|s",
	L"|D|�|g|�|t|s |�|t|o|u|r|d|i|s|a|n|t",
	L"|R|a|y|o|n |d|'|e|x|p|l|o|s|i|o|n",
	L"|R|a|y|o|n |d|'|e|x|p|l|o|s|i|o|n |�|t|o|u|r|d|i|s|a|n|t|e",
	L"|R|a|y|o|n |d|'|e|x|p|l|o|s|i|o|n |s|o|n|o|r|e",
	L"|D|�|b|u|t |r|a|y|o|n |g|a|z |l|a|c|r|y|m|o|g|�|n|e",
	L"|D|�|b|u|t |r|a|y|o|n |g|a|z |m|o|u|t|a||r|d|e",
	L"|D|�|b|u|t |r|a|y|o|n |f|l|a|s|h |l|u|m|i|n|e|u|x",
	L"|D|�|b|u|t |r|a|y|o|n |f|u|m|�|e",
	L"|D|�|b|u|t |r|a|y|o|n |i|n|c|e|n|d|i|e",
	L"|F|i|n |r|a|y|o|n |g|a|z |l|a|c|r|y|m|o|g|�|n|e",
	L"|F|i|n |r|a|y|o|n |g|a|z |m|o|u|t|a||r|d|e",
	L"|F|i|n |r|a|y|o|n |f|l|a|s|h |l|u|m|i|n|e|u|x",
	L"|F|i|n |r|a|y|o|n |f|u|m|�|e",
	L"|F|i|n |r|a|y|o|n |i|n|c|e|n|d|i|e",
	L"|D|u|r|�|e |d|e |l|'|e|f|f|e|t",
	L"|I|n|t|e|n|s|i|t|� |s|o|n|o|r|e",
	L"|V|o|l|a|t|i|l|i|t|�",
};

STR16 szUDBGenExplosiveStatsExplanationsTooltipText[]=
{
	L"\n \nLa quantit� de d�g�ts caus�s par cet explosif.\n \nNotez que les explosifs de type 'explosion' livrent\ndes d�g�ts seulement une fois (quand ils explosent), tandis que\nles explosifs � effets prolong�s livrent cette quantit� de d�g�ts\n� chaque tour jusqu'� ce que l'effet se dissipe.\n \nValeur �lev�e recommand�e.",
	L"\n \nLa quantit� de d�g�ts non mortels (�tourdissant) caus�s\npar cet explosif.\n \nNotez que les explosifs de type 'explosion' livrent des d�g�ts seulement\nune fois (quand ils explosent), tandis que les explosifs � effets\nprolong�s livrent cette quantit� de d�g�ts\nd'�tourdissement � chaque tour jusqu'� ce que l'effet se dissipe.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de l'explosion caus� par cet objet.\n \nPlus les ennemis seront loin du centre de l'explosion\nmoins ils subiront de d�g�ts.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de l'etourdissement caus� par cet objet.\n \nPlus les ennemis seront loin du centre de l'explosion\nmoins ils subiront de d�g�ts.\n \nValeur �lev�e recommand�e.",
	L"\n \nDistance du parcours du bruit caus� par ce pi�ge.\n Les ennemis plac�s en de�� de cette distance entendront\n votre pi�ge et sonneront l'alerte.\n \nValeur faible recommand�e.",
	L"\n \nRayon de d�part lib�r� par la lacrymog�ne.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet (afficher ci-dessous).\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de d�part lib�r� par le gaz moutarde.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet (afficher ci-dessous).\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de d�part �mis par le flash lumineux.\n \nLes cases autours du centre de l'effet deviendront tr�s\nlumineuses, quand celles autours ne seront que\nl�g�rement plus lumineuse que la normale.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet (afficher ci-dessous).\n \nA noter aussi que contrairement aux autres explosifs qui\nont une dur�e d'effet, le flash lumineux faiblit\nau cours du temps, avant de dispara�tre.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de d�part lib�r� par la fum�e.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz. plus important,\nquiconque se trouvant � l'int�rieur de la fum�e aura des difficult�s � se rep�rer,\net perdra aussi sa visibilit�.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet (afficher ci-dessous).\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de d�part caus�s par les flammes.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet (afficher ci-dessous).\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de fin lib�r� par la lacrymog�ne avant\nqu'il ne se dissipe.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz.\n \nA noter �galement le d�but du rayon et la dur�e de\nl'effet.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de fin lib�r� par le gaz moutarde avant\nqu'il ne se dissipe.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz.\n \nA noter �galement le d�but du rayon et la dur�e de\nl'effet.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de fin �mis par le flash lumineux.\n \nLes cases autours du centre de l'effet deviendront tr�s\nlumineuses, quand celles autours ne seront que\nl�g�rement plus lumineuse que la normale.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet.\n \nA noter aussi que contrairement aux autres explosifs qui\nont une dur�e d'effet, le flash lumineux faiblit\nau cours du temps, avant de dispara�tre.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de fin lib�r� par la fum�e.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour,\n� moins qu'ils portent un masque � gaz. plus important,\nquiconque se trouvant � l'int�rieur de la fum�e aura des difficult�s � se rep�rer,\net perdra aussi sa visibilit�.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet.\n \nValeur �lev�e recommand�e.",
	L"\n \nRayon de d�part caus�s par les flammes.\n \nLes ennemis plac�s en de�� de cette distance subiront\ndes d�g�ts et des �tourdissements � chaque tour.\n \nA noter �galement la fin du rayon et la dur�e de\nl'effet.\n \nValeur �lev�e recommand�e.",
	L"\n \nDur�e des effets de l'explosion.\n \nChaque tour, le rayon s'aggrandit d'un case dans\n toutes les directions, avant d'atteindre\nla vlauer de fin de rayon indiqu�e.\n \nQuand la dur�e a �t� atteinte, les effets se\ndissipent compl�tement.\n \nA noter aussi que contrairement aux autres explosifs qui\nont une dur�e d'effet, le flash lumineux faiblit\nau cours du temps, avant de dispara�tre.\n \nValeur �lev�e recommand�e.",
	L"\n \nDistance (en cases) en de�� de laquelle chaque\nsoldats et mercs peuvent entendre l'explosion.\n \nLes ennemis qui entendent cette explosion peuvent alerter de\nvotre pr�sence.\n \nValeur faible recommand�e.",
	L"\n \nCette valeur repr�sente la chance (sur 100) que cette\nexplosif explose spontan�ment chaque fois qu'il est endommag�\n(Par exemple, quand il y a d'autres explosions � proximit�).\n \nTransporter des explosifs hautement volatiles en combat\nest donc extr�mement risqu� et devrait �tre �vit�e.\n \nEchelle: 0-100.\nValeur faible recommand�e.",
};

STR16 szUDBGenSecondaryStatsTooltipText[]=
{
	L"|B|a|l|l|e|s |t|r|a|�|a|n|t|e|s",
	L"|M|u|n|i|t|i|o|n|s |A|n|t|i|-|T|a|n|k",
	L"|I|g|n|o|r|e |l|'|a|r|m|u|r|e",
	L"|M|u|n|i|t|i|o|n|s |a|c|i|d|e|s",
	L"|M|u|n|i|t|i|o|n|s |c|a|s|s|a|n|t |s|e|r|r|u|r|e",
	L"|R|�|s|i|s|t|a|n|t |a|u |e|x|p|l|o|s|i|f|s",
	L"|W|a|t|e|r|p|r|o|o|f",
	L"|E|l|e|c|t|r|o|n|i|q|u|e",
	L"|M|a|s|q|u|e |� |g|a|z",
	L"|B|e|s|o|i|n |d|e |p|i|l|e|s",
	L"|P|e|u|t |c|r|o|c|h|e|t|e|r |l|e|s |s|e|r|r|u|r|e|s",
	L"|P|e|u|t |c|o|u|p|e|r |d|e|s |f|i|l|s",
	L"|P|e|u|t |c|a|s|s|e|r |l|e|s |v|e|r|r|o|u|s",
	L"|D|�|t|e|c|t|e|u|r |d|e |m|�|t|a|l",
	L"|D|�|c|l|e|n|c|h|e|u|r |� |d|i|s|t|a|n|c|e",
	L"|D|�|t|o|n|a|t|e|u|r |� |d|i|s|t|a|n|c|e",
	L"|M|i|n|u|t|e|r|i|e |d|e| |d|�|t|o|n|a|t|e|u|r",
	L"|C|o|n|t|i|e|n|t |d|e |l|'|e|s|s|e|n|c|e",
	L"|T|r|o|u|s|s|e |� |o|u|t|i|l|s",
	L"|O|p|t|i|q|u|e|s |t|h|e|r|m|i|q|u|e|s",
	L"|D|i|s|p|o|s|i|t|i|f |� |r|a|y|o|n|s |X",
	L"|C|o|n|t|i|e|n|t |d|e |l|'|e|a|u |p|o|t|a|b|l|e",
	L"|C|o|n|t|i|e|n|t |d|e |l|'|a|l|c|o|o|l",
	L"|T|r|o|u|s|s|e |d|e |1|e|r |s|o|i|n|s",
	L"|T|r|o|u|s|s|e |d|e |s|o|i|n|s",
	L"|B|o|m|b|e |p|o|u|r |s|e|r|r|u|r|e |d|e |p|o|r|t|e",
};

STR16 szUDBGenSecondaryStatsExplanationsTooltipText[]=
{
	L"\n \nCes munitions, en mode Auto ou rafale,ont la propri�t� d'�tre des\ndes balles tra�antes.\n \nLa lumi�re qu'apporte les balles tra�antes lors d'une rafale permet d'avoir une\nmeilleur pr�cision et d'�tre ainsi plus mortel malgr� le recul de l'arme.\n \nDe plus, ces balles cr�ent un halo lumineux permettant de r�v�ler\nl'ennemi dans la nuit. Cependant, elles r�v�lent aussi\nla position du tireur � l'ennemi !\n \nLes balles tra�antes d�sactive automatiquement\nle cache-flamme install� sur l'arme utilis�.",
	L"\n \nCes munitions peuvent faire des d�g�ts aux tanks.\n \nLes munitions SANS cette propri�t� ne feront aucun d�g�ts quelque soit le tanks.\n \nM�me avec cette propri�t�, n'oubliez pas que la plupart des armes\nne feront que peu de d�g�ts, donc n'en\nabusez pas.",
	L"\n \nCes munitions ignorent compl�tement l'armure.\n \nQuand vous tirez sur un ennemi avec une armure, cela sera\ncomme s'il n'en avait pas,\npermettant ainsi de faire un maximum de d�g�ts !",
	L"\n \nLorsque cette munition frappe une cible avec une armure,\n \ncette derni�re se d�gradera tr�s rapidement.\n \nCeci peut potentiellement retirer l'armure de la cible !",
	L"\n \nCette munition est exceptionnelle pour casser les serrures.\n \nTirez directement sur la serrure de la porte ou du containeur\npour faire de lourds d�g�ts sur le m�canisme.",
	L"\n \nCette armure est trois fois plus r�sistante\ncontre les explosifs que sa valeur indiqu�e.\n \nQuand une explosion heurte cette armure, la valeur de sa protection\nest consid�r� comme trois fois plus �lev�e que celle\nindiqu�e.",
	L"\n \nCet objet est imperm�able � l'eau. Il ne\nrecevra pas de d�g�ts caus� par l'eau.\n \nLes objets SANS cette propri�t� vont progressivement se d�teriorer\nsi la personne nage avec.",
	L"\n \nCet objet est de nature �lectronique, et contient\ndes circuits complexes.\n \nLes objets �lectroniques sont intrins�quement plus difficiles\n� r�parer, d'autant plus si vous n'avez pas les comp�tences n�cessaires.",
	L"\n \nLorsque cet objet est port� sur le visage,\nil le prot�gera de tous les gaz nocifs.\n \nNotez que certains gaz sont corrosifs, et pourrait bien\np�n�trer � travers le masque...",
	L"\n \nCet objet requi�re des piles. Sans les piles\nvous ne pouvez pas activer ces principales caract�ristiques.\n \nPour utiliser un jeu de piles, attachez-les �\ncette objet comme si vous m'�tiez une lunette de vis�e � votre arme.",
	L"\n \nCet objet peut �tre utilis� pour crocheter des portes\nou des containeurs v�rouill�s.\n \nLe crochetage est silencieux, mais n�cessite des comp�tences en M�canique.",
	L"\n \nCet objet peut �tre utilis� pour couper les cl�tures de fil.\n \nCela autorise le mercenaire a pass� � travers\ndes zones s�curis�s, pour �ventuellement surprendre l'ennemi !",
	L"\n \nCet objet peut �tre utilis� pour frapper des portes\nou des containeurs v�rouill�s.\n \nFrapper des serrures requi�re une grande Force,\ng�n�re beaucoup de bruits, et peut facilement\nvous �puisez. Cependant, c'est une bonne fa�on\nd'ouvrir une serrure sans avoir des talents en M�caniques\nou des outils ad�quates.",
	L"\n \nCet objet peut �tre utilis� pour d�tecter des objets\nm�talliques enfouis sous terre.\n \nNaturellement, sa fonction premi�re est de d�tecter les mines\nsans que vous ayez les comp�tences n�cessaires pour les rep�rer\n� l'oeil nu.\n \nPeut-�tre trouverez-vous certains tr�sors cach�s...",
	L"\n \nCet objet peut �tre utilis� pour faire exploser une bombe\nqui aura �t� amor��e par un d�tonateur.\n \nPlantez la bombe en 1er, puis utilisez votre\nD�clencheur � distance pour l'activer quand c'est le bon moment.",
	L"\n \nQuand il est attach� � un dispositif explosif et positionn�\ndans le bon sens, ce d�tonateur peut �tre d�clench�\npar un d�tonateur (s�par�) � distance.\n \nLes d�tonateurs � distance sont excellent pour faire des pi�ges,\ncar ils se d�clenchent quand vous le souhaitez.\n \nDe plus, vous avez tout le temps pour d�guerpir !",
	L"\n \nQuand il est attach� � un dispositif explosif et positionn�\ndans le bon sens, ce d�tonateur va lancer un compte � rebours\nd�fini, et explosera quand le temps sera �coul�.\n \nCes d�tonateurs avec minuterie sont pas chers et facile � installer,\nmais vous aurez besoin de temps pour pouvoir\nd�guerpir de l� !",
	L"\n \nCet objet contient de l'essence.\n \nIl pourrait arriv� � point nomm� si vous aviez besoin\nde remplir un r�servoir d'essence...",
	L"\n \nCet objet contient divers outils qui peuvent\n�tre utilis�s pour r�parer d'autres objets.\n \nUne trousse � outil est toujours n�cessaire lorsque\nvous �tes en mission de R�paration.",
	L"\n \nQuand �quip� sur le visage, cet objet donne\nla capacit� de rep�rer les ennemis � travers les murs,\ngr�ce � leur signature thermique.",
	L"\n \nCe merveilleux dispositif peut �tre utilis� pour rep�rer\nles ennemis en utilisant les rayons X.\n \nCela r�velera tous les ennemis � une certaine distance\npour une courte p�riode de temps.\n \nGardez cela loin de vos organes reproductifs !",
	L"\n \nCet objet contient de l'eau potable bien fraiche.\nA utillis� lorsque vous �tes assoiff�.",
	L"\n \nCet objet contient du digestif, gn�le, eau-de-vie, liqueur,\nqu'importe comment vous appelez cela.\n \nA utlisez avec mod�ration. Boire ou conduire !\nPeut causer une cirrhose du foie.",
	L"\n \nIl s'agit d'un kit m�dical basic, contenant les ustensibles\nrequis pour faire une intervention m�dicale basic.\n \nIl peut �tre utilis� pour soigner un mercenaire bless�\net emp�cher le saignement.\n \nPour une gu�rison optimale, utlisez une v�ritable trousse de soins\net/ou beaucoup de repos.",
	L"\n \nIl s'agit d'un kit m�dicale complet, qui peut �tre utilis�\npour une op�ration chirurgicale ou autre cas s�rieux.\n \nUne trousse de soins est toujours n�cessaire lorsque vous\n�tes en mission de Docteur.",
	L"\n \nCet objet peut �tre utilis� pour faire sauter les\nportes ou containeurs v�rouill�s.\n \nDes comp�tences en explosion sont n�cessaire pour\n�viter une explosion pr�matur�e.\n \nExploser les serrures est relativement facile\net rapide � faire. Cependant, c'est tr�s bruyant\net dangereux pour la plupart des mercernaires.",
};

STR16 szUDBAdvStatsTooltipText[]=
{
	L"|F|a|c|t|e|u|r |d|e |p|r|�|c|i|s|i|o|n",
	L"|F|l|a|t |S|n|a|p|s|h|o|t |M|o|d|i|f|i|e|r",
	L"|P|e|r|c|e|n|t |S|n|a|p|s|h|o|t |M|o|d|i|f|i|e|r",
	L"|F|l|a|t |A|i|m|i|n|g |M|o|d|i|f|i|e|r",
	L"|F|a|c|t|e|u|r |p|o|u|r|c|e|n|t|a|g|e |d|e |v|i|s|�|e",
	L"|F|a|c|t|e|u|r |n|i|v|e|a|u |d|e |v|i|s|�|e |a|u|t|o|r|i|s|�|e",
	L"|A|i|m|i|n|g |C|a|p |M|o|d|i|f|i|e|r",
	L"|F|a|c|t|e|u|r |d|e |p|r|i|s|e |e|n |m|a|i|n |d|e |l|'|a|r|m|e",
	L"|F|a|c|t|e|u|r |c|o|m|p|e|n|s|a|t|i|o|n |d|e |c|h|u|t|e",
	L"|F|a|c|t|e|u|r |p|o|u|r|s|u|i|t|e |c|i|b|l|e",
	L"|F|a|c|t|e|u|r |d|e |d|�|g|�|t|s",
	L"|F|a|c|t|e|u|r |d|e |d|�|g|�|t|s |d|e |m|�|l|�|e",
	L"|F|a|c|t|e|u|r |d|e |d|i|s|t|a|n|c|e",
	L"|F|a|c|t|e|u|r |a|g|g|r|a|n|d|i|s|e|m|e|n|t |d|e |l|a |p|o|r|t|�|e",
	L"|F|a|c|t|e|u|r |d|e |p|r|o|j|e|c|t|i|o|n",
	L"|F|a|c|t|e|u|r |d|e |r|e|c|u|l |h|o|r|i|z|o|n|t|a|l",
	L"|F|a|c|t|e|u|r |d|e |r|e|c|u|l |v|e|r|t|i|c|a|l",
	L"|F|a|c|t|e|u|r |d|e |c|o|n|t|r|e |f|o|r|c|e |m|a|x|i|m|u|m",
	L"|F|a|c|t|e|u|r |d|e |p|r|�|c|i|s|i|o|n |d|e |c|o|n|t|r|e |f|o|r|c|e",
	L"|F|a|c|t|e|u|r |d|e |f|r|�|q|u|e|n|c|e |d|e |c|o|n|t|r|e |f|o|r|c|e",
	L"|F|a|c|t|e|u|r |d|e |P|A |t|o|t|a|l",
	L"|F|a|c|t|e|u|r |d|e |P|A |m|i|s|e |e|n |j|o|u|e",
	L"|F||a|c|t|e|u|r |d|e |P|A |e|n |a|t|t|a|q|u|e |s|i|m|p|l|e",
	L"|F||a|c|t|e|u|r |d|e |P|A |e|n |R|a|f|a|l|e",
	L"|F||a|c|t|e|u|r |d|e |P|A |e|n |A|u|t|o",
	L"|F||a|c|t|e|u|r |d|e |P|A |p|o|u|r |r|e|c|h|a|r|g|e|r",
	L"|F|a|c|t|e|u|r |t|a|i|l|l|e |m|u|n|i|t|i|o|n",
	L"|F|a|c|t|e|u|r |t|a|i|l|l|e |R|a|f|a|l|e",
	L"|C|a|c|h|e|-|f|l|a|m|m|e",
	L"|F|a|c|t|e|u|r |i|n|t|e|n|s|i|t|� |s|o|n|o|r|e",
	L"|F|a|c|t|e|u|r |t|a|i|l|l|e |o|b|j|e|t",
	L"|F|a|c|t|e|u|r |d|e |f|i|a|b|i|l|i|t|�",
	L"|C|a|m|o|u|f|l|a|g|e |e|n |f|o|r|�|t",
	L"|C|a|m|o|u|f|l|a|g|e |u|r|b|a|i|n ",
	L"|C|a|m|o|u|f|l|a|g|e |d|�|s|e|r|t",
	L"|C|a|m|o|u|f|l|a|g|e |n|e|i|g|e",
	L"|F|a|c|t|e|u|r |d|e |d|i|s|c|r|�|t|i|o|n",
	L"|F|a|c|t|e|u|r |d|i|s|t|a|n|c|e |a|u|d|i|t|i|v|e",
	L"|F|a|c|t|e|u|r |v|i|s|i|o|n |g|�|n|�|r|a|l|e",
	L"|F|a|c|t|e|u|r |v|i|s|i|o|n |n|o|c|t|u|r|n|e",
	L"|F|a|c|t|e|u|r |v|i|s|i|o|n |d|e |j|o|u|r",
	L"|F|a|c|t|e|u|r |v|i|s|i|o|n |l|u|m|i|�|r|e |i|n|t|e|n|s|e",
	L"|F|a|c|t|e|u|r |v|i|s|i|o|n |s|o|u|s|-|s|o|l",
	L"|V|i|s|i|o|n |e|n |t|u|n|n|e|l ",
	L"|C|o|n|t|r|e|-|f|o|r|c|e |m|a|x|i|m|u|m",
	L"|F|r|�|q|u|e|n|c|e |C|o|n|t|r|e|-|f|o|r|c|e",
	L"|B|o|n|u|s |c|h|a|n|c|e |d|e |t|o|u|c|h|e|r",
	L"|B|o|n|u|s |d|e |v|i|s|�|e",
};

// Alternate tooltip text for weapon Advanced Stats. Just different wording, nothing spectacular.
STR16 szUDBAdvStatsExplanationsTooltipText[]=
{
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie la valeur de sa pr�cision.\n \nLe gain en pr�cision permet � l'arme de pouvoir toucher une cible\n� des distances plus �lev�es plus souvent\n \nEchelle : -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la pr�cision du tireur\npour un tir avec une arme � distance de la\nvaleur suivante.\n \nEchelle: -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la pr�cision du tireur\npour un tir avec une arme � distance avec un pourcentage\ncalcul� � partir de sa pr�cision initiale.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie le gain de pr�cision pris �\nchaque niveau de vis�e, de la valeur suivante.\n \nEchelle : -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie le gain de pr�cision pris �\nchaque niveau de vis�e, d'un pourcentage calcul�\n� partir de sa pr�cision initiale.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie le nombre de niveau de\nvis�e que cette arme peut avoir.\n \nR�duire le nombre de niveau de vis�e\nsignifie que chaque niveau ajoute proportionnellement plus\nde pr�cision au tir.\nPar cons�quent, m�me les bas niveaux de vis�e vous permetterons de\ngarder une bonne pr�cision avec une vitesse pour viser �lev�e !\n \nValeur faible recommand�e.",
	L"\n \nCet objet modifie la pr�cision maximale du tireur\narm� d'une arme � distance, avec un pourcentage\nbas� sur sa pr�cision initiale.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme � distance, cet objet modifie sa\ndifficult� de manipulation.\n \nUne meilleure prise en main permet une meilleure pr�cision de l'arme,\navec ou sans niveaux de vis�e suppl�mentaires.\n \nNotez que c'est bas� sur le facteur de prise en main des armes,\nqui est plus �lev� pour les fusils et armes lourdes que les\npistolets et armes l�g�res.\n \nValeur faible recommand�e.",
	L"\n \nCet objet modifie la difficult� des tirs\nhors de la port�e de l'arme.\n \nUne valeur �lev�e peut augmenter la port�e maximale\nde l'arme de quelques cases.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la difficult� de touch�\nune cible en mouvement avec une arme � distance.\n \nUne valeur �lev�e peut vous aider � toucher\nune cible en mouvement, m�me � distance.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la puissance d'impact de\nvotre arme de la valeur suivante.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la puissance d'impact de\nvotre arme de m�l�e de la valeur suivante.\n \nCeci s'applique uniquement aux armes de m�l�e, tranchantes\nou contondantes.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie sa port� effective.\n \nLa port�e maximale dicte essentiellement dans quelle mesure une balle\ntir�e par l'arme peut voler avant de commencer � tomber\nbrusquement vers le sol.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nfournit un aggrandissement suppl�mentaire, r�ussisant des coups\nplus facilement que la normale.\n \nNotez qu'un facteur d'aggrandissment trop �lev�e est pr�judiciable\nquand la cible est plus PROCHE que la distance optimale.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nprojette un point sur la cible, rendant le tir plus facile.\n \nCette projection est seulement utile � une certaine distance\n, au del� elle diminue puis �ventuellement dispara�t.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance ayant\ndes modes Rafale ou tir Auto, cet objet modifie\nle recul horizontal de l'arme par le\npourcentage suivant.\n \nR�duire le recul permet de garder plus facilement le canon\npoint� sur la cible pendant la salve.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance ayant\ndes modes Rafale ou tir Auto, cet objet modifie\nle recul vertical de l'arme par le\npourcentage suivant.\n \nR�duire le recul permet de garder plus facilement le canon\npoint� sur la cible pendant la salve.\n \nValeur faible recommand�e.",
	L"\n \nCet objet modifie la capacit� du tireur � faire\nface au recul durant une salve en mode Rafale ou Auto.\n \nUne valeur �lev�e permet d'aider le tireur a controler une arme\navec un fort recul, m�me s'il a peu de Force.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la capacit� du tireur � compenser\nle recul durant une salve en mode Rafale ou Auto.\n \nUne valeur �lev�e permet de corriger le recul pour garder le canon\nsur la cible, m�me � longue distance,rendant ainsi la salve\nplus pr�cise.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie la capacit� du tireur � adapter\n� chaque fr�quence l'effort de compensation du recul durant une\nsalve en mode Rafale ou Auto.\n \nUne fr�quence �lev�e de compensation permet une salve tr�s pr�cise,\net ainsi permettre des tirs en Rafale et Auto � tr�s longues port�es.\n \nValeur �lev�e recommand�e.",
	L"\n \nCet objet modifie directement le nombre de PA\nque le mercenaire a durant chaque d�but de tour.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie le co�t en PA pour mettre en joue.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme, cet objet\nmodifie le co�t en PA pour faire une attaque simple.\n \nNotez que pour les armes ayant un mode Auto/Rafale, le\nco�t est directement influenc� par ce facteur !\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance ayant\nun mode Rafale, cet objet modifie le co�t en PA d'un tir en Rafale.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance ayant\nun mode Auto, cet objet modifie le co�t en PA d'un tir en Auto.\n \nNotez que cela ne modifie pas le co�t suppl�mentaire\npour ajouter des balles � la salve, mais seulement\nle co�t initiale d'une salve.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie le co�t en PA pour recharger.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nchange la taille des munitions qui peuvent �tre charg�\ndans l'arme.\n \nCette arme peut maintenant accepter des tailles plus ou moins grandes de munitions\nayant un m�me calibre.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie le nombre de balles tir�\npar cette arme en Rafale.\n \nSi cette arme n'a pas de mode Rafale, et que la\nvaleur est positive, alors cet objet donnera � l'arme la possibilit�\nde tirer en mode Rafale.\n \nInversement, si il y a un mode Rafale\net une valeur n�gative, cela peut retirer le mode Rafale.\n \nValeur �lev�e g�n�ralement recommand�e. Gard�e bien � l'esprit\nque le mode Rafale est l� pour conserver les munitions...",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nva cacher le flash du canon.\n \nCela permettera au tireur de ne pas sa faire rep�rer\net de rester � couvert si il l'est.\nChose important de nuit...",
	L"\n \nLorsque attach� � une arme, cet objet\nmodifie la distance � laquelle un tir sera entendu par les\nennemis et les mercenaires.\n \nSi ce facteur modifie l'intensit� sonore de l'arme � 0\n, elle deviendra alors int�dectable.\n \nValeur faible recommand�e.",
	L"\n \nCet objet modifie la taille de n'importe quel objet\npouvant �tre attach�.\n \nLa taille est importante dans le Nouveau Syst�me d'Inventaire,\no� les poches n'acceptent qu'une taille et des formes sp�cifiques.\n \nAugmenter la taille d'un objet peut le rendre trop gros pour des poches.\n \nInversement, r�duire sa taille peut permettre de l'ins�rer dans plus de poches,\net les poches seront � m�me de contenir plus d'objets.\n \nValeur faible g�n�ralement recommand�e.",
	L"\n \nLorsque attach� � une arme, cet objet modifie la valeur\nde fiabilit� de l'arme.\n \nSi positive, l'�tat de l'arme se d�t�riore moins\nrapidement si utilis� en combat. Mais hors combat elle\nse d�t�riore plus rapidement.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie le camouflage en zone foresti�re du porteur.\n \nPour avoir un facteur de camouflage efficace en for�t\nvous devez �tre pr�s d'arbres ou d'herbes hautes.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie le camouflage en zone urbaine du porteur.\n \nPour avoir un facteur de camouflage efficace en zone urbaine\nvous devez �tre pr�s de bat�ments.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie le camouflage en zone d�sertique du porteur.\n \nPour avoir un facteur de camouflage efficace en zone d�sertique\nvous devez �tre pr�s du sable ou d'une v�g�tation d�sertique.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie le camouflage en zone enneig�e du porteur.\n \nPour avoir un facteur de camouflage efficace en zone enneig�e\nvous devez �tre pr�s de cases enneig�s.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie la discr�tion du porteur en rendant le mercenaire\nplus difficile � entendre lorsqu'il se d�place en mode silencieux.\n \nNotez que cela ne change en rien la visibilit� du mercenaire,\nmais seulement la quantit� de sons �mis lors d'un d�placement en silence.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet\nmodifie l'audition du porteur du pourcentage suivant.\n \nUne valeur positive rend possible l'�coute de sons\nprovenant de longues distances.\n \nInversement, une valeur n�gative d�t�riore l'audition du porteur.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nla vision du porteur.\n \nModification de la vision dans toutes les conditions.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nla vision du porteur.\n \nModification de la vision lorsqu'il y a peu de lumi�re ambiante.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nla vision du porteur.\n \nModification de la vision lorsque l'intensit� de la lumi�re\nest normale ou forte.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nla vision du porteur.\n \nModification de la vision lorsque l'intensit� de la lumi�re est tr�s forte.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nla vision du porteur.\n \nModification de la vision lorsque vous �tes dans un sous-sol sombre.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� ou port� � un autre objet, cet objet modifie\nle champs de vision du porteur.\n \nR�duisant le champs de vision de chaque cot�.\n \nValeur faible recommand�e.",
	L"\n \nHabilit� du tireur � faire face au recul\nlors d'un tir en mode Rafale ou Auto.\n \nValeur �lev�e recommand�e.",
	L"\n \nFr�quence de recalcule du tireur pour ajuster la force\nqu'il doit mettre pour contrer le recul de l'arme, lors d'un tir\nen mode Rafale ou Auto.\n \nUne fr�quence faible rend la salve plus pr�cise en supposant que\nle tireur puisse surmonter le recul correctement.\n \nValeur faible recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie sa chance de toucher la cible (CTH).\n \nAugmenter son CTH permet de toucher plus souvent\nune cible,en supposant que le tireur a bien vis�.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque attach� � une arme de distance, cet objet\nmodifie ses bonus de vis�e.\n \nAugmenter les bonus de vis�es permet de toucher\nune cible � longue distance plus souvent, en supposant\nque le tireur a bien vis�.\n \nValeur �lev�e recommand�e.",
};

STR16 szUDBAdvStatsExplanationsTooltipTextForWeapons[]=
{
	L"\n \nLa pr�cision de cette arme a �t� modifi�\npar une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nAugmenter la pr�cision permet de toucher une cible\n� longue distance plus souvent.\n \nEchelle: -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la pr�cision du tireur\n,de n'importe quel mode de tir, de la valeur suivante.\n \nEchelle: -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la pr�cision du tireur\n,de n'importe quel mode de tir, du pourcentage suivant.\nPourcentage bas� sur la pr�cision initiale du tireur.\n \nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la quantit� de pr�cision gagn�e\n� chaque niveau de vis�e de la valeur suivante.\n \nEchelle: -100 to +100.\nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la quantit� de pr�cision gagn�e\n� chaque niveau de vis�e du pourcentage suivant.\nPourcentage bas� sur la pr�cision initiale du tireur.\n \nValeur �lev�e recommand�e.",
	L"\n \nLe nombre de niveaux de vis�e suppl�mentaires permis par\ncette arme a �t� modifi� par une munition, un accessoire\n, ou bien int�gr� dans les attributs.\nSi le nombre de niveau de vis�e a baiss�, c'est que l'arme est\nplus rapide � viser sans perdre en pr�cision.\n \nInversement, si le nombre de vis�e a augment�,l'arme sera\nplus lente � viser sans perdre en pr�cision.\n \nValeur faible recommand�e.",
	L"\n \nCette arme modifie la pr�cision maximum du tireur\nbas� sur un pourcentage de la pr�cision initiale maximale.\n \nValeur �lev�e recommand�e.",
	L"\n \nLes accessoires ou les caract�ristiques de l'arme modifient\nsa difficult� de prise en main.\n \nUne meilleure prise en main l'arme plus pr�cise,\navec ou sans niveaux de vis�e suppl�mentaires.\n \nNotez que c'est bas� sur le facteur de prise en main des armes\n,qui est plus �lev� pour les fusils et armes lourdes que\nles pistolets et armes l�g�res.\n \nValeur faible recommand�e.",
	L"\n \nL'habilit� de l'arme � compenser les tirs\nqui sont hors de port�e est modifi� par un\naccessoire ou les caract�ristiques de l'arme.\n \nUne valeur �lev�e peut augmenter la port�e maximale\nde l'arme de quelques cases.\n \nValeur �lev�e recommand�e.",
	L"\n \nL'habilit� de l'arme � toucher une cible en mouvement\n� distance a �t� modifi� par un accessoire ou\nun attribut inh�rent � l'arme.\n \nUne valeur �lev�e peut vous aider � toucher\nune cible en mouvement, m�me � distance.\n \nValeur �lev�e recommand�e.",
	L"\n \nLa puissance d'impact de votre arme a �t� modifi�\npar une munition, un accessoire ou attribut inh�rent � l'arme.\n \nValeur �lev�e recommand�e.",
	L"\n \nLa puissance d'impact de votre arme de m�l�e a �t� modifi�\npar une munition, un accessoire ou attribut inh�rent � l'arme.\n \nCeci s'applique uniquement aux armes de m�l�e, tranchantes\nou contondantes.\n \nValeur �lev�e recommand�e.",
	L"\n \nLa port�e maximum de votre arme a �t� augment� ou diminu�\ngr�ce � une munition, un accessoire ou attribut inh�rent � l'arme.\n \nLa port�e maximale dicte essentiellement dans quelle mesure une balle\ntir�e par l'arme peut voler avant de commencer � tomber\nbrusquement vers le sol.\n \nValeur �lev�e recommand�e.",
	L"\n \nCette arme est �quip�e d'une vis�e optique,\nrendant les tirs � distance plus facile � r�aliser.\n \nNotez qu'un facteur d'aggrandissment trop �lev�e est pr�judiciable\nquand la cible est plus PROCHE que la distance optimale.\n \nValeur �lev�e recommand�e.",
	L"\n \nCette arme est �quip�e d'un syst�me de projection\n(tel qu'un laser), qui projette un point sur la\ncible, rendant le tir plus facile.\n \nCette projection est seulement utile � une certaine distance\n, au del� elle diminue puis �ventuellement dispara�t.\n \nValeur �lev�e recommand�e.",
	L"\n \nLe recul horizontal de cette arme a �t� modifi�\npar une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nAucun effet si l'arme ne poss�de pas de mode Auto et/ou Rafale.\n \nR�duire le recul permet de garder plus facilement le canon\npoint� sur la cible pendant la salve.\n \nValeur faible recommand�e.",
	L"\n \nLe recul vertical de cette arme a �t� modifi�\npar une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nAucun effet si l'arme ne poss�de pas de mode Auto et/ou Rafale.\n \nR�duire le recul permet de garder plus facilement le canon\npoint� sur la cible pendant la salve.\n \nValeur faible recommand�e.",
	L"\n \nCette arme modifie la capacit� du tireur � faire face\nau recul durant une salve en mode Auto ou Rafale,\ngr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nUne valeur �lev�e permet d'aider le tireur a controler une arme\navec un fort recul, m�me s'il a peu de Force.\n \nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la capacit� du tireur � compenser\nle recul durant une salve en mode Auto ou Rafale,\ngr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nUne valeur �lev�e permet de corriger le recul pour garder le canon\nsur la cible, m�me � longue distance,\nrendant ainsi la salve plus pr�cise.\n \nValeur �lev�e recommand�e.",
	L"\n \nCette arme modifie la capacit� du tireur � adapter � chaque\n� chaque fr�quence l'effort de compensation du recul durant\nune salve en mode Auto ou Rafale,\ngr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme..\n \nUne fr�quence �lev�e de compensation permet une salve tr�s pr�cise,\net ainsi permettre des tirs en Rafale et Auto � tr�s longues port�es,\nen supposant que le tireur puisse couvrir le recul correctement.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque tenue en main, cette arme modifie la quantit� de\nPA que le mercenaire a au d�but de chaque tour.\n \nValeur �lev�e recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle nombre de PA pour mettre en joue avec cette arme a �t�\nmodifi�.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle nombre de PA pour faire une attaque simple avec cette arme\na �t� modifi�.\n \nNotez que les modes Auto et Rafale de l'arme,\nont leur co�t directement influenc� par ce facteur.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle nombre de PA pour faire une Rafale avec cette arme\na �t� modifi�.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle nombre de PA pour faire une salve en Auto avec cette arme\na �t� modifi�.\n \nNotez que cela ne modifie pas le co�t suppl�mentaire en PA\nlorsque vous ajoutez des balles � la salve, mais\nseulement son co�t initial.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle nombre de PA pour recharger cette arme\na �t� modifi�.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nla taille des munitions qui peuvent �tre charg� sur cette arme\na �t� modifi�.\n \nCette arme peut maintenant accepter des tailles plus ou moins grandes de munitions\nayant un m�me calibre.\n \nValeur �lev�e recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nla quantit� de balles tir�e par cette arme en mode Rafale\na �t� modifi�.\n \nSi cette arme n'a pas de mode Rafale, et que la\nvaleur est positive, alors cet objet donnera � l'arme la possibilit�\nde tirer en mode Rafale.\n \nInversement, si il y a un mode Rafale\net une valeur n�gative, cela peut retirer le mode Rafale.\n \nValeur �lev�e g�n�ralement recommand�e. Gard�e bien � l'esprit\nque le mode Rafale est l� pour conserver les munitions...",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\ncette arme ne produira pas de flash lors du tir.\n \nCela permettera au tireur de ne pas sa faire rep�rer\net de rester � couvert si il l'est.\nChose important de nuit...",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nle bruit g�n�r� par l'arme a �t� modifi�. La distance\n� laquelle les ennemis et mercenaires peuvent entendre votre tir � chang�.\n \nSi ce facteur modifie l'intensit� sonore de l'arme � 0\n, elle deviendra alors int�dectable.\n \nValeur faible recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nla cat�gorie de la taille de cette arme a chang�.\n \nLa taille est importante dans le Nouveau Syst�me d'Inventaire,\no� les poches n'acceptent qu'une taille et des formes sp�cifiques.\n \nAugmenter la taille d'un objet peut le rendre trop gros pour des poches.\n \nInversement, r�duire sa taille peut permettre de l'ins�rer dans plus de poches,\net les poches seront � m�me de contenir plus d'objets.\n \nValeur faible g�n�ralement recommand�e.",
	L"\n \nGr�ce � une munition, un accessoire ou un attribut inh�rent � l'arme,\nla fiabilit� de cette arme a chang�.\n \nSi positive, l'�tat de l'arme se d�t�riore\nmoins rapidement si utilis� en combat. Mais hors combat\nelle se d�t�riore plus rapidement.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nle camouflage en zone foresti�re du porteur.\n \nPour avoir un facteur de camouflage efficace en for�t\nvous devez �tre pr�s d'arbres ou d'herbes hautes.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nle camouflage en zone urbaine du porteur.\n \nPour avoir un facteur de camouflage efficace en zone urbaine\nvous devez �tre pr�s de bat�ments.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nle camouflage en zone d�sertique du porteur.\n \nPour avoir un facteur de camouflage efficace en zone d�sertique\nvous devez �tre pr�s du sable ou d'une v�g�tation d�sertique.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nle camouflage en zone enneig�e du porteur.\n \nPour avoir un facteur de camouflage efficace en zone enneig�e\nvous devez �tre pr�s de cases enneig�s.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nla discr�tion du porteur en rendant le mercenaire\nplus difficile � entendre lorsqu'il se d�place en mode silencieux.\n \nNotez que cela ne change en rien la visibilit� du mercenaire,\nmais seulement la quantit� de sons �mis lors d'un d�placement en silence.\n \nValeur �lev�e recommand�e.",
	L"\n \nQuand cette arme est tenue � la main, elle modifie\nl'audition du porteur du pourcentage suivant.\n \nUne valeur positive rend possible l'�coute de sons\nprovenant de longues distances.\n \nInversement, une valeur n�gative d�t�riore l'audition du porteur.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie la vision du porteur du pourcentage suivant,\ngr�ce � un accessoire ou un attribut inh�rent � l'arme.\n \nModification de la vision dans toutes les conditions.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie la vision du porteur du pourcentage suivant,\ngr�ce � un accessoire ou un attribut inh�rent � l'arme.\n \nModification de la vision de nuit lorsqu'il y a peu de lumi�re ambiante.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie la vision du porteur du pourcentage suivant,\ngr�ce � un accessoire ou un attribut inh�rent � l'arme.\n \nModification de la vision de jour lorsque l'intensit� de la lumi�re\nest normale ou forte.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie la vision du porteur du pourcentage suivant,\ngr�ce � un accessoire ou un attribut inh�rent � l'arme.\n \nModification de la vision lorsque l'intensit� de la lumi�re est tr�s forte.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie la vision du porteur du pourcentage suivant,\ngr�ce � un accessoire ou un attribut inh�rent � l'arme.\n \nModification de la vision lorsque vous �tes dans un sous-sol sombre.\n \nValeur �lev�e recommand�e.",
	L"\n \nLorsque cette arme est pr�te � tirer,\nelle modifie le champs de vision du porteur.\n \nR�duisant le champs de vision de chaque cot�.\n \nValeur faible recommand�e.",
	L"\n \nHabilit� du tireur � faire face au recul\nlors d'un tir en mode Rafale ou Auto.\n \nValeur �lev�e recommand�e.",
	L"\n \nFr�quence de recalcule du tireur pour ajuster la force\nqu'il doit mettre pour contrer le recul de l'arme, lors d'un tir\nen mode Rafale ou Auto.\n \nUne fr�quence faible rend la salve plus pr�cise en supposant que\nle tireur puisse surmonter le recul correctement.\n \nValeur faible recommand�e.",
	L"\n \nLa chance de toucher la cible avec cette arme\na �t� modifi� par une munition, un accessoire ou\nun attribut inh�rent � l'arme.\n \nAugmenter la chance de toucher permet de toucher plus souvent\nune cible,en supposant que le tireur a bien vis�.\n \nValeur �lev�e recommand�e.",
	L"\n \nLes bonus de vis�e de cette arme ont �t� modifi�\npar une munition, un accessoire ou un attribut inh�rent � l'arme.\n \nAugmenter les bonus de vis�es permet de toucher\nune cible � longue distance plus souvent, en supposant\nque le tireur a bien vis�.\n \nValeur �lev�e recommand�e.",
};

// HEADROCK HAM 4: Text for the new CTH indicator.
STR16 gzNCTHlabels[]=
{
	L"SIMPLE",
	L"PA",
};
//////////////////////////////////////////////////////
// HEADROCK HAM 4: End new UDB texts and tooltips
//////////////////////////////////////////////////////

#endif //FRENCH
