#include "../../include/battle.h"
#include "../../include/global.h"

#include "../../include/constants/items.h"
#include "../../include/constants/moves.h"
#include "../../include/constants/species.h"
#include "../../include/constants/trainer_classes.h"

#include "trainer_defines.h"

#ifdef EXPAND_TRAINERS

#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_STARMIE, \
    }

struct TrainerMonItemCustomMoves sParty_AquaLeader[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_AquaGruntM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_AquaGruntF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSAromaLady[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSRuinManiac[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Interviewer[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSTuberF[] = {DUMMY_TRAINER_STARMIE};
struct TrainerMonItemCustomMoves sParty_RSTuberM[] = {DUMMY_TRAINER_STARMIE};
struct TrainerMonItemCustomMoves sParty_RSCooltrainerM[] = {DUMMY_TRAINER_MON_IV};
struct TrainerMonItemCustomMoves sParty_RSCooltrainerF[] = {DUMMY_TRAINER_MON_IV};
struct TrainerMonItemCustomMoves sParty_HexManiac[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSLady[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSBeauty[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RichBoy[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPokemaniac[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSSwimmerM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSBlackBelt[] = {DUMMY_TRAINER_MON_IV};
struct TrainerMonItemCustomMoves sParty_Guitarist[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Kindler[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSCamper[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugManiac[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPsychicM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPsychicF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSGentleman[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_EliteFourSidney[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_EliteFourPhoebe[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderRoxanne[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderBrawly[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderTateLiza[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_SchoolKidM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_SchoolKidF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_SrAndJr[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PokefanM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PokefanF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_ExpertM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_ExpertF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSYoungster[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSChampion[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSFisherman[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_CyclingTriathleteM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_CyclingTriathleteF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RunningTriathleteM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RunningTriathleteF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_SwimmingTriathleteM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_SwimmingTriathleteF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_DragonTamer[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSBirdKeeper[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_NinjaBoy[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BattleGirl[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_ParasolLady[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSSwimmerF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPicnicker[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSTwins[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSSailor[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BoarderM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BoarderF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Collector[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Wally[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Brendan[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Brendan2[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_Brendan3[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_May[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_May2[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_May3[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPkmnBreederM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPkmnBreederF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSPkmnRangerM[] = {DUMMY_TRAINER_MON_IV};
struct TrainerMonItemCustomMoves sParty_RSPkmnRangerF[] = {DUMMY_TRAINER_MON_IV};
struct TrainerMonItemCustomMoves sParty_MagmaLeader[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_MagmaGruntM[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_MagmaGruntF[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSLass[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSBugCatcher[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSHiker[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSYoungCouple[] = {DUMMY_TRAINER_MON, DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_OldCouple[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_RSSisAndBro[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_AquaAdminMatt[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_AquaAdminShelly[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_MagmaAdminTabitha[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_MagmaAdminCourtney[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderWattson[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderFlannery[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderNorman[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderWinona[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_LeaderWallace[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_EliteFourGlacia[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_EliteFourDrake[] = {DUMMY_TRAINER_MON};

// Start of actual trainer data
struct TrainerMonItemCustomMoves sParty_YoungsterBen[] = {
    // {
    //     .iv = 0,
    //     .lvl = 11,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 224,
        .lvl = 11,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_LEER, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterCalvin[] = {
    {
        .iv = 225,
        .lvl = 12,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_PECK, MOVE_PURSUIT, MOVE_LEER, MOVE_FURYATTACK},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterJosh[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_SUPERSONIC, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterTimmy[] = {
    {
        .iv = 225,
        .lvl = 18,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_DEFENSECURL},
    },
    // {
    //     .iv = 0,
    //     .lvl = 14,
    //     .species = SPECIES_EKANS,
    // },
};

struct TrainerMonItemCustomMoves sParty_YoungsterJoey[] = {
    // {
    //     .iv = 0,
    //     .lvl = 15,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_MIRRORMOVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterDan[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_WATERPULSE, MOVE_ZENHEADBUTT, MOVE_DISABLE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterChad[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 14,
    //     .species = SPECIES_SANDSHREW,
    // },
};

struct TrainerMonItemCustomMoves sParty_YoungsterTyler[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterEddie[] = {
    {
        .iv = 255,
        .lvl = 23,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterDillon[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_LEECHLIFE, MOVE_CONFUSERAY},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterYasu[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterDave[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_SANDTOMB, MOVE_BITE, MOVE_DOUBLEKICK, MOVE_POISONFANG},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SANDTOMB, MOVE_BITE, MOVE_DOUBLEKICK, MOVE_POISONFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterBen2[] = {
    {
        .iv = 20,
        .lvl = 17,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 20,
        .lvl = 17,
        .species = SPECIES_EKANS,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherRick[] = {
    {
        .iv = 224,
        .lvl = 6,
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISONSTING, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 224,
        .lvl = 6,
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_STRINGSHOT, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherDoug[] = {
    // {
    //     .iv = 0,
    //     .lvl = 7,
    //     .species = SPECIES_WEEDLE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 7,
    //     .species = SPECIES_KAKUNA,
    // },
    {
        .iv = 224,
        .lvl = 7,
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISONSTING, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonNoItemCustomMoves sParty_BugCatcherSammy[] = {
    {
        .iv = 223,
        .lvl = 10,
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_TACKLE, MOVE_GUST, MOVE_STRINGSHOT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherColton[] = {
    {
        .iv = 224,
        .lvl = 10,
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_BUGBITE, MOVE_STRINGSHOT, MOVE_NONE},
    },
    {
        .iv = 224,
        .lvl = 10,
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISONSTING, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_CATERPIE,
    // },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherGreg[] = {
    // {
    //     .iv = 0,
    //     .lvl = 9,
    //     .species = SPECIES_WEEDLE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 9,
    //     .species = SPECIES_KAKUNA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 9,
    //     .species = SPECIES_CATERPIE,
    // },
    {
        .iv = 225,
        .lvl = 11,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FURYATTACK, MOVE_POISONSTING, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherJames[] = {
    {
        .iv = 225,
        .lvl = 11,
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_GUST, MOVE_CONFUSION, MOVE_STRINGSHOT, MOVE_TACKLE},
    },
    {
        .iv = 225,
        .lvl = 11,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FURYATTACK, MOVE_POISONSTING, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherKent[] = {
    // {
    //     .iv = 0,
    //     .lvl = 11,
    //     .species = SPECIES_WEEDLE,
    // },
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_PARAS,
        .moves = {MOVE_FURYCUTTER, MOVE_ABSORB, MOVE_GROWTH, MOVE_LEECHSEED},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherRobby[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_CATERPIE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_METAPOD,
    // },
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_CONFUSION, MOVE_TACKLE, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherCale[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_CATERPIE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_WEEDLE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_METAPOD,
    // },
    {
        .iv = 225,
        .lvl = 18,
        .species = SPECIES_WEEDLE,
        .moves = {MOVE_POISONSTING, MOVE_BUGBITE, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherKeigo[] = {
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_WEEDLE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_CATERPIE,
    // },
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_CATERPIE,
        .moves = {MOVE_TACKLE, MOVE_BUGBITE, MOVE_STRINGSHOT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherElijah[] = {
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SILVERWIND, MOVE_CONFUSION, MOVE_GUST, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcher2[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_VENONAT,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherBrent[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_BEEDRILL,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_FURYATTACK, MOVE_TWINEEDLE, MOVE_POISONJAB, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherConner[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_CATERPIE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_WEEDLE,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SIGNALBEAM, MOVE_RECOVER, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassJanice[] = {
    // {
    //     .iv = 0,
    //     .lvl = 9,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 224,
        .lvl = 11,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_GUST, MOVE_QUICKATTACK, MOVE_GROWL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassSally[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 12,
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_FURYSWIPES, MOVE_DOUBLEKICK, MOVE_GROWL, MOVE_POISONSTING},
    },
};

struct TrainerMonItemCustomMoves sParty_LassRobin[] = {
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_TAILWHIP, MOVE_TACKLE},
    },
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_DISARMINGVOICE, MOVE_ENCORE, MOVE_DOUBLESLAP},
    },
    {
        .iv = 226,
        .lvl = 14,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_DOUBLESLAP, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassCrissy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PARASECT,
    },
};

struct TrainerMonItemCustomMoves sParty_LassMiriam[] = {
    {
        .iv = 225,
        .lvl = 13,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_ABSORB, MOVE_ACID, MOVE_LEECHSEED, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 13,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_WRAP, MOVE_VINEWHIP, MOVE_GROWTH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassIris[] = {
    {
        .iv = 225,
        .lvl = 14,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_DISARMINGVOICE, MOVE_ENCORE, MOVE_DOUBLESLAP},
    },
};

struct TrainerMonItemCustomMoves sParty_LassReli[] = {
    {
        .iv = 225,
        .lvl = 17,
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_SANDTOMB, MOVE_BITE, MOVE_DOUBLEKICK, MOVE_GROWL},
    },
    {
        .iv = 225,
        .lvl = 17,
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_SANDTOMB, MOVE_BITE, MOVE_DOUBLEKICK, MOVE_GROWL},
    },
};

struct TrainerMonItemCustomMoves sParty_LassAli[] = {
    // {
    //     .iv = 0,
    //     .lvl = 12,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_MEGADRAIN, MOVE_ACID, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 12,
    //     .species = SPECIES_BELLSPROUT,
    // },
};

struct TrainerMonItemCustomMoves sParty_Lass2[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_F,
    },
};

struct TrainerMonItemCustomMoves sParty_LassHaley[] = {
    {
        .iv = 230,
        .lvl = 22,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_ELECTROBALL, MOVE_KNOCKOFF, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 229,
        .lvl = 22,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_WILLOWISP, MOVE_FIRESPIN, MOVE_SNARL, MOVE_NONE},
    },
    {
        .iv = 228,
        .lvl = 22,
        .species = SPECIES_HORSEA,
        .moves = {MOVE_FOCUSENERGY, MOVE_WATERPULSE, MOVE_DRAGONBREATH, MOVE_FLIPTURN},
    },
    {
        .iv = 227,
        .lvl = 23,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SEEDBOMB, MOVE_GROWTH, MOVE_INGRAIN, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_LassAnn[] = {
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_BITE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassDawn[] = {
    {
        .iv = 225,
        .lvl = 24,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_QUICKATTACK, MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_TAILWHIP},
    },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_PIKACHU,
    // },
};

struct TrainerMonItemCustomMoves sParty_LassPaige[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_CRUNCH},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_CRUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_LassAndrea[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_MEOWTH,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_MEOWTH,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassMegan[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_NIDORAN_M,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_MEOWTH,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_SANDTOMB, MOVE_CRUNCH, MOVE_DOUBLEKICK, MOVE_POISONFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_LassJulia[] = {
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_CLEFAIRY,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_SWIFT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassKay[] = {
    // {
    //     .iv = 0,
    //     .lvl = 23,
    //     .species = SPECIES_BELLSPROUT,
    // },
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SEEDBOMB, MOVE_KNOCKOFF, MOVE_LEECHSEED, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LassLisa[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 23,
    //     .species = SPECIES_GLOOM,
    // },
};

struct TrainerMonItemCustomMoves sParty_SailorEdmond[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLESPEAR, MOVE_HEX, MOVE_LICK, MOVE_WATERPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorTrevor[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_KNOCKOFF, MOVE_ACIDSPRAY, MOVE_BUBBLEBEAM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorLeonard[] = {
    {
        .iv = 225,
        .lvl = 24,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLESPEAR, MOVE_HEX, MOVE_LICK, MOVE_WATERPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorDuncan[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_HORSEA,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_HORSEA,
        .moves = {MOVE_FOCUSENERGY, MOVE_WATERPULSE, MOVE_DRAGONBREATH, MOVE_FLIPTURN},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_KNOCKOFF, MOVE_ACIDSPRAY, MOVE_BUBBLEBEAM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorHuey[] = {
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_TENTACOOL,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_STARYU,
        .moves = {MOVE_RECOVER, MOVE_CONFUSION, MOVE_RAPIDSPIN, MOVE_WATERPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorDylan[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_HORSEA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_HORSEA,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_HORSEA,
        .moves = {MOVE_FOCUSENERGY, MOVE_WATERPULSE, MOVE_DRAGONBREATH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorPhillip[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_SailorDwayne[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_PIKACHU,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_ELECTROBALL, MOVE_KNOCKOFF, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperLiam[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_GEODUDE,
    //     .moves = {MOVE_TACKLE, MOVE_DEFENSECURL, MOVE_NONE, MOVE_NONE},
    // },
    {
        .iv = 225,
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SCRATCH, MOVE_DEFENSECURL, MOVE_FURYCUTTER, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperShane[] = {
    // {
    //     .iv = 0,
    //     .lvl = 14,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_ABRA,
        .moves = {MOVE_SWIFT, MOVE_SHOCKWAVE, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperEthan[] = {
    {
        .iv = 225,
        .lvl = 18,
        .species = SPECIES_MANKEY,
        .moves = {MOVE_KARATECHOP, MOVE_FURYSWIPES, MOVE_RAGE, MOVE_FOCUSENERGY},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperRicky[] = {
    {
        .iv = 233,
        .lvl = 23,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 233,
        .lvl = 23,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_DEFENSECURL},
    },
    {
        .iv = 232,
        .lvl = 23,
        .species = SPECIES_PARAS,
        .moves = {MOVE_XSCISSOR, MOVE_LEECHSEED, MOVE_SLASH, MOVE_NONE},
    },
    {
        .iv = 231,
        .lvl = 24,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_ICEFANG, MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_FLIPTURN},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperJeff[] = {
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_MIRRORMOVE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_Camper2[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_CamperChris[] = {
    {
        .iv = 230,
        .lvl = 26,
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_WAKEUPSLAP, MOVE_FLIPTURN},
    },
    {
        .iv = 230,
        .lvl = 26,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    {
        .iv = 230,
        .lvl = 26,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_SANDTOMB, MOVE_CRUNCH, MOVE_TOXICSPIKES, MOVE_POISONFANG},
    },
    {
        .iv = 230,
        .lvl = 26,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SANDTOMB, MOVE_CRUNCH, MOVE_ROCKTOMB, MOVE_POISONFANG},
    },
    {
        .iv = 241,
        .lvl = 27,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_DRAGONRAGE, MOVE_FIRESPIN, MOVE_METALCLAW, MOVE_SCARYFACE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperDrew[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_SANDSHREW,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerDiana[] = {
    {
        .iv = 225,
        .lvl = 19,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICICLESPEAR, MOVE_HEX, MOVE_LICK, MOVE_WATERPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerNancy[] = {
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_ELECTROBALL, MOVE_KNOCKOFF, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerIsabelle[] = {
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_PIDGEY,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerKelsey[] = {
    {
        .iv = 225,
        .lvl = 19,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_BITE},
    },
    {
        .iv = 225,
        .lvl = 19,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_BITE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAlicia[] = {
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_MEGADRAIN, MOVE_ACID, MOVE_LEECHSEED, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_SEEDBOMB, MOVE_KNOCKOFF, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_ODDISH,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_BELLSPROUT,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerCaitlin[] = {
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerHeidi[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_PIKACHU,
    // },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_SWIFT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerCarol[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerSofia[] = {
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_BODYSLAM, MOVE_SING, MOVE_WAKEUPSLAP, MOVE_PLAYROUGH},
    },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerMartha[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_BULBASAUR,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerTina[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_GIGADRAIN, MOVE_TAKEDOWN, MOVE_LEECHSEED, MOVE_SLUDGE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_IVYSAUR,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerHannah[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacMark[] = {
    {
        .iv = 30,
        .lvl = 29,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 30,
        .lvl = 29,
        .species = SPECIES_LICKITUNG,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacHerman[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_BUBBLEBEAM, MOVE_ZENHEADBUTT, MOVE_RECOVER, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacCooper[] = {
    // {
    //     .iv = 30,
    //     .lvl = 20,
    //     .species = SPECIES_SLOWPOKE,
    // },
    // {
    //     .iv = 30,
    //     .lvl = 20,
    //     .species = SPECIES_SLOWPOKE,
    // },
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_PSYDUCK,
        .moves = {MOVE_ZENHEADBUTT, MOVE_RECOVER, MOVE_BRINE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacSteve[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacWinston[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_WATERPULSE, MOVE_ZENHEADBUTT, MOVE_DISABLE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacDawson[] = {
    {
        .iv = 30,
        .lvl = 40,
        .species = SPECIES_CHARMELEON,
    },
    {
        .iv = 30,
        .lvl = 40,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = 30,
        .lvl = 40,
        .species = SPECIES_LICKITUNG,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacAshton[] = {
    {
        .iv = 243,
        .lvl = 29,
        .species = SPECIES_PONYTA,
        .moves = {MOVE_FLAMETHROWER, MOVE_HIGHHORSEPOWER, MOVE_FLAMECHARGE, MOVE_STOMP},
    },
    {
        .iv = 244,
        .lvl = 29,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_BODYSLAM, MOVE_SING, MOVE_WAKEUPSLAP, MOVE_PLAYROUGH},
    },
    {
        .iv = 230,
        .lvl = 29,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SEEDBOMB, MOVE_KNOCKOFF, MOVE_INGRAIN, MOVE_NONE},
    },
    {
        .iv = 243,
        .lvl = 29,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_ZENHEADBUTT, MOVE_BRINE, MOVE_KNOCKOFF, MOVE_NONE},
    },
    {
        .iv = 242,
        .lvl = 30,
        .heldItem = ITEM_THICK_CLUB,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdJovan[] = {
    {
        .iv = 225,
        .lvl = 13,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_MAGNETBOMB, MOVE_THUNDERSHOCK, MOVE_LIGHTSCREEN, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 13,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_CHARGE, MOVE_ROLLOUT, MOVE_THUNDERSHOCK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdMiguel[] = {
    {
        .iv = 218,
        .lvl = 18,
        .heldItem = ITEM_NONE,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_DOUBLESLAP, MOVE_TOXIC, MOVE_MUDBOMB},
    },
    {
        .iv = 218,
        .lvl = 18,
        .heldItem = ITEM_NONE,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_CHARGEBEAM, MOVE_SONICBOOM, MOVE_ROLLOUT, MOVE_CHARGE},
    },
    {
        .iv = 218,
        .lvl = 18,
        .heldItem = ITEM_NONE,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_ASSURANCE, MOVE_CURSE},
    },
    {
        .iv = 217,
        .lvl = 19,
        .heldItem = ITEM_NONE,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_MIRRORSHOT, MOVE_SHOCKWAVE, MOVE_SONICBOOM, MOVE_THUNDERWAVE},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdAidan[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_VOLTORB,
    //     .moves = {MOVE_SONICBOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_CHARGE},
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_CHARGE, MOVE_SIGNALBEAM, MOVE_ELECTROBALL, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_SONICBOOM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdGlenn[] = {
    {
        .iv = 230,
        .lvl = 31,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_FLAMETHROWER, MOVE_THUNDERFANG, MOVE_CRUNCH, MOVE_NONE},
    },
    {
        .iv = 244,
        .lvl = 31,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_ROCKBLAST, MOVE_STEALTHROCK, MOVE_MAGNITUDE, MOVE_NONE},
    },
    {
        .iv = 243,
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_LIQUIDATION, MOVE_FLIPTURN, MOVE_AQUARING, MOVE_MEGAHORN},
    },
    {
        .iv = 230,
        .lvl = 31,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_RECOVER},
    },
    {
        .iv = 246,
        .lvl = 32,
        .heldItem = ITEM_TOXIC_ORB,
        .species = SPECIES_EEVEE,
        .moves = {MOVE_FACADE, MOVE_DOUBLEKICK, MOVE_BITE, MOVE_QUICKATTACK},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdLeslie[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerd1[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_WEEZING,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerd2[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerd3[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_VOLTORB,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdErik[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_NINETALES,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdAvery[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GROWLITHE,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdDerek[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_RAPIDASH,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdZac[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_VULPIX,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerMarcos[] = {
    // {
    //     .iv = 0,
    //     .lvl = 10,
    //     .species = SPECIES_GEODUDE,
    // },
    {
        .iv = 225,
        .lvl = 15,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_ROLLOUT, MOVE_TACKLE, MOVE_ROCKPOLISH, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 15,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_DEFENSECURL},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerFranklin[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
    // {
    //     .iv = 0,
    //     .lvl = 15,
    //     .species = SPECIES_GEODUDE,
    // },
};

struct TrainerMonItemCustomMoves sParty_HikerNob[] = {
    // {
    //     .iv = 0,
    //     .lvl = 13,
    //     .species = SPECIES_GEODUDE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 13,
    //     .species = SPECIES_GEODUDE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 13,
    //     .species = SPECIES_MACHOP,
    // },
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_DEFENSECURL},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerWayne[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_SMACKDOWN, MOVE_ROCKPOLISH, MOVE_ROLLOUT},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerAlan[] = {
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_ONIX,
    //     .moves = {MOVE_HARDEN, MOVE_ROCKTHROW, MOVE_BIND, MOVE_SCREECH},
    // },
};

struct TrainerMonItemCustomMoves sParty_HikerBrice[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_GEODUDE,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_SMACKDOWN, MOVE_ROCKPOLISH, MOVE_ROLLOUT},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerClark[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_ONIX,
    //     .moves = {MOVE_HARDEN, MOVE_ROCKTHROW, MOVE_BIND, MOVE_SCREECH},
    // },
};

struct TrainerMonItemCustomMoves sParty_HikerTrent[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_ONIX,
    // },
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerDudley[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_GEODUDE,
    //     .moves = {MOVE_MAGNITUDE, MOVE_ROCKTHROW, MOVE_MUDSPORT, MOVE_DEFENSECURL},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_GEODUDE,
    //     .moves = {MOVE_MAGNITUDE, MOVE_ROCKTHROW, MOVE_MUDSPORT, MOVE_DEFENSECURL},
    // },
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerAllen[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerEric[] = {
    {
        .iv = 225,
        .lvl = 28,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_ONIX,
    // },
};

struct TrainerMonItemCustomMoves sParty_HikerLenny[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_GEODUDE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_MACHOP,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_GEODUDE,
    // },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_SMACKDOWN, MOVE_ROCKPOLISH, MOVE_ROLLOUT},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerOliver[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_ONIX,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_ONIX,
    // },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_SLASH},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerLucas[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_GEODUDE,
    //     .moves = {MOVE_MAGNITUDE, MOVE_ROCKTHROW, MOVE_MUDSPORT, MOVE_DEFENSECURL},
    // },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_BULLDOZE, MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerJared[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_POISONGAS},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerMalik[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerErnest[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerAlex[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerLao[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_Biker1[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_BikerHideo[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEZING,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerRuben[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerBilly[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MUK,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerNikolas[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONICBOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONICBOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerJaxon[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerWilliam[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELFDESTRUCT, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerLukas[] = {
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_GRIMER,
    //     .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    // },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_TWINEEDLE, MOVE_POISONJAB, MOVE_PURSUIT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerIsaac[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_GRIMER,
    //     .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_GRIMER,
    //     .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    // },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_POISONJAB, MOVE_TOXIC, MOVE_KNOCKOFF, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerGerald[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_NONE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_MUK,
    //     .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    // },
};

struct TrainerMonItemCustomMoves sParty_Burglar1[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VULPIX,
    },
};

struct TrainerMonItemCustomMoves sParty_Burglar2[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
    },
};

struct TrainerMonItemCustomMoves sParty_Burglar3[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PONYTA,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarQuinn[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_NINETALES,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarRamon[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_PONYTA,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarDusty[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_GROWLITHE,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarArnie[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
    },
};

struct TrainerMonItemCustomMoves sParty_Burglar4[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarSimon[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_NINETALES,
    },
};

struct TrainerMonItemCustomMoves sParty_BurglarLewis[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PONYTA,
    },
};

struct TrainerMonItemCustomMoves sParty_EngineerBaily[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_VOLTORB,
    // },
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_CHARGE, MOVE_SIGNALBEAM, MOVE_ELECTROBALL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_EngineerBraxton[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SHOCKWAVE, MOVE_SIGNALBEAM, MOVE_SONICBOOM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_EngineerBernie[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SHOCKWAVE, MOVE_MIRRORSHOT, MOVE_SONICBOOM, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_MAGNEMITE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_MAGNETON,
    // },
};

struct TrainerMonItemCustomMoves sParty_FishermanDale[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_GOLDEEN,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_TENTACOOL,
    // },
    {
        .iv = 225,
        .lvl = 24,
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_WATERPULSE, MOVE_FLAIL, MOVE_FURYATTACK, MOVE_AQUARING},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanBarny[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_TENTACOOL,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_STARYU,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_KNOCKOFF, MOVE_ACIDSPRAY, MOVE_BUBBLEBEAM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanNed[] = {
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_GOLDEEN,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_POLIWAG,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_LIQUIDATION, MOVE_MEGAHORN, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanChip[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_TENTACOOL,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_TENTACOOL,
        .moves = {MOVE_KNOCKOFF, MOVE_ACIDSPRAY, MOVE_BUBBLEBEAM, MOVE_SLUDGEWAVE},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanHank[] = {
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanElliot[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_POLIWAG,
    // },
    {
        .iv = 225,
        .lvl = 37,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_SHADOWBALL, MOVE_ICICLESPEAR, MOVE_ICESHARD, MOVE_BUBBLEBEAM},
    },
    {
        .iv = 225,
        .lvl = 37,
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_LIQUIDATION, MOVE_FLIPTURN, MOVE_AQUARING, MOVE_MEGAHORN},
    },
    {
        .iv = 225,
        .lvl = 37,
        .species = SPECIES_HORSEA,
        .moves = {MOVE_DRAGONDANCE, MOVE_BUBBLEBEAM, MOVE_DRAGONBREATH, MOVE_FLIPTURN},
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanRonald[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanClaude[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_CLOYSTER,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanWade[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGIKARP,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanNolan[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanAndrew[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_MAGIKARP,
    // },
    // Funny
    {
        .iv = 225,
        .lvl = 60,
        .species = SPECIES_MAGIKARP,
        .moves = {MOVE_SPLASH, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleLuis[] = {
    {
        .iv = 225,
        .lvl = 19,
        .species = SPECIES_HORSEA,
        .moves = {MOVE_WATERPULSE, MOVE_TWISTER, MOVE_FLAIL, MOVE_FOCUSENERGY},
    },
    // {
    //     .iv = 0,
    //     .lvl = 16,
    //     .species = SPECIES_SHELLDER,
    // },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleRichard[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SHELLDER,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleReece[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_STARYU,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleMatthew[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_POLIWHIRL,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleDouglas[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleDavid[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleTony[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HORSEA,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleAxle[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_TENTACRUEL,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleBarry[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_CLOYSTER,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleDean[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_STARYU,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleDarrin[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HORSEA,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleSpencer[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_TENTACRUEL,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleJack[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleJerome[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WARTORTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleRoland[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallKoji[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MACHOP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallLuke[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallCamron[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallRaul[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallIsaiah[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHAMP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallZeek[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallJamal[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MACHAMP,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MACHOP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallCorey[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallChase[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
    },
};

struct TrainerMonItemCustomMoves sParty_GamerHugo[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 18,
    //     .species = SPECIES_HORSEA,
    // },
};

struct TrainerMonItemCustomMoves sParty_GamerJasper[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_WRAP, MOVE_RAZORLEAF, MOVE_KNOCKOFF, MOVE_GROWTH},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_MEGADRAIN, MOVE_ACID, MOVE_LEECHSEED, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_GamerDirk[] = {
    {
        .iv = 240,
        .lvl = 24,
        .species = SPECIES_MANKEY,
        .moves = {MOVE_CROSSCHOP, MOVE_FOCUSENERGY, MOVE_RAGE, MOVE_THIEF},
    },
    {
        .iv = 237,
        .lvl = 24,
        .species = SPECIES_DIGLETT,
        .moves = {MOVE_RAPIDSPIN, MOVE_MAGNITUDE, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 239,
        .lvl = 24,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    {
        .iv = 238,
        .lvl = 25,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERWAVE, MOVE_THUNDERPUNCH, MOVE_LOWKICK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_GamerDarian[] = {
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_THUNDERFANG, MOVE_BITE, MOVE_FIREFANG, MOVE_HOWL},
    },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_EXTRASENSORY, MOVE_FIRESPIN, MOVE_SNARL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_GamerStan[] = {
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_POLIWAG,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_WAKEUPSLAP, MOVE_FLIPTURN},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_BRCIKBREAK, MOVE_FLIPTURN},
    },
};

struct TrainerMonItemCustomMoves sParty_Gamer1[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_GamerRich[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_GROWLITHE,
        .moves = {MOVE_THUNDERFANG, MOVE_BITE, MOVE_FIREFANG, MOVE_HOWL},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_EXTRASENSORY, MOVE_FLAMETHROWER, MOVE_SNARL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyBridget[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_BELLSPROUT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_ODDISH,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_BELLSPROUT,
    // },
};

struct TrainerMonItemCustomMoves sParty_BeautyTamia[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_BELLSPROUT,
    // },
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_SEEDBOMB, MOVE_KNOCKOFF, MOVE_LEECHSEED, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyLori[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_ENERGYBALL, MOVE_EXTRASENSORY, MOVE_LEECHSEED, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyLola[] = {
    // {
    //     .iv = 0,
    //     .lvl = 27,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_QUICKATTACK, MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_TAILWHIP},
    },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_BODYSLAM, MOVE_SING, MOVE_WAKEUPSLAP, MOVE_PLAYROUGH},
    },
};

struct TrainerMonItemCustomMoves sParty_BeautySheila[] = {
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_SWIFT, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleTiffany[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleNora[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_CLOYSTER,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleMelissa[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyGrace[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WIGGLYTUFF,
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyOlivia[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BULBASAUR,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyLauren[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleAnya[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_POLIWAG,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleAlice[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleConnie[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_STARYU,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleShirley[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicJohan[] = {
    // {
    //     .iv = 50,
    //     .lvl = 31,
    //     .species = SPECIES_KADABRA,
    // },
    // {
    //     .iv = 50,
    //     .lvl = 31,
    //     .species = SPECIES_SLOWPOKE,
    // },
    // {
    //     .iv = 50,
    //     .lvl = 31,
    //     .species = SPECIES_MR_MIME,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_SWIFT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicTyron[] = {
    // {
    //     .iv = 50,
    //     .lvl = 34,
    //     .species = SPECIES_MR_MIME,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_DAZZLINGGLEAM, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicCameron[] = {
    // {
    //     .iv = 50,
    //     .lvl = 33,
    //     .species = SPECIES_SLOWPOKE,
    // },
    // {
    //     .iv = 50,
    //     .lvl = 33,
    //     .species = SPECIES_SLOWPOKE,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_BRINE, MOVE_PSYCHIC, MOVE_DISABLE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicPreston[] = {
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_SWIFT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RockerRandall[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
};

struct TrainerMonItemCustomMoves sParty_RockerLuca[] = {
    {
        .iv = 250,
        .lvl = 42,
        .species = SPECIES_VOLTORB,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .moves = {MOVE_THUNDERBOLT, MOVE_BOOMBURST, MOVE_VOLTSWITCH, MOVE_EXPLOSION},
    },
    {
        .iv = 250,
        .lvl = 42,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_AURASPHERE, MOVE_REFLECT},
    },
    {
        .iv = 248,
        .lvl = 42,
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOWBALL, MOVE_ENERGYBALL, MOVE_CURSE},
    },
    {
        .iv = 249,
        .lvl = 42,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_DYNAMICPUNCH, MOVE_THUNDERPUNCH, MOVE_MACHPUNCH, MOVE_BULKUP},
    },
    {
        .iv = 248,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_DRILLRUN, MOVE_BRICKBREAK, MOVE_STONEEDGE, MOVE_STEALTHROCK},
    },
    {
        .iv = 247,
        .lvl = 43,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_ELECTRIC_SEED,
        .moves = {MOVE_THUNDERBOLT, MOVE_BOOMBURST, MOVE_VOLTSWITCH, MOVE_SIGNALBEAM},
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerDalton[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MR_MIME,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerNelson[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_KADABRA,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerKirk[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_DROWZEE,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerShawn[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_HYPNO,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerGregory[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLEPLAY, MOVE_DOUBLESLAP, MOVE_ENCORE},
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerEdward[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHTSCREEN, MOVE_SPARK, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHTSCREEN, MOVE_SPARK, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SWIFT, MOVE_SPARK, MOVE_SELFDESTRUCT, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLEPLAY, MOVE_REFLECT, MOVE_ENCORE},
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerKayden[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HYPNO,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerNate[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KADABRA,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerPhil[] = {
    {
        .iv = 40,
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 40,
        .lvl = 34,
        .species = SPECIES_ARBOK,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerEdgar[] = {
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = SPECIES_ARBOK,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerJason[] = {
    {
        .iv = 40,
        .lvl = 43,
        .species = SPECIES_RHYHORN,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerCole[] = {
    {
        .iv = 40,
        .lvl = 39,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 40,
        .lvl = 39,
        .species = SPECIES_TAUROS,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerVincent[] = {
    {
        .iv = 40,
        .lvl = 44,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 40,
        .lvl = 44,
        .species = SPECIES_GOLDUCK,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerJohn[] = {
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = SPECIES_TAUROS,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperSebastian[] = {
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_STICK,
        .moves = {MOVE_KNOCKOFF, MOVE_SWORDSDANCE, MOVE_BRAVEBIRD, MOVE_LEAFBLADE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperPerry[] = {
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_SPEAROW,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_QUICKATTACK, MOVE_WINGATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_PURSUIT, MOVE_DRILLPECK, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperRobert[] = {
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_PIDGEOTTO,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_SPEAROW,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_PURSUIT, MOVE_FACADE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperDonald[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SWORDSDANCE, MOVE_LEAFBLADE, MOVE_BRAVEBIRD, MOVE_UTURN},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperBenny[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_PURSUIT, MOVE_DRILLPECK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_PURSUIT, MOVE_DRILLPECK, MOVE_FACADE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperEdwin[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_PIDGEY,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperChester[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_DODUO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperWilton[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperRamiro[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_DODRIO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperJacob[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SPEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperRoger[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperReed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperKeith[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperCarter[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_PIDGEY,
    // },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_QUICKATTACK, MOVE_WINGATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_DODUO,
        .moves = {MOVE_QUICKATTACK, MOVE_DRILLPECK, MOVE_JUMPKICK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMitch[] = {
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_SPEAROW,
    // },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_PURSUIT, MOVE_DRILLPECK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_PURSUIT, MOVE_FACADE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperBeck[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_FACADE, MOVE_TAILWIND},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_PURSUIT, MOVE_FACADE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMarlon[] = {
    {
        .iv = 250,
        .lvl = 45,
        .heldItem = ITEM_STICK,
        .species = SPECIES_FARFETCHD,
        .moves = {MOVE_SWORDSDANCE, MOVE_LEAFBLADE, MOVE_BRAVEBIRD, MOVE_UTURN},
    },
    {
        .iv = 249,
        .lvl = 45,
        .species = SPECIES_SPEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_PURSUIT, MOVE_FACADE, MOVE_UTURN},
    },
    {
        .iv = 249,
        .lvl = 45,
        .species = SPECIES_DODUO,
        .moves = {MOVE_DRILLPECK, MOVE_JUMPKICK, MOVE_DOUBLEHIT, MOVE_SWORDSDANCE},
    },
    {
        .iv = 250,
        .lvl = 45,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_TAILWIND, MOVE_FACADE, MOVE_BRAVEBIRD, MOVE_UTURN},
    },
    {
        .iv = 249,
        .lvl = 45,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_PURSUIT, MOVE_FACADE, MOVE_UTURN},
    },
    {
        .iv = 252,
        .lvl = 46,
        .heldItem = ITEM_SITRUS_BERRY,
        .species = SPECIES_DODRIO,
        .moves = {MOVE_DRILLPECK, MOVE_JUMPKICK, MOVE_DOUBLEHIT, MOVE_SWORDSDANCE},
    },
};

struct TrainerMonItemCustomMoves sParty_BlackBeltKoichi[] = {
    {
        .iv = 171,
        .lvl = 39,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_KNOCKOFF, MOVE_DYNAMICPUNCH, MOVE_MACHPUNCH, MOVE_DUALCHOP},
    },
    {
        .iv = 170,
        .lvl = 39,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_FLAME_ORB,
        .moves = {MOVE_KNOCKOFF, MOVE_DRAINPUNCH, MOVE_MACHPUNCH, MOVE_FACADE},
    },
    {
        .iv = 170,
        .lvl = 39,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BULKUP, MOVE_DRAINPUNCH, MOVE_LIQUIDATION, MOVE_AQUAJET},
    },
    {
        .iv = 169,
        .lvl = 39,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_STOMPINGTANTRUM, MOVE_DRAINPUNCH, MOVE_STEALTHROCK, MOVE_UTURN},
    },
    {
        .iv = 167,
        .lvl = 40,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_HIGHJUMPKICK, MOVE_BLAZEKICK, MOVE_MEGAKICK, MOVE_ENDURE},
    },
    {
        .iv = 168,
        .lvl = 40,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_MACHPUNCH, MOVE_DRAINPUNCH, MOVE_ICEPUNCH, MOVE_THUNDERPUNCH},
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltMike[] = {
    // {
    //     .iv = 100,
    //     .lvl = 31,
    //     .species = SPECIES_MANKEY,
    //     .heldItem = ITEM_BLACK_BELT,
    // },
    // {
    //     .iv = 100,
    //     .lvl = 31,
    //     .species = SPECIES_MANKEY,
    //     .heldItem = ITEM_BLACK_BELT,
    // },
    {
        .iv = 225,
        .lvl = 35,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltHideki[] = {
    {
        .iv = 225,
        .lvl = 35,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    // {
    //     .iv = 100,
    //     .lvl = 32,
    //     .species = SPECIES_MACHOKE,
    //     .heldItem = ITEM_BLACK_BELT,
    // },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltAaron[] = {
    {
        .iv = 225,
        .lvl = 35,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_STOMPINGTANTRUM, MOVE_CLOSECOMBAT, MOVE_THRASH, MOVE_NONE},
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltHitoshi[] = {
    // {
    //     .iv = 100,
    //     .lvl = 31,
    //     .species = SPECIES_MACHOP,
    //     .heldItem = ITEM_BLACK_BELT,
    // },
    // {
    //     .iv = 100,
    //     .lvl = 31,
    //     .species = SPECIES_MANKEY,
    //     .heldItem = ITEM_BLACK_BELT,
    // },
    {
        .iv = 225,
        .lvl = 35,
        .species = SPECIES_MANKEY,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_CROSSCHOP, MOVE_FOCUSENERGY, MOVE_RAGE, MOVE_THIEF},
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltAtsushi[] = {
    {
        .iv = 100,
        .lvl = 40,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 40,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltKiyo[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltTakashi[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltDaisuke[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_RivalOaksLabSquirtle[] = {
// struct TrainerMonItemCustomMoves sParty_RivalOaksLabSquirtle[] = {
    {
        .iv = 222,
        .lvl = 5,
        // .species = SPECIES_MEWTWO, //SQUIRTLE
        .species = SPECIES_SQUIRTLE,
        // .heldItem = ITEM_NONE,
        .moves = {MOVE_TACKLE, MOVE_TAILWHIP, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalOaksLabBulbasaur[] = {
    {
        .iv = 222,
        .lvl = 5,
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalOaksLabCharmander[] = {
    {
        .iv = 222,
        .lvl = 5,
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_SCRATCH, MOVE_GROWL, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22EarlySquirtle[] = {
    {
        .iv = 125,
        .lvl = 8,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_GUST, MOVE_QUICKATTACK},
    },
    {
        // .iv = 50,
        .iv = 124,
        .lvl = 9,
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_TACKLE, MOVE_TAILWHIP, MOVE_WATERGUN, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22EarlyBulbasaur[] = {
    {
        .iv = 125,
        .lvl = 8,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_GUST, MOVE_QUICKATTACK},
    },
    {
        .iv = 124,
        .lvl = 9,
        .species = SPECIES_BULBASAUR,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_VINEWHIP, MOVE_LEECHSEED},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22EarlyCharmander[] = {
    {
        .iv = 125,
        .lvl = 8,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_GROWL, MOVE_GUST, MOVE_QUICKATTACK},
    },
    {
        .iv = 124,
        .lvl = 9,
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_SCRATCH, MOVE_GROWL, MOVE_EMBER, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalCeruleanSquirtle[] = {
    {
        .iv = 210,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    {
        .iv = 209,
        .lvl = 21,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_TELEPORT, MOVE_FIREPUNCH, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 208,
        .lvl = 21,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 212,
        .lvl = 22,
        .species = SPECIES_WARTORTLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_WITHDRAW, MOVE_WATERPULSE, MOVE_ICEFANG, MOVE_AQUAJET},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalCeruleanBulbasaur[] = {
    {
        .iv = 210,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    {
        .iv = 209,
        .lvl = 21,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_TELEPORT, MOVE_FIREPUNCH, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 208,
        .lvl = 21,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 211,
        .lvl = 22,
        .species = SPECIES_IVYSAUR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_TAKEDOWN},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalCeruleanCharmander[] = {
    {
        .iv = 210,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    {
        .iv = 209,
        .lvl = 21,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_TELEPORT, MOVE_FIREPUNCH, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 208,
        .lvl = 21,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 207,
        .lvl = 22,
        .species = SPECIES_CHARMELEON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SCARYFACE, MOVE_DRAGONRAGE, MOVE_FIRESPIN, MOVE_SLASH},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistTed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WEEZING,
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistConnor[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_SMOG, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_SELFDESTRUCT},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_WEEZING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
};

struct TrainerMonItemCustomMoves sParty_ScientistJerry[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_MAGNEMITE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_VOLTORB,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_TRIATTACK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistJose[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_ELECTROBALL, MOVE_SIGNALBEAM, MOVE_NONE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_WEEZING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
};

struct TrainerMonItemCustomMoves sParty_ScientistRodney[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_HEADBUTT, MOVE_ICEPUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistBeau[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_SMOG, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_WEEZING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_SONICBOOM, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_TRIATTACK, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistTaylor[] = {
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_VOLTORB,
    //     .moves = {MOVE_SPARK, MOVE_SONICBOOM, MOVE_SCREECH, MOVE_TACKLE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_DISCHARGE, MOVE_SIGNALBEAM, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_ELECTROBALL, MOVE_SIGNALBEAM, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistJoshua[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_MUK,
    // },
};

struct TrainerMonItemCustomMoves sParty_ScientistParker[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_ELECTROBALL, MOVE_SIGNALBEAM, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistEd[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_ELECTROBALL, MOVE_SIGNALBEAM, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_SMOG, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_SONICBOOM, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistTravis[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_SONICBOOM, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_SMOG, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistBraydon[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_VOLTORB,
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistIvan[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_ELECTRODE,
    },
};

struct TrainerMonItemCustomMoves sParty_BossGiovanni[] = {
    {
        .iv = 157,
        .lvl = 35,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PARTINGSHOT, MOVE_FAKEOUT, MOVE_KNOCKOFF, MOVE_FURYSWIPES},
    },
    {
        .iv = 192,
        .lvl = 35,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .moves = {MOVE_BONERUSH, MOVE_RETALIATE, MOVE_KNOCKOFF, MOVE_ROCKSLIDE},
    },
    {
        .iv = 192,
        .lvl = 35,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_SMOOTH_ROCK,
        .moves = {MOVE_DRILLRUN, MOVE_SANDSTORM, MOVE_STONEEDGE, MOVE_STEALTHROCK},
    },
    {
        .iv = 191,
        .lvl = 35,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BULLDOZE, MOVE_POISONTAIL, MOVE_MEGAHORN, MOVE_CRUNCH},
    },
    {
        .iv = 190,
        .lvl = 35,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXICSPIKES, MOVE_EARTHPOWER, MOVE_POISONTAIL, MOVE_CRUNCH},
    },
    {
        .iv = 189,
        .lvl = 36,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_MEGAPUNCH, MOVE_FAKEOUT, MOVE_CRUNCH, MOVE_BULLDOZE},
    },
};

struct TrainerMonItemCustomMoves sParty_BossGiovanni2[] = {
    {
        .iv = 177,
        .lvl = 40,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PARTINGSHOT, MOVE_FAKEOUT, MOVE_KNOCKOFF, MOVE_DOUBLEEDGE},
    },
    {
        .iv = 176,
        .lvl = 40,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .moves = {MOVE_BONERUSH, MOVE_RETALIATE, MOVE_KNOCKOFF, MOVE_ROCKBLAST},
    },
    {
        .iv = 176,
        .lvl = 40,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_SMOOTH_ROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_SANDSTORM, MOVE_STONEEDGE, MOVE_STEALTHROCK},
    },
    {
        .iv = 175,
        .lvl = 40,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EARTHQUAKE, MOVE_POISONTAIL, MOVE_MEGAHORN, MOVE_CRUNCH},
    },
    {
        .iv = 174,
        .lvl = 40,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_TOXICSPIKES, MOVE_EARTHPOWER, MOVE_POISONTAIL, MOVE_CRUNCH},
    },
    {
        .iv = 172,
        .lvl = 41,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_KANGASKHANITE,
        .moves = {MOVE_DOUBLEHIT, MOVE_FAKEOUT, MOVE_SUCKERPUNCH, MOVE_EARTHQUAKE},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderGiovanni[] = {
    {
        .iv = 157,
        .lvl = 57,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_CHOPLE_BERRY,
        .moves = {MOVE_PARTINGSHOT, MOVE_FAKEOUT, MOVE_KNOCKOFF, MOVE_DOUBLEEDGE},
    },
    {
        .iv = 173,
        .lvl = 57,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHPOWER, MOVE_TOXICSPIKES, MOVE_ICEBEAM, MOVE_SLUDGEBOMB},
    },
    {
        .iv = 155,
        .lvl = 57,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SMOOTH_ROCK,
        .moves = {MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_STEALTHROCK, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 155,
        .lvl = 57,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .moves = {MOVE_BONERUSH, MOVE_RETALIATE, MOVE_ROCKBLAST, MOVE_KNOCKOFF},
    },
    {
        .iv = 153,
        .lvl = 57,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_POISONTAIL, MOVE_CRUNCH, MOVE_MEGAHORN, MOVE_EARTHQUAKE},
    },
    {
        .iv = 152,
        .lvl = 58,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_KANGASKHANITE,
        .moves = {MOVE_FAKEOUT, MOVE_DOUBLEHIT, MOVE_SUCKERPUNCH, MOVE_EARTHQUAKE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt[] = {
    {
        .iv = 225,
        .lvl = 16,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_QUICKATTACK, MOVE_TACKLE, MOVE_PURSUIT, MOVE_TAILWHIP},
    },
    // {
    //     .iv = 0,
    //     .lvl = 13,
    //     .species = SPECIES_ZUBAT,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt2[] = {
    {
        .iv = 225,
        .lvl = 16,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_FURYCUTTER, MOVE_ROLLOUT, MOVE_RAPIDSPIN, MOVE_SANDTOMB},
    },
    // {
    //     .iv = 0,
    //     .lvl = 11,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 11,
    //     .species = SPECIES_ZUBAT,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt3[] = {
    // {
    //     .iv = 0,
    //     .lvl = 11,
    //     .species = SPECIES_ZUBAT,
    // },
    {
        .iv = 225,
        .lvl = 16,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt4[] = {
    {
        .iv = 225,
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_TAILWHIP, MOVE_TACKLE},
    },
    {
        .iv = 225,
        .lvl = 15,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_FURYCUTTER, MOVE_ROLLOUT, MOVE_RAPIDSPIN, MOVE_SANDTOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt5[] = {
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
    {
        .iv = 225,
        .lvl = 22,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt6[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_LEECHLIFE, MOVE_CONFUSERAY},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt7[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt8[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 50,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt9[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_RATICATE,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt10[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_GRIMER,
    //     .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISONGAS, MOVE_NONE},
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt11[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATICATE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATICATE,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_QUICKATTACK, MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_TAILWHIP},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt12[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISONGAS},
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt13[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_ZUBAT,
    //     .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECHLIFE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOG, MOVE_TACKLE, MOVE_POISONGAS, MOVE_NONE},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_GRIMER,
    //     .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_ZUBAT,
    //     .moves = {MOVE_BITE, MOVE_ASTONISH, MOVE_SUPERSONIC, MOVE_LEECHLIFE},
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_LEECHLIFE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt14[] = {
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_RATTATA,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_RATICATE,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt15[] = {
    // {
    //     .iv = 0,
    //     .lvl = 21,
    //     .species = SPECIES_MACHOP,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt16[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 23,
    //     .species = SPECIES_SANDSLASH,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt17[] = {
    // {
    //     .iv = 0,
    //     .lvl = 23,
    //     .species = SPECIES_EKANS,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 23,
    //     .species = SPECIES_SANDSHREW,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_SEEDBOMB, MOVE_GROWTH, MOVE_INGRAIN, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt18[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_LEECHLIFE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt19[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_BITE, MOVE_LEECHLIFE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_ZUBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_GOLBAT,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt20[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt21[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_SUPERFANG, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_SUPERFANG, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_POISONFANG, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_HAZE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt22[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt23[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt24[] = {
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_GOLBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_ZUBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_ZUBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_RATICATE,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt25[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_RATICATE,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt26[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt27[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt28[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt29[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt30[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt31[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_ZUBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_ZUBAT,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_WINGATTACK, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_POISONFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt32[] = {
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_RATICATE,
    //     .moves = {MOVE_SCARYFACE, MOVE_HYPERFANG, MOVE_QUICKATTACK, MOVE_TAILWHIP},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_ARBOK,
    //     .moves = {MOVE_GLARE, MOVE_BITE, MOVE_POISONSTING, MOVE_LEER},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt33[] = {
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_CUBONE,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt34[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_ROLLOUT, MOVE_FURYCUTTER, MOVE_SANDTOMB, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_SANDSLASH,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt35[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_ZUBAT,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 26,
    //     .species = SPECIES_GOLBAT,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt36[] = {
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_WEEZING,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_GOLBAT,
    // },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_HEADBUTT, MOVE_CLEARSMOG, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt37[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_RECOVER},
    },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt38[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_POISONFANG, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 28,
    //     .species = SPECIES_HYPNO,
    // },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt39[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_CROSSCHOP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt40[] = {
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_SUPERFANG, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_POISONFANG, MOVE_PURSUIT, MOVE_LEECHLIFE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 25,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 33,
        .species = SPECIES_EKANS,
        .moves = {MOVE_WRAP, MOVE_BITE, MOVE_COIL, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt41[] = {
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_CUBONE,
        .moves = {MOVE_BONEMERANG, MOVE_KNOCKOFF, MOVE_RETALIATE, MOVE_ROCKTOMB},
    },
    {
        .iv = 225,
        .lvl = 34,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYBEAM, MOVE_HYPNOSIS, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
//     {
//         .iv = 0,
//         .lvl = 32,
//         .species = SPECIES_MAROWAK,
//     },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerSamuel[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SANDATTACK, MOVE_POISONSTING},
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SANDATTACK, MOVE_POISONSTING},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKEDOWN, MOVE_ROCKBLAST, MOVE_FURYATTACK, MOVE_SCARYFACE},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_FURYATTACK, MOVE_HORNATTACK, MOVE_POISONSTING, MOVE_DOUBLEKICK},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLEKICK, MOVE_POISONSTING, MOVE_FOCUSENERGY},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerGeorge[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGGBOMB, MOVE_CONFUSION, MOVE_STUNSPORE, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_FURYSWIPES, MOVE_SWIFT, MOVE_POISONSTING, MOVE_SANDATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKECANNON, MOVE_SPIKES, MOVE_AURORABEAM, MOVE_SUPERSONIC},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONICBOOM, MOVE_SCREECH, MOVE_LIGHTSCREEN},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMEWHEEL, MOVE_ROAR, MOVE_BITE, MOVE_TAKEDOWN},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerColby[] = {
    {
        .iv = 100,
        .lvl = 41,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUDSHOT, MOVE_BUBBLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_BODYSLAM, MOVE_DOUBLESLAP, MOVE_WATERGUN, MOVE_HYPNOSIS},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_BARRIER, MOVE_WRAP, MOVE_BUBBLEBEAM, MOVE_ACID},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SEADRA,
        .moves = {MOVE_WATERGUN, MOVE_SMOKESCREEN, MOVE_TWISTER, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_WATERGUN, MOVE_BITE, MOVE_RAPIDSPIN, MOVE_RAINDANCE},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerPaul[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SLOWPOKE,
        .moves = {MOVE_HEADBUTT, MOVE_CONFUSION, MOVE_WATERGUN, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_AURORABEAM, MOVE_CLAMP, MOVE_SUPERSONIC, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUDSHOT, MOVE_BUBBLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_BUBBLEBEAM, MOVE_SWIFT, MOVE_RECOVER, MOVE_RAPIDSPIN},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_CONFUSION, MOVE_SCRATCH, MOVE_SCREECH, MOVE_DISABLE},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerRolando[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPERFANG, MOVE_PURSUIT, MOVE_SCARYFACE, MOVE_QUICKATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZORLEAF, MOVE_SLEEPPOWDER, MOVE_SWEETSCENT, MOVE_SYNTHESIS},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_WATERGUN, MOVE_BITE, MOVE_RAPIDSPIN, MOVE_TAILWHIP},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_FLAMETHROWER, MOVE_SLASH, MOVE_SMOKESCREEN, MOVE_SCARYFACE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_WINGATTACK, MOVE_SMOKESCREEN, MOVE_SCARYFACE},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerGilbert[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_WINGATTACK, MOVE_FEATHERDANCE, MOVE_WHIRLWIND, MOVE_QUICKATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILLPECK, MOVE_MIRRORMOVE, MOVE_PURSUIT, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAYDAY, MOVE_FEINTATTACK, MOVE_SCREECH, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_LICKITUNG,
        .moves = {MOVE_SLAM, MOVE_DISABLE, MOVE_WRAP, MOVE_SUPERSONIC},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_HORNATTACK, MOVE_SCARYFACE, MOVE_SWAGGER, MOVE_TAILWHIP},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerOwen[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SCRATCH, MOVE_POISONSTING, MOVE_DOUBLEKICK, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_HORNATTACK, MOVE_POISONSTING, MOVE_DOUBLEKICK, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPERFANG, MOVE_PURSUIT, MOVE_SCARYFACE, MOVE_QUICKATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_FURYSWIPES, MOVE_SWIFT, MOVE_SLASH, MOVE_POISONSTING},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCKBLAST, MOVE_SCARYFACE, MOVE_STOMP, MOVE_TAILWHIP},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerBerke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_SEEL,
        .moves = {MOVE_TAKEDOWN, MOVE_AURORABEAM, MOVE_ICYWIND, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_ROCKBLAST, MOVE_MAGNITUDE, MOVE_ROCKTHROW, MOVE_MUDSPORT},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_GUILLOTINE, MOVE_STOMP, MOVE_MUDSHOT, MOVE_BUBBLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_ONIX,
        .moves = {MOVE_SLAM, MOVE_SANDSTORM, MOVE_DRAGONBREATH, MOVE_ROCKTHROW},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKECANNON, MOVE_AURORABEAM, MOVE_SUPERSONIC, MOVE_PROTECT},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerYuji[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SANDATTACK, MOVE_POISONSTING},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_ROCKBLAST, MOVE_MAGNITUDE, MOVE_MUDSPORT, MOVE_DEFENSECURL},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_ONIX,
        .moves = {MOVE_DRAGONBREATH, MOVE_SANDSTORM, MOVE_ROCKTHROW, MOVE_BIND},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_ROCKBLAST, MOVE_MAGNITUDE, MOVE_ROLLOUT, MOVE_DEFENSECURL},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerWarren[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_TAKEDOWN, MOVE_ROCKBLAST, MOVE_FURYATTACK, MOVE_SCARYFACE},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_FURYSWIPES, MOVE_BITE, MOVE_POISONSTING, MOVE_DOUBLEKICK},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODYSLAM, MOVE_BITE, MOVE_POISONSTING, MOVE_DOUBLEKICK},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerMary[] = {
    {
        .iv = 225,
        .lvl = 32,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_SEEDBOMB, MOVE_GROWTH, MOVE_INGRAIN, MOVE_KNOCKOFF},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    // {
    //     .iv = 100,
    //     .lvl = 22,
    //     .species = SPECIES_WEEPINBELL,
    //     .moves = {MOVE_VINEWHIP, MOVE_STUNSPORE, MOVE_POISONPOWDER, MOVE_GROWTH},
    // },
    // {
    //     .iv = 100,
    //     .lvl = 22,
    //     .species = SPECIES_GLOOM,
    //     .moves = {MOVE_ABSORB, MOVE_STUNSPORE, MOVE_POISONPOWDER, MOVE_SWEETSCENT},
    // },
    // {
    //     .iv = 100,
    //     .lvl = 22,
    //     .species = SPECIES_IVYSAUR,
    //     .moves = {MOVE_RAZORLEAF, MOVE_SLEEPPOWDER, MOVE_VINEWHIP, MOVE_LEECHSEED},
    // },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerCaroline[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_STUNSPORE, MOVE_POISONPOWDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_SLEEPPOWDER, MOVE_POISONPOWDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_STUNSPORE, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PARAS,
        .moves = {MOVE_GROWTH, MOVE_SLASH, MOVE_LEECHLIFE, MOVE_STUNSPORE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_SLASH, MOVE_LEECHLIFE, MOVE_POISONPOWDER},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerAlexa[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_LIGHTSCREEN, MOVE_COSMICPOWER, MOVE_DOUBLESLAP, MOVE_ENCORE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_SING, MOVE_BODYSLAM, MOVE_ROLLOUT, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_PAYDAY, MOVE_FEINTATTACK, MOVE_BITE, MOVE_SCREECH},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEERCOLD, MOVE_TAKEDOWN, MOVE_REST, MOVE_AURORABEAM},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_SING, MOVE_EGGBOMB, MOVE_SOFTBOILED, MOVE_MINIMIZE},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerShannon[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_PINMISSILE, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_PURSUIT},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_BUTTERFREE,
        .moves = {MOVE_SAFEGUARD, MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_LEECHLIFE, MOVE_SLASH, MOVE_GROWTH},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_STUNSPORE, MOVE_LEECHLIFE, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYBEAM, MOVE_GUST, MOVE_SUPERSONIC, MOVE_LEECHLIFE},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerNaomi[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FURYSWIPES, MOVE_SCREECH, MOVE_FEINTATTACK, MOVE_PAYDAY},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PONYTA,
        .moves = {MOVE_AGILITY, MOVE_TAKEDOWN, MOVE_FIRESPIN, MOVE_STOMP},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FURYATTACK, MOVE_FIRESPIN, MOVE_STOMP, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSERAY, MOVE_QUICKATTACK, MOVE_IMPRISON},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_SAFEGUARD, MOVE_WILLOWISP, MOVE_CONFUSERAY, MOVE_FIRESPIN},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerBrooke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_BIND, MOVE_MEGADRAIN, MOVE_INGRAIN},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_ACID, MOVE_MOONLIGHT, MOVE_SLEEPPOWDER, MOVE_STUNSPORE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_MEGADRAIN, MOVE_ACID, MOVE_STUNSPORE, MOVE_AROMATHERAPY},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZORLEAF, MOVE_SWEETSCENT, MOVE_GROWL, MOVE_LEECHSEED},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_RAZORLEAF, MOVE_GROWTH, MOVE_SLEEPPOWDER, MOVE_POISONPOWDER},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerAustina[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_HORNDRILL, MOVE_ROCKBLAST, MOVE_SCARYFACE, MOVE_STOMP},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_DOUBLEKICK, MOVE_FURYSWIPES, MOVE_BITE, MOVE_FLATTER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_BODYSLAM, MOVE_DOUBLEKICK, MOVE_BITE, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_HORNATTACK, MOVE_POISONSTING, MOVE_FOCUSENERGY, MOVE_LEER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_THRASH, MOVE_DOUBLEKICK, MOVE_POISONSTING, MOVE_PECK},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerJulie[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_FURYSWIPES, MOVE_BITE, MOVE_SCREECH, MOVE_FEINTATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILLOWISP, MOVE_CONFUSERAY, MOVE_GRUDGE},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_FURYATTACK, MOVE_FIRESPIN, MOVE_TAKEDOWN, MOVE_AGILITY},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_PIKACHU,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDERWAVE, MOVE_DOUBLETEAM, MOVE_QUICKATTACK},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_THUNDER, MOVE_THUNDERWAVE, MOVE_SLAM, MOVE_DOUBLETEAM},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourLorelei[] = {
    {
        .iv = 150,
        .lvl = 63,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_ICY_ROCK,
        .moves = {MOVE_TRICKROOM, MOVE_EXPANDINGFORCE, MOVE_CHILLYRECEPTION, MOVE_SLACKOFF},
    },
    {
        .iv = 149,
        .lvl = 63,
        .species = SPECIES_FARIGIRAF,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .moves = {MOVE_PSYCHICTERRAIN, MOVE_EXPANDINGFORCE, MOVE_DAZZLINGGLEAM, MOVE_THUNDERBOLT},
    },
    {
        .iv = 145,
        .lvl = 63,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_SHELLSMASH, MOVE_LIQUIDATION, MOVE_ICICLESPEAR, MOVE_ROCKBLAST},
    },
    {
        .iv = 148,
        .lvl = 63,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_TRICKROOM, MOVE_TELEPORT, MOVE_SCALD, MOVE_EXPANDINGFORCE},
    },
    {
        .iv = 148,
        .lvl = 63,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_BLIZZARD, MOVE_FOCUSBLAST, MOVE_EXPANDINGFORCE, MOVE_PSYCHICTERRAIN},
    },
    {
        .iv = 147,
        .lvl = 64,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BLIZZARD, MOVE_FREEZEDRY, MOVE_ALLURINGVOICE, MOVE_BRINE},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourBruno[] = {
    {
        .iv = 142,
        .lvl = 63,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_TRIPLEKICK, MOVE_PARTINGSHOT, MOVE_RAPIDSPIN, MOVE_TRIPLEAXEL},
    },
    {
        .iv = 146,
        .lvl = 63,
        .species = SPECIES_ORTHWORM,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHEDTAIL, MOVE_STEALTHROCK, MOVE_IRONTAIL, MOVE_SPIKES},
    },
    {
        .iv = 145,
        .lvl = 63,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_DRAINPUNCH, MOVE_MACHPUNCH, MOVE_ICEPUNCH, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 145,
        .lvl = 63,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_HIGHJUMPKICK, MOVE_BLAZEKICK, MOVE_STOMPINGTANTRUM, MOVE_ENDURE},
    },
    {
        .iv = 144,
        .lvl = 63,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_PASSHO_BERRY,
        .moves = {MOVE_STONEEDGE, MOVE_EARTHQUAKE, MOVE_IRONTAIL, MOVE_BODYPRESS},
    },
    {
        .iv = 143,
        .lvl = 64,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_DYNAMICPUNCH, MOVE_KNOCKOFF, MOVE_BULLETPUNCH, MOVE_ICEPUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourAgatha[] = {
    {
        .iv = 142,
        .lvl = 63,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_CROSSPOISON, MOVE_UTURN, MOVE_ROOST, MOVE_BRAVEBIRD},
    },
    {
        .iv = 141,
        .lvl = 63,
        .species = SPECIES_GRAFAIAI,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_TOXICSPIKES, MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_ENCORE},
    },
    {
        .iv = 140,
        .lvl = 63,
        .species = SPECIES_MISMAGIUS,
        .heldItem = ITEM_LIFE_ORB,
        .moves = {MOVE_SHADOWBALL, MOVE_DAZZLINGGLEAM, MOVE_FLAMETHROWER, MOVE_NASTYPLOT},
    },
    {
        .iv = 139,
        .lvl = 63,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SMOG, MOVE_PROTECT, MOVE_CLEARSMOG, MOVE_VENOSHOCK},
    },
    {
        .iv = 138,
        .lvl = 63,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_POISONTAIL, MOVE_COIL, MOVE_CRUNCH, MOVE_ICEFANG},
    },
    {
        .iv = 134,
        .lvl = 64,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_GENGARITE,
        .moves = {MOVE_SHADOWBALL, MOVE_FOCUSBLAST, MOVE_THUNDERBOLT, MOVE_SUBSTITUTE},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourLance[] = { //Previously had 5
    {
        .iv = 137,
        .lvl = 64,
        .species = SPECIES_CYCLIZAR,
        .heldItem = ITEM_ASSAULT_VEST,
        .moves = {MOVE_KNOCKOFF, MOVE_RAPIDSPIN, MOVE_UTURN, MOVE_DRAGONCLAW},
    },
    {
        .iv = 134,
        .lvl = 64,
        .species = SPECIES_DURALUDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_DRACOMETEOR, MOVE_VOLTSWITCH, MOVE_FLASHCANNON},
    },
    {
        .iv = 136,
        .lvl = 64,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_WACAN_BERRY,
        .moves = {MOVE_AQUATAIL, MOVE_FLIPTURN, MOVE_CRUNCH, MOVE_ICEFANG},
    },
    {
        .iv = 135,
        .lvl = 64,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DUALWINGBEAT, MOVE_ROOST, MOVE_THUNDERWAVE, MOVE_ICESPINNER},
    },
    {
        .iv = 134,
        .lvl = 64,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_THUNDERBOLT, MOVE_DRACOMETEOR, MOVE_BUBBLEBEAM, MOVE_FLAMETHROWER},
    },
    {
        .iv = 133,
        .lvl = 65,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_EXTREMESPEED, MOVE_DRAGONDANCE, MOVE_ICESPINNER, MOVE_AQUATAIL},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderBrock[] = {
    {
        .iv = 221,
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCKTOMB, MOVE_ROCKPOLISH, MOVE_TACKLE, MOVE_NONE},
    },
    {
        .iv = 220,
        .lvl = 13,
        .species = SPECIES_SANDSHREW,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FURYCUTTER, MOVE_ROLLOUT, MOVE_RAPIDSPIN, MOVE_SANDTOMB},
    },
    {
        .iv = 219,
        .lvl = 14,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BIND, MOVE_ROCKTOMB, MOVE_RAGE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderMisty[] = {
    {
        .iv = 216,
        .lvl = 20,
        .species = SPECIES_STARYU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_RECOVER, MOVE_CONFUSION, MOVE_FLIPTURN, MOVE_WATERPULSE},
    },
    {
        .iv = 215,
        .lvl = 20,
        .species = SPECIES_GOLDEEN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WATERPULSE, MOVE_FLAIL, MOVE_FURYATTACK, MOVE_AQUARING},
    },
    {
        .iv = 214,
        .lvl = 20,
        .species = SPECIES_PSYDUCK,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ZENHEADBUTT, MOVE_DISABLE, MOVE_FLIPTURN, MOVE_WATERPULSE},
    },
    {
        .iv = 213,
        .lvl = 21,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_PSYBEAM, MOVE_RECOVER, MOVE_FLIPTURN, MOVE_WATERPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderLtSurge[] = {
    {
        .iv = 205,
        .lvl = 27,
        .species = SPECIES_VOLTORB,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .moves = {MOVE_SIGNALBEAM, MOVE_VOLTSWITCH, MOVE_SELFDESTRUCT, MOVE_ELECTROBALL},
    },
    {
        .iv = 204,
        .lvl = 27,
        .species = SPECIES_MAGNEMITE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_VOLTSWITCH, MOVE_FLASHCANNON, MOVE_SHOCKWAVE, MOVE_SONICBOOM},
    },
    {
        .iv = 203,
        .lvl = 27,
        .species = SPECIES_PIKACHU,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_VOLTSWITCH, MOVE_NUZZLE, MOVE_KNOCKOFF, MOVE_THUNDERBOLT},
    },
    {
        .iv = 203,
        .lvl = 27,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_VOLTSWITCH, MOVE_THUNDERPUNCH, MOVE_LOWKICK, MOVE_THUNDERWAVE},
    },
    {
        .iv = 202,
        .lvl = 28,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_VOLTSWITCH, MOVE_NUZZLE, MOVE_KNOCKOFF, MOVE_THUNDERBOLT},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderErika[] = {
    {
        .iv = 188,
        .lvl = 36,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_PETALDANCE, MOVE_SLUDGEBOMB, MOVE_STRENGTHSAP, MOVE_TOXIC},
    },
    {
        .iv = 187,
        .lvl = 35,
        .species = SPECIES_IVYSAUR,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .moves = {MOVE_GRASSYTERRAIN, MOVE_ENERGYBALL, MOVE_SLUDGEBOMB, MOVE_LEECHSEED},
    },
    {
        .iv = 185,
        .lvl = 35,
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_POISONJAB, MOVE_STRENGTHSAP, MOVE_SNAPTRAP, MOVE_KNOCKOFF},
    },
    {
        .iv = 186,
        .lvl = 35,
        .species = SPECIES_EXEGGCUTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ENERGYBALL, MOVE_EXTRASENSORY, MOVE_SLEEPPOWDER, MOVE_LEECHSEED},
    },
    {
        .iv = 185,
        .lvl = 35,
        .species = SPECIES_TANGELA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_KNOCKOFF, MOVE_POWERWHIP, MOVE_BRICKBREAK, MOVE_BIND},
    },
    {
        .iv = 184,
        .lvl = 35,
        .species = SPECIES_GLOOM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ENERGYBALL, MOVE_SLUDGEBOMB, MOVE_LEECHSEED, MOVE_STRENGTHSAP},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderKoga[] = {
    {
        .iv = 156,
        .lvl = 48,
        .species = SPECIES_BEEDRILL,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_UTURN, MOVE_TWINEEDLE, MOVE_TOXICSPIKES, MOVE_POISONJAB},
    },
    {
        .iv = 156,
        .lvl = 48,
        .species = SPECIES_VENONAT,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_QUIVERDANCE, MOVE_PSYCHIC, MOVE_BUGBUZZ, MOVE_ENERGYBALL},
    },
    {
        .iv = 160,
        .lvl = 48,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SMOG, MOVE_THUNDERBOLT, MOVE_CLEARSMOG, MOVE_VENOSHOCK},
    },
    {
        .iv = 155,
        .lvl = 48,
        .species = SPECIES_MUK,
        .heldItem = ITEM_BLACK_SLUDGE,
        .moves = {MOVE_POISONJAB, MOVE_KNOCKOFF, MOVE_RECOVER, MOVE_BRICKBREAK},
    },
    {
        .iv = 162,
        .lvl = 48,
        .species = SPECIES_GOLBAT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_UTURN, MOVE_BRAVEBIRD, MOVE_CRUNCH, MOVE_POISONFANG},
    },
    {
        .iv = 161,
        .lvl = 49,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_QUIVERDANCE, MOVE_BUGBUZZ, MOVE_VENOSHOCK, MOVE_ENERGYBALL},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderBlaine[] = {
    {
        .iv = 160,
        .lvl = 54,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_ENCORE, MOVE_WILLOWISP, MOVE_FLAMETHROWER, MOVE_ENERGYBALL},
    },
    {
        .iv = 155,
        .lvl = 54,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_FLAREBLITZ, MOVE_CRUNCH, MOVE_PSYCHICFANGS, MOVE_THUNDERFANG},
    },
    {
        .iv = 159,
        .lvl = 54,
        .species = SPECIES_MAGMAR,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_CLEARSMOG, MOVE_EXTRASENSORY, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 156,
        .lvl = 54,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_FLAMETHROWER, MOVE_SOLARBEAM, MOVE_SCORCHINGSANDS, MOVE_ROAR},
    },
    {
        .iv = 157,
        .lvl = 54,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_RAPIDSPIN, MOVE_FLAREBLITZ, MOVE_HIGHHORSEPOWER, MOVE_MORNINGSUN},
    },
    {
        .iv = 158,
        .lvl = 55,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_CURSE, MOVE_EXTREMESPEED, MOVE_FLAREBLITZ, MOVE_MORNINGSUN},
    },
};

struct TrainerMonItemCustomMoves sParty_LeaderSabrina[] = {
    {
        .iv = 164,
        .lvl = 42,
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_TERRAIN_EXTENDER,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_DAZZLINGGLEAM, MOVE_TELEPORT, MOVE_REFLECT},
    },
    {
        .iv = 166,
        .lvl = 42,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_SCALD, MOVE_TELEPORT, MOVE_BODYPRESS},
    },
    {
        .iv = 165,
        .lvl = 42,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_GIGADRAIN, MOVE_LEECHSEED, MOVE_SLUDGEBOMB},
    },
    {
        .iv = 164,
        .lvl = 42,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_ICEBEAM, MOVE_SHADOWBALL, MOVE_LOVELYKISS},
    },
    {
        .iv = 164,
        .lvl = 42,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_SHADOWBALL, MOVE_AURASPHERE, MOVE_THUNDERBOLT},
    },
    {
        .iv = 163,
        .lvl = 43,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_ALAKAZITE,
        .moves = {MOVE_EXPANDINGFORCE, MOVE_RECOVER, MOVE_SHADOWBALL, MOVE_AURASPHERE},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanThomas[] = {
    {
        .iv = 237,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
    {
        .iv = 236,
        .lvl = 24,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_SIGNALBEAM, MOVE_RECOVER, MOVE_NONE},
    },
    {
        .iv = 235,
        .lvl = 24,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_SMACKDOWN, MOVE_ROCKPOLISH, MOVE_ROLLOUT},
    },
    {
        .iv = 234,
        .lvl = 25,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_THUNDERFANG, MOVE_BITE, MOVE_FIREFANG, MOVE_HOWL},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanArthur[] = {
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_NIDORAN_M,
    // },
    {
        .iv = 225,
        .lvl = 23,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_BITE},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanTucker[] = {
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONICBOOM, MOVE_SUPERSONIC, MOVE_SHOCKWAVE, MOVE_FLASHCANNON},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanNorton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanWalter[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_PONYTA,
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSsAnneSquirtle[] = {
    {
        .iv = 198,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_AIRCUTTER},
    },
    {
        .iv = 197,
        .lvl = 26,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_SWIFT, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 206,
        .lvl = 26,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_FOCUSENERGY},
    },
    {
        .iv = 195,
        .lvl = 26,
        .species = SPECIES_EXEGGCUTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_EXTRASENSORY, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 201,
        .lvl = 27,
        .species = SPECIES_WARTORTLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLIPTURN, MOVE_BUBBLEBEAM, MOVE_ICEFANG, MOVE_AQUAJET},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSsAnneBulbasaur[] = {
    {
        .iv = 198,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_AIRCUTTER},
    },
    {
        .iv = 197,
        .lvl = 26,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_SWIFT, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 206,
        .lvl = 26,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_FOCUSENERGY},
    },
    {
        .iv = 196,
        .lvl = 26,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERFANG, MOVE_BITE, MOVE_FIREFANG, MOVE_HOWL},
    },
    {
        .iv = 199,
        .lvl = 27,
        .species = SPECIES_IVYSAUR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_GIGADRAIN, MOVE_TAKEDOWN, MOVE_LEECHSEED, MOVE_SLUDGE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSsAnneCharmander[] = {
    {
        .iv = 198,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_AIRCUTTER},
    },
    {
        .iv = 197,
        .lvl = 26,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_REFLECT, MOVE_SWIFT, MOVE_THUNDERPUNCH},
    },
    {
        .iv = 206,
        .lvl = 26,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_FOCUSENERGY},
    },
    {
        .iv = 195,
        .lvl = 26,
        .species = SPECIES_EXEGGCUTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_EXTRASENSORY, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 194,
        .lvl = 27,
        .species = SPECIES_CHARMELEON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DRAGONRAGE, MOVE_METALCLAW, MOVE_FIREFANG, MOVE_SLASH},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalPokemonTowerSquirtle[] = {
    {
        .iv = 198,
        .lvl = 31,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_AIRCUTTER, MOVE_UTURN, MOVE_FACADE, MOVE_WHIRLWIND},
    },
    {
        .iv = 197,
        .lvl = 31,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_SHADOWBALL, MOVE_SWIFT, MOVE_REFLECT},
    },
    {
        .iv = 195,
        .lvl = 31,
        .species = SPECIES_EXEGGCUTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_EXTRASENSORY, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 196,
        .lvl = 31,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCKBLAST, MOVE_BULLDOZE, MOVE_ROCKPOLISH, MOVE_BRICKBREAK},
    },
    {
        .iv = 200,
        .lvl = 31,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_ICEFANG, MOVE_AQUATAIL, MOVE_SCARYFACE},
    },
    {
        .iv = 201,
        .lvl = 32,
        .species = SPECIES_WARTORTLE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLIPTURN, MOVE_BUBBLEBEAM, MOVE_CRUNCH, MOVE_AQUAJET},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalPokemonTowerBulbasaur[] = {
    {
        .iv = 198,
        .lvl = 31,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_AIRCUTTER, MOVE_UTURN, MOVE_FACADE, MOVE_WHIRLWIND},
    },
    {
        .iv = 197,
        .lvl = 31,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_SHADOWBALL, MOVE_SWIFT, MOVE_REFLECT},
    },
    {
        .iv = 196,
        .lvl = 31,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERFANG, MOVE_CRUNCH, MOVE_FIREFANG, MOVE_HOWL},
    },
    {
        .iv = 196,
        .lvl = 31,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCKBLAST, MOVE_BULLDOZE, MOVE_ROCKPOLISH, MOVE_BRICKBREAK},
    },
    {
        .iv = 200,
        .lvl = 31,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_ICEFANG, MOVE_AQUATAIL, MOVE_SCARYFACE},
    },
    {
        .iv = 199,
        .lvl = 32,
        .species = SPECIES_IVYSAUR,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_GIGADRAIN, MOVE_TAKEDOWN, MOVE_LEECHSEED, MOVE_SLUDGE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalPokemonTowerCharmander[] = {
    {
        .iv = 198,
        .lvl = 31,
        .species = SPECIES_PIDGEOTTO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_AIRCUTTER, MOVE_UTURN, MOVE_FACADE, MOVE_WHIRLWIND},
    },
    {
        .iv = 197,
        .lvl = 31,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYBEAM, MOVE_SHADOWBALL, MOVE_SWIFT, MOVE_REFLECT},
    },
    {
        .iv = 196,
        .lvl = 31,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERFANG, MOVE_CRUNCH, MOVE_FIREFANG, MOVE_HOWL},
    },
    {
        .iv = 196,
        .lvl = 31,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCKBLAST, MOVE_BULLDOZE, MOVE_ROCKPOLISH, MOVE_BRICKBREAK},
    },
    {
        .iv = 195,
        .lvl = 31,
        .species = SPECIES_EXEGGCUTE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_EXTRASENSORY, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 194,
        .lvl = 32,
        .species = SPECIES_CHARMELEON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_DRAGONRAGE, MOVE_METALCLAW, MOVE_FLAMETHROWER, MOVE_SCARYFACE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSilphSquirtle[] = {
    {
        .iv = 182,
        .lvl = 40,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_TAILWIND, MOVE_WHIRLWIND},
    },
    {
        .iv = 181,
        .lvl = 40,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_SHADOWBALL},
    },
    {
        .iv = 179,
        .lvl = 40,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_STEALTHROCK, MOVE_DRILLRUN, MOVE_STONEEDGE, MOVE_BRICKBREAK},
    },
    {
        .iv = 180,
        .lvl = 40,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_PSYCHIC, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 183,
        .lvl = 40,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAGONDANCE, MOVE_ICEFANG, MOVE_AQUATAIL, MOVE_CRUNCH},
    },
    {
        .iv = 178,
        .lvl = 41,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_BLASTOISINITE,
        .moves = {MOVE_HYDROPUMP, MOVE_DARKPULSE, MOVE_FLIPTURN, MOVE_AQUAJET},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSilphBulbasaur[] = {
    {
        .iv = 182,
        .lvl = 40,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_TAILWIND, MOVE_WHIRLWIND},
    },
    {
        .iv = 181,
        .lvl = 40,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_SHADOWBALL},
    },
    {
        .iv = 183,
        .lvl = 40,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_DRAGONDANCE, MOVE_ICEFANG, MOVE_AQUATAIL, MOVE_CRUNCH},
    },
    {
        .iv = 179,
        .lvl = 40,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_STEALTHROCK, MOVE_DRILLRUN, MOVE_STONEEDGE, MOVE_BRICKBREAK},
    },
    {
        .iv = 179,
        .lvl = 40,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERFANG, MOVE_CRUNCH, MOVE_FLAREBLITZ, MOVE_NONE},
    },
    {
        .iv = 178,
        .lvl = 41,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_VENUSAURITE,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGEBOMB, MOVE_EARTHPOWER, MOVE_LEECHSEED},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalSilphCharmander[] = {
    {
        .iv = 182,
        .lvl = 40,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_TAILWIND, MOVE_WHIRLWIND},
    },
    {
        .iv = 181,
        .lvl = 40,
        .species = SPECIES_KADABRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_REFLECT, MOVE_SHADOWBALL},
    },
    {
        .iv = 179,
        .lvl = 40,
        .species = SPECIES_RHYHORN,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_STEALTHROCK, MOVE_DRILLRUN, MOVE_STONEEDGE, MOVE_BRICKBREAK},
    },
    {
        .iv = 180,
        .lvl = 40,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_PSYCHIC, MOVE_LEECHSEED, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 179,
        .lvl = 40,
        .species = SPECIES_GROWLITHE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_THUNDERFANG, MOVE_CRUNCH, MOVE_FLAREBLITZ, MOVE_NONE},
    },
    {
        .iv = 178,
        .lvl = 41,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_X,
        .moves = {MOVE_AERIALACE, MOVE_DRAGONCLAW, MOVE_ROOST, MOVE_FIREFANG},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22LateSquirtle[] = {
    {
        .iv = 131,
        .lvl = 58,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_HURRICANE, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 129,
        .lvl = 58,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 58,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 128,
        .lvl = 58,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_GIGADRAIN, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_TELEPORT},
    },
    {
        .iv = 132,
        .lvl = 58,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_RAINDANCE, MOVE_FLIPTURN, MOVE_AQUATAIL, MOVE_CRUNCH},
    },
    {
        .iv = 127,
        .lvl = 59,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_BLASTOISINITE,
        .moves = {MOVE_HYDROPUMP, MOVE_SHELLSMASH, MOVE_ICEBEAM, MOVE_DARKPULSE},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22LateBulbasaur[] = {
    {
        .iv = 131,
        .lvl = 58,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 128,
        .lvl = 58,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SOLARBEAM, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_GROWTH},
    },
    {
        .iv = 129,
        .lvl = 58,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 58,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 130,
        .lvl = 58,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_SUNNYDAY, MOVE_EXTREMESPEED, MOVE_FLAREBLITZ, MOVE_MORNINGSUN},
    },
    {
        .iv = 127,
        .lvl = 59,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_VENUSAURITE,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGEBOMB, MOVE_EARTHPOWER, MOVE_GROWTH},
    },
};

struct TrainerMonItemCustomMoves sParty_RivalRoute22LateCharmander[] = {
    {
        .iv = 131,
        .lvl = 58,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 129,
        .lvl = 58,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 58,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 128,
        .lvl = 58,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SOLARBEAM, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_GROWTH},
    },
    {
        .iv = 130,
        .lvl = 58,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_SUNNYDAY, MOVE_EXTREMESPEED, MOVE_FLAREBLITZ, MOVE_MORNINGSUN},
    },
    {
        .iv = 127,
        .lvl = 59,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_X,
        .moves = {MOVE_DRAGONCLAW, MOVE_DRAGONDANCE, MOVE_ROOST, MOVE_FLAREBLITZ},
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionFirstSquirtle[] = {
    {
        .iv = 131,
        .lvl = 66,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_HURRICANE, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 129,
        .lvl = 66,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 66,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 128,
        .lvl = 66,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_ENERGYBALL, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_SLUDGEBOMB},
    },
    {
        .iv = 127,
        .lvl = 66,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_BLASTOISINITE,
        .moves = {MOVE_HYDROPUMP, MOVE_SHELLSMASH, MOVE_ICEBEAM, MOVE_DARKPULSE},
    },
    {
        .iv = 126,
        .lvl = 67,
        .species = SPECIES_SUICUNE,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_FLIPTURN, MOVE_RAINDANCE, MOVE_SCALD, MOVE_FREEZEDRY},
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionFirstBulbasaur[] = {
    {
        .iv = 131,
        .lvl = 66,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 129,
        .lvl = 66,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 66,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 130,
        .lvl = 66,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_SUNNYDAY, MOVE_EXTREMESPEED, MOVE_FLAREBLITZ, MOVE_MORNINGSUN},
    },
    {
        .iv = 127,
        .lvl = 66,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_VENUSAURITE,
        .moves = {MOVE_SOLARBEAM, MOVE_SLUDGEBOMB, MOVE_EARTHPOWER, MOVE_GROWTH},
    },
    {
        .iv = 126,
        .lvl = 67,
        .species = SPECIES_RAIKOU,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_CALMMIND, MOVE_THUNDERBOLT, MOVE_VOLTSWITCH, MOVE_SHADOWBALL},
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionFirstCharmander[] = {
    {
        .iv = 131,
        .lvl = 66,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_HEAVY_DUTY_BOOTS,
        .moves = {MOVE_BRAVEBIRD, MOVE_UTURN, MOVE_DEFOG, MOVE_TAILWIND},
    },
    {
        .iv = 129,
        .lvl = 66,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_SASH,
        .moves = {MOVE_PSYCHIC, MOVE_CALMMIND, MOVE_AURASPHERE, MOVE_SHADOWBALL},
    },
    {
        .iv = 130,
        .lvl = 66,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_STEALTHROCK, MOVE_EARTHQUAKE, MOVE_STONEEDGE, MOVE_HAMMERARM},
    },
    {
        .iv = 128,
        .lvl = 66,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_CHOICE_SPECS,
        .moves = {MOVE_SOLARBEAM, MOVE_PSYCHIC, MOVE_PSYSHOCK, MOVE_SLUDGEBOMB},
    },
    {
        .iv = 127,
        .lvl = 66,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARIZARDITE_X,
        .moves = {MOVE_DRAGONCLAW, MOVE_DRAGONDANCE, MOVE_ROOST, MOVE_FLAREBLITZ},
    },
    {
        .iv = 151,
        .lvl = 67,
        .species = SPECIES_ENTEI,
        .heldItem = ITEM_HEAT_ROCK,
        .moves = {MOVE_EXTREMESPEED, MOVE_SACREDFIRE, MOVE_CRUNCH, MOVE_SUNNYDAY},
    },
    
};

struct TrainerMonItemCustomMoves sParty_ChannelerPatricia[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerCarly[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerHope[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerPaula[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerLaurel[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerJody[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerTammy[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerRuth[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerKarina[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerJanae[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerAngelica[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerEmilia[] = {
    {
        .iv = 230,
        .lvl = 31,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_SHOCKWAVE},
    },
    {
        .iv = 244,
        .lvl = 31,
        .species = SPECIES_VENONAT,
        .moves = {MOVE_PSYBEAM, MOVE_BUGBUZZ, MOVE_RECOVER, MOVE_SHADOWBALL},
    },
    {
        .iv = 243,
        .lvl = 31,
        .species = SPECIES_VULPIX,
        .moves = {MOVE_SHADOWBALL, MOVE_FLAMETHROWER, MOVE_EXTRASENSORY, MOVE_WILLOWISP},
    },
    {
        .iv = 243,
        .lvl = 31,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_SHADOWBALL, MOVE_ICICLESPEAR, MOVE_ICESHARD, MOVE_BUBBLEBEAM},
    },
    {
        .iv = 245,
        .lvl = 32,
        .species = SPECIES_HAUNTER,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SHADOWBALL, MOVE_SNARL, MOVE_SHOCKWAVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerJennifer[] = {
    {
        .iv = 225,
        .lvl = 29,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_CURSE, MOVE_SNARL, MOVE_LICK},
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler1[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_HAUNTER,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler2[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler3[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler4[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler5[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_HAUNTER,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler6[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler7[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_Channeler8[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerAmanda[] = {
    // {
    //     .iv = 0,
    //     .lvl = 34,
    //     .species = SPECIES_GASTLY,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_GASTLY,
        .moves = {MOVE_SHADOWBALL, MOVE_SNARL, MOVE_SHOCKWAVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerStacy[] = {
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOWBALL, MOVE_SNARL, MOVE_SHOCKWAVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_ChannelerTasha[] = {
    // {
    //     .iv = 0,
    //     .lvl = 33,
    //     .species = SPECIES_GASTLY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 33,
    //     .species = SPECIES_GASTLY,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_HAUNTER,
        .moves = {MOVE_SHADOWBALL, MOVE_SNARL, MOVE_SHOCKWAVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_HikerJeremy[] = {
    {
        .iv = 225,
        .lvl = 25,
        .species = SPECIES_MACHOP,
        .moves = {MOVE_LOWSWEEP, MOVE_MACHPUNCH, MOVE_BULKUP, MOVE_BULLETPUNCH},
    },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_ONIX,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAlma[] = {
    {
        .iv = 248,
        .lvl = 44,
        .species = SPECIES_HORSEA,
        .heldItem = ITEM_DAMP_ROCK,
        .moves = {MOVE_BUBBLEBEAM, MOVE_RAINDANCE, MOVE_ICEBEAM, MOVE_FLIPTURN},
    },
    {
        .iv = 248,
        .lvl = 44,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_SNAPTRAP, MOVE_POWERWHIP, MOVE_POISONJAB, MOVE_STRENGTHSAP},
    },
    {
        .iv = 248,
        .lvl = 44,
        .species = SPECIES_NIDORINA,
        .moves = {MOVE_TOXICSPIKES, MOVE_EARTHPOWER, MOVE_CRUNCH, MOVE_BRICKBREAK},
    },
    {
        .iv = 248,
        .lvl = 44,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_FLASHCANNON, MOVE_TRIATTACK, MOVE_VOLTSWITCH},
    },
    {
        .iv = 250,
        .lvl = 44,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_GUNKSHOT, MOVE_TOXIC, MOVE_RECOVER},
   },
    {
        .iv = 251,
        .lvl = 45,
        .species = SPECIES_SEADRA,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FLIPTURN, MOVE_BUBBLEBEAM, MOVE_DRAGONPULSE, MOVE_ICEBEAM},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerSusie[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_MEOWTH,
    // },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_QUICKATTACK, MOVE_HYPERFANG, MOVE_PURSUIT, MOVE_TAILWHIP},
    },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_QUICKATTACK, MOVE_WINGATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerValerie[] = {
    // {
    //     .iv = 0,
    //     .lvl = 30,
    //     .species = SPECIES_POLIWAG,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_POLIWAG,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_WAKEUPSLAP, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerGwen[] = {
    // {
    //     .iv = 0,
    //     .lvl = 27,
    //     .species = SPECIES_PIDGEY,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 27,
    //     .species = SPECIES_MEOWTH,
    // },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_QUICKATTACK, MOVE_WINGATTACK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_QUICKATTACK, MOVE_BRAVEBIRD, MOVE_FACADE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerVirgil[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperFlint[] = {
    {
        .iv = 225,
        .lvl = 20,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_QUICKATTACK, MOVE_TAILWHIP, MOVE_TACKLE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 14,
    //     .species = SPECIES_EKANS,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerMissy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerIrene[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SEEL,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerDana[] = {
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_ODDISH,
        .moves = {MOVE_GIGADRAIN, MOVE_SLUDGE, MOVE_LEECHSEED, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
        .moves = {MOVE_KNOCKOFF, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 20,
    //     .species = SPECIES_PIDGEY,
    // },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAriana[] = {
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_WHIRLWIND, MOVE_WINGATTACK, MOVE_QUICKATTACK, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 19,
    //     .species = SPECIES_RATTATA,
    // },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_PURSUIT, MOVE_FOCUSENERGY, MOVE_QUICKATTACK, MOVE_HYPERFANG},
    },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_SEEDBOMB, MOVE_GROWTH, MOVE_INGRAIN, MOVE_KNOCKOFF},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerLeah[] = {
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_SEEDBOMB, MOVE_GROWTH, MOVE_INGRAIN, MOVE_KNOCKOFF},
    },
    {
        .iv = 225,
        .lvl = 27,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_SWIFT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_CamperJustin[] = {
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_CRUNCH},
    },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_NIDORINO,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_CRUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerYazmin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_TANGELA,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerKindra[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_ODDISH,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerBecky[] = {
    // {
    //     .iv = 0,
    //     .lvl = 29,
    //     .species = SPECIES_PIKACHU,
    // },
    {
        .iv = 225,
        .lvl = 41,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_CROSSCHOP, MOVE_THUNDERPUNCH, MOVE_NONE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerCelia[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_CLEFAIRY,
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanBrooks[] = {
    {
        .iv = 225,
        .lvl = 24,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONICBOOM, MOVE_FLASHCANNON, MOVE_SHOCKWAVE, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanLamar[] = {
    // {
    //     .iv = 0,
    //     .lvl = 17,
    //     .species = SPECIES_GROWLITHE,
    // },
    {
        .iv = 225,
        .lvl = 24,
        .species = SPECIES_PONYTA,
        .moves = {MOVE_TAKEDOWN, MOVE_FIRESPIN, MOVE_STOMP, MOVE_TAILWHIP},
    },
};

struct TrainerMonItemCustomMoves sParty_TwinsEliAnne[] = {
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_CLEFAIRY,
        .moves = {MOVE_METRONOME, MOVE_MOONBLAST, MOVE_SWIFT, MOVE_HELPINGHAND},
    },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_JIGGLYPUFF,
        .moves = {MOVE_BODYSLAM, MOVE_SING, MOVE_WAKEUPSLAP, MOVE_PLAYROUGH},
    },
};

struct TrainerMonItemCustomMoves sParty_CoolCoupleRayTyra[] = {
    {
        .iv = 100,
        .lvl = 45,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_BODYSLAM, MOVE_DOUBLEKICK, MOVE_POISONSTING},
    },
    {
        .iv = 100,
        .lvl = 45,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_THRASH, MOVE_DOUBLEKICK, MOVE_POISONSTING},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungCoupleGiaJes[] = {
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_NIDORAN_M,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_DOUBLEKICK, MOVE_CRUNCH},
    },
    {
        .iv = 225,
        .lvl = 38,
        .species = SPECIES_NIDORAN_F,
        .moves = {MOVE_SANDTOMB, MOVE_POISONFANG, MOVE_HELPINGHAND, MOVE_CRUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_TwinsKiriJan[] = {
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_CHARMANDER,
        .moves = {MOVE_HEATWAVE, MOVE_DRAGONBREATH, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 225,
        .lvl = 40,
        .species = SPECIES_SQUIRTLE,
        .moves = {MOVE_BUBBLEBEAM, MOVE_AQUAJET, MOVE_ICEFANG, MOVE_NONE},
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya[] = {
    {
        .iv = 249,
        .lvl = 45,
        .species = SPECIES_MEOWTH,
        .heldItem = ITEM_STICK,
        .moves = {MOVE_HELPINGHAND, MOVE_FAKEOUT, MOVE_PAYDAY, MOVE_KNOCKOFF},
    },
    {
        .iv = 250,
        .lvl = 45,
        .species = SPECIES_FARFETCHD,
        .heldItem = ITEM_STICK,
        .moves = {MOVE_PROTECT, MOVE_BRAVEBIRD, MOVE_SWORDSDANCE, MOVE_LEAFBLADE},
    },
    {
        .iv = 249,
        .lvl = 45,
        .species = SPECIES_DUGTRIO,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_HEADBUTT, MOVE_DIG},
    },
    {
        .iv = 248,
        .lvl = 45,
        .species = SPECIES_SEEL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_AQUARING, MOVE_FLIPTURN, MOVE_ICEBEAM, MOVE_AQUATAIL},
    },
    {
        .iv = 253,
        .lvl = 46,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FAKEOUT, MOVE_DRAINPUNCH, MOVE_MACHPUNCH, MOVE_ICEPUNCH},
    },
    {
        .iv = 253,
        .lvl = 46,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FAKEOUT, MOVE_BLAZEKICK, MOVE_HIGHJUMPKICK, MOVE_PROTECT},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungCoupleLeaJed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NINETALES,
    },
};

struct TrainerMonItemCustomMoves sParty_SisAndBroLiaLuc[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_SisAndBroLilIan[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_YoungsterBen3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_EKANS,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterBen4[] = {
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = SPECIES_ARBOK,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterChad2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_SANDSHREW,
    },
};

struct TrainerMonItemCustomMoves sParty_LassReli2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_NIDORAN_F,
    },
};

struct TrainerMonItemCustomMoves sParty_LassReli3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_NIDORINA,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterTimmy2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_ZUBAT,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterTimmy3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_GOLBAT,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterTimmy4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_GOLBAT,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterChad3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
    },
};

struct TrainerMonItemCustomMoves sParty_LassJanice2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_LassJanice3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterChad4[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerFranklin2[] = {
    {
        .iv = 40,
        .lvl = 25,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 40,
        .lvl = 25,
        .species = SPECIES_GRAVELER,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
struct TrainerMonItemCustomMoves sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt42[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HOUNDOUR,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicJaclyn[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHTSHADE, MOVE_CONFUSERAY, MOVE_FUTURESIGHT, MOVE_WISH},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURESIGHT, MOVE_RECOVER, MOVE_REFLECT},
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon[] = {
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_MANKEY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_TuberAmira[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_POLIWAG,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnBreederAlize[] = {
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_MARILL,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerNicolas[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_SWEETSCENT, MOVE_WRAP},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_SLEEPPOWDER, MOVE_STUNSPORE},
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerMadeline[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_GLOOM,
        .moves = {MOVE_PETALDANCE, MOVE_ACID, MOVE_SWEETSCENT, MOVE_POISONPOWDER},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETALDANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUNSPORE},
    },
};

struct TrainerMonItemCustomMoves sParty_AromaLadyNikki[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WEEPINBELL,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacStanly[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
    },
};

struct TrainerMonItemDefaultMoves sParty_LadyJacki[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_HOPPIP,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SKIPLOOM,
        .heldItem = ITEM_STARDUST,
    },
};

struct TrainerMonItemCustomMoves sParty_PainterDaisy[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_DYNAMICPUNCH, MOVE_DIZZYPUNCH, MOVE_FOCUSPUNCH, MOVE_MEGAPUNCH},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerGoon[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_ACIDARMOR, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerGoon2[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_TACKLE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerGoon3[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GRIMER,
    },
};

struct TrainerMonItemCustomMoves sParty_Biker2[] = {DUMMY_TRAINER_MON};

struct TrainerMonItemCustomMoves sParty_BugCatcherAnthony[] = {
    {
        .iv = 224,
        .lvl = 7,
        .species = SPECIES_KAKUNA,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
},
    // {
    //     .iv = 0,
    //     .lvl = 8,
    //     .species = SPECIES_CATERPIE,
    // },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherCharlie[] = {
    {
        .iv = 224,
        .lvl = 9,
        .species = SPECIES_METAPOD,
        .moves = {MOVE_HARDEN, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
    // {
    //     .iv = 0,
    //     .lvl = 7,
    //     .species = SPECIES_CATERPIE,
    // },
    // {
    //     .iv = 0,
    //     .lvl = 7,
    //     .species = SPECIES_METAPOD,
    // },
};

struct TrainerMonItemCustomMoves sParty_TwinsEliAnne2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_JIGGLYPUFF,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterJohnson[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerRicardo[] = {
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISONGAS},
    // },
    // {
    //     .iv = 0,
    //     .lvl = 22,
    //     .species = SPECIES_KOFFING,
    //     .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISONGAS},
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOG, MOVE_CLEARSMOG, MOVE_HEADBUTT, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_BikerJaren[] = {
    // {
    //     .iv = 0,
    //     .lvl = 24,
    //     .species = SPECIES_GRIMER,
    // },
    {
        .iv = 225,
        .lvl = 30,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_KNOCKOFF, MOVE_POISONJAB, MOVE_TOXIC, MOVE_NONE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt43[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MAROWAK,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt44[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SANDSLASH,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt45[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GOLBAT,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt46[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt47[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt48[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HYPNO,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketAdmin[] = {
    {
        .iv = 150,
        .lvl = 52,
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGEBOMB, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_ROCKTOMB},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGEBOMB, MOVE_BITE, MOVE_EARTHQUAKE, MOVE_IRONTAIL},
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGEBOMB, MOVE_GIGADRAIN, MOVE_SLEEPPOWDER, MOVE_STUNSPORE},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketAdmin2[] = {
    {
        .iv = 200,
        .lvl = 53,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_CONFUSERAY, MOVE_SLUDGEBOMB, MOVE_AIRCUTTER, MOVE_SHADOWBALL},
    },
    {
        .iv = 200,
        .lvl = 54,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGEBOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_SHADOWBALL},
    },
    {
        .iv = 200,
        .lvl = 55,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FLAMETHROWER, MOVE_CRUNCH, MOVE_IRONTAIL, MOVE_SHADOWBALL},
    },
};

struct TrainerMonItemCustomMoves sParty_ScientistGideon[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_SCREECH, MOVE_SPARK, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SPARK, MOVE_SONICBOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SCREECH, MOVE_SWIFT, MOVE_SPARK, MOVE_THUNDERWAVE},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_TRIATTACK, MOVE_SPARK, MOVE_THUNDERWAVE, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRIATTACK, MOVE_CONVERSION, MOVE_RECOVER, MOVE_PSYBEAM},
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleAmara[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_SEEL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_DEWGONG,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleMaria[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleAbigail[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_GOLDUCK,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleFinn[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleGarrett[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_WARTORTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanTommy[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltShea[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperBryce[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_SANDSLASH,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerClaire[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_CLEFAIRY,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_AromaLadyViolet[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_BULBASAUR,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_IVYSAUR,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_IVYSAUR,
    },
};

struct TrainerMonItemCustomMoves sParty_TuberAlexis[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KRABBY,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KRABBY,
    },
};

struct TrainerMonItemCustomMoves sParty_TwinsJoyMeg[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_CLEFAIRY,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleTisha[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_KINGLER,
    },
};

struct TrainerMonItemCustomMoves sParty_PainterCelina[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE},
    },
};

struct TrainerMonItemCustomMoves sParty_PainterRayna[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_CROSSCHOP, MOVE_MEGAHORN, MOVE_DOUBLEEDGE, MOVE_SELFDESTRUCT},
    },
};

struct TrainerMonItemDefaultMoves sParty_LadyGillian[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MAREEP,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_FLAAFFY,
        .heldItem = ITEM_NUGGET,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterDestin[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleToby[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_TENTACRUEL,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt49[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_MUK,
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt50[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_MEMENTO, MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_HAZE, MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SELFDESTRUCT},
    },
};

struct TrainerMonItemCustomMoves sParty_TeamRocketGrunt51[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_GLOOM,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMilo[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperChaz[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperHarold[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_HOOTHOOT,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_NOCTOWL,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanTylor[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_QWILFISH,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_QWILFISH,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleMymo[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_WARTORTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleNicole[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_MARILL,
    },
};

struct TrainerMonItemCustomMoves sParty_SisAndBroAvaGeb[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_AromaLadyRose[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_SUNKERN,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_SUNFLORA,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleSamir[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GYARADOS,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleDenise[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_CHINCHOU,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_LANTURN,
    },
};

struct TrainerMonItemCustomMoves sParty_TwinsMiuMia[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_PIKACHU,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerEarl[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacFoster[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GOLEM,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacLarry[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerDaryl[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SUDOWOODO,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacHector[] = {
    {
        .iv = 30,
        .lvl = 49,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 30,
        .lvl = 49,
        .species = SPECIES_KANGASKHAN,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicDario[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODORSLEUTH, MOVE_AGILITY},
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicRodette[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NATU,
        .moves = {MOVE_NIGHTSHADE, MOVE_CONFUSERAY, MOVE_WISH, MOVE_FUTURESIGHT},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_DROWZEE,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCHUP, MOVE_FUTURESIGHT},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCHUP, MOVE_FUTURESIGHT},
    },
};

struct TrainerMonItemCustomMoves sParty_AromaLadyMiah[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_BELLOSSOM,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungCoupleEveJon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_PSYDUCK,
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerMason[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHTSCREEN, MOVE_SPARK, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPIDSPIN, MOVE_TAKEDOWN},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SWIFT, MOVE_LIGHTSCREEN, MOVE_SPARK, MOVE_SONICBOOM},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PINECO,
        .moves = {MOVE_SPIKES, MOVE_BIDE, MOVE_RAPIDSPIN, MOVE_EXPLOSION},
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlJocelyn[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerEvan[] = {
    {
        .iv = 40,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 40,
        .lvl = 48,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 40,
        .lvl = 49,
        .species = SPECIES_URSARING,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacMark2[] = {
    {
        .iv = 90,
        .lvl = 33,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 90,
        .lvl = 33,
        .species = SPECIES_LICKITUNG,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerLogan[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_SLEEPPOWDER, MOVE_POISONPOWDER, MOVE_STUNSPORE, MOVE_CONFUSION},
    },
    {
        .iv = 100,
        .lvl = 40,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGGBOMB, MOVE_STOMP, MOVE_CONFUSION, MOVE_HYPNOSIS},
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerJackson[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_MEGADRAIN, MOVE_BIND, MOVE_INGRAIN},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_CONFUSION, MOVE_POISONPOWDER, MOVE_BARRAGE, MOVE_REFLECT},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGGBOMB, MOVE_SLEEPPOWDER, MOVE_STOMP},
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerBeth[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_GLOOM,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerKatelyn[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_EGGBOMB, MOVE_DEFENSECURL, MOVE_MINIMIZE, MOVE_SOFTBOILED},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerLeroy[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_TAKEDOWN, MOVE_HORNDRILL, MOVE_ROCKBLAST, MOVE_SCARYFACE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZYPUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_CROSSCHOP, MOVE_VITALTHROW, MOVE_REVENGE, MOVE_SEISMICTOSS},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_URSARING,
        .moves = {MOVE_SLASH, MOVE_FEINTATTACK, MOVE_SNORE, MOVE_REST},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerMichelle[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FEINTATTACK, MOVE_BITE},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICEBEAM, MOVE_TAKEDOWN, MOVE_ICYWIND, MOVE_GROWL},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSERAY, MOVE_WILLOWISP, MOVE_GRUDGE},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRESPIN, MOVE_TAKEDOWN},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODORSLEUTH},
    },
};

struct TrainerMonItemCustomMoves sParty_CoolCoupleLexNya[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODYSLAM, MOVE_MILKDRINK, MOVE_GROWL, MOVE_DEFENSECURL},
    },
    {
        .iv = 100,
        .lvl = 52,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_THRASH, MOVE_HORNATTACK, MOVE_PURSUIT, MOVE_SWAGGER},
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacBrandon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_ONIX,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacBenjamin[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCKBLAST, MOVE_ROLLOUT, MOVE_SELFDESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCKBLAST, MOVE_ROCKTHROW, MOVE_SELFDESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCKBLAST, MOVE_ROCKTHROW, MOVE_SELFDESTRUCT},
    },
};

struct TrainerMonItemCustomMoves sParty_PainterEdna[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FAKEOUT, MOVE_EXTREMESPEED, MOVE_PROTECT, MOVE_QUICKATTACK},
    },
};

struct TrainerMonItemCustomMoves sParty_GentlemanClifford[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_GOLDUCK,
    },
};

struct TrainerMonItemCustomMoves sParty_LadySelphy[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_PAYDAY, MOVE_BITE, MOVE_TAUNT, MOVE_TORMENT},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_PAYDAY, MOVE_SCRATCH, MOVE_TORMENT, MOVE_TAUNT},
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacLawson[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GRAVELER,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_MAROWAK,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicLaura[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NATU,
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = SPECIES_NATU,
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = SPECIES_XATU,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnBreederBethany[] = {
    {
        .iv = 30,
        .lvl = 50,
        .species = SPECIES_CHANSEY,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnBreederAllison[] = {
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = SPECIES_CLEFABLE,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherGarret[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_HERACROSS,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherJonah[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_YANMA,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_YANMA,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_BEEDRILL,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherVance[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_VENOMOTH,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterNash[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_VICTREEBEL,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterCordell[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_FARFETCHD,
    },
};

struct TrainerMonItemCustomMoves sParty_LassDalia[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_HOPPIP,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_HOPPIP,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SKIPLOOM,
    },
};

struct TrainerMonItemCustomMoves sParty_LassJoana[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_SNUBBULL,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperRiley[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_HERACROSS,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerMarcy[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PARAS,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_PARASECT,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacLayton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerKelsey2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_NIDORAN_F,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerKelsey3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_NIDORINA,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerKelsey4[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_NIDORINA,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperRicky2[] = {
    {
        .iv = 20,
        .lvl = 22,
        .species = SPECIES_SQUIRTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperRicky3[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_WARTORTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperRicky4[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_WARTORTLE,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperJeff2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperJeff3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperJeff4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerIsabelle2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 20,
        .lvl = 18,
        .species = SPECIES_PIDGEY,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerIsabelle3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerIsabelle4[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_PIDGEOT,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterYasu2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterYasu3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
};

struct TrainerMonItemCustomMoves sParty_EngineerBernie2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
};

struct TrainerMonItemCustomMoves sParty_GamerDarian2[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_VULPIX,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperChris2[] = {
    {
        .iv = 40,
        .lvl = 24,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 40,
        .lvl = 24,
        .species = SPECIES_CHARMANDER,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperChris3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = SPECIES_CHARMELEON,
    },
};

struct TrainerMonItemCustomMoves sParty_CamperChris4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_CHARMELEON,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAlicia2[] = {
    {
        .iv = 40,
        .lvl = 25,
        .species = SPECIES_MEOWTH,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAlicia3[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerAlicia4[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerJeremy2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_ONIX,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacMark3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_LICKITUNG,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacHerman2[] = {
    {
        .iv = 90,
        .lvl = 29,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 90,
        .lvl = 29,
        .species = SPECIES_SLOWBRO,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacHerman3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerTrent2[] = {
    {
        .iv = 60,
        .lvl = 31,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 60,
        .lvl = 31,
        .species = SPECIES_GRAVELER,
    },
};

struct TrainerMonItemCustomMoves sParty_LassMegan2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 40,
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 40,
        .lvl = 21,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = SPECIES_PIKACHU,
    },
};

struct TrainerMonItemCustomMoves sParty_LassMegan3[] = {
    {
        .iv = 80,
        .lvl = 46,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_RAICHU,
    },
};

struct TrainerMonItemCustomMoves sParty_SuperNerdGlenn2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
};

struct TrainerMonItemCustomMoves sParty_GamerRich2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_VULPIX,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerJaren2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_MUK,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanElliot2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_RockerLuca2[] = {
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 60,
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
};

struct TrainerMonItemCustomMoves sParty_BeautySheila2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperRobert2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperRobert3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerSusie2[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerSusie3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerSusie4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PERSIAN,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerLukas2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MUK,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_WEEZING,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperBenny2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperBenny3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMarlon2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMarlon3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BeautyGrace2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_WIGGLYTUFF,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperChester2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_DODUO,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperChester3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerBecky2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = SPECIES_RAICHU,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerBecky3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_RAICHU,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerBecky4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_RAICHU,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya2[] = {
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya3[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya4[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerRuben2[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallCamron2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_BikerJaxon2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MUK,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallIsaiah2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHAMP,
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallCorey2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_MACHAMP,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperJacob2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = SPECIES_SPEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperJacob3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleAlice2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleDarrin2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerMissy2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_PicnickerMissy3[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_FishermanWade2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_MAGIKARP,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleJack2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_SisAndBroLilIan2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_SisAndBroLilIan3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleFinn2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_MANKEY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltShea2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltShea3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia2[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia3[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_TuberAmira2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
    },
};

struct TrainerMonItemCustomMoves sParty_TwinsJoyMeg2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_CLEFAIRY,
    },
};

struct TrainerMonItemCustomMoves sParty_PainterRayna2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_CROSSCHOP, MOVE_MEGAHORN, MOVE_DOUBLEEDGE, MOVE_SELFDESTRUCT},
    },
};

struct TrainerMonItemCustomMoves sParty_YoungsterDestin2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 120,
        .lvl = 53,
        .species = SPECIES_PIDGEOT,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnBreederAlize2[] = {
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = SPECIES_MARILL,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungCoupleGiaJes2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
};

struct TrainerMonItemCustomMoves sParty_YoungCoupleGiaJes3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_NIDOQUEEN,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperMilo2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_PIDGEOT,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperChaz2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_FEAROW,
    },
};

struct TrainerMonItemCustomMoves sParty_BirdKeeperHarold2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_NOCTOWL,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleNicole2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_MARILL,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicJaclyn2[] = {
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_NATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSERAY, MOVE_FUTURESIGHT, MOVE_WISH},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_YAWN},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_KADABRA,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURESIGHT, MOVE_RECOVER, MOVE_REFLECT},
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleSamir2[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = SPECIES_GYARADOS,
    },
};

struct TrainerMonItemCustomMoves sParty_HikerEarl2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_MACHAMP,
    },
};

struct TrainerMonItemCustomMoves sParty_RuinManiacLarry2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_MACHOKE,
    },
};

struct TrainerMonItemCustomMoves sParty_PokemaniacHector2[] = {
    {
        .iv = 150,
        .lvl = 55,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = 150,
        .lvl = 55,
        .species = SPECIES_KANGASKHAN,
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicDario2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_ODORSLEUTH, MOVE_AGILITY},
    },
};

struct TrainerMonItemCustomMoves sParty_PsychicRodette2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_NATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSERAY, MOVE_WISH, MOVE_FUTURESIGHT},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCHUP, MOVE_FUTURESIGHT},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCHUP, MOVE_FUTURESIGHT},
    },
};

struct TrainerMonItemCustomMoves sParty_JugglerMason2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PINECO,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = SPECIES_PINECO,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerNicolas2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_STUNSPORE, MOVE_WRAP},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_RAZORLEAF, MOVE_ACID, MOVE_SLEEPPOWDER, MOVE_SLAM},
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerMadeline2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETALDANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_SLEEPPOWDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETALDANCE, MOVE_MOONLIGHT, MOVE_ACID, MOVE_STUNSPORE},
    },
};

struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy2[] = {
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

struct TrainerMonItemCustomMoves sParty_TamerEvan2[] = {
    {
        .iv = 160,
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 160,
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 160,
        .lvl = 55,
        .species = SPECIES_URSARING,
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerJackson2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SLAM, MOVE_MEGADRAIN, MOVE_BIND, MOVE_INGRAIN},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGGBOMB, MOVE_STUNSPORE, MOVE_REFLECT},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_CONFUSION, MOVE_EGGBOMB, MOVE_SLEEPPOWDER, MOVE_STOMP},
    },
};

struct TrainerMonItemCustomMoves sParty_PkmnRangerKatelyn2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_EGGBOMB, MOVE_DEFENSECURL, MOVE_MINIMIZE, MOVE_SOFTBOILED},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerLeroy2[] = {
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_HORNDRILL, MOVE_ROCKBLAST, MOVE_SCARYFACE},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_HEADBUTT, MOVE_AMNESIA, MOVE_DISABLE},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DIZZYPUNCH, MOVE_BITE, MOVE_ENDURE, MOVE_REVERSAL},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSSCHOP, MOVE_VITALTHROW, MOVE_REVENGE, MOVE_SEISMICTOSS},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_URSARING,
        .moves = {MOVE_SLASH, MOVE_FEINTATTACK, MOVE_SNORE, MOVE_REST},
    },
};

struct TrainerMonItemCustomMoves sParty_CooltrainerMichelle2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_SCREECH, MOVE_FEINTATTACK, MOVE_BITE},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICEBEAM, MOVE_TAKEDOWN, MOVE_ICYWIND, MOVE_SHEERCOLD},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_CONFUSERAY, MOVE_WILLOWISP, MOVE_GRUDGE},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_AGILITY, MOVE_FIRESPIN, MOVE_TAKEDOWN},
    },
    {
        .iv = 220,
        .lvl = 56,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYBEAM, MOVE_STOMP, MOVE_ODORSLEUTH},
    },
};

struct TrainerMonItemCustomMoves sParty_CoolCoupleLexNya2[] = {
    {
        .iv = 220,
        .lvl = 57,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODYSLAM, MOVE_MILKDRINK, MOVE_GROWL, MOVE_DEFENSECURL},
    },
    {
        .iv = 220,
        .lvl = 57,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_TAKEDOWN, MOVE_SCARYFACE, MOVE_PURSUIT, MOVE_SWAGGER},
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherColton2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = SPECIES_METAPOD,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherColton3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
    },
};

struct TrainerMonItemCustomMoves sParty_BugCatcherColton4[] = {
    {
        .iv = 120,
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 120,
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleMatthew2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerMaleTony2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEADRA,
    },
};

struct TrainerMonItemCustomMoves sParty_SwimmerFemaleMelissa2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourLorelei2[] = {
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICEBEAM, MOVE_SURF, MOVE_SIGNALBEAM, MOVE_DOUBLETEAM},
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICEBEAM, MOVE_SURF, MOVE_SUPERSONIC, MOVE_RAINDANCE},
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_DOUBLEEDGE, MOVE_ROCKSLIDE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICEBEAM, MOVE_PSYCHIC, MOVE_LOVELYKISS, MOVE_ATTRACT},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_CHERI_BERRY,
        .moves = {MOVE_ICEBEAM, MOVE_SURF, MOVE_PSYCHIC, MOVE_THUNDER},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourBruno2[] = {
    {
        .lvl = 65,
        .species = SPECIES_STEELIX,
    },
    {
        .lvl = 65,
        .species = SPECIES_HITMONCHAN,
    },
    {
        .lvl = 65,
        .species = SPECIES_HITMONLEE,
    },
    {
        .lvl = 66,
        .species = SPECIES_STEELIX,
    },
    {
        .lvl = 68,
        .species = SPECIES_MACHAMP_GIGA,
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourAgatha2[] = {
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOWBALL, MOVE_PSYCHIC, MOVE_CONFUSERAY, MOVE_HYPNOSIS},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLUDGEBOMB, MOVE_AIRCUTTER, MOVE_SHADOWBALL, MOVE_CONFUSERAY},
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOWBALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ATTRACT},
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SLUDGEBOMB, MOVE_EARTHQUAKE, MOVE_GIGADRAIN, MOVE_DOUBLETEAM},
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_SHADOWBALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SLUDGEBOMB},
    },
};

struct TrainerMonItemCustomMoves sParty_EliteFourLance2[] = {
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERBEAM, MOVE_DRAGONDANCE, MOVE_EARTHQUAKE, MOVE_THUNDERWAVE},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERBEAM, MOVE_EARTHQUAKE, MOVE_DRAGONCLAW, MOVE_FLAMETHROWER},
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERBEAM, MOVE_DRAGONDANCE, MOVE_SURF, MOVE_ICEBEAM},
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYPERBEAM, MOVE_ANCIENTPOWER, MOVE_AERIALACE, MOVE_EARTHQUAKE},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_HYPERBEAM, MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_ICEBEAM},
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionRematchSquirtle[] = {
    {
        .lvl = 72,
        .species = SPECIES_HERACROSS,
    },
    {
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
    },
    {
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
    },
    {
        .lvl = 73,
        .species = SPECIES_ARCANINE_H,
    },
    {
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
    },
    {
        .lvl = 75,
        .species = SPECIES_BLASTOISE_GIGA,
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionRematchBulbasaur[] = {
    {
        .lvl = 72,
        .species = SPECIES_HERACROSS,
    },
    {
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
    },
    {
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
    },
    {
        .lvl = 73,
        .species = SPECIES_GYARADOS,
    },
    {
        .lvl = 73,
        .species = SPECIES_ARCANINE_H,
    },
    {
        .lvl = 75,
        .species = SPECIES_VENUSAUR_GIGA,
    },
};

struct TrainerMonItemCustomMoves sParty_ChampionRematchCharmander[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_COUNTER, MOVE_ROCKTOMB},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOWBALL, MOVE_CALMMIND, MOVE_REFLECT},
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_THUNDERBOLT, MOVE_AERIALACE},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_GIGADRAIN, MOVE_PSYCHIC, MOVE_SLEEPPOWDER, MOVE_LIGHTSCREEN},
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_HYDROPUMP, MOVE_DRAGONDANCE, MOVE_EARTHQUAKE, MOVE_HYPERBEAM},
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_FIREBLAST, MOVE_DRAGONCLAW, MOVE_AERIALACE, MOVE_EARTHQUAKE},
    },
};

struct TrainerMonItemCustomMoves sParty_CueBallPaxton[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_MUK,
    },
};
#endif