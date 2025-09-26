#include "../include/global.h"
#include "../include/field_fadetransition.h"
#include "../include/field_effect.h"
#include "../include/field_screen_effect.h"
#include "../include/field_weather.h"
#include "../include/malloc.h"
#include "../include/main.h"
#include "../include/palette.h"
#include "../include/task.h"
#include "../include/bg.h"
#include "../include/gpu_regs.h"
#include "../include/heal_location.h"
#include "../include/window.h"
#include "../include/menu.h"
#include "../include/list_menu.h"
#include "../include/region_map.h"
#include "../include/event_data.h"
#include "../include/overworld.h"
#include "../include/script.h"
#include "../include/sound.h"
#include "../include/sprite.h"

#include "../include/constants/field_effects.h"
#include "../include/constants/field_weather.h"
#include "../include/constants/region_map_sections.h"
#include "../include/constants/maps.h"
#include "../include/constants/songs.h"
#include "../include/constants/flags.h"
#include "../include/constants/vars.h"

// If your header defines a different count macro (e.g. NUM_HEAL_LOCATIONS),
// change HEAL_LOCATION_COUNT below to match your repo.
#ifndef HEAL_LOCATION_COUNT
#define HEAL_LOCATION_COUNT  (256) // fallback; replace with your real count if defined
#endif

#define MapGroup(group, num) ((group << 8) | (num))

// enum {
//     REGION_MAP_MODE_VIEW = 0,   // read-only browser
//     REGION_MAP_MODE_FLY  = 1,   // Fly selection
//     // add more modes later if you need (e.g., dungeon map, etc.)
// };

// static u8 sRegionMapMode;
// static void (*sRegionMapExitCB)(void) = NULL;
// static inline void RegionMap_EnterMode(u8 mode, void (*exitCB)(void)) {
//     sRegionMapMode = mode; 
//     sRegionMapExitCB = exitCB;
// }

static inline bool8 MapSecHasFlySpot(u16 sec);           // per-mapsec fly spot
static inline bool8 MapSecVisited(u16 sec);              // visited flag/bit
static inline void DoFlyTo(u16 sec);                     // set warp + start effect

// static inline u16 GetCursorMapSec(void) {
//     return RegionMap_GetMapSecUnderCursor();
// }

extern const struct HealLocation gHealLocations[];

// typedef struct {
//     u16 mapSec;     // region map section ID
//     u16 healIndex;  // index into gHealLocations / GetHealLocationPointer
//     u16 visitFlag;  // FLAG_WORLD_MAP_* that marks this place visited
// } MapsecToHealLoc;

const MapsecToHealLoc sMapsecToHealLoc[] = {
    { MAPSEC_PALLET_TOWN,     0,  FLAG_WORLD_MAP_PALLET_TOWN },
    { MAPSEC_VIRIDIAN_CITY,   1,  FLAG_WORLD_MAP_VIRIDIAN_CITY },
    { MAPSEC_PEWTER_CITY,     2,  FLAG_WORLD_MAP_PEWTER_CITY },
    { MAPSEC_CERULEAN_CITY,   3,  FLAG_WORLD_MAP_CERULEAN_CITY },
    { MAPSEC_VERMILION_CITY,  4,  FLAG_WORLD_MAP_VERMILION_CITY },
    { MAPSEC_LAVENDER_TOWN,   5,  FLAG_WORLD_MAP_LAVENDER_TOWN },
    { MAPSEC_CELADON_CITY,    6,  FLAG_WORLD_MAP_CELADON_CITY },
    { MAPSEC_FUCHSIA_CITY,    7,  FLAG_WORLD_MAP_FUCHSIA_CITY },
    { MAPSEC_CINNABAR_ISLAND, 8,  FLAG_WORLD_MAP_CINNABAR_ISLAND },
    { MAPSEC_SAFFRON_CITY,    9,  FLAG_WORLD_MAP_SAFFRON_CITY },
    { MAPSEC_INDIGO_PLATEAU,  10, FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR },
    { MAPSEC_ONE_ISLAND,      11, FLAG_WORLD_MAP_ONE_ISLAND },
    { MAPSEC_TWO_ISLAND,      12, FLAG_WORLD_MAP_TWO_ISLAND },
    { MAPSEC_THREE_ISLAND,    13, FLAG_WORLD_MAP_THREE_ISLAND },
    { MAPSEC_FOUR_ISLAND,     14, FLAG_WORLD_MAP_FOUR_ISLAND },
    { MAPSEC_FIVE_ISLAND,     15, FLAG_WORLD_MAP_FIVE_ISLAND },
    { MAPSEC_SIX_ISLAND,      16, FLAG_WORLD_MAP_SIX_ISLAND },
    { MAPSEC_SEVEN_ISLAND,    17, FLAG_WORLD_MAP_SEVEN_ISLAND },
    { MAPSEC_ROUTE_4,         18, FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F },
};


// Helper: map current MAPSEC to a heal location id
static bool32 TryMapsecToHealLoc(u16 mapSec, u16 *healIndexOut)
{
    for (u32 i = 0; i < ARRAY_COUNT(sMapsecToHealLoc); i++)
    {
        if (sMapsecToHealLoc[i].mapSec == mapSec)
        {
            *healIndexOut = sMapsecToHealLoc[i].healIndex;
            return TRUE;
        }
    }
    return FALSE;
}

static inline bool8 MapSecHasFlySpot(u16 sec)
{
    u16 dummy;
    return TryMapsecToHealLoc(sec, &dummy);
}

static inline bool8 MapSecVisited(u16 sec)
{
    for (u32 i = 0; i < ARRAY_COUNT(sMapsecToHealLoc); i++)
    {
        if (sMapsecToHealLoc[i].mapSec == sec)
            return FlagGet(sMapsecToHealLoc[i].visitFlag);
    }
    return FALSE;
}

static void FieldCB_FlyOut(void)
{
    // If your repo has FadeScreen(FADE_TO_BLACK, 0), you can use that instead.
    // Using WarpFadeScreen() avoids the implicit-declaration warning you saw.
    WarpFadeScreen();

    // Warp to the destination previously set via SetWarpDestination(...)
    DoWarp();

    // Hand control back to the field. Pick the one your repo has:
    SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    // If you get a linker error on the above, change to:
    // SetMainCallback2(CB2_ReturnToField);
    // (or CB2_ReturnToFieldWithOpenMenu if that’s what your repo exports)
}

static inline void DoFlyTo(u16 sec)
{
    u16 healIdx;
    if (TryMapsecToHealLoc(sec, &healIdx))
    {
        const struct HealLocation *loc = GetHealLocationPointer(healIdx);
        if (loc != NULL)
        {
            SetWarpDestination(loc->group, loc->map, -1, loc->x, loc->y);
            gFieldCallback = FieldCB_FlyOut;
            FieldEffectStart(FLDEFF_USE_FLY);
        }
    }
}

// void OpenFlyRegionMap(void) {
//     FieldClearVBlankHBlankCallbacks(); // clear old field vblanks
//     InitRegionMapWithExitCB(0 /*view base*/, CB2_ReturnToFieldContinueScriptPlayMapMusic);
//     RegionMap_EnterMode(REGION_MAP_MODE_FLY, CB2_ReturnToFieldContinueScriptPlayMapMusic);
//     SetRegionMapVBlankCB();            // <- make sure VBlank handler is installed
//     SetMainCallback2(DoRegionMapMain); // hand control to the region map loop
// }

// ---------- Public entry points you already call ----------

// void CB2_OpenFlyMap(void)
// {
//      PlaySE(SE_PC_LOGON);

//     // wipe any previous VBlank/HBlank that could block drawing
//     FieldClearVBlankHBlankCallbacks();

