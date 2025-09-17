#include "../config.h"
#include "../../include/global.h"
#include "../../include/constants/maps.h"
#include "../../include/wild_encounter.h"
#include "../../include/constants/region_map_sections.h"
#include "../../include/constants/species.h"

/*
wild_encounter_tables.c
	day/night and/or regular map wild encounter species

tables to edit:
	gWildMonMorningHeaders 4-8 AM
	gWildMonDayHeaders 8-5 PM
	gWildMonEveningHeaders 5-8 PM
	gWildMonNightHeaders 8-4 AM
	gSwarmTable (Added an example entry, you can add more!)

*/

#ifndef UNBOUND //Modify this section

//Route 1
const struct WildPokemon gRoute1_LandMonsMorning[] =
{
	// {2, 3, SPECIES_ZIGZAGOON},
	// {2, 3, SPECIES_TAILLOW},
	// {2, 3, SPECIES_LOTAD},
	// {2, 3, SPECIES_SHROOMISH},
	// {2, 3, SPECIES_PAWMI},
	// {2, 3, SPECIES_MINCCINO},
	// {2, 3, SPECIES_MAKUHITA},
	// {2, 3, SPECIES_FLABEBE},
	// {2, 3, SPECIES_WINGULL},
	// {2, 2, SPECIES_VULPIX},
	// {2, 3, SPECIES_ELECTRIKE},
	// {2, 3, SPECIES_RIOLU},
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_BULBASAUR},
	{5, 5, SPECIES_SQUIRTLE},
	{5, 5, SPECIES_CHARMANDER},
};

// const struct WildPokemonInfo gRoute1_LandMonsInfoMorning = {15, gRoute1_LandMonsMorning};
const struct WildPokemonInfo gRoute1_LandMonsInfoMorning = {21, gRoute1_LandMonsMorning};

const struct WildPokemon gRoute1_LandMonsDay[] =
{
    // {2, 3, SPECIES_ZIGZAGOON},       // Classic early Normal-type
    // {2, 3, SPECIES_BUIZEL},          // Water-type, Gen 4 freshness
    // {2, 3, SPECIES_ROOKIDEE},        // Flying/Steel later on, Gen 8 bird
    // {2, 3, SPECIES_BUNEARY},         // Fast Normal-type with potential
    // {2,  3, SPECIES_SEWADDLE},        // Bug/Grass option, early status
    // {2,  3, SPECIES_SNOM},            // Unique Ice/Bug type
    // {2,  3, SPECIES_JOLTIK},          // Tiny Electric/Bug variety
    // {2,  3, SPECIES_HOUNDOUR},        // Fire/Dark, adds good offensive typing
    // {1,  3, SPECIES_DEERLING},        // Daytime flavor (Spring form)
    // {2,  3, SPECIES_MUNCHLAX},        // Bulky rare Normal-type
    // {2,  3, SPECIES_DREEPY},          // Ghost/Dragon rare and fun
    // {1,  3, SPECIES_TINKATINK},       // Fairy/Steel rare treasure
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_BULBASAUR},
	{5, 5, SPECIES_SQUIRTLE},
	{5, 5, SPECIES_CHARMANDER},
};

// const struct WildPokemonInfo gRoute1_LandMonsInfoDay = {15, gRoute1_LandMonsDay};
const struct WildPokemonInfo gRoute1_LandMonsInfoDay = {21, gRoute1_LandMonsDay};

const struct WildPokemon gRoute1_LandMonsEvening[] =
{
    // {2, 3, SPECIES_NIDORAN_M},     // Slightly edgy dusk encounter
    // {2, 3, SPECIES_NIDORAN_F},     // Pair with above, classic duo
    // {2, 3, SPECIES_MURKROW},       // Dusk-themed Flying/Dark
    // {2, 3, SPECIES_SNUBBULL},      // Fairy type, temperamental vibes
    // {2, 3, SPECIES_BUNEARY},       // Cute, dusk-active rabbit
    // {2, 3, SPECIES_NICKIT},        // Sly Gen 8 fox, fits dusk perfectly
    // {2, 3, SPECIES_GOSSIFLEUR},    // Soft Grass-type, calm evening wind
    // {2, 3, SPECIES_YAMPER},        // Cheerful Electric-type for contrast
    // {2, 3, SPECIES_DRIFLOON},      // Ghost-type, creepy dusk lore
    // {2, 2, SPECIES_HOUNDOUR},      // Edgy Fire/Dark, good evening fit
    // {2, 3, SPECIES_GLAMEOW},       // Mysterious cat, very dusk-like
    // {2, 3, SPECIES_TOXEL},         // Spiky, dusk-electric baby
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_BULBASAUR},
	{5, 5, SPECIES_SQUIRTLE},
	{5, 5, SPECIES_CHARMANDER},
};

// const struct WildPokemonInfo gRoute1_LandMonsInfoEvening = {15, gRoute1_LandMonsEvening};
const struct WildPokemonInfo gRoute1_LandMonsInfoEvening = {21, gRoute1_LandMonsEvening};

const struct WildPokemon gRoute1_LandMonsNight[] =
{
    // {2, 3, SPECIES_HOOTHOOT},       // Classic owl, perfect for night
    // {2, 3, SPECIES_POOCHYENA},      // Night-prowling Dark-type
    // {2, 3, SPECIES_SPINARAK},       // Nocturnal Bug/Poison
    // {2, 3, SPECIES_CUTIEFLY},       // Gentle fluttery fairy at night
    // {2, 3, SPECIES_SANDSHREW},      // Ground type, fits cooler nights
    // {2, 3, SPECIES_CLEFFA},         // Dreamlike baby Fairy
    // {2, 3, SPECIES_FRIGIBAX},       // Cold-blooded Dragon/Ice baby
    // {2, 3, SPECIES_LITLEO},         // Night hunting Fire-type
    // {2, 3, SPECIES_GASTLY},         // Mandatory spooky ghost 👻
    // {2, 2, SPECIES_MISDREAVUS},     // Pure ghost — mysterious and elegant
    // {2, 3, SPECIES_ZORUA},          // Trickster at night
    // {2, 3, SPECIES_MEOWTH_A},  // Dark-type variant, night stalker
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 3, SPECIES_RATTATA},
	{2, 3, SPECIES_PIDGEY},
	{2, 4, SPECIES_RATTATA},
	{2, 4, SPECIES_PIDGEY},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_BULBASAUR},
	{5, 5, SPECIES_SQUIRTLE},
	{5, 5, SPECIES_CHARMANDER},
};

// const struct WildPokemonInfo gRoute1_LandMonsInfoNight = {15, gRoute1_LandMonsNight};
const struct WildPokemonInfo gRoute1_LandMonsInfoNight = {21, gRoute1_LandMonsNight};

//Route 2
const struct WildPokemon gRoute2_LandMonsMorning[] =
{
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_SANDSHREW},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
};

const struct WildPokemonInfo gRoute2_LandMonsInfoMorning = {21, gRoute2_LandMonsMorning};

const struct WildPokemon gRoute2_LandMonsDay[] =
{
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_SANDSHREW},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
};

const struct WildPokemonInfo gRoute2_LandMonsInfoDay = {21, gRoute2_LandMonsDay};

const struct WildPokemon gRoute2_LandMonsEvening[] =
{
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_SANDSHREW},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
};

const struct WildPokemonInfo gRoute2_LandMonsInfoEvening = {21, gRoute2_LandMonsEvening};

const struct WildPokemon gRoute2_LandMonsNight[] =
{
	{3, 5, SPECIES_PIDGEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_SANDSHREW},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
	// {3, 5, SPECIES_ZOROARK},
};

const struct WildPokemonInfo gRoute2_LandMonsInfoNight = {21, gRoute2_LandMonsNight};

//Route 22

const struct WildPokemon gRoute22_LandMonsMorning[] =
{
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_SPEAROW},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_EKANS},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_POLIWAG},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
};

const struct WildPokemonInfo gRoute22_LandMonsInfoMorning = {21, gRoute22_LandMonsMorning};

const struct WildPokemon gRoute22_LandMonsDay[] =
{
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_SPEAROW},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_EKANS},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_POLIWAG},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
};

const struct WildPokemonInfo gRoute22_LandMonsInfoDay = {21, gRoute22_LandMonsDay};

const struct WildPokemon gRoute22_LandMonsEvening[] =
{
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_SPEAROW},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_EKANS},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_POLIWAG},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
};

const struct WildPokemonInfo gRoute22_LandMonsInfoEvening = {21, gRoute22_LandMonsEvening};

const struct WildPokemon gRoute22_LandMonsNight[] =
{
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_RATTATA},
	{3, 5, SPECIES_SPEAROW},
	{3, 5, SPECIES_NIDORAN_M},
	{3, 5, SPECIES_NIDORAN_F},
	{3, 5, SPECIES_EKANS},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_POLIWAG},
	{3, 5, SPECIES_MANKEY},
	{3, 5, SPECIES_VULPIX},
	{3, 5, SPECIES_POLIWAG},
};

const struct WildPokemonInfo gRoute22_LandMonsInfoNight = {21, gRoute22_LandMonsNight};

//Viridian Forest

const struct WildPokemon gViridianForest_LandMonsMorning[] =
{
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_VENONAT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_BULBASAUR},
};

const struct WildPokemonInfo gViridianForest_LandMonsInfoMorning = {14, gViridianForest_LandMonsMorning};

const struct WildPokemon gViridianForest_LandMonsDay[] =
{
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_VENONAT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_BULBASAUR},
};

const struct WildPokemonInfo gViridianForest_LandMonsInfoDay = {14, gViridianForest_LandMonsDay};

const struct WildPokemon gViridianForest_LandMonsEvening[] =
{
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_VENONAT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_BULBASAUR},
};

const struct WildPokemonInfo gViridianForest_LandMonsInfoEvening = {14, gViridianForest_LandMonsEvening};

const struct WildPokemon gViridianForest_LandMonsNight[] =
{
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_ODDISH},
	{3, 5, SPECIES_BELLSPROUT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{3, 5, SPECIES_VENONAT},
	{3, 5, SPECIES_CATERPIE},
	{3, 5, SPECIES_WEEDLE},
	{5, 5, SPECIES_PIKACHU},
	{5, 5, SPECIES_EEVEE},
	{5, 5, SPECIES_BULBASAUR},
};

const struct WildPokemonInfo gViridianForest_LandMonsInfoNight = {14, gViridianForest_LandMonsNight};

//Route 3

const struct WildPokemon gRoute3_LandMonsMorning[] =
{
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_MANKEY},
	{10, 12, SPECIES_EKANS},
	{10, 12, SPECIES_NIDORAN_M},
	{10, 12, SPECIES_NIDORAN_F},
	{10, 12, SPECIES_SANDSHREW},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute3_LandMonsInfoMorning = {21, gRoute3_LandMonsMorning};

const struct WildPokemon gRoute3_LandMonsDay[] =
{
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_MANKEY},
	{10, 12, SPECIES_EKANS},
	{10, 12, SPECIES_NIDORAN_M},
	{10, 12, SPECIES_NIDORAN_F},
	{10, 12, SPECIES_SANDSHREW},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute3_LandMonsInfoDay = {21, gRoute3_LandMonsDay};

const struct WildPokemon gRoute3_LandMonsEvening[] =
{
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_MANKEY},
	{10, 12, SPECIES_EKANS},
	{10, 12, SPECIES_NIDORAN_M},
	{10, 12, SPECIES_NIDORAN_F},
	{10, 12, SPECIES_SANDSHREW},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute3_LandMonsInfoEvening = {21, gRoute3_LandMonsEvening};

