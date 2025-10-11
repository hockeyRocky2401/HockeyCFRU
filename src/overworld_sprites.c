#include "../include/global.h"
#include "../include/sprite.h"
#include "../include/gba/defines.h"
#include "../include/constants/event_objects.h"

#define EVENT_OBJ_PAL_TAG_NONE 0x1102
#define gEventObjectBaseOam_16x16 ((const struct OamData*) 0x83A36F8)
#define gEventObjectBaseOam_16x32 ((const struct OamData*) 0x83A3710)
#define gEventObjectBaseOam_32x32 ((const struct OamData*) 0x83A3718)
#define gEventObjectBaseOam_64x64 ((const struct OamData*) 0x83A3720)
#define gEventObjectSpriteOamTables_16x16 ((const struct SubspriteTable*) 0x83A3748)
#define gEventObjectSpriteOamTables_16x32 ((const struct SubspriteTable*) 0x83A379C)
#define gEventObjectSpriteOamTables_32x32 ((const struct SubspriteTable*) 0x83A37F0)
#define gEventObjectSpriteOamTables_64x64 ((const struct SubspriteTable*) 0x83A38D0)
#define gEventObjectImageAnimTable_PlayerNormal ((const union AnimCmd* const*) 0x83A3470)
#define gEventObjectImageAnimTable_Standard ((const union AnimCmd* const*) 0x83A3368)
#define gEventObjectImageAnimTable_Surfing ((const union AnimCmd* const*) 0x83A3584)
#define gEventObjectImageAnimTable_FieldMove ((const union AnimCmd* const*) 0x83A3638)
#define gEventObjectImageAnimTable_Fishing ((const union AnimCmd* const*) 0x83A3668)
#define gEventObjectImageAnimTable_VsSeekerBike ((const union AnimCmd* const*) 0x83A3640)

extern const u8 gEventObjectPic_SamuraiTiles[];
// extern const u8 gEventObjectPic_StreetThugTiles[];
extern const u8 gEventObjectPic_ArcherTiles[];
extern const u8 gEventObjectPic_PetrelTiles[];
extern const u8 gEventObjectPic_ArianaTiles[];
extern const u8 gEventObjectPic_WhitneyTiles[];


static const struct SpriteFrameImage gEventObjectPicTable_Samurai[] =
{
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_SamuraiTiles, 2, 4, 8),
    // overworld_frame(gEventObjectPic_SamuraiTiles, 4, 4, 9),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Samurai =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1116,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Samurai,
    .affineAnims = gDummySpriteAffineAnimTable,
};

// static const struct SpriteFrameImage gEventObjectPicTable_StreetThug[] =
// {
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 0),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 1),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 2),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 3),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 4),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 5),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 6),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 7),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 8),
//     overworld_frame(gEventObjectPic_StreetThugTiles, 4, 4, 9),
// };

// const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_StreetThug =
// {
//     .tileTag = 0xFFFF,
//     // .paletteTag1 = 0x1198,
//     .paletteTag1 = 0x1114,
//     // .paletteTag1 = 0x113C,
//     .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
//     .size = (32 * 32) / 2,
//     .width = 32,
//     .height = 32,
//     .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
//     .inanimate = FALSE,
//     .disableReflectionPaletteLoad = FALSE,
//     .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
//     .gender = MALE, //Can also be FEMALE
//     .oam = gEventObjectBaseOam_32x32,
//     .subspriteTables = gEventObjectSpriteOamTables_32x32,
//     .anims = gEventObjectImageAnimTable_Standard,
//     .images = gEventObjectPicTable_StreetThug,
//     .affineAnims = gDummySpriteAffineAnimTable,
// };

static const struct SpriteFrameImage gEventObjectPicTable_Archer[] =
{
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_ArcherTiles, 2, 4, 8),
    // overworld_frame(gEventObjectPic_SamuraiTiles, 4, 4, 9),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Archer =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1117,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Archer,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_Petrel[] =
{
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_PetrelTiles, 2, 4, 8),
    // overworld_frame(gEventObjectPic_SamuraiTiles, 4, 4, 9),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Petrel =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1118,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = MALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Petrel,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_Ariana[] =
{
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_ArianaTiles, 2, 4, 8),
    // overworld_frame(gEventObjectPic_SamuraiTiles, 4, 4, 9),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Ariana =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x1119,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = FEMALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Ariana,
    .affineAnims = gDummySpriteAffineAnimTable,
};

static const struct SpriteFrameImage gEventObjectPicTable_Whitney[] =
{
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 0),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 1),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 2),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 3),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 4),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 5),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 6),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 7),
    overworld_frame(gEventObjectPic_WhitneyTiles, 2, 4, 8),
    // overworld_frame(gEventObjectPic_SamuraiTiles, 4, 4, 9),
};

const struct EventObjectGraphicsInfo gEventObjectGraphicsInfo_Whitney =
{
    .tileTag = 0xFFFF,
    .paletteTag1 = 0x111A,
    .paletteTag2 = EVENT_OBJ_PAL_TAG_NONE,
    .size = (16 * 32) / 2,
    .width = 16,
    .height = 32,
    .shadowSize = SHADOW_SIZE_S, //Can also be SHADOW_SIZE_S, SHADOW_SIZE_L, or SHADOW_SIZE_XL
    .inanimate = FALSE,
    .disableReflectionPaletteLoad = FALSE,
    .tracks = TRACKS_FOOT, //Can also be TRACKS_TIRE
    .gender = FEMALE, //Can also be FEMALE
    .oam = gEventObjectBaseOam_16x32,
    .subspriteTables = gEventObjectSpriteOamTables_16x32,
    .anims = gEventObjectImageAnimTable_Standard,
    .images = gEventObjectPicTable_Whitney,
    .affineAnims = gDummySpriteAffineAnimTable,
};