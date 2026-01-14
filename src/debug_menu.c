#include "defines.h"
#include "../include/bg.h"
#include "../include/coins.h"
#include "../include/event_data.h"
#include "../include/event_object_movement.h" // MoveCoords prototype (fixes your warning)
#include "../include/field_camera.h"
#include "../include/field_effect.h"
#include "../include/field_message_box.h"
#include "../include/field_screen.h"
#include "../include/field_screen_effect.h"
#include "../include/field_weather.h"
#include "../include/fieldmap.h"
#include "../include/global.h"
#include "../include/heal_location.h"
#include "../include/item.h"
#include "../include/main.h"
#include "../include/money.h"
#include "../include/map_preview_screen.h"
#include "../include/map_name_popup.h"
#include "../include/overworld.h"
#include "../include/palette.h"
#include "../include/region_map.h"
#include "../include/script_menu.h"
#include "../include/sound.h"
#include "../include/task.h"

#include "../include/constants/field_effects.h"
#include "../include/constants/items.h"
#include "../include/constants/songs.h"

#include "../include/new/build_pokemon.h"
#include "../include/new/item.h"
#include "../include/new/util.h"
#include "../include/script.h"
#include "../include/random.h"

// #define DEBUG_PC_SCRIPT_ADDR ((const u8*)0x081A6955) // same pointer used for MB_PC

// #define CB2_REGIONMAP_ADDR 0x080F08F9  // FireRed US v1.0 thumb address

// #define CB2_RegionMap ((void (*)(void)) (CB2_REGIONMAP_ADDR | 1))

// In many forks, mode=1 is Fly; if your tree differs, try 0.
// #define REGION_MAP_MODE_FLY  1

static void DebugMenu_DoFlyToTown(u8 healIndex);

// typical exit callback (return to field & resume music/script)
extern void CB2_ReturnToFieldContinueScriptPlayMapMusic(void);

extern void DrawWholeMapView(void);

// Provided by your base; needed to find the list window task.
extern void Task_MultichoiceMenu_HandleInput(u8 taskId);
extern void Cb2_EnterPSS(u8 a0);

// --- externs from elsewhere in your tree ---
extern bool8 SetUpFieldMove_Fly(void);

// extern bool8 (*gFieldCallback2)(void); 

extern u8 FldEff_Use_Fly(void); // some trees require starting via ID, others via function

// extern const u8 SystemScript_Fly[]; // provided in your assembled system scripts
// No need to touch FieldEffectStart or gFieldCallback2 here.

// forward declarations
extern const struct HealLocation gHealLocations[];
extern const MapsecToHealLoc sMapsecToHealLoc[];
u32 GetFlyLocationCount(void);


static void Debug_OpenFly(void);

static void DebugMenu_Action_Fly(void) { Debug_OpenFly(); }

// Forward declaration (prevents order issues)
// static void Task_LaunchFlyMapAfterFade(u8 taskId);

// static const struct DebugMenuItem sFieldUtilItems[] = {
//     { "Fly…", DebugMenu_Action_Fly },
//     // ...
// };

// snapshot of the tile in front of the player
static s16 sPcTileX, sPcTileY;
static u16 sPcTileMetatile;
static bool8 sPcTileSaved;

void DebugMenu_ProcessSetFlag(void)
{
	u32 i;

	switch (gSpecialVar_LastResult) {
		case 0: //Badges
			for (i = FLAG_BADGE01_GET; i <= FLAG_BADGE08_GET; ++i)
				FlagSet(i);
			break;
		case 1: //Game Clear
			FlagSet(FLAG_SYS_GAME_CLEAR);
			break;
		case 2: //Pokedexes
			FlagSet(FLAG_SYS_POKEDEX_GET);
			// FlagSet(FLAG_SYS_DEXNAV);
			break;
		case 3: //Fly Spots
			for (i = 0x890; i <= 0x8CA; ++i)
				FlagSet(i);
			FlagSet(FLAG_SYS_SEVII_MAP_123);
			FlagSet(FLAG_SYS_SEVII_MAP_4567);
			break;
		case 4: //Custom Flag and Var - Modify this number
			//FlagSet(0x152D);
			VarSet(0x500C, 0x28);
			//FlagClear(0x15AC);
			break;
	}
}

