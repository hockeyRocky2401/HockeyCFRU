#pragma once

#include "global.h"

#include "bg.h"

enum
{
    REGIONMAP_TYPE_NORMAL,
    REGIONMAP_TYPE_WALL,
    REGIONMAP_TYPE_FLY,
    REGIONMAP_TYPE_COUNT
};

u8* __attribute__((long_call)) GetMapName(u8* dest, u16 regionMapId, u16 padLength);
u8 __attribute__((long_call)) GetSelectedRegionMap(void);
void __attribute__((long_call)) InitRegionMapWithExitCB(u8 a0, void (*a1)(void));
bool32 __attribute__((long_call)) RegionMap_IsReady(void);
bool32 __attribute__((long_call)) RegionMap_WantsToQuit(void);
bool32 __attribute__((long_call)) RegionMap_GetSelection(u8 *mapGroup, u8 *mapNum);
void __attribute__((long_call)) SetRegionMapVBlankCB(void);
void __attribute__((long_call)) FieldClearVBlankHBlankCallbacks(void);
u16 __attribute__((long_call)) RegionMap_GetMapSecUnderCursor(void);
// Region Map routines from FireRed (BPRE 1.0)
#define CB2_REGIONMAP_ADDR 0x080F08F9  // FireRed v1.0, THUMB entrypoint
#define CB2_RegionMap ((void (*)(void))(CB2_REGIONMAP_ADDR))
// void __attribute__((long_call)) CB2_RegionMap(void);
// void __attribute__((long_call)) Task_RegionMapMain(u8 taskId);
#define FIELDSPECIAL_FLYMAP_ADDR 0x0809A49D
#define FieldSpecial_Flymap ((void (*)(void))(FIELDSPECIAL_FLYMAP_ADDR | 1))

void CB2_OpenFlyMap(void);   // add this line
// void CB2_RegionMap(void);    // and maybe this too
void DoRegionMapMain(void);
void OpenFlyRegionMap(void);

typedef struct {
    u16 mapSec;     // region map section ID
    u16 healIndex;  // index into gHealLocations / GetHealLocationPointer
    u16 visitFlag;  // FLAG_WORLD_MAP_* that marks this place visited
} MapsecToHealLoc;

extern const MapsecToHealLoc sMapsecToHealLoc[];
u32 GetFlyLocationCount(void);