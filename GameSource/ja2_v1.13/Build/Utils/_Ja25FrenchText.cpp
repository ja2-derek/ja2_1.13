// WANNE: Yes, this should be disabled, otherwise we get weird behavior when running the game with a VS 2005 build!
//#pragma setlocale("FRENCH")

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
	L"Attachez le transpondeur � votre PC portable.",
	L"Vous n'avez pas les moyens d'engager %s",
	L"Pour une dur�e limit�e, les frais ci-dessus couvrent la mission enti�re, �quipement ci-dessous compris.",
	L"Engagez %s et d�couvrez d�s � pr�sent notre prix \"tout compris\".  Aussi inclus dans cette incroyable offre, l'�quipement personnel du mercenaire sans frais suppl�mentaires.",
	L"Frais",
	L"Il y a quelqu'un d'autre dans le secteur...",
	//L"Port�e arme: %d tiles, de chances: %d pourcent",
	L"Afficher couverture",
	L"Ligne de vision",
	L"Les nouvelles recrues ne peuvent arriver ici.",
	L"Comme votre PC n'a pas de transpondeur, vous ne pouvez engager de nouvelles recrues. Revenez � une sauvegarde pr�c�dente et r�essayez.",
	L"%s entend le son de m�tal broy� provenant d'en dessous du corps de Jerry.  On dirait que l'antenne de votre PC ne sers plus � rien.",  //the %s is the name of a merc.  @@@  Modified
	L"Apres avoir scann� la note laiss�e par le Deputy Commander Morris, %s sent une oppurtinit�. La note contient les coordonn�es pour le lancement de missiles sur Arulco. Elle contient aussi l'emplacement de l'usine d'o� les missiles proviennent.",
	L"En examinant le panneau de contr�le, %s s'aper�o�t que les chiffres peuvent �tre invers�s pour que les missiles d�truisent cette m�me usine.  %s a besoin de trouver un chemin pour s'enfuir.  L'ascenseur semble �tre la solution la plus rapide...",
	L"Ceci est un jeu IRON MAN et vous ne pouvez pas sauvegarder s'il ya des ennemis dans les parages.",	//	@@@  new text
	L"(ne peut sauvegarder en plein combat)", //@@@@ new text
	L"Le nom de la campagne actuelle est sup�rieur � 30 lettres.",							// @@@ new text
	L"La campagne actuelle est introuvable.",																	// @@@ new text
	L"Campagne: Par d�faut ( %S )",																							// @@@ new text
	L"Campagne: %S",																													// @@@ new text
	L"Vous avez choisi la campagne %S. Cette campagne est un mod d'Unfinished Business. Etes-vous s�r de vouloir jouer la campagne %S ?",			// @@@ new text
	L"Pour pouvoir utiliser l'�diteur, veuillez choisir une autre campagne que celle par d�faut.",		///@@new
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SANDRO - New STOMP laptop strings
//these strings match up with the defines in IMP Skill trait.cpp
STR16 gzIMPSkillTraitsText[]=
{
	L"Crochetage",
	L"Corps-�-corps",
	L"Electronique",
	L"Operations de nuit",
	L"Lancer",
	L"Enseigner",
	L"Armes lourdes",
	L"Armes automatiques",
	L"Discr�tion",
	L"Ambidextre",
	L"Couteau",
	L"Tireur isol�",
	L"Camouflage",
	L"Arts martiaux",

	L"aucune",
	L"Sp�cialt�s I.M.P.",
	L"(Expert)",

};

//added another set of skill texts for new major traits
STR16 gzIMPSkillTraitsTextNewMajor[]=
{
	L"Armes automatiques",
	L"Armes lourdes",
	L"Tireur d'�lite",
	L"Scout",
	L"Bandit",
	L"Corps-�-corps",
	L"Manager",
	L"Technicien",
	L"M�decin",

	L"Personne",
	L"I.M.P. Traits pincipaux",
	// second names
	L"Mitrailleur",
	L"Bombardier",
	L"Sniper",
	L"Chasseur",
	L"Combattant",
	L"Arts martiaux",
	L"Commandant",
	L"Ing�nieur",
	L"Chirurgien",
};

