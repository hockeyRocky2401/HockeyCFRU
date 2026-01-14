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
    // ITEM_TM07, //Hail New
    ITEM_TM11, //Sunny Day New
    ITEM_TM14, //Blizzard New
    ITEM_TM15, //Hyper Beam
    ITEM_TM16, //Light Screen new
    ITEM_TM18, //Rain Dance New
    ITEM_TM22, //Solar Beam New
    ITEM_TM25, //Thunder New
    // ITEM_TM28, //Dig
    // ITEM_TM31, //Brick Break
    ITEM_TM33, //Reflect new
    ITEM_TM37, //Sandstorm New
    ITEM_TM38, //Fire Blast New
    // ITEM_TM43, //Secret Power not used anymore.
    // ITEM_TM45,   // Attract
    ITEM_TM51, //Roost New
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
    // ITEM_ICE_STONE,
    // ITEM_DUSK_STONE,
    // ITEM_DAWN_STONE,
    ITEM_LINK_CABLE,
    ITEM_NONE,
};

const u16 sWeatherMart[] = {
    ITEM_SMOOTH_ROCK,
    ITEM_ICY_ROCK,
    ITEM_HEAT_ROCK,
    ITEM_DAMP_ROCK,
    ITEM_NONE,
};

const u16 sTwoIslandMart[] = {
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
    ITEM_CHOICE_SPECS,
    ITEM_CHOICE_SCARF,
    ITEM_CHOICE_BAND,
    ITEM_LIFE_ORB,
    ITEM_NONE,
};

const u16 sNewTMMart[] = {

    ITEM_TM49, //Venoshock
    ITEM_TM56, //Earth Power
    ITEM_TM62, //Ice Spinner
    ITEM_TM64, //Expanding Force
    ITEM_TM80, //Scorching Sands
    ITEM_TM85, //Grassy Terrain
    ITEM_TM87, //Electric Terrain
    ITEM_TM88, //Misty Terrain
    ITEM_TM94, //Psychic Terrain
    ITEM_TM109, //Defog
    ITEM_NONE,
};

const u16 sMintMart[] = {

    ITEM_ADAMANT_MINT,
    ITEM_BOLD_MINT,
    ITEM_BRAVE_MINT,
    ITEM_CALM_MINT,
    ITEM_CAREFUL_MINT,
    ITEM_GENTLE_MINT,
    ITEM_HASTY_MINT,
    ITEM_IMPISH_MINT,
    ITEM_JOLLY_MINT,
    ITEM_LONELY_MINT,
    ITEM_LAX_MINT,
    ITEM_MILD_MINT,
    ITEM_MODEST_MINT,
    ITEM_NAUGHTY_MINT,
    ITEM_NAIVE_MINT,
    ITEM_QUIET_MINT,
    ITEM_RASH_MINT,
    ITEM_RELAXED_MINT,
    ITEM_SASSY_MINT,
    ITEM_SERIOUS_MINT,
    ITEM_TIMID_MINT,
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
