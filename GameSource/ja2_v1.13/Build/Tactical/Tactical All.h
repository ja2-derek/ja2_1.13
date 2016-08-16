#ifndef __TACTICAL_ALL_H
#define __TACTICAL_ALL_H

#pragma message("GENERATED PCH FOR TACTICAL PROJECT.")

#include "sgp.h"
#include "Air Raid.h"
#include "Game Event Hook.h"
#include "Game Clock.h"
#include "Auto Bandage.h"
#include "StrategicMap.h"
#include "ScreenIds.h"
#include "jascreens.h"
#include "Random.h"
#include "Overhead Types.h"
#include "Sound Control.h"
#include "Timer Control.h"
#include "Dialogue Control.h"
#include "Overhead.h"
#include "Message.h"
#include "Isometric Utils.h"
#include "Soldier Macros.h"
#include "WorldMan.h"
#include "LOS.h"
#include "math.h"
#include "Explosion Control.h"
#include "Interface.h"
#include "Music Control.h"
#include "Campaign Types.h"
#include "GameSettings.h"
#include "Text.h"
#include "Morale.h"
#include "Map Screen Helicopter.h"
#include <stdio.h>
#include <string.h>
#include "Types.h"
#include "WCheck.h"
#include <stdlib.h>
#include "Animation Cache.h"
#include "Animation Data.h"
#include "Animation Control.h"
#include "Sys Globals.h"
#include "Debug Control.h"
#include "FileMan.h"
#include "Weapons.h"
#include "structure.h"
#include "WorldDef.h"
#include "Rotting Corpses.h"
#include "Points.h"
#include "Soldier Control.h"
#include "tiledef.h"
#include "Utilities.h"
#include "Arms Dealer Init.h"
#include "ArmsDealerInvInit.h"
#include "Soldier Profile.h"
#include "Handle Items.h"
#include "Item Types.h"
#include "MessageBoxScreen.h"
#include "Handle UI.h"
#include "Items.h"
#include "MercTextBox.h"
#include "RenderWorld.h"
#include "Strategic Turns.h"
#include "Event Pump.h"
#include "AI.h"
#include "Interface Control.h"
#include "Map Screen Interface.h"
#include "Map Screen Interface Bottom.h"
#include "Assignments.h"
#include "WordWrap.h"
#include "Cursors.h"
#include "English.h"
#include "Boxing.h"
#include "Render Fun.h"
#include "NPC.h"
#include "Opplist.h"
#include <errno.h>
#include "VSurface.h"
#include "Render Dirty.h"
#include "SysUtil.h"
#include "Container.h"
#include "Video.h"
#include "VObject_blitters.h"
#include "Faces.h"
#include "Gap.h"
#include "Bullets.h"
#include <wchar.h>
#include "MemMan.h"
#include "Campaign.h"
#include "Strategic Mines.h"
#include "Strategic Status.h"
#include "Encrypted File.h"
#include "Mercs.h"
#include "Interface Dialogue.h"
#include "Squads.h"
#include "Interface Utils.h"
#include "Quests.h"
#include "GameScreen.h"
#include "ShopKeeper Interface.h"
#include "Merc Contract.h"
#include "History.h"
#include "Town Militia.h"
#include "Meanwhile.h"
#include "SkillCheck.h"
#include "Finances.h"
#include "Drugs And Alcohol.h"
#include "TeamTurns.h"
#include "Font Control.h"
#include "Line.h"
#include "Structure Wrap.h"
#include "PathAI.h"
#include "Smell.h"
#include "fov.h"
#include "Keys.h"
#include "Input.h"
#include "Exit Grids.h"
#include "Environment.h"
#include "Fog Of War.h"
#include "SoundMan.h"
#include <stdarg.h>
#include <time.h>
#include "Tile Animation.h"
#include "Interactive Tiles.h"
#include "Handle Doors.h"
#include "Action Items.h"
#include "World Items.h"
#include "Interface Items.h"
#include "Physics.h"
#include "Interface Panels.h"
#include "Strategic Town Loyalty.h"
#include "Soldier Functions.h"
#include "SaveLoadMap.h"
#include "Soldier Add.h"
#include "Soldier Ani.h"
#include "qarray.h"
#include "Handle UI Plan.h"
#include "Soldier Create.h"
#include "mousesystem.h"
#include "Cursor Control.h"
#include "Interface Cursors.h"
#include "UI Cursors.h"
#include "Strategic Pathing.h"
#include "Strategic Movement.h"
#include "Strategic.h"
#include "Vehicles.h"
#include "GameLoop.h"
#include "himage.h"
#include "VObject.h"
#include "Button System.h"
#include "Radar Screen.h"
#include "Lighting.h"
#include "Strategic Exit GUI.h"
#include "PopUpBox.h"
#include "Spread burst.h"
#include "Tactical Save.h"
#include "Fade Screen.h"
#include "Strategic AI.h"
#include "MapScreen.h"
#include "LaptopSave.h"
#include "Map Screen Interface Map.h"
#include "Map Screen Interface Map Inventory.h"
#include "Overhead Map.h"
#include "Options Screen.h"
#include <memory.h>
#include "Inventory Choosing.h"
#include "Smoothing Utils.h"
#include "TileDat.h"
#include <math.h>
#include "phys math.h"
#include "Map Information.h"
#include "Soldier Init List.h"
#include "EditorMercs.h"
#include "ja2.h"
#include "Road Smoothing.h"
#include "Tile Cache.h"
#include "merc entering.h"
#include "Merc Hiring.h"
#include "Strategic Merc Handler.h"
#include "Militia Control.h"
#include "Queen Command.h"
#include "EditScreen.h"
#include "Soldier Tile.h"
#ifdef	NETWORKED
	#include "Networking.h"
	#include "NetworkEvent.h"
#endif
#include "Player Command.h"
#include "Game Init.h"
#include "Buildings.h"
#include "rt time defines.h"
#include	"GameSettings.h"
#include "Text Input.h"
#include "ShopKeeper Quotes.h"
#include "Personnel.h"
#include "pits.h"
#include "Win util.h"
#include "SmokeEffects.h"
#include "SaveLoadGame.h"
#include "Scheduling.h"
#include "Auto Resolve.h"
#include "Soldier Find.h"
#include "Aim.h"
#include "Strategic Town Reputation.h"
#include "Tactical Turns.h"
#include "LightEffects.h"
#include "Timer.h"
#include "Soldier Profile Type.h"
#include "AIList.h"
#include "QuestDebug.h"
#include "Game Events.h"
#include "BobbyR.h"

#include "EnemyItemDrops.h"

#ifdef JA2BETAVERSION
	#include	"Quest Debug System.h"
#endif

#include "GameVersion.h"
#include "SaveLoadScreen.h"
#include "Cheats.h"
#include "Animated ProgressBar.h"
#include "Civ Quotes.h"
#include "AimMembers.h"
#include "BobbyRMailOrder.h"
#include "End Game.h"
#include "DisplayCover.h"
#include "expat.h"
#include "Spread burst.h"
#include "XML.h"

#endif