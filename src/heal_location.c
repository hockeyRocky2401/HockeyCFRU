#include "../include/global.h"
#include "../include/heal_location.h"

#include "../include/constants/maps.h"


// Define all Poké Center / Fly warp points here.
// Order matters: these indices are what you pass to GetHealLocationPointer.
const struct HealLocation gHealLocations[] = {
    { MAP_GROUP(PALLET_TOWN),     MAP_NUM(PALLET_TOWN),     6,  8 }, // Pallet PC (house)
    { MAP_GROUP(VIRIDIAN_CITY),   MAP_NUM(VIRIDIAN_CITY),   26, 27 }, // Viridian PC
    { MAP_GROUP(PEWTER_CITY),     MAP_NUM(PEWTER_CITY),     17, 26 }, // Pewter PC
    { MAP_GROUP(CERULEAN_CITY),   MAP_NUM(CERULEAN_CITY),   22, 20 }, // Cerulean PC
    { MAP_GROUP(VERMILION_CITY),  MAP_NUM(VERMILION_CITY),  15, 7 }, // Vermilion PC
    { MAP_GROUP(LAVENDER_TOWN),   MAP_NUM(LAVENDER_TOWN),   6, 6 }, // Lavender PC
    { MAP_GROUP(CELADON_CITY),    MAP_NUM(CELADON_CITY),    48, 12 }, // Celadon PC
    { MAP_GROUP(FUCHSIA_CITY),    MAP_NUM(FUCHSIA_CITY),    25, 32 }, // Fuchsia PC
    { MAP_GROUP(CINNABAR_ISLAND), MAP_NUM(CINNABAR_ISLAND), 14, 12 }, // Cinnabar PC
    { MAP_GROUP(SAFFRON_CITY),    MAP_NUM(SAFFRON_CITY),    24, 39 }, // Saffron PC
    { MAP_GROUP(INDIGO_PLATEAU_EXTERIOR), MAP_NUM(INDIGO_PLATEAU_EXTERIOR), 11, 7 }, // Indigo Plateau PC
    { MAP_GROUP(ONE_ISLAND),      MAP_NUM(ONE_ISLAND),      14, 6 }, // One Island PC
    { MAP_GROUP(TWO_ISLAND),      MAP_NUM(TWO_ISLAND),      21, 8 }, // Two Island PC
    { MAP_GROUP(THREE_ISLAND),    MAP_NUM(THREE_ISLAND),    14, 28 }, // Three Island PC
    { MAP_GROUP(FOUR_ISLAND),     MAP_NUM(FOUR_ISLAND),     18, 21 }, // Four Island PC
    { MAP_GROUP(FIVE_ISLAND),     MAP_NUM(FIVE_ISLAND),     18, 7 }, // Five Island PC
    { MAP_GROUP(SIX_ISLAND),      MAP_NUM(SIX_ISLAND),      11, 12 }, // Six Island PC
    { MAP_GROUP(SEVEN_ISLAND),    MAP_NUM(SEVEN_ISLAND),    12,  4 }, // Seven Island PC
    { MAP_GROUP(ROUTE_4),         MAP_NUM(ROUTE_4),         12,  6 }, // Mt Moon PC
};

const struct HealLocation *GetHealLocationPointer(u32 loc)
{
    if (loc >= ARRAY_COUNT(gHealLocations))
        return NULL;
    return &gHealLocations[loc];
}