//added another set of skill texts for new minor traits
STR16 gzIMPSkillTraitsTextNewMinor[]=
{
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

	L"Personne",
	L"I.M.P. Traits mineurs",
};

//these texts are for help popup windows, describing trait properties
STR16 gzIMPMajorTraitsHelpTextsAutoWeapons[]=
{
	L"+%d%s de chance de toucher avec une arme d'assaut\n",
	L"+%d%s de chance de toucher avec un SMGs\n",
	L"+%d%s de chance de toucher avec un LMGs\n",
	L"-%d%s du nombre de PA n�cessaire pour tirer avec un LMGs\n",
	L"-%d%s du nombre de PA n�cessaire pour pr�parer une arme automatique l�g�re\n",
	L"La p�nalit� d� au mode Rafale/Auto est r�duit de %d%s\n",
	L"R�duire la propabilit� de tirer plus de balles que pr�vu en mode Auto\n",

};
STR16 gzIMPMajorTraitsHelpTextsHeavyWeapons[]=
{
	L"-%d%s du nombre de PA n�cessaire pour lancer une grenade\n",
	L"-%d%s du nombre de PA n�cessaire pour tirer une roquette\n",
	L"+%d%s de chance de toucher avec une grenade\n",
	L"+%d%s de chance de toucher avec une roquette\n",
	L"-%d%s du nombre de PA n�cessaire pour tirer au mortier\n",
	L"R�duit la p�nalit� de chance de toucher du mortier de %d%s\n",
	L"+%d%s d�g�ts fait � un tank avec une arme lourde, grenades ou explosifs\n",
	L"+%d%s d�g�ts fait sur les autres cibles avec une arme lourde\n",

};
STR16 gzIMPMajorTraitsHelpTextsSniper[]=
{
	L"+%d%s de chance de toucher avec un fusil\n",
	L"+%d%s de chance de toucher avec une arme de pr�cision\n",
	L"-%d%s de la distance effective de toutes les armes pour viser\n",
	L"+%d%s de bonus par niveau de vis�e (except� pour les pistolets)\n",
	L"+%d%s de d�g�ts sur tir",
	L" plus",
	L" pour chaque niveau",
	L" apr�s le premier",
	L" apr�s le deuxi�me",
	L" apr�s le troisi�me",
	L" apr�s le quatri�me",
	L" apr�s le cinqui�me",
	L" apr�s le sixi�me",
	L" apr�s le septi�me",
	L"-%d%s du nombre de PA n�cessaire pour recharger avec le fusil de pr�cision\n",
	L"Ajoute un niveau de vis�e en plus pour chaque fusil de pr�cision\n",
	L"Ajoute %d niveaux de vis�e pour chaque fusil de pr�cision\n",

};
STR16 gzIMPMajorTraitsHelpTextsRanger[]=
{
	L"+%d%s de chance de toucher avec un fusil\n",
	L"+%d%s de chance de toucher avec un fusil � pompe\n",
	L"-%d%s du nombre de PA n�cessaire pour recharger le fusil � pompe\n",
	L"+%d%s de vitesse de d�placement du groupe entre les secteurs si ils sont � pieds\n",
	L"+%d%s de vitesse de d�placement du groupe entre les secteurs si ils sont dans un v�hicule (except� l'h�licopter)\n",
	L"-%d%s d'�nergies n�cessaire pour traverser les secteurs\n",
	L"-%d%s de p�nalit�s du temps\n",
	L"+%d%s d'efficacit� du camouflage\n",
	L"-%d%s de l'usure du camouflage d� au temps ou � l'eau\n",

};
STR16 gzIMPMajorTraitsHelpTextsGunslinger[]=
{
	L"-%d%s du nombre de PA n�cessaire pour tirer avec un pistolet ou un revovler\n",
	L"+%d%s de la distance effective avec un pistolet ou un revolver pour viser\n",
	L"+%d%s de chance de toucher avec un pistolet ou un revolver\n",
	L"+%d%s de chance de toucher avec un pistolet automatique",
	L" (en tir manuel seulement)",
	L"+%d%s de bonus par niveau de vis�e avec un pistolet, pistolet automatique ou un revolver\n",
	L"-%d%s du nombre de PA n�cessaire pour augmenter un pistolet, pistolet automatique ou un revolver\n",
	L"-%d%s du nombre de PA n�cessaire pour recharger un pistolet, pistolet automatique ou un revolver\n",
	L"Ajoute un niveau de vis�e en plus pour les pistolets, les pistolets automatique ou les revolvers\n",
	L"Ajoute %d niveaux de vis�e pour chaque pistolet, pistolet automatique ou un revolver\n",

};
STR16 gzIMPMajorTraitsHelpTextsMartialArts[]=
{
	L"-%d%s du nombre de PA n�cessaire pour les attaques au corps-�-corps (mains nues ou avec un coup de poing am�ricain)\n",
	L"+%d%s de chance de toucher avec les mains nues\n",
	L"+%d%s de chance de toucher avec un coup de poing am�ricain\n",
	L"+%d%s de d�g�ts des attaques au corps-�-corps (mains nues ou avec un coup de poing am�ricain)\n",
	L"+%d%s de d�g�ts sur le souffle des attaques au corps-�-corps (mains nues ou avec un coup de poing am�ricain)\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et prend en peu de temps � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et prend un peu plus de temps � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et prend plus de temps � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et prend beaucoup plus de temps � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et prend �norm�ment de temps � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et met des heures � r�cup�rer\n",
	L"L'ennemie est abasourdi en raison de votre attaque au corps-�-corps et vas surement ne pas se relever\n",
	L"Le coups de poing va faire +%d%s de d�g�ts en plus\n",
	L"Votre coups de pieds sp�cial va faire +%d%s de d�g�ts en plus\n",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps\n",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps � main nues",
	L" ou avec le coup de poing am�ricain",
	L" (+%d%s avec le coup de poing am�ricain)",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps avec un coup de poing am�ricain\n",
	L"+%d%s de chance d'esquiver une attaque de n'importe quelle arme de m�l�e\n",
	L"-%d%s du nombre de PA n�cessaire pour voler l'arme de son ennemie\n",
	L"-%d%s du nombre de PA n�cessaire pour changer de posture (debout, accroupie, coucher), se retourner, monter/descendre du toit et sauter les obstacles\n",
	L"-%d%s du nombre de PA n�cessaire pour changer de posture (debout, accroupie, coucher)\n",
	L"-%d%s du nombre de PA n�cessaire pour se retourner\n",
	L"-%d%s du nombre de PA n�cessaire pour monter/descendre du toit et sauter les obstacles\n",
	L"+%d%s de chance d'ouvrir la porte\n",
	L"Vous obtenez une animation sp�ciale pour votre combat au corps-�-corps\n",

};
STR16 gzIMPMajorTraitsHelpTextsSquadleader[]=
{
	L"+%d%s de PA par tours pour les mercenaires aux alentours\n",
	L"+%d d'exp�rience effective pour les mercenaires aux alentours poss�dant un level plus bas que %s\n",
	L"+%d effective exp level to count as a standby when counting friends' bonus for suppression\n",
	L"+%d%s de tol�rance aux tirs de suppression pour les mercenaires aux alentours et %s pour soi\n",
	L"+%d de gain de moral pour les mercenaires aux alentours\n",
	L"-%d de perte de moral pour les mercenaires aux alentours\n",
	L"Bonus valables pour %d cases aux alentours",
	L" (%d cases pour en encadrement �largis)",
	L"(Le maximum de bonus simultan�s pour un joueur est de %d)\n",
	L"+%d%s de crainte de r�sistance � %s\n",
	L"Inconv�nient: %dx perte de moral � la mort de %s pour les autres mercenaires\n",

};
STR16 gzIMPMajorTraitsHelpTextsTechnician[]=
{
	L"+%d%s de vitesse de r�paration\n",
	L"+%d%s pour le crochetage (serrures normales/�lectroniques)\n",
	L"+%d%s pour d�sarmer un pi�ge �lectronique\n",
	L"+%d%s pour attacher un objet sp�cial ou combiner diff�rents objets\n",
	L"+%d%s pour d�bloquer une arme en plein combat\n",
	L"R�duit la p�nalit� pour r�parer les objets �lectroniques de %d%s\n",
	L"Augmente la chance de rep�rer les mines et les pi�ges (+%d par level de d�tection)\n",
	L"+%d%s de chance de toucher avec le robot control� par %s\n",
	L"%s vous accorde la capacit� de r�parer le robot\n",
	L"P�nalit� r�duite pour r�parer la vitesse du robot de %d%s\n",
};
STR16 gzIMPMajorTraitsHelpTextsDoctor[]=
{
	L"A les talents pour faire une op�ration chirurchical, en utilisant un sac m�dical, sur le soldat bless�\n",
	L"La chirurgie rend imm�diatement %d%s de sant� perdue.",
	L" (Cela consomme une grande partie du sac m�dical.)",
	L"Peut gu�rir des stats perdues par les coups critiques par le",
	L" chirurgien ou",
	L" le docteur assign�.\n",
	L"+%d%s de l'efficacit� du docteur assign�\n",
	L"+%d%s de vitesse de bandage\n",
	L"+%d%s de la vitesse de r�g�n�ration naturel de tous soldats pr�sent dans le m�me secteur",
	L" (un maximum de %d bonus par secteur)",

};
STR16 gzIMPMajorTraitsHelpTextsNone[]=
{
	L"Pas de bonus",
};