void DebugMenu_ProcessGiveItem(void)
{
	u32 i;

	switch (gSpecialVar_LastResult) {
		case 0: //Useful Key Items
			AddBagItem(ITEM_BICYCLE, 1);
			AddBagItem(ITEM_TOWN_MAP, 1);
			AddBagItem(ITEM_OLD_ROD, 1);
			AddBagItem(ITEM_GOOD_ROD, 1);
			AddBagItem(ITEM_SUPER_ROD, 1);
			AddBagItem(ITEM_VS_SEEKER, 1);
			AddBagItem(ITEM_ITEMFINDER, 1);
			AddBagItem(ITEM_MEGA_RING, 1);
			break;
		case 1: //General Useful Items
			AddBagItem(ITEM_MAX_REPEL, 100);
			AddBagItem(ITEM_ESCAPE_ROPE, 100);
			AddBagItem(ITEM_MAX_POTION, 100);
			#if (defined ITEM_HM01_CUT && defined ITEM_HM08_ROCK_CLIMB)
			for (i = ITEM_HM01_CUT; i <= ITEM_HM08_ROCK_CLIMB; ++i)
				AddBagItem(i, 1);
			#endif

			AddBagItem(ITEM_ANTIDOTE, 100);
			AddBagItem(ITEM_PARALYZE_HEAL, 100);
			AddBagItem(ITEM_AWAKENING, 100);
			AddBagItem(ITEM_REVIVE, 100);
			AddBagItem(ITEM_RARE_CANDY, 500);
			break;
		case 2: //Poke Balls
			for (i = ITEM_MASTER_BALL; i <= ITEM_PREMIER_BALL; ++i)
				AddBagItem(i, 100);

			AddBagItem(ITEM_PARK_BALL, 100);
			AddBagItem(ITEM_CHERISH_BALL, 100);
			AddBagItem(ITEM_DUSK_BALL, 100);
			AddBagItem(ITEM_HEAL_BALL, 100);
			AddBagItem(ITEM_QUICK_BALL, 100);
			AddBagItem(ITEM_FAST_BALL, 100);
			AddBagItem(ITEM_LEVEL_BALL, 100);
			AddBagItem(ITEM_LURE_BALL, 100);
			AddBagItem(ITEM_HEAVY_BALL, 100);
			AddBagItem(ITEM_LOVE_BALL, 100);
			AddBagItem(ITEM_FRIEND_BALL, 100);
			AddBagItem(ITEM_MOON_BALL, 100);
			AddBagItem(ITEM_SPORT_BALL, 100);
			AddBagItem(ITEM_BEAST_BALL, 100);
			AddBagItem(ITEM_DREAM_BALL, 100);
			break;
		case 3: //Berries
			for (i = ITEM_CHERI_BERRY; i <= ITEM_STARF_BERRY; ++i)
				AddBagItem(i, 100);
			
			AddBagItem(ITEM_ENIGMA_BERRY, 100);
			AddBagItem(ITEM_OCCA_BERRY, 100);
			AddBagItem(ITEM_PASSHO_BERRY, 100);
			AddBagItem(ITEM_WACAN_BERRY, 100);
			AddBagItem(ITEM_RINDO_BERRY, 100);
			AddBagItem(ITEM_YACHE_BERRY, 100);
			AddBagItem(ITEM_CHOPLE_BERRY, 100);
			AddBagItem(ITEM_KEBIA_BERRY, 100);
			AddBagItem(ITEM_SHUCA_BERRY, 100);
			AddBagItem(ITEM_COBA_BERRY, 100);
			AddBagItem(ITEM_PAYAPA_BERRY, 100);
			AddBagItem(ITEM_TANGA_BERRY, 100);
			AddBagItem(ITEM_CHARTI_BERRY, 100);
			AddBagItem(ITEM_KASIB_BERRY, 100);
			AddBagItem(ITEM_HABAN_BERRY, 100);
			AddBagItem(ITEM_COLBUR_BERRY, 100);
			AddBagItem(ITEM_BABIRI_BERRY, 100);
			AddBagItem(ITEM_CHILAN_BERRY, 100);
			AddBagItem(ITEM_MICLE_BERRY, 100);
			AddBagItem(ITEM_CUSTAP_BERRY, 100);
			AddBagItem(ITEM_JABOCA_BERRY, 100);
			AddBagItem(ITEM_ROWAP_BERRY, 100);
			AddBagItem(ITEM_ROSELI_BERRY, 100);
			AddBagItem(ITEM_KEE_BERRY, 100);
			AddBagItem(ITEM_MARANGA_BERRY, 100);
			break;
		case 4: //TMs & HMs
			#ifdef UNBOUND //Remove if you want this, enums can't be #ifdefed
			for (i = ITEM_TM01_FOCUS_PUNCH; i <= ITEM_TM50_OVERHEAT; ++i)
				AddBagItem(i, 1);

			for (i = ITEM_TM51_ROOST; i <= ITEM_TM58_ENDURE; ++i)
				AddBagItem(i, 1);

			for (i = ITEM_TM59_DRAGON_PULSE; i <= ITEM_TM120_NATURE_POWER; ++i)
				AddBagItem(i, 1);

			for (i = ITEM_HM01_CUT; i <= ITEM_HM08_ROCK_CLIMB; ++i)
				AddBagItem(i, 1);
			#endif
			break;
		case 5: //All items
			for (i = 0; i < ITEMS_COUNT; ++i)
			{
				const u8* name = ItemId_GetName(i);
				if (name[0] != 0xAC && name[0] != 0xFF) //'?', ' '
					AddBagItem(i, 1);
			}
			break;
	}
}

void DebugMenu_SetTeamToLevel100(void)
{
	for (u32 i = 0; i < PARTY_SIZE; ++i)
	{
		u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2, NULL);
		if (species != SPECIES_NONE && species != SPECIES_EGG)
		{
			u32 exp = gExperienceTables[gBaseStats[species].growthRate][MAX_LEVEL];
			SetMonData(&gPlayerParty[i], MON_DATA_EXP, &exp);
			CalculateMonStats(&gPlayerParty[i]);
			HealMon(&gPlayerParty[i]);
		}
	}
}

void DebugMenu_MaxMoneyAndCoins(void)
{
	AddMoney(&gSaveBlock1->money, 0xFFFFFFFF);
	SetCoins(999999999);
}

void DebugMenu_ShinyTeam(void)
{
	for (u32 i = 0; i < PARTY_SIZE; ++i)
	{
		u16 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES2, NULL);
		if (species != SPECIES_NONE && species != SPECIES_EGG)
			ForceMonShiny(&gPlayerParty[i]);
	}
}
#include "../include/pokemon.h"
#include "../include/constants/species.h"
#include "../include/constants/pokemon.h"
#include "../include/constants/vars.h"
#include "../include/new/terastallization.h"
#define VAR_8000 0x8000

void DebugMenu_GivePokemonFromVar(void)
{
	u16 species = VarGet(VAR_8000);
	struct Pokemon mon;

	if (species == 0 || species >= NUM_SPECIES)
		return;

	u8 slot = CalculatePlayerPartyCount();
	if (slot >= PARTY_SIZE)
		return;

	CreateMon(&mon, species, 5, 32, TRUE, 0, OT_ID_PLAYER_ID, 0);
	gPlayerParty[slot] = mon;
}
void DebugMenu_GiveItemFromVar(void)
{
    u16 item = VarGet(VAR_8000);
    if (item == 0 || item >= ITEMS_COUNT)
        return;

    AddBagItem(item, 500);
}
#define LINKER_FUNC_ADDR ((void *) (0x08088E74 + 1))
typedef void (*LinkerFunc)(u16 species, u16 param);

void DebugMenu_Dex(void)
{
    LinkerFunc Linker = (LinkerFunc)LINKER_FUNC_ADDR;

    for (u16 i = 1; i <= 0x401; i++)
    {
        Linker(i, 2);
        Linker(i, 3);
    }
}

#define FUNC_FLY_UNLOCK    ((void *) (0x0806E680 + 1))
#define FUNC_FINAL_CALL    ((void *) (0x08000544 + 1))
#define FINAL_ARG          ((void *) (0x080C4EF8 + 1))

typedef void (*FlyFunc)(u16 mapSec);
typedef void (*FinalFunc)(void *ptr);

void DebugMenu_Fly(void)
{
    FlyFunc UnlockFlySpot = (FlyFunc)FUNC_FLY_UNLOCK;
    FinalFunc FinalCall = (FinalFunc)FUNC_FINAL_CALL;

    for (u16 i = 0x890; i < 0x8C4; i++)
        UnlockFlySpot(i);

    FinalCall((void *)FINAL_ARG);
}
void DebugMenu_SetterFlag(void)
{
	u16 flag = VarGet(VAR_8000);
	FlagSet(flag);
}
void DebugMenu_SetterVar(void)
{
	u16 var = VarGet(VAR_DEBUG_MENU_SET_CUSTOM_VAR);
	u16 value = VarGet(VAR_DEBUG_MENU_SET_CUSTOM_VAR_VALUE);
	VarSet(var, value);
}