//   // init region map (sets BGs, tasks, windows, etc.)
//     InitRegionMapWithExitCB(MAPSEC_PALLET_TOWN /* view base */, CB2_ReturnToFieldContinueScriptPlayMapMusic);

//     // explicitly enter Fly mode so A-button does Fly instead of just exiting

//     RegionMap_EnterMode(REGION_MAP_MODE_FLY, CB2_ReturnToFieldContinueScriptPlayMapMusic);

//     // ensure the map’s own VBlank is live so it can draw
//     SetRegionMapVBlankCB();

//     // NO FadeScreen here — keep it 100% clean
//     // SetMainCallback2(CB2_RegionMap);

//     SetMainCallback2(DoRegionMapMain);
// }

// Main callback that runs the Fly map until user picks a destination or exits
// void CB2_RegionMap(void)
// {
//     RunTasks();
//     AnimateSprites();
//     BuildOamBuffer();
//     UpdatePaletteFade();

//     // Call this unconditionally so the engine can progress and draw on the first frame
//     DoRegionMapMain();
// }

// ---------- The Fly-only main loop you were missing ----------

// static bool32 sPressedA;
// static bool32 sPressedB;

// static inline void ReadAB(void)
// {
//     sPressedA = (gMain.newKeys & A_BUTTON) != 0;
//     sPressedB = (gMain.newKeys & B_BUTTON) != 0;
// }

// static void DoFlyWarpToHealLocation(u32 healLocIndex)
// {
//     const struct HealLocation *h = GetHealLocationPointer(healLocIndex);
//     if (h == NULL)
//         return; // safety guard

//     FadeScreen(FADE_TO_BLACK, 0);

//     SetWarpDestination(h->group, h->map, -1, h->x, h->y);
//     DoWarp();
//     // If your repo doesn’t have this, just remove it:
//     ResetInitialPlayerAvatarState();
//     SetMainCallback2(CB2_LoadMap);
// }

// void DoRegionMapMain(void)
// {
//     // Always update button states each frame
//     ReadAB();

//     // Only layer custom Fly behaviour on top of the stock region map
//     if (sRegionMapMode == REGION_MAP_MODE_FLY && sPressedA)
//     {
//         u16 sec = GetCursorMapSec();

//         if (MapSecVisited(sec) && MapSecHasFlySpot(sec))
//         {
//             DoFlyTo(sec);        // sets warp + plays Fly effect
//         }
//         else
//         {
//             PlaySE(SE_ERROR);    // give feedback if invalid
//         }
//     }

//     // NOTE:
//     // - B is NOT handled here.
//     //   The stock Region Map task (run by RunTasks() in CB2_RegionMap)
//     //   already checks for B, cleans up, and calls sRegionMapExitCB.
//     //
//     // - Town Map mode (sRegionMapMode == REGION_MAP_MODE_VIEW)
//     //   falls through to stock behaviour entirely.
// }


// void DoRegionMapMain(void)
// {
//     ReadAB();  // however you poll input

//     // B = quit
//     if (sPressedB)
//     {
//         PlaySE(SE_SELECT);
//         SetMainCallback2(sRegionMapExitCB);
//         return;
//     }

//     // A = select
//     if (sPressedA)
//     {
//         u16 sec = GetCursorMapSec();

//         // if (sRegionMapMode == REGION_MAP_MODE_FLY)
//         // {
//         //     // Fly mode: only allow warp if visited + has fly spot
//         //     if (MapSecVisited(sec) && MapSecHasFlySpot(sec))
//         //     {
//         //         DoFlyTo(sec);
//         //         return;
//         //     }
//         //     else
//         //     {
//         //         PlaySE(SE_ERROR);  // invalid fly spot
//         //     }
//         // }
//         // else // REGION_MAP_MODE_VIEW
//         // {
//             // Town Map mode: just exit (or show info)
//             PlaySE(SE_SELECT);
//             SetMainCallback2(sRegionMapExitCB);
//             return;
//         // }
//     }

//     // … draw / update map cursor here …
// }