STR16 gzIMPMinorTraitsHelpTextsAmbidextrous[]=
{
	L"R�duit la p�nalit� de tirer avec 2 armes de %d%s\n",
	L"+%d%s de vitesse de rechargement d'une arme avec un chargeur\n",
	L"+%d%s de vitesse de rechargement d'une arme avec des cartouches\n",
	L"-%d%s du nombre de PA n�cessaire pour prendre un objet\n",
	L"-%d%s du nombre de PA n�cessaire pour utiliser le backpack\n",
	L"-%d%s du nombre de PA n�cessaire pour ouvrir une porte\n",
	L"-%d%s du nombre de PA n�cessaire pour poser/retirer une bombe ou une mine\n",
	L"-%d%s du nombre de PA n�cessaire pour attacher des objets entre eux\n",
};
STR16 gzIMPMinorTraitsHelpTextsMelee[]=
{
	L"-%d%s du nombre de PA n�cessaire pour attaquer avec un couteau\n",
	L"+%d%s de chance de toucher avec un couteau\n",
	L"+%d%s de chance de toucher avec une arme de m�l�e\n",
	L"+%d%s de d�g�ts par un couteau\n",
	L"+%d%s de d�g�ts par une arme de m�l�e\n",
	L"L'attaque vis�e par n'importe quelle arme de m�l�e cause +%d%s de d�g�ts\n",
	L"+%d%s de chance d'esquiver des attaques avec un couteau\n",
	L"+%d%s de chance d'esquiver une attaque avec un couteau si vous avez un couteau � la main\n",
	L"+%d%s de chance d'esquiver une attaque avec une arme de m�l�e\n",
	L"+%d%s de chance d'esquiver une attaque avec une arme de m�l�e si vous avez une arme de m�l�e � la main\n",

};
STR16 gzIMPMinorTraitsHelpTextsThrowing[]=
{
	L"-%d%s du nombre de PA n�cessaire pour lancer un couteau\n",
	L"+%d%s de distance maximum quand vous lancez un couteau\n",
	L"+%d%s de chance de toucher votre cible en lancant un couteau\n",
	L"+%d%s de chance de toucher votre cible par niveau de vis�e en lancant un couteau\n",
	L"+%d%s de d�g�ts avec votre lancer de couteau\n",
	L"+%d%s de d�g�ts avec votre lancer de couteau par niveau de vis�e\n",
	L"+%d%s de chance d'infliger des d�g�ts critiques en lan�ant un couteau si vous n'�tes pas vue ou entendu\n",
	L"+%d de d�g�ts critiques si vous lancez plusieurs couteaux\n",
	L"Ajoute %d niveaux de vis�e pour lancer un couteau\n",
	L"Ajoute %d niveaux de vis�e pour lancer un couteau\n",

};
STR16 gzIMPMinorTraitsHelpTextsNightOps[]=
{
	L"Vue effective augment�e de +%d dans la nuit\n",
	L"Audition augment�e de +%d\n",
	L"Audition augment�e de +%d lorsque vous �tes en hauteur\n",
	L"+%d de chance d'interrompre une action d'une ennemi dans la nuit\n",
	L"Le besoin de dormir est r�duit de -%d\n",

};
STR16 gzIMPMinorTraitsHelpTextsStealthy[]=
{
	L"-%d%s du nombre de PA n�cessaire pour bouger silencieusement\n",
	L"+%d%s de chance de bouger silencieusement\n",
	L"+%d%s en discr�tion (�tant 'invisible si inaper�u)\n",
	L"R�duit la p�nalit� d� au d�placement silencieux de %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsAthletics[]=
{
	L"-%d%s du nombre de PA n�cessaire pour bouger (courir, marcher, tapper, ramper, nager, etc)\n",
	L"-%d%s d'�nergie d�pens�e pour les mouvements, monter sur les toits, sauter les obstacles, etc.\n",
};
STR16 gzIMPMinorTraitsHelpTextsBodybuilding[]=
{
	L"A %d%s de r�sistance aux d�g�ts\n",
	L"+%d%s de force effective pour porter de lourdes charges\n",
	L"R�duit la perte d'�nergie lorsque vous �tes touch� au corps-�-corps de %d%s\n",
	L"Augmente les d�g�ts n�cessaire pour que vous tombiez � terre, si vous �tes touch� aux jambes, de %d%s\n",

};
STR16 gzIMPMinorTraitsHelpTextsDemolitions[]=
{
	L"-%d%s du nombre de PA n�cessaire pour lancer une grenade\n",
	L"+%d%s de la port�e maximale d'une grenade\n",
	L"+%d%s de chance de toucher votre cible avec une grenade\n",
	L"+%d%s de d�g�ts caus�s par une bombe ou une mine\n",
	L"+%d%s pour contr�ler un d�tonateur\n",
	L"+%d%s pour placer/retirer un contr�leur de bombe\n",
	L"Diminue la chance que l'ennemie puisse d�tecter vos bombes/mines (+%d par level de bombe)\n",
	L"Augmente la chance de former une plus grosse d�tonation quand l'ennemie ouvrira une porte pi�g�e (d�g�ts multipli�s par %d)\n",

};
STR16 gzIMPMinorTraitsHelpTextsTeaching[]=
{
	L"+%d%s de bonus pour entra�ner la milice\n",
	L"+%d%s de bonus en Commandement pour entra�ner la milice\n",
	L"+%d%s de bonus pour entra�ner d'autres mercenaires\n",
	L"Il faut que votre comp�tence soit sup�rieure � +%d pour �tre capable d'enseigner cette habilit� � un autre mercenaire\n",
	L"+%d%s de bonus lorsque vous vous entra�nez tout seul\n",

};
STR16 gzIMPMinorTraitsHelpTextsScouting[]=
{
	L"+%d de distance effective avec une lunette de vis�e sur votre arme\n",
	L"+%d de distance effective avec vos jumelles (et la lunette de vis�e s�par�e de votre arme)\n",
	L"-%d de vues �troites avec vos jumelles (et la lunette de vis�e s�par�e de votre arme)\n",
	L"Si vous �tes dans le secteur, vous saurez le nombre exact d'ennemies pr�sent dans les secteurs aux alentours\n",
	L"Si vous �tes dans le secteur,vous saurez la pr�sence au non d'ennemies dans les secteurs alentours\n",
	L"Emp�che l'ennemie de prendre en embuscade votre �quipe\n",
	L"Emp�che les f�lins (les gros chats) de prendre en embuscade votre �quipe\n",

};
STR16 gzIMPMinorTraitsHelpTextsNone[]=
{
	L"Pas de bonus",
};

STR16 gzIMPOldSkillTraitsHelpTexts[]=
{
	L"+%d%s de bonus de crochetage\n",	// 0
	L"+%d%s de chance de toucher au corps-�-corps\n",
	L"+%d%s de d�g�ts au corps-�-corps\n",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps\n",
	L"Elimine la p�nalit� d� � la r�paration et � la manipulation\nd'objets �lectriques (serrures, pi�ges, d�tonateurs, etc)\n",
	L"+%d de vision effective dans la nuit\n",
	L"+%d d'audition effective dans la nuit\n",
	L"+%d d'audition effective dnas la nuit sur un toit\n",
	L"+%d de chance d'interrompre un ennemie dans la nuit\n",
	L"Le besoin de dormir est r�duit de -%d\n",
	L"+%d%s de distance maximale lors d'un lancer quelconque\n",	// 10
	L"+%d%s de chance de toucher lors d'un lancer quelconque\n",
	L"+%d%s de chance de tuer instantan�ment en lan�ant un couteau si vous n'�tes pas vu ou entendu\n",
	L"+%d%s de bonus pour entra�ner la milice et enseigner aux autres mercenaires\n",
	L"+%d%s en Commandement lors de l'entra�nement de la milice mobile\n",
	L"+%d%s de chance de toucher votre cible avec une roquette/grenade ou un mortier\n",
	L"La p�nalit� d� au tir en mode automatique est r�duite de %d\n",
	L"R�duit la probabilit� d'un tir en mode automatique non voulu\n",
	L"+%d%s de chance de bouger silencieusement\n",
	L"+%d%s en ruse (�tant 'invisible si inaper�u)\n",
	L"Elimine la p�nalit� lorsque vous tirez avec une arme dans chaque main � la suite\n",	// 20
	L"+%d%s de chance de toucher avec une arme de m�l�e\n",
	L"+%d%s de chance d'esquiver une attaque de m�l�e si vous avez un couteau dans la main\n",
	L"+%d%s de chance d'esquiver une attaque de m�l�e si vous avez quelque chose d'autre dans la main\n",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps si vous avez un couteau dans la main\n",
	L"-%d%s de distance effective n�cessaire pour viser votre cible avec n'importe quelle arme\n",
	L"+%d%s de bonus par niveau de vis�e\n",
	L"Fournit un camouflage permanent\n",
	L"+%d%s de chance de toucher au corps-�-corps\n",
	L"+%d%s de d�g�ts au corps-�-corps\n",
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps si vous avez les mains vides\n",	// 30
	L"+%d%s de chance d'esquiver une attaque au corps-�-corps si vous n'avez pas les mains vides\n",
	L"+%d%s de chance d'esquiver une attaque avec une arme de m�l�e\n",
	L"Peut faire un coup de pied � des ennemies affaiblis qui fera le double de d�g�ts\n",
	L"Vous obtenez une animation sp�ciale pour votre combat au corps-�-corps\n",
	L"Pas de bonus",
};

STR16 gzIMPNewCharacterTraitsHelpTexts[]=
{
	L"+ : Pas d'avantages.\n- : Pas de d�saventages.",
	L"+ : A de meilleures performances lorsque deux ou trois mercenaires sont proches.\n- : Ne gagne aucun moral quand aucun mercenaire est proche de lui.",
	L"+ : A de meilleures performances quand il est tout seul.\n- : Ne gagne aucun moral quand il est en groupe.",
	L"+ : Son moral diminue plus doucement et remonte plus rapidemment que la normale.\n- : A moins de chance de d�tecter les mines et les pi�ges.",
	L"+ : Obtiens un bonus lorsqu'il entra�ne la milice et � une meilleur communication.\n- : Ne gagne aucun moral pour les actions des autres mercenaires.",
	L"+ : Apprend plus rapidemment en �tant le professeur ou l'�l�ve.\n- : A moins de r�sistance � la peur et la folie.",
	L"+ : Son �nergie descend un peu plus lentement sauf lorsqu'il est docteur, qu'il r�pare, qu'il entra�ne ou qu'il apprend.\n- : Ses comp�tences en sagesse, commandement, explosifs, m�canique et m�decine s'am�liorent l�g�rement plus lentement.",
	L"+ : A un peu plus de chance de toucher lors d'un tir automatique et inflige plus de d�g�ts au corps-�-corps.\n	Obtiens un peu plus de morale lors d'un kill.\n- : A une p�nalit� lorsqu'il faut de la patience comme r�parer des objets, d�v�rouiller une serrure, enlever des pi�ges, entra�ner la milice.",
	L"+ : A un bonus lorsqu'il faut de la patience comme r�parer des objets, d�v�rouiller une serrure, enlever des pi�ges, entra�ner la milice.\n- : Sa chance d'interrompre une action ennemie est l�g�rement diminu�.",
	L"+ : Augmente la r�sistance � la folie et la peur.\n    La perte de moral d� aux d�g�ts re�us et � la mort d'un mercenaire est moindre.\n- : Vous �tes plus facilement touchable et l'ennemie a sa p�nalit� d� � votre mouvement r�duite.",
	L"+ : Gagne du moral lorsque vous fa�tes une mission qui n'est pas li� au combat (except� l'entra�nement de milice).\n- : Pas de gains lorsque vous tuez quelqu'un.",
	L"+ : A plus de chance d'infliger des pertes de stats sur l'ennemie, qui peut aussi infliger de lourds d�g�ts.\n	Gagne du moral lorsque vous infligez des pertes de stats sur l'ennemie.\n- : A une p�nalit� pour la communication et son moral baisse plus rapidement lorsqu'il ne combat pas.",
	L"+ : A de meilleures performances lorsqu'un certains types d'ennemies est oppos� � lui.\n- : Les mercenaires qui poss�dent le m�me type que l'ennemie gagne moins de moral.",

};

STR16 gzIMPDisabilitiesHelpTexts[]=
{
	L"Pas d'effets.",
	L"A des probl�mes de souffle/respiration et ses performances globales\nsont diminu�es lorsqu'il est dans des zones tropiques ou d�sertiques.",
	L"Peut souffrir de panique s'il est laiss� seul dans certaines situations.",
	L"Ses performances globales sont r�duites s'il se trouve dans un sous-sol.",
	L"Peut facilement se noyer s'il essaye de nager.",
	L"La vue de gros insectes peut lui poser de gros probl�mes\net �tre dans une zone tropicale lui r�duit aussi\nl�g�rement ses performances globales.",
	L"Peut parfois perdre les ordres donn�s et ainsi perdre des PA lors d'un combat.",
	L"Il peut devenir psychopathe et tirer comme un fou de temps en temps\net peut perdre du moral s'il n'est pas capable d'utiliser son arme.",

};



STR16 gzIMPProfileCostText[]=
{
	L"Ce profil co�te %d$. Voulez-vous autoriser ce paiement ? ",
};

STR16 zGioNewTraitsImpossibleText[]=
{
	L"Vous ne pouvez pas choisir le Nouveau Syst�me de Trait avec l'outil PROFEX d�sactiv�. Regardez votre fichier JA2_Options.ini avec l'entr�e: READ_PROFILE_DATA_FROM_XML.",
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//@@@:  New string as of March 3, 2000.
STR16	gzIronManModeWarningText[]=
{
	L"Vous avez choisi le mode IRON MAN. La difficult�e du jeu s'en trouveras considerablement augment�e du fait de l'imposssiblit� de sauvegarder en territoire ennemi. Ce param�tre prendra effet tout au long de la partie.  Etes-vous vraiment s�r de vouloir jouer en mode IRON MAN ?",
};

STR16 gzDisplayCoverText[]=
{
	L"Contraste: %d/100 %s, Luminosit�: %d/100",
	L"Distance de tir: %d/%d cases, Chance de toucher: %d/100",
	L"Distance de tir: %d/%d cases, Stabilit� du canon: %d/100",
	L"D�sactivation de la couverture de l'affichage",
	L"Afficher la vue qu'on les ennemies",
	L"Afficher les zones de danger des mercenaires",
	L"Bois", // wanted to use jungle , but wood is shorter in german too (dschungel vs wald)
	L"Urbain",
	L"D�sert",
	L"Neige", // NOT USED!!!
	L"Bois et d�sert",
	L"" // yes empty for now
};


#endif
