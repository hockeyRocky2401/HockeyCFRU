#include "trainer_parties.h"
#include "trainer_defines.h"

#include "../../include/battle.h"
#include "../../include/global.h"

#include "../../include/constants/battle_ai.h"
#include "../../include/constants/species.h"
#include "../../include/constants/items.h"
#include "../../include/constants/trainers.h"
#include "../../include/constants/trainer_classes.h"

#include "new_text.h"

#ifdef EXPAND_TRAINERS

#define DECAP_TRAINER_NAMES // Comment this line out to use the original trainer names
#define GENDER_MALE 0
#define GENDER_FEMALE 1

#define NO_ITEMS   ITEM_NONE, ITEM_NONE, ITEM_NONE, ITEM_NONE

const struct Trainer gTrainers[] = {
        [TRAINER_NONE] = {
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
    },
        [TRAINER_AQUA_LEADER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AQUA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ARCHIE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = { .NoItemDefaultMoves = sParty_AquaLeader },
    },
        [TRAINER_AQUA_GRUNT_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AquaGruntM },
    },
        [TRAINER_AQUA_GRUNT_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_AQUA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AquaGruntF },
    },
        [TRAINER_RS_AROMA_LADY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AROMA_LADY_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY_RS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSAromaLady },
    },
        [TRAINER_RS_RUIN_MANIAC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC_RS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSRuinManiac },
    },
        [TRAINER_INTERVIEWER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_INTERVIEWER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMERA_DUO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Interviewer },
    },
        [TRAINER_RS_TUBER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER_RS_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_TUBER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSTuberF },
    },
        [TRAINER_RS_TUBER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER_RS_1,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_TUBER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSTuberM },
    },
        [TRAINER_RS_COOLTRAINER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_COOLTRAINER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RSCooltrainerM },
    },
        [TRAINER_RS_COOLTRAINER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_COOLTRAINER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RSCooltrainerF },
    },
        [TRAINER_HEX_MANIAC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HEX_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HexManiac },
    },
        [TRAINER_RS_LADY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LADY_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSLady },
    },
        [TRAINER_RS_BEAUTY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSBeauty },
    },
        [TRAINER_RICH_BOY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RICH_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RICH_BOY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RichBoy },
    },
        [TRAINER_RS_POKEMANIAC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPokemaniac },
    },
        [TRAINER_RS_SWIMMER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_RSE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSSwimmerM },
    },
        [TRAINER_RS_BLACK_BELT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BLACK_BELT_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSBlackBelt },
    },
        [TRAINER_GUITARIST] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GUITARIST_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GUITARIST,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Guitarist },
    },
        [TRAINER_KINDLER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_KINDLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_KINDLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Kindler },
    },
        [TRAINER_RS_CAMPER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSCamper },
    },
        [TRAINER_BUG_MANIAC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugManiac },
    },
        [TRAINER_RS_PSYCHIC_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPsychicM },
    },
        [TRAINER_RS_PSYCHIC_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPsychicF },
    },
        [TRAINER_RS_GENTLEMAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSGentleman },
    },
        [TRAINER_ELITE_FOUR_SIDNEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ELITE_FOUR_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIDNEY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _i, _d, _n, _e, _y, _END },
        #else
        .trainerName = { _S, _I, _D, _N, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EliteFourSidney },
    },
        [TRAINER_ELITE_FOUR_PHOEBE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ELITE_FOUR_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PHOEBE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _h, _o, _e, _b, _e, _END },
        #else
        .trainerName = { _P, _H, _O, _E, _B, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EliteFourPhoebe },
    },
        [TRAINER_LEADER_ROXANNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROXANNE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _x, _a, _n, _n, _e, _END },
        #else
        .trainerName = { _R, _O, _X, _A, _N, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderRoxanne },
    },
        [TRAINER_LEADER_BRAWLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BRAWLY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _a, _w, _l, _y, _END },
        #else
        .trainerName = { _B, _R, _A, _W, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderBrawly },
    },
        [TRAINER_LEADER_TATE_LIZA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_LIZA_AND_TATE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _t, _e, _AMPERSAND, _L, _i, _z, _a, _END },
        #else
        .trainerName = { _T, _A, _T, _E, _AMPERSAND, _L, _I, _Z, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderTateLiza },
    },
        [TRAINER_SCHOOL_KID_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_BOY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SchoolKidM },
    },
        [TRAINER_SCHOOL_KID_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCHOOL_KID,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCHOOL_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SchoolKidF },
    },
        [TRAINER_SR_AND_JR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SR_AND_JR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SrAndJr },
    },
        [TRAINER_POKEFAN_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokefanM },
    },
        [TRAINER_POKEFAN_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEFAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokefanF },
    },
        [TRAINER_EXPERT_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ExpertM },
    },
        [TRAINER_EXPERT_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_EXPERT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ExpertF },
    },
        [TRAINER_RS_YOUNGSTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSYoungster },
    },
        [TRAINER_RS_CHAMPION] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHAMPION_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_STEVEN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RSChampion },
    },
        [TRAINER_RS_FISHERMAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSFisherman },
    },
        [TRAINER_CYCLING_TRIATHLETE_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CyclingTriathleteM },
    },
        [TRAINER_CYCLING_TRIATHLETE_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CyclingTriathleteF },
    },
        [TRAINER_RUNNING_TRIATHLETE_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RunningTriathleteM },
    },
        [TRAINER_RUNNING_TRIATHLETE_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RunningTriathleteF },
    },
        [TRAINER_SWIMMING_TRIATHLETE_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmingTriathleteM },
    },
        [TRAINER_SWIMMING_TRIATHLETE_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TRIATHLETE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmingTriathleteF },
    },
        [TRAINER_DRAGON_TAMER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_DRAGON_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_DragonTamer },
    },
        [TRAINER_RS_BIRD_KEEPER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BIRDKEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSBirdKeeper },
    },
        [TRAINER_NINJA_BOY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_NINJA_BOY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_NinjaBoy },
    },
        [TRAINER_BATTLE_GIRL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BATTLE_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BattleGirl },
    },
        [TRAINER_PARASOL_LADY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PARASOL_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ParasolLady },
    },
        [TRAINER_RS_SWIMMER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSSwimmerF },
    },
        [TRAINER_RS_PICNICKER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPicnicker },
    },
        [TRAINER_RS_TWINS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSTwins },
    },
        [TRAINER_RS_SAILOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSSailor },
    },
        [TRAINER_BOARDER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BoarderM },
    },
        [TRAINER_BOARDER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BOARDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BoarderF },
    },
        [TRAINER_COLLECTOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_COLLECTOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COLLECTOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Collector },
    },
        [TRAINER_WALLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_WALLY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Wally },
    },
        [TRAINER_BRENDAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Brendan },
    },
        [TRAINER_BRENDAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Brendan2 },
    },
        [TRAINER_BRENDAN_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Brendan3 },
    },
        [TRAINER_MAY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_May },
    },
        [TRAINER_MAY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_May2 },
    },
        [TRAINER_MAY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_TRAINER_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_MAY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_May3 },
    },
        [TRAINER_RS_PKMN_BREEDER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BREEDER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPkmnBreederM },
    },
        [TRAINER_RS_PKMN_BREEDER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BREEDER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSPkmnBreederF },
    },
        [TRAINER_RS_PKMN_RANGER_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_RANGER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RSPkmnRangerM },
    },
        [TRAINER_RS_PKMN_RANGER_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_RANGER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RSPkmnRangerF },
    },
        [TRAINER_MAGMA_LEADER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_MAGMA_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_MAXIE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_MagmaLeader },
    },
        [TRAINER_MAGMA_GRUNT_M] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_MagmaGruntM },
    },
        [TRAINER_MAMGA_GRUNT_F] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_MAGMA,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_MagmaGruntF },
    },
        [TRAINER_RS_LASS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSLass },
    },
        [TRAINER_RS_BUG_CATCHER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_BUGCATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSBugCatcher },
    },
        [TRAINER_RS_HIKER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSHiker },
    },
        [TRAINER_RS_YOUNG_COUPLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSYoungCouple },
    },
        [TRAINER_OLD_COUPLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_OLD_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_EXPERT_DUO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_OldCouple },
    },
        [TRAINER_RS_SIS_AND_BRO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RS_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RSSisAndBro },
    },
        [TRAINER_AQUA_ADMIN_MATT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_MATT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _t, _t, _END },
        #else
        .trainerName = { _M, _A, _T, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AquaAdminMatt },
    },
        [TRAINER_AQUA_ADMIN_SHELLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AQUA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SHELLY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _l, _l, _y, _END },
        #else
        .trainerName = { _S, _H, _E, _L, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AquaAdminShelly },
    },
        [TRAINER_MAGMA_ADMIN_TABITHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TABITHA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _b, _i, _t, _h, _a, _END },
        #else
        .trainerName = { _T, _A, _B, _I, _T, _H, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_MagmaAdminTabitha },
    },
        [TRAINER_MAGMA_ADMIN_COURTNEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_MAGMA_ADMIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MAGMA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COURTNEY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _u, _r, _t, _n, _e, _y, _END },
        #else
        .trainerName = { _C, _O, _U, _R, _T, _N, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_MagmaAdminCourtney },
    },
        [TRAINER_LEADER_WATTSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WATTSON,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _t, _t, _s, _o, _n, _END },
        #else
        .trainerName = { _W, _A, _T, _T, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderWattson },
    },
        [TRAINER_LEADER_FLANNERY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FLANNERY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _l, _a, _n, _n, _e, _r, _y, _END },
        #else
        .trainerName = { _F, _L, _A, _N, _N, _E, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderFlannery },
    },
        [TRAINER_LEADER_NORMAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_NORMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _o, _r, _m, _a, _n, _END },
        #else
        .trainerName = { _N, _O, _R, _M, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderNorman },
    },
        [TRAINER_LEADER_WINONA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WINONA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _i, _n, _o, _n, _a, _END },
        #else
        .trainerName = { _W, _I, _N, _O, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderWinona },
    },
        [TRAINER_LEADER_WALLACE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LEADER_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WALLACE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _l, _l, _a, _c, _e, _END },
        #else
        .trainerName = { _W, _A, _L, _L, _A, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LeaderWallace },
    },
        [TRAINER_ELITE_FOUR_GLACIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ELITE_FOUR_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GLACIA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _l, _a, _c, _i, _a, _END },
        #else
        .trainerName = { _G, _L, _A, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EliteFourGlacia },
    },
        [TRAINER_ELITE_FOUR_DRAKE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ELITE_FOUR_RS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_DRAKE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _r, _a, _k, _e, _END },
        #else
        .trainerName = { _D, _R, _A, _K, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EliteFourDrake },
    },
        [TRAINER_YOUNGSTER_BEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _END },
        #else
        .trainerName = { _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterBen },
    },
        [TRAINER_YOUNGSTER_CALVIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _l, _v, _i, _n, _END },
        #else
        .trainerName = { _C, _A, _L, _V, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterCalvin },
    },
        [TRAINER_YOUNGSTER_JOSH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _s, _h, _END },
        #else
        .trainerName = { _J, _O, _S, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterJosh },
    },
        [TRAINER_YOUNGSTER_TIMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _I, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterTimmy },
    },
        [TRAINER_YOUNGSTER_JOEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _e, _y, _END },
        #else
        .trainerName = { _J, _O, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterJoey },
    },
        [TRAINER_YOUNGSTER_DAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _n, _END },
        #else
        .trainerName = { _D, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterDan },
    },
        [TRAINER_YOUNGSTER_CHAD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _d, _END },
        #else
        .trainerName = { _C, _H, _A, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterChad },
    },
        [TRAINER_YOUNGSTER_TYLER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _y, _l, _e, _r, _END },
        #else
        .trainerName = { _T, _Y, _L, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterTyler },
    },
        [TRAINER_YOUNGSTER_EDDIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _d, _i, _e, _END },
        #else
        .trainerName = { _E, _D, _D, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterEddie },
    },
        [TRAINER_YOUNGSTER_DILLON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _i, _l, _l, _o, _n, _END },
        #else
        .trainerName = { _D, _I, _L, _L, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterDillon },
    },
        [TRAINER_YOUNGSTER_YASU] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Y, _a, _s, _u, _END },
        #else
        .trainerName = { _Y, _A, _S, _U, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterYasu },
    },
        [TRAINER_YOUNGSTER_DAVE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _v, _e, _END },
        #else
        .trainerName = { _D, _A, _V, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterDave },
    },
        [TRAINER_YOUNGSTER_BEN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _END },
        #else
        .trainerName = { _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterBen2 },
    },
        [TRAINER_BUG_CATCHER_RICK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _k, _END },
        #else
        .trainerName = { _R, _I, _C, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherRick },
    },
        [TRAINER_BUG_CATCHER_DOUG] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _o, _u, _g, _END },
        #else
        .trainerName = { _D, _O, _U, _G, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherDoug },
    },
        [TRAINER_BUG_CATCHER_SAMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _m, _m, _y, _END },
        #else
        .trainerName = { _S, _A, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherSammy },
    },
        [TRAINER_BUG_CATCHER_COLTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _C, _O, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherColton },
    },
        [TRAINER_BUG_CATCHER_GREG] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _e, _g, _END },
        #else
        .trainerName = { _G, _R, _E, _G, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherGreg },
    },
        [TRAINER_BUG_CATCHER_JAMES] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _m, _e, _s, _END },
        #else
        .trainerName = { _J, _A, _M, _E, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherJames },
    },
        [TRAINER_BUG_CATCHER_KENT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _n, _t, _END },
        #else
        .trainerName = { _K, _E, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherKent },
    },
        [TRAINER_BUG_CATCHER_ROBBY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _b, _b, _y, _END },
        #else
        .trainerName = { _R, _O, _B, _B, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherRobby },
    },
        [TRAINER_BUG_CATCHER_CALE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _l, _e, _END },
        #else
        .trainerName = { _C, _A, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherCale },
    },
        [TRAINER_BUG_CATCHER_KEIGO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _i, _g, _o, _END },
        #else
        .trainerName = { _K, _E, _I, _G, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherKeigo },
    },
        [TRAINER_BUG_CATCHER_ELIJAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _l, _i, _j, _a, _h, _END },
        #else
        .trainerName = { _E, _L, _I, _J, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherElijah },
    },
        [TRAINER_BUG_CATCHER_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher2 },
    },
        [TRAINER_BUG_CATCHER_BRENT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _e, _n, _t, _END },
        #else
        .trainerName = { _B, _R, _E, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherBrent },
    },
        [TRAINER_BUG_CATCHER_CONNER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _n, _n, _e, _r, _END },
        #else
        .trainerName = { _C, _O, _N, _N, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherConner },
    },
        [TRAINER_LASS_JANICE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _n, _i, _c, _e, _END },
        #else
        .trainerName = { _J, _A, _N, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassJanice },
    },
        [TRAINER_LASS_SALLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _l, _l, _y, _END },
        #else
        .trainerName = { _S, _A, _L, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassSally },
    },
        [TRAINER_LASS_ROBIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _b, _i, _n, _END },
        #else
        .trainerName = { _R, _O, _B, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassRobin },
    },
        [TRAINER_LASS_CRISSY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _r, _i, _s, _s, _y, _END },
        #else
        .trainerName = { _C, _R, _I, _S, _S, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassCrissy },
    },
        [TRAINER_LASS_MIRIAM] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _r, _i, _a, _m, _END },
        #else
        .trainerName = { _M, _I, _R, _I, _A, _M, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassMiriam },
    },
        [TRAINER_LASS_IRIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _r, _i, _s, _END },
        #else
        .trainerName = { _I, _R, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassIris },
    },
        [TRAINER_LASS_RELI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _l, _i, _END },
        #else
        .trainerName = { _R, _E, _L, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassReli },
    },
        [TRAINER_LASS_ALI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _END },
        #else
        .trainerName = { _A, _L, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassAli },
    },
        [TRAINER_LASS_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Lass2 },
    },
        [TRAINER_LASS_HALEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _a, _l, _e, _y, _END },
        #else
        .trainerName = { _H, _A, _L, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassHaley },
    },
        [TRAINER_LASS_ANN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _n, _END },
        #else
        .trainerName = { _A, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassAnn },
    },
        [TRAINER_LASS_DAWN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _w, _n, _END },
        #else
        .trainerName = { _D, _A, _W, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassDawn },
    },
        [TRAINER_LASS_PAIGE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _i, _g, _e, _END },
        #else
        .trainerName = { _P, _A, _I, _G, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassPaige },
    },
        [TRAINER_LASS_ANDREA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _d, _r, _e, _a, _END },
        #else
        .trainerName = { _A, _N, _D, _R, _E, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassAndrea },
    },
        [TRAINER_LASS_MEGAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _e, _g, _a, _n, _END },
        #else
        .trainerName = { _M, _E, _G, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassMegan },
    },
        [TRAINER_LASS_JULIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _u, _l, _i, _a, _END },
        #else
        .trainerName = { _J, _U, _L, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassJulia },
    },
        [TRAINER_LASS_KAY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _a, _y, _END },
        #else
        .trainerName = { _K, _A, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassKay },
    },
        [TRAINER_LASS_LISA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _s, _a, _END },
        #else
        .trainerName = { _L, _I, _S, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassLisa },
    },
        [TRAINER_SAILOR_EDMOND] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _m, _o, _n, _d, _END },
        #else
        .trainerName = { _E, _D, _M, _O, _N, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorEdmond },
    },
        [TRAINER_SAILOR_TREVOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _r, _e, _v, _o, _r, _END },
        #else
        .trainerName = { _T, _R, _E, _V, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorTrevor },
    },
        [TRAINER_SAILOR_LEONARD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _o, _n, _a, _r, _d, _END },
        #else
        .trainerName = { _L, _E, _O, _N, _A, _R, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorLeonard },
    },
        [TRAINER_SAILOR_DUNCAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _u, _n, _c, _a, _n, _END },
        #else
        .trainerName = { _D, _U, _N, _C, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorDuncan },
    },
        [TRAINER_SAILOR_HUEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _u, _e, _y, _END },
        #else
        .trainerName = { _H, _U, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorHuey },
    },
        [TRAINER_SAILOR_DYLAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _y, _l, _a, _n, _END },
        #else
        .trainerName = { _D, _Y, _L, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorDylan },
    },
        [TRAINER_SAILOR_PHILLIP] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _h, _i, _l, _l, _i, _p, _END },
        #else
        .trainerName = { _P, _H, _I, _L, _L, _I, _P, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorPhillip },
    },
        [TRAINER_SAILOR_DWAYNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SAILOR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SAILOR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _w, _a, _y, _n, _e, _END },
        #else
        .trainerName = { _D, _W, _A, _Y, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SailorDwayne },
    },
        [TRAINER_CAMPER_LIAM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _a, _m, _END },
        #else
        .trainerName = { _L, _I, _A, _M, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_CamperLiam },
    },
        [TRAINER_CAMPER_SHANE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _n, _e, _END },
        #else
        .trainerName = { _S, _H, _A, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperShane },
    },
        [TRAINER_CAMPER_ETHAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _t, _h, _a, _n, _END },
        #else
        .trainerName = { _E, _T, _H, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperEthan },
    },
        [TRAINER_CAMPER_RICKY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _k, _y, _END },
        #else
        .trainerName = { _R, _I, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperRicky },
    },
        [TRAINER_CAMPER_JEFF] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _f, _f, _END },
        #else
        .trainerName = { _J, _E, _F, _F, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperJeff },
    },
        [TRAINER_CAMPER_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Camper2 },
    },
        [TRAINER_CAMPER_CHRIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _r, _i, _s, _END },
        #else
        .trainerName = { _C, _H, _R, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperChris },
    },
        [TRAINER_CAMPER_DREW] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _r, _e, _w, _END },
        #else
        .trainerName = { _D, _R, _E, _W, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperDrew },
    },
        [TRAINER_PICNICKER_DIANA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _i, _a, _n, _a, _END },
        #else
        .trainerName = { _D, _I, _A, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerDiana },
    },
        [TRAINER_PICNICKER_NANCY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _a, _n, _c, _y, _END },
        #else
        .trainerName = { _N, _A, _N, _C, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerNancy },
    },
        [TRAINER_PICNICKER_ISABELLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _b, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _I, _S, _A, _B, _E, _L, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerIsabelle },
    },
        [TRAINER_PICNICKER_KELSEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _l, _s, _e, _y, _END },
        #else
        .trainerName = { _K, _E, _L, _S, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerKelsey },
    },
        [TRAINER_PICNICKER_ALICIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _i, _a, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAlicia },
    },
        [TRAINER_PICNICKER_CAITLIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _i, _t, _l, _i, _n, _END },
        #else
        .trainerName = { _C, _A, _I, _T, _L, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerCaitlin },
    },
        [TRAINER_PICNICKER_HEIDI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _i, _d, _i, _END },
        #else
        .trainerName = { _H, _E, _I, _D, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerHeidi },
    },
        [TRAINER_PICNICKER_CAROL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _r, _o, _l, _END },
        #else
        .trainerName = { _C, _A, _R, _O, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerCarol },
    },
        [TRAINER_PICNICKER_SOFIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _o, _f, _i, _a, _END },
        #else
        .trainerName = { _S, _O, _F, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerSofia },
    },
        [TRAINER_PICNICKER_MARTHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _t, _h, _a, _END },
        #else
        .trainerName = { _M, _A, _R, _T, _H, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerMartha },
    },
        [TRAINER_PICNICKER_TINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _n, _a, _END },
        #else
        .trainerName = { _T, _I, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerTina },
    },
        [TRAINER_PICNICKER_HANNAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _a, _n, _n, _a, _h, _END },
        #else
        .trainerName = { _H, _A, _N, _N, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerHannah },
    },
        [TRAINER_POKEMANIAC_MARK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _k, _END },
        #else
        .trainerName = { _M, _A, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacMark },
    },
        [TRAINER_POKEMANIAC_HERMAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _r, _m, _a, _n, _END },
        #else
        .trainerName = { _H, _E, _R, _M, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacHerman },
    },
        [TRAINER_POKEMANIAC_COOPER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _o, _p, _e, _r, _END },
        #else
        .trainerName = { _C, _O, _O, _P, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacCooper },
    },
        [TRAINER_POKEMANIAC_STEVE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _t, _e, _v, _e, _END },
        #else
        .trainerName = { _S, _T, _E, _V, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacSteve },
    },
        [TRAINER_POKEMANIAC_WINSTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _i, _n, _s, _t, _o, _n, _END },
        #else
        .trainerName = { _W, _I, _N, _S, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacWinston },
    },
        [TRAINER_POKEMANIAC_DAWSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _w, _s, _o, _n, _END },
        #else
        .trainerName = { _D, _A, _W, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacDawson },
    },
        [TRAINER_POKEMANIAC_ASHTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _s, _h, _t, _o, _n, _END },
        #else
        .trainerName = { _A, _S, _H, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacAshton },
    },
        [TRAINER_SUPER_NERD_JOVAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _v, _a, _n, _END },
        #else
        .trainerName = { _J, _O, _V, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdJovan },
    },
        [TRAINER_SUPER_NERD_MIGUEL] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _g, _u, _e, _l, _END },
        #else
        .trainerName = { _M, _I, _G, _U, _E, _L, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_SuperNerdMiguel },
    },
        [TRAINER_SUPER_NERD_AIDAN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _i, _d, _a, _n, _END },
        #else
        .trainerName = { _A, _I, _D, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_SuperNerdAidan },
    },
        [TRAINER_SUPER_NERD_GLENN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _l, _e, _n, _n, _END },
        #else
        .trainerName = { _G, _L, _E, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdGlenn },
    },
        [TRAINER_SUPER_NERD_LESLIE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _s, _l, _i, _e, _END },
        #else
        .trainerName = { _L, _E, _S, _L, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_SuperNerdLeslie },
    },
        [TRAINER_SUPER_NERD_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerd1 },
    },
        [TRAINER_SUPER_NERD_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerd2 },
    },
        [TRAINER_SUPER_NERD_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerd3 },
    },
        [TRAINER_SUPER_NERD_ERIK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _r, _i, _k, _END },
        #else
        .trainerName = { _E, _R, _I, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdErik },
    },
        [TRAINER_SUPER_NERD_AVERY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _v, _e, _r, _y, _END },
        #else
        .trainerName = { _A, _V, _E, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdAvery },
    },
        [TRAINER_SUPER_NERD_DEREK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _e, _r, _e, _k, _END },
        #else
        .trainerName = { _D, _E, _R, _E, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdDerek },
    },
        [TRAINER_SUPER_NERD_ZAC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Z, _a, _c, _END },
        #else
        .trainerName = { _Z, _A, _C, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdZac },
    },
        [TRAINER_HIKER_MARCOS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _c, _o, _s, _END },
        #else
        .trainerName = { _M, _A, _R, _C, _O, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerMarcos },
    },
        [TRAINER_HIKER_FRANKLIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _r, _a, _n, _k, _l, _i, _n, _END },
        #else
        .trainerName = { _F, _R, _A, _N, _K, _L, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerFranklin },
    },
        [TRAINER_HIKER_NOB] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _o, _b, _END },
        #else
        .trainerName = { _N, _O, _B, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerNob },
    },
        [TRAINER_HIKER_WAYNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _y, _n, _e, _END },
        #else
        .trainerName = { _W, _A, _Y, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerWayne },
    },
        [TRAINER_HIKER_ALAN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _a, _n, _END },
        #else
        .trainerName = { _A, _L, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_HikerAlan },
    },
        [TRAINER_HIKER_BRICE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _i, _c, _e, _END },
        #else
        .trainerName = { _B, _R, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerBrice },
    },
        [TRAINER_HIKER_CLARK] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _l, _a, _r, _k, _END },
        #else
        .trainerName = { _C, _L, _A, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_HikerClark },
    },
        [TRAINER_HIKER_TRENT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _r, _e, _n, _t, _END },
        #else
        .trainerName = { _T, _R, _E, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerTrent },
    },
        [TRAINER_HIKER_DUDLEY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _u, _d, _l, _e, _y, _END },
        #else
        .trainerName = { _D, _U, _D, _L, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_HikerDudley },
    },
        [TRAINER_HIKER_ALLEN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _l, _e, _n, _END },
        #else
        .trainerName = { _A, _L, _L, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_HikerAllen },
    },
        [TRAINER_HIKER_ERIC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _r, _i, _c, _END },
        #else
        .trainerName = { _E, _R, _I, _C, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerEric },
    },
        [TRAINER_HIKER_LENNY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _n, _n, _y, _END },
        #else
        .trainerName = { _L, _E, _N, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerLenny },
    },
        [TRAINER_HIKER_OLIVER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _O, _l, _i, _v, _e, _r, _END },
        #else
        .trainerName = { _O, _L, _I, _V, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerOliver },
    },
        [TRAINER_HIKER_LUCAS] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _c, _a, _s, _END },
        #else
        .trainerName = { _L, _U, _C, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_HikerLucas },
    },
        [TRAINER_BIKER_JARED] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _r, _e, _d, _END },
        #else
        .trainerName = { _J, _A, _R, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerJared },
    },
        [TRAINER_BIKER_MALIK] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _l, _i, _k, _END },
        #else
        .trainerName = { _M, _A, _L, _I, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerMalik },
    },
        [TRAINER_BIKER_ERNEST] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _r, _n, _e, _s, _t, _END },
        #else
        .trainerName = { _E, _R, _N, _E, _S, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerErnest },
    },
        [TRAINER_BIKER_ALEX] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _e, _x, _END },
        #else
        .trainerName = { _A, _L, _E, _X, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerAlex },
    },
        [TRAINER_BIKER_LAO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _o, _END },
        #else
        .trainerName = { _L, _A, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerLao },
    },
        [TRAINER_BIKER_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Biker1 },
    },
        [TRAINER_BIKER_HIDEO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _i, _d, _e, _o, _END },
        #else
        .trainerName = { _H, _I, _D, _E, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerHideo },
    },
        [TRAINER_BIKER_RUBEN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _u, _b, _e, _n, _END },
        #else
        .trainerName = { _R, _U, _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerRuben },
    },
        [TRAINER_BIKER_BILLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _i, _l, _l, _y, _END },
        #else
        .trainerName = { _B, _I, _L, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerBilly },
    },
        [TRAINER_BIKER_NIKOLAS] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _k, _o, _l, _a, _s, _END },
        #else
        .trainerName = { _N, _I, _K, _O, _L, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerNikolas },
    },
        [TRAINER_BIKER_JAXON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _x, _o, _n, _END },
        #else
        .trainerName = { _J, _A, _X, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerJaxon },
    },
        [TRAINER_BIKER_WILLIAM] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _i, _l, _l, _i, _a, _m, _END },
        #else
        .trainerName = { _W, _I, _L, _L, _I, _A, _M, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerWilliam },
    },
        [TRAINER_BIKER_LUKAS] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _k, _a, _s, _END },
        #else
        .trainerName = { _L, _U, _K, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerLukas },
    },
        [TRAINER_BIKER_ISAAC] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _a, _c, _END },
        #else
        .trainerName = { _I, _S, _A, _A, _C, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerIsaac },
    },
        [TRAINER_BIKER_GERALD] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _e, _r, _a, _l, _d, _END },
        #else
        .trainerName = { _G, _E, _R, _A, _L, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerGerald },
    },
        [TRAINER_BURGLAR_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Burglar1 },
    },
        [TRAINER_BURGLAR_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Burglar2 },
    },
        [TRAINER_BURGLAR_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Burglar3 },
    },
        [TRAINER_BURGLAR_QUINN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Q, _u, _i, _n, _n, _END },
        #else
        .trainerName = { _Q, _U, _I, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarQuinn },
    },
        [TRAINER_BURGLAR_RAMON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _m, _o, _n, _END },
        #else
        .trainerName = { _R, _A, _M, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarRamon },
    },
        [TRAINER_BURGLAR_DUSTY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _u, _s, _t, _y, _END },
        #else
        .trainerName = { _D, _U, _S, _T, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarDusty },
    },
        [TRAINER_BURGLAR_ARNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _r, _n, _i, _e, _END },
        #else
        .trainerName = { _A, _R, _N, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarArnie },
    },
        [TRAINER_BURGLAR_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Burglar4 },
    },
        [TRAINER_BURGLAR_SIMON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _i, _m, _o, _n, _END },
        #else
        .trainerName = { _S, _I, _M, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarSimon },
    },
        [TRAINER_BURGLAR_LEWIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BURGLAR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BURGLAR,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _w, _i, _s, _END },
        #else
        .trainerName = { _L, _E, _W, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BurglarLewis },
    },
        [TRAINER_ENGINEER_BAILY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ENGINEER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WORKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _a, _i, _l, _y, _END },
        #else
        .trainerName = { _B, _A, _I, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EngineerBaily },
    },
        [TRAINER_ENGINEER_BRAXTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ENGINEER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WORKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _a, _x, _t, _o, _n, _END },
        #else
        .trainerName = { _B, _R, _A, _X, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EngineerBraxton },
    },
        [TRAINER_ENGINEER_BERNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ENGINEER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WORKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _r, _n, _i, _e, _END },
        #else
        .trainerName = { _B, _E, _R, _N, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EngineerBernie },
    },
        [TRAINER_FISHERMAN_DALE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _l, _e, _END },
        #else
        .trainerName = { _D, _A, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanDale },
    },
        [TRAINER_FISHERMAN_BARNY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _a, _r, _n, _y, _END },
        #else
        .trainerName = { _B, _A, _R, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanBarny },
    },
        [TRAINER_FISHERMAN_NED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _e, _d, _END },
        #else
        .trainerName = { _N, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanNed },
    },
        [TRAINER_FISHERMAN_CHIP] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _i, _p, _END },
        #else
        .trainerName = { _C, _H, _I, _P, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanChip },
    },
        [TRAINER_FISHERMAN_HANK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _a, _n, _k, _END },
        #else
        .trainerName = { _H, _A, _N, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanHank },
    },
        [TRAINER_FISHERMAN_ELLIOT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _l, _l, _i, _o, _t, _END },
        #else
        .trainerName = { _E, _L, _L, _I, _O, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanElliot },
    },
        [TRAINER_FISHERMAN_RONALD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _n, _a, _l, _d, _END },
        #else
        .trainerName = { _R, _O, _N, _A, _L, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanRonald },
    },
        [TRAINER_FISHERMAN_CLAUDE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _l, _a, _u, _d, _e, _END },
        #else
        .trainerName = { _C, _L, _A, _U, _D, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanClaude },
    },
        [TRAINER_FISHERMAN_WADE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _d, _e, _END },
        #else
        .trainerName = { _W, _A, _D, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanWade },
    },
        [TRAINER_FISHERMAN_NOLAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _o, _l, _a, _n, _END },
        #else
        .trainerName = { _N, _O, _L, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanNolan },
    },
        [TRAINER_FISHERMAN_ANDREW] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _d, _r, _e, _w, _END },
        #else
        .trainerName = { _A, _N, _D, _R, _E, _W, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanAndrew },
    },
        [TRAINER_SWIMMER_MALE_LUIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _i, _s, _END },
        #else
        .trainerName = { _L, _U, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleLuis },
    },
        [TRAINER_SWIMMER_MALE_RICHARD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _h, _a, _r, _d, _END },
        #else
        .trainerName = { _R, _I, _C, _H, _A, _R, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleRichard },
    },
        [TRAINER_SWIMMER_MALE_REECE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _e, _c, _e, _END },
        #else
        .trainerName = { _R, _E, _E, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleReece },
    },
        [TRAINER_SWIMMER_MALE_MATTHEW] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _t, _t, _h, _e, _w, _END },
        #else
        .trainerName = { _M, _A, _T, _T, _H, _E, _W, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleMatthew },
    },
        [TRAINER_SWIMMER_MALE_DOUGLAS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _o, _u, _g, _l, _a, _s, _END },
        #else
        .trainerName = { _D, _O, _U, _G, _L, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleDouglas },
    },
        [TRAINER_SWIMMER_MALE_DAVID] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _v, _i, _d, _END },
        #else
        .trainerName = { _D, _A, _V, _I, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleDavid },
    },
        [TRAINER_SWIMMER_MALE_TONY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _o, _n, _y, _END },
        #else
        .trainerName = { _T, _O, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleTony },
    },
        [TRAINER_SWIMMER_MALE_AXLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _x, _l, _e, _END },
        #else
        .trainerName = { _A, _X, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleAxle },
    },
        [TRAINER_SWIMMER_MALE_BARRY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _a, _r, _r, _y, _END },
        #else
        .trainerName = { _B, _A, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleBarry },
    },
        [TRAINER_SWIMMER_MALE_DEAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _e, _a, _n, _END },
        #else
        .trainerName = { _D, _E, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleDean },
    },
        [TRAINER_SWIMMER_MALE_DARRIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _r, _i, _n, _END },
        #else
        .trainerName = { _D, _A, _R, _R, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleDarrin },
    },
        [TRAINER_SWIMMER_MALE_SPENCER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _p, _e, _n, _c, _e, _r, _END },
        #else
        .trainerName = { _S, _P, _E, _N, _C, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleSpencer },
    },
        [TRAINER_SWIMMER_MALE_JACK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _k, _END },
        #else
        .trainerName = { _J, _A, _C, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleJack },
    },
        [TRAINER_SWIMMER_MALE_JEROME] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _r, _o, _m, _e, _END },
        #else
        .trainerName = { _J, _E, _R, _O, _M, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleJerome },
    },
        [TRAINER_SWIMMER_MALE_ROLAND] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _l, _a, _n, _d, _END },
        #else
        .trainerName = { _R, _O, _L, _A, _N, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleRoland },
    },
        [TRAINER_CUE_BALL_KOJI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _o, _j, _i, _END },
        #else
        .trainerName = { _K, _O, _J, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallKoji },
    },
        [TRAINER_CUE_BALL_LUKE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _k, _e, _END },
        #else
        .trainerName = { _L, _U, _K, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallLuke },
    },
        [TRAINER_CUE_BALL_CAMRON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _m, _r, _o, _n, _END },
        #else
        .trainerName = { _C, _A, _M, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallCamron },
    },
        [TRAINER_CUE_BALL_RAUL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _u, _l, _END },
        #else
        .trainerName = { _R, _A, _U, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallRaul },
    },
        [TRAINER_CUE_BALL_ISAIAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _i, _a, _h, _END },
        #else
        .trainerName = { _I, _S, _A, _I, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallIsaiah },
    },
        [TRAINER_CUE_BALL_ZEEK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Z, _e, _e, _k, _END },
        #else
        .trainerName = { _Z, _E, _E, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallZeek },
    },
        [TRAINER_CUE_BALL_JAMAL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _m, _a, _l, _END },
        #else
        .trainerName = { _J, _A, _M, _A, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallJamal },
    },
        [TRAINER_CUE_BALL_COREY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _r, _e, _y, _END },
        #else
        .trainerName = { _C, _O, _R, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallCorey },
    },
        [TRAINER_CUE_BALL_CHASE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _s, _e, _END },
        #else
        .trainerName = { _C, _H, _A, _S, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallChase },
    },
        [TRAINER_GAMER_HUGO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _u, _g, _o, _END },
        #else
        .trainerName = { _H, _U, _G, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerHugo },
    },
        [TRAINER_GAMER_JASPER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _s, _p, _e, _r, _END },
        #else
        .trainerName = { _J, _A, _S, _P, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerJasper },
    },
        [TRAINER_GAMER_DIRK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _i, _r, _k, _END },
        #else
        .trainerName = { _D, _I, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerDirk },
    },
        [TRAINER_GAMER_DARIAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _i, _a, _n, _END },
        #else
        .trainerName = { _D, _A, _R, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerDarian },
    },
        [TRAINER_GAMER_STAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _t, _a, _n, _END },
        #else
        .trainerName = { _S, _T, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerStan },
    },
        [TRAINER_GAMER_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Gamer1 },
    },
        [TRAINER_GAMER_RICH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _h, _END },
        #else
        .trainerName = { _R, _I, _C, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerRich },
    },
        [TRAINER_BEAUTY_BRIDGET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _i, _d, _g, _e, _t, _END },
        #else
        .trainerName = { _B, _R, _I, _D, _G, _E, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyBridget },
    },
        [TRAINER_BEAUTY_TAMIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _m, _i, _a, _END },
        #else
        .trainerName = { _T, _A, _M, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyTamia },
    },
        [TRAINER_BEAUTY_LORI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _o, _r, _i, _END },
        #else
        .trainerName = { _L, _O, _R, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyLori },
    },
        [TRAINER_BEAUTY_LOLA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _o, _l, _a, _END },
        #else
        .trainerName = { _L, _O, _L, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyLola },
    },
        [TRAINER_BEAUTY_SHEILA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _i, _l, _a, _END },
        #else
        .trainerName = { _S, _H, _E, _I, _L, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautySheila },
    },
        [TRAINER_SWIMMER_FEMALE_TIFFANY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _f, _f, _a, _n, _y, _END },
        #else
        .trainerName = { _T, _I, _F, _F, _A, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleTiffany },
    },
        [TRAINER_SWIMMER_FEMALE_NORA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _o, _r, _a, _END },
        #else
        .trainerName = { _N, _O, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleNora },
    },
        [TRAINER_SWIMMER_FEMALE_MELISSA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _e, _l, _i, _s, _s, _a, _END },
        #else
        .trainerName = { _M, _E, _L, _I, _S, _S, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleMelissa },
    },
        [TRAINER_BEAUTY_GRACE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _a, _c, _e, _END },
        #else
        .trainerName = { _G, _R, _A, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyGrace },
    },
        [TRAINER_BEAUTY_OLIVIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _O, _l, _i, _v, _i, _a, _END },
        #else
        .trainerName = { _O, _L, _I, _V, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyOlivia },
    },
        [TRAINER_BEAUTY_LAUREN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _u, _r, _e, _n, _END },
        #else
        .trainerName = { _L, _A, _U, _R, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyLauren },
    },
        [TRAINER_SWIMMER_FEMALE_ANYA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _y, _a, _END },
        #else
        .trainerName = { _A, _N, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleAnya },
    },
        [TRAINER_SWIMMER_FEMALE_ALICE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _e, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleAlice },
    },
        [TRAINER_SWIMMER_FEMALE_CONNIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _n, _n, _i, _e, _END },
        #else
        .trainerName = { _C, _O, _N, _N, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleConnie },
    },
        [TRAINER_SWIMMER_FEMALE_SHIRLEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _i, _r, _l, _e, _y, _END },
        #else
        .trainerName = { _S, _H, _I, _R, _L, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleShirley },
    },
        [TRAINER_PSYCHIC_JOHAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _h, _a, _n, _END },
        #else
        .trainerName = { _J, _O, _H, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PsychicJohan },
    },
        [TRAINER_PSYCHIC_TYRON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _y, _r, _o, _n, _END },
        #else
        .trainerName = { _T, _Y, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PsychicTyron },
    },
        [TRAINER_PSYCHIC_CAMERON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _m, _e, _r, _o, _n, _END },
        #else
        .trainerName = { _C, _A, _M, _E, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PsychicCameron },
    },
        [TRAINER_PSYCHIC_PRESTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _r, _e, _s, _t, _o, _n, _END },
        #else
        .trainerName = { _P, _R, _E, _S, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PsychicPreston },
    },
        [TRAINER_ROCKER_RANDALL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ROCKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _n, _d, _a, _l, _l, _END },
        #else
        .trainerName = { _R, _A, _N, _D, _A, _L, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RockerRandall },
    },
        [TRAINER_ROCKER_LUCA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ROCKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _c, _a, _END },
        #else
        .trainerName = { _L, _U, _C, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RockerLuca },
    },
        [TRAINER_JUGGLER_DALTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _D, _A, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerDalton },
    },
        [TRAINER_JUGGLER_NELSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _e, _l, _s, _o, _n, _END },
        #else
        .trainerName = { _N, _E, _L, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerNelson },
    },
        [TRAINER_JUGGLER_KIRK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _i, _r, _k, _END },
        #else
        .trainerName = { _K, _I, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerKirk },
    },
        [TRAINER_JUGGLER_SHAWN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _w, _n, _END },
        #else
        .trainerName = { _S, _H, _A, _W, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerShawn },
    },
        [TRAINER_JUGGLER_GREGORY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _e, _g, _o, _r, _y, _END },
        #else
        .trainerName = { _G, _R, _E, _G, _O, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_JugglerGregory },
    },
        [TRAINER_JUGGLER_EDWARD] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _w, _a, _r, _d, _END },
        #else
        .trainerName = { _E, _D, _W, _A, _R, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_JugglerEdward },
    },
        [TRAINER_JUGGLER_KAYDEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _a, _y, _d, _e, _n, _END },
        #else
        .trainerName = { _K, _A, _Y, _D, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerKayden },
    },
        [TRAINER_JUGGLER_NATE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _a, _t, _e, _END },
        #else
        .trainerName = { _N, _A, _T, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerNate },
    },
        [TRAINER_TAMER_PHIL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _h, _i, _l, _END },
        #else
        .trainerName = { _P, _H, _I, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerPhil },
    },
        [TRAINER_TAMER_EDGAR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _g, _a, _r, _END },
        #else
        .trainerName = { _E, _D, _G, _A, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerEdgar },
    },
        [TRAINER_TAMER_JASON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _s, _o, _n, _END },
        #else
        .trainerName = { _J, _A, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerJason },
    },
        [TRAINER_TAMER_COLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _e, _END },
        #else
        .trainerName = { _C, _O, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerCole },
    },
        [TRAINER_TAMER_VINCENT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _V, _i, _n, _c, _e, _n, _t, _END },
        #else
        .trainerName = { _V, _I, _N, _C, _E, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerVincent },
    },
        [TRAINER_TAMER_JOHN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _h, _n, _END },
        #else
        .trainerName = { _J, _O, _H, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerJohn },
    },
        [TRAINER_BIRD_KEEPER_SEBASTIAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _e, _b, _a, _s, _t, _i, _a, _n, _END },
        #else
        .trainerName = { _S, _E, _B, _A, _S, _T, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperSebastian },
    },
        [TRAINER_BIRD_KEEPER_PERRY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _P, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperPerry },
    },
        [TRAINER_BIRD_KEEPER_ROBERT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _b, _e, _r, _t, _END },
        #else
        .trainerName = { _R, _O, _B, _E, _R, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperRobert },
    },
        [TRAINER_BIRD_KEEPER_DONALD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _o, _n, _a, _l, _d, _END },
        #else
        .trainerName = { _D, _O, _N, _A, _L, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperDonald },
    },
        [TRAINER_BIRD_KEEPER_BENNY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _n, _y, _END },
        #else
        .trainerName = { _B, _E, _N, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperBenny },
    },
        [TRAINER_BIRD_KEEPER_EDWIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _w, _i, _n, _END },
        #else
        .trainerName = { _E, _D, _W, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperEdwin },
    },
        [TRAINER_BIRD_KEEPER_CHESTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _e, _s, _t, _e, _r, _END },
        #else
        .trainerName = { _C, _H, _E, _S, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperChester },
    },
        [TRAINER_BIRD_KEEPER_WILTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _i, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _W, _I, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperWilton },
    },
        [TRAINER_BIRD_KEEPER_RAMIRO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _m, _i, _r, _o, _END },
        #else
        .trainerName = { _R, _A, _M, _I, _R, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperRamiro },
    },
        [TRAINER_BIRD_KEEPER_JACOB] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _o, _b, _END },
        #else
        .trainerName = { _J, _A, _C, _O, _B, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperJacob },
    },
        [TRAINER_BIRD_KEEPER_ROGER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _g, _e, _r, _END },
        #else
        .trainerName = { _R, _O, _G, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperRoger },
    },
        [TRAINER_BIRD_KEEPER_REED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _e, _d, _END },
        #else
        .trainerName = { _R, _E, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperReed },
    },
        [TRAINER_BIRD_KEEPER_KEITH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _i, _t, _h, _END },
        #else
        .trainerName = { _K, _E, _I, _T, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperKeith },
    },
        [TRAINER_BIRD_KEEPER_CARTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _r, _t, _e, _r, _END },
        #else
        .trainerName = { _C, _A, _R, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperCarter },
    },
        [TRAINER_BIRD_KEEPER_MITCH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _t, _c, _h, _END },
        #else
        .trainerName = { _M, _I, _T, _C, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMitch },
    },
        [TRAINER_BIRD_KEEPER_BECK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _c, _k, _END },
        #else
        .trainerName = { _B, _E, _C, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperBeck },
    },
        [TRAINER_BIRD_KEEPER_MARLON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _l, _o, _n, _END },
        #else
        .trainerName = { _M, _A, _R, _L, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMarlon },
    },
        [TRAINER_BLACK_BELT_KOICHI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _o, _i, _c, _h, _i, _END },
        #else
        .trainerName = { _K, _O, _I, _C, _H, _I, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_BlackBeltKoichi },
    },
        [TRAINER_BLACK_BELT_MIKE] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _k, _e, _END },
        #else
        .trainerName = { _M, _I, _K, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltMike },
    },
        [TRAINER_BLACK_BELT_HIDEKI] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _i, _d, _e, _k, _i, _END },
        #else
        .trainerName = { _H, _I, _D, _E, _K, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltHideki },
    },
        [TRAINER_BLACK_BELT_AARON] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _a, _r, _o, _n, _END },
        #else
        .trainerName = { _A, _A, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltAaron },
    },
        [TRAINER_BLACK_BELT_HITOSHI] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _i, _t, _o, _s, _h, _i, _END },
        #else
        .trainerName = { _H, _I, _T, _O, _S, _H, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltHitoshi },
    },
        [TRAINER_BLACK_BELT_ATSUSHI] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _t, _s, _u, _s, _h, _i, _END },
        #else
        .trainerName = { _A, _T, _S, _U, _S, _H, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltAtsushi },
    },
        [TRAINER_BLACK_BELT_KIYO] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _i, _y, _o, _END },
        #else
        .trainerName = { _K, _I, _Y, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltKiyo },
    },
        [TRAINER_BLACK_BELT_TAKASHI] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _k, _a, _s, _h, _i, _END },
        #else
        .trainerName = { _T, _A, _K, _A, _S, _H, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltTakashi },
    },
        [TRAINER_BLACK_BELT_DAISUKE] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _i, _s, _u, _k, _e, _END },
        #else
        .trainerName = { _D, _A, _I, _S, _U, _K, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltDaisuke },
    },
        [TRAINER_RIVAL_OAKS_LAB_SQUIRTLE] = {
        // .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,   
        // .partyFlags = PARTY_FLAG_CUSTOM_MOVES,   
        .partyFlags = 0,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        // .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RivalOaksLabSquirtle },
        // .party =  { .ItemCustomMoves = sParty_RivalOaksLabSquirtle },
    },
        [TRAINER_RIVAL_OAKS_LAB_BULBASAUR] = {
        // .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .partyFlags = 0,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RivalOaksLabBulbasaur },
        // .party =  { .ItemCustomMoves = sParty_RivalOaksLabBulbasaur },
    },
        [TRAINER_RIVAL_OAKS_LAB_CHARMANDER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_RivalOaksLabCharmander },
    },
        [TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        // .items = {ITEM_FULL_RESTORE, ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE},  Test
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_RivalRoute22EarlySquirtle },
    },
        [TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_RivalRoute22EarlyBulbasaur },
    },
        [TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_RivalRoute22EarlyCharmander },
    },
        [TRAINER_RIVAL_CERULEAN_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalCeruleanSquirtle },
    },
        [TRAINER_RIVAL_CERULEAN_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalCeruleanBulbasaur },
    },
        [TRAINER_RIVAL_CERULEAN_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalCeruleanCharmander },
    },
        [TRAINER_SCIENTIST_TED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _d, _END },
        #else
        .trainerName = { _T, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistTed },
    },
        [TRAINER_SCIENTIST_CONNOR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _n, _n, _o, _r, _END },
        #else
        .trainerName = { _C, _O, _N, _N, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistConnor },
    },
        [TRAINER_SCIENTIST_JERRY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _J, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistJerry },
    },
        [TRAINER_SCIENTIST_JOSE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _s, _e, _END },
        #else
        .trainerName = { _J, _O, _S, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistJose },
    },
        [TRAINER_SCIENTIST_RODNEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _d, _n, _e, _y, _END },
        #else
        .trainerName = { _R, _O, _D, _N, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistRodney },
    },
        [TRAINER_SCIENTIST_BEAU] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _a, _u, _END },
        #else
        .trainerName = { _B, _E, _A, _U, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistBeau },
    },
        [TRAINER_SCIENTIST_TAYLOR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _y, _l, _o, _r, _END },
        #else
        .trainerName = { _T, _A, _Y, _L, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistTaylor },
    },
        [TRAINER_SCIENTIST_JOSHUA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _s, _h, _u, _a, _END },
        #else
        .trainerName = { _J, _O, _S, _H, _U, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistJoshua },
    },
        [TRAINER_SCIENTIST_PARKER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _r, _k, _e, _r, _END },
        #else
        .trainerName = { _P, _A, _R, _K, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistParker },
    },
        [TRAINER_SCIENTIST_ED] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _END },
        #else
        .trainerName = { _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistEd },
    },
        [TRAINER_SCIENTIST_TRAVIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _r, _a, _v, _i, _s, _END },
        #else
        .trainerName = { _T, _R, _A, _V, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistTravis },
    },
        [TRAINER_SCIENTIST_BRAYDON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _a, _y, _d, _o, _n, _END },
        #else
        .trainerName = { _B, _R, _A, _Y, _D, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistBraydon },
    },
        [TRAINER_SCIENTIST_IVAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _v, _a, _n, _END },
        #else
        .trainerName = { _I, _V, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ScientistIvan },
    },
        [TRAINER_BOSS_GIOVANNI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BOSS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _o, _v, _a, _n, _n, _i, _END },
        #else
        .trainerName = { _G, _I, _O, _V, _A, _N, _N, _I, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_BossGiovanni },
    },
        [TRAINER_BOSS_GIOVANNI_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BOSS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _o, _v, _a, _n, _n, _i, _END },
        #else
        .trainerName = { _G, _I, _O, _V, _A, _N, _N, _I, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_BossGiovanni2 },
    },
        [TRAINER_LEADER_GIOVANNI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GIOVANNI,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _o, _v, _a, _n, _n, _i, _END },
        #else
        .trainerName = { _G, _I, _O, _V, _A, _N, _N, _I, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderGiovanni },
    },
        [TRAINER_TEAM_ROCKET_GRUNT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt2 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt3 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt4 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_5] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt5 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_6] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt6 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_7] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt7 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_8] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt8 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_9] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt9 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_10] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_TeamRocketGrunt10 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_11] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt11 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_12] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_TeamRocketGrunt12 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_13] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_TeamRocketGrunt13 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_14] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt14 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_15] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt15 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_16] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt16 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_17] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt17 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_18] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt18 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_19] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt19 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_20] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt20 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_21] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt21 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_22] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt22 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_23] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt23 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_24] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt24 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_25] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt25 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_26] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt26 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_27] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt27 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_28] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt28 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_29] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt29 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_30] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt30 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_31] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt31 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_32] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_TeamRocketGrunt32 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_33] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt33 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_34] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt34 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_35] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt35 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_36] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt36 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_37] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt37 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_38] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt38 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_39] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt39 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_40] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt40 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_41] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt41 },
    },
        [TRAINER_COOLTRAINER_SAMUEL] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _m, _u, _e, _l, _END },
        #else
        .trainerName = { _S, _A, _M, _U, _E, _L, _END },
        #endif
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerSamuel },
    },
        [TRAINER_COOLTRAINER_GEORGE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _e, _o, _r, _g, _e, _END },
        #else
        .trainerName = { _G, _E, _O, _R, _G, _E, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerGeorge },
    },
        [TRAINER_COOLTRAINER_COLBY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _b, _y, _END },
        #else
        .trainerName = { _C, _O, _L, _B, _Y, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerColby },
    },
        [TRAINER_COOLTRAINER_PAUL] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _u, _l, _END },
        #else
        .trainerName = { _P, _A, _U, _L, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerPaul },
    },
        [TRAINER_COOLTRAINER_ROLANDO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _l, _a, _n, _d, _o, _END },
        #else
        .trainerName = { _R, _O, _L, _A, _N, _D, _O, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerRolando },
    },
        [TRAINER_COOLTRAINER_GILBERT] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _l, _b, _e, _r, _t, _END },
        #else
        .trainerName = { _G, _I, _L, _B, _E, _R, _T, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerGilbert },
    },
        [TRAINER_COOLTRAINER_OWEN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _O, _w, _e, _n, _END },
        #else
        .trainerName = { _O, _W, _E, _N, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerOwen },
    },
        [TRAINER_COOLTRAINER_BERKE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _r, _k, _e, _END },
        #else
        .trainerName = { _B, _E, _R, _K, _E, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerBerke },
    },
        [TRAINER_COOLTRAINER_YUJI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Y, _u, _j, _i, _END },
        #else
        .trainerName = { _Y, _U, _J, _I, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerYuji },
    },
        [TRAINER_COOLTRAINER_WARREN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _r, _r, _e, _n, _END },
        #else
        .trainerName = { _W, _A, _R, _R, _E, _N, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerWarren },
    },
        [TRAINER_COOLTRAINER_MARY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _y, _END },
        #else
        .trainerName = { _M, _A, _R, _Y, _END },
        #endif
        .items = {ITEM_SUPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerMary },
    },
        [TRAINER_COOLTRAINER_CAROLINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _r, _o, _l, _i, _n, _e, _END },
        #else
        .trainerName = { _C, _A, _R, _O, _L, _I, _N, _E, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerCaroline },
    },
        [TRAINER_COOLTRAINER_ALEXA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _e, _x, _a, _END },
        #else
        .trainerName = { _A, _L, _E, _X, _A, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerAlexa },
    },
        [TRAINER_COOLTRAINER_SHANNON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _n, _n, _o, _n, _END },
        #else
        .trainerName = { _S, _H, _A, _N, _N, _O, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerShannon },
    },
        [TRAINER_COOLTRAINER_NAOMI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _a, _o, _m, _i, _END },
        #else
        .trainerName = { _N, _A, _O, _M, _I, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerNaomi },
    },
        [TRAINER_COOLTRAINER_BROOKE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _o, _o, _k, _e, _END },
        #else
        .trainerName = { _B, _R, _O, _O, _K, _E, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerBrooke },
    },
        [TRAINER_COOLTRAINER_AUSTINA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _u, _s, _t, _i, _n, _a, _END },
        #else
        .trainerName = { _A, _U, _S, _T, _I, _N, _A, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerAustina },
    },
        [TRAINER_COOLTRAINER_JULIE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _u, _l, _i, _e, _END },
        #else
        .trainerName = { _J, _U, _L, _I, _E, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerJulie },
    },
        [TRAINER_ELITE_FOUR_LORELEI] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LORLEI,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _o, _r, _e, _l, _e, _i, _END },
        #else
        .trainerName = { _L, _O, _R, _E, _L, _E, _I, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_EliteFourLorelei },
    },
        [TRAINER_ELITE_FOUR_BRUNO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BRUNO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _u, _n, _o, _END },
        #else
        .trainerName = { _B, _R, _U, _N, _O, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_EliteFourBruno },
    },
        [TRAINER_ELITE_FOUR_AGATHA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_AGATHA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _g, _a, _t, _h, _a, _END },
        #else
        .trainerName = { _A, _G, _A, _T, _H, _A, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_EliteFourAgatha },
    },
        [TRAINER_ELITE_FOUR_LANCE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_LANCE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _n, _c, _e, _END },
        #else
        .trainerName = { _L, _A, _N, _C, _E, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_EliteFourLance },
    },
        [TRAINER_LEADER_BROCK] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BROCK,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _o, _c, _k, _END },
        #else
        .trainerName = { _B, _R, _O, _C, _K, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderBrock },
    },
        [TRAINER_LEADER_MISTY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_MISTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _s, _t, _y, _END },
        #else
        .trainerName = { _M, _I, _S, _T, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_LeaderMisty },
    },
        [TRAINER_LEADER_LT_SURGE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_LT_SURGE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _t, _PERIOD, _SPACE, _S, _u, _r, _g, _e, _END },
        #else
        .trainerName = { _L, _T, _PERIOD, _SPACE, _S, _U, _R, _G, _E, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderLtSurge },
    },
        [TRAINER_LEADER_ERIKA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_ERIKA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _r, _i, _k, _a, _END },
        #else
        .trainerName = { _E, _R, _I, _K, _A, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderErika },
    },
        [TRAINER_LEADER_KOGA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_KOGA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _o, _g, _a, _END },
        #else
        .trainerName = { _K, _O, _G, _A, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderKoga },
    },
        [TRAINER_LEADER_BLAINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLAINE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _l, _a, _i, _n, _e, _END },
        #else
        .trainerName = { _B, _L, _A, _I, _N, _E, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderBlaine },
    },
        [TRAINER_LEADER_SABRINA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LEADER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SABRINA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _b, _r, _i, _n, _a, _END },
        #else
        .trainerName = { _S, _A, _B, _R, _I, _N, _A, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_LeaderSabrina },
    },
        [TRAINER_GENTLEMAN_THOMAS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _h, _o, _m, _a, _s, _END },
        #else
        .trainerName = { _T, _H, _O, _M, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanThomas },
    },
        [TRAINER_GENTLEMAN_ARTHUR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _r, _t, _h, _u, _r, _END },
        #else
        .trainerName = { _A, _R, _T, _H, _U, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanArthur },
    },
        [TRAINER_GENTLEMAN_TUCKER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _u, _c, _k, _e, _r, _END },
        #else
        .trainerName = { _T, _U, _C, _K, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanTucker },
    },
        [TRAINER_GENTLEMAN_NORTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _o, _r, _t, _o, _n, _END },
        #else
        .trainerName = { _N, _O, _R, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanNorton },
    },
        [TRAINER_GENTLEMAN_WALTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _l, _t, _e, _r, _END },
        #else
        .trainerName = { _W, _A, _L, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanWalter },
    },
        [TRAINER_RIVAL_SS_ANNE_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSsAnneSquirtle },
    },
        [TRAINER_RIVAL_SS_ANNE_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSsAnneBulbasaur },
    },
        [TRAINER_RIVAL_SS_ANNE_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSsAnneCharmander },
    },
        [TRAINER_RIVAL_POKEMON_TOWER_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalPokemonTowerSquirtle },
    },
        [TRAINER_RIVAL_POKEMON_TOWER_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalPokemonTowerBulbasaur },
    },
        [TRAINER_RIVAL_POKEMON_TOWER_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_TERA_ORB, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalPokemonTowerCharmander },
    },
        [TRAINER_RIVAL_SILPH_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSilphSquirtle },
    },
        [TRAINER_RIVAL_SILPH_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSilphBulbasaur },
    },
        [TRAINER_RIVAL_SILPH_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party =  { .ItemCustomMoves = sParty_RivalSilphCharmander },
    },
        [TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalRoute22LateSquirtle },
    },
        [TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalRoute22LateBulbasaur },
    },
        [TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_RIVAL_2,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_2,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_RivalRoute22LateCharmander },
    },
        [TRAINER_CHAMPION_FIRST_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_ChampionFirstSquirtle },
    },
        [TRAINER_CHAMPION_FIRST_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_ChampionFirstBulbasaur },
    },
        [TRAINER_CHAMPION_FIRST_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_MEGA_RING, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_CHECK_VIABILITY,
        .party = { .ItemCustomMoves = sParty_ChampionFirstCharmander },
    },
        [TRAINER_CHANNELER_PATRICIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _t, _r, _i, _c, _i, _a, _END },
        #else
        .trainerName = { _P, _A, _T, _R, _I, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerPatricia },
    },
        [TRAINER_CHANNELER_CARLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _r, _l, _y, _END },
        #else
        .trainerName = { _C, _A, _R, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerCarly },
    },
        [TRAINER_CHANNELER_HOPE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _o, _p, _e, _END },
        #else
        .trainerName = { _H, _O, _P, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerHope },
    },
        [TRAINER_CHANNELER_PAULA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _u, _l, _a, _END },
        #else
        .trainerName = { _P, _A, _U, _L, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerPaula },
    },
        [TRAINER_CHANNELER_LAUREL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _u, _r, _e, _l, _END },
        #else
        .trainerName = { _L, _A, _U, _R, _E, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerLaurel },
    },
        [TRAINER_CHANNELER_JODY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _d, _y, _END },
        #else
        .trainerName = { _J, _O, _D, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerJody },
    },
        [TRAINER_CHANNELER_TAMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _A, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerTammy },
    },
        [TRAINER_CHANNELER_RUTH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _u, _t, _h, _END },
        #else
        .trainerName = { _R, _U, _T, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerRuth },
    },
        [TRAINER_CHANNELER_KARINA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _a, _r, _i, _n, _a, _END },
        #else
        .trainerName = { _K, _A, _R, _I, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerKarina },
    },
        [TRAINER_CHANNELER_JANAE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _n, _a, _e, _END },
        #else
        .trainerName = { _J, _A, _N, _A, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerJanae },
    },
        [TRAINER_CHANNELER_ANGELICA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _g, _e, _l, _i, _c, _a, _END },
        #else
        .trainerName = { _A, _N, _G, _E, _L, _I, _C, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerAngelica },
    },
        [TRAINER_CHANNELER_EMILIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _m, _i, _l, _i, _a, _END },
        #else
        .trainerName = { _E, _M, _I, _L, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerEmilia },
    },
        [TRAINER_CHANNELER_JENNIFER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _n, _n, _i, _f, _e, _r, _END },
        #else
        .trainerName = { _J, _E, _N, _N, _I, _F, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerJennifer },
    },
        [TRAINER_CHANNELER_1] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler1 },
    },
        [TRAINER_CHANNELER_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler2 },
    },
        [TRAINER_CHANNELER_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler3 },
    },
        [TRAINER_CHANNELER_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler4 },
    },
        [TRAINER_CHANNELER_5] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler5 },
    },
        [TRAINER_CHANNELER_6] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler6 },
    },
        [TRAINER_CHANNELER_7] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler7 },
    },
        [TRAINER_CHANNELER_8] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Channeler8 },
    },
        [TRAINER_CHANNELER_AMANDA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _m, _a, _n, _d, _a, _END },
        #else
        .trainerName = { _A, _M, _A, _N, _D, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerAmanda },
    },
        [TRAINER_CHANNELER_STACY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _t, _a, _c, _y, _END },
        #else
        .trainerName = { _S, _T, _A, _C, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerStacy },
    },
        [TRAINER_CHANNELER_TASHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CHANNELER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_CHANNELER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _s, _h, _a, _END },
        #else
        .trainerName = { _T, _A, _S, _H, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_ChannelerTasha },
    },
        [TRAINER_HIKER_JEREMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _r, _e, _m, _y, _END },
        #else
        .trainerName = { _J, _E, _R, _E, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerJeremy },
    },
        [TRAINER_PICNICKER_ALMA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _m, _a, _END },
        #else
        .trainerName = { _A, _L, _M, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAlma },
    },
        [TRAINER_PICNICKER_SUSIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _u, _s, _i, _e, _END },
        #else
        .trainerName = { _S, _U, _S, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerSusie },
    },
        [TRAINER_PICNICKER_VALERIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _V, _a, _l, _e, _r, _i, _e, _END },
        #else
        .trainerName = { _V, _A, _L, _E, _R, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerValerie },
    },
        [TRAINER_PICNICKER_GWEN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _w, _e, _n, _END },
        #else
        .trainerName = { _G, _W, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerGwen },
    },
        [TRAINER_BIKER_VIRGIL] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _V, _i, _r, _g, _i, _l, _END },
        #else
        .trainerName = { _V, _I, _R, _G, _I, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerVirgil },
    },
        [TRAINER_CAMPER_FLINT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _l, _i, _n, _t, _END },
        #else
        .trainerName = { _F, _L, _I, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperFlint },
    },
        [TRAINER_PICNICKER_MISSY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _s, _s, _y, _END },
        #else
        .trainerName = { _M, _I, _S, _S, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerMissy },
    },
        [TRAINER_PICNICKER_IRENE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _r, _e, _n, _e, _END },
        #else
        .trainerName = { _I, _R, _E, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerIrene },
    },
        [TRAINER_PICNICKER_DANA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _n, _a, _END },
        #else
        .trainerName = { _D, _A, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerDana },
    },
        [TRAINER_PICNICKER_ARIANA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _r, _i, _a, _n, _a, _END },
        #else
        .trainerName = { _A, _R, _I, _A, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAriana },
    },
        [TRAINER_PICNICKER_LEAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _a, _h, _END },
        #else
        .trainerName = { _L, _E, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerLeah },
    },
        [TRAINER_CAMPER_JUSTIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _u, _s, _t, _i, _n, _END },
        #else
        .trainerName = { _J, _U, _S, _T, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperJustin },
    },
        [TRAINER_PICNICKER_YAZMIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Y, _a, _z, _m, _i, _n, _END },
        #else
        .trainerName = { _Y, _A, _Z, _M, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerYazmin },
    },
        [TRAINER_PICNICKER_KINDRA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _i, _n, _d, _r, _a, _END },
        #else
        .trainerName = { _K, _I, _N, _D, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerKindra },
    },
        [TRAINER_PICNICKER_BECKY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _c, _k, _y, _END },
        #else
        .trainerName = { _B, _E, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerBecky },
    },
        [TRAINER_PICNICKER_CELIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _e, _l, _i, _a, _END },
        #else
        .trainerName = { _C, _E, _L, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerCelia },
    },
        [TRAINER_GENTLEMAN_BROOKS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _o, _o, _k, _s, _END },
        #else
        .trainerName = { _B, _R, _O, _O, _K, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanBrooks },
    },
        [TRAINER_GENTLEMAN_LAMAR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _m, _a, _r, _END },
        #else
        .trainerName = { _L, _A, _M, _A, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanLamar },
    },
        [TRAINER_TWINS_ELI_ANNE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _l, _i, _SPACE, _AMPERSAND, _SPACE, _A, _n, _n, _e, _END },
        #else
        .trainerName = { _E, _L, _I, _SPACE, _AMPERSAND, _SPACE, _A, _N, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsEliAnne },
    },
        [TRAINER_COOL_COUPLE_RAY_TYRA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOL_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _y, _SPACE, _AMPERSAND, _SPACE, _T, _y, _r, _a, _END },
        #else
        .trainerName = { _R, _A, _Y, _SPACE, _AMPERSAND, _SPACE, _T, _Y, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CoolCoupleRayTyra },
    },
        [TRAINER_YOUNG_COUPLE_GIA_JES] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _a, _SPACE, _AMPERSAND, _SPACE, _J, _e, _s, _END },
        #else
        .trainerName = { _G, _I, _A, _SPACE, _AMPERSAND, _SPACE, _J, _E, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungCoupleGiaJes },
    },
        [TRAINER_TWINS_KIRI_JAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _i, _r, _i, _SPACE, _AMPERSAND, _SPACE, _J, _a, _n, _END },
        #else
        .trainerName = { _K, _I, _R, _I, _SPACE, _AMPERSAND, _SPACE, _J, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsKiriJan },
    },
        [TRAINER_CRUSH_KIN_RON_MYA] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _n, _SPACE, _AMPERSAND, _SPACE, _M, _y, _a, _END },
        #else
        .trainerName = { _R, _O, _N, _SPACE, _AMPERSAND, _SPACE, _M, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinRonMya },
    },
        [TRAINER_YOUNG_COUPLE_LEA_JED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _a, _SPACE, _AMPERSAND, _SPACE, _J, _e, _d, _END },
        #else
        .trainerName = { _L, _E, _A, _SPACE, _AMPERSAND, _SPACE, _J, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungCoupleLeaJed },
    },
        [TRAINER_SIS_AND_BRO_LIA_LUC] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _a, _SPACE, _AMPERSAND, _SPACE, _L, _u, _c, _END },
        #else
        .trainerName = { _L, _I, _A, _SPACE, _AMPERSAND, _SPACE, _L, _U, _C, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SisAndBroLiaLuc },
    },
        [TRAINER_SIS_AND_BRO_LIL_IAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _l, _SPACE, _AMPERSAND, _SPACE, _I, _a, _n, _END },
        #else
        .trainerName = { _L, _I, _L, _SPACE, _AMPERSAND, _SPACE, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SisAndBroLilIan },
    },
        [TRAINER_BUG_CATCHER_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher3 },
    },
        [TRAINER_BUG_CATCHER_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher4 },
    },
        [TRAINER_BUG_CATCHER_5] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher5 },
    },
        [TRAINER_BUG_CATCHER_6] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher6 },
    },
        [TRAINER_BUG_CATCHER_7] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher7 },
    },
        [TRAINER_BUG_CATCHER_8] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcher8 },
    },
        [TRAINER_YOUNGSTER_BEN_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _END },
        #else
        .trainerName = { _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterBen3 },
    },
        [TRAINER_YOUNGSTER_BEN_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _END },
        #else
        .trainerName = { _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterBen4 },
    },
        [TRAINER_YOUNGSTER_CHAD_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _d, _END },
        #else
        .trainerName = { _C, _H, _A, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterChad2 },
    },
        [TRAINER_LASS_RELI_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _l, _i, _END },
        #else
        .trainerName = { _R, _E, _L, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassReli2 },
    },
        [TRAINER_LASS_RELI_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _l, _i, _END },
        #else
        .trainerName = { _R, _E, _L, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassReli3 },
    },
        [TRAINER_YOUNGSTER_TIMMY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _I, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterTimmy2 },
    },
        [TRAINER_YOUNGSTER_TIMMY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _I, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterTimmy3 },
    },
        [TRAINER_YOUNGSTER_TIMMY_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _I, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterTimmy4 },
    },
        [TRAINER_YOUNGSTER_CHAD_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _d, _END },
        #else
        .trainerName = { _C, _H, _A, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterChad3 },
    },
        [TRAINER_LASS_JANICE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _n, _i, _c, _e, _END },
        #else
        .trainerName = { _J, _A, _N, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassJanice2 },
    },
        [TRAINER_LASS_JANICE_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _n, _i, _c, _e, _END },
        #else
        .trainerName = { _J, _A, _N, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassJanice3 },
    },
        [TRAINER_YOUNGSTER_CHAD_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _d, _END },
        #else
        .trainerName = { _C, _H, _A, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterChad4 },
    },
        [TRAINER_HIKER_FRANKLIN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _r, _a, _n, _k, _l, _i, _n, _END },
        #else
        .trainerName = { _F, _R, _A, _N, _K, _L, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerFranklin2 },
    },
        [TRAINER_PKMN_PROF_PROF_OAK] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_PROF,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PROF_OAK,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _r, _o, _f, _PERIOD, _SPACE, _O, _a, _k, _END },
        #else
        .trainerName = { _P, _R, _O, _F, _PERIOD, _SPACE, _O, _A, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PkmnProfProfOak },
    },
        [TRAINER_PLAYER_BRENDAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PLAYER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BRENDAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _e, _n, _d, _a, _n, _END },
        #else
        .trainerName = { _B, _R, _E, _N, _D, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PlayerBrendan },
    },
        [TRAINER_PLAYER_MAY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PLAYER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_MAY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _y, _END },
        #else
        .trainerName = { _M, _A, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PlayerMay },
    },
        [TRAINER_PLAYER_RED] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PLAYER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PLAYER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _e, _d, _END },
        #else
        .trainerName = { _R, _E, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PlayerRed },
    },
        [TRAINER_PLAYER_LEAF] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PLAYER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PLAYER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _a, _f, _END },
        #else
        .trainerName = { _L, _E, _A, _F, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PlayerLeaf },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_42] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt42 },
    },
        [TRAINER_PSYCHIC_JACLYN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _l, _y, _n, _END },
        #else
        .trainerName = { _J, _A, _C, _L, _Y, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicJaclyn },
    },
        [TRAINER_CRUSH_GIRL_SHARON] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _r, _o, _n, _END },
        #else
        .trainerName = { _S, _H, _A, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlSharon },
    },
        [TRAINER_TUBER_AMIRA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _m, _i, _r, _a, _END },
        #else
        .trainerName = { _A, _M, _I, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TuberAmira },
    },
        [TRAINER_PKMN_BREEDER_ALIZE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _z, _e, _END },
        #else
        .trainerName = { _A, _L, _I, _Z, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PkmnBreederAlize },
    },
        [TRAINER_PKMN_RANGER_NICOLAS] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _c, _o, _l, _a, _s, _END },
        #else
        .trainerName = { _N, _I, _C, _O, _L, _A, _S, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerNicolas },
    },
        [TRAINER_PKMN_RANGER_MADELINE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _d, _e, _l, _i, _n, _e, _END },
        #else
        .trainerName = { _M, _A, _D, _E, _L, _I, _N, _E, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerMadeline },
    },
        [TRAINER_AROMA_LADY_NIKKI] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _k, _k, _i, _END },
        #else
        .trainerName = { _N, _I, _K, _K, _I, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AromaLadyNikki },
    },
        [TRAINER_RUIN_MANIAC_STANLY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _t, _a, _n, _l, _y, _END },
        #else
        .trainerName = { _S, _T, _A, _N, _L, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacStanly },
    },
        [TRAINER_LADY_JACKI] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SELPHY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _k, _i, _END },
        #else
        .trainerName = { _J, _A, _C, _K, _I, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_LadyJacki },
    },
        [TRAINER_PAINTER_DAISY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _i, _s, _y, _END },
        #else
        .trainerName = { _D, _A, _I, _S, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PainterDaisy },
    },
        [TRAINER_BIKER_GOON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _o, _o, _n, _END },
        #else
        .trainerName = { _G, _O, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerGoon },
    },
        [TRAINER_BIKER_GOON_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _o, _o, _n, _END },
        #else
        .trainerName = { _G, _O, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerGoon2 },
    },
        [TRAINER_BIKER_GOON_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _o, _o, _n, _END },
        #else
        .trainerName = { _G, _O, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerGoon3 },
    },
        [TRAINER_BIKER_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _END },
        #else
        .trainerName = { _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_Biker2 },
    },
        [TRAINER_BUG_CATCHER_ANTHONY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _n, _t, _h, _o, _n, _y, _END },
        #else
        .trainerName = { _A, _N, _T, _H, _O, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherAnthony },
    },
        [TRAINER_BUG_CATCHER_CHARLIE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _r, _l, _i, _e, _END },
        #else
        .trainerName = { _C, _H, _A, _R, _L, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherCharlie },
    },
        [TRAINER_TWINS_ELI_ANNE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _l, _i, _SPACE, _AMPERSAND, _SPACE, _A, _n, _n, _e, _END },
        #else
        .trainerName = { _E, _L, _I, _SPACE, _AMPERSAND, _SPACE, _A, _N, _N, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsEliAnne2 },
    },
        [TRAINER_YOUNGSTER_JOHNSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _h, _n, _s, _o, _n, _END },
        #else
        .trainerName = { _J, _O, _H, _N, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterJohnson },
    },
        [TRAINER_BIKER_RICARDO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _a, _r, _d, _o, _END },
        #else
        .trainerName = { _R, _I, _C, _A, _R, _D, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_BikerRicardo },
    },
        [TRAINER_BIKER_JAREN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _r, _e, _n, _END },
        #else
        .trainerName = { _J, _A, _R, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerJaren },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_43] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt43 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_44] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt44 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_45] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt45 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_46] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt46 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_47] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt47 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_48] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt48 },
    },
        [TRAINER_TEAM_ROCKET_ADMIN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _d, _m, _i, _n, _END },
        #else
        .trainerName = { _A, _D, _M, _I, _N, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_TeamRocketAdmin },
    },
        [TRAINER_TEAM_ROCKET_ADMIN_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _d, _m, _i, _n, _END },
        #else
        .trainerName = { _A, _D, _M, _I, _N, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_TeamRocketAdmin2 },
    },
        [TRAINER_SCIENTIST_GIDEON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_SCIENTIST,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SCIENTIST_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _d, _e, _o, _n, _END },
        #else
        .trainerName = { _G, _I, _D, _E, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_ScientistGideon },
    },
        [TRAINER_SWIMMER_FEMALE_AMARA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _m, _a, _r, _a, _END },
        #else
        .trainerName = { _A, _M, _A, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleAmara },
    },
        [TRAINER_SWIMMER_FEMALE_MARIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _i, _a, _END },
        #else
        .trainerName = { _M, _A, _R, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleMaria },
    },
        [TRAINER_SWIMMER_FEMALE_ABIGAIL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _b, _i, _g, _a, _i, _l, _END },
        #else
        .trainerName = { _A, _B, _I, _G, _A, _I, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleAbigail },
    },
        [TRAINER_SWIMMER_MALE_FINN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _i, _n, _n, _END },
        #else
        .trainerName = { _F, _I, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleFinn },
    },
        [TRAINER_SWIMMER_MALE_GARRETT] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _a, _r, _r, _e, _t, _t, _END },
        #else
        .trainerName = { _G, _A, _R, _R, _E, _T, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleGarrett },
    },
        [TRAINER_FISHERMAN_TOMMY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _o, _m, _m, _y, _END },
        #else
        .trainerName = { _T, _O, _M, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanTommy },
    },
        [TRAINER_CRUSH_GIRL_TANYA] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _n, _y, _a, _END },
        #else
        .trainerName = { _T, _A, _N, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlTanya },
    },
        [TRAINER_BLACK_BELT_SHEA] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _a, _END },
        #else
        .trainerName = { _S, _H, _E, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltShea },
    },
        [TRAINER_BLACK_BELT_HUGH] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _u, _g, _h, _END },
        #else
        .trainerName = { _H, _U, _G, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltHugh },
    },
        [TRAINER_CAMPER_BRYCE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _y, _c, _e, _END },
        #else
        .trainerName = { _B, _R, _Y, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperBryce },
    },
        [TRAINER_PICNICKER_CLAIRE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _l, _a, _i, _r, _e, _END },
        #else
        .trainerName = { _C, _L, _A, _I, _R, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerClaire },
    },
        [TRAINER_CRUSH_KIN_MIK_KIA] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _k, _SPACE, _AMPERSAND, _SPACE, _K, _i, _a, _END },
        #else
        .trainerName = { _M, _I, _K, _SPACE, _AMPERSAND, _SPACE, _K, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinMikKia },
    },
        [TRAINER_AROMA_LADY_VIOLET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _V, _i, _o, _l, _e, _t, _END },
        #else
        .trainerName = { _V, _I, _O, _L, _E, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AromaLadyViolet },
    },
        [TRAINER_TUBER_ALEXIS] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _e, _x, _i, _s, _END },
        #else
        .trainerName = { _A, _L, _E, _X, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TuberAlexis },
    },
        [TRAINER_TWINS_JOY_MEG] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _y, _SPACE, _AMPERSAND, _SPACE, _M, _e, _g, _END },
        #else
        .trainerName = { _J, _O, _Y, _SPACE, _AMPERSAND, _SPACE, _M, _E, _G, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsJoyMeg },
    },
        [TRAINER_SWIMMER_FEMALE_TISHA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _i, _s, _h, _a, _END },
        #else
        .trainerName = { _T, _I, _S, _H, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleTisha },
    },
        [TRAINER_PAINTER_CELINA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _e, _l, _i, _n, _a, _END },
        #else
        .trainerName = { _C, _E, _L, _I, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PainterCelina },
    },
        [TRAINER_PAINTER_RAYNA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _y, _n, _a, _END },
        #else
        .trainerName = { _R, _A, _Y, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PainterRayna },
    },
        [TRAINER_LADY_GILLIAN] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SELPHY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _l, _l, _i, _a, _n, _END },
        #else
        .trainerName = { _G, _I, _L, _L, _I, _A, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_LadyGillian },
    },
        [TRAINER_YOUNGSTER_DESTIN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _e, _s, _t, _i, _n, _END },
        #else
        .trainerName = { _D, _E, _S, _T, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterDestin },
    },
        [TRAINER_SWIMMER_MALE_TOBY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _o, _b, _y, _END },
        #else
        .trainerName = { _T, _O, _B, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleToby },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_49] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt49 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_50] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_TeamRocketGrunt50 },
    },
        [TRAINER_TEAM_ROCKET_GRUNT_51] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TEAM_ROCKET,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_AQUA,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKET_GRUNT_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _u, _n, _t, _END },
        #else
        .trainerName = { _G, _R, _U, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TeamRocketGrunt51 },
    },
        [TRAINER_BIRD_KEEPER_MILO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _l, _o, _END },
        #else
        .trainerName = { _M, _I, _L, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMilo },
    },
        [TRAINER_BIRD_KEEPER_CHAZ] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _z, _END },
        #else
        .trainerName = { _C, _H, _A, _Z, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperChaz },
    },
        [TRAINER_BIRD_KEEPER_HAROLD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _a, _r, _o, _l, _d, _END },
        #else
        .trainerName = { _H, _A, _R, _O, _L, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperHarold },
    },
        [TRAINER_FISHERMAN_TYLOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _y, _l, _o, _r, _END },
        #else
        .trainerName = { _T, _Y, _L, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanTylor },
    },
        [TRAINER_SWIMMER_MALE_MYMO] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _y, _m, _o, _END },
        #else
        .trainerName = { _M, _Y, _M, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleMymo },
    },
        [TRAINER_SWIMMER_FEMALE_NICOLE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _c, _o, _l, _e, _END },
        #else
        .trainerName = { _N, _I, _C, _O, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleNicole },
    },
        [TRAINER_SIS_AND_BRO_AVA_GEB] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _v, _a, _SPACE, _AMPERSAND, _SPACE, _G, _e, _b, _END },
        #else
        .trainerName = { _A, _V, _A, _SPACE, _AMPERSAND, _SPACE, _G, _E, _B, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SisAndBroAvaGeb },
    },
        [TRAINER_AROMA_LADY_ROSE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _s, _e, _END },
        #else
        .trainerName = { _R, _O, _S, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AromaLadyRose },
    },
        [TRAINER_SWIMMER_MALE_SAMIR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _m, _i, _r, _END },
        #else
        .trainerName = { _S, _A, _M, _I, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleSamir },
    },
        [TRAINER_SWIMMER_FEMALE_DENISE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _e, _n, _i, _s, _e, _END },
        #else
        .trainerName = { _D, _E, _N, _I, _S, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleDenise },
    },
        [TRAINER_TWINS_MIU_MIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _u, _SPACE, _AMPERSAND, _SPACE, _M, _i, _a, _END },
        #else
        .trainerName = { _M, _I, _U, _SPACE, _AMPERSAND, _SPACE, _M, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsMiuMia },
    },
        [TRAINER_HIKER_EARL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _a, _r, _l, _END },
        #else
        .trainerName = { _E, _A, _R, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerEarl },
    },
        [TRAINER_RUIN_MANIAC_FOSTER] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _o, _s, _t, _e, _r, _END },
        #else
        .trainerName = { _F, _O, _S, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacFoster },
    },
        [TRAINER_RUIN_MANIAC_LARRY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _r, _r, _y, _END },
        #else
        .trainerName = { _L, _A, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacLarry },
    },
        [TRAINER_HIKER_DARYL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _y, _l, _END },
        #else
        .trainerName = { _D, _A, _R, _Y, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerDaryl },
    },
        [TRAINER_POKEMANIAC_HECTOR] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _c, _t, _o, _r, _END },
        #else
        .trainerName = { _H, _E, _C, _T, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacHector },
    },
        [TRAINER_PSYCHIC_DARIO] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _i, _o, _END },
        #else
        .trainerName = { _D, _A, _R, _I, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicDario },
    },
        [TRAINER_PSYCHIC_RODETTE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _d, _e, _t, _t, _e, _END },
        #else
        .trainerName = { _R, _O, _D, _E, _T, _T, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicRodette },
    },
        [TRAINER_AROMA_LADY_MIAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_AROMA_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _a, _h, _END },
        #else
        .trainerName = { _M, _I, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_AromaLadyMiah },
    },
        [TRAINER_YOUNG_COUPLE_EVE_JON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _v, _e, _SPACE, _AMPERSAND, _SPACE, _J, _o, _n, _END },
        #else
        .trainerName = { _E, _V, _E, _SPACE, _AMPERSAND, _SPACE, _J, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungCoupleEveJon },
    },
        [TRAINER_JUGGLER_MASON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _s, _o, _n, _END },
        #else
        .trainerName = { _M, _A, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_JugglerMason },
    },
        [TRAINER_CRUSH_GIRL_CYNDY] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _y, _n, _d, _y, _END },
        #else
        .trainerName = { _C, _Y, _N, _D, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlCyndy },
    },
        [TRAINER_CRUSH_GIRL_JOCELYN] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _c, _e, _l, _y, _n, _END },
        #else
        .trainerName = { _J, _O, _C, _E, _L, _Y, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlJocelyn },
    },
        [TRAINER_TAMER_EVAN] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _v, _a, _n, _END },
        #else
        .trainerName = { _E, _V, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerEvan },
    },
        [TRAINER_POKEMANIAC_MARK_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _k, _END },
        #else
        .trainerName = { _M, _A, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacMark2 },
    },
        [TRAINER_PKMN_RANGER_LOGAN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _o, _g, _a, _n, _END },
        #else
        .trainerName = { _L, _O, _G, _A, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerLogan },
    },
        [TRAINER_PKMN_RANGER_JACKSON] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _k, _s, _o, _n, _END },
        #else
        .trainerName = { _J, _A, _C, _K, _S, _O, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerJackson },
    },
        [TRAINER_PKMN_RANGER_BETH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _t, _h, _END },
        #else
        .trainerName = { _B, _E, _T, _H, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party =  { .NoItemDefaultMoves = sParty_PkmnRangerBeth },
    },
        [TRAINER_PKMN_RANGER_KATELYN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _a, _t, _e, _l, _y, _n, _END },
        #else
        .trainerName = { _K, _A, _T, _E, _L, _Y, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerKatelyn },
    },
        [TRAINER_COOLTRAINER_LEROY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _r, _o, _y, _END },
        #else
        .trainerName = { _L, _E, _R, _O, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerLeroy },
    },
        [TRAINER_COOLTRAINER_MICHELLE] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _c, _h, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _M, _I, _C, _H, _E, _L, _L, _E, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerMichelle },
    },
        [TRAINER_COOL_COUPLE_LEX_NYA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOL_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _x, _SPACE, _AMPERSAND, _SPACE, _N, _y, _a, _END },
        #else
        .trainerName = { _L, _E, _X, _SPACE, _AMPERSAND, _SPACE, _N, _Y, _A, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CoolCoupleLexNya },
    },
        [TRAINER_RUIN_MANIAC_BRANDON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _a, _n, _d, _o, _n, _END },
        #else
        .trainerName = { _B, _R, _A, _N, _D, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacBrandon },
    },
        [TRAINER_RUIN_MANIAC_BENJAMIN] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _j, _a, _m, _i, _n, _END },
        #else
        .trainerName = { _B, _E, _N, _J, _A, _M, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_RuinManiacBenjamin },
    },
        [TRAINER_PAINTER_EDNA] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _d, _n, _a, _END },
        #else
        .trainerName = { _E, _D, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PainterEdna },
    },
        [TRAINER_GENTLEMAN_CLIFFORD] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GENTLEMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_RICH,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _l, _i, _f, _f, _o, _r, _d, _END },
        #else
        .trainerName = { _C, _L, _I, _F, _F, _O, _R, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GentlemanClifford },
    },
        [TRAINER_LADY_SELPHY] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_LADY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SELPHY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _e, _l, _p, _h, _y, _END },
        #else
        .trainerName = { _S, _E, _L, _P, _H, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemCustomMoves = sParty_LadySelphy },
    },
        [TRAINER_RUIN_MANIAC_LAWSON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _w, _s, _o, _n, _END },
        #else
        .trainerName = { _L, _A, _W, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacLawson },
    },
        [TRAINER_PSYCHIC_LAURA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _u, _r, _a, _END },
        #else
        .trainerName = { _L, _A, _U, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PsychicLaura },
    },
        [TRAINER_PKMN_BREEDER_BETHANY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _t, _h, _a, _n, _y, _END },
        #else
        .trainerName = { _B, _E, _T, _H, _A, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PkmnBreederBethany },
    },
        [TRAINER_PKMN_BREEDER_ALLISON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _l, _i, _s, _o, _n, _END },
        #else
        .trainerName = { _A, _L, _L, _I, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PkmnBreederAllison },
    },
        [TRAINER_BUG_CATCHER_GARRET] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _a, _r, _r, _e, _t, _END },
        #else
        .trainerName = { _G, _A, _R, _R, _E, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherGarret },
    },
        [TRAINER_BUG_CATCHER_JONAH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _n, _a, _h, _END },
        #else
        .trainerName = { _J, _O, _N, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherJonah },
    },
        [TRAINER_BUG_CATCHER_VANCE] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _V, _a, _n, _c, _e, _END },
        #else
        .trainerName = { _V, _A, _N, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherVance },
    },
        [TRAINER_YOUNGSTER_NASH] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _a, _s, _h, _END },
        #else
        .trainerName = { _N, _A, _S, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterNash },
    },
        [TRAINER_YOUNGSTER_CORDELL] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _r, _d, _e, _l, _l, _END },
        #else
        .trainerName = { _C, _O, _R, _D, _E, _L, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterCordell },
    },
        [TRAINER_LASS_DALIA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _l, _i, _a, _END },
        #else
        .trainerName = { _D, _A, _L, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassDalia },
    },
        [TRAINER_LASS_JOANA] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _a, _n, _a, _END },
        #else
        .trainerName = { _J, _O, _A, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassJoana },
    },
        [TRAINER_CAMPER_RILEY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _l, _e, _y, _END },
        #else
        .trainerName = { _R, _I, _L, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperRiley },
    },
        [TRAINER_PICNICKER_MARCY] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _c, _y, _END },
        #else
        .trainerName = { _M, _A, _R, _C, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerMarcy },
    },
        [TRAINER_RUIN_MANIAC_LAYTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _y, _t, _o, _n, _END },
        #else
        .trainerName = { _L, _A, _Y, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacLayton },
    },
        [TRAINER_PICNICKER_KELSEY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _l, _s, _e, _y, _END },
        #else
        .trainerName = { _K, _E, _L, _S, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerKelsey2 },
    },
        [TRAINER_PICNICKER_KELSEY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _l, _s, _e, _y, _END },
        #else
        .trainerName = { _K, _E, _L, _S, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerKelsey3 },
    },
        [TRAINER_PICNICKER_KELSEY_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _e, _l, _s, _e, _y, _END },
        #else
        .trainerName = { _K, _E, _L, _S, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerKelsey4 },
    },
        [TRAINER_CAMPER_RICKY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _k, _y, _END },
        #else
        .trainerName = { _R, _I, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperRicky2 },
    },
        [TRAINER_CAMPER_RICKY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _k, _y, _END },
        #else
        .trainerName = { _R, _I, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperRicky3 },
    },
        [TRAINER_CAMPER_RICKY_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _k, _y, _END },
        #else
        .trainerName = { _R, _I, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperRicky4 },
    },
        [TRAINER_CAMPER_JEFF_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _f, _f, _END },
        #else
        .trainerName = { _J, _e, _f, _f, _END },
        #endif
                #else
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _f, _f, _END },
        #else
        .trainerName = { _J, _E, _F, _F, _END },
        #endif
                #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperJeff2 },
    },
        [TRAINER_CAMPER_JEFF_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _f, _f, _END },
        #else
        .trainerName = { _J, _E, _F, _F, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperJeff3 },
    },
        [TRAINER_CAMPER_JEFF_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _f, _f, _END },
        #else
        .trainerName = { _J, _E, _F, _F, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperJeff4 },
    },
        [TRAINER_PICNICKER_ISABELLE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _b, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _I, _S, _A, _B, _E, _L, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerIsabelle2 },
    },
        [TRAINER_PICNICKER_ISABELLE_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _b, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _I, _S, _A, _B, _E, _L, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerIsabelle3 },
    },
        [TRAINER_PICNICKER_ISABELLE_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _b, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _I, _S, _A, _B, _E, _L, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerIsabelle4 },
    },
        [TRAINER_YOUNGSTER_YASU_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Y, _a, _s, _u, _END },
        #else
        .trainerName = { _Y, _A, _S, _U, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterYasu2 },
    },
        [TRAINER_YOUNGSTER_YASU_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _Y, _a, _s, _u, _END },
        #else
        .trainerName = { _Y, _A, _S, _U, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterYasu3 },
    },
        [TRAINER_ENGINEER_BERNIE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ENGINEER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_WORKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _r, _n, _i, _e, _END },
        #else
        .trainerName = { _B, _E, _R, _N, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_EngineerBernie2 },
    },
        [TRAINER_GAMER_DARIAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _i, _a, _n, _END },
        #else
        .trainerName = { _D, _A, _R, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerDarian2 },
    },
        [TRAINER_CAMPER_CHRIS_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _r, _i, _s, _END },
        #else
        .trainerName = { _C, _H, _R, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperChris2 },
    },
        [TRAINER_CAMPER_CHRIS_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _r, _i, _s, _END },
        #else
        .trainerName = { _C, _H, _R, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperChris3 },
    },
        [TRAINER_CAMPER_CHRIS_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CAMPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CAMPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _r, _i, _s, _END },
        #else
        .trainerName = { _C, _H, _R, _I, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CamperChris4 },
    },
        [TRAINER_PICNICKER_ALICIA_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _i, _a, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAlicia2 },
    },
        [TRAINER_PICNICKER_ALICIA_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _i, _a, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAlicia3 },
    },
        [TRAINER_PICNICKER_ALICIA_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _i, _a, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerAlicia4 },
    },
        [TRAINER_HIKER_JEREMY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _e, _r, _e, _m, _y, _END },
        #else
        .trainerName = { _J, _E, _R, _E, _M, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerJeremy2 },
    },
        [TRAINER_POKEMANIAC_MARK_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _k, _END },
        #else
        .trainerName = { _M, _A, _R, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacMark3 },
    },
        [TRAINER_POKEMANIAC_HERMAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _r, _m, _a, _n, _END },
        #else
        .trainerName = { _H, _E, _R, _M, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacHerman2 },
    },
        [TRAINER_POKEMANIAC_HERMAN_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _r, _m, _a, _n, _END },
        #else
        .trainerName = { _H, _E, _R, _M, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacHerman3 },
    },
        [TRAINER_HIKER_TRENT_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _r, _e, _n, _t, _END },
        #else
        .trainerName = { _T, _R, _E, _N, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerTrent2 },
    },
        [TRAINER_LASS_MEGAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _e, _g, _a, _n, _END },
        #else
        .trainerName = { _M, _E, _G, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassMegan2 },
    },
        [TRAINER_LASS_MEGAN_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_LASS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_LASS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _e, _g, _a, _n, _END },
        #else
        .trainerName = { _M, _E, _G, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_LassMegan3 },
    },
        [TRAINER_SUPER_NERD_GLENN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SUPER_NERD,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SUPER_NERD,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _l, _e, _n, _n, _END },
        #else
        .trainerName = { _G, _L, _E, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SuperNerdGlenn2 },
    },
        [TRAINER_GAMER_RICH_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_GAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_GAMBLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _i, _c, _h, _END },
        #else
        .trainerName = { _R, _I, _C, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_GamerRich2 },
    },
        [TRAINER_BIKER_JAREN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _r, _e, _n, _END },
        #else
        .trainerName = { _J, _A, _R, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerJaren2 },
    },
        [TRAINER_FISHERMAN_ELLIOT_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _l, _l, _i, _o, _t, _END },
        #else
        .trainerName = { _E, _L, _L, _I, _O, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanElliot2 },
    },
        [TRAINER_ROCKER_LUCA_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_ROCKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_ROCKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _c, _a, _END },
        #else
        .trainerName = { _L, _U, _C, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RockerLuca2 },
    },
        [TRAINER_BEAUTY_SHEILA_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _i, _l, _a, _END },
        #else
        .trainerName = { _S, _H, _E, _I, _L, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautySheila2 },
    },
        [TRAINER_BIRD_KEEPER_ROBERT_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _b, _e, _r, _t, _END },
        #else
        .trainerName = { _R, _O, _B, _E, _R, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperRobert2 },
    },
        [TRAINER_BIRD_KEEPER_ROBERT_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _b, _e, _r, _t, _END },
        #else
        .trainerName = { _R, _O, _B, _E, _R, _T, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperRobert3 },
    },
        [TRAINER_PICNICKER_SUSIE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _u, _s, _i, _e, _END },
        #else
        .trainerName = { _S, _U, _S, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerSusie2 },
    },
        [TRAINER_PICNICKER_SUSIE_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _u, _s, _i, _e, _END },
        #else
        .trainerName = { _S, _U, _S, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerSusie3 },
    },
        [TRAINER_PICNICKER_SUSIE_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _u, _s, _i, _e, _END },
        #else
        .trainerName = { _S, _U, _S, _I, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerSusie4 },
    },
        [TRAINER_BIKER_LUKAS_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _u, _k, _a, _s, _END },
        #else
        .trainerName = { _L, _U, _K, _A, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerLukas2 },
    },
        [TRAINER_BIRD_KEEPER_BENNY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _n, _y, _END },
        #else
        .trainerName = { _B, _E, _N, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperBenny2 },
    },
        [TRAINER_BIRD_KEEPER_BENNY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _n, _n, _y, _END },
        #else
        .trainerName = { _B, _E, _N, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperBenny3 },
    },
        [TRAINER_BIRD_KEEPER_MARLON_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _l, _o, _n, _END },
        #else
        .trainerName = { _M, _A, _R, _L, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMarlon2 },
    },
        [TRAINER_BIRD_KEEPER_MARLON_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _r, _l, _o, _n, _END },
        #else
        .trainerName = { _M, _A, _R, _L, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMarlon3 },
    },
        [TRAINER_BEAUTY_GRACE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BEAUTY,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_BEAUTY,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _r, _a, _c, _e, _END },
        #else
        .trainerName = { _G, _R, _A, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BeautyGrace2 },
    },
        [TRAINER_BIRD_KEEPER_CHESTER_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _e, _s, _t, _e, _r, _END },
        #else
        .trainerName = { _C, _H, _E, _S, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperChester2 },
    },
        [TRAINER_BIRD_KEEPER_CHESTER_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _e, _s, _t, _e, _r, _END },
        #else
        .trainerName = { _C, _H, _E, _S, _T, _E, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperChester3 },
    },
        [TRAINER_PICNICKER_BECKY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _c, _k, _y, _END },
        #else
        .trainerName = { _B, _E, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerBecky2 },
    },
        [TRAINER_PICNICKER_BECKY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _c, _k, _y, _END },
        #else
        .trainerName = { _B, _E, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerBecky3 },
    },
        [TRAINER_PICNICKER_BECKY_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _e, _c, _k, _y, _END },
        #else
        .trainerName = { _B, _E, _C, _K, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerBecky4 },
    },
        [TRAINER_CRUSH_KIN_RON_MYA_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _n, _SPACE, _AMPERSAND, _SPACE, _M, _y, _a, _END },
        #else
        .trainerName = { _R, _O, _N, _SPACE, _AMPERSAND, _SPACE, _M, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinRonMya2 },
    },
        [TRAINER_CRUSH_KIN_RON_MYA_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _n, _SPACE, _AMPERSAND, _SPACE, _M, _y, _a, _END },
        #else
        .trainerName = { _R, _O, _N, _SPACE, _AMPERSAND, _SPACE, _M, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinRonMya3 },
    },
        [TRAINER_CRUSH_KIN_RON_MYA_4] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _n, _SPACE, _AMPERSAND, _SPACE, _M, _y, _a, _END },
        #else
        .trainerName = { _R, _O, _N, _SPACE, _AMPERSAND, _SPACE, _M, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinRonMya4 },
    },
        [TRAINER_BIKER_RUBEN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _u, _b, _e, _n, _END },
        #else
        .trainerName = { _R, _U, _B, _E, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerRuben2 },
    },
        [TRAINER_CUE_BALL_CAMRON_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _a, _m, _r, _o, _n, _END },
        #else
        .trainerName = { _C, _A, _M, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallCamron2 },
    },
        [TRAINER_BIKER_JAXON_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _x, _o, _n, _END },
        #else
        .trainerName = { _J, _A, _X, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BikerJaxon2 },
    },
        [TRAINER_CUE_BALL_ISAIAH_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _I, _s, _a, _i, _a, _h, _END },
        #else
        .trainerName = { _I, _S, _A, _I, _A, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallIsaiah2 },
    },
        [TRAINER_CUE_BALL_COREY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _r, _e, _y, _END },
        #else
        .trainerName = { _C, _O, _R, _E, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallCorey2 },
    },
        [TRAINER_BIRD_KEEPER_JACOB_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _o, _b, _END },
        #else
        .trainerName = { _J, _A, _C, _O, _B, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperJacob2 },
    },
        [TRAINER_BIRD_KEEPER_JACOB_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _o, _b, _END },
        #else
        .trainerName = { _J, _A, _C, _O, _B, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperJacob3 },
    },
        [TRAINER_SWIMMER_FEMALE_ALICE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _c, _e, _END },
        #else
        .trainerName = { _A, _L, _I, _C, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleAlice2 },
    },
        [TRAINER_SWIMMER_MALE_DARRIN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _r, _i, _n, _END },
        #else
        .trainerName = { _D, _A, _R, _R, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleDarrin2 },
    },
        [TRAINER_PICNICKER_MISSY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _s, _s, _y, _END },
        #else
        .trainerName = { _M, _I, _S, _S, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerMissy2 },
    },
        [TRAINER_PICNICKER_MISSY_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PICNICKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PICNICKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _s, _s, _y, _END },
        #else
        .trainerName = { _M, _I, _S, _S, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PicnickerMissy3 },
    },
        [TRAINER_FISHERMAN_WADE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_FISHERMAN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_FISHERMAN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _W, _a, _d, _e, _END },
        #else
        .trainerName = { _W, _A, _D, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_FishermanWade2 },
    },
        [TRAINER_SWIMMER_MALE_JACK_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _k, _END },
        #else
        .trainerName = { _J, _A, _C, _K, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleJack2 },
    },
        [TRAINER_SIS_AND_BRO_LIL_IAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _l, _SPACE, _AMPERSAND, _SPACE, _I, _a, _n, _END },
        #else
        .trainerName = { _L, _I, _L, _SPACE, _AMPERSAND, _SPACE, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SisAndBroLilIan2 },
    },
        [TRAINER_SIS_AND_BRO_LIL_IAN_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SIS_AND_BRO,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _i, _l, _SPACE, _AMPERSAND, _SPACE, _I, _a, _n, _END },
        #else
        .trainerName = { _L, _I, _L, _SPACE, _AMPERSAND, _SPACE, _I, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SisAndBroLilIan3 },
    },
        [TRAINER_SWIMMER_MALE_FINN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _F, _i, _n, _n, _END },
        #else
        .trainerName = { _F, _I, _N, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleFinn2 },
    },
        [TRAINER_CRUSH_GIRL_SHARON_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _r, _o, _n, _END },
        #else
        .trainerName = { _S, _H, _A, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlSharon2 },
    },
        [TRAINER_CRUSH_GIRL_SHARON_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _a, _r, _o, _n, _END },
        #else
        .trainerName = { _S, _H, _A, _R, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlSharon3 },
    },
        [TRAINER_CRUSH_GIRL_TANYA_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _n, _y, _a, _END },
        #else
        .trainerName = { _T, _A, _N, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlTanya2 },
    },
        [TRAINER_CRUSH_GIRL_TANYA_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _a, _n, _y, _a, _END },
        #else
        .trainerName = { _T, _A, _N, _Y, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlTanya3 },
    },
        [TRAINER_BLACK_BELT_SHEA_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _a, _END },
        #else
        .trainerName = { _S, _H, _E, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltShea2 },
    },
        [TRAINER_BLACK_BELT_SHEA_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _h, _e, _a, _END },
        #else
        .trainerName = { _S, _H, _E, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltShea3 },
    },
        [TRAINER_BLACK_BELT_HUGH_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _u, _g, _h, _END },
        #else
        .trainerName = { _H, _U, _G, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltHugh2 },
    },
        [TRAINER_BLACK_BELT_HUGH_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_BLACK_BELT,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _u, _g, _h, _END },
        #else
        .trainerName = { _H, _U, _G, _H, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_BlackBeltHugh3 },
    },
        [TRAINER_CRUSH_KIN_MIK_KIA_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _k, _SPACE, _AMPERSAND, _SPACE, _K, _i, _a, _END },
        #else
        .trainerName = { _M, _I, _K, _SPACE, _AMPERSAND, _SPACE, _K, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinMikKia2 },
    },
        [TRAINER_CRUSH_KIN_MIK_KIA_3] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_KIN,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_KIN,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _k, _SPACE, _AMPERSAND, _SPACE, _K, _i, _a, _END },
        #else
        .trainerName = { _M, _I, _K, _SPACE, _AMPERSAND, _SPACE, _K, _I, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushKinMikKia3 },
    },
        [TRAINER_TUBER_AMIRA_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TUBER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TUBER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _m, _i, _r, _a, _END },
        #else
        .trainerName = { _A, _M, _I, _R, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TuberAmira2 },
    },
        [TRAINER_TWINS_JOY_MEG_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TWINS,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_TWINS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TWINS,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _o, _y, _SPACE, _AMPERSAND, _SPACE, _M, _e, _g, _END },
        #else
        .trainerName = { _J, _O, _Y, _SPACE, _AMPERSAND, _SPACE, _M, _E, _G, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TwinsJoyMeg2 },
    },
        [TRAINER_PAINTER_RAYNA_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PAINTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PAINTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _a, _y, _n, _a, _END },
        #else
        .trainerName = { _R, _A, _Y, _N, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PainterRayna2 },
    },
        [TRAINER_YOUNGSTER_DESTIN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNGSTER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _e, _s, _t, _i, _n, _END },
        #else
        .trainerName = { _D, _E, _S, _T, _I, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungsterDestin2 },
    },
        [TRAINER_PKMN_BREEDER_ALIZE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_PKMN_BREEDER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_BREEDER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _l, _i, _z, _e, _END },
        #else
        .trainerName = { _A, _L, _I, _Z, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PkmnBreederAlize2 },
    },
        [TRAINER_YOUNG_COUPLE_GIA_JES_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _a, _SPACE, _AMPERSAND, _SPACE, _J, _e, _s, _END },
        #else
        .trainerName = { _G, _I, _A, _SPACE, _AMPERSAND, _SPACE, _J, _E, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungCoupleGiaJes2 },
    },
        [TRAINER_YOUNG_COUPLE_GIA_JES_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_YOUNG_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_GIRL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _G, _i, _a, _SPACE, _AMPERSAND, _SPACE, _J, _e, _s, _END },
        #else
        .trainerName = { _G, _I, _A, _SPACE, _AMPERSAND, _SPACE, _J, _E, _S, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_YoungCoupleGiaJes3 },
    },
        [TRAINER_BIRD_KEEPER_MILO_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _l, _o, _END },
        #else
        .trainerName = { _M, _I, _L, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperMilo2 },
    },
        [TRAINER_BIRD_KEEPER_CHAZ_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _h, _a, _z, _END },
        #else
        .trainerName = { _C, _H, _A, _Z, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperChaz2 },
    },
        [TRAINER_BIRD_KEEPER_HAROLD_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BIRD_KEEPER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _a, _r, _o, _l, _d, _END },
        #else
        .trainerName = { _H, _A, _R, _O, _L, _D, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BirdKeeperHarold2 },
    },
        [TRAINER_SWIMMER_FEMALE_NICOLE_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _c, _o, _l, _e, _END },
        #else
        .trainerName = { _N, _I, _C, _O, _L, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleNicole2 },
    },
        [TRAINER_PSYCHIC_JACLYN_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _l, _y, _n, _END },
        #else
        .trainerName = { _J, _A, _C, _L, _Y, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicJaclyn2 },
    },
        [TRAINER_SWIMMER_MALE_SAMIR_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _S, _a, _m, _i, _r, _END },
        #else
        .trainerName = { _S, _A, _M, _I, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleSamir2 },
    },
        [TRAINER_HIKER_EARL_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_HIKER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_HIKER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _a, _r, _l, _END },
        #else
        .trainerName = { _E, _A, _R, _L, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_HikerEarl2 },
    },
        [TRAINER_RUIN_MANIAC_LARRY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_RUIN_MANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _r, _r, _y, _END },
        #else
        .trainerName = { _L, _A, _R, _R, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_RuinManiacLarry2 },
    },
        [TRAINER_POKEMANIAC_HECTOR_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_POKEMANIAC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _H, _e, _c, _t, _o, _r, _END },
        #else
        .trainerName = { _H, _E, _C, _T, _O, _R, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_PokemaniacHector2 },
    },
        [TRAINER_PSYCHIC_DARIO_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _D, _a, _r, _i, _o, _END },
        #else
        .trainerName = { _D, _A, _R, _I, _O, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicDario2 },
    },
        [TRAINER_PSYCHIC_RODETTE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PSYCHIC,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _R, _o, _d, _e, _t, _t, _e, _END },
        #else
        .trainerName = { _R, _O, _D, _E, _T, _T, _E, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .NoItemCustomMoves = sParty_PsychicRodette2 },
    },
        [TRAINER_JUGGLER_MASON_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_JUGGLER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_JUGGLER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _s, _o, _n, _END },
        #else
        .trainerName = { _M, _A, _S, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 4,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_JugglerMason2 },
    },
        [TRAINER_PKMN_RANGER_NICOLAS_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _N, _i, _c, _o, _l, _a, _s, _END },
        #else
        .trainerName = { _N, _I, _C, _O, _L, _A, _S, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerNicolas2 },
    },
        [TRAINER_PKMN_RANGER_MADELINE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _d, _e, _l, _i, _n, _e, _END },
        #else
        .trainerName = { _M, _A, _D, _E, _L, _I, _N, _E, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerMadeline2 },
    },
        [TRAINER_CRUSH_GIRL_CYNDY_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CRUSH_GIRL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_INTENSE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CRUSH_GIRL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _y, _n, _d, _y, _END },
        #else
        .trainerName = { _C, _Y, _N, _D, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party = { .ItemDefaultMoves = sParty_CrushGirlCyndy2 },
    },
        [TRAINER_TAMER_EVAN_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_TAMER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_HIKER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_TAMER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _E, _v, _a, _n, _END },
        #else
        .trainerName = { _E, _V, _A, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_TamerEvan2 },
    },
        [TRAINER_PKMN_RANGER_JACKSON_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _J, _a, _c, _k, _s, _o, _n, _END },
        #else
        .trainerName = { _J, _A, _C, _K, _S, _O, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerJackson2 },
    },
        [TRAINER_PKMN_RANGER_KATELYN_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_PKMN_RANGER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_PKMN_RANGER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _K, _a, _t, _e, _l, _y, _n, _END },
        #else
        .trainerName = { _K, _A, _T, _E, _L, _Y, _N, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 1,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_PkmnRangerKatelyn2 },
    },
        [TRAINER_COOLTRAINER_LEROY_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _r, _o, _y, _END },
        #else
        .trainerName = { _L, _E, _R, _O, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerLeroy2 },
    },
        [TRAINER_COOLTRAINER_MICHELLE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOLTRAINER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _i, _c, _h, _e, _l, _l, _e, _END },
        #else
        .trainerName = { _M, _I, _C, _H, _E, _L, _L, _E, _END },
        #endif
        .items = {ITEM_HYPER_POTION, ITEM_NONE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CooltrainerMichelle2 },
    },
        [TRAINER_COOL_COUPLE_LEX_NYA_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_COOL_COUPLE,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_COOL,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_COOL_COUPLE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _e, _x, _SPACE, _AMPERSAND, _SPACE, _N, _y, _a, _END },
        #else
        .trainerName = { _L, _E, _X, _SPACE, _AMPERSAND, _SPACE, _N, _Y, _A, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = TRUE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .NoItemCustomMoves = sParty_CoolCoupleLexNya2 },
    },
        [TRAINER_BUG_CATCHER_COLTON_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _C, _O, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherColton2 },
    },
        [TRAINER_BUG_CATCHER_COLTON_3] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _C, _O, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherColton3 },
    },
        [TRAINER_BUG_CATCHER_COLTON_4] = {
        .partyFlags = 0,
        .trainerClass = CLASS_BUG_CATCHER,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _C, _o, _l, _t, _o, _n, _END },
        #else
        .trainerName = { _C, _O, _L, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 3,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_BugCatcherColton4 },
    },
        [TRAINER_SWIMMER_MALE_MATTHEW_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _a, _t, _t, _h, _e, _w, _END },
        #else
        .trainerName = { _M, _A, _T, _T, _H, _E, _W, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleMatthew2 },
    },
        [TRAINER_SWIMMER_MALE_TONY_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_M,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_SWIMMER,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _o, _n, _y, _END },
        #else
        .trainerName = { _T, _O, _N, _Y, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerMaleTony2 },
    },
        [TRAINER_SWIMMER_FEMALE_MELISSA_2] = {
        .partyFlags = 0,
        .trainerClass = CLASS_SWIMMER_F,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_FEMALE,
        .gender = GENDER_FEMALE,
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _M, _e, _l, _i, _s, _s, _a, _END },
        #else
        .trainerName = { _M, _E, _L, _I, _S, _S, _A, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_SwimmerFemaleMelissa2 },
    },
        [TRAINER_ELITE_FOUR_LORELEI_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_LORLEI,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _o, _r, _e, _l, _e, _i, _END },
        #else
        .trainerName = { _L, _O, _R, _E, _L, _E, _I, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_EliteFourLorelei2 },
    },
        [TRAINER_ELITE_FOUR_BRUNO_2] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM | PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BRUNO,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _B, _r, _u, _n, _o, _END },
        #else
        .trainerName = { _B, _R, _U, _N, _O, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_EliteFourBruno2 },
    },
        [TRAINER_ELITE_FOUR_AGATHA_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_AGATHA,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _A, _g, _a, _t, _h, _a, _END },
        #else
        .trainerName = { _A, _G, _A, _T, _H, _A, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_EliteFourAgatha2 },
    },
        [TRAINER_ELITE_FOUR_LANCE_2] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_ELITE_FOUR,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_LANCE,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _L, _a, _n, _c, _e, _END },
        #else
        .trainerName = { _L, _A, _N, _C, _E, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_NONE, ITEM_NONE},
        .doubleBattle = FALSE,
        .partySize = 5,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_EliteFourLance2 },
    },
        [TRAINER_CHAMPION_REMATCH_SQUIRTLE] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM | PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_ChampionRematchSquirtle },
    },
        [TRAINER_CHAMPION_REMATCH_BULBASAUR] = {
        .partyFlags = PARTY_FLAG_HAS_ITEM | PARTY_FLAG_CUSTOM_MOVES,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_ChampionRematchBulbasaur },
    },
        [TRAINER_CHAMPION_REMATCH_CHARMANDER] = {
        .partyFlags = PARTY_FLAG_CUSTOM_MOVES | PARTY_FLAG_HAS_ITEM,
        .trainerClass = CLASS_CHAMPION,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_BLUE_3,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _T, _e, _r, _r, _y, _END },
        #else
        .trainerName = { _T, _E, _R, _R, _Y, _END },
        #endif
        .items = {ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE},
        .doubleBattle = FALSE,
        .partySize = 6,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE | AI_SCRIPT_CHECK_GOOD_MOVE | AI_SCRIPT_SEMI_SMART,
        .party = { .ItemCustomMoves = sParty_ChampionRematchCharmander },
    },
        [TRAINER_CUE_BALL_PAXTON] = {
        .partyFlags = 0,
        .trainerClass = CLASS_CUE_BALL,
        .encounterMusic = TRAINER_ENCOUNTER_MUSIC_MALE,
        .gender = GENDER_MALE,
        .trainerPic = TRAINER_PIC_CUE_BALL,
        #ifdef DECAP_TRAINER_NAMES
        .trainerName = { _P, _a, _x, _t, _o, _n, _END },
        #else
        .trainerName = { _P, _A, _X, _T, _O, _N, _END },
        #endif
        .items = {NO_ITEMS},
        .doubleBattle = FALSE,
        .partySize = 2,
        .aiFlags = AI_SCRIPT_CHECK_BAD_MOVE,
        .party =  { .NoItemDefaultMoves = sParty_CueBallPaxton },
    },
};
#endif