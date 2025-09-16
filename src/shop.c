#include "defines.h"
#include "../include/global.h"
#include "../include/script.h"
#include "../include/shop.h"

#include "../include/constants/items.h"

const u16 sAllGameMart[] = {
    ITEM_POKE_BALL,
    ITEM_POTION,
    ITEM_SUPER_POTION,
    ITEM_HYPER_POTION,
    ITEM_MAX_POTION,
    ITEM_ANTIDOTE,
    ITEM_PARALYZE_HEAL,
    ITEM_AWAKENING,
    ITEM_BURN_HEAL,
    ITEM_ICE_HEAL,
    ITEM_REVIVE,
    ITEM_ESCAPE_ROPE,
    ITEM_REPEL,
    ITEM_SUPER_REPEL,
    ITEM_MAX_REPEL,
    ITEM_ETHER,
    ITEM_ABILITY_CAPSULE,
    ITEM_ABILITY_PATCH,
    ITEM_NONE,
};

const u16 sTMMart[] = {
    // ITEM_TM05, //Roar
    ITEM_TM11, //Sunny Day New
    ITEM_TM14, //Blizzard New
    ITEM_TM15, //Hyper Beam
    ITEM_TM18, //Rain Dance New
    ITEM_TM22, //Solar Beam New
    ITEM_TM25, //Thunder New
    // ITEM_TM28, //Dig
    // ITEM_TM31, //Brick Break
    ITEM_TM37, //Sandstorm New
    ITEM_TM38, //Fire Blast New
    // ITEM_TM43, //Secret Power not used anymore.
    // ITEM_TM45,   // Attract
    ITEM_TM52, //Focus Blast New
    ITEM_TM54, //False Swipe New
    ITEM_TM76, //Stealth Rock New
    ITEM_TM77, //Flame Charge New
    ITEM_TM99, //Wild Charge New
    ITEM_TM101, //Power Up Punch New
    ITEM_TM106, //Smart Strike New
    ITEM_TM107, //Acrobatics New
    ITEM_TM108, //Snarl New
    ITEM_TM111, //Smack Down New
    ITEM_TM114, //Trailblaze New
    ITEM_TM116, //Trick Room New
    ITEM_NONE,
};

const u16 sEvoMart[] = {
    ITEM_THUNDER_STONE,
    ITEM_FIRE_STONE,
    ITEM_WATER_STONE,
    ITEM_LEAF_STONE,
    ITEM_ICE_STONE,
    ITEM_DUSK_STONE,
    ITEM_DAWN_STONE,
    ITEM_LINK_CABLE,
    ITEM_NONE,
};

static u16 CountItemList(const u16 *list) {
    u16 n = 0;
    while (list[n] != ITEM_NONE)
        n++;
    return n;
}

// Shadow the usual mart lists so all “regular” shops use your stock
const u16 sMartRegular[] = {
    // just forward to your global list (optional: duplicate the items instead)
    #define FORWARD(list) list
    FORWARD(ITEM_POKE_BALL),
    FORWARD(ITEM_POTION),
    FORWARD(ITEM_SUPER_POTION),
    FORWARD(ITEM_HYPER_POTION),
    FORWARD(ITEM_MAX_POTION),
    FORWARD(ITEM_ANTIDOTE),
    FORWARD(ITEM_PARALYZE_HEAL),
    FORWARD(ITEM_AWAKENING),
    FORWARD(ITEM_BURN_HEAL),
    FORWARD(ITEM_ICE_HEAL),
    FORWARD(ITEM_REVIVE),
    FORWARD(ITEM_ESCAPE_ROPE),
    FORWARD(ITEM_REPEL),
    FORWARD(ITEM_SUPER_REPEL),
    FORWARD(ITEM_MAX_REPEL),
    FORWARD(ITEM_ETHER),
    FORWARD(ITEM_ABILITY_CAPSULE),
    FORWARD(ITEM_ABILITY_PATCH),
    ITEM_NONE,
    #undef FORWARD
};

// If your repo ever opens TM/Decor marts, make them empty or mirror too:
const u16 sMartTMHM[]   = { ITEM_NONE };     // or fill as you like
const u16 sMartDecor[]  = { ITEM_NONE };
const u16 sMartDecor2[] = { ITEM_NONE };

// extern void CreatePokemartMenu(const u16 *);

// Field special: sets the list + count, then opens the mart UI.
void Special_OpenGlobalMart(void)
{
    gShopData.itemList  = sAllGameMart;
    gShopData.itemCount = CountItemList(sAllGameMart);
    gShopData.martType  = MART_TYPE_REGULAR; // optional/safe

    // Kick the normal mart UI using our list pointer.
    // CreatePokemartMenu(sAllGameMart);
}