const struct WildPokemon gRoute3_LandMonsNight[] =
{
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_MANKEY},
	{10, 12, SPECIES_EKANS},
	{10, 12, SPECIES_NIDORAN_M},
	{10, 12, SPECIES_NIDORAN_F},
	{10, 12, SPECIES_SANDSHREW},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_SPEAROW},
	{10, 12, SPECIES_PIDGEY},
	{10, 12, SPECIES_JIGGLYPUFF},
	{10, 12, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute3_LandMonsInfoNight = {21, gRoute3_LandMonsNight};

//Mt. Moon

const struct WildPokemon gMtMoon_LandMonsMorning[] =
{
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_CLEFAIRY},
	{11, 13, SPECIES_ONIX},
	{11, 13, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gMtMoon_LandMonsInfoMorning = {7, gMtMoon_LandMonsMorning};

const struct WildPokemon gMtMoon_LandMonsDay[] =
{
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_CLEFAIRY},
	{11, 13, SPECIES_ONIX},
	{11, 13, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gMtMoon_LandMonsInfoDay = {7, gMtMoon_LandMonsDay};

const struct WildPokemon gMtMoon_LandMonsEvening[] =
{
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_CLEFAIRY},
	{11, 13, SPECIES_ONIX},
	{11, 13, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gMtMoon_LandMonsInfoEvening = {7, gMtMoon_LandMonsEvening};

const struct WildPokemon gMtMoon_LandMonsNight[] =
{
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_ZUBAT},
	{11, 13, SPECIES_GEODUDE},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_SANDSHREW},
	{11, 13, SPECIES_CLEFAIRY},
	{11, 13, SPECIES_ONIX},
	{11, 13, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gMtMoon_LandMonsInfoNight = {7, gMtMoon_LandMonsNight};

//Mt. Moon B1F

const struct WildPokemon gMtMoonB_LandMonsMorning[] =
{
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
};

const struct WildPokemonInfo gMtMoonB_LandMonsInfoMorning = {7, gMtMoonB_LandMonsMorning};

const struct WildPokemon gMtMoonB_LandMonsDay[] =
{
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
};

const struct WildPokemonInfo gMtMoonB_LandMonsInfoDay = {7, gMtMoonB_LandMonsDay};

const struct WildPokemon gMtMoonB_LandMonsEvening[] =
{
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
};

const struct WildPokemonInfo gMtMoonB_LandMonsInfoEvening = {7, gMtMoonB_LandMonsEvening};

const struct WildPokemon gMtMoonB_LandMonsNight[] =
{
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
	{11, 13, SPECIES_PARAS},
};

const struct WildPokemonInfo gMtMoonB_LandMonsInfoNight = {7, gMtMoonB_LandMonsNight};

//Route 4

const struct WildPokemon gRoute4_LandMonsMorning[] =
{
	{13, 15, SPECIES_SPEAROW},
	{13, 15, SPECIES_RATTATA},
	{13, 15, SPECIES_MANKEY},
	{13, 15, SPECIES_EKANS},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_MACHOP},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute4_LandMonsInfoMorning = {21, gRoute4_LandMonsMorning};

const struct WildPokemon gRoute4_LandMonsDay[] =
{
	{13, 15, SPECIES_SPEAROW},
	{13, 15, SPECIES_RATTATA},
	{13, 15, SPECIES_MANKEY},
	{13, 15, SPECIES_EKANS},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_MACHOP},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute4_LandMonsInfoDay = {21, gRoute4_LandMonsDay};

const struct WildPokemon gRoute4_LandMonsEvening[] =
{
	{13, 15, SPECIES_SPEAROW},
	{13, 15, SPECIES_RATTATA},
	{13, 15, SPECIES_MANKEY},
	{13, 15, SPECIES_EKANS},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_MACHOP},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute4_LandMonsInfoEvening = {21, gRoute4_LandMonsEvening};

const struct WildPokemon gRoute4_LandMonsNight[] =
{
	{13, 15, SPECIES_SPEAROW},
	{13, 15, SPECIES_RATTATA},
	{13, 15, SPECIES_MANKEY},
	{13, 15, SPECIES_EKANS},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_MACHOP},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_CLEFAIRY},
};

const struct WildPokemonInfo gRoute4_LandMonsInfoNight = {21, gRoute4_LandMonsNight};

//Route 24

const struct WildPokemon gRoute24_LandMonsMorning[] =
{
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_PIDGEY},
	{13, 15, SPECIES_CATERPIE},
	{13, 15, SPECIES_WEEDLE},
	{13, 15, SPECIES_METAPOD},
	{13, 15, SPECIES_KAKUNA},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ABRA},
	{13, 15, SPECIES_BUTTERFREE},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute24_LandMonsInfoMorning = {21, gRoute24_LandMonsMorning};

const struct WildPokemon gRoute24_LandMonsDay[] =
{
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_PIDGEY},
	{13, 15, SPECIES_CATERPIE},
	{13, 15, SPECIES_WEEDLE},
	{13, 15, SPECIES_METAPOD},
	{13, 15, SPECIES_KAKUNA},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ABRA},
	{13, 15, SPECIES_BUTTERFREE},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute24_LandMonsInfoDay = {21, gRoute24_LandMonsDay};

const struct WildPokemon gRoute24_LandMonsEvening[] =
{
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_PIDGEY},
	{13, 15, SPECIES_CATERPIE},
	{13, 15, SPECIES_WEEDLE},
	{13, 15, SPECIES_METAPOD},
	{13, 15, SPECIES_KAKUNA},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ABRA},
	{13, 15, SPECIES_BUTTERFREE},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute24_LandMonsInfoEvening = {21, gRoute24_LandMonsEvening};

const struct WildPokemon gRoute24_LandMonsNight[] =
{
	{13, 15, SPECIES_ODDISH},
	{13, 15, SPECIES_BELLSPROUT},
	{13, 15, SPECIES_PIDGEY},
	{13, 15, SPECIES_CATERPIE},
	{13, 15, SPECIES_WEEDLE},
	{13, 15, SPECIES_METAPOD},
	{13, 15, SPECIES_KAKUNA},
	{13, 15, SPECIES_GOLDEEN},
	{13, 15, SPECIES_ABRA},
	{13, 15, SPECIES_BUTTERFREE},
	{13, 15, SPECIES_SQUIRTLE},
	{13, 15, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute24_LandMonsInfoNight = {21, gRoute24_LandMonsNight};

//Route 25

const struct WildPokemon gRoute25_LandMonsMorning[] =
{
	{15, 17, SPECIES_ODDISH},
	{15, 17, SPECIES_BELLSPROUT},
	{15, 17, SPECIES_PIDGEY},
	{15, 17, SPECIES_CATERPIE},
	{15, 17, SPECIES_WEEDLE},
	{15, 17, SPECIES_HORSEA},
	{15, 17, SPECIES_SLOWPOKE},
	{15, 17, SPECIES_GOLDEEN},
	{15, 17, SPECIES_ABRA},
	{15, 17, SPECIES_BUTTERFREE},
	{15, 17, SPECIES_SQUIRTLE},
	{15, 17, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute25_LandMonsInfoMorning = {21, gRoute25_LandMonsMorning};

const struct WildPokemon gRoute25_LandMonsDay[] =
{
	{15, 17, SPECIES_ODDISH},
	{15, 17, SPECIES_BELLSPROUT},
	{15, 17, SPECIES_PIDGEY},
	{15, 17, SPECIES_CATERPIE},
	{15, 17, SPECIES_WEEDLE},
	{15, 17, SPECIES_HORSEA},
	{15, 17, SPECIES_SLOWPOKE},
	{15, 17, SPECIES_GOLDEEN},
	{15, 17, SPECIES_ABRA},
	{15, 17, SPECIES_BUTTERFREE},
	{15, 17, SPECIES_SQUIRTLE},
	{15, 17, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute25_LandMonsInfoDay = {21, gRoute25_LandMonsDay};

const struct WildPokemon gRoute25_LandMonsEvening[] =
{
	{15, 17, SPECIES_ODDISH},
	{15, 17, SPECIES_BELLSPROUT},
	{15, 17, SPECIES_PIDGEY},
	{15, 17, SPECIES_CATERPIE},
	{15, 17, SPECIES_WEEDLE},
	{15, 17, SPECIES_HORSEA},
	{15, 17, SPECIES_SLOWPOKE},
	{15, 17, SPECIES_GOLDEEN},
	{15, 17, SPECIES_ABRA},
	{15, 17, SPECIES_BUTTERFREE},
	{15, 17, SPECIES_SQUIRTLE},
	{15, 17, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute25_LandMonsInfoEvening = {21, gRoute25_LandMonsEvening};

const struct WildPokemon gRoute25_LandMonsNight[] =
{
	{15, 17, SPECIES_ODDISH},
	{15, 17, SPECIES_BELLSPROUT},
	{15, 17, SPECIES_PIDGEY},
	{15, 17, SPECIES_CATERPIE},
	{15, 17, SPECIES_WEEDLE},
	{15, 17, SPECIES_HORSEA},
	{15, 17, SPECIES_SLOWPOKE},
	{15, 17, SPECIES_GOLDEEN},
	{15, 17, SPECIES_ABRA},
	{15, 17, SPECIES_BUTTERFREE},
	{15, 17, SPECIES_SQUIRTLE},
	{15, 17, SPECIES_BEEDRILL},
};

const struct WildPokemonInfo gRoute25_LandMonsInfoNight = {21, gRoute25_LandMonsNight};

//Route 5

const struct WildPokemon gRoute5_LandMonsMorning[] =
{
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 18, SPECIES_PSYDUCK},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_PSYDUCK},
	{18, 18, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute5_LandMonsInfoMorning = {21, gRoute5_LandMonsMorning};

const struct WildPokemon gRoute5_LandMonsDay[] =
{
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 18, SPECIES_PSYDUCK},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_PSYDUCK},
	{18, 18, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute5_LandMonsInfoDay = {21, gRoute5_LandMonsDay};

const struct WildPokemon gRoute5_LandMonsEvening[] =
{
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 18, SPECIES_PSYDUCK},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_PSYDUCK},
	{18, 18, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute5_LandMonsInfoEvening = {21, gRoute5_LandMonsEvening};

const struct WildPokemon gRoute5_LandMonsNight[] =
{
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_ODDISH},
	{16, 18, SPECIES_BELLSPROUT},
	{16, 18, SPECIES_PSYDUCK},
	{16, 18, SPECIES_MEOWTH},
	{16, 18, SPECIES_PSYDUCK},
	{18, 18, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute5_LandMonsInfoNight = {21, gRoute5_LandMonsNight};

//Route 6

const struct WildPokemon gRoute6_LandMonsMorning[] =
{
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{17, 19, SPECIES_PSYDUCK},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_PSYDUCK},
	{18, 19, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute6_LandMonsInfoMorning = {21, gRoute6_LandMonsMorning};

const struct WildPokemon gRoute6_LandMonsDay[] =
{
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{17, 19, SPECIES_PSYDUCK},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_PSYDUCK},
	{18, 19, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute6_LandMonsInfoDay = {21, gRoute6_LandMonsDay};

const struct WildPokemon gRoute6_LandMonsEvening[] =
{
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{17, 19, SPECIES_PSYDUCK},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_PSYDUCK},
	{18, 19, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute6_LandMonsInfoEvening = {21, gRoute6_LandMonsEvening};

const struct WildPokemon gRoute6_LandMonsNight[] =
{
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{16, 17, SPECIES_PIDGEY},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_ODDISH},
	{17, 19, SPECIES_BELLSPROUT},
	{17, 19, SPECIES_PSYDUCK},
	{17, 19, SPECIES_MEOWTH},
	{17, 19, SPECIES_PSYDUCK},
	{18, 19, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute6_LandMonsInfoNight = {21, gRoute6_LandMonsNight};

//Route 11

const struct WildPokemon gRoute11_LandMonsMorning[] =
{
	{20, 20, SPECIES_EKANS},
	{20, 20, SPECIES_SANDSHREW},
	{20, 22, SPECIES_SPEAROW},
	{20, 22, SPECIES_POLIWAG},
	{20, 22, SPECIES_DROWZEE},
	{20, 22, SPECIES_FARFETCHD},
	{20, 22, SPECIES_MR_MIME},
	{20, 22, SPECIES_ELECTABUZZ},
	{20, 22, SPECIES_MR_MIME},
	{21, 22, SPECIES_FEAROW},
	{21, 22, SPECIES_ARBOK},
	{21, 22, SPECIES_SANDSLASH},
};

const struct WildPokemonInfo gRoute11_LandMonsInfoMorning = {21, gRoute11_LandMonsMorning};

const struct WildPokemon gRoute11_LandMonsDay[] =
{
	{20, 20, SPECIES_EKANS},
	{20, 20, SPECIES_SANDSHREW},
	{20, 22, SPECIES_SPEAROW},
	{20, 22, SPECIES_POLIWAG},
	{20, 22, SPECIES_DROWZEE},
	{20, 22, SPECIES_FARFETCHD},
	{20, 22, SPECIES_MR_MIME},
	{20, 22, SPECIES_ELECTABUZZ},
	{20, 22, SPECIES_MR_MIME},
	{21, 22, SPECIES_FEAROW},
	{21, 22, SPECIES_ARBOK},
	{21, 22, SPECIES_SANDSLASH},
};

const struct WildPokemonInfo gRoute11_LandMonsInfoDay = {21, gRoute11_LandMonsDay};

const struct WildPokemon gRoute11_LandMonsEvening[] =
{
	{20, 20, SPECIES_EKANS},
	{20, 20, SPECIES_SANDSHREW},
	{20, 22, SPECIES_SPEAROW},
	{20, 22, SPECIES_POLIWAG},
	{20, 22, SPECIES_DROWZEE},
	{20, 22, SPECIES_FARFETCHD},
	{20, 22, SPECIES_MR_MIME},
	{20, 22, SPECIES_ELECTABUZZ},
	{20, 22, SPECIES_MR_MIME},
	{21, 22, SPECIES_FEAROW},
	{21, 22, SPECIES_ARBOK},
	{21, 22, SPECIES_SANDSLASH},
};

const struct WildPokemonInfo gRoute11_LandMonsInfoEvening = {21, gRoute11_LandMonsEvening};

const struct WildPokemon gRoute11_LandMonsNight[] =
{
	{20, 20, SPECIES_EKANS},
	{20, 20, SPECIES_SANDSHREW},
	{20, 22, SPECIES_SPEAROW},
	{20, 22, SPECIES_POLIWAG},
	{20, 22, SPECIES_DROWZEE},
	{20, 22, SPECIES_FARFETCHD},
	{20, 22, SPECIES_MR_MIME},
	{20, 22, SPECIES_ELECTABUZZ},
	{20, 22, SPECIES_MR_MIME},
	{21, 22, SPECIES_FEAROW},
	{21, 22, SPECIES_ARBOK},
	{21, 22, SPECIES_SANDSLASH},
};

const struct WildPokemonInfo gRoute11_LandMonsInfoNight = {21, gRoute11_LandMonsNight};

//Digletts Cave B1F

const struct WildPokemon gDiglettsCave_LandMonsMorning[] =
{
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
};

const struct WildPokemonInfo gDiglettsCave_LandMonsInfoMorning = {7, gDiglettsCave_LandMonsMorning};

const struct WildPokemon gDiglettsCave_LandMonsDay[] =
{
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
};

const struct WildPokemonInfo gDiglettsCave_LandMonsInfoDay = {7, gDiglettsCave_LandMonsDay};

const struct WildPokemon gDiglettsCave_LandMonsEvening[] =
{
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
};

const struct WildPokemonInfo gDiglettsCave_LandMonsInfoEvening = {7, gDiglettsCave_LandMonsEvening};

const struct WildPokemon gDiglettsCave_LandMonsNight[] =
{
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
	{20, 22, SPECIES_DIGLETT},
	{28, 33, SPECIES_DUGTRIO},
};

const struct WildPokemonInfo gDiglettsCave_LandMonsInfoNight = {7, gDiglettsCave_LandMonsNight};

//Route 9

const struct WildPokemon gRoute9_LandMonsMorning[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute9_LandMonsInfoMorning = {21, gRoute9_LandMonsMorning};

const struct WildPokemon gRoute9_LandMonsDay[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute9_LandMonsInfoDay = {21, gRoute9_LandMonsDay};

const struct WildPokemon gRoute9_LandMonsEvening[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute9_LandMonsInfoEvening = {21, gRoute9_LandMonsEvening};

const struct WildPokemon gRoute9_LandMonsNight[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute9_LandMonsInfoNight = {21, gRoute9_LandMonsNight};

//Route 10

const struct WildPokemon gRoute10_LandMonsMorning[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute10_LandMonsInfoMorning = {21, gRoute10_LandMonsMorning};

const struct WildPokemon gRoute10_LandMonsDay[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute10_LandMonsInfoDay = {21, gRoute10_LandMonsDay};

const struct WildPokemon gRoute10_LandMonsEvening[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute10_LandMonsInfoEvening = {21, gRoute10_LandMonsEvening};

const struct WildPokemon gRoute10_LandMonsNight[] =
{
	{21, 23, SPECIES_RATTATA},
	{21, 23, SPECIES_SPEAROW},
	{21, 23, SPECIES_MACHOP},
	{21, 23, SPECIES_MAGNEMITE},
	{21, 23, SPECIES_VOLTORB},
	{21, 23, SPECIES_GRIMER},
	{21, 23, SPECIES_KOFFING},
	{21, 23, SPECIES_RATICATE},
	{21, 23, SPECIES_ELECTABUZZ},
	{21, 23, SPECIES_CHARMANDER},
	{21, 23, SPECIES_FEAROW},
	{21, 23, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRoute10_LandMonsInfoNight = {21, gRoute10_LandMonsNight};

//Rock Tunnel

const struct WildPokemon gRockTunnel_LandMonsMorning[] =
{
	{22, 24, SPECIES_GEODUDE},
	{22, 24, SPECIES_ZUBAT},
	{22, 24, SPECIES_MACHOP},
	{22, 24, SPECIES_MANKEY},
	{22, 24, SPECIES_RHYHORN},
	{22, 24, SPECIES_CUBONE},
	{22, 24, SPECIES_CHARMANDER},
	{22, 24, SPECIES_ONIX},
	{22, 24, SPECIES_HITMONLEE},
	{22, 24, SPECIES_HITMONCHAN},
	{22, 24, SPECIES_KANGASKHAN},
	{22, 24, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRockTunnel_LandMonsInfoMorning = {7, gRockTunnel_LandMonsMorning};

const struct WildPokemon gRockTunnel_LandMonsDay[] =
{
	{22, 24, SPECIES_GEODUDE},
	{22, 24, SPECIES_ZUBAT},
	{22, 24, SPECIES_MACHOP},
	{22, 24, SPECIES_MANKEY},
	{22, 24, SPECIES_RHYHORN},
	{22, 24, SPECIES_CUBONE},
	{22, 24, SPECIES_CHARMANDER},
	{22, 24, SPECIES_ONIX},
	{22, 24, SPECIES_HITMONLEE},
	{22, 24, SPECIES_HITMONCHAN},
	{22, 24, SPECIES_KANGASKHAN},
	{22, 24, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRockTunnel_LandMonsInfoDay = {7, gRockTunnel_LandMonsDay};

const struct WildPokemon gRockTunnel_LandMonsEvening[] =
{
	{22, 24, SPECIES_GEODUDE},
	{22, 24, SPECIES_ZUBAT},
	{22, 24, SPECIES_MACHOP},
	{22, 24, SPECIES_MANKEY},
	{22, 24, SPECIES_RHYHORN},
	{22, 24, SPECIES_CUBONE},
	{22, 24, SPECIES_CHARMANDER},
	{22, 24, SPECIES_ONIX},
	{22, 24, SPECIES_HITMONLEE},
	{22, 24, SPECIES_HITMONCHAN},
	{22, 24, SPECIES_KANGASKHAN},
	{22, 24, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRockTunnel_LandMonsInfoEvening = {7, gRockTunnel_LandMonsEvening};

const struct WildPokemon gRockTunnel_LandMonsNight[] =
{
	{22, 24, SPECIES_GEODUDE},
	{22, 24, SPECIES_ZUBAT},
	{22, 24, SPECIES_MACHOP},
	{22, 24, SPECIES_MANKEY},
	{22, 24, SPECIES_RHYHORN},
	{22, 24, SPECIES_CUBONE},
	{22, 24, SPECIES_CHARMANDER},
	{22, 24, SPECIES_ONIX},
	{22, 24, SPECIES_HITMONLEE},
	{22, 24, SPECIES_HITMONCHAN},
	{22, 24, SPECIES_KANGASKHAN},
	{22, 24, SPECIES_CHARMELEON},
};

const struct WildPokemonInfo gRockTunnel_LandMonsInfoNight = {7, gRockTunnel_LandMonsNight};

//Pokemon Tower

const struct WildPokemon gPokemonTower_LandMonsMorning[] =
{
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
};

const struct WildPokemonInfo gPokemonTower_LandMonsInfoMorning = {7, gPokemonTower_LandMonsMorning};

const struct WildPokemon gPokemonTower_LandMonsDay[] =
{
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
};

const struct WildPokemonInfo gPokemonTower_LandMonsInfoDay = {7, gPokemonTower_LandMonsDay};

const struct WildPokemon gPokemonTower_LandMonsEvening[] =
{
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
};

const struct WildPokemonInfo gPokemonTower_LandMonsInfoEvening = {7, gPokemonTower_LandMonsEvening};

const struct WildPokemon gPokemonTower_LandMonsNight[] =
{
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
	{24, 24, SPECIES_GASTLY},
	{27, 28, SPECIES_HAUNTER},
};

const struct WildPokemonInfo gPokemonTower_LandMonsInfoNight = {7, gPokemonTower_LandMonsNight};

//Route 8

const struct WildPokemon gRoute8_LandMonsMorning[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_ARBOK},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute8_LandMonsInfoMorning = {21, gRoute8_LandMonsMorning};

const struct WildPokemon gRoute8_LandMonsDay[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_ARBOK},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute8_LandMonsInfoDay = {21, gRoute8_LandMonsDay};

const struct WildPokemon gRoute8_LandMonsEvening[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_ARBOK},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute8_LandMonsInfoEvening = {21, gRoute8_LandMonsEvening};

const struct WildPokemon gRoute8_LandMonsNight[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_ARBOK},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute8_LandMonsInfoNight = {21, gRoute8_LandMonsNight};

//Route 7

const struct WildPokemon gRoute7_LandMonsMorning[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_TANGELA},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute7_LandMonsInfoMorning = {21, gRoute7_LandMonsMorning};

const struct WildPokemon gRoute7_LandMonsDay[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_TANGELA},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute7_LandMonsInfoDay = {21, gRoute7_LandMonsDay};

const struct WildPokemon gRoute7_LandMonsEvening[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_TANGELA},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute7_LandMonsInfoEvening = {21, gRoute7_LandMonsEvening};

const struct WildPokemon gRoute7_LandMonsNight[] =
{
	{24, 28, SPECIES_PIDGEY},
	{24, 28, SPECIES_MEOWTH},
	{24, 28, SPECIES_ODDISH},
	{24, 28, SPECIES_BELLSPROUT},
	{24, 28, SPECIES_TANGELA},
	{24, 28, SPECIES_VULPIX},
	{24, 28, SPECIES_PONYTA},
	{24, 28, SPECIES_MAGMAR},
	{24, 28, SPECIES_GROWLITHE},
	{24, 28, SPECIES_PINSIR},
	{24, 28, SPECIES_SCYTHER},
	{24, 28, SPECIES_PIDGEOTTO},
};

const struct WildPokemonInfo gRoute7_LandMonsInfoNight = {21, gRoute7_LandMonsNight};

//Route 12

const struct WildPokemon gRoute12_LandMonsMorning[] =
{
	{35, 37, SPECIES_PIDGEY},
	{35, 37, SPECIES_KRABBY},
	{35, 37, SPECIES_VENONAT},
	{35, 37, SPECIES_TENTACOOL},
	{35, 37, SPECIES_HORSEA},
	{35, 37, SPECIES_SLOWPOKE},
	{35, 37, SPECIES_SHELLDER},
	{35, 37, SPECIES_STARYU},
	{35, 37, SPECIES_TANGELA},
	{35, 37, SPECIES_PINSIR},
	{35, 37, SPECIES_SCYTHER},
	{35, 37, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute12_LandMonsInfoMorning = {21, gRoute12_LandMonsMorning};

const struct WildPokemon gRoute12_LandMonsDay[] =
{
	{35, 37, SPECIES_PIDGEY},
	{35, 37, SPECIES_KRABBY},
	{35, 37, SPECIES_VENONAT},
	{35, 37, SPECIES_TENTACOOL},
	{35, 37, SPECIES_HORSEA},
	{35, 37, SPECIES_SLOWPOKE},
	{35, 37, SPECIES_SHELLDER},
	{35, 37, SPECIES_STARYU},
	{35, 37, SPECIES_TANGELA},
	{35, 37, SPECIES_PINSIR},
	{35, 37, SPECIES_SCYTHER},
	{35, 37, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute12_LandMonsInfoDay = {21, gRoute12_LandMonsDay};

const struct WildPokemon gRoute12_LandMonsEvening[] =
{
	{35, 37, SPECIES_PIDGEY},
	{35, 37, SPECIES_KRABBY},
	{35, 37, SPECIES_VENONAT},
	{35, 37, SPECIES_TENTACOOL},
	{35, 37, SPECIES_HORSEA},
	{35, 37, SPECIES_SLOWPOKE},
	{35, 37, SPECIES_SHELLDER},
	{35, 37, SPECIES_STARYU},
	{35, 37, SPECIES_TANGELA},
	{35, 37, SPECIES_PINSIR},
	{35, 37, SPECIES_SCYTHER},
	{35, 37, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute12_LandMonsInfoEvening = {21, gRoute12_LandMonsEvening};

const struct WildPokemon gRoute12_LandMonsNight[] =
{
	{35, 37, SPECIES_PIDGEY},
	{35, 37, SPECIES_KRABBY},
	{35, 37, SPECIES_VENONAT},
	{35, 37, SPECIES_TENTACOOL},
	{35, 37, SPECIES_HORSEA},
	{35, 37, SPECIES_SLOWPOKE},
	{35, 37, SPECIES_SHELLDER},
	{35, 37, SPECIES_STARYU},
	{35, 37, SPECIES_TANGELA},
	{35, 37, SPECIES_PINSIR},
	{35, 37, SPECIES_SCYTHER},
	{35, 37, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute12_LandMonsInfoNight = {21, gRoute12_LandMonsNight};

//Route 13

const struct WildPokemon gRoute13_LandMonsMorning[] =
{
	{36, 38, SPECIES_PIDGEY},
	{36, 38, SPECIES_KRABBY},
	{36, 38, SPECIES_VENONAT},
	{36, 38, SPECIES_HORSEA},
	{36, 38, SPECIES_SLOWPOKE},
	{36, 38, SPECIES_SHELLDER},
	{36, 38, SPECIES_STARYU},
	{36, 38, SPECIES_TANGELA},
	{36, 38, SPECIES_PINSIR},
	{36, 38, SPECIES_SCYTHER},
	{36, 38, SPECIES_SEADRA},
	{36, 38, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute13_LandMonsInfoMorning = {21, gRoute13_LandMonsMorning};

const struct WildPokemon gRoute13_LandMonsDay[] =
{
	{36, 38, SPECIES_PIDGEY},
	{36, 38, SPECIES_KRABBY},
	{36, 38, SPECIES_VENONAT},
	{36, 38, SPECIES_HORSEA},
	{36, 38, SPECIES_SLOWPOKE},
	{36, 38, SPECIES_SHELLDER},
	{36, 38, SPECIES_STARYU},
	{36, 38, SPECIES_TANGELA},
	{36, 38, SPECIES_PINSIR},
	{36, 38, SPECIES_SCYTHER},
	{36, 38, SPECIES_SEADRA},
	{36, 38, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute13_LandMonsInfoDay = {21, gRoute13_LandMonsDay};

const struct WildPokemon gRoute13_LandMonsEvening[] =
{
	{36, 38, SPECIES_PIDGEY},
	{36, 38, SPECIES_KRABBY},
	{36, 38, SPECIES_VENONAT},
	{36, 38, SPECIES_HORSEA},
	{36, 38, SPECIES_SLOWPOKE},
	{36, 38, SPECIES_SHELLDER},
	{36, 38, SPECIES_STARYU},
	{36, 38, SPECIES_TANGELA},
	{36, 38, SPECIES_PINSIR},
	{36, 38, SPECIES_SCYTHER},
	{36, 38, SPECIES_SEADRA},
	{36, 38, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute13_LandMonsInfoEvening = {21, gRoute13_LandMonsEvening};

const struct WildPokemon gRoute13_LandMonsNight[] =
{
	{36, 38, SPECIES_PIDGEY},
	{36, 38, SPECIES_KRABBY},
	{36, 38, SPECIES_VENONAT},
	{36, 38, SPECIES_HORSEA},
	{36, 38, SPECIES_SLOWPOKE},
	{36, 38, SPECIES_SHELLDER},
	{36, 38, SPECIES_STARYU},
	{36, 38, SPECIES_TANGELA},
	{36, 38, SPECIES_PINSIR},
	{36, 38, SPECIES_SCYTHER},
	{36, 38, SPECIES_SEADRA},
	{36, 38, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute13_LandMonsInfoNight = {21, gRoute13_LandMonsNight};

//Route 14

const struct WildPokemon gRoute14_LandMonsMorning[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute14_LandMonsInfoMorning = {21, gRoute14_LandMonsMorning};

const struct WildPokemon gRoute14_LandMonsDay[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute14_LandMonsInfoDay = {21, gRoute14_LandMonsDay};

const struct WildPokemon gRoute14_LandMonsEvening[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute14_LandMonsInfoEvening = {21, gRoute14_LandMonsEvening};

const struct WildPokemon gRoute14_LandMonsNight[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute14_LandMonsInfoNight = {21, gRoute14_LandMonsNight};

//Route 15

const struct WildPokemon gRoute15_LandMonsMorning[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute15_LandMonsInfoMorning = {21, gRoute15_LandMonsMorning};

const struct WildPokemon gRoute15_LandMonsDay[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute15_LandMonsInfoDay = {21, gRoute15_LandMonsDay};

const struct WildPokemon gRoute15_LandMonsEvening[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute15_LandMonsInfoEvening = {21, gRoute15_LandMonsEvening};

const struct WildPokemon gRoute15_LandMonsNight[] =
{
	{37, 39, SPECIES_PIDGEY},
	{37, 39, SPECIES_KRABBY},
	{37, 39, SPECIES_VENONAT},
	{37, 39, SPECIES_TENTACOOL},
	{37, 39, SPECIES_HORSEA},
	{37, 39, SPECIES_SLOWPOKE},
	{37, 39, SPECIES_SHELLDER},
	{37, 39, SPECIES_STARYU},
	{37, 39, SPECIES_PINSIR},
	{37, 39, SPECIES_SCYTHER},
	{37, 39, SPECIES_SEADRA},
	{37, 39, SPECIES_DITTO},
};

const struct WildPokemonInfo gRoute15_LandMonsInfoNight = {21, gRoute15_LandMonsNight};

//Safari Zone

const struct WildPokemon gSafariZone_LandMonsMorning[] =
{
	{42, 44, SPECIES_EXEGGCUTE},
	{42, 44, SPECIES_DODUO},
	{42, 44, SPECIES_VENONAT},
	{42, 44, SPECIES_RHYHORN},
	{42, 44, SPECIES_NIDORINO},
	{42, 44, SPECIES_NIDORINA},
	{42, 44, SPECIES_SCYTHER},
	{42, 44, SPECIES_PINSIR},
	{42, 44, SPECIES_TAUROS},
	{42, 44, SPECIES_CHANSEY},
	{42, 44, SPECIES_DRATINI},
	{42, 44, SPECIES_KANGASKHAN},
};

const struct WildPokemonInfo gSafariZone_LandMonsInfoMorning = {21, gSafariZone_LandMonsMorning};

const struct WildPokemon gSafariZone_LandMonsDay[] =
{
	{42, 44, SPECIES_EXEGGCUTE},
	{42, 44, SPECIES_DODUO},
	{42, 44, SPECIES_VENONAT},
	{42, 44, SPECIES_RHYHORN},
	{42, 44, SPECIES_NIDORINO},
	{42, 44, SPECIES_NIDORINA},
	{42, 44, SPECIES_SCYTHER},
	{42, 44, SPECIES_PINSIR},
	{42, 44, SPECIES_TAUROS},
	{42, 44, SPECIES_CHANSEY},
	{42, 44, SPECIES_DRATINI},
	{42, 44, SPECIES_KANGASKHAN},
};

const struct WildPokemonInfo gSafariZone_LandMonsInfoDay = {21, gSafariZone_LandMonsDay};

const struct WildPokemon gSafariZone_LandMonsEvening[] =
{
	{42, 44, SPECIES_EXEGGCUTE},
	{42, 44, SPECIES_DODUO},
	{42, 44, SPECIES_VENONAT},
	{42, 44, SPECIES_RHYHORN},
	{42, 44, SPECIES_NIDORINO},
	{42, 44, SPECIES_NIDORINA},
	{42, 44, SPECIES_SCYTHER},
	{42, 44, SPECIES_PINSIR},
	{42, 44, SPECIES_TAUROS},
	{42, 44, SPECIES_CHANSEY},
	{42, 44, SPECIES_DRATINI},
	{42, 44, SPECIES_KANGASKHAN},
};

const struct WildPokemonInfo gSafariZone_LandMonsInfoEvening = {21, gSafariZone_LandMonsEvening};

const struct WildPokemon gSafariZone_LandMonsNight[] =
{
	{42, 44, SPECIES_EXEGGCUTE},
	{42, 44, SPECIES_DODUO},
	{42, 44, SPECIES_VENONAT},
	{42, 44, SPECIES_RHYHORN},
	{42, 44, SPECIES_NIDORINO},
	{42, 44, SPECIES_NIDORINA},
	{42, 44, SPECIES_SCYTHER},
	{42, 44, SPECIES_PINSIR},
	{42, 44, SPECIES_TAUROS},
	{42, 44, SPECIES_CHANSEY},
	{42, 44, SPECIES_DRATINI},
	{42, 44, SPECIES_KANGASKHAN},
};

const struct WildPokemonInfo gSafariZone_LandMonsInfoNight = {21, gSafariZone_LandMonsNight};

//Route 18

const struct WildPokemon gRoute18_LandMonsMorning[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute18_LandMonsInfoMorning = {21, gRoute18_LandMonsMorning};

const struct WildPokemon gRoute18_LandMonsDay[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute18_LandMonsInfoDay = {21, gRoute18_LandMonsDay};

const struct WildPokemon gRoute18_LandMonsEvening[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute18_LandMonsInfoEvening = {21, gRoute18_LandMonsEvening};

const struct WildPokemon gRoute18_LandMonsNight[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute18_LandMonsInfoNight = {21, gRoute18_LandMonsNight};

//Route 17

const struct WildPokemon gRoute17_LandMonsMorning[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute17_LandMonsInfoMorning = {21, gRoute17_LandMonsMorning};

const struct WildPokemon gRoute17_LandMonsDay[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute17_LandMonsInfoDay = {21, gRoute17_LandMonsDay};

const struct WildPokemon gRoute17_LandMonsEvening[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute17_LandMonsInfoEvening = {21, gRoute17_LandMonsEvening};

const struct WildPokemon gRoute17_LandMonsNight[] =
{
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_RATICATE},
	{37, 39, SPECIES_DODUO},
	{37, 39, SPECIES_SPEAROW},
	{37, 39, SPECIES_GRIMER},
	{37, 39, SPECIES_KOFFING},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_LICKITUNG},
	{37, 39, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute17_LandMonsInfoNight = {21, gRoute17_LandMonsNight};

//Route 16

const struct WildPokemon gRoute16_LandMonsMorning[] =
{
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_RATICATE},
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute16_LandMonsInfoMorning = {21, gRoute16_LandMonsMorning};

const struct WildPokemon gRoute16_LandMonsDay[] =
{
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_RATICATE},
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute16_LandMonsInfoDay = {21, gRoute16_LandMonsDay};

const struct WildPokemon gRoute16_LandMonsEvening[] =
{
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_RATICATE},
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute16_LandMonsInfoEvening = {21, gRoute16_LandMonsEvening};

const struct WildPokemon gRoute16_LandMonsNight[] =
{
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_RATICATE},
	{35, 37, SPECIES_DODUO},
	{35, 37, SPECIES_SPEAROW},
	{35, 37, SPECIES_GRIMER},
	{35, 37, SPECIES_KOFFING},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_LICKITUNG},
	{35, 37, SPECIES_FEAROW},
};

const struct WildPokemonInfo gRoute16_LandMonsInfoNight = {21, gRoute16_LandMonsNight};

//Route 19

const struct WildPokemon gRoute19_WaterMonsMorning[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
	// {44, 46, SPECIES_PSYDUCK},
	// {44, 46, SPECIES_SLOWPOKE},
	// {44, 46, SPECIES_TENTACRUEL},
	// {44, 46, SPECIES_TENTACOOL},
	// {44, 46, SPECIES_GOLDEEN},
	// {44, 46, SPECIES_HORSEA},
	// {44, 46, SPECIES_GYARADOS},
};

const struct WildPokemonInfo gRoute19_WaterMonsInfoMorning = {2, gRoute19_WaterMonsMorning};

const struct WildPokemon gRoute19_WaterMonsDay[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute19_WaterMonsInfoDay = {2, gRoute19_WaterMonsDay};

const struct WildPokemon gRoute19_WaterMonsEvening[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute19_WaterMonsInfoEvening = {2, gRoute19_WaterMonsEvening};

const struct WildPokemon gRoute19_WaterMonsNight[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute19_WaterMonsInfoNight = {2, gRoute19_WaterMonsNight};

//Route 20

const struct WildPokemon gRoute20_WaterMonsMorning[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute20_WaterMonsInfoMorning = {2, gRoute20_WaterMonsMorning};

const struct WildPokemon gRoute20_WaterMonsDay[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute20_WaterMonsInfoDay = {2, gRoute20_WaterMonsDay};

const struct WildPokemon gRoute20_WaterMonsEvening[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute20_WaterMonsInfoEvening = {2, gRoute20_WaterMonsEvening};

const struct WildPokemon gRoute20_WaterMonsNight[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute20_WaterMonsInfoNight = {2, gRoute20_WaterMonsNight};

//Seafoam Islands

const struct WildPokemon gSeafoamIslands_LandMonsMorning[] =
{
	{46, 48, SPECIES_ZUBAT},
	{46, 48, SPECIES_PSYDUCK},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_SHELLDER},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_SLOWPOKE},
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_DEWGONG},
	{46, 48, SPECIES_JYNX},
	{46, 48, SPECIES_GOLDUCK},
	{46, 48, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gSeafoamIslands_LandMonsInfoMorning = {7, gSeafoamIslands_LandMonsMorning};

const struct WildPokemon gSeafoamIslands_LandMonsDay[] =
{
	{46, 48, SPECIES_ZUBAT},
	{46, 48, SPECIES_PSYDUCK},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_SHELLDER},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_SLOWPOKE},
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_DEWGONG},
	{46, 48, SPECIES_JYNX},
	{46, 48, SPECIES_GOLDUCK},
	{46, 48, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gSeafoamIslands_LandMonsInfoDay = {7, gSeafoamIslands_LandMonsDay};

const struct WildPokemon gSeafoamIslands_LandMonsEvening[] =
{
	{46, 48, SPECIES_ZUBAT},
	{46, 48, SPECIES_PSYDUCK},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_SHELLDER},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_SLOWPOKE},
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_DEWGONG},
	{46, 48, SPECIES_JYNX},
	{46, 48, SPECIES_GOLDUCK},
	{46, 48, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gSeafoamIslands_LandMonsInfoEvening = {7, gSeafoamIslands_LandMonsEvening};

const struct WildPokemon gSeafoamIslands_LandMonsNight[] =
{
	{46, 48, SPECIES_ZUBAT},
	{46, 48, SPECIES_PSYDUCK},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_SHELLDER},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_SLOWPOKE},
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_DEWGONG},
	{46, 48, SPECIES_JYNX},
	{46, 48, SPECIES_GOLDUCK},
	{46, 48, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gSeafoamIslands_LandMonsInfoNight = {7, gSeafoamIslands_LandMonsNight};

//Seafoam Surf

const struct WildPokemon gSeafoamIslands_WaterMonsMorning[] =
{
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gSeafoamIslands_WaterMonsInfoMorning = {2, gSeafoamIslands_WaterMonsMorning};

const struct WildPokemon gSeafoamIslands_WaterMonsDay[] =
{
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gSeafoamIslands_WaterMonsInfoDay = {2, gSeafoamIslands_WaterMonsDay};

const struct WildPokemon gSeafoamIslands_WaterMonsEvening[] =
{
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gSeafoamIslands_WaterMonsInfoEvening = {2, gSeafoamIslands_WaterMonsEvening};

const struct WildPokemon gSeafoamIslands_WaterMonsNight[] =
{
	{46, 48, SPECIES_SEEL},
	{46, 48, SPECIES_KRABBY},
	{46, 48, SPECIES_HORSEA},
	{46, 48, SPECIES_GOLBAT},
	{46, 48, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gSeafoamIslands_WaterMonsInfoNight = {2, gSeafoamIslands_WaterMonsNight};

//Pokemon Mansion

const struct WildPokemon gPokemonMansion_LandMonsMorning[] =
{
	{46, 48, SPECIES_RATTATA},
	{46, 48, SPECIES_GRIMER},
	{46, 48, SPECIES_KOFFING},
	{46, 48, SPECIES_RATICATE},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_GROWLITHE},
	{46, 48, SPECIES_DITTO},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_WEEZING},
	{46, 48, SPECIES_MUK},
};

const struct WildPokemonInfo gPokemonMansion_LandMonsInfoMorning = {7, gPokemonMansion_LandMonsMorning};

const struct WildPokemon gPokemonMansion_LandMonsDay[] =
{
	{46, 48, SPECIES_RATTATA},
	{46, 48, SPECIES_GRIMER},
	{46, 48, SPECIES_KOFFING},
	{46, 48, SPECIES_RATICATE},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_GROWLITHE},
	{46, 48, SPECIES_DITTO},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_WEEZING},
	{46, 48, SPECIES_MUK},
};

const struct WildPokemonInfo gPokemonMansion_LandMonsInfoDay = {7, gPokemonMansion_LandMonsDay};

const struct WildPokemon gPokemonMansion_LandMonsEvening[] =
{
	{46, 48, SPECIES_RATTATA},
	{46, 48, SPECIES_GRIMER},
	{46, 48, SPECIES_KOFFING},
	{46, 48, SPECIES_RATICATE},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_GROWLITHE},
	{46, 48, SPECIES_DITTO},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_WEEZING},
	{46, 48, SPECIES_MUK},
};

const struct WildPokemonInfo gPokemonMansion_LandMonsInfoEvening = {7, gPokemonMansion_LandMonsEvening};

const struct WildPokemon gPokemonMansion_LandMonsNight[] =
{
	{46, 48, SPECIES_RATTATA},
	{46, 48, SPECIES_GRIMER},
	{46, 48, SPECIES_KOFFING},
	{46, 48, SPECIES_RATICATE},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_GROWLITHE},
	{46, 48, SPECIES_DITTO},
	{46, 48, SPECIES_VULPIX},
	{46, 48, SPECIES_MAGMAR},
	{46, 48, SPECIES_WEEZING},
	{46, 48, SPECIES_MUK},
};

const struct WildPokemonInfo gPokemonMansion_LandMonsInfoNight = {7, gPokemonMansion_LandMonsNight};

//Treasure Beach

const struct WildPokemon gTreasureBeach_LandMonsMorning[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_MARILL},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_PERSIAN},
	{50, 52, SPECIES_FEAROW},
};

const struct WildPokemonInfo gTreasureBeach_LandMonsInfoMorning = {7, gTreasureBeach_LandMonsMorning};

const struct WildPokemon gTreasureBeach_LandMonsDay[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_MARILL},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_PERSIAN},
	{50, 52, SPECIES_FEAROW},
};

const struct WildPokemonInfo gTreasureBeach_LandMonsInfoDay = {7, gTreasureBeach_LandMonsDay};

const struct WildPokemon gTreasureBeach_LandMonsEvening[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_MARILL},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_PERSIAN},
	{50, 52, SPECIES_FEAROW},
};

const struct WildPokemonInfo gTreasureBeach_LandMonsInfoEvening = {7, gTreasureBeach_LandMonsEvening};

const struct WildPokemon gTreasureBeach_LandMonsNight[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_MARILL},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_PERSIAN},
	{50, 52, SPECIES_FEAROW},
};

const struct WildPokemonInfo gTreasureBeach_LandMonsInfoNight = {7, gTreasureBeach_LandMonsNight};

//Treasure Beach Water

const struct WildPokemon gTreasureBeach_WaterMonsMorning[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gTreasureBeach_WaterMonsInfoMorning = {2, gTreasureBeach_WaterMonsMorning};

const struct WildPokemon gTreasureBeach_WaterMonsDay[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gTreasureBeach_WaterMonsInfoDay = {2, gTreasureBeach_WaterMonsDay};

const struct WildPokemon gTreasureBeach_WaterMonsEvening[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gTreasureBeach_WaterMonsInfoEvening = {2, gTreasureBeach_WaterMonsEvening};

const struct WildPokemon gTreasureBeach_WaterMonsNight[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gTreasureBeach_WaterMonsInfoNight = {2, gTreasureBeach_WaterMonsNight};

//Kindle Road

const struct WildPokemon gKindleRoad_LandMonsMorning[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_PONYTA},
	{50, 52, SPECIES_GEODUDE},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_HOUNDOUR},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_FEAROW},
	{50, 52, SPECIES_RAPIDASH},
	{50, 52, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gKindleRoad_LandMonsInfoMorning = {21, gKindleRoad_LandMonsMorning};

const struct WildPokemon gKindleRoad_LandMonsDay[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_PONYTA},
	{50, 52, SPECIES_GEODUDE},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_HOUNDOUR},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_FEAROW},
	{50, 52, SPECIES_RAPIDASH},
	{50, 52, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gKindleRoad_LandMonsInfoDay = {21, gKindleRoad_LandMonsDay};

const struct WildPokemon gKindleRoad_LandMonsEvening[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_PONYTA},
	{50, 52, SPECIES_GEODUDE},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_HOUNDOUR},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_FEAROW},
	{50, 52, SPECIES_RAPIDASH},
	{50, 52, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gKindleRoad_LandMonsInfoEvening = {21, gKindleRoad_LandMonsEvening};

const struct WildPokemon gKindleRoad_LandMonsNight[] =
{
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_PONYTA},
	{50, 52, SPECIES_GEODUDE},
	{50, 52, SPECIES_MEOWTH},
	{50, 52, SPECIES_PSYDUCK},
	{50, 52, SPECIES_SLOWPOKE},
	{50, 52, SPECIES_HOUNDOUR},
	{50, 52, SPECIES_SPEAROW},
	{50, 52, SPECIES_TANGELA},
	{50, 52, SPECIES_FEAROW},
	{50, 52, SPECIES_RAPIDASH},
	{50, 52, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gKindleRoad_LandMonsInfoNight = {21, gKindleRoad_LandMonsNight};

//Kindle Road Water

const struct WildPokemon gKindleRoad_WaterMonsMorning[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gKindleRoad_WaterMonsInfoMorning = {2, gKindleRoad_WaterMonsMorning};

const struct WildPokemon gKindleRoad_WaterMonsDay[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gKindleRoad_WaterMonsInfoDay = {2, gKindleRoad_WaterMonsDay};

const struct WildPokemon gKindleRoad_WaterMonsEvening[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gKindleRoad_WaterMonsInfoEvening = {2, gKindleRoad_WaterMonsEvening};

const struct WildPokemon gKindleRoad_WaterMonsNight[] =
{
	{50, 52, SPECIES_TENTACOOL},
	{50, 52, SPECIES_GOLDEEN},
	{50, 52, SPECIES_KRABBY},
	{50, 52, SPECIES_SEAKING},
	{50, 52, SPECIES_TENTACRUEL},
};

const struct WildPokemonInfo gKindleRoad_WaterMonsInfoNight = {2, gKindleRoad_WaterMonsNight};

//Mt. Ember

const struct WildPokemon gMtEmber_LandMonsMorning[] =
{
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_PONYTA},
	{51, 53, SPECIES_GEODUDE},
	{51, 53, SPECIES_MACHOP},
	{51, 53, SPECIES_MAGMAR},
	{51, 53, SPECIES_MURKROW},
	{51, 53, SPECIES_HOUNDOUR},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_GRAVELER},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_RAPIDASH},
	{51, 53, SPECIES_GRAVELER},
};

const struct WildPokemonInfo gMtEmber_LandMonsInfoMorning = {21, gMtEmber_LandMonsMorning};

const struct WildPokemon gMtEmber_LandMonsDay[] =
{
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_PONYTA},
	{51, 53, SPECIES_GEODUDE},
	{51, 53, SPECIES_MACHOP},
	{51, 53, SPECIES_MAGMAR},
	{51, 53, SPECIES_MURKROW},
	{51, 53, SPECIES_HOUNDOUR},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_GRAVELER},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_RAPIDASH},
	{51, 53, SPECIES_GRAVELER},
};

const struct WildPokemonInfo gMtEmber_LandMonsInfoDay = {21, gMtEmber_LandMonsDay};

const struct WildPokemon gMtEmber_LandMonsEvening[] =
{
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_PONYTA},
	{51, 53, SPECIES_GEODUDE},
	{51, 53, SPECIES_MACHOP},
	{51, 53, SPECIES_MAGMAR},
	{51, 53, SPECIES_MURKROW},
	{51, 53, SPECIES_HOUNDOUR},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_GRAVELER},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_RAPIDASH},
	{51, 53, SPECIES_GRAVELER},
};

const struct WildPokemonInfo gMtEmber_LandMonsInfoEvening = {21, gMtEmber_LandMonsEvening};

const struct WildPokemon gMtEmber_LandMonsNight[] =
{
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_PONYTA},
	{51, 53, SPECIES_GEODUDE},
	{51, 53, SPECIES_MACHOP},
	{51, 53, SPECIES_MAGMAR},
	{51, 53, SPECIES_MURKROW},
	{51, 53, SPECIES_HOUNDOUR},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_GRAVELER},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_RAPIDASH},
	{51, 53, SPECIES_GRAVELER},
};

const struct WildPokemonInfo gMtEmber_LandMonsInfoNight = {21, gMtEmber_LandMonsNight};

//Cape Brink

const struct WildPokemon gCapeBrink_LandMonsMorning[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_NATU},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gCapeBrink_LandMonsInfoMorning = {21, gCapeBrink_LandMonsMorning};

const struct WildPokemon gCapeBrink_LandMonsDay[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_NATU},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gCapeBrink_LandMonsInfoDay = {21, gCapeBrink_LandMonsDay};

const struct WildPokemon gCapeBrink_LandMonsEvening[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_NATU},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gCapeBrink_LandMonsInfoEvening = {21, gCapeBrink_LandMonsEvening};

const struct WildPokemon gCapeBrink_LandMonsNight[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_SPEAROW},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_NATU},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_FEAROW},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gCapeBrink_LandMonsInfoNight = {21, gCapeBrink_LandMonsNight};

//Cape Brink Water

const struct WildPokemon gCapeBrink_WaterMonsMorning[] =
{
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_GOLDUCK},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gCapeBrink_WaterMonsInfoMorning = {2, gCapeBrink_WaterMonsMorning};

const struct WildPokemon gCapeBrink_WaterMonsDay[] =
{
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_GOLDUCK},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gCapeBrink_WaterMonsInfoDay = {2, gCapeBrink_WaterMonsDay};

const struct WildPokemon gCapeBrink_WaterMonsEvening[] =
{
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_GOLDUCK},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gCapeBrink_WaterMonsInfoEvening = {2, gCapeBrink_WaterMonsEvening};

const struct WildPokemon gCapeBrink_WaterMonsNight[] =
{
	{51, 53, SPECIES_PSYDUCK},
	{51, 53, SPECIES_SLOWPOKE},
	{51, 53, SPECIES_GOLDUCK},
	{51, 53, SPECIES_SLOWBRO},
	{51, 53, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gCapeBrink_WaterMonsInfoNight = {2, gCapeBrink_WaterMonsNight};

//Bond Bridge

const struct WildPokemon gBondBridge_LandMonsMorning[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_PIDGEY},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_VENONAT},
	{51, 53, SPECIES_KRABBY},
	{51, 53, SPECIES_HORSEA},
	{51, 53, SPECIES_GIRAFARIG},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_PIDGEOTTO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gBondBridge_LandMonsInfoMorning = {21, gBondBridge_LandMonsMorning};

const struct WildPokemon gBondBridge_LandMonsDay[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_PIDGEY},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_VENONAT},
	{51, 53, SPECIES_KRABBY},
	{51, 53, SPECIES_HORSEA},
	{51, 53, SPECIES_GIRAFARIG},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_PIDGEOTTO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gBondBridge_LandMonsInfoDay = {21, gBondBridge_LandMonsDay};

const struct WildPokemon gBondBridge_LandMonsEvening[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_PIDGEY},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_VENONAT},
	{51, 53, SPECIES_KRABBY},
	{51, 53, SPECIES_HORSEA},
	{51, 53, SPECIES_GIRAFARIG},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_PIDGEOTTO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gBondBridge_LandMonsInfoEvening = {21, gBondBridge_LandMonsEvening};

const struct WildPokemon gBondBridge_LandMonsNight[] =
{
	{51, 53, SPECIES_ODDISH},
	{51, 53, SPECIES_BELLSPROUT},
	{51, 53, SPECIES_PIDGEY},
	{51, 53, SPECIES_MEOWTH},
	{51, 53, SPECIES_VENONAT},
	{51, 53, SPECIES_KRABBY},
	{51, 53, SPECIES_HORSEA},
	{51, 53, SPECIES_GIRAFARIG},
	{51, 53, SPECIES_GLOOM},
	{51, 53, SPECIES_WEEPINBELL},
	{51, 53, SPECIES_PIDGEOTTO},
	{51, 53, SPECIES_PERSIAN},
};

const struct WildPokemonInfo gBondBridge_LandMonsInfoNight = {21, gBondBridge_LandMonsNight};

//Bond Bridge Water

const struct WildPokemon gBondBridge_WaterMonsMorning[] =
{
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACRUEL},
	{51, 53, SPECIES_SEADRA},
	{51, 53, SPECIES_KINGLER},
};

const struct WildPokemonInfo gBondBridge_WaterMonsInfoMorning = {2, gBondBridge_WaterMonsMorning};

const struct WildPokemon gBondBridge_WaterMonsDay[] =
{
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACRUEL},
	{51, 53, SPECIES_SEADRA},
	{51, 53, SPECIES_KINGLER},
};

const struct WildPokemonInfo gBondBridge_WaterMonsInfoDay = {2, gBondBridge_WaterMonsDay};

const struct WildPokemon gBondBridge_WaterMonsEvening[] =
{
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACRUEL},
	{51, 53, SPECIES_SEADRA},
	{51, 53, SPECIES_KINGLER},
};

const struct WildPokemonInfo gBondBridge_WaterMonsInfoEvening = {2, gBondBridge_WaterMonsEvening};

const struct WildPokemon gBondBridge_WaterMonsNight[] =
{
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACOOL},
	{51, 53, SPECIES_TENTACRUEL},
	{51, 53, SPECIES_SEADRA},
	{51, 53, SPECIES_KINGLER},
};

const struct WildPokemonInfo gBondBridge_WaterMonsInfoNight = {2, gBondBridge_WaterMonsNight};

//Berry Forest

const struct WildPokemon gBerryForest_LandMonsMorning[] =
{
	{52, 54, SPECIES_PIDGEOTTO},
	{52, 54, SPECIES_GLOOM},
	{52, 54, SPECIES_WEEPINBELL},
	{52, 54, SPECIES_DROWZEE},
	{52, 54, SPECIES_SPINARAK},
	{52, 54, SPECIES_VENONAT},
	{52, 54, SPECIES_LEDYBA},
	{52, 54, SPECIES_EXEGGCUTE},
	{52, 54, SPECIES_SCYTHER},
	{52, 54, SPECIES_PINSIR},
	{52, 54, SPECIES_HERACROSS},
	{52, 54, SPECIES_HYPNO},
};

const struct WildPokemonInfo gBerryForest_LandMonsInfoMorning = {21, gBerryForest_LandMonsMorning};

const struct WildPokemon gBerryForest_LandMonsDay[] =
{
	{52, 54, SPECIES_PIDGEOTTO},
	{52, 54, SPECIES_GLOOM},
	{52, 54, SPECIES_WEEPINBELL},
	{52, 54, SPECIES_DROWZEE},
	{52, 54, SPECIES_SPINARAK},
	{52, 54, SPECIES_VENONAT},
	{52, 54, SPECIES_LEDYBA},
	{52, 54, SPECIES_EXEGGCUTE},
	{52, 54, SPECIES_SCYTHER},
	{52, 54, SPECIES_PINSIR},
	{52, 54, SPECIES_HERACROSS},
	{52, 54, SPECIES_HYPNO},
};

const struct WildPokemonInfo gBerryForest_LandMonsInfoDay = {21, gBerryForest_LandMonsDay};

const struct WildPokemon gBerryForest_LandMonsEvening[] =
{
	{52, 54, SPECIES_PIDGEOTTO},
	{52, 54, SPECIES_GLOOM},
	{52, 54, SPECIES_WEEPINBELL},
	{52, 54, SPECIES_DROWZEE},
	{52, 54, SPECIES_SPINARAK},
	{52, 54, SPECIES_VENONAT},
	{52, 54, SPECIES_LEDYBA},
	{52, 54, SPECIES_EXEGGCUTE},
	{52, 54, SPECIES_SCYTHER},
	{52, 54, SPECIES_PINSIR},
	{52, 54, SPECIES_HERACROSS},
	{52, 54, SPECIES_HYPNO},
};

const struct WildPokemonInfo gBerryForest_LandMonsInfoEvening = {21, gBerryForest_LandMonsEvening};

const struct WildPokemon gBerryForest_LandMonsNight[] =
{
	{52, 54, SPECIES_PIDGEOTTO},
	{52, 54, SPECIES_GLOOM},
	{52, 54, SPECIES_WEEPINBELL},
	{52, 54, SPECIES_DROWZEE},
	{52, 54, SPECIES_SPINARAK},
	{52, 54, SPECIES_VENONAT},
	{52, 54, SPECIES_LEDYBA},
	{52, 54, SPECIES_EXEGGCUTE},
	{52, 54, SPECIES_SCYTHER},
	{52, 54, SPECIES_PINSIR},
	{52, 54, SPECIES_HERACROSS},
	{52, 54, SPECIES_HYPNO},
};

const struct WildPokemonInfo gBerryForest_LandMonsInfoNight = {21, gBerryForest_LandMonsNight};

//Berry Forest Water

const struct WildPokemon gBerryForest_WaterMonsMorning[] =
{
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_SLOWPOKE},
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_GOLDUCK},
	{52, 54, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gBerryForest_WaterMonsInfoMorning = {2, gBerryForest_WaterMonsMorning};

const struct WildPokemon gBerryForest_WaterMonsDay[] =
{
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_SLOWPOKE},
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_GOLDUCK},
	{52, 54, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gBerryForest_WaterMonsInfoDay = {2, gBerryForest_WaterMonsDay};

const struct WildPokemon gBerryForest_WaterMonsEvening[] =
{
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_SLOWPOKE},
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_GOLDUCK},
	{52, 54, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gBerryForest_WaterMonsInfoEvening = {2, gBerryForest_WaterMonsEvening};

const struct WildPokemon gBerryForest_WaterMonsNight[] =
{
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_SLOWPOKE},
	{52, 54, SPECIES_PSYDUCK},
	{52, 54, SPECIES_GOLDUCK},
	{52, 54, SPECIES_SLOWBRO},
};

const struct WildPokemonInfo gBerryForest_WaterMonsInfoNight = {2, gBerryForest_WaterMonsNight};

//Route 21

const struct WildPokemon gRoute21_LandMonsMorning[] =
{
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_KINGLER},
	{44, 46, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute21_LandMonsInfoMorning = {21, gRoute21_LandMonsMorning};

const struct WildPokemon gRoute21_LandMonsDay[] =
{
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_KINGLER},
	{44, 46, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute21_LandMonsInfoDay = {21, gRoute21_LandMonsDay};

const struct WildPokemon gRoute21_LandMonsEvening[] =
{
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_KINGLER},
	{44, 46, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute21_LandMonsInfoEvening = {21, gRoute21_LandMonsEvening};

const struct WildPokemon gRoute21_LandMonsNight[] =
{
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_MR_MIME},
	{44, 46, SPECIES_KRABBY},
	{44, 46, SPECIES_HORSEA},
	{44, 46, SPECIES_TANGELA},
	{44, 46, SPECIES_KINGLER},
	{44, 46, SPECIES_SEADRA},
};

const struct WildPokemonInfo gRoute21_LandMonsInfoNight = {21, gRoute21_LandMonsNight};

//Route 21 Water

const struct WildPokemon gRoute21_WaterMonsMorning[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_TENTACRUEL},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute21_WaterMonsInfoMorning = {2, gRoute21_WaterMonsMorning};

const struct WildPokemon gRoute21_WaterMonsDay[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_TENTACRUEL},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute21_WaterMonsInfoDay = {2, gRoute21_WaterMonsDay};

const struct WildPokemon gRoute21_WaterMonsEvening[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_TENTACRUEL},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute21_WaterMonsInfoEvening = {2, gRoute21_WaterMonsEvening};

const struct WildPokemon gRoute21_WaterMonsNight[] =
{
	{44, 46, SPECIES_TENTACOOL},
	{44, 46, SPECIES_GOLDEEN},
	{44, 46, SPECIES_TENTACRUEL},
	{44, 46, SPECIES_SEAKING},
	{44, 46, SPECIES_LAPRAS},
};

const struct WildPokemonInfo gRoute21_WaterMonsInfoNight = {2, gRoute21_WaterMonsNight};

//Power Plant

const struct WildPokemon gPowerPlant_LandMonsMorning[] =
{
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_KOFFING},
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_PIKACHU},
	{52, 54, SPECIES_ELECTABUZZ},
	{52, 54, SPECIES_MAGNETON},
	{52, 54, SPECIES_MUK},
	{52, 54, SPECIES_WEEZING},
};

const struct WildPokemonInfo gPowerPlant_LandMonsInfoMorning = {21, gPowerPlant_LandMonsMorning};

const struct WildPokemon gPowerPlant_LandMonsDay[] =
{
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_KOFFING},
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_PIKACHU},
	{52, 54, SPECIES_ELECTABUZZ},
	{52, 54, SPECIES_MAGNETON},
	{52, 54, SPECIES_MUK},
	{52, 54, SPECIES_WEEZING},
};

const struct WildPokemonInfo gPowerPlant_LandMonsInfoDay = {21, gPowerPlant_LandMonsDay};

const struct WildPokemon gPowerPlant_LandMonsEvening[] =
{
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_KOFFING},
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_PIKACHU},
	{52, 54, SPECIES_ELECTABUZZ},
	{52, 54, SPECIES_MAGNETON},
	{52, 54, SPECIES_MUK},
	{52, 54, SPECIES_WEEZING},
};

const struct WildPokemonInfo gPowerPlant_LandMonsInfoEvening = {21, gPowerPlant_LandMonsEvening};

const struct WildPokemon gPowerPlant_LandMonsNight[] =
{
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_KOFFING},
	{52, 54, SPECIES_MAGNEMITE},
	{52, 54, SPECIES_VOLTORB},
	{52, 54, SPECIES_GRIMER},
	{52, 54, SPECIES_PIKACHU},
	{52, 54, SPECIES_ELECTABUZZ},
	{52, 54, SPECIES_MAGNETON},
	{52, 54, SPECIES_MUK},
	{52, 54, SPECIES_WEEZING},
};

const struct WildPokemonInfo gPowerPlant_LandMonsInfoNight = {21, gPowerPlant_LandMonsNight};

//Route 23

const struct WildPokemon gRoute23_LandMonsMorning[] =
{
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_SANDSHREW},
	{55, 57, SPECIES_SPEAROW},
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_FEAROW},
	{55, 57, SPECIES_ARBOK},
	{55, 57, SPECIES_SANDSLASH},
	{55, 57, SPECIES_PRIMEAPE},
};

const struct WildPokemonInfo gRoute23_LandMonsInfoMorning = {21, gRoute23_LandMonsMorning};

const struct WildPokemon gRoute23_LandMonsDay[] =
{
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_SANDSHREW},
	{55, 57, SPECIES_SPEAROW},
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_FEAROW},
	{55, 57, SPECIES_ARBOK},
	{55, 57, SPECIES_SANDSLASH},
	{55, 57, SPECIES_PRIMEAPE},
};

const struct WildPokemonInfo gRoute23_LandMonsInfoDay = {21, gRoute23_LandMonsDay};

const struct WildPokemon gRoute23_LandMonsEvening[] =
{
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_SANDSHREW},
	{55, 57, SPECIES_SPEAROW},
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_FEAROW},
	{55, 57, SPECIES_ARBOK},
	{55, 57, SPECIES_SANDSLASH},
	{55, 57, SPECIES_PRIMEAPE},
};

const struct WildPokemonInfo gRoute23_LandMonsInfoEvening = {21, gRoute23_LandMonsEvening};

const struct WildPokemon gRoute23_LandMonsNight[] =
{
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_SANDSHREW},
	{55, 57, SPECIES_SPEAROW},
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_MANKEY},
	{55, 57, SPECIES_EKANS},
	{55, 57, SPECIES_FEAROW},
	{55, 57, SPECIES_ARBOK},
	{55, 57, SPECIES_SANDSLASH},
	{55, 57, SPECIES_PRIMEAPE},
};

const struct WildPokemonInfo gRoute23_LandMonsInfoNight = {21, gRoute23_LandMonsNight};

//Route 23 Water

const struct WildPokemon gRoute23_WaterMonsMorning[] =
{
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_GOLDEEN},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_SEAKING},
	{55, 57, SPECIES_GOLDUCK},
};

const struct WildPokemonInfo gRoute23_WaterMonsInfoMorning = {2, gRoute23_WaterMonsMorning};

const struct WildPokemon gRoute23_WaterMonsDay[] =
{
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_GOLDEEN},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_SEAKING},
	{55, 57, SPECIES_GOLDUCK},
};

const struct WildPokemonInfo gRoute23_WaterMonsInfoDay = {2, gRoute23_WaterMonsDay};

const struct WildPokemon gRoute23_WaterMonsEvening[] =
{
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_GOLDEEN},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_SEAKING},
	{55, 57, SPECIES_GOLDUCK},
};

const struct WildPokemonInfo gRoute23_WaterMonsInfoEvening = {2, gRoute23_WaterMonsEvening};

const struct WildPokemon gRoute23_WaterMonsNight[] =
{
	{55, 57, SPECIES_PSYDUCK},
	{55, 57, SPECIES_GOLDEEN},
	{55, 57, SPECIES_SLOWPOKE},
	{55, 57, SPECIES_SEAKING},
	{55, 57, SPECIES_GOLDUCK},
};

const struct WildPokemonInfo gRoute23_WaterMonsInfoNight = {2, gRoute23_WaterMonsNight};

//Victory Road

const struct WildPokemon gVictoryRoad_LandMonsMorning[] =
{
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_SANDSLASH},
	{57, 59, SPECIES_ONIX},
	{57, 59, SPECIES_ARBOK},
	{57, 59, SPECIES_PRIMEAPE},
	{57, 59, SPECIES_MAROWAK},
};

const struct WildPokemonInfo gVictoryRoad_LandMonsInfoMorning = {7, gVictoryRoad_LandMonsMorning};

const struct WildPokemon gVictoryRoad_LandMonsDay[] =
{
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_SANDSLASH},
	{57, 59, SPECIES_ONIX},
	{57, 59, SPECIES_ARBOK},
	{57, 59, SPECIES_PRIMEAPE},
	{57, 59, SPECIES_MAROWAK},
};

const struct WildPokemonInfo gVictoryRoad_LandMonsInfoDay = {7, gVictoryRoad_LandMonsDay};

const struct WildPokemon gVictoryRoad_LandMonsEvening[] =
{
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_SANDSLASH},
	{57, 59, SPECIES_ONIX},
	{57, 59, SPECIES_ARBOK},
	{57, 59, SPECIES_PRIMEAPE},
	{57, 59, SPECIES_MAROWAK},
};

const struct WildPokemonInfo gVictoryRoad_LandMonsInfoEvening = {7, gVictoryRoad_LandMonsEvening};

const struct WildPokemon gVictoryRoad_LandMonsNight[] =
{
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_GOLBAT},
	{57, 59, SPECIES_MACHOKE},
	{57, 59, SPECIES_GRAVELER},
	{57, 59, SPECIES_SANDSLASH},
	{57, 59, SPECIES_ONIX},
	{57, 59, SPECIES_ARBOK},
	{57, 59, SPECIES_PRIMEAPE},
	{57, 59, SPECIES_MAROWAK},
};

const struct WildPokemonInfo gVictoryRoad_LandMonsInfoNight = {7, gVictoryRoad_LandMonsNight};

const struct WildPokemonHeader gWildMonMorningHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &gRoute1_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &gRoute2_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &gRoute22_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &gViridianForest_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &gRoute3_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_1F),
		.mapNum = MAP_NUM(MT_MOON_1F),
		.landMonsInfo = &gMtMoon_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B1F),
		.mapNum = MAP_NUM(MT_MOON_B1F),
		.landMonsInfo = &gMtMoonB_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B2F),
		.mapNum = MAP_NUM(MT_MOON_B2F),
		.landMonsInfo = &gMtMoon_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &gRoute4_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &gRoute24_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &gRoute25_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &gRoute5_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &gRoute6_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &gRoute11_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
		.landMonsInfo = &gDiglettsCave_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &gRoute9_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &gRoute10_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
		.mapNum = MAP_NUM(POKEMON_TOWER_3F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
		.mapNum = MAP_NUM(POKEMON_TOWER_4F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
		.mapNum = MAP_NUM(POKEMON_TOWER_5F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
		.mapNum = MAP_NUM(POKEMON_TOWER_6F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
		.mapNum = MAP_NUM(POKEMON_TOWER_7F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &gRoute8_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &gRoute7_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &gRoute12_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &gRoute13_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &gRoute14_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &gRoute15_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
		.mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
		.landMonsInfo = &gSafariZone_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
		.mapNum = MAP_NUM(SAFARI_ZONE_WEST),
		.landMonsInfo = &gSafariZone_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
		.mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
		.landMonsInfo = &gSafariZone_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
		.mapNum = MAP_NUM(SAFARI_ZONE_EAST),
		.landMonsInfo = &gSafariZone_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &gRoute18_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &gRoute17_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &gRoute16_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_19),
		.mapNum = MAP_NUM(ROUTE_19),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute19_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_20),
		.mapNum = MAP_NUM(ROUTE_20),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute20_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoMorning,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoMorning,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_2F),
		.mapNum = MAP_NUM(POKEMON_MANSION_2F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_3F),
		.mapNum = MAP_NUM(POKEMON_MANSION_3F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_B1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_B1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &gTreasureBeach_LandMonsInfoMorning,
		.waterMonsInfo = &gTreasureBeach_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &gKindleRoad_LandMonsInfoMorning,
		.waterMonsInfo = &gKindleRoad_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &gMtEmber_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &gCapeBrink_LandMonsInfoMorning,
		.waterMonsInfo = &gCapeBrink_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &gBondBridge_LandMonsInfoMorning,
		.waterMonsInfo = &gBondBridge_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &gBerryForest_LandMonsInfoMorning,
		.waterMonsInfo = &gBerryForest_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &gRoute21_LandMonsInfoMorning,
		.waterMonsInfo = &gRoute21_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &gRoute21_LandMonsInfoMorning,
		.waterMonsInfo = &gRoute21_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POWER_PLANT),
		.mapNum = MAP_NUM(POWER_PLANT),
		.landMonsInfo = &gPowerPlant_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &gRoute23_LandMonsInfoMorning,
		.waterMonsInfo = &gRoute23_WaterMonsInfoMorning,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_2F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
		.mapNum = MAP_NUM(VICTORY_ROAD_3F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoMorning,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
};

const struct WildPokemonHeader gWildMonDayHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &gRoute1_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &gRoute2_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &gRoute22_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &gViridianForest_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &gRoute3_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_1F),
		.mapNum = MAP_NUM(MT_MOON_1F),
		.landMonsInfo = &gMtMoon_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B1F),
		.mapNum = MAP_NUM(MT_MOON_B1F),
		.landMonsInfo = &gMtMoonB_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B2F),
		.mapNum = MAP_NUM(MT_MOON_B2F),
		.landMonsInfo = &gMtMoon_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &gRoute4_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &gRoute24_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &gRoute25_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &gRoute5_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &gRoute6_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &gRoute11_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
		.landMonsInfo = &gDiglettsCave_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &gRoute9_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &gRoute10_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
		.mapNum = MAP_NUM(POKEMON_TOWER_3F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
		.mapNum = MAP_NUM(POKEMON_TOWER_4F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
		.mapNum = MAP_NUM(POKEMON_TOWER_5F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
		.mapNum = MAP_NUM(POKEMON_TOWER_6F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
		.mapNum = MAP_NUM(POKEMON_TOWER_7F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &gRoute8_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &gRoute7_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &gRoute12_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &gRoute13_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &gRoute14_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &gRoute15_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
		.mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
		.landMonsInfo = &gSafariZone_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
		.mapNum = MAP_NUM(SAFARI_ZONE_WEST),
		.landMonsInfo = &gSafariZone_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
		.mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
		.landMonsInfo = &gSafariZone_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
		.mapNum = MAP_NUM(SAFARI_ZONE_EAST),
		.landMonsInfo = &gSafariZone_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &gRoute18_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &gRoute17_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &gRoute16_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_19),
		.mapNum = MAP_NUM(ROUTE_19),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute19_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_20),
		.mapNum = MAP_NUM(ROUTE_20),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute20_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoDay,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoDay,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_2F),
		.mapNum = MAP_NUM(POKEMON_MANSION_2F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_3F),
		.mapNum = MAP_NUM(POKEMON_MANSION_3F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_B1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_B1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &gTreasureBeach_LandMonsInfoDay,
		.waterMonsInfo = &gTreasureBeach_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &gKindleRoad_LandMonsInfoDay,
		.waterMonsInfo = &gKindleRoad_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &gMtEmber_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &gCapeBrink_LandMonsInfoDay,
		.waterMonsInfo = &gCapeBrink_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &gBondBridge_LandMonsInfoDay,
		.waterMonsInfo = &gBondBridge_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &gBerryForest_LandMonsInfoDay,
		.waterMonsInfo = &gBerryForest_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &gRoute21_LandMonsInfoDay,
		.waterMonsInfo = &gRoute21_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &gRoute21_LandMonsInfoDay,
		.waterMonsInfo = &gRoute21_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POWER_PLANT),
		.mapNum = MAP_NUM(POWER_PLANT),
		.landMonsInfo = &gPowerPlant_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &gRoute23_LandMonsInfoDay,
		.waterMonsInfo = &gRoute23_WaterMonsInfoDay,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_2F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
		.mapNum = MAP_NUM(VICTORY_ROAD_3F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoDay,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
};

const struct WildPokemonHeader gWildMonEveningHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &gRoute1_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &gRoute2_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &gRoute22_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &gViridianForest_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &gRoute3_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_1F),
		.mapNum = MAP_NUM(MT_MOON_1F),
		.landMonsInfo = &gMtMoon_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B1F),
		.mapNum = MAP_NUM(MT_MOON_B1F),
		.landMonsInfo = &gMtMoonB_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B2F),
		.mapNum = MAP_NUM(MT_MOON_B2F),
		.landMonsInfo = &gMtMoon_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &gRoute4_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &gRoute24_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &gRoute25_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &gRoute5_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &gRoute6_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &gRoute11_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
		.landMonsInfo = &gDiglettsCave_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &gRoute9_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &gRoute10_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
		.mapNum = MAP_NUM(POKEMON_TOWER_3F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
		.mapNum = MAP_NUM(POKEMON_TOWER_4F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
		.mapNum = MAP_NUM(POKEMON_TOWER_5F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
		.mapNum = MAP_NUM(POKEMON_TOWER_6F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
		.mapNum = MAP_NUM(POKEMON_TOWER_7F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &gRoute8_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &gRoute7_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &gRoute12_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &gRoute13_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &gRoute14_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &gRoute15_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
		.mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
		.landMonsInfo = &gSafariZone_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
		.mapNum = MAP_NUM(SAFARI_ZONE_WEST),
		.landMonsInfo = &gSafariZone_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
		.mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
		.landMonsInfo = &gSafariZone_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
		.mapNum = MAP_NUM(SAFARI_ZONE_EAST),
		.landMonsInfo = &gSafariZone_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &gRoute18_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &gRoute17_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &gRoute16_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_19),
		.mapNum = MAP_NUM(ROUTE_19),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute19_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_20),
		.mapNum = MAP_NUM(ROUTE_20),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute20_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoEvening,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoEvening,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_2F),
		.mapNum = MAP_NUM(POKEMON_MANSION_2F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_3F),
		.mapNum = MAP_NUM(POKEMON_MANSION_3F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_MANSION_B1F),
		.mapNum = MAP_NUM(POKEMON_MANSION_B1F),
		.landMonsInfo = &gPokemonMansion_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &gTreasureBeach_LandMonsInfoEvening,
		.waterMonsInfo = &gTreasureBeach_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &gKindleRoad_LandMonsInfoEvening,
		.waterMonsInfo = &gKindleRoad_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &gMtEmber_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &gCapeBrink_LandMonsInfoEvening,
		.waterMonsInfo = &gCapeBrink_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &gBondBridge_LandMonsInfoEvening,
		.waterMonsInfo = &gBondBridge_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &gBerryForest_LandMonsInfoEvening,
		.waterMonsInfo = &gBerryForest_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &gRoute21_LandMonsInfoEvening,
		.waterMonsInfo = &gRoute21_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &gRoute21_LandMonsInfoEvening,
		.waterMonsInfo = &gRoute21_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POWER_PLANT),
		.mapNum = MAP_NUM(POWER_PLANT),
		.landMonsInfo = &gPowerPlant_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &gRoute23_LandMonsInfoEvening,
		.waterMonsInfo = &gRoute23_WaterMonsInfoEvening,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_2F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
		.mapNum = MAP_NUM(VICTORY_ROAD_3F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoEvening,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct WildPokemonHeader gWildMonNightHeaders[] =
{
	{
		.mapGroup = MAP_GROUP(ROUTE_1),
		.mapNum = MAP_NUM(ROUTE_1),
		.landMonsInfo = &gRoute1_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_2),
		.mapNum = MAP_NUM(ROUTE_2),
		.landMonsInfo = &gRoute2_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_22),
		.mapNum = MAP_NUM(ROUTE_22),
		.landMonsInfo = &gRoute22_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VIRIDIAN_FOREST),
		.mapNum = MAP_NUM(VIRIDIAN_FOREST),
		.landMonsInfo = &gViridianForest_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_3),
		.mapNum = MAP_NUM(ROUTE_3),
		.landMonsInfo = &gRoute3_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_1F),
		.mapNum = MAP_NUM(MT_MOON_1F),
		.landMonsInfo = &gMtMoon_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B1F),
		.mapNum = MAP_NUM(MT_MOON_B1F),
		.landMonsInfo = &gMtMoonB_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_MOON_B2F),
		.mapNum = MAP_NUM(MT_MOON_B2F),
		.landMonsInfo = &gMtMoon_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_4),
		.mapNum = MAP_NUM(ROUTE_4),
		.landMonsInfo = &gRoute4_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_24),
		.mapNum = MAP_NUM(ROUTE_24),
		.landMonsInfo = &gRoute24_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_25),
		.mapNum = MAP_NUM(ROUTE_25),
		.landMonsInfo = &gRoute25_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_5),
		.mapNum = MAP_NUM(ROUTE_5),
		.landMonsInfo = &gRoute5_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_6),
		.mapNum = MAP_NUM(ROUTE_6),
		.landMonsInfo = &gRoute6_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_11),
		.mapNum = MAP_NUM(ROUTE_11),
		.landMonsInfo = &gRoute11_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(DIGLETTS_CAVE_B1F),
		.mapNum = MAP_NUM(DIGLETTS_CAVE_B1F),
		.landMonsInfo = &gDiglettsCave_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_9),
		.mapNum = MAP_NUM(ROUTE_9),
		.landMonsInfo = &gRoute9_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_10),
		.mapNum = MAP_NUM(ROUTE_10),
		.landMonsInfo = &gRoute10_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROCK_TUNNEL_B1F),
		.mapNum = MAP_NUM(ROCK_TUNNEL_B1F),
		.landMonsInfo = &gRockTunnel_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_3F),
		.mapNum = MAP_NUM(POKEMON_TOWER_3F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_4F),
		.mapNum = MAP_NUM(POKEMON_TOWER_4F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_5F),
		.mapNum = MAP_NUM(POKEMON_TOWER_5F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_6F),
		.mapNum = MAP_NUM(POKEMON_TOWER_6F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POKEMON_TOWER_7F),
		.mapNum = MAP_NUM(POKEMON_TOWER_7F),
		.landMonsInfo = &gPokemonTower_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_8),
		.mapNum = MAP_NUM(ROUTE_8),
		.landMonsInfo = &gRoute8_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_7),
		.mapNum = MAP_NUM(ROUTE_7),
		.landMonsInfo = &gRoute7_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_12),
		.mapNum = MAP_NUM(ROUTE_12),
		.landMonsInfo = &gRoute12_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_13),
		.mapNum = MAP_NUM(ROUTE_13),
		.landMonsInfo = &gRoute13_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_14),
		.mapNum = MAP_NUM(ROUTE_14),
		.landMonsInfo = &gRoute14_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_15),
		.mapNum = MAP_NUM(ROUTE_15),
		.landMonsInfo = &gRoute15_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_CENTER),
		.mapNum = MAP_NUM(SAFARI_ZONE_CENTER),
		.landMonsInfo = &gSafariZone_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_WEST),
		.mapNum = MAP_NUM(SAFARI_ZONE_WEST),
		.landMonsInfo = &gSafariZone_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_NORTH),
		.mapNum = MAP_NUM(SAFARI_ZONE_NORTH),
		.landMonsInfo = &gSafariZone_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SAFARI_ZONE_EAST),
		.mapNum = MAP_NUM(SAFARI_ZONE_EAST),
		.landMonsInfo = &gSafariZone_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_18),
		.mapNum = MAP_NUM(ROUTE_18),
		.landMonsInfo = &gRoute18_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_17),
		.mapNum = MAP_NUM(ROUTE_17),
		.landMonsInfo = &gRoute17_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_16),
		.mapNum = MAP_NUM(ROUTE_16),
		.landMonsInfo = &gRoute16_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_19),
		.mapNum = MAP_NUM(ROUTE_19),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute19_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_20),
		.mapNum = MAP_NUM(ROUTE_20),
		.landMonsInfo = NULL,
		.waterMonsInfo = &gRoute20_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B1F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B1F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B2F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B2F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B3F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B3F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoNight,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(SEAFOAM_ISLANDS_B4F),
		.mapNum = MAP_NUM(SEAFOAM_ISLANDS_B4F),
		.landMonsInfo = &gSeafoamIslands_LandMonsInfoNight,
		.waterMonsInfo = &gSeafoamIslands_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_TREASURE_BEACH),
		.mapNum = MAP_NUM(ONE_ISLAND_TREASURE_BEACH),
		.landMonsInfo = &gTreasureBeach_LandMonsInfoNight,
		.waterMonsInfo = &gTreasureBeach_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ONE_ISLAND_KINDLE_ROAD),
		.mapNum = MAP_NUM(ONE_ISLAND_KINDLE_ROAD),
		.landMonsInfo = &gKindleRoad_LandMonsInfoNight,
		.waterMonsInfo = &gKindleRoad_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(MT_EMBER_EXTERIOR),
		.mapNum = MAP_NUM(MT_EMBER_EXTERIOR),
		.landMonsInfo = &gMtEmber_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(TWO_ISLAND_CAPE_BRINK),
		.mapNum = MAP_NUM(TWO_ISLAND_CAPE_BRINK),
		.landMonsInfo = &gCapeBrink_LandMonsInfoNight,
		.waterMonsInfo = &gCapeBrink_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BOND_BRIDGE),
		.mapNum = MAP_NUM(THREE_ISLAND_BOND_BRIDGE),
		.landMonsInfo = &gBondBridge_LandMonsInfoNight,
		.waterMonsInfo = &gBondBridge_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(THREE_ISLAND_BERRY_FOREST),
		.mapNum = MAP_NUM(THREE_ISLAND_BERRY_FOREST),
		.landMonsInfo = &gBerryForest_LandMonsInfoNight,
		.waterMonsInfo = &gBerryForest_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_A),
		.mapNum = MAP_NUM(ROUTE_21_A),
		.landMonsInfo = &gRoute21_LandMonsInfoNight,
		.waterMonsInfo = &gRoute21_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_21_B),
		.mapNum = MAP_NUM(ROUTE_21_B),
		.landMonsInfo = &gRoute21_LandMonsInfoNight,
		.waterMonsInfo = &gRoute21_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(POWER_PLANT),
		.mapNum = MAP_NUM(POWER_PLANT),
		.landMonsInfo = &gPowerPlant_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(ROUTE_23),
		.mapNum = MAP_NUM(ROUTE_23),
		.landMonsInfo = &gRoute23_LandMonsInfoNight,
		.waterMonsInfo = &gRoute23_WaterMonsInfoNight,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_1F),
		.mapNum = MAP_NUM(VICTORY_ROAD_1F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_2F),
		.mapNum = MAP_NUM(VICTORY_ROAD_2F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = MAP_GROUP(VICTORY_ROAD_3F),
		.mapNum = MAP_NUM(VICTORY_ROAD_3F),
		.landMonsInfo = &gVictoryRoad_LandMonsInfoNight,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	},
	{
		.mapGroup = 0xFF,
		.mapNum = 0xFF,
		.landMonsInfo = NULL,
		.waterMonsInfo = NULL,
		.rockSmashMonsInfo = NULL,
		.fishingMonsInfo = NULL,
	}
};