void DebugMenu_PreparePortablePC(void)
{
    // Cleanly close the debug multichoice window to avoid UI residue
    u8 tid = FindTaskIdByFunc(Task_MultichoiceMenu_HandleInput);
    if (tid != 0xFF) {
        DestroyScriptMenuWindow(gTasks[tid].data[6]); // window id is data[6] in this base
        DestroyTask(tid);
    }
    HideFieldMessageBox();
    DismissMapNamePopup();
    ChangeBgY(0, 0, 0);

    // Snapshot the metatile in front of the player so we can restore it later
    u8 objId = gPlayerAvatar->eventObjectId;
    s16 x = gEventObjects[objId].currentCoords.x;
    s16 y = gEventObjects[objId].currentCoords.y;
    MoveCoords(gEventObjects[objId].facingDirection, &x, &y);

    sPcTileX = x;
    sPcTileY = y;
    sPcTileMetatile = MapGridGetMetatileIdAt(x, y);
    sPcTileSaved = TRUE;

    // Pre-paint, so any leftover pixels are gone before the PC opens
    DrawWholeMapView();
}

void DebugMenu_RestorePortablePCTile(void)
{
    if (sPcTileSaved) {
        MapGridSetMetatileIdAt(sPcTileX, sPcTileY, sPcTileMetatile);
        DrawWholeMapView();
        sPcTileSaved = FALSE;
    }
}

void DebugMenu_CloseActiveMultichoice(void)
{
    u8 tid = FindTaskIdByFunc(Task_MultichoiceMenu_HandleInput);
    if (tid != 0xFF)
    {
        // In this base, the window id is stored in data[6]
        DestroyScriptMenuWindow(gTasks[tid].data[6]);
        DestroyTask(tid);
    }

    HideFieldMessageBox();
    DismissMapNamePopup();
    ChangeBgY(0, 0, 0);

    // Wipe any leftover tiles from the list window
    DrawWholeMapView();
}

// 2) Optional post-PC pass — makes sure the map is fully clean.
void DebugMenu_ForceRedraw(void)
{
    DrawWholeMapView();
}

// void DebugMenu_OpenPortablePC(void)
// {
//     // 1) Cleanly close the active multichoice window (prevents the “box” tile)
//     u8 multichoiceTaskId = FindTaskIdByFunc(Task_MultichoiceMenu_HandleInput);
//     if (multichoiceTaskId != 0xFF)
//     {
//         // window id is stored in data[6] in this base
//         DestroyScriptMenuWindow(gTasks[multichoiceTaskId].data[6]);
//         DestroyTask(multichoiceTaskId);
//     }

//     // 2) Hide any field message UI & tidy the BG
//     HideFieldMessageBox();
//     DismissMapNamePopup();
//     ChangeBgY(0, 0, 0);

//     // 3) Launch the normal PC script (let it handle lockall/Context2 itself)
//     PlaySE(SE_SELECT);
//     ScriptContext2_Enable();
//     ScriptContext1_SetupScript(DEBUG_PC_SCRIPT_ADDR);
// }

// ----- helper that mirrors SetUpFieldMove_Fly -----
static bool8 CanDebugFlyHere(void)
{
    // Minimal gate; mirror your SetUpFieldMove_Fly rules if you want followers/Unbound checks too.
    return Overworld_MapTypeAllowsTeleportAndFly(gMapHeader.mapType);
}

// static void Debug_OpenFly(void)
// {
//       ScriptContext1_SetupScript(SystemScript_Fly);
// }

// callable from scripts via `callasm`
// IMPORTANT: not static, no args, no return
// void Debug_OpenFlyFromScript(void)
// {
//     Debug_OpenFly();
// }

// static void Task_LaunchFlyMapAfterFade(u8 taskId)
// {
//     // gPaletteFade is a pointer in your tree
//    if (!gPaletteFade->active)
//     {
// 		 FieldClearVBlankHBlankCallbacks();
//         InitRegionMapWithExitCB(0, CB2_ReturnToFieldContinueScriptPlayMapMusic);
//         SetRegionMapVBlankCB();

//         // OpenFlyRegionMap();
// 		// CB2_OpenFlyMap();   // << was OpenFlyRegionMap()
// 		// SetMainCallback2(CB2_RegionMap);   // << was OpenFlyRegionMap()
//         FieldSpecial_Flymap();   // use the stock party menu path
//         DestroyTask(taskId);
//     }
// }

// void Debug_OpenFlyFromScript(void) // called via callasm ...+1
// {
//     // 1) Kill any active script/mode so Region Map owns the screen
//     ScriptContext1_Stop();
//     ScriptContext2_Disable();

//     // 2) Tear down *all* windows (pret does this before big UIs)
//     FreeAllWindowBuffers();

//     // 3) Fade to black and wait via a task
//     BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
//     CreateTask(Task_LaunchFlyMapAfterFade, 0);

// 	// FieldClearVBlankHBlankCallbacks();
// 	// InitRegionMapWithExitCB(0, CB2_ReturnToField);
// 	// SetRegionMapVBlankCB();
// 	// SetMainCallback2(CB2_RegionMap);
// 	// SetMainCallback2(OpenFlyRegionMap);
// }

//Warp to Town

// extern const u8 SystemScript_WarpFly2[];
// extern const u8 SystemScript_WarpFly3[];
// extern const u8 SystemScript_WarpFly4[];

// extern u16 gSpecialVar_0;

// Page 1
void DebugMenu_DoWarpToTown_Page1(void)
{
    switch (Var8000)   // instead of gSpecialVar_0
    {
    case 0: DebugMenu_DoFlyToTown(sMapsecToHealLoc[0].healIndex); break; // Pallet
    case 1: DebugMenu_DoFlyToTown(sMapsecToHealLoc[1].healIndex); break; // Viridian
    case 2: DebugMenu_DoFlyToTown(sMapsecToHealLoc[2].healIndex); break; // Pewter
    case 3: DebugMenu_DoFlyToTown(sMapsecToHealLoc[3].healIndex); break; // Cerulean
    case 4: DebugMenu_DoFlyToTown(sMapsecToHealLoc[4].healIndex); break; // Vermilion
    case 5: DebugMenu_DoFlyToTown(sMapsecToHealLoc[5].healIndex); break; // Lavender
    // case 6: ScriptContext1_SetupScript(SystemScript_WarpFly2); break;
    }
}

// Page 2
void DebugMenu_DoWarpToTown_Page2(void)
{
    switch (Var8000)   // instead of gSpecialVar_0
    {
    case 0: DebugMenu_DoFlyToTown(sMapsecToHealLoc[6].healIndex); break; // Celadon
    case 1: DebugMenu_DoFlyToTown(sMapsecToHealLoc[7].healIndex); break; // Fuchsia
    case 2: DebugMenu_DoFlyToTown(sMapsecToHealLoc[8].healIndex); break; // Cinnabar
    case 3: DebugMenu_DoFlyToTown(sMapsecToHealLoc[9].healIndex); break; // Saffron
    // case 4: ScriptContext1_SetupScript(SystemScript_WarpFly3); break;
    }
}

// Page 3
void DebugMenu_DoWarpToTown_Page3(void)
{
    switch (Var8000)   // instead of gSpecialVar_0
    {
    case 0: DebugMenu_DoFlyToTown(sMapsecToHealLoc[10].healIndex); break; // Indigo Plateau
    case 1: DebugMenu_DoFlyToTown(sMapsecToHealLoc[11].healIndex); break; // One Island
    case 2: DebugMenu_DoFlyToTown(sMapsecToHealLoc[12].healIndex); break; // Two Island
    case 3: DebugMenu_DoFlyToTown(sMapsecToHealLoc[13].healIndex); break; // Three Island
    // case 4: ScriptContext1_SetupScript(SystemScript_WarpFly4); break;
    }
}

// Page 4
void DebugMenu_DoWarpToTown_Page4(void)
{
    switch (Var8000)   // instead of gSpecialVar_0
    {
    case 0: DebugMenu_DoFlyToTown(sMapsecToHealLoc[14].healIndex); break; // Four Island
    case 1: DebugMenu_DoFlyToTown(sMapsecToHealLoc[15].healIndex); break; // Five Island
    case 2: DebugMenu_DoFlyToTown(sMapsecToHealLoc[16].healIndex); break; // Six Island
    case 3: DebugMenu_DoFlyToTown(sMapsecToHealLoc[17].healIndex); break; // Seven Island
    case 4: DebugMenu_DoFlyToTown(sMapsecToHealLoc[18].healIndex); break; // Mt Moon
    }

}

void DebugMenu_DoFlyToTown(u8 healIndex)
{
    const struct HealLocation *loc = &gHealLocations[healIndex];

    SetWarpDestination(loc->group, loc->map, -1, loc->x, loc->y);
    WarpFadeScreen();
    DoWarp();
    ResetInitialPlayerAvatarState();
	// Clean up script context so later NPC scripts don’t break
    // ScriptContext1_Stop();
}

// static void DebugMenu_TrainerSee(u8 taskId)
// {
//     if (FlagGet(FLAG_DISABLE_TRAINER_SEE))
//     {
//         FlagClear(FLAG_DISABLE_TRAINER_SEE);
//         Debug_DestroyMenu(taskId);
//         Debug_ShowMessage("Trainer Spotting ENABLED");
//     }
//     else
//     {
//         FlagSet(FLAG_DISABLE_TRAINER_SEE);
//         Debug_DestroyMenu(taskId);
//         Debug_ShowMessage("Trainer Spotting DISABLED");
//     }
// }