const struct SwarmData gSwarmTable[] =
{
	{
		.mapName = MAPSEC_ROUTE_1,
		.species = SPECIES_FRIGIBAX,
	},
};

#ifdef SWARM_CHANGE_HOURLY
const u8 gSwarmOrders[31][24] =
{
	{2, 1, 14, 21, 5, 16, 3, 23, 7, 4, 18, 19, 13, 17, 6, 0, 8, 9, 20, 22, 10, 11, 15, 12},
	{16, 19, 13, 23, 7, 9, 21, 17, 22, 8, 4, 3, 6, 0, 11, 20, 12, 1, 10, 2, 15, 14, 18, 5},
	{17, 8, 16, 6, 12, 19, 18, 3, 14, 22, 13, 11, 23, 2, 7, 21, 20, 10, 5, 15, 9, 0, 1, 4},
	{13, 6, 15, 3, 14, 12, 0, 18, 10, 5, 2, 17, 16, 7, 9, 1, 4, 19, 11, 23, 21, 8, 20, 22},
	{12, 7, 18, 13, 10, 2, 5, 14, 11, 23, 20, 22, 8, 15, 17, 4, 19, 16, 0, 6, 21, 1, 9, 3},
	{8, 18, 12, 15, 20, 0, 1, 13, 5, 11, 14, 21, 17, 10, 4, 16, 22, 6, 2, 19, 23, 3, 7, 9},
	{13, 11, 7, 20, 22, 3, 14, 10, 18, 6, 5, 12, 15, 23, 19, 17, 21, 0, 9, 8, 2, 16, 4, 1},
	{11, 20, 4, 2, 16, 17, 13, 12, 0, 10, 15, 14, 1, 19, 5, 8, 9, 18, 7, 21, 3, 6, 22, 23},
	{22, 18, 11, 17, 2, 9, 20, 16, 0, 13, 1, 6, 3, 14, 15, 10, 5, 8, 23, 4, 12, 21, 19, 7},
	{2, 5, 11, 7, 3, 23, 19, 1, 9, 16, 13, 15, 21, 8, 20, 12, 18, 4, 14, 10, 6, 17, 22, 0},
	{10, 18, 5, 1, 13, 15, 22, 2, 4, 3, 17, 9, 19, 21, 0, 8, 16, 11, 12, 14, 7, 23, 6, 20},
	{6, 13, 0, 4, 22, 10, 23, 17, 8, 1, 5, 11, 2, 3, 12, 19, 15, 20, 18, 9, 14, 7, 21, 16},
	{0, 22, 17, 11, 8, 15, 9, 4, 2, 7, 21, 13, 12, 6, 14, 18, 10, 23, 1, 3, 5, 20, 16, 19},
	{15, 16, 20, 5, 4, 6, 2, 21, 3, 19, 7, 8, 14, 13, 10, 23, 11, 18, 22, 0, 17, 12, 1, 9},
	{7, 12, 2, 0, 18, 4, 16, 8, 20, 17, 22, 23, 9, 1, 5, 14, 6, 21, 15, 3, 13, 19, 10, 11},
	{21, 4, 8, 14, 15, 7, 17, 19, 6, 0, 9, 1, 20, 11, 2, 23, 12, 18, 3, 16, 22, 13, 5, 10},
	{5, 3, 9, 19, 6, 14, 15, 10, 21, 7, 12, 0, 20, 16, 23, 13, 1, 22, 8, 11, 4, 2, 17, 18},
	{18, 0, 1, 19, 16, 21, 4, 5, 2, 9, 23, 7, 20, 12, 22, 15, 3, 6, 8, 11, 13, 17, 14, 10},
	{15, 16, 21, 9, 19, 6, 12, 20, 13, 18, 8, 0, 10, 22, 3, 7, 23, 5, 4, 17, 11, 2, 14, 1},
	{3, 14, 20, 16, 15, 13, 8, 4, 1, 21, 10, 5, 12, 9, 23, 6, 0, 17, 19, 7, 11, 22, 2, 18},
	{9, 7, 23, 12, 0, 1, 4, 15, 19, 17, 10, 2, 22, 5, 16, 11, 3, 6, 21, 13, 20, 18, 8, 14},
	{1, 21, 19, 17, 15, 23, 10, 6, 9, 12, 11, 0, 4, 3, 8, 22, 7, 14, 16, 20, 18, 5, 13, 2},
	{4, 9, 22, 12, 23, 11, 7, 5, 6, 2, 21, 20, 18, 14, 1, 10, 3, 15, 13, 17, 16, 19, 8, 0},
	{1, 2, 3, 10, 17, 5, 4, 22, 12, 20, 14, 9, 0, 18, 23, 15, 7, 13, 21, 11, 8, 19, 16, 6},
	{20, 23, 0, 19, 8, 18, 11, 22, 15, 14, 6, 2, 4, 12, 13, 3, 17, 7, 21, 16, 1, 9, 5, 10},
	{23, 10, 17, 19, 9, 14, 6, 7, 16, 12, 15, 18, 0, 4, 11, 2, 1, 3, 8, 5, 20, 22, 13, 21},
	{15, 21, 6, 18, 11, 22, 8, 4, 1, 7, 19, 16, 5, 20, 3, 10, 14, 2, 17, 12, 0, 9, 23, 13},
	{14, 17, 10, 9, 1, 8, 11, 7, 23, 15, 0, 5, 20, 19, 2, 16, 13, 3, 6, 18, 22, 4, 12, 21},
	{19, 15, 6, 22, 0, 20, 23, 11, 17, 14, 13, 16, 10, 1, 21, 9, 2, 12, 4, 7, 18, 5, 3, 8},
	{6, 4, 19, 16, 21, 22, 23, 9, 8, 20, 3, 10, 11, 12, 18, 5, 14, 2, 13, 1, 7, 15, 0, 17},
	{3, 18, 22, 8, 6, 1, 2, 0, 12, 14, 16, 4, 7, 9, 5, 13, 23, 17, 21, 20, 19, 10, 11, 15},
};
#endif

const u16 gSwarmTableLength = NELEMS(gSwarmTable);

#endif //End of UNBOUND section

