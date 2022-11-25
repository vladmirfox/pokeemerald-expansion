// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define FLIP    0
#define NO_FLIP 1

#define DEX_TEXT(name, category)        \
    .description = g##name##PokedexText,  \
    .categoryName = _(category)

#define HEIGHT_WEIGHT(ht, wt)   \
    .height = ht,               \
    .weight = wt

#define DEX_SCALE(mon_scale, mon_offset, trainer_scale, trainer_offset) \
    .pokemonScale = mon_scale,                                          \
    .pokemonOffset = mon_offset,                                        \
    .trainerScale = trainer_scale,                                      \
    .trainerOffset = trainer_offset

#define LEARNSETS(name)                             \
    .levelUpLearnset = s##name##LevelUpLearnset,    \
    .teachableLearnset = s##name##TeachableLearnset

#define FRONT_SPRITE(name, width, height, y_offset, elevation)  \
    .frontPic = gMonFrontPic_##name,                            \
    .frontPicSize = MON_COORDS_SIZE(width,height),              \
    .frontPicYOffset = y_offset,                                \
    .enemyMonElevation = elevation

#define BACK_SPRITE(name, width, height, y_offset)\
    .backPic = gMonBackPic_##name,                \
    .backPicSize = MON_COORDS_SIZE(width,height),  \
    .backPicYOffset = y_offset

#define PALETTES(name)                      \
    .palette = gMonPalette_##name,          \
    .shinyPalette = gMonShinyPalette_##name

#define ICON(name, palId)           \
    .iconSprite = gMonIcon_##name,  \
    .iconPalIndex = palId

#define FOOTPRINT(name) \
    .footprint = gMonFootprint_##name

#define ANIMATIONS(frames, delay, frontId, backId)  \
    .frontAnimFrames = sAnims_##frames,             \
    .frontAnimDelay = delay,                        \
    .frontAnimId = frontId,                         \
    .backAnimId = backId

const struct BaseStats gBaseStats[] =
{
    [SPECIES_NONE] =
    {
        .natDexNum = NATIONAL_DEX_NONE,
        DEX_TEXT(Dummy, "Unknown"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(0, 0),
        LEARNSETS(Bulbasaur),
        FRONT_SPRITE(QuestionMark, 40, 40, 12, 0),
        BACK_SPRITE (QuestionMark, 40, 40, 12),
        PALETTES(QuestionMark),
        ICON(QuestionMark, 0),
        FOOTPRINT(Bulbasaur),
    },

    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BULBASAUR,
        DEX_TEXT(Bulbasaur, "Seed"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(7, 69),
        LEARNSETS(Bulbasaur),
        FRONT_SPRITE(Bulbasaur, 40, 40, 13, 0),
        BACK_SPRITE (Bulbasaur, 56, 40, 12),
        PALETTES(Bulbasaur),
        ICON(Bulbasaur, 4),
        FOOTPRINT(Bulbasaur),
        ANIMATIONS(BULBASAUR, 0, ANIM_V_JUMPS_H_JUMPS, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 63,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_IVYSAUR,
        DEX_TEXT(Ivysaur, "Seed"),
        DEX_SCALE(335, 13, 256, 0),
        HEIGHT_WEIGHT(10, 130),
        LEARNSETS(Ivysaur),
        FRONT_SPRITE(Ivysaur, 56, 48, 9, 0),
        BACK_SPRITE (Ivysaur, 64, 56, 9),
        PALETTES(Ivysaur),
        ICON(Ivysaur, 4),
        FOOTPRINT(Ivysaur),
        ANIMATIONS(IVYSAUR, 0, ANIM_V_STRETCH, BACK_ANIM_H_SLIDE),
    },

#define VENUSAUR_MISC_STATS                 \
        .type1 = TYPE_GRASS,                \
        .type2 = TYPE_POISON,               \
        .catchRate = 45,                    \
        .evYield_SpAttack  = 2,             \
        .evYield_SpDefense = 1,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_GRASS,       \
        .bodyColor = BODY_COLOR_GREEN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_VENUSAUR, \
        LEARNSETS(Venusaur),                \
        FOOTPRINT(Venusaur)

    [SPECIES_VENUSAUR] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 83,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .expYield = 236,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL},
        DEX_TEXT(Venusaur, "Seed"),
        DEX_SCALE(256, 0, 388, 6),
        HEIGHT_WEIGHT(20, 1000),
        FRONT_SPRITE(Venusaur, 56, 48, 9, 0),
        BACK_SPRITE (Venusaur, 64, 56, 9),
        PALETTES(Venusaur),
        ICON(Venusaur, 4),
        ANIMATIONS(VENUSAUR, 0, ANIM_ROTATE_UP_SLAM_DOWN, BACK_ANIM_H_SLIDE),
        VENUSAUR_MISC_STATS,
    },
    [SPECIES_VENUSAUR_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .expYield = 281,
        .abilities = {ABILITY_THICK_FAT, ABILITY_NONE, ABILITY_THICK_FAT},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(VenusaurMega, "Seed"),
        DEX_SCALE(256, 0, 388, 6),
        HEIGHT_WEIGHT(24, 1555),
        FRONT_SPRITE(VenusaurMega, 56, 48, 9, 0),
        BACK_SPRITE (VenusaurMega, 64, 56, 9),
        PALETTES(VenusaurMega),
        ICON(VenusaurMega, 4),
        ANIMATIONS(VENUSAUR, 0, ANIM_V_STRETCH, BACK_ANIM_H_SLIDE),
        VENUSAUR_MISC_STATS,
    },

    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHARMANDER,
        DEX_TEXT(Charmander, "Lizard"),
        DEX_SCALE(444, 18, 256, 0),
        HEIGHT_WEIGHT(6, 85),
        LEARNSETS(Charmander),
        FRONT_SPRITE(Charmander, 48, 48, 10, 0),
        BACK_SPRITE(Charmander, 48, 48,  9),
        PALETTES(Charmander),
        ICON(Charmander, 0),
        FOOTPRINT(Charmander),
        ANIMATIONS(CHARMANDER, 0, ANIM_V_JUMPS_SMALL, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHARMELEON,
        DEX_TEXT(Charmeleon, "Flame"),
        DEX_SCALE(302, 9, 256, 0),
        HEIGHT_WEIGHT(11, 190),
        LEARNSETS(Charmeleon),
        FRONT_SPRITE(Charmeleon, 56, 56,  7, 0),
        BACK_SPRITE(Charmeleon, 56, 48,  8),
        PALETTES(Charmeleon),
        ICON(Charmeleon, 0),
        FOOTPRINT(Charmeleon),
        ANIMATIONS(CHARMELEON, 0, ANIM_BACK_AND_LUNGE, BACK_ANIM_JOLT_RIGHT),
    },

#define CHARIZARD_MISC_STATS                \
        .type1 = TYPE_FIRE,                 \
        .catchRate = 45,                    \
        .evYield_SpAttack  = 3,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_CHARIZARD,\
        DEX_SCALE(256, 1, 302, 3),          \
        LEARNSETS(Charizard),               \
        FOOTPRINT(Charizard)

    [SPECIES_CHARIZARD] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .type2 = TYPE_FLYING,
        .expYield = 240,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        DEX_TEXT(Charizard, "Flame"),
        HEIGHT_WEIGHT(17, 905),
        FRONT_SPRITE(Charizard, 64, 64,  0, 0),
        BACK_SPRITE(Charizard, 64, 64,  1),
        PALETTES(Charizard),
        ICON(Charizard, 0),
        ANIMATIONS(CHARIZARD, 0, ANIM_V_SHAKE, BACK_ANIM_SHAKE_GLOW_RED),
        CHARIZARD_MISC_STATS,
    },
    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .baseHP        = 78,
        .baseAttack    = 130,
        .baseDefense   = 111,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 85,
        .type2 = TYPE_DRAGON,
        .expYield = 285,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_NONE, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_BLACK,
        DEX_TEXT(CharizardMegaX, "Flame"),
        HEIGHT_WEIGHT(17, 1105),
        FRONT_SPRITE(CharizardMegaX, 64, 64,  0, 0),
        BACK_SPRITE(CharizardMegaX, 64, 64,  1),
        PALETTES(CharizardMegaX),
        ICON(CharizardMegaX, 0),
        ANIMATIONS(CHARIZARD_MEGA_X, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        CHARIZARD_MISC_STATS,
    },
    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .baseHP        = 78,
        .baseAttack    = 104,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .type2 = TYPE_FLYING,
        .expYield = 285,
        .abilities = {ABILITY_DROUGHT, ABILITY_DROUGHT, ABILITY_DROUGHT},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        .bodyColor = BODY_COLOR_RED,
        DEX_TEXT(CharizardMegaY, "Flame"),
        HEIGHT_WEIGHT(17, 1005),
        FRONT_SPRITE(CharizardMegaY, 64, 64,  0, 0),
        BACK_SPRITE(CharizardMegaY, 64, 64,  1),
        PALETTES(CharizardMegaY),
        ICON(CharizardMegaY, 0),
        ANIMATIONS(CHARIZARD_MEGA_Y, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        CHARIZARD_MISC_STATS,
    },

    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 44,
        .baseAttack    = 48,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SQUIRTLE,
        DEX_TEXT(Squirtle, "Tiny Turtle"),
        DEX_SCALE(412, 18, 256, 0),
        HEIGHT_WEIGHT(5, 90),
        LEARNSETS(Squirtle),
        FRONT_SPRITE(Squirtle, 40, 48, 11, 0),
        BACK_SPRITE(Squirtle, 48, 48,  9),
        PALETTES(Squirtle),
        ICON(Squirtle, 0),
        FOOTPRINT(Squirtle),
        ANIMATIONS(SQUIRTLE, 0, ANIM_V_JUMPS_SMALL, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 59,
        .baseAttack    = 63,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WARTORTLE,
        DEX_TEXT(Wartortle, "Turtle"),
        DEX_SCALE(332, 10, 256, 0),
        HEIGHT_WEIGHT(10, 225),
        LEARNSETS(Wartortle),
        FRONT_SPRITE(Wartortle, 56, 56,  7, 0),
        BACK_SPRITE(Wartortle, 64, 56,  7),
        PALETTES(Wartortle),
        ICON(Wartortle, 2),
        FOOTPRINT(Wartortle),
        ANIMATIONS(WARTORTLE, 0, ANIM_SHRINK_GROW, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

#define BLASTOISE_MISC_STATS                \
        .type1 = TYPE_WATER,                \
        .type2 = TYPE_WATER,                \
        .catchRate = 45,                    \
        .evYield_SpDefense = 3,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_WATER_1,     \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_BLASTOISE,\
        LEARNSETS(Blastoise),               \
        FOOTPRINT(Blastoise)

    [SPECIES_BLASTOISE] =
    {
        .baseHP        = 79,
        .baseAttack    = 83,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .expYield = 239,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},
        DEX_TEXT(Blastoise, "Shellfish"),
        DEX_SCALE(256, -1, 293, 2),
        HEIGHT_WEIGHT(16, 855),
        FRONT_SPRITE(Blastoise, 64, 64,  3, 0),
        BACK_SPRITE(Blastoise, 64, 56,  7),
        PALETTES(Blastoise),
        ICON(Blastoise, 2),
        ANIMATIONS(BLASTOISE, 50, ANIM_V_SHAKE_TWICE, BACK_ANIM_SHAKE_GLOW_BLUE),
        BLASTOISE_MISC_STATS,
    },
    [SPECIES_BLASTOISE_MEGA] =
    {
        .baseHP        = 79,
        .baseAttack    = 103,
        .baseDefense   = 120,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .expYield = 284,
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(BlastoiseMega, "Shellfish"),
        DEX_SCALE(256, -1, 293, 2),
        HEIGHT_WEIGHT(16, 1011),
        FRONT_SPRITE(BlastoiseMega, 64, 64,  0, 0),
        BACK_SPRITE(BlastoiseMega, 64, 64,  0),
        PALETTES(BlastoiseMega),
        ICON(BlastoiseMega, 2),
        ANIMATIONS(BLASTOISE_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        BLASTOISE_MISC_STATS,
    },

    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 39,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CATERPIE,
        DEX_TEXT(Caterpie, "Worm"),
        DEX_SCALE(549, 22, 256, 0),
        HEIGHT_WEIGHT(3, 29),
        LEARNSETS(Caterpie),
        FRONT_SPRITE(Caterpie, 40, 40, 12, 0),
        BACK_SPRITE(Caterpie, 48, 40, 12),
        PALETTES(Caterpie),
        ICON(Caterpie, 1),
        FOOTPRINT(Caterpie),
        ANIMATIONS(CATERPIE, 0, ANIM_SWING_CONCAVE, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_METAPOD] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_METAPOD,
        DEX_TEXT(Metapod, "Cocoon"),
        DEX_SCALE(350, 18, 256, 0),
        HEIGHT_WEIGHT(7, 99),
        LEARNSETS(Metapod),
        FRONT_SPRITE(Metapod, 40, 40, 14, 0),
        BACK_SPRITE(Metapod, 40, 48,  8),
        PALETTES(Metapod),
        ICON(Metapod, 1),
        FOOTPRINT(Metapod),
        ANIMATIONS(METAPOD, 0, ANIM_SWING_CONCAVE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_BUTTERFREE] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpDefense = 80,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 90,
    #else
        .baseSpAttack  = 80,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BUTTERFREE,
        DEX_TEXT(Butterfree, "Butterfly"),
        DEX_SCALE(312, 2, 256, 0),
        HEIGHT_WEIGHT(11, 320),
        LEARNSETS(Butterfree),
        FRONT_SPRITE(Butterfree, 64, 56, 10, 10),
        BACK_SPRITE(Butterfree, 64, 56,  5),
        PALETTES(Butterfree),
        ICON(Butterfree, 0),
        FOOTPRINT(Butterfree),
        ANIMATIONS(BUTTERFREE, 0, ANIM_H_SLIDE_WOBBLE, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 39,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WEEDLE,
        DEX_TEXT(Weedle, "Hairy Bug"),
        DEX_SCALE(455, 22, 256, 0),
        HEIGHT_WEIGHT(3, 32),
        LEARNSETS(Weedle),
        FRONT_SPRITE(Weedle, 40, 40, 13, 0),
        BACK_SPRITE(Weedle, 56, 56,  7),
        PALETTES(Weedle),
        ICON(Weedle, 2),
        FOOTPRINT(Weedle),
        ANIMATIONS(WEEDLE, 10, ANIM_H_SLIDE_SLOW, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KAKUNA,
        DEX_TEXT(Kakuna, "Cocoon"),
        DEX_SCALE(424, 17, 256, 0),
        HEIGHT_WEIGHT(6, 100),
        LEARNSETS(Kakuna),
        FRONT_SPRITE(Kakuna, 24, 48, 11, 0),
        BACK_SPRITE(Kakuna, 32, 40, 12),
        PALETTES(Kakuna),
        ICON(Kakuna, 2),
        FOOTPRINT(Kakuna),
        ANIMATIONS(KAKUNA, 20, ANIM_GLOW_ORANGE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

#if P_UPDATED_STATS >= GEN_6
    #define BEEDRILL_ATTACK 90
#else
    #define BEEDRILL_ATTACK 80
#endif

#define BEEDRILL_MISC_STATS                 \
        .type1 = TYPE_BUG,                  \
        .type2 = TYPE_POISON,               \
        .catchRate = 45,                    \
        .evYield_Attack    = 2,             \
        .evYield_SpDefense = 1,             \
        .itemRare = ITEM_POISON_BARB,       \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 15,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_BUG,         \
        .eggGroup2 = EGG_GROUP_BUG,         \
        .bodyColor = BODY_COLOR_YELLOW,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_BEEDRILL, \
        DEX_SCALE(366, 2, 256, 0),          \
        LEARNSETS(Beedrill),                \
        FOOTPRINT(Beedrill)

    [SPECIES_BEEDRILL] =
    {
        .baseHP        = 65,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .baseAttack    = BEEDRILL_ATTACK,
        .expYield = 178,
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_SNIPER},
        DEX_TEXT(Beedrill, "Poison Bee"),
        HEIGHT_WEIGHT(10, 295),
        FRONT_SPRITE(Beedrill, 64, 56,  5, 9),
        BACK_SPRITE(Beedrill, 64, 56,  5),
        PALETTES(Beedrill),
        ICON(Beedrill, 2),
        ANIMATIONS(BEEDRILL, 35, ANIM_H_VIBRATE, BACK_ANIM_H_VIBRATE),
        BEEDRILL_MISC_STATS,
    },
    [SPECIES_BEEDRILL_MEGA] =
    {
        .baseHP        = 65,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .baseAttack    = BEEDRILL_ATTACK + 60,
        .expYield = 223,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(BeedrillMega, "Poison Bee"),
        HEIGHT_WEIGHT(14, 405),
        FRONT_SPRITE(BeedrillMega, 64, 64,  2, 5),
        BACK_SPRITE(BeedrillMega, 64, 64,  5),
        PALETTES(BeedrillMega),
        ICON(BeedrillMega, 2),
        ANIMATIONS(BEEDRILL_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        BEEDRILL_MISC_STATS,
    },

    [SPECIES_PIDGEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 56,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PIDGEY,
        DEX_TEXT(Pidgey, "Tiny Bird"),
        DEX_SCALE(508, -3, 256, 0),
        HEIGHT_WEIGHT(3, 18),
        LEARNSETS(Pidgey),
        FRONT_SPRITE(Pidgey, 40, 40, 12, 0),
        BACK_SPRITE(Pidgey, 56, 48, 11),
        PALETTES(Pidgey),
        ICON(Pidgey, 0),
        FOOTPRINT(Pidgey),
        ANIMATIONS(PIDGEY, 0, ANIM_V_STRETCH, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PIDGEOTTO,
        DEX_TEXT(Pidgeotto, "Bird"),
        DEX_SCALE(331, 10, 256, 0),
        HEIGHT_WEIGHT(11, 300),
        LEARNSETS(Pidgeotto),
        FRONT_SPRITE(Pidgeotto, 56, 56,  6, 0),
        BACK_SPRITE(Pidgeotto, 64, 56,  6),
        PALETTES(Pidgeotto),
        ICON(Pidgeotto, 0),
        FOOTPRINT(Pidgeotto),
        ANIMATIONS(PIDGEOTTO, 25, ANIM_V_STRETCH, BACK_ANIM_JOLT_RIGHT),
    },

#if P_UPDATED_STATS >= GEN_6
    #define PIDGEOT_SPEED 101
#else
    #define PIDGEOT_SPEED 91
#endif

#define PIDGEOT_MISC_STATS                  \
        .type1 = TYPE_NORMAL,               \
        .type2 = TYPE_FLYING,               \
        .catchRate = 45,                    \
        .evYield_Speed     = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 15,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_FLYING,      \
        .eggGroup2 = EGG_GROUP_FLYING,      \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_PIDGEOT,  \
        LEARNSETS(Pidgeot),                 \
        FOOTPRINT(Pidgeot)

    [SPECIES_PIDGEOT] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .baseSpeed     = PIDGEOT_SPEED,
        .expYield = 216,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS},
        DEX_TEXT(Pidgeot, "Bird"),
        DEX_SCALE(269, 0, 256, 0),
        HEIGHT_WEIGHT(15, 395),
        FRONT_SPRITE(Pidgeot, 64, 64,  2, 5),
        BACK_SPRITE(Pidgeot, 64, 56,  7),
        PALETTES(Pidgeot),
        ICON(Pidgeot, 0),
        ANIMATIONS(PIDGEOT, 0, ANIM_FRONT_FLIP, BACK_ANIM_TRIANGLE_DOWN),
        PIDGEOT_MISC_STATS,
    },
    [SPECIES_PIDGEOT_MEGA] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .baseSpeed     = PIDGEOT_SPEED + 20,
        .expYield = 261,
        .abilities = {ABILITY_NO_GUARD, ABILITY_NO_GUARD, ABILITY_NO_GUARD},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(PidgeotMega, "Bird"),
        DEX_SCALE(269, 0, 256, 0),
        HEIGHT_WEIGHT(22, 505),
        FRONT_SPRITE(PidgeotMega, 64, 64,  0, 8),
        BACK_SPRITE(PidgeotMega, 64, 64,  7),
        PALETTES(PidgeotMega),
        ICON(PidgeotMega, 0),
        ANIMATIONS(PIDGEOT_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIDGEOT_MISC_STATS,
    },

#define RATTATA_FAMILY_MISC_STATS           \
        .type2 = TYPE_NORMAL,               \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 15,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE

#define RATTATA_MISC_STATS                  \
        .baseHP        = 30,                \
        .baseAttack    = 56,                \
        .baseDefense   = 35,                \
        .baseSpeed     = 72,                \
        .baseSpAttack  = 25,                \
        .baseSpDefense = 35,                \
        .catchRate = 255,                   \
        .expYield = 51,                     \
        .evYield_Speed     = 1,             \
        .natDexNum = NATIONAL_DEX_RATTATA,  \
        FOOTPRINT(Rattata),                 \
        RATTATA_FAMILY_MISC_STATS

    [SPECIES_RATTATA] =
    {
        .type1 = TYPE_NORMAL,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        DEX_TEXT(Rattata, "Mouse"),
        DEX_SCALE(481, 21, 256, 0),
        HEIGHT_WEIGHT(3, 35),
        LEARNSETS(Rattata),
        FRONT_SPRITE(Rattata, 40, 40, 13, 0),
        BACK_SPRITE(Rattata, 64, 56,  7),
        PALETTES(Rattata),
        ICON(Rattata, 2),
        ANIMATIONS(RATTATA, 0, ANIM_RAPID_H_HOPS, BACK_ANIM_V_SHAKE_H_SLIDE),
        RATTATA_MISC_STATS,
    },
    [SPECIES_RATTATA_ALOLAN] =
    {
        .type1 = TYPE_DARK,
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = {ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(RattataAlolan, "Mouse"),
        DEX_SCALE(481, 21, 256, 0),
        HEIGHT_WEIGHT(3, 38),
        LEARNSETS(RattataAlolan),
        FRONT_SPRITE(RattataAlolan, 40, 48, 11, 0),
        BACK_SPRITE(RattataAlolan, 64, 56,  7),
        PALETTES(RattataAlolan),
        ICON(RattataAlolan, 2),
        ANIMATIONS(RATTATA_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        RATTATA_MISC_STATS,
    },

#define RATICATE_MISC_STATS                 \
        .catchRate = 127,                   \
        .expYield = 145,                    \
        .evYield_Speed     = 2,             \
        .natDexNum = NATIONAL_DEX_RATICATE, \
        FOOTPRINT(Raticate),                \
        RATTATA_FAMILY_MISC_STATS

    [SPECIES_RATICATE] =
    {
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .type1 = TYPE_NORMAL,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Raticate, "Mouse"),
        DEX_SCALE(459, 18, 256, 0),
        HEIGHT_WEIGHT(7, 185),
        LEARNSETS(Raticate),
        FRONT_SPRITE(Raticate, 64, 56,  6, 0),
        BACK_SPRITE(Raticate, 64, 48, 10),
        PALETTES(Raticate),
        ICON(Raticate, 2),
        ANIMATIONS(RATICATE, 0, ANIM_FIGURE_8, BACK_ANIM_V_SHAKE_H_SLIDE),
        RATICATE_MISC_STATS,
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .type1 = TYPE_DARK,
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = {ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(RaticateAlolan, "Mouse"),
        DEX_SCALE(459, 18, 256, 0),
        HEIGHT_WEIGHT(7, 255),
        LEARNSETS(RaticateAlolan),
        FRONT_SPRITE(RaticateAlolan, 56, 48,  8, 0),
        BACK_SPRITE(RaticateAlolan, 64, 48,  8),
        PALETTES(RaticateAlolan),
        ICON(RaticateAlolan, 2),
        ANIMATIONS(RATICATE_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        RATICATE_MISC_STATS,
    },

    [SPECIES_SPEAROW] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SPEAROW,
        DEX_TEXT(Spearow, "Tiny Bird"),
        DEX_SCALE(571, 22, 256, 0),
        HEIGHT_WEIGHT(3, 20),
        LEARNSETS(Spearow),
        FRONT_SPRITE(Spearow, 40, 40, 12, 0),
        BACK_SPRITE(Spearow, 56, 56,  6),
        PALETTES(Spearow),
        ICON(Spearow, 0),
        FOOTPRINT(Spearow),
        ANIMATIONS(SPEAROW, 0, ANIM_H_JUMPS, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_FEAROW] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FEAROW,
        DEX_TEXT(Fearow, "Beak"),
        DEX_SCALE(278, 1, 256, 0),
        HEIGHT_WEIGHT(12, 380),
        LEARNSETS(Fearow),
        FRONT_SPRITE(Fearow, 64, 64,  0, 6),
        BACK_SPRITE(Fearow, 64, 56,  4),
        PALETTES(Fearow),
        ICON(Fearow, 0),
        FOOTPRINT(Fearow),
        ANIMATIONS(FEAROW, 2, ANIM_FIGURE_8, BACK_ANIM_JOLT_RIGHT),
    },

    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_EKANS,
        DEX_TEXT(Ekans, "Snake"),
        DEX_SCALE(298, 12, 256, 0),
        HEIGHT_WEIGHT(20, 69),
        LEARNSETS(Ekans),
        FRONT_SPRITE(Ekans, 48, 48, 10, 0),
        BACK_SPRITE(Ekans, 56, 48, 10),
        PALETTES(Ekans),
        ICON(Ekans, 2),
        FOOTPRINT(Ekans),
        ANIMATIONS(EKANS, 30, ANIM_V_STRETCH, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 60,
        .baseDefense   = 69,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 79,
    #if P_UPDATED_STATS >= GEN_7
        .baseAttack    = 95,
    #else
        .baseAttack    = 85,
    #endif
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ARBOK,
        DEX_TEXT(Arbok, "Cobra"),
        DEX_SCALE(256, 0, 296, 2),
        HEIGHT_WEIGHT(35, 650),
        LEARNSETS(Arbok),
        FRONT_SPRITE(Arbok, 64, 64,  1, 0),
        BACK_SPRITE(Arbok, 64, 64,  1),
        PALETTES(Arbok),
        ICON(Arbok, 2),
        FOOTPRINT(Arbok),
        ANIMATIONS(ARBOK, 0, ANIM_V_STRETCH, BACK_ANIM_V_SHAKE),
    },

#if P_UPDATED_STATS >= GEN_6
    #define PIKACHU_BASE_DEFENSES\
        .baseDefense   = 40,     \
        .baseSpDefense = 50
#else
    #define PIKACHU_BASE_DEFENSES\
        .baseDefense   = 30,     \
        .baseSpDefense = 40
#endif

#define PIKACHU_REGULAR_BASE_STATS  \
        .baseHP        = 35,        \
        .baseAttack    = 55,        \
        .baseSpeed     = 90,        \
        .baseSpAttack  = 50,        \
        PIKACHU_BASE_DEFENSES

#define PIKACHU_MISC_STATS                                                  \
        .type1 = TYPE_ELECTRIC,                                             \
        .type2 = TYPE_ELECTRIC,                                             \
        .catchRate = 190,                                                   \
        .expYield = 112,                                                    \
        .evYield_Speed     = 2,                                             \
        .itemRare = ITEM_LIGHT_BALL,                                        \
        .eggCycles = 10,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD}, \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .natDexNum = NATIONAL_DEX_PIKACHU,                                  \
        DEX_SCALE(479, 19, 256, 0),                                         \
        HEIGHT_WEIGHT(4, 60),                                               \
        FOOTPRINT(Pikachu)

    [SPECIES_PIKACHU] =
    {
        PIKACHU_REGULAR_BASE_STATS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .noFlip = FALSE,
        DEX_TEXT(Pikachu, "Mouse"),
        LEARNSETS(Pikachu),
        FRONT_SPRITE(Pikachu, 48, 48,  9, 0),
        BACK_SPRITE(Pikachu, 64, 56,  4),
        PALETTES(Pikachu),
        ICON(Pikachu, 2),
        ANIMATIONS(PIKACHU, 0, ANIM_FLASH_YELLOW, BACK_ANIM_SHAKE_FLASH_YELLOW),
        PIKACHU_MISC_STATS,
    },

#define PIKACHU_COSPLAY_MISC_STATS          \
        PIKACHU_REGULAR_BASE_STATS,         \
        .genderRatio = MON_FEMALE,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        LEARNSETS(Pikachu),                 \
        PIKACHU_MISC_STATS

    [SPECIES_PIKACHU_COSPLAY] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuCosplay, 48, 48,  9, 0),
        BACK_SPRITE(PikachuCosplay, 64, 56,  4),
        PALETTES(PikachuCosplay),
        ICON(PikachuCosplay, 2),
        ANIMATIONS(PIKACHU_COSPLAY, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },
    [SPECIES_PIKACHU_ROCK_STAR] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuRockStar, 48, 48,  9, 0),
        BACK_SPRITE(PikachuRockStar, 64, 56,  4),
        PALETTES(PikachuRockStar),
        ICON(PikachuRockStar, 1),
        ANIMATIONS(PIKACHU_ROCK_STAR, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },
    [SPECIES_PIKACHU_BELLE] =
    {
        .noFlip = TRUE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuBelle, 48, 48,  9, 0),
        BACK_SPRITE(PikachuBelle, 64, 56,  4),
        PALETTES(PikachuBelle),
        ICON(PikachuBelle, 0),
        ANIMATIONS(PIKACHU_BELLE, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },
    [SPECIES_PIKACHU_POP_STAR] =
    {
        .noFlip = TRUE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuPopStar, 48, 48,  9, 0),
        BACK_SPRITE(PikachuPopStar, 64, 56,  4),
        PALETTES(PikachuPopStar),
        ICON(PikachuPopStar, 0),
        ANIMATIONS(PIKACHU_POP_STAR, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },
    [SPECIES_PIKACHU_PH_D] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuPhD, 48, 48,  9, 0),
        BACK_SPRITE(PikachuPhD, 64, 56,  4),
        PALETTES(PikachuPhD),
        ICON(PikachuPhD, 1),
        ANIMATIONS(PIKACHU_PH_D, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },
    [SPECIES_PIKACHU_LIBRE] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Pikachu, "Mouse"), // No official dex entry for this form
        FRONT_SPRITE(PikachuLibre, 48, 48,  9, 0),
        BACK_SPRITE(PikachuLibre, 64, 56,  4),
        PALETTES(PikachuLibre),
        ICON(PikachuLibre, 0),
        ANIMATIONS(PIKACHU_LIBRE, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_COSPLAY_MISC_STATS,
    },

#define PIKACHU_CAP_MISC_STATS              \
        PIKACHU_REGULAR_BASE_STATS,         \
        .genderRatio = MON_MALE,            \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        LEARNSETS(Pikachu),                 \
        PIKACHU_MISC_STATS

    [SPECIES_PIKACHU_ORIGINAL_CAP] =
    {
        .noFlip = TRUE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuOriginalCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuOriginalCap, 64, 56,  4),
        PALETTES(PikachuOriginalCap),
        ICON(PikachuOriginalCap, 0),
        ANIMATIONS(PIKACHU_ORIGINAL_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_HOENN_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuHoennCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuHoennCap, 64, 56,  4),
        PALETTES(PikachuHoennCap),
        ICON(PikachuHoennCap, 0),
        ANIMATIONS(PIKACHU_HOENN_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_SINNOH_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuSinnohCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuSinnohCap, 64, 56,  4),
        PALETTES(PikachuSinnohCap),
        ICON(PikachuSinnohCap, 0),
        ANIMATIONS(PIKACHU_SINNOH_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_UNOVA_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuUnovaCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuUnovaCap, 64, 56,  4),
        PALETTES(PikachuUnovaCap),
        ICON(PikachuUnovaCap, 0),
        ANIMATIONS(PIKACHU_UNOVA_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_KALOS_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuKalosCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuKalosCap, 64, 56,  4),
        PALETTES(PikachuKalosCap),
        ICON(PikachuKalosCap, 0),
        ANIMATIONS(PIKACHU_KALOS_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_ALOLA_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuAlolaCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuAlolaCap, 64, 56,  4),
        PALETTES(PikachuAlolaCap),
        ICON(PikachuAlolaCap, 0),
        ANIMATIONS(PIKACHU_ALOLA_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_PARTNER_CAP] =
    {
        .noFlip = TRUE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuPartnerCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuPartnerCap, 64, 56,  4),
        PALETTES(PikachuPartnerCap),
        ICON(PikachuPartnerCap, 0),
        ANIMATIONS(PIKACHU_PARTNER_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },
    [SPECIES_PIKACHU_WORLD_CAP] =
    {
        .noFlip = FALSE,
        DEX_TEXT(Dummy, "Mouse"),
        FRONT_SPRITE(PikachuWorldCap, 48, 48,  9, 0),
        BACK_SPRITE(PikachuWorldCap, 64, 56,  4),
        PALETTES(PikachuWorldCap),
        ICON(QuestionMark, 0),
        ANIMATIONS(PIKACHU_WORLD_CAP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PIKACHU_CAP_MISC_STATS,
    },

#if P_UPDATED_STATS >= GEN_6
    #define RAICHU_SPEED 110
#else
    #define RAICHU_SPEED 100
#endif

#define RAICHU_MISC_STATS                   \
        .type1 = TYPE_ELECTRIC,             \
        .catchRate = 75,                    \
        .expYield = 218,                    \
        .evYield_Speed     = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 10,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FAIRY,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_RAICHU,   \
        DEX_SCALE(426, 13, 256, 0),         \
        FOOTPRINT(Raichu)

    [SPECIES_RAICHU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .baseSpeed     = RAICHU_SPEED,
        .type2 = TYPE_ELECTRIC,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Raichu, "Mouse"),
        HEIGHT_WEIGHT(8, 300),
        LEARNSETS(Raichu),
        FRONT_SPRITE(Raichu, 64, 64,  3, 0),
        BACK_SPRITE(Raichu, 64, 56,  6),
        PALETTES(Raichu),
        ICON(Raichu, 0),
        ANIMATIONS(RAICHU, 0, ANIM_GROW_VIBRATE, BACK_ANIM_SHAKE_FLASH_YELLOW),
        RAICHU_MISC_STATS,
    },
    [SPECIES_RAICHU_ALOLAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .baseSpeed     = RAICHU_SPEED,
        .type2 = TYPE_PSYCHIC,
        .abilities = {ABILITY_SURGE_SURFER, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        RAICHU_MISC_STATS,
        DEX_TEXT(RaichuAlolan, "Mouse"),
        HEIGHT_WEIGHT(7, 210),
        LEARNSETS(RaichuAlolan),
        FRONT_SPRITE(RaichuAlolan, 64, 64,  0, 4),
        BACK_SPRITE(RaichuAlolan, 56, 56,  6),
        PALETTES(RaichuAlolan),
        ICON(RaichuAlolan, 2),
        ANIMATIONS(RAICHU_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
    },

#define SANDSHREW_FAMILY_MISC_STATS         \
        .itemRare = ITEM_GRIP_CLAW,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE

#define SANDSHREW_MISC_STATS                \
        .catchRate = 255,                   \
        .expYield = 60,                     \
        .evYield_Defense   = 1,             \
        .natDexNum = NATIONAL_DEX_SANDSHREW,\
        DEX_SCALE(365, 18, 256, 0),         \
        FOOTPRINT(Sandshrew),               \
        SANDSHREW_FAMILY_MISC_STATS

    [SPECIES_SANDSHREW] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Sandshrew, "Mouse"),
        HEIGHT_WEIGHT(6, 120),
        LEARNSETS(Sandshrew),
        FRONT_SPRITE(Sandshrew, 48, 48, 11, 0),
        BACK_SPRITE(Sandshrew, 48, 40, 13),
        PALETTES(Sandshrew),
        ICON(Sandshrew, 2),
        ANIMATIONS(SANDSHREW, 0, ANIM_SWING_CONCAVE_FAST_SHORT, BACK_ANIM_CONCAVE_ARC_SMALL),
        SANDSHREW_MISC_STATS,
    },
    [SPECIES_SANDSHREW_ALOLAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .type1 = TYPE_ICE,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(SandshrewAlolan, "Mouse"),
        HEIGHT_WEIGHT(7, 400),
        LEARNSETS(SandshrewAlolan),
        FRONT_SPRITE(SandshrewAlolan, 40, 40, 13, 0),
        BACK_SPRITE(SandshrewAlolan, 56, 40, 13),
        PALETTES(SandshrewAlolan),
        ICON(SandshrewAlolan, 0),
        ANIMATIONS(SANDSHREW_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SANDSHREW_MISC_STATS,
    },

#define SANDSLASH_MISC_STATS                \
        .catchRate = 90,                    \
        .expYield = 158,                    \
        .evYield_Defense   = 2,             \
        .natDexNum = NATIONAL_DEX_SANDSLASH,\
        DEX_SCALE(341, 11, 256, 0),         \
        FOOTPRINT(Sandslash),               \
        SANDSHREW_FAMILY_MISC_STATS

    [SPECIES_SANDSLASH] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Sandslash, "Mouse"),
        HEIGHT_WEIGHT(10, 295),
        LEARNSETS(Sandslash),
        FRONT_SPRITE(Sandslash, 64, 56,  6, 0),
        BACK_SPRITE(Sandslash, 64, 48, 11),
        PALETTES(Sandslash),
        ICON(Sandslash, 2),
        ANIMATIONS(SANDSLASH, 0, ANIM_H_SHAKE, BACK_ANIM_CONCAVE_ARC_LARGE),
        SANDSLASH_MISC_STATS,
    },
    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .type1 = TYPE_ICE,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(SandslashAlolan, "Mouse"),
        HEIGHT_WEIGHT(12, 550),
        LEARNSETS(SandslashAlolan),
        FRONT_SPRITE(SandslashAlolan, 64, 64,  1, 0),
        BACK_SPRITE(SandslashAlolan, 64, 56,  6),
        PALETTES(SandslashAlolan),
        ICON(SandslashAlolan, 0),
        ANIMATIONS(SANDSLASH_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SANDSLASH_MISC_STATS,
    },

    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP        = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDORAN_F,
        DEX_TEXT(NidoranF, "Poison Pin"),
        DEX_SCALE(488, 21, 256, 0),
        HEIGHT_WEIGHT(4, 70),
        LEARNSETS(NidoranF),
        FRONT_SPRITE(NidoranF, 40, 40, 13, 0),
        BACK_SPRITE(NidoranF, 48, 40, 13),
        PALETTES(NidoranF),
        ICON(NidoranF, 0),
        FOOTPRINT(NidoranF),
        ANIMATIONS(NIDORAN_F, 28, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_NIDORINA] =
    {
        .baseHP        = 70,
        .baseAttack    = 62,
        .baseDefense   = 67,
        .baseSpeed     = 56,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 128,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDORINA,
        DEX_TEXT(Nidorina, "Poison Pin"),
        DEX_SCALE(381, 15, 256, 0),
        HEIGHT_WEIGHT(8, 200),
        LEARNSETS(Nidorina),
        FRONT_SPRITE(Nidorina, 48, 48,  8, 0),
        BACK_SPRITE(Nidorina, 56, 56,  5),
        PALETTES(Nidorina),
        ICON(Nidorina, 0),
        FOOTPRINT(Nidorina),
        ANIMATIONS(NIDORINA, 0, ANIM_V_STRETCH, BACK_ANIM_JOLT_RIGHT),
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseDefense   = 87,
        .baseSpeed     = 76,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 92,
    #else
        .baseAttack    = 82,
    #endif
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 227,
        .evYield_HP        = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDOQUEEN,
        DEX_TEXT(Nidoqueen, "Drill"),
        DEX_SCALE(293, 4, 256, 0),
        HEIGHT_WEIGHT(13, 600),
        LEARNSETS(Nidoqueen),
        FRONT_SPRITE(Nidoqueen, 64, 64,  2, 0),
        BACK_SPRITE(Nidoqueen, 64, 56,  5),
        PALETTES(Nidoqueen),
        ICON(Nidoqueen, 2),
        FOOTPRINT(Nidoqueen),
        ANIMATIONS(NIDOQUEEN, 0, ANIM_H_SHAKE, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 46,
        .baseAttack    = 57,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDORAN_M,
        DEX_TEXT(NidoranM, "Poison Pin"),
        DEX_SCALE(511, 20, 256, 0),
        HEIGHT_WEIGHT(5, 90),
        LEARNSETS(NidoranM),
        FRONT_SPRITE(NidoranM, 40, 40, 12, 0),
        BACK_SPRITE(NidoranM, 48, 48,  9),
        PALETTES(NidoranM),
        ICON(NidoranM, 2),
        FOOTPRINT(NidoranM),
        ANIMATIONS(NIDORAN_M, 0, ANIM_GROW_VIBRATE, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 61,
        .baseAttack    = 72,
        .baseDefense   = 57,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 128,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDORINO,
        DEX_TEXT(Nidorino, "Poison Pin"),
        DEX_SCALE(408, 15, 256, 0),
        HEIGHT_WEIGHT(9, 195),
        LEARNSETS(Nidorino),
        FRONT_SPRITE(Nidorino, 56, 48,  8, 0),
        BACK_SPRITE(Nidorino, 64, 56,  8),
        PALETTES(Nidorino),
        ICON(Nidorino, 2),
        FOOTPRINT(Nidorino),
        ANIMATIONS(NIDORINO, 0, ANIM_V_STRETCH, BACK_ANIM_JOLT_RIGHT),
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 81,
        .baseDefense   = 77,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 102,
    #else
        .baseAttack    = 92,
    #endif
        .type1 = TYPE_POISON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NIDOKING,
        DEX_TEXT(Nidoking, "Drill"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(14, 620),
        LEARNSETS(Nidoking),
        FRONT_SPRITE(Nidoking, 64, 64,  2, 0),
        BACK_SPRITE(Nidoking, 64, 64,  2),
        PALETTES(Nidoking),
        ICON(Nidoking, 2),
        FOOTPRINT(Nidoking),
        ANIMATIONS(NIDOKING, 25, ANIM_H_SHAKE, BACK_ANIM_V_SHAKE),
    },

#if P_UPDATED_TYPES >= GEN_6
    #define CLEFAIRY_FAMILY_TYPE TYPE_FAIRY
#else
    #define CLEFAIRY_FAMILY_TYPE TYPE_NORMAL
#endif

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .type1 = CLEFAIRY_FAMILY_TYPE,
        .type2 = CLEFAIRY_FAMILY_TYPE,
        .catchRate = 150,
        .expYield = 113,
        .evYield_HP        = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CLEFAIRY,
        DEX_TEXT(Clefairy, "Fairy"),
        DEX_SCALE(441, 20, 256, 0),
        HEIGHT_WEIGHT(6, 75),
        LEARNSETS(Clefairy),
        FRONT_SPRITE(Clefairy, 40, 40, 12, 0),
        BACK_SPRITE(Clefairy, 56, 40, 14),
        PALETTES(Clefairy),
        ICON(Clefairy, 0),
        FOOTPRINT(Clefairy),
        ANIMATIONS(CLEFAIRY, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpDefense = 90,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 95,
    #else
        .baseSpAttack  = 85,
    #endif
        .type1 = CLEFAIRY_FAMILY_TYPE,
        .type2 = CLEFAIRY_FAMILY_TYPE,
        .catchRate = 25,
        .expYield = 217,
        .evYield_HP        = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CLEFABLE,
        DEX_TEXT(Clefable, "Fairy"),
        DEX_SCALE(256, 5, 256, 0),
        HEIGHT_WEIGHT(13, 400),
        LEARNSETS(Clefable),
        FRONT_SPRITE(Clefable, 56, 56,  6, 0),
        BACK_SPRITE(Clefable, 64, 48, 10),
        PALETTES(Clefable),
        ICON(Clefable, 0),
        FOOTPRINT(Clefable),
        ANIMATIONS(CLEFABLE, 0, ANIM_V_STRETCH, BACK_ANIM_DIP_RIGHT_SIDE),
    },

#define VULPIX_FAMILY_MISC_STATS            \
        .genderRatio = PERCENT_FEMALE(75),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE

#define VULPIX_MISC_STATS                   \
        .baseHP        = 38,                \
        .baseAttack    = 41,                \
        .baseDefense   = 40,                \
        .baseSpeed     = 65,                \
        .baseSpAttack  = 50,                \
        .baseSpDefense = 65,                \
        .catchRate = 190,                   \
        .expYield = 60,                     \
        .evYield_Speed     = 1,             \
        .natDexNum = NATIONAL_DEX_VULPIX,   \
        DEX_SCALE(542, 19, 256, 0),         \
        HEIGHT_WEIGHT(6, 99),               \
        FOOTPRINT(Vulpix),  	            \
        VULPIX_FAMILY_MISC_STATS

    [SPECIES_VULPIX] =
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .itemRare = ITEM_CHARCOAL,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Vulpix, "Fox"),
        LEARNSETS(Vulpix),
        FRONT_SPRITE(Vulpix, 56, 48, 11, 0),
        BACK_SPRITE(Vulpix, 64, 48,  9),
        PALETTES(Vulpix),
        ICON(Vulpix, 5),
        ANIMATIONS(VULPIX, 0, ANIM_V_STRETCH, BACK_ANIM_CONCAVE_ARC_LARGE),
        VULPIX_MISC_STATS,
    },

    [SPECIES_VULPIX_ALOLAN] =
    {
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .itemRare = ITEM_SNOWBALL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(VulpixAlolan, "Fox"),
        LEARNSETS(VulpixAlolan),
        FRONT_SPRITE(VulpixAlolan, 48, 48, 10, 0),
        BACK_SPRITE(VulpixAlolan, 64, 56,  5),
        PALETTES(VulpixAlolan),
        ICON(VulpixAlolan, 2),
        ANIMATIONS(VULPIX_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        VULPIX_MISC_STATS,
    },

#define NINETALES_MISC_STATS                \
        .catchRate = 75,                    \
        .expYield = 177,                    \
        .evYield_Speed     = 1,             \
        .evYield_SpDefense = 1,             \
        .natDexNum = NATIONAL_DEX_NINETALES,\
        DEX_SCALE(339, 10, 256, 0),         \
        HEIGHT_WEIGHT(11, 199),             \
        FOOTPRINT(Ninetales),               \
        VULPIX_FAMILY_MISC_STATS

    [SPECIES_NINETALES] =
    {
        .baseHP        = 73,
        .baseAttack    = 76,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .itemRare = ITEM_CHARCOAL,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Ninetales, "Fox"),
        LEARNSETS(Ninetales),
        FRONT_SPRITE(Ninetales, 64, 64,  3, 0),
        BACK_SPRITE(Ninetales, 64, 56,  5),
        PALETTES(Ninetales),
        ICON(Ninetales, 3),
        ANIMATIONS(NINETALES, 0, ANIM_GROW_VIBRATE, BACK_ANIM_H_VIBRATE),
        NINETALES_MISC_STATS,
    },
    [SPECIES_NINETALES_ALOLAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .type1 = TYPE_ICE,
        .type2 = TYPE_FAIRY,
        .itemRare = ITEM_SNOWBALL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(NinetalesAlolan, "Fox"),
        LEARNSETS(NinetalesAlolan),
        FRONT_SPRITE(NinetalesAlolan, 64, 64,  1, 0),
        BACK_SPRITE(NinetalesAlolan, 64, 56,  5),
        PALETTES(NinetalesAlolan),
        ICON(NinetalesAlolan, 2),
        ANIMATIONS(NINETALES_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        NINETALES_MISC_STATS,
    },

#if P_UPDATED_TYPES >= GEN_6
    #define JIGGLYPUFF_FAMILY_TYPE_2 TYPE_FAIRY
#else
    #define JIGGLYPUFF_FAMILY_TYPE_2 TYPE_NORMAL
#endif

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 115,
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .type1 = TYPE_NORMAL,
        .type2 = JIGGLYPUFF_FAMILY_TYPE_2,
        .catchRate = 170,
        .expYield = 95,
        .evYield_HP        = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_JIGGLYPUFF,
        DEX_TEXT(Jigglypuff, "Balloon"),
        DEX_SCALE(433, 2, 256, 0),
        HEIGHT_WEIGHT(5, 55),
        LEARNSETS(Jigglypuff),
        FRONT_SPRITE(Jigglypuff, 40, 40, 14, 0),
        BACK_SPRITE(Jigglypuff, 56, 48, 12),
        PALETTES(Jigglypuff),
        ICON(Jigglypuff, 0),
        FOOTPRINT(Jigglypuff),
        ANIMATIONS(JIGGLYPUFF, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 140,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpDefense = 50,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 85,
    #else
        .baseSpAttack  = 75,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = JIGGLYPUFF_FAMILY_TYPE_2,
        .catchRate = 50,
        .expYield = 196,
        .evYield_HP        = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_WIGGLYTUFF,
        DEX_TEXT(Wigglytuff, "Balloon"),
        DEX_SCALE(328, 11, 256, 0),
        HEIGHT_WEIGHT(10, 120),
        LEARNSETS(Wigglytuff),
        FRONT_SPRITE(Wigglytuff, 48, 64,  4, 0),
        BACK_SPRITE(Wigglytuff, 56, 64,  0),
        PALETTES(Wigglytuff),
        ICON(Wigglytuff, 0),
        FOOTPRINT(Wigglytuff),
        ANIMATIONS(WIGGLYTUFF, 0, ANIM_H_JUMPS, BACK_ANIM_GROW),
    },

    [SPECIES_ZUBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ZUBAT,
        DEX_TEXT(Zubat, "Bat"),
        DEX_SCALE(362, -5, 256, 0),
        HEIGHT_WEIGHT(8, 75),
        LEARNSETS(Zubat),
        FRONT_SPRITE(Zubat, 56, 48, 16, 16),
        BACK_SPRITE(Zubat, 56, 56,  7),
        PALETTES(Zubat),
        ICON(Zubat, 2),
        FOOTPRINT(Zubat),
        ANIMATIONS(ZUBAT, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GOLBAT,
        DEX_TEXT(Golbat, "Bat"),
        DEX_SCALE(256, 1, 256, 0),
        HEIGHT_WEIGHT(16, 550),
        LEARNSETS(Golbat),
        FRONT_SPRITE(Golbat, 64, 56,  7, 10),
        BACK_SPRITE(Golbat, 56, 40, 13),
        PALETTES(Golbat),
        ICON(Golbat, 2),
        FOOTPRINT(Golbat),
        ANIMATIONS(GOLBAT, 0, ANIM_H_SLIDE_WOBBLE, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ODDISH,
        DEX_TEXT(Oddish, "Weed"),
        DEX_SCALE(423, 19, 256, 0),
        HEIGHT_WEIGHT(5, 54),
        LEARNSETS(Oddish),
        FRONT_SPRITE(Oddish, 40, 40, 14, 0),
        BACK_SPRITE(Oddish, 48, 48, 10),
        PALETTES(Oddish),
        ICON(Oddish, 4),
        FOOTPRINT(Oddish),
        ANIMATIONS(ODDISH, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_STENCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GLOOM,
        DEX_TEXT(Gloom, "Weed"),
        DEX_SCALE(329, 13, 256, 0),
        HEIGHT_WEIGHT(8, 86),
        LEARNSETS(Gloom),
        FRONT_SPRITE(Gloom, 56, 48, 11, 0),
        BACK_SPRITE(Gloom, 64, 48, 11),
        PALETTES(Gloom),
        ICON(Gloom, 0),
        FOOTPRINT(Gloom),
        ANIMATIONS(GLOOM, 0, ANIM_V_SQUISH_AND_BOUNCE_SLOW, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpDefense = 90,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 110,
    #else
        .baseSpAttack  = 100,
    #endif
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VILEPLUME,
        DEX_TEXT(Vileplume, "Flower"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(12, 186),
        LEARNSETS(Vileplume),
        FRONT_SPRITE(Vileplume, 56, 56,  7, 0),
        BACK_SPRITE(Vileplume, 64, 56,  6),
        PALETTES(Vileplume),
        ICON(Vileplume, 0),
        FOOTPRINT(Vileplume),
        ANIMATIONS(VILEPLUME, 0, ANIM_V_SHAKE_TWICE, BACK_ANIM_SHRINK_GROW_VIBRATE),
    },

    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 57,
        .evYield_Attack    = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PARAS,
        DEX_TEXT(Paras, "Mushroom"),
        DEX_SCALE(593, 22, 256, 0),
        HEIGHT_WEIGHT(3, 54),
        LEARNSETS(Paras),
        FRONT_SPRITE(Paras, 48, 40, 14, 0),
        BACK_SPRITE(Paras, 64, 32, 18),
        PALETTES(Paras),
        ICON(Paras, 0),
        FOOTPRINT(Paras),
        ANIMATIONS(PARAS, 10, ANIM_H_SLIDE_SLOW, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 142,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PARASECT,
        DEX_TEXT(Parasect, "Mushroom"),
        DEX_SCALE(307, 8, 256, 0),
        HEIGHT_WEIGHT(10, 295),
        LEARNSETS(Parasect),
        FRONT_SPRITE(Parasect, 56, 56,  7, 0),
        BACK_SPRITE(Parasect, 64, 40, 13),
        PALETTES(Parasect),
        ICON(Parasect, 0),
        FOOTPRINT(Parasect),
        ANIMATIONS(PARASECT, 45, ANIM_H_SHAKE, BACK_ANIM_H_SHAKE),
    },

    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VENONAT,
        DEX_TEXT(Venonat, "Insect"),
        DEX_SCALE(360, 0, 256, -1),
        HEIGHT_WEIGHT(10, 300),
        LEARNSETS(Venonat),
        FRONT_SPRITE(Venonat, 40, 56,  8, 0),
        BACK_SPRITE(Venonat, 64, 56,  5),
        PALETTES(Venonat),
        ICON(Venonat, 2),
        FOOTPRINT(Venonat),
        ANIMATIONS(VENONAT, 20, ANIM_V_JUMPS_H_JUMPS, BACK_ANIM_V_SHAKE_H_SLIDE),
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VENOMOTH,
        DEX_TEXT(Venomoth, "Poison Moth"),
        DEX_SCALE(285, 2, 256, 1),
        HEIGHT_WEIGHT(15, 125),
        LEARNSETS(Venomoth),
        FRONT_SPRITE(Venomoth, 64, 48,  9, 16),
        BACK_SPRITE(Venomoth, 64, 56,  4),
        PALETTES(Venomoth),
        ICON(Venomoth, 2),
        FOOTPRINT(Venomoth),
        ANIMATIONS(VENOMOTH, 0, ANIM_ZIGZAG_SLOW, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

#define DIGLETT_FAMILY_MISC_STATS           \
        .type1 = TYPE_GROUND,               \
        .itemRare = ITEM_SOFT_SAND,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_BROWN

#define DIGLETT_MISC_STATS                  \
        .catchRate = 255,                   \
        .expYield = 53,                     \
        .evYield_Speed     = 1,             \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_DIGLETT,  \
        FOOTPRINT(Diglett),                 \
        DIGLETT_FAMILY_MISC_STATS

    [SPECIES_DIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE},
        DEX_TEXT(Diglett, "Mole"),
        DEX_SCALE(833, 25, 256, 0),
        HEIGHT_WEIGHT(2, 8),
        LEARNSETS(Diglett),
        FRONT_SPRITE(Diglett, 32, 32, 17, 0),
        BACK_SPRITE(Diglett, 40, 40, 14),
        PALETTES(Diglett),
        ICON(Diglett, 2),
        ANIMATIONS(DIGLETT, 25, ANIM_V_SHAKE, BACK_ANIM_V_SHAKE),
        DIGLETT_MISC_STATS,
    },
    [SPECIES_DIGLETT_ALOLAN] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE},
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(DiglettAlolan, "Mole"),
        DEX_SCALE(833, 25, 256, 0),
        HEIGHT_WEIGHT(2, 10),
        LEARNSETS(DiglettAlolan),
        FRONT_SPRITE(DiglettAlolan, 32, 40, 19, 0),
        BACK_SPRITE(DiglettAlolan, 40, 48, 14),
        PALETTES(DiglettAlolan),
        ICON(DiglettAlolan, 2),
        ANIMATIONS(DIGLETT_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        DIGLETT_MISC_STATS,
    },

#define DUGTRIO_MISC_STATS                  \
        .catchRate = 50,                    \
        .expYield = 149,                    \
        .evYield_Speed     = 2,             \
        .natDexNum = NATIONAL_DEX_DUGTRIO,  \
        FOOTPRINT(Dugtrio),                 \
        DIGLETT_FAMILY_MISC_STATS

#if P_UPDATED_STATS >= GEN_7
    #define DUGTRIO_ATTACK 100
#else
    #define DUGTRIO_ATTACK 80
#endif

    [SPECIES_DUGTRIO] =
    {
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE},
        .noFlip = TRUE,
        DEX_TEXT(Dugtrio, "Mole"),
        DEX_SCALE(406, 18, 256, 0),
        HEIGHT_WEIGHT(7, 333),
        LEARNSETS(Dugtrio),
        FRONT_SPRITE(Dugtrio, 48, 48, 11, 0),
        BACK_SPRITE(Dugtrio, 48, 32, 17),
        PALETTES(Dugtrio),
        ICON(Dugtrio, 2),
        ANIMATIONS(DUGTRIO, 35, ANIM_H_SHAKE_SLOW, BACK_ANIM_V_SHAKE),
        DUGTRIO_MISC_STATS,
    },
    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .baseHP        = 35,
        .baseAttack    = DUGTRIO_ATTACK,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE},
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(DugtrioAlolan, "Mole"),
        DEX_SCALE(406, 18, 256, 0),
        HEIGHT_WEIGHT(7, 666),
        LEARNSETS(DugtrioAlolan),
        FRONT_SPRITE(DugtrioAlolan, 48, 48, 11, 0),
        BACK_SPRITE(DugtrioAlolan, 64, 32, 17),
        PALETTES(DugtrioAlolan),
        ICON(DugtrioAlolan, 2),
        ANIMATIONS(DUGTRIO_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        DUGTRIO_MISC_STATS,
    },

#define MEOWTH_MISC_STATS                   \
        .catchRate = 255,                   \
        .expYield = 58,                     \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MEOWTH,   \
        FOOTPRINT(Meowth)

    [SPECIES_MEOWTH] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Speed     = 1,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = {ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Meowth, "Scratch Cat"),
        DEX_SCALE(480, 19, 256, 0),
        HEIGHT_WEIGHT(4, 42),
        LEARNSETS(Meowth),
        FRONT_SPRITE(Meowth, 48, 48, 10, 0),
        BACK_SPRITE(Meowth, 56, 56,  6),
        PALETTES(Meowth),
        ICON(Meowth, 1),
        ANIMATIONS(MEOWTH, 40, ANIM_V_JUMPS_SMALL, BACK_ANIM_CONCAVE_ARC_LARGE),
        MEOWTH_MISC_STATS,
    },
    [SPECIES_MEOWTH_ALOLAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .evYield_Speed     = 1,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .itemRare = ITEM_QUICK_CLAW,
        .abilities = {ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_GRAY,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(MeowthAlolan, "Scratch Cat"),
        DEX_SCALE(480, 19, 256, 0),
        HEIGHT_WEIGHT(4, 42),
        LEARNSETS(MeowthAlolan),
        FRONT_SPRITE(MeowthGalarian, 48, 48,  8, 0),
        BACK_SPRITE(MeowthAlolan, 64, 56,  7),
        PALETTES(MeowthGalarian),
        ICON(MeowthAlolan, 2),
        ANIMATIONS(MEOWTH_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        MEOWTH_MISC_STATS,
    },
    [SPECIES_MEOWTH_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .evYield_Attack    = 1,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Scratch Cat"),
        DEX_SCALE(480, 19, 256, 0),
        HEIGHT_WEIGHT(4, 75),
        LEARNSETS(MeowthGalarian),
        FRONT_SPRITE(MeowthAlolan, 48, 48,  9, 0),
        BACK_SPRITE(MeowthGalarian, 64, 56,  8),
        PALETTES(MeowthAlolan),
        ICON(MeowthGalarian, 0),
        ANIMATIONS(MEOWTH_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        MEOWTH_MISC_STATS,
    },

#define PERSIAN_MISC_STATS                  \
        .catchRate = 90,                    \
        .expYield = 154,                    \
        .evYield_Speed     = 2,             \
        .itemRare = ITEM_QUICK_CLAW,        \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_PERSIAN,  \
        FOOTPRINT(Persian)

    [SPECIES_PERSIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .abilities = {ABILITY_LIMBER, ABILITY_TECHNICIAN, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        DEX_TEXT(Persian, "Classy Cat"),
        DEX_SCALE(320, 10, 256, 0),
        HEIGHT_WEIGHT(10, 320),
        LEARNSETS(Persian),
        FRONT_SPRITE(Persian, 64, 56,  4, 0),
        BACK_SPRITE(Persian, 64, 56,  7),
        PALETTES(Persian),
        ICON(Persian, 1),
        ANIMATIONS(PERSIAN, 20, ANIM_V_STRETCH, BACK_ANIM_TRIANGLE_DOWN),
        PERSIAN_MISC_STATS,
    },
    [SPECIES_PERSIAN_ALOLAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_GRAY,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(PersianAlolan, "Classy Cat"),
        DEX_SCALE(339, 10, 256, 0),
        HEIGHT_WEIGHT(11, 330),
        LEARNSETS(PersianAlolan),
        FRONT_SPRITE(PersianAlolan, 56, 56,  4, 0),
        BACK_SPRITE(PersianAlolan, 64, 56,  8),
        PALETTES(PersianAlolan),
        ICON(PersianAlolan, 2),
        ANIMATIONS(PERSIAN_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PERSIAN_MISC_STATS,
    },

    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 50,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PSYDUCK,
        DEX_TEXT(Psyduck, "Duck"),
        DEX_SCALE(369, 15, 256, 0),
        HEIGHT_WEIGHT(8, 196),
        LEARNSETS(Psyduck),
        FRONT_SPRITE(Psyduck, 40, 48, 11, 0),
        BACK_SPRITE(Psyduck, 48, 48,  9),
        PALETTES(Psyduck),
        ICON(Psyduck, 1),
        FOOTPRINT(Psyduck),
        ANIMATIONS(PSYDUCK, 0, ANIM_V_JUMPS_H_JUMPS, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 78,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 175,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GOLDUCK,
        DEX_TEXT(Golduck, "Duck"),
        DEX_SCALE(256, 1, 273, 1),
        HEIGHT_WEIGHT(17, 766),
        LEARNSETS(Golduck),
        FRONT_SPRITE(Golduck, 64, 64,  2, 0),
        BACK_SPRITE(Golduck, 64, 64,  3),
        PALETTES(Golduck),
        ICON(Golduck, 0),
        FOOTPRINT(Golduck),
        ANIMATIONS(GOLDUCK, 0, ANIM_H_SHAKE_SLOW, BACK_ANIM_SHRINK_GROW_VIBRATE),
    },

    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MANKEY,
        DEX_TEXT(Mankey, "Pig Monkey"),
        DEX_SCALE(404, 19, 256, 0),
        HEIGHT_WEIGHT(5, 280),
        LEARNSETS(Mankey),
        FRONT_SPRITE(Mankey, 56, 48, 11, 0),
        BACK_SPRITE(Mankey, 64, 48,  8),
        PALETTES(Mankey),
        ICON(Mankey, 1),
        FOOTPRINT(Mankey),
        ANIMATIONS(MANKEY, 20, ANIM_H_JUMPS_V_STRETCH, BACK_ANIM_CONCAVE_ARC_LARGE),
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PRIMEAPE,
        DEX_TEXT(Primeape, "Pig Monkey"),
        DEX_SCALE(326, 10, 256, 0),
        HEIGHT_WEIGHT(10, 320),
        LEARNSETS(Primeape),
        FRONT_SPRITE(Primeape, 64, 56,  6, 0),
        BACK_SPRITE(Primeape, 64, 48, 10),
        PALETTES(Primeape),
        ICON(Primeape, 2),
        FOOTPRINT(Primeape),
        ANIMATIONS(PRIMEAPE, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_CONCAVE_ARC_LARGE),
    },

#define GROWLITHE_FAMILY_MISC_STATS                                                 \
        .type1 = TYPE_FIRE,                                                         \
        .genderRatio = PERCENT_FEMALE(25),                                          \
        .eggCycles = 20,                                                            \
        .friendship = 70,                                                           \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroup1 = EGG_GROUP_FIELD,                                               \
        .eggGroup2 = EGG_GROUP_FIELD,                                               \
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED},   \
        .bodyColor = BODY_COLOR_BROWN,                                              \
        .noFlip = FALSE

#define GROWLITHE_MISC_STATS                \
        .catchRate = 190,                   \
        .expYield = 91,                     \
        .evYield_Attack    = 1,             \
        .natDexNum = NATIONAL_DEX_GROWLITHE,\
        DEX_SCALE(346, 14, 256, 0),         \
        FOOTPRINT(Growlithe),               \
        GROWLITHE_FAMILY_MISC_STATS

    [SPECIES_GROWLITHE] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .type2 = TYPE_FIRE,
        DEX_TEXT(Growlithe, "Puppy"),
        HEIGHT_WEIGHT(7, 190),
        LEARNSETS(Growlithe),
        FRONT_SPRITE(Growlithe, 48, 48, 11, 0),
        BACK_SPRITE(Growlithe, 48, 56,  8),
        PALETTES(Growlithe),
        ICON(Growlithe, 3),
        ANIMATIONS(GROWLITHE, 30, ANIM_BACK_AND_LUNGE, BACK_ANIM_JOLT_RIGHT),
        GROWLITHE_MISC_STATS,
    },
    [SPECIES_GROWLITHE_HISUIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .type2 = TYPE_ROCK,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Scout"),
        HEIGHT_WEIGHT(8, 227),
        LEARNSETS(GrowlitheHisuian),
        FRONT_SPRITE(GrowlitheHisuian, 48, 48,  6, 0),
        BACK_SPRITE(GrowlitheHisuian, 56, 56,  8),
        PALETTES(GrowlitheHisuian),
        ICON(GrowlitheHisuian, 0),
        ANIMATIONS(GROWLITHE_HISUIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        GROWLITHE_MISC_STATS,
    },

#define ARCANINE_MISC_STATS                 \
        .catchRate = 75,                    \
        .expYield = 213,                    \
        .evYield_Attack    = 2,             \
        .natDexNum = NATIONAL_DEX_ARCANINE, \
        DEX_SCALE(256, 1, 312, 0),          \
        FOOTPRINT(Arcanine),                \
        GROWLITHE_FAMILY_MISC_STATS

    [SPECIES_ARCANINE] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .type2 = TYPE_FIRE,
        DEX_TEXT(Arcanine, "Legendary"),
        HEIGHT_WEIGHT(19, 1550),
        LEARNSETS(Arcanine),
        FRONT_SPRITE(Arcanine, 64, 64,  2, 0),
        BACK_SPRITE(Arcanine, 64, 56,  4),
        PALETTES(Arcanine),
        ICON(Arcanine, 3),
        ANIMATIONS(ARCANINE, 40, ANIM_H_SHAKE, BACK_ANIM_JOLT_RIGHT),
        ARCANINE_MISC_STATS,
    },
    [SPECIES_ARCANINE_HISUIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .type2 = TYPE_ROCK,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Legendary"),
        HEIGHT_WEIGHT(20, 1680),
        LEARNSETS(ArcanineHisuian),
        FRONT_SPRITE(ArcanineHisuian, 64, 64,  2, 0),
        BACK_SPRITE(ArcanineHisuian, 64, 64,  3),
        PALETTES(ArcanineHisuian),
        ICON(ArcanineHisuian, 0),
        ANIMATIONS(ARCANINE_HISUIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ARCANINE_MISC_STATS,
    },

    [SPECIES_POLIWAG] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWAG,
        DEX_TEXT(Poliwag, "Tadpole"),
        DEX_SCALE(369, 20, 256, 0),
        HEIGHT_WEIGHT(6, 124),
        LEARNSETS(Poliwag),
        FRONT_SPRITE(Poliwag, 64, 40, 13, 0),
        BACK_SPRITE(Poliwag, 48, 32, 18),
        PALETTES(Poliwag),
        ICON(Poliwag, 0),
        FOOTPRINT(Poliwag),
        ANIMATIONS(POLIWAG, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 120,
        .expYield = 135,
        .evYield_Speed     = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWHIRL,
        DEX_TEXT(Poliwhirl, "Tadpole"),
        DEX_SCALE(288, 11, 256, 0),
        HEIGHT_WEIGHT(10, 200),
        LEARNSETS(Poliwhirl),
        FRONT_SPRITE(Poliwhirl, 64, 48,  9, 0),
        BACK_SPRITE(Poliwhirl, 64, 40, 13),
        PALETTES(Poliwhirl),
        ICON(Poliwhirl, 0),
        FOOTPRINT(Poliwhirl),
        ANIMATIONS(POLIWHIRL, 5, ANIM_H_JUMPS_V_STRETCH, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 90,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 95,
    #else
        .baseAttack    = 85,
    #endif
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 230,
        .evYield_Defense   = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLIWRATH,
        DEX_TEXT(Poliwrath, "Tadpole"),
        DEX_SCALE(256, 6, 256, 0),
        HEIGHT_WEIGHT(13, 540),
        LEARNSETS(Poliwrath),
        FRONT_SPRITE(Poliwrath, 64, 56,  6, 0),
        BACK_SPRITE(Poliwrath, 64, 56,  7),
        PALETTES(Poliwrath),
        ICON(Poliwrath, 0),
        FOOTPRINT(Poliwrath),
        ANIMATIONS(POLIWRATH, 0, ANIM_V_SHAKE_TWICE, BACK_ANIM_V_SHAKE_LOW),
    },

    [SPECIES_ABRA] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 200,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ABRA,
        DEX_TEXT(Abra, "Psi"),
        DEX_SCALE(363, 14, 256, 0),
        HEIGHT_WEIGHT(9, 195),
        LEARNSETS(Abra),
        FRONT_SPRITE(Abra, 56, 48, 10, 0),
        BACK_SPRITE(Abra, 56, 48, 12),
        PALETTES(Abra),
        ICON(Abra, 2),
        FOOTPRINT(Abra),
        ANIMATIONS(ABRA, 0, ANIM_H_JUMPS, BACK_ANIM_SHRINK_GROW_VIBRATE),
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 100,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_KADABRA,
        DEX_TEXT(Kadabra, "Psi"),
        DEX_SCALE(256, 3, 256, 0),
        HEIGHT_WEIGHT(13, 565),
        LEARNSETS(Kadabra),
        FRONT_SPRITE(Kadabra, 64, 56,  5, 0),
        BACK_SPRITE(Kadabra, 64, 48,  8),
        PALETTES(Kadabra),
        ICON(Kadabra, 2),
        FOOTPRINT(Kadabra),
        ANIMATIONS(KADABRA, 0, ANIM_GROW_VIBRATE, BACK_ANIM_SHRINK_GROW_VIBRATE),
    },

#if P_UPDATED_STATS >= GEN_6
    #define ALAKAZAM_SP_DEF 95
#else
    #define ALAKAZAM_SP_DEF 85
#endif

#define ALAKAZAM_MISC_STATS                 \
        .type1 = TYPE_PSYCHIC,              \
        .type2 = TYPE_PSYCHIC,              \
        .catchRate = 50,                    \
        .evYield_SpAttack  = 3,             \
        .itemRare = ITEM_TWISTED_SPOON,     \
        .genderRatio = PERCENT_FEMALE(25),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,  \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_ALAKAZAM, \
        LEARNSETS(Alakazam),                \
        FOOTPRINT(Alakazam)

    [SPECIES_ALAKAZAM] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        .baseSpDefense = ALAKAZAM_SP_DEF,
        .expYield = 225,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        DEX_TEXT(Alakazam, "Psi"),
        DEX_SCALE(480, 3, 256, 0),
        HEIGHT_WEIGHT(15, 480),
        FRONT_SPRITE(Alakazam, 64, 64,  2, 0),
        BACK_SPRITE(Alakazam, 64, 56,  6),
        PALETTES(Alakazam),
        ICON(Alakazam, 2),
        ANIMATIONS(ALAKAZAM, 0, ANIM_GROW_VIBRATE, BACK_ANIM_GROW_STUTTER),
        ALAKAZAM_MISC_STATS,
    },
    [SPECIES_ALAKAZAM_MEGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        .baseSpDefense = ALAKAZAM_SP_DEF + 10,
        .expYield = 270,
        .abilities = {ABILITY_TRACE, ABILITY_TRACE, ABILITY_TRACE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(AlakazamMega, "Psi"),
        DEX_SCALE(480, -5, 256, 0),
        HEIGHT_WEIGHT(12, 480),
        ALAKAZAM_MISC_STATS,
        FRONT_SPRITE(AlakazamMega, 64, 64,  0, 7),
        BACK_SPRITE(AlakazamMega, 64, 64,  0),
        PALETTES(AlakazamMega),
        ICON(AlakazamMega, 2),
        ANIMATIONS(ALAKAZAM_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
    },

    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MACHOP,
        DEX_TEXT(Machop, "Superpower"),
        DEX_SCALE(342, 14, 256, 0),
        HEIGHT_WEIGHT(8, 195),
        LEARNSETS(Machop),
        FRONT_SPRITE(Machop, 48, 48, 10, 0),
        BACK_SPRITE(Machop, 48, 56,  6),
        PALETTES(Machop),
        ICON(Machop, 0),
        FOOTPRINT(Machop),
        ANIMATIONS(MACHOP, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_JOLT_RIGHT),
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack    = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_MACHOKE,
        DEX_TEXT(Machoke, "Superpower"),
        DEX_SCALE(323, 9, 257, 0),
        HEIGHT_WEIGHT(15, 705),
        LEARNSETS(Machoke),
        FRONT_SPRITE(Machoke, 56, 56,  4, 0),
        BACK_SPRITE(Machoke, 64, 48,  8),
        PALETTES(Machoke),
        ICON(Machoke, 2),
        FOOTPRINT(Machoke),
        ANIMATIONS(MACHOKE, 0, ANIM_V_SHAKE, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_MACHAMP] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MACHAMP,
        DEX_TEXT(Machamp, "Superpower"),
        DEX_SCALE(280, 1, 269, -1),
        HEIGHT_WEIGHT(16, 1300),
        LEARNSETS(Machamp),
        FRONT_SPRITE(Machamp, 64, 64,  0, 0),
        BACK_SPRITE(Machamp, 64, 56,  7),
        PALETTES(Machamp),
        ICON(Machamp, 0),
        FOOTPRINT(Machamp),
        ANIMATIONS(MACHAMP, 0, ANIM_H_JUMPS, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BELLSPROUT,
        DEX_TEXT(Bellsprout, "Flower"),
        DEX_SCALE(354, 16, 256, 0),
        HEIGHT_WEIGHT(7, 40),
        LEARNSETS(Bellsprout),
        FRONT_SPRITE(Bellsprout, 40, 40, 12, 0),
        BACK_SPRITE(Bellsprout, 40, 48, 11),
        PALETTES(Bellsprout),
        ICON(Bellsprout, 1),
        FOOTPRINT(Bellsprout),
        ANIMATIONS(BELLSPROUT, 0, ANIM_H_JUMPS, BACK_ANIM_V_STRETCH),
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WEEPINBELL,
        DEX_TEXT(Weepinbell, "Flycatcher"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(10, 64),
        LEARNSETS(Weepinbell),
        FRONT_SPRITE(Weepinbell, 56, 48, 11, 0),
        BACK_SPRITE(Weepinbell, 64, 48, 11),
        PALETTES(Weepinbell),
        ICON(Weepinbell, 1),
        FOOTPRINT(Weepinbell),
        ANIMATIONS(WEEPINBELL, 3, ANIM_SWING_CONVEX, BACK_ANIM_V_STRETCH),
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 70,
    #else
        .baseSpDefense = 60,
    #endif
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 221,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VICTREEBEL,
        DEX_TEXT(Victreebel, "Flycatcher"),
        DEX_SCALE(256, 1, 312, 3),
        HEIGHT_WEIGHT(17, 155),
        LEARNSETS(Victreebel),
        FRONT_SPRITE(Victreebel, 64, 56,  6, 0),
        BACK_SPRITE(Victreebel, 64, 56,  6),
        PALETTES(Victreebel),
        ICON(Victreebel, 1),
        FOOTPRINT(Victreebel),
        ANIMATIONS(VICTREEBEL, 0, ANIM_H_JUMPS_V_STRETCH, BACK_ANIM_V_STRETCH),
    },

    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TENTACOOL,
        DEX_TEXT(Tentacool, "Jellyfish"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(9, 455),
        LEARNSETS(Tentacool),
        FRONT_SPRITE(Tentacool, 48, 56,  7, 0),
        BACK_SPRITE(Tentacool, 64, 48,  9),
        PALETTES(Tentacool),
        ICON(Tentacool, 0),
        FOOTPRINT(Tentacool),
        ANIMATIONS(TENTACOOL, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_POISON,
        .catchRate = 60,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TENTACRUEL,
        DEX_TEXT(Tentacruel, "Jellyfish"),
        DEX_SCALE(256, 0, 312, 1),
        HEIGHT_WEIGHT(16, 550),
        LEARNSETS(Tentacruel),
        FRONT_SPRITE(Tentacruel, 64, 56,  4, 0),
        BACK_SPRITE(Tentacruel, 64, 48, 11),
        PALETTES(Tentacruel),
        ICON(Tentacruel, 0),
        FOOTPRINT(Tentacruel),
        ANIMATIONS(TENTACRUEL, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_H_SLIDE),
    },

#define KANTONIAN_GEODUDE_FAMILY_STATS                                      \
        .type2 = TYPE_GROUND,                                               \
        .itemRare = ITEM_EVERSTONE,                                         \
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL}

#define GEODUDE_FAMILY_MISC_STATS           \
        .type1 = TYPE_ROCK,                 \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 15,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MINERAL,     \
        .eggGroup2 = EGG_GROUP_MINERAL,     \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE

#define GEODUDE_MISC_STATS                  \
        .baseHP        = 40,                \
        .baseAttack    = 80,                \
        .baseDefense   = 100,               \
        .baseSpeed     = 20,                \
        .baseSpAttack  = 30,                \
        .baseSpDefense = 30,                \
        .catchRate = 255,                   \
        .expYield = 60,                     \
        .evYield_Defense   = 1,             \
        .natDexNum = NATIONAL_DEX_GEODUDE,  \
        FOOTPRINT(Geodude),                 \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GEODUDE] =
    {
        DEX_TEXT(Geodude, "Rock"),
        DEX_SCALE(347, 18, 256, 0),
        HEIGHT_WEIGHT(4, 200),
        LEARNSETS(Geodude),
        FRONT_SPRITE(Geodude, 64, 32, 19, 16),
        BACK_SPRITE(Geodude, 64, 48, 11),
        PALETTES(Geodude),
        ICON(Geodude, 1),
        ANIMATIONS(GEODUDE, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_V_SHAKE_LOW),
        KANTONIAN_GEODUDE_FAMILY_STATS,
        GEODUDE_MISC_STATS,
    },

#define ALOLAN_GEODUDE_FAMILY_STATS                                             \
        .type2 = TYPE_ELECTRIC,                                                 \
        .itemRare = ITEM_CELL_BATTERY,                                          \
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE},  \
        .flags = SPECIES_FLAG_ALOLAN_FORM

    [SPECIES_GEODUDE_ALOLAN] =
    {
        DEX_TEXT(GeodudeAlolan, "Rock"),
        DEX_SCALE(347, 18, 256, 0),
        HEIGHT_WEIGHT(4, 203),
        LEARNSETS(GeodudeAlolan),
        FRONT_SPRITE(GeodudeAlolan, 48, 32, 17, 16),
        BACK_SPRITE(GeodudeAlolan, 64, 56, 13),
        PALETTES(GeodudeAlolan),
        ICON(GeodudeAlolan, 2),
        ANIMATIONS(GEODUDE_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ALOLAN_GEODUDE_FAMILY_STATS,
        GEODUDE_MISC_STATS,
    },

#define GRAVELER_MISC_STATS                 \
        .baseHP        = 55,                \
        .baseAttack    = 95,                \
        .baseDefense   = 115,               \
        .baseSpeed     = 35,                \
        .baseSpAttack  = 45,                \
        .baseSpDefense = 45,                \
        .catchRate = 120,                   \
        .expYield = 137,                    \
        .evYield_Defense   = 2,             \
        .natDexNum = NATIONAL_DEX_GRAVELER, \
        FOOTPRINT(Graveler),                \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GRAVELER] =
    {
        DEX_TEXT(Graveler, "Rock"),
        DEX_SCALE(256, 2, 256, 0),
        HEIGHT_WEIGHT(10, 1050),
        LEARNSETS(Graveler),
        FRONT_SPRITE(Graveler, 64, 48,  9, 0),
        BACK_SPRITE(Graveler, 64, 48, 10),
        PALETTES(Graveler),
        ICON(Graveler, 1),
        ANIMATIONS(GRAVELER, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_H_SHAKE),
        KANTONIAN_GEODUDE_FAMILY_STATS,
        GRAVELER_MISC_STATS,
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        DEX_TEXT(GravelerAlolan, "Rock"),
        DEX_SCALE(256, 2, 256, 0),
        HEIGHT_WEIGHT(10, 1100),
        LEARNSETS(GravelerAlolan),
        FRONT_SPRITE(GravelerAlolan, 64, 56,  8, 0),
        BACK_SPRITE(GravelerAlolan, 64, 48, 10),
        PALETTES(GravelerAlolan),
        ICON(GravelerAlolan, 2),
        ANIMATIONS(GRAVELER_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ALOLAN_GEODUDE_FAMILY_STATS,
        GRAVELER_MISC_STATS,
    },

#if P_UPDATED_STATS >= GEN_6
    #define GOLEM_ATTACK 120
#else
    #define GOLEM_ATTACK 110
#endif
#define GOLEM_MISC_STATS                \
        .baseHP        = 80,            \
        .baseAttack    = GOLEM_ATTACK,  \
        .baseDefense   = 130,           \
        .baseSpeed     = 45,            \
        .baseSpAttack  = 55,            \
        .baseSpDefense = 65,            \
        .catchRate = 45,                \
        .expYield = 223,                \
        .evYield_Defense   = 3,         \
        .natDexNum = NATIONAL_DEX_GOLEM,\
        FOOTPRINT(Golem),               \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GOLEM] =
    {
        DEX_TEXT(Golem, "Megaton"),
        DEX_SCALE(256, 3, 296, 2),
        HEIGHT_WEIGHT(14, 3000),
        LEARNSETS(Golem),
        FRONT_SPRITE(Golem, 64, 56,  6, 0),
        BACK_SPRITE(Golem, 64, 48, 11),
        PALETTES(Golem),
        ICON(Golem, 2),
        ANIMATIONS(GOLEM, 0, ANIM_ROTATE_UP_SLAM_DOWN, BACK_ANIM_H_SHAKE),
        KANTONIAN_GEODUDE_FAMILY_STATS,
        GOLEM_MISC_STATS,
    },
    [SPECIES_GOLEM_ALOLAN] =
    {
        DEX_TEXT(GolemAlolan, "Megaton"),
        DEX_SCALE(256, 3, 296, 2),
        HEIGHT_WEIGHT(17, 3160),
        LEARNSETS(GolemAlolan),
        FRONT_SPRITE(GolemAlolan, 56, 64,  1, 0),
        BACK_SPRITE(GolemAlolan, 64, 48, 13),
        PALETTES(GolemAlolan),
        ICON(GolemAlolan, 2),
        ANIMATIONS(GOLEM_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ALOLAN_GEODUDE_FAMILY_STATS,
        GOLEM_MISC_STATS,
    },

#define KANTONIAN_PONYTA_FAMILY_STATS                                           \
        .type1 = TYPE_FIRE,                                                     \
        .type2 = TYPE_FIRE,                                                     \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},\
        .bodyColor = BODY_COLOR_YELLOW

#define PONYTA_FAMILY_MISC_STATS            \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE

#define PONYTA_MISC_STATS                   \
        .baseHP        = 50,                \
        .baseAttack    = 85,                \
        .baseDefense   = 55,                \
        .baseSpeed     = 90,                \
        .baseSpAttack  = 65,                \
        .baseSpDefense = 65,                \
        .catchRate = 190,                   \
        .expYield = 82,                     \
        .evYield_Speed     = 1,             \
        .natDexNum = NATIONAL_DEX_PONYTA,   \
        FOOTPRINT(Ponyta),                  \
        PONYTA_FAMILY_MISC_STATS

    [SPECIES_PONYTA] =
    {
        DEX_TEXT(Ponyta, "Fire Horse"),
        DEX_SCALE(283, 8, 256, 0),
        HEIGHT_WEIGHT(10, 300),
        LEARNSETS(Ponyta),
        FRONT_SPRITE(Ponyta, 56, 56,  6, 0),
        BACK_SPRITE(Ponyta, 64, 56,  4),
        PALETTES(Ponyta),
        ICON(Ponyta, 3),
        ANIMATIONS(PONYTA, 0, ANIM_GLOW_ORANGE, BACK_ANIM_SHAKE_GLOW_RED),
        KANTONIAN_PONYTA_FAMILY_STATS,
        PONYTA_MISC_STATS,
    },

#define GALARIAN_PONYTA_FAMILY_STATS                                                \
        .type1 = TYPE_PSYCHIC,                                                      \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION}, \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .flags = SPECIES_FLAG_GALARIAN_FORM

    [SPECIES_PONYTA_GALARIAN] =
    {
        .type2 = TYPE_PSYCHIC,
        DEX_TEXT(Dummy, "Unique Horn"),
        DEX_SCALE(342, 14, 256, 0),
        HEIGHT_WEIGHT(8, 240),
        LEARNSETS(PonytaGalarian),
        FRONT_SPRITE(PonytaGalarian, 64, 56,  8, 0),
        BACK_SPRITE(PonytaGalarian, 64, 56,  4),
        PALETTES(PonytaGalarian),
        ICON(PonytaGalarian, 2),
        ANIMATIONS(PONYTA_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        GALARIAN_PONYTA_FAMILY_STATS,
        PONYTA_MISC_STATS,
    },

#define RAPIDASH_MISC_STATS                 \
        .baseHP        = 65,                \
        .baseAttack    = 100,               \
        .baseDefense   = 70,                \
        .baseSpeed     = 105,               \
        .baseSpAttack  = 80,                \
        .baseSpDefense = 80,                \
        .catchRate = 60,                    \
        .expYield = 175,                    \
        .evYield_Speed     = 2,             \
        .natDexNum = NATIONAL_DEX_RAPIDASH, \
        FOOTPRINT(Rapidash),                \
        PONYTA_FAMILY_MISC_STATS

    [SPECIES_RAPIDASH] =
    {
        DEX_TEXT(Rapidash, "Fire Horse"),
        DEX_SCALE(256, 0, 289, 1),
        HEIGHT_WEIGHT(17, 950),
        LEARNSETS(Rapidash),
        FRONT_SPRITE(Rapidash, 64, 64,  0, 0),
        BACK_SPRITE(Rapidash, 64, 64,  0),
        PALETTES(Rapidash),
        ICON(Rapidash, 3),
        ANIMATIONS(RAPIDASH, 0, ANIM_H_SHAKE, BACK_ANIM_JOLT_RIGHT),
        KANTONIAN_PONYTA_FAMILY_STATS,
        RAPIDASH_MISC_STATS,
    },
    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .type2 = TYPE_FAIRY,
        DEX_TEXT(Dummy, "Unique Horn"),
        DEX_SCALE(256, 0, 289, 1),
        HEIGHT_WEIGHT(17, 800),
        LEARNSETS(RapidashGalarian),
        FRONT_SPRITE(RapidashGalarian, 64, 64,  0, 0),
        BACK_SPRITE(RapidashGalarian, 64, 56,  6),
        PALETTES(RapidashGalarian),
        ICON(RapidashGalarian, 2),
        ANIMATIONS(RAPIDASH_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        GALARIAN_PONYTA_FAMILY_STATS,
        RAPIDASH_MISC_STATS,
    },

#define SLOWPOKE_MISC_STATS                 \
        .baseHP        = 90,                \
        .baseAttack    = 65,                \
        .baseDefense   = 65,                \
        .baseSpeed     = 15,                \
        .baseSpAttack  = 40,                \
        .baseSpDefense = 40,                \
        .type2 = TYPE_PSYCHIC,              \
        .catchRate = 190,                   \
        .expYield = 63,                     \
        .evYield_HP        = 1,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_WATER_1,     \
        .bodyColor = BODY_COLOR_PINK,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SLOWPOKE, \
        DEX_SCALE(256, 10, 256, 0),         \
        HEIGHT_WEIGHT(12, 360),             \
        FOOTPRINT(Slowpoke)

    [SPECIES_SLOWPOKE] =
    {
        .type1 = TYPE_WATER,
        .itemRare = ITEM_LAGGING_TAIL,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        DEX_TEXT(Slowpoke, "Dopey"),
        LEARNSETS(Slowpoke),
        FRONT_SPRITE(Slowpoke, 64, 32, 16, 0),
        BACK_SPRITE(Slowpoke, 64, 40, 13),
        PALETTES(Slowpoke),
        ICON(Slowpoke, 0),
        ANIMATIONS(SLOWPOKE, 0, ANIM_V_SQUISH_AND_BOUNCE_SLOW, BACK_ANIM_H_SLIDE),
        SLOWPOKE_MISC_STATS,
    },
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .type1 = TYPE_PSYCHIC,
        .abilities = {ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Dopey"),
        LEARNSETS(SlowpokeGalarian),
        FRONT_SPRITE(SlowpokeGalarian, 56, 32, 19, 0),
        BACK_SPRITE(SlowpokeGalarian, 64, 40, 13),
        PALETTES(SlowpokeGalarian),
        ICON(SlowpokeGalarian, 1),
        ANIMATIONS(SLOWPOKE_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SLOWPOKE_MISC_STATS,
    },

#define SLOWBRO_MISC_STATS                  \
        .type2 = TYPE_PSYCHIC,              \
        .catchRate = 75,                    \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_WATER_1,     \
        .bodyColor = BODY_COLOR_PINK,       \
        .natDexNum = NATIONAL_DEX_SLOWBRO,  \
        FOOTPRINT(Slowbro)

    [SPECIES_SLOWBRO] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .evYield_Defense   = 2,
        .type1 = TYPE_WATER,
        .expYield = 172,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .noFlip = FALSE,
        DEX_TEXT(Slowbro, "Hermit Crab"),
        DEX_SCALE(256, 6, 296, 2),
        HEIGHT_WEIGHT(16, 785),
        LEARNSETS(Slowbro),
        FRONT_SPRITE(Slowbro, 56, 56,  4, 0),
        BACK_SPRITE(Slowbro, 64, 48,  9),
        PALETTES(Slowbro),
        ICON(Slowbro, 0),
        ANIMATIONS(SLOWBRO, 0, ANIM_GROW_VIBRATE, BACK_ANIM_DIP_RIGHT_SIDE),
        SLOWBRO_MISC_STATS,
    },
    [SPECIES_SLOWBRO_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .evYield_Defense   = 2,
        .type1 = TYPE_WATER,
        .expYield = 207,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR},
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(SlowbroMega, "Hermit Crab"),
        DEX_SCALE(256, 0, 309, 5),
        HEIGHT_WEIGHT(20, 1200),
        LEARNSETS(Slowbro),
        FRONT_SPRITE(SlowbroMega, 64, 56,  4, 0),
        BACK_SPRITE(SlowbroMega, 64, 48,  9),
        PALETTES(SlowbroMega),
        ICON(SlowbroMega, 0),
        ANIMATIONS(SLOWBRO_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SLOWBRO_MISC_STATS,
    },
    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .evYield_Attack    = 2,
        .type1 = TYPE_POISON,
        .expYield = 172,
        .abilities = {ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Hermit Crab"),
        DEX_SCALE(256, 6, 296, 2),
        HEIGHT_WEIGHT(16, 705),
        LEARNSETS(SlowbroGalarian),
        FRONT_SPRITE(SlowbroGalarian, 56, 64,  0, 0),
        BACK_SPRITE(SlowbroGalarian, 64, 48,  9),
        PALETTES(SlowbroGalarian),
        ICON(SlowbroGalarian, 0),
        ANIMATIONS(SLOWBRO_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SLOWBRO_MISC_STATS,
    },

    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAGNEMITE,
        DEX_TEXT(Magnemite, "Magnet"),
        DEX_SCALE(288, -9, 256, 0),
        HEIGHT_WEIGHT(3, 60),
        LEARNSETS(Magnemite),
        FRONT_SPRITE(Magnemite, 48, 32, 20, 17),
        BACK_SPRITE(Magnemite, 48, 40, 15),
        PALETTES(Magnemite),
        ICON(Magnemite, 0),
        FOOTPRINT(Magnemite),
        ANIMATIONS(MAGNEMITE, 0, ANIM_TUMBLING_FRONT_FLIP_TWICE, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 163,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAGNETON,
        DEX_TEXT(Magneton, "Magnet"),
        DEX_SCALE(292, 1, 256, 0),
        HEIGHT_WEIGHT(10, 600),
        LEARNSETS(Magneton),
        FRONT_SPRITE(Magneton, 64, 56,  7, 9),
        BACK_SPRITE(Magneton, 64, 56,  6),
        PALETTES(Magneton),
        ICON(Magneton, 0),
        FOOTPRINT(Magneton),
        ANIMATIONS(MAGNETON, 0, ANIM_FLASH_YELLOW, BACK_ANIM_TRIANGLE_DOWN),
    },

#if P_UPDATED_STATS >= GEN_7
    #define FARFETCHD_ATTACK 90
#else
    #define FARFETCHD_ATTACK 65
#endif

#define FARFETCHD_MISC_STATS                \
        .catchRate = 45,                    \
        .expYield = 132,                    \
        .evYield_Attack    = 1,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FLYING,      \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_FARFETCHD,\
        DEX_SCALE(330, 2, 293, 2),          \
        FOOTPRINT(Farfetchd)

    [SPECIES_FARFETCHD] =
    {
        .baseHP        = 52,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .baseAttack    = FARFETCHD_ATTACK,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .itemRare = ITEM_LEEK,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT},
        DEX_TEXT(Farfetchd, "Wild Duck"),
        HEIGHT_WEIGHT(8, 150),
        LEARNSETS(Farfetchd),
        FRONT_SPRITE(Farfetchd, 48, 56,  7, 0),
        BACK_SPRITE(Farfetchd, 64, 48,  9),
        PALETTES(Farfetchd),
        ICON(Farfetchd, 1),
        ANIMATIONS(FARFETCHD, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_H_SLIDE),
        FARFETCHD_MISC_STATS,
    },
    [SPECIES_FARFETCHD_GALARIAN] =
    {
        .baseHP        = 52,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .baseAttack    = FARFETCHD_ATTACK + 5,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .itemCommon = ITEM_LEEK,
        .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY},
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Wild Duck"),
        HEIGHT_WEIGHT(8, 420),
        LEARNSETS(FarfetchdGalarian),
        FRONT_SPRITE(FarfetchdGalarian, 64, 48,  9, 0),
        BACK_SPRITE(FarfetchdGalarian, 64, 48,  8),
        PALETTES(FarfetchdGalarian),
        ICON(FarfetchdGalarian, 1),
        ANIMATIONS(FARFETCHD_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        FARFETCHD_MISC_STATS,
    },

    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 62,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DODUO,
        DEX_TEXT(Doduo, "Twin Bird"),
        DEX_SCALE(256, 3, 257, -1),
        HEIGHT_WEIGHT(14, 392),
        LEARNSETS(Doduo),
        FRONT_SPRITE(Doduo, 64, 56,  7, 0),
        BACK_SPRITE(Doduo, 64, 56,  6),
        PALETTES(Doduo),
        ICON(Doduo, 2),
        FOOTPRINT(Doduo),
        ANIMATIONS(DODUO, 0, ANIM_H_SHAKE_SLOW, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpeed     = 110,
    #else
        .baseSpeed     = 100,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DODRIO,
        DEX_TEXT(Dodrio, "Triple Bird"),
        DEX_SCALE(256, 0, 268, 0),
        HEIGHT_WEIGHT(18, 852),
        LEARNSETS(Dodrio),
        FRONT_SPRITE(Dodrio, 64, 64,  0, 0),
        BACK_SPRITE(Dodrio, 64, 64,  3),
        PALETTES(Dodrio),
        ICON(Dodrio, 2),
        FOOTPRINT(Dodrio),
        ANIMATIONS(DODRIO, 0, ANIM_V_STRETCH, BACK_ANIM_JOLT_RIGHT),
    },

    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SEEL,
        DEX_TEXT(Seel, "Sea Lion"),
        DEX_SCALE(297, 8, 256, 0),
        HEIGHT_WEIGHT(11, 900),
        LEARNSETS(Seel),
        FRONT_SPRITE(Seel, 56, 48,  8, 0),
        BACK_SPRITE(Seel, 64, 40, 13),
        PALETTES(Seel),
        ICON(Seel, 0),
        FOOTPRINT(Seel),
        ANIMATIONS(SEEL, 0, ANIM_H_STRETCH, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DEWGONG,
        DEX_TEXT(Dewgong, "Sea Lion"),
        DEX_SCALE(256, 0, 275, 0),
        HEIGHT_WEIGHT(17, 1200),
        LEARNSETS(Dewgong),
        FRONT_SPRITE(Dewgong, 64, 64,  2, 0),
        BACK_SPRITE(Dewgong, 64, 56,  5),
        PALETTES(Dewgong),
        ICON(Dewgong, 2),
        FOOTPRINT(Dewgong),
        ANIMATIONS(DEWGONG, 0, ANIM_V_SQUISH_AND_BOUNCE_SLOW, BACK_ANIM_H_SLIDE),
    },

#define GRIMER_FAMILY_MISC_STATS            \
        .type1 = TYPE_POISON,               \
        .itemRare = ITEM_BLACK_SLUDGE,      \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,   \
        .noFlip = FALSE

#define GRIMER_MISC_STATS                   \
        .baseHP        = 80,                \
        .baseAttack    = 80,                \
        .baseDefense   = 50,                \
        .baseSpeed     = 25,                \
        .baseSpAttack  = 40,                \
        .baseSpDefense = 50,                \
        .catchRate = 190,                   \
        .expYield = 65,                     \
        .evYield_HP        = 1,             \
        .natDexNum = NATIONAL_DEX_GRIMER,   \
        FOOTPRINT(Grimer),                  \
        GRIMER_FAMILY_MISC_STATS

#define KANTONIAN_GRIMER_FAMILY_STATS                                               \
        .type2 = TYPE_POISON,                                                       \
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH},   \
        .bodyColor = BODY_COLOR_PURPLE

    [SPECIES_GRIMER] =
    {
        DEX_TEXT(Grimer, "Sludge"),
        DEX_SCALE(258, 10, 256, 0),
        HEIGHT_WEIGHT(9, 300),
        LEARNSETS(Grimer),
        FRONT_SPRITE(Grimer, 48, 48,  9, 0),
        BACK_SPRITE(Grimer, 64, 40, 13),
        PALETTES(Grimer),
        ICON(Grimer, 2),
        ANIMATIONS(GRIMER, 0, ANIM_H_SLIDE_SLOW, BACK_ANIM_V_STRETCH),
        KANTONIAN_GRIMER_FAMILY_STATS,
        GRIMER_MISC_STATS,
    },

#define ALOLAN_GRIMER_FAMILY_STATS                                                      \
        .type2 = TYPE_DARK,                                                             \
        .abilities = {ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY},\
        .bodyColor = BODY_COLOR_GREEN,                                                  \
        .flags = SPECIES_FLAG_ALOLAN_FORM

    [SPECIES_GRIMER_ALOLAN] =
    {
        DEX_TEXT(GrimerAlolan, "Sludge"),
        DEX_SCALE(354, 16, 256, 0),
        HEIGHT_WEIGHT(7, 420),
        LEARNSETS(GrimerAlolan),
        FRONT_SPRITE(GrimerAlolan, 56, 48, 11, 0),
        BACK_SPRITE(GrimerAlolan, 64, 40, 14),
        PALETTES(GrimerAlolan),
        ICON(GrimerAlolan, 1),
        ANIMATIONS(GRIMER_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ALOLAN_GRIMER_FAMILY_STATS,
        GRIMER_MISC_STATS,
    },

#define MUK_MISC_STATS                  \
        .baseHP        = 105,           \
        .baseAttack    = 105,           \
        .baseDefense   = 75,            \
        .baseSpeed     = 50,            \
        .baseSpAttack  = 65,            \
        .baseSpDefense = 100,           \
        .catchRate = 75,                \
        .expYield = 175,                \
        .evYield_HP        = 1,         \
        .evYield_Attack    = 1,         \
        .natDexNum = NATIONAL_DEX_MUK,  \
        FOOTPRINT(Muk),                 \
        GRIMER_FAMILY_MISC_STATS

    [SPECIES_MUK] =
    {
        DEX_TEXT(Muk, "Sludge"),
        DEX_SCALE(256, 2, 256, 0),
        HEIGHT_WEIGHT(12, 300),
        LEARNSETS(Muk),
        FRONT_SPRITE(Muk, 64, 56,  7, 0),
        BACK_SPRITE(Muk, 64, 56,  9),
        PALETTES(Muk),
        ICON(Muk, 2),
        ANIMATIONS(MUK, 45, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_H_STRETCH),
        KANTONIAN_GRIMER_FAMILY_STATS,
        MUK_MISC_STATS,
    },
    [SPECIES_MUK_ALOLAN] =
    {
        DEX_TEXT(MukAlolan, "Sludge"),
        DEX_SCALE(283, 8, 256, 0),
        HEIGHT_WEIGHT(10, 520),
        LEARNSETS(MukAlolan),
        FRONT_SPRITE(MukAlolan, 64, 64,  3, 0),
        BACK_SPRITE(MukAlolan, 64, 56,  6),
        PALETTES(MukAlolan),
        ICON(MukAlolan, 0),
        ANIMATIONS(MUK_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ALOLAN_GRIMER_FAMILY_STATS,
        MUK_MISC_STATS,
    },

    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHELLDER,
        DEX_TEXT(Shellder, "Bivalve"),
        DEX_SCALE(675, 24, 256, 0),
        HEIGHT_WEIGHT(3, 40),
        LEARNSETS(Shellder),
        FRONT_SPRITE(Shellder, 40, 40, 13, 0),
        BACK_SPRITE(Shellder, 48, 24, 21),
        PALETTES(Shellder),
        ICON(Shellder, 2),
        FOOTPRINT(Shellder),
        ANIMATIONS(SHELLDER, 20, ANIM_TWIST, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CLOYSTER,
        DEX_TEXT(Cloyster, "Bivalve"),
        DEX_SCALE(256, 0, 269, 1),
        HEIGHT_WEIGHT(15, 1325),
        LEARNSETS(Cloyster),
        FRONT_SPRITE(Cloyster, 64, 64,  3, 0),
        BACK_SPRITE(Cloyster, 64, 56,  7),
        PALETTES(Cloyster),
        ICON(Cloyster, 2),
        FOOTPRINT(Cloyster),
        ANIMATIONS(CLOYSTER, 0, ANIM_H_SLIDE_WOBBLE, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GASTLY,
        DEX_TEXT(Gastly, "Gas"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(13, 1),
        LEARNSETS(Gastly),
        FRONT_SPRITE(Gastly, 64, 48, 13, 10),
        BACK_SPRITE(Gastly, 64, 56,  6),
        PALETTES(Gastly),
        ICON(Gastly, 2),
        FOOTPRINT(Gastly),
        ANIMATIONS(GASTLY, 0, ANIM_CIRCLE_C_CLOCKWISE_SLOW, BACK_ANIM_H_VIBRATE),
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HAUNTER,
        DEX_TEXT(Haunter, "Gas"),
        DEX_SCALE(256, 2, 293, 2),
        HEIGHT_WEIGHT(16, 1),
        LEARNSETS(Haunter),
        FRONT_SPRITE(Haunter, 64, 48, 13, 11),
        BACK_SPRITE(Haunter, 64, 56,  4),
        PALETTES(Haunter),
        ICON(Haunter, 2),
        FOOTPRINT(Haunter),
        ANIMATIONS(HAUNTER, 23, ANIM_FLICKER_INCREASING, BACK_ANIM_H_VIBRATE),
    },

#define GENGAR_MISC_STATS                   \
        .type1 = TYPE_GHOST,                \
        .type2 = TYPE_POISON,               \
        .catchRate = 45,                    \
        .evYield_SpAttack  = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,   \
        .bodyColor = BODY_COLOR_PURPLE,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_GENGAR,   \
        DEX_SCALE(256, 2, 302, 2),          \
        FOOTPRINT(Gengar)

    [SPECIES_GENGAR] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 75,
        .expYield = 225,
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = {ABILITY_CURSED_BODY, ABILITY_NONE, ABILITY_NONE},
    #else
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_NONE},
    #endif
        DEX_TEXT(Gengar, "Shadow"),
        HEIGHT_WEIGHT(15, 405),
        LEARNSETS(Gengar),
        FRONT_SPRITE(Gengar, 56, 56,  7, 0),
        BACK_SPRITE(Gengar, 64, 48,  8),
        PALETTES(Gengar),
        ICON(Gengar, 2),
        ANIMATIONS(GENGAR, 0, ANIM_GROW_IN_STAGES, BACK_ANIM_SHRINK_GROW_VIBRATE),
        GENGAR_MISC_STATS,
    },
    [SPECIES_GENGAR_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .expYield = 270,
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(GengarMega, "Shadow"),
        HEIGHT_WEIGHT(14, 405),
        LEARNSETS(Gengar),
        FRONT_SPRITE(GengarMega, 64, 64,  7, 0),
        BACK_SPRITE(GengarMega, 64, 64,  0),
        PALETTES(GengarMega),
        ICON(GengarMega, 2),
        ANIMATIONS(GENGAR_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        GENGAR_MISC_STATS,
    },

    [SPECIES_ONIX] =
    {
        .baseHP        = 35,
        .baseAttack    = 45,
        .baseDefense   = 160,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 77,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ONIX,
        DEX_TEXT(Onix, "Rock Snake"),
        DEX_SCALE(256, 1, 515, 14),
        HEIGHT_WEIGHT(88, 2100),
        LEARNSETS(Onix),
        FRONT_SPRITE(Onix, 64, 64,  3, 0),
        BACK_SPRITE(Onix, 64, 64,  0),
        PALETTES(Onix),
        ICON(Onix, 2),
        FOOTPRINT(Onix),
        ANIMATIONS(ONIX, 0, ANIM_H_SHAKE, BACK_ANIM_V_SHAKE),
    },

    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DROWZEE,
        DEX_TEXT(Drowzee, "Hypnosis"),
        DEX_SCALE(274, 6, 256, 0),
        HEIGHT_WEIGHT(10, 324),
        LEARNSETS(Drowzee),
        FRONT_SPRITE(Drowzee, 48, 56,  7, 0),
        BACK_SPRITE(Drowzee, 56, 48,  9),
        PALETTES(Drowzee),
        ICON(Drowzee, 2),
        FOOTPRINT(Drowzee),
        ANIMATIONS(DROWZEE, 48, ANIM_V_STRETCH, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 75,
        .expYield = 169,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HYPNO,
        DEX_TEXT(Hypno, "Hypnosis"),
        DEX_SCALE(256, 3, 257, 0),
        HEIGHT_WEIGHT(16, 756),
        LEARNSETS(Hypno),
        FRONT_SPRITE(Hypno, 64, 64,  3, 0),
        BACK_SPRITE(Hypno, 64, 56,  5),
        PALETTES(Hypno),
        ICON(Hypno, 2),
        FOOTPRINT(Hypno),
        ANIMATIONS(HYPNO, 40, ANIM_H_SLIDE_SLOW, BACK_ANIM_SHRINK_GROW_VIBRATE),
    },

    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 65,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KRABBY,
        DEX_TEXT(Krabby, "River Crab"),
        DEX_SCALE(469, 20, 256, 0),
        HEIGHT_WEIGHT(4, 65),
        LEARNSETS(Krabby),
        FRONT_SPRITE(Krabby, 64, 48, 14, 0),
        BACK_SPRITE(Krabby, 56, 40, 15),
        PALETTES(Krabby),
        ICON(Krabby, 0),
        FOOTPRINT(Krabby),
        ANIMATIONS(KRABBY, 0, ANIM_H_SLIDE, BACK_ANIM_V_SHAKE_H_SLIDE),
    },

    [SPECIES_KINGLER] =
    {
        .baseHP        = 55,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_KINGLER,
        DEX_TEXT(Kingler, "Pincer"),
        DEX_SCALE(256, 2, 256, 0),
        HEIGHT_WEIGHT(13, 600),
        LEARNSETS(Kingler),
        FRONT_SPRITE(Kingler, 64, 48,  8, 0),
        BACK_SPRITE(Kingler, 64, 56,  5),
        PALETTES(Kingler),
        ICON(Kingler, 0),
        FOOTPRINT(Kingler),
        ANIMATIONS(KINGLER, 0, ANIM_H_SLIDE_SLOW, BACK_ANIM_V_SHAKE),
    },

#define VOLTORB_FAMILY_MISC_STATS                                               \
        .type1 = TYPE_ELECTRIC,                                                 \
        .genderRatio = MON_GENDERLESS,                                          \
        .eggCycles = 20,                                                        \
        .friendship = 70,                                                       \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroup1 = EGG_GROUP_MINERAL,                                         \
        .eggGroup2 = EGG_GROUP_MINERAL,                                         \
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH},   \
        .bodyColor = BODY_COLOR_RED,                                            \
        .noFlip = FALSE

#define VOLTORB_MISC_STATS                  \
        .baseHP        = 40,                \
        .baseAttack    = 30,                \
        .baseDefense   = 50,                \
        .baseSpeed     = 100,               \
        .baseSpAttack  = 55,                \
        .baseSpDefense = 55,                \
        .catchRate = 190,                   \
        .expYield = 66,                     \
        .evYield_Speed     = 1,             \
        .natDexNum = NATIONAL_DEX_VOLTORB,  \
        DEX_SCALE(364, -8, 256, 0),         \
        FOOTPRINT(Voltorb),                 \
        VOLTORB_FAMILY_MISC_STATS

    [SPECIES_VOLTORB] =
    {
        .type2 = TYPE_ELECTRIC,
        DEX_TEXT(Voltorb, "Ball"),
        HEIGHT_WEIGHT(5, 104),
        LEARNSETS(Voltorb),
        FRONT_SPRITE(Voltorb, 32, 40, 11, 0),
        BACK_SPRITE(Voltorb, 48, 40, 14),
        PALETTES(Voltorb),
        ICON(Voltorb, 0),
        ANIMATIONS(VOLTORB, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_JOLT_RIGHT),
        VOLTORB_MISC_STATS,
    },
    [SPECIES_VOLTORB_HISUIAN] =
    {
        .type2 = TYPE_GRASS,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Sphere"),
        HEIGHT_WEIGHT(5, 130),
        LEARNSETS(VoltorbHisuian),
        FRONT_SPRITE(VoltorbHisuian, 32, 32,  0, 0),
        BACK_SPRITE(VoltorbHisuian, 48, 32, 10),
        PALETTES(VoltorbHisuian),
        ICON(VoltorbHisuian, 0),
        ANIMATIONS(VOLTORB_HISUIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        VOLTORB_MISC_STATS,
    },

#if P_UPDATED_STATS >= GEN_7
    #define ELECTRODE_SPEED 150
#else
    #define ELECTRODE_SPEED 140
#endif

#define ELECTRODE_MISC_STATS                \
        .baseHP        = 60,                \
        .baseAttack    = 50,                \
        .baseDefense   = 70,                \
        .baseSpAttack  = 80,                \
        .baseSpDefense = 80,                \
        .baseSpeed     = ELECTRODE_SPEED,   \
        .catchRate = 60,                    \
        .expYield = 172,                    \
        .evYield_Speed     = 2,             \
        .natDexNum = NATIONAL_DEX_ELECTRODE,\
        DEX_SCALE(256, 0, 256, 0),          \
        FOOTPRINT(Electrode),               \
        VOLTORB_FAMILY_MISC_STATS

    [SPECIES_ELECTRODE] =
    {
        .type2 = TYPE_ELECTRIC,
        DEX_TEXT(Electrode, "Ball"),
        HEIGHT_WEIGHT(12, 666),
        LEARNSETS(Electrode),
        FRONT_SPRITE(Electrode, 48, 48,  8, 0),
        BACK_SPRITE(Electrode, 64, 40, 13),
        PALETTES(Electrode),
        ICON(Electrode, 0),
        ANIMATIONS(ELECTRODE, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_JOLT_RIGHT),
        ELECTRODE_MISC_STATS,
    },
    [SPECIES_ELECTRODE_HISUIAN] =
    {
        .type2 = TYPE_GRASS,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Sphere"),
        HEIGHT_WEIGHT(12, 710),
        LEARNSETS(ElectrodeHisuian),
        FRONT_SPRITE(ElectrodeHisuian, 48, 48,  0, 0),
        BACK_SPRITE(ElectrodeHisuian, 64, 40,  7),
        PALETTES(ElectrodeHisuian),
        ICON(ElectrodeHisuian, 1),
        ANIMATIONS(ELECTRODE_HISUIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ELECTRODE_MISC_STATS,
    },

    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 65,
        .evYield_Defense   = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_EXEGGCUTE,
        DEX_TEXT(Exeggcute, "Egg"),
        DEX_SCALE(489, -4, 256, 0),
        HEIGHT_WEIGHT(4, 25),
        LEARNSETS(Exeggcute),
        FRONT_SPRITE(Exeggcute, 56, 40, 12, 0),
        BACK_SPRITE(Exeggcute, 64, 32, 18),
        PALETTES(Exeggcute),
        ICON(Exeggcute, 0),
        FOOTPRINT(Exeggcute),
        ANIMATIONS(EXEGGCUTE, 0, ANIM_H_SLIDE_SLOW, BACK_ANIM_H_SLIDE),
    },

#define EXEGGUTOR_MISC_STATS                \
        .type1 = TYPE_GRASS,                \
        .catchRate = 45,                    \
        .expYield = 186,                    \
        .evYield_SpAttack  = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_GRASS,       \
        .eggGroup2 = EGG_GROUP_GRASS,       \
        .bodyColor = BODY_COLOR_YELLOW,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_EXEGGUTOR,\
        FOOTPRINT(Exeggutor)

#if P_UPDATED_STATS >= GEN_7
    #define EXEGGUTOR_SP_DEF 75
#else
    #define EXEGGUTOR_SP_DEF 65
#endif

    [SPECIES_EXEGGUTOR] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .type2 = TYPE_PSYCHIC,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST},
        DEX_TEXT(Exeggutor, "Coconut"),
        DEX_SCALE(256, 0, 309, 0),
        HEIGHT_WEIGHT(20, 1200),
        LEARNSETS(Exeggutor),
        FRONT_SPRITE(Exeggutor, 64, 64,  0, 0),
        BACK_SPRITE(Exeggutor, 64, 48,  8),
        PALETTES(Exeggutor),
        ICON(Exeggutor, 1),
        ANIMATIONS(EXEGGUTOR, 0, ANIM_H_JUMPS_V_STRETCH, BACK_ANIM_CONCAVE_ARC_LARGE),
        EXEGGUTOR_MISC_STATS,
    },
    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = EXEGGUTOR_SP_DEF,
        .type2 = TYPE_DRAGON,
        .abilities = {ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST},
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(ExeggutorAlolan, "Coconut"),
        DEX_SCALE(256, 0, 309, 0),
        HEIGHT_WEIGHT(109, 4156),
        LEARNSETS(ExeggutorAlolan),
        FRONT_SPRITE(ExeggutorAlolan, 64, 64,  0, 0),
        BACK_SPRITE(ExeggutorAlolan, 64, 56,  4),
        PALETTES(ExeggutorAlolan),
        ICON(ExeggutorAlolan, 1),
        ANIMATIONS(EXEGGUTOR_ALOLAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        EXEGGUTOR_MISC_STATS,
    },

    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 190,
        .expYield = 64,
        .evYield_Defense   = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CUBONE,
        DEX_TEXT(Cubone, "Lonely"),
        DEX_SCALE(545, 21, 256, 0),
        HEIGHT_WEIGHT(4, 65),
        LEARNSETS(Cubone),
        FRONT_SPRITE(Cubone, 56, 40, 13, 0),
        BACK_SPRITE(Cubone, 56, 48, 10),
        PALETTES(Cubone),
        ICON(Cubone, 2),
        FOOTPRINT(Cubone),
        ANIMATIONS(CUBONE, 0, ANIM_V_JUMPS_SMALL, BACK_ANIM_JOLT_RIGHT),
    },

#define MAROWAK_MISC_STATS                  \
        .baseHP        = 60,                \
        .baseAttack    = 80,                \
        .baseDefense   = 110,               \
        .baseSpeed     = 45,                \
        .baseSpAttack  = 50,                \
        .baseSpDefense = 80,                \
        .catchRate = 75,                    \
        .expYield = 149,                    \
        .evYield_Defense   = 2,             \
        .itemRare = ITEM_THICK_CLUB,        \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_MONSTER,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MAROWAK,  \
        DEX_SCALE(293, 12, 256, 0),         \
        FOOTPRINT(Marowak)

    [SPECIES_MAROWAK] =
    {
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Marowak, "Bone Keeper"),
        HEIGHT_WEIGHT(10, 450),
        LEARNSETS(Marowak),
        FRONT_SPRITE(Marowak, 56, 64,  8, 0),
        BACK_SPRITE(Marowak, 48, 56,  8),
        PALETTES(Marowak),
        ICON(Marowak, 2),
        ANIMATIONS(MAROWAK, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        MAROWAK_MISC_STATS,
    },
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_PURPLE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        DEX_TEXT(MarowakAlolan, "Bone Keeper"),
        HEIGHT_WEIGHT(10, 340),
        LEARNSETS(MarowakAlolan),
        FRONT_SPRITE(MarowakAlolan, 64, 64,  2, 0),
        BACK_SPRITE(MarowakAlolan, 56, 56,  6),
        PALETTES(MarowakAlolan),
        ICON(MarowakAlolan, 1),
        ANIMATIONS(MAROWAK_ALOLAN, 0, ANIM_BOUNCE_ROTATE_TO_SIDES, BACK_ANIM_CONCAVE_ARC_LARGE),
        MAROWAK_MISC_STATS,
    },

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_LIMBER, ABILITY_RECKLESS, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HITMONLEE,
        DEX_TEXT(Hitmonlee, "Kicking"),
        DEX_SCALE(256, 3, 259, 1),
        HEIGHT_WEIGHT(15, 498),
        LEARNSETS(Hitmonlee),
        FRONT_SPRITE(Hitmonlee, 64, 64,  3, 0),
        BACK_SPRITE(Hitmonlee, 64, 56,  4),
        PALETTES(Hitmonlee),
        ICON(Hitmonlee, 2),
        FOOTPRINT(Hitmonlee),
        ANIMATIONS(HITMONLEE, 0, ANIM_H_STRETCH, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HITMONCHAN,
        DEX_TEXT(Hitmonchan, "Punching"),
        DEX_SCALE(256, 2, 277, 2),
        HEIGHT_WEIGHT(14, 502),
        LEARNSETS(Hitmonchan),
        FRONT_SPRITE(Hitmonchan, 48, 64,  3, 0),
        BACK_SPRITE(Hitmonchan, 56, 56,  6),
        PALETTES(Hitmonchan),
        ICON(Hitmonchan, 2),
        FOOTPRINT(Hitmonchan),
        ANIMATIONS(HITMONCHAN, 25, ANIM_GROW_VIBRATE, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 77,
        .evYield_HP        = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LICKITUNG,
        DEX_TEXT(Lickitung, "Licking"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(12, 655),
        LEARNSETS(Lickitung),
        FRONT_SPRITE(Lickitung, 64, 56,  7, 0),
        BACK_SPRITE(Lickitung, 64, 40, 13),
        PALETTES(Lickitung),
        ICON(Lickitung, 0),
        FOOTPRINT(Lickitung),
        ANIMATIONS(LICKITUNG, 0, ANIM_V_SQUISH_AND_BOUNCE_SLOW, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 68,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KOFFING,
        DEX_TEXT(Koffing, "Poison Gas"),
        DEX_SCALE(369, -1, 256, 0),
        HEIGHT_WEIGHT(6, 10),
        LEARNSETS(Koffing),
        FRONT_SPRITE(Koffing, 56, 48, 10, 14),
        BACK_SPRITE(Koffing, 64, 64,  3),
        PALETTES(Koffing),
        ICON(Koffing, 2),
        FOOTPRINT(Koffing),
        ANIMATIONS(KOFFING, 0, ANIM_V_SLIDE_WOBBLE_SMALL, BACK_ANIM_GROW),
    },

#define WEEZING_MISC_STATS                  \
        .baseHP        = 65,                \
        .baseAttack    = 90,                \
        .baseDefense   = 120,               \
        .baseSpeed     = 60,                \
        .baseSpAttack  = 85,                \
        .baseSpDefense = 70,                \
        .type1 = TYPE_POISON,               \
        .catchRate = 60,                    \
        .expYield = 172,                    \
        .evYield_Defense   = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,   \
        .noFlip = TRUE,                     \
        .natDexNum = NATIONAL_DEX_WEEZING,  \
        FOOTPRINT(Weezing)

    [SPECIES_WEEZING] =
    {
        .type2 = TYPE_POISON,
        .itemRare = ITEM_SMOKE_BALL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH},
        .bodyColor = BODY_COLOR_PURPLE,
        DEX_TEXT(Weezing, "Poison Gas"),
        DEX_SCALE(305, 3, 256, 0),
        HEIGHT_WEIGHT(12, 95),
        LEARNSETS(Weezing),
        FRONT_SPRITE(Weezing, 64, 64,  0, 6),
        BACK_SPRITE(Weezing, 64, 48,  9),
        PALETTES(Weezing),
        ICON(Weezing, 2),
        ANIMATIONS(WEEZING, 0, ANIM_V_SLIDE, BACK_ANIM_GROW),
        WEEZING_MISC_STATS,
    },
    [SPECIES_WEEZING_GALARIAN] =
    {
        .type2 = TYPE_FAIRY,
        .itemRare = ITEM_MISTY_SEED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE},
        .bodyColor = BODY_COLOR_GRAY,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Poison Gas"),
        DEX_SCALE(305, 3, 256, 0),
        HEIGHT_WEIGHT(30, 160),
        LEARNSETS(WeezingGalarian),
        FRONT_SPRITE(WeezingGalarian, 64, 64,  0, 6),
        BACK_SPRITE(WeezingGalarian, 64, 64,  0),
        PALETTES(WeezingGalarian),
        ICON(WeezingGalarian, 1),
        ANIMATIONS(WEEZING_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        WEEZING_MISC_STATS,
    },

    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 120,
        .expYield = 69,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RHYHORN,
        DEX_TEXT(Rhyhorn, "Spikes"),
        DEX_SCALE(267, 6, 256, 0),
        HEIGHT_WEIGHT(10, 1150),
        LEARNSETS(Rhyhorn),
        FRONT_SPRITE(Rhyhorn, 56, 40, 12, 0),
        BACK_SPRITE(Rhyhorn, 64, 48, 11),
        PALETTES(Rhyhorn),
        ICON(Rhyhorn, 1),
        FOOTPRINT(Rhyhorn),
        ANIMATIONS(RHYHORN, 0, ANIM_V_SHAKE, BACK_ANIM_V_SHAKE_LOW),
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RHYDON,
        DEX_TEXT(Rhydon, "Drill"),
        DEX_SCALE(256, 1, 299, 2),
        HEIGHT_WEIGHT(19, 1200),
        LEARNSETS(Rhydon),
        FRONT_SPRITE(Rhydon, 64, 56,  4, 0),
        BACK_SPRITE(Rhydon, 64, 56,  5),
        PALETTES(Rhydon),
        ICON(Rhydon, 1),
        FOOTPRINT(Rhydon),
        ANIMATIONS(RHYDON, 0, ANIM_H_SHAKE, BACK_ANIM_V_SHAKE_LOW),
    },

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP        = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHANSEY,
        DEX_TEXT(Chansey, "Egg"),
        DEX_SCALE(257, 7, 256, 0),
        HEIGHT_WEIGHT(11, 346),
        LEARNSETS(Chansey),
        FRONT_SPRITE(Chansey, 56, 48,  9, 0),
        BACK_SPRITE(Chansey, 64, 48, 11),
        PALETTES(Chansey),
        ICON(Chansey, 0),
        FOOTPRINT(Chansey),
        ANIMATIONS(CHANSEY, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 87,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TANGELA,
        DEX_TEXT(Tangela, "Vine"),
        DEX_SCALE(304, 1, 256, 0),
        HEIGHT_WEIGHT(10, 350),
        LEARNSETS(Tangela),
        FRONT_SPRITE(Tangela, 48, 40, 12, 0),
        BACK_SPRITE(Tangela, 64, 40, 12),
        PALETTES(Tangela),
        ICON(Tangela, 0),
        FOOTPRINT(Tangela),
        ANIMATIONS(TANGELA, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_V_STRETCH),
    },

#define KANGASKHAN_MISC_STATS                   \
        .type1 = TYPE_NORMAL,                   \
        .type2 = TYPE_NORMAL,                   \
        .catchRate = 45,                        \
        .evYield_HP        = 2,                 \
        .genderRatio = MON_FEMALE,              \
        .eggCycles = 20,                        \
        .friendship = 70,                       \
        .growthRate = GROWTH_MEDIUM_FAST,       \
        .eggGroup1 = EGG_GROUP_MONSTER,         \
        .eggGroup2 = EGG_GROUP_MONSTER,         \
        .bodyColor = BODY_COLOR_BROWN,          \
        .noFlip = FALSE,                        \
        .natDexNum = NATIONAL_DEX_KANGASKHAN,   \
        FOOTPRINT(Kangaskhan)

    [SPECIES_KANGASKHAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .expYield = 172,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS},
        DEX_TEXT(Kangaskhan, "Parent"),
        DEX_SCALE(256, 0, 387, 8),
        HEIGHT_WEIGHT(22, 800),
        LEARNSETS(Kangaskhan),
        FRONT_SPRITE(Kangaskhan, 64, 64,  1, 0),
        BACK_SPRITE(Kangaskhan, 64, 56,  6),
        PALETTES(Kangaskhan),
        ICON(Kangaskhan, 2),
        ANIMATIONS(KANGASKHAN, 0, ANIM_V_STRETCH, BACK_ANIM_CONCAVE_ARC_SMALL),
        KANGASKHAN_MISC_STATS,
    },
    [SPECIES_KANGASKHAN_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .expYield = 207,
        .abilities = {ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(KangaskhanMega, "Parent"),
        DEX_SCALE(256, 0, 387, 8),
        HEIGHT_WEIGHT(22, 1000),
        LEARNSETS(Kangaskhan),
        FRONT_SPRITE(KangaskhanMega, 64, 64,  0, 0),
        BACK_SPRITE(KangaskhanMega, 64, 56,  6),
        PALETTES(KangaskhanMega),
        ICON(KangaskhanMega, 2),
        ANIMATIONS(KANGASKHAN_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        KANGASKHAN_MISC_STATS,
    },

    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 59,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HORSEA,
        DEX_TEXT(Horsea, "Dragon"),
        DEX_SCALE(399, -1, 256, 0),
        HEIGHT_WEIGHT(4, 80),
        LEARNSETS(Horsea),
        FRONT_SPRITE(Horsea, 32, 40, 14, 0),
        BACK_SPRITE(Horsea, 48, 40, 14),
        PALETTES(Horsea),
        ICON(Horsea, 0),
        FOOTPRINT(Horsea),
        ANIMATIONS(HORSEA, 0, ANIM_V_JUMPS_SMALL, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 154,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_POISON_POINT, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SEADRA,
        DEX_TEXT(Seadra, "Dragon"),
        DEX_SCALE(299, 3, 256, 0),
        HEIGHT_WEIGHT(12, 250),
        LEARNSETS(Seadra),
        FRONT_SPRITE(Seadra, 64, 56,  6, 0),
        BACK_SPRITE(Seadra, 64, 56,  6),
        PALETTES(Seadra),
        ICON(Seadra, 0),
        FOOTPRINT(Seadra),
        ANIMATIONS(SEADRA, 0, ANIM_V_SLIDE, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 67,
        .baseDefense   = 60,
        .baseSpeed     = 63,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 64,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GOLDEEN,
        DEX_TEXT(Goldeen, "Goldfish"),
        DEX_SCALE(379, 4, 256, 0),
        HEIGHT_WEIGHT(6, 150),
        LEARNSETS(Goldeen),
        FRONT_SPRITE(Goldeen, 64, 40, 13, 0),
        BACK_SPRITE(Goldeen, 64, 48,  9),
        PALETTES(Goldeen),
        ICON(Goldeen, 0),
        FOOTPRINT(Goldeen),
        ANIMATIONS(GOLDEEN, 0, ANIM_H_SLIDE_WOBBLE, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 158,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SEAKING,
        DEX_TEXT(Seaking, "Goldfish"),
        DEX_SCALE(256, 3, 256, 0),
        HEIGHT_WEIGHT(13, 390),
        LEARNSETS(Seaking),
        FRONT_SPRITE(Seaking, 64, 56,  5, 0),
        BACK_SPRITE(Seaking, 64, 56,  6),
        PALETTES(Seaking),
        ICON(Seaking, 0),
        FOOTPRINT(Seaking),
        ANIMATIONS(SEAKING, 0, ANIM_V_SLIDE_WOBBLE, BACK_ANIM_CONVEX_DOUBLE_ARC),
    },

    [SPECIES_STARYU] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 68,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_STARYU,
        DEX_TEXT(Staryu, "Star Shape"),
        DEX_SCALE(326, 1, 256, 0),
        HEIGHT_WEIGHT(8, 345),
        LEARNSETS(Staryu),
        FRONT_SPRITE(Staryu, 40, 48, 11, 0),
        BACK_SPRITE(Staryu, 56, 56,  6),
        PALETTES(Staryu),
        ICON(Staryu, 2),
        FOOTPRINT(Staryu),
        ANIMATIONS(STARYU, 0, ANIM_TWIST_TWICE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 182,
        .evYield_Speed     = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STARMIE,
        DEX_TEXT(Starmie, "Mysterious"),
        DEX_SCALE(301, 3, 256, 0),
        HEIGHT_WEIGHT(11, 800),
        LEARNSETS(Starmie),
        FRONT_SPRITE(Starmie, 56, 56,  6, 0),
        BACK_SPRITE(Starmie, 64, 64,  4),
        PALETTES(Starmie),
        ICON(Starmie, 2),
        FOOTPRINT(Starmie),
        ANIMATIONS(STARMIE, 0, ANIM_TWIST, BACK_ANIM_SHAKE_GLOW_BLUE),
    },

#define MR_MIME_MISC_STATS                  \
        .catchRate = 45,                    \
        .expYield = 161,                    \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,  \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MR_MIME,  \
        FOOTPRINT(MrMime)

    [SPECIES_MR_MIME] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .type1 = TYPE_PSYCHIC,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_PSYCHIC,
    #endif
        .evYield_SpDefense = 2,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_PINK,
        DEX_TEXT(MrMime, "Barrier"),
        DEX_SCALE(258, 6, 256, 0),
        HEIGHT_WEIGHT(13, 545),
        LEARNSETS(MrMime),
        FRONT_SPRITE(MrMime, 56, 56,  6, 0),
        BACK_SPRITE(MrMime, 64, 48,  8),
        PALETTES(MrMime),
        ICON(MrMime, 0),
        ANIMATIONS(MR_MIME, 0, ANIM_H_SLIDE_SLOW, BACK_ANIM_SHRINK_GROW_VIBRATE),
        MR_MIME_MISC_STATS,
    },
    [SPECIES_MR_MIME_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .evYield_Speed     = 2,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Dancing"),
        DEX_SCALE(258, 6, 256, 0),
        HEIGHT_WEIGHT(14, 568),
        LEARNSETS(MrMimeGalarian),
        FRONT_SPRITE(MrMimeGalarian, 56, 56,  7, 0),
        BACK_SPRITE(MrMimeGalarian, 64, 48,  8),
        PALETTES(MrMimeGalarian),
        ICON(MrMimeGalarian, 0),
        ANIMATIONS(MR_MIME_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        MR_MIME_MISC_STATS,
    },

    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 100,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SCYTHER,
        DEX_TEXT(Scyther, "Mantis"),
        DEX_SCALE(256, 1, 293, 2),
        HEIGHT_WEIGHT(15, 560),
        LEARNSETS(Scyther),
        FRONT_SPRITE(Scyther, 56, 64,  1, 0),
        BACK_SPRITE(Scyther, 64, 64,  3),
        PALETTES(Scyther),
        ICON(Scyther, 1),
        FOOTPRINT(Scyther),
        ANIMATIONS(SCYTHER, 10, ANIM_H_VIBRATE, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_JYNX,
        DEX_TEXT(Jynx, "Human Shape"),
        DEX_SCALE(256, 3, 300, 1),
        HEIGHT_WEIGHT(14, 406),
        LEARNSETS(Jynx),
        FRONT_SPRITE(Jynx, 64, 48,  9, 0),
        BACK_SPRITE(Jynx, 56, 64,  3),
        PALETTES(Jynx),
        ICON(Jynx, 2),
        FOOTPRINT(Jynx),
        ANIMATIONS(JYNX, 0, ANIM_V_STRETCH, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed     = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ELECTABUZZ,
        DEX_TEXT(Electabuzz, "Electric"),
        DEX_SCALE(351, 8, 256, 0),
        HEIGHT_WEIGHT(11, 300),
        LEARNSETS(Electabuzz),
        FRONT_SPRITE(Electabuzz, 64, 64,  4, 0),
        BACK_SPRITE(Electabuzz, 64, 64,  4),
        PALETTES(Electabuzz),
        ICON(Electabuzz, 1),
        FOOTPRINT(Electabuzz),
        ANIMATIONS(ELECTABUZZ, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL_SLOW, BACK_ANIM_SHAKE_FLASH_YELLOW),
    },

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAGMAR,
        DEX_TEXT(Magmar, "Spitfire"),
        DEX_SCALE(277, 5, 256, 0),
        HEIGHT_WEIGHT(13, 445),
        LEARNSETS(Magmar),
        FRONT_SPRITE(Magmar, 64, 56,  4, 0),
        BACK_SPRITE(Magmar, 64, 64,  3),
        PALETTES(Magmar),
        ICON(Magmar, 0),
        FOOTPRINT(Magmar),
        ANIMATIONS(MAGMAR, 0, ANIM_H_SHAKE, BACK_ANIM_SHAKE_GLOW_RED),
    },

#define PINSIR_MISC_STATS                   \
        .type1 = TYPE_BUG,                  \
        .catchRate = 45,                    \
        .evYield_Attack    = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_BUG,         \
        .eggGroup2 = EGG_GROUP_BUG,         \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_PINSIR,   \
        LEARNSETS(Pinsir),                  \
        FOOTPRINT(Pinsir)

    [SPECIES_PINSIR] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .type2 = TYPE_BUG,
        .expYield = 175,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER, ABILITY_MOXIE},
        DEX_TEXT(Pinsir, "Stag Beetle"),
        DEX_SCALE(256, 2, 257, 0),
        HEIGHT_WEIGHT(15, 550),
        FRONT_SPRITE(Pinsir, 64, 64,  5, 0),
        BACK_SPRITE(Pinsir, 64, 56,  6),
        PALETTES(Pinsir),
        ICON(Pinsir, 2),
        ANIMATIONS(PINSIR, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_V_SHAKE_LOW),
        PINSIR_MISC_STATS,
    },
    [SPECIES_PINSIR_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .type2 = TYPE_FLYING,
        .expYield = 210,
        .abilities = {ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(PinsirMega, "Stag Beetle"),
        DEX_SCALE(256, 2, 257, 0),
        HEIGHT_WEIGHT(17, 590),
        FRONT_SPRITE(PinsirMega, 64, 64,  3, 4),
        BACK_SPRITE(PinsirMega, 64, 56,  7),
        PALETTES(PinsirMega),
        ICON(PinsirMega, 2),
        ANIMATIONS(PINSIR_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        PINSIR_MISC_STATS,
    },

    [SPECIES_TAUROS] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TAUROS,
        DEX_TEXT(Tauros, "Wild Bull"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(14, 884),
        LEARNSETS(Tauros),
        FRONT_SPRITE(Tauros, 64, 64,  5, 0),
        BACK_SPRITE(Tauros, 64, 48, 13),
        PALETTES(Tauros),
        ICON(Tauros, 2),
        FOOTPRINT(Tauros),
        ANIMATIONS(TAUROS, 10, ANIM_V_SHAKE_TWICE, BACK_ANIM_V_SHAKE_LOW),
    },

    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAGIKARP,
        DEX_TEXT(Magikarp, "Fish"),
        DEX_SCALE(310, 4, 256, 0),
        HEIGHT_WEIGHT(9, 100),
        LEARNSETS(Magikarp),
        FRONT_SPRITE(Magikarp, 48, 56,  4, 0),
        BACK_SPRITE(Magikarp, 64, 56,  6),
        PALETTES(Magikarp),
        ICON(Magikarp, 0),
        FOOTPRINT(Magikarp),
        ANIMATIONS(MAGIKARP, 0, ANIM_BOUNCE_ROTATE_TO_SIDES, BACK_ANIM_CONCAVE_ARC_LARGE),
    },

#define GYARADOS_MISC_STATS                 \
        .type1 = TYPE_WATER,                \
        .catchRate = 45,                    \
        .evYield_Attack    = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 5,                     \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_WATER_2,     \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_GYARADOS, \
        LEARNSETS(Gyarados),                \
        FOOTPRINT(Gyarados)

    [SPECIES_GYARADOS] =
    {
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .type2 = TYPE_FLYING,
        .expYield = 189,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_MOXIE},
        DEX_TEXT(Gyarados, "Atrocious"),
        DEX_SCALE(256, 6, 481, 13),
        HEIGHT_WEIGHT(65, 2350),
        FRONT_SPRITE(Gyarados, 64, 64,  2, 0),
        BACK_SPRITE(Gyarados, 64, 64,  5),
        PALETTES(Gyarados),
        ICON(Gyarados, 0),
        ANIMATIONS(GYARADOS, 0, ANIM_BOUNCE_ROTATE_TO_SIDES_SMALL, BACK_ANIM_V_SHAKE),
        GYARADOS_MISC_STATS,
    },
    [SPECIES_GYARADOS_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .type2 = TYPE_DARK,
        .expYield = 224,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(GyaradosMega, "Atrocious"),
        DEX_SCALE(256, 6, 481, 13),
        HEIGHT_WEIGHT(65, 3050),
        FRONT_SPRITE(GyaradosMega, 64, 64,  0, 6),
        BACK_SPRITE(GyaradosMega, 64, 64,  2),
        PALETTES(GyaradosMega),
        ICON(GyaradosMega, 0),
        ANIMATIONS(GYARADOS_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        GYARADOS_MISC_STATS,
    },

    [SPECIES_LAPRAS] =
    {
        .baseHP        = 130,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 187,
        .evYield_HP        = 2,
        .itemCommon = ITEM_MYSTIC_WATER,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LAPRAS,
        DEX_TEXT(Lapras, "Transport"),
        DEX_SCALE(257, 10, 423, 8),
        HEIGHT_WEIGHT(25, 2200),
        LEARNSETS(Lapras),
        FRONT_SPRITE(Lapras, 64, 64,  2, 0),
        BACK_SPRITE(Lapras, 56, 64,  3),
        PALETTES(Lapras),
        ICON(Lapras, 2),
        FOOTPRINT(Lapras),
        ANIMATIONS(LAPRAS, 0, ANIM_V_STRETCH, BACK_ANIM_SHAKE_GLOW_BLUE),
    },

    [SPECIES_DITTO] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 35,
        .expYield = 101,
        .evYield_HP        = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DITTO,
        .eggGroup2 = EGG_GROUP_DITTO,
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DITTO,
        DEX_TEXT(Ditto, "Transform"),
        DEX_SCALE(633, 23, 256, 0),
        HEIGHT_WEIGHT(3, 40),
        LEARNSETS(Ditto),
        FRONT_SPRITE(Ditto, 40, 40, 15, 0),
        BACK_SPRITE(Ditto, 48, 32, 17),
        PALETTES(Ditto),
        ICON(Ditto, 2),
        FOOTPRINT(Ditto),
        ANIMATIONS(DITTO, 0, ANIM_CIRCULAR_STRETCH_TWICE, BACK_ANIM_SHRINK_GROW),
    },

    [SPECIES_EEVEE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_EEVEE,
        DEX_TEXT(Eevee, "Evolution"),
        DEX_SCALE(476, 18, 256, 0),
        HEIGHT_WEIGHT(3, 65),
        LEARNSETS(Eevee),
        FRONT_SPRITE(Eevee, 40, 48, 11, 0),
        BACK_SPRITE(Eevee, 56, 48, 10),
        PALETTES(Eevee),
        ICON(Eevee, 2),
        FOOTPRINT(Eevee),
        ANIMATIONS(EEVEE, 0, ANIM_V_STRETCH, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_WATER_ABSORB, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VAPOREON,
        DEX_TEXT(Vaporeon, "Bubble Jet"),
        DEX_SCALE(316, 8, 256, 0),
        HEIGHT_WEIGHT(10, 290),
        LEARNSETS(Vaporeon),
        FRONT_SPRITE(Vaporeon, 48, 48,  9, 0),
        BACK_SPRITE(Vaporeon, 64, 56,  5),
        PALETTES(Vaporeon),
        ICON(Vaporeon, 0),
        FOOTPRINT(Vaporeon),
        ANIMATIONS(VAPOREON, 0, ANIM_GLOW_BLUE, BACK_ANIM_SHAKE_GLOW_BLUE),
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_JOLTEON,
        DEX_TEXT(Jolteon, "Lightning"),
        DEX_SCALE(283, 8, 256, 0),
        HEIGHT_WEIGHT(8, 245),
        LEARNSETS(Jolteon),
        FRONT_SPRITE(Jolteon, 48, 48, 10, 0),
        BACK_SPRITE(Jolteon, 56, 56,  7),
        PALETTES(Jolteon),
        ICON(Jolteon, 2),
        FOOTPRINT(Jolteon),
        ANIMATIONS(JOLTEON, 0, ANIM_GROW_VIBRATE, BACK_ANIM_SHAKE_FLASH_YELLOW),
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLASH_FIRE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FLAREON,
        DEX_TEXT(Flareon, "Flame"),
        DEX_SCALE(306, 12, 256, 0),
        HEIGHT_WEIGHT(9, 250),
        LEARNSETS(Flareon),
        FRONT_SPRITE(Flareon, 56, 56, 11, 0),
        BACK_SPRITE(Flareon, 64, 56,  9),
        PALETTES(Flareon),
        ICON(Flareon, 3),
        FOOTPRINT(Flareon),
        ANIMATIONS(FLAREON, 0, ANIM_V_SHAKE, BACK_ANIM_SHAKE_GLOW_RED),
    },

    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 79,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PORYGON,
        DEX_TEXT(Porygon, "Virtual"),
        DEX_SCALE(328, 15, 256, 0),
        HEIGHT_WEIGHT(8, 365),
        LEARNSETS(Porygon),
        FRONT_SPRITE(Porygon, 40, 40, 14, 0),
        BACK_SPRITE(Porygon, 56, 40, 13),
        PALETTES(Porygon),
        ICON(Porygon, 0),
        FOOTPRINT(Porygon),
        ANIMATIONS(PORYGON, 0, ANIM_V_JUMPS_SMALL, BACK_ANIM_H_VIBRATE),
    },

    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_OMANYTE,
        DEX_TEXT(Omanyte, "Spiral"),
        DEX_SCALE(521, 22, 256, 0),
        HEIGHT_WEIGHT(4, 75),
        LEARNSETS(Omanyte),
        FRONT_SPRITE(Omanyte, 40, 40, 14, 0),
        BACK_SPRITE(Omanyte, 48, 40, 12),
        PALETTES(Omanyte),
        ICON(Omanyte, 0),
        FOOTPRINT(Omanyte),
        ANIMATIONS(OMANYTE, 0, ANIM_V_SLIDE_WOBBLE_SMALL, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_OMASTAR,
        DEX_TEXT(Omastar, "Spiral"),
        DEX_SCALE(307, 7, 256, 0),
        HEIGHT_WEIGHT(10, 350),
        LEARNSETS(Omastar),
        FRONT_SPRITE(Omastar, 64, 56,  9, 0),
        BACK_SPRITE(Omastar, 56, 56,  7),
        PALETTES(Omastar),
        ICON(Omastar, 0),
        FOOTPRINT(Omastar),
        ANIMATIONS(OMASTAR, 0, ANIM_GROW_VIBRATE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KABUTO,
        DEX_TEXT(Kabuto, "Shellfish"),
        DEX_SCALE(454, 21, 256, 0),
        HEIGHT_WEIGHT(5, 115),
        LEARNSETS(Kabuto),
        FRONT_SPRITE(Kabuto, 40, 32, 16, 0),
        BACK_SPRITE(Kabuto, 48, 40, 13),
        PALETTES(Kabuto),
        ICON(Kabuto, 2),
        FOOTPRINT(Kabuto),
        ANIMATIONS(KABUTO, 0, ANIM_H_SLIDE_WOBBLE, BACK_ANIM_DIP_RIGHT_SIDE),
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KABUTOPS,
        DEX_TEXT(Kabutops, "Shellfish"),
        DEX_SCALE(271, 3, 256, 0),
        HEIGHT_WEIGHT(13, 405),
        LEARNSETS(Kabutops),
        FRONT_SPRITE(Kabutops, 64, 64,  2, 0),
        BACK_SPRITE(Kabutops, 64, 56,  6),
        PALETTES(Kabutops),
        ICON(Kabutops, 2),
        FOOTPRINT(Kabutops),
        ANIMATIONS(KABUTOPS, 0, ANIM_H_SHAKE, BACK_ANIM_JOLT_RIGHT),
    },

#define AERODACTYL_MISC_STATS                   \
        .type1 = TYPE_ROCK,                     \
        .type2 = TYPE_FLYING,                   \
        .catchRate = 45,                        \
        .evYield_Speed     = 2,                 \
        .genderRatio = PERCENT_FEMALE(12.5),    \
        .eggCycles = 35,                        \
        .friendship = 70,                       \
        .growthRate = GROWTH_SLOW,              \
        .eggGroup1 = EGG_GROUP_FLYING,          \
        .eggGroup2 = EGG_GROUP_FLYING,          \
        .bodyColor = BODY_COLOR_PURPLE,         \
        .noFlip = FALSE,                        \
        .natDexNum = NATIONAL_DEX_AERODACTYL,   \
        LEARNSETS(Aerodactyl),                  \
        FOOTPRINT(Aerodactyl)

    [SPECIES_AERODACTYL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = 180,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE},
        DEX_TEXT(Aerodactyl, "Fossil"),
        DEX_SCALE(256, 0, 302, 4),
        HEIGHT_WEIGHT(18, 590),
        FRONT_SPRITE(Aerodactyl, 64, 64,  4, 9),
        BACK_SPRITE(Aerodactyl, 64, 48, 10),
        PALETTES(Aerodactyl),
        ICON(Aerodactyl, 2),
        ANIMATIONS(AERODACTYL, 0, ANIM_V_SLIDE_SLOW, BACK_ANIM_JOLT_RIGHT),
        AERODACTYL_MISC_STATS,
    },
    [SPECIES_AERODACTYL_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .expYield = 215,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(AerodactylMega, "Fossil"),
        DEX_SCALE(256, 0, 302, 4),
        HEIGHT_WEIGHT(21, 790),
        FRONT_SPRITE(AerodactylMega, 64, 64,  2, 7),
        BACK_SPRITE(AerodactylMega, 64, 64,  8),
        PALETTES(AerodactylMega),
        ICON(AerodactylMega, 2),
        ANIMATIONS(AERODACTYL_MEGA, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        AERODACTYL_MISC_STATS,
    },

    [SPECIES_SNORLAX] =
    {
        .baseHP        = 160,
        .baseAttack    = 110,
        .baseDefense   = 65,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 25,
        .expYield = 189,
        .evYield_HP        = 2,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_IMMUNITY, ABILITY_THICK_FAT, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SNORLAX,
        DEX_TEXT(Snorlax, "Sleeping"),
        DEX_SCALE(256, 4, 423, 11),
        HEIGHT_WEIGHT(21, 4600),
        LEARNSETS(Snorlax),
        FRONT_SPRITE(Snorlax, 64, 64,  1, 0),
        BACK_SPRITE(Snorlax, 64, 40, 13),
        PALETTES(Snorlax),
        ICON(Snorlax, 3),
        FOOTPRINT(Snorlax),
        ANIMATIONS(SNORLAX, 0, ANIM_V_STRETCH, BACK_ANIM_DIP_RIGHT_SIDE),
    },

#define ARTICUNO_MISC_STATS                 \
        .type2 = TYPE_FLYING,               \
        .catchRate = 3,                     \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 80,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_ARTICUNO, \
        FOOTPRINT(Articuno)

    [SPECIES_ARTICUNO] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 125,
        .evYield_SpDefense = 3,
        .type1 = TYPE_ICE,
        .expYield = 261,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_CLOAK},
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_LEGENDARY,
        DEX_TEXT(Articuno, "Freeze"),
        DEX_SCALE(256, 0, 309, 2),
        HEIGHT_WEIGHT(17, 554),
        LEARNSETS(Articuno),
        FRONT_SPRITE(Articuno, 64, 64,  2, 0),
        BACK_SPRITE(Articuno, 64, 56,  5),
        PALETTES(Articuno),
        ICON(Articuno, 2),
        ANIMATIONS(ARTICUNO, 0, ANIM_GROW_VIBRATE, BACK_ANIM_SHAKE_GLOW_BLUE),
        ARTICUNO_MISC_STATS,
    },
    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 95,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .evYield_SpAttack  = 3,
        .type1 = TYPE_PSYCHIC,
        .expYield = 290,
        .abilities = {ABILITY_COMPETITIVE, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Cruel"),
        DEX_SCALE(256, 0, 309, 2),
        HEIGHT_WEIGHT(17, 509),
        LEARNSETS(ArticunoGalarian),
        FRONT_SPRITE(ArticunoGalarian, 64, 56,  7, 10),
        BACK_SPRITE(ArticunoGalarian, 64, 56,  5),
        PALETTES(ArticunoGalarian),
        ICON(ArticunoGalarian, 2),
        ANIMATIONS(ARTICUNO_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ARTICUNO_MISC_STATS,
    },

#define ZAPDOS_MISC_STATS                   \
        .type2 = TYPE_FLYING,               \
        .catchRate = 3,                     \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 80,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_YELLOW,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_ZAPDOS,   \
        FOOTPRINT(Zapdos)

    [SPECIES_ZAPDOS] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .expYield = 261,
        .evYield_SpAttack  = 3,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_STATIC},
    #else
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
    #endif
        .flags = SPECIES_FLAG_LEGENDARY,
        DEX_TEXT(Zapdos, "Electric"),
        DEX_SCALE(256, 0, 318, 3),
        HEIGHT_WEIGHT(16, 526),
        LEARNSETS(Zapdos),
        FRONT_SPRITE(Zapdos, 64, 56,  4, 8),
        BACK_SPRITE(Zapdos, 64, 40, 12),
        PALETTES(Zapdos),
        ICON(Zapdos, 0),
        ANIMATIONS(ZAPDOS, 0, ANIM_FLASH_YELLOW, BACK_ANIM_SHAKE_FLASH_YELLOW),
        ZAPDOS_MISC_STATS,
    },
    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .type1 = TYPE_FIGHTING,
        .expYield = 290,
        .evYield_Attack    = 3,
        .abilities = {ABILITY_DEFIANT, ABILITY_NONE, ABILITY_NONE},
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Strong Legs"),
        DEX_SCALE(256, 0, 318, 3),
        HEIGHT_WEIGHT(16, 582),
        LEARNSETS(ZapdosGalarian),
        FRONT_SPRITE(ZapdosGalarian, 48, 64,  0, 0),
        BACK_SPRITE(ZapdosGalarian, 56, 48,  9),
        PALETTES(ZapdosGalarian),
        ICON(ZapdosGalarian, 0),
        ANIMATIONS(ZAPDOS_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        ZAPDOS_MISC_STATS,
    },

#define MOLTRES_MISC_STATS                  \
        .type2 = TYPE_FLYING,               \
        .catchRate = 3,                     \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 80,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MOLTRES,  \
        FOOTPRINT(Moltres)

    [SPECIES_MOLTRES] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .flags = SPECIES_FLAG_LEGENDARY,
        DEX_TEXT(Moltres, "Flame"),
        DEX_SCALE(270, 0, 387, 8),
        HEIGHT_WEIGHT(20, 600),
        LEARNSETS(Moltres),
        FRONT_SPRITE(Moltres, 64, 64,  1, 0),
        BACK_SPRITE(Moltres, 64, 56,  5),
        PALETTES(Moltres),
        ICON(Moltres, 0),
        ANIMATIONS(MOLTRES, 0, ANIM_V_SQUISH_AND_BOUNCE_SLOW, BACK_ANIM_SHAKE_GLOW_RED),
        MOLTRES_MISC_STATS,
    },
    [SPECIES_MOLTRES_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .type1 = TYPE_DARK,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .abilities = {ABILITY_BERSERK, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Malevolent"),
        DEX_SCALE(270, 0, 387, 8),
        HEIGHT_WEIGHT(20, 660),
        MOLTRES_MISC_STATS,
        LEARNSETS(MoltresGalarian),
        FRONT_SPRITE(MoltresGalarian, 64, 64,  1, 0),
        BACK_SPRITE(MoltresGalarian, 56, 56,  5),
        PALETTES(MoltresGalarian),
        ICON(MoltresGalarian, 0),
        ANIMATIONS(MOLTRES_GALARIAN, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
    },

    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRATINI,
        DEX_TEXT(Dratini, "Dragon"),
        DEX_SCALE(256, 8, 386, 6),
        HEIGHT_WEIGHT(18, 33),
        LEARNSETS(Dratini),
        FRONT_SPRITE(Dratini, 56, 48,  9, 0),
        BACK_SPRITE(Dratini, 56, 48,  8),
        PALETTES(Dratini),
        ICON(Dratini, 0),
        FOOTPRINT(Dratini),
        ANIMATIONS(DRATINI, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_H_SLIDE),
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRAGONAIR,
        DEX_TEXT(Dragonair, "Dragon"),
        DEX_SCALE(256, 0, 411, 5),
        HEIGHT_WEIGHT(40, 165),
        LEARNSETS(Dragonair),
        FRONT_SPRITE(Dragonair, 64, 64,  1, 0),
        BACK_SPRITE(Dragonair, 40, 56,  4),
        PALETTES(Dragonair),
        ICON(Dragonair, 0),
        FOOTPRINT(Dragonair),
        ANIMATIONS(DRAGONAIR, 0, ANIM_GROW_VIBRATE, BACK_ANIM_TRIANGLE_DOWN),
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRAGONITE,
        DEX_TEXT(Dragonite, "Dragon"),
        DEX_SCALE(256, 0, 309, 4),
        HEIGHT_WEIGHT(22, 2100),
        LEARNSETS(Dragonite),
        FRONT_SPRITE(Dragonite, 64, 64,  0, 0),
        BACK_SPRITE(Dragonite, 64, 64,  1),
        PALETTES(Dragonite),
        ICON(Dragonite, 2),
        FOOTPRINT(Dragonite),
        ANIMATIONS(DRAGONITE, 0, ANIM_V_SHAKE, BACK_ANIM_V_SHAKE),
    },

#define SPECIES_MEWTWO_MISC_STATS           \
        .type1 = TYPE_PSYCHIC,              \
        .catchRate = 3,                     \
        .evYield_SpAttack  = 3,             \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 0,                    \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_PURPLE,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MEWTWO,   \
        LEARNSETS(Mewtwo),                  \
        FOOTPRINT(Mewtwo)

    [SPECIES_MEWTWO] =
    {
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .type2 = TYPE_PSYCHIC,
        .expYield = 306,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE},
        .flags = SPECIES_FLAG_LEGENDARY,
        DEX_TEXT(Mewtwo, "Genetic"),
        DEX_SCALE(256, 0, 309, 4),
        HEIGHT_WEIGHT(20, 1220),
        FRONT_SPRITE(Mewtwo, 64, 64,  0, 0),
        BACK_SPRITE(Mewtwo, 64, 64,  1),
        PALETTES(Mewtwo),
        ICON(Mewtwo, 2),
        ANIMATIONS(MEWTWO, 0, ANIM_GROW_VIBRATE, BACK_ANIM_GROW_STUTTER),
        SPECIES_MEWTWO_MISC_STATS,
    },
    [SPECIES_MEWTWO_MEGA_X] =
    {
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .type2 = TYPE_FIGHTING,
        .expYield = 351,
        .abilities = {ABILITY_STEADFAST, ABILITY_STEADFAST, ABILITY_STEADFAST},
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(MewtwoMegaX, "Genetic"),
        DEX_SCALE(256, 0, 309, 4),
        HEIGHT_WEIGHT(23, 1270),
        FRONT_SPRITE(MewtwoMegaX, 48, 64,  0, 0),
        BACK_SPRITE(MewtwoMegaX, 56, 64,  1),
        PALETTES(MewtwoMegaX),
        ICON(MewtwoMegaX, 2),
        ANIMATIONS(MEWTWO_MEGA_X, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SPECIES_MEWTWO_MISC_STATS,
    },
    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .type2 = TYPE_PSYCHIC,
        .expYield = 351,
        .abilities = {ABILITY_INSOMNIA, ABILITY_INSOMNIA, ABILITY_INSOMNIA},
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(MewtwoMegaY, "Genetic"),
        DEX_SCALE(256, 0, 309, 4),
        HEIGHT_WEIGHT(15, 330),
        FRONT_SPRITE(MewtwoMegaY, 40, 64,  0, 3),
        BACK_SPRITE(MewtwoMegaY, 64, 64,  2),
        PALETTES(MewtwoMegaY),
        ICON(MewtwoMegaY, 2),
        ANIMATIONS(MEWTWO_MEGA_Y, 0, ANIM_V_SQUISH_AND_BOUNCE, BACK_ANIM_NONE),
        SPECIES_MEWTWO_MISC_STATS,
    },

    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_MEW,
        DEX_TEXT(Mew, "New Species"),
        DEX_SCALE(457, -2, 256, 0),
        HEIGHT_WEIGHT(4, 40),
        LEARNSETS(Mew),
        FRONT_SPRITE(Mew, 64, 48,  9, 11),
        BACK_SPRITE(Mew, 64, 64,  0),
        PALETTES(Mew),
        ICON(Mew, 0),
        FOOTPRINT(Mew),
        ANIMATIONS(MEW, 0, ANIM_ZIGZAG_SLOW, BACK_ANIM_CONCAVE_ARC_SMALL),
    },

    [SPECIES_CHIKORITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 49,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHIKORITA,
        DEX_TEXT(Chikorita, "Leaf"),
        DEX_SCALE(512, 20, 256, 0),
        HEIGHT_WEIGHT(9, 64),
    },

    [SPECIES_BAYLEEF] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 63,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BAYLEEF,
        DEX_TEXT(Bayleef, "Leaf"),
        DEX_SCALE(296, 4, 256, 0),
        HEIGHT_WEIGHT(12, 158),
    },

    [SPECIES_MEGANIUM] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 83,
        .baseSpDefense = 100,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MEGANIUM,
        DEX_TEXT(Meganium, "Herb"),
        DEX_SCALE(256, 0, 277, 1),
        HEIGHT_WEIGHT(18, 1005),
    },

    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CYNDAQUIL,
        DEX_TEXT(Cyndaquil, "Fire Mouse"),
        DEX_SCALE(539, 21, 256, 0),
        HEIGHT_WEIGHT(5, 79),
    },

    [SPECIES_QUILAVA] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_QUILAVA,
        DEX_TEXT(Quilava, "Volcano"),
        DEX_SCALE(329, 11, 256, 0),
        HEIGHT_WEIGHT(9, 190),
    },

#define TYPHLOSION_MISC_STATS   \
        .type1 = TYPE_FIRE,                                             \
        .catchRate = 45,                                                \
        .expYield = 240,                                                \
        .evYield_SpAttack  = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = 70,                                               \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroup1 = EGG_GROUP_FIELD,                                   \
        .eggGroup2 = EGG_GROUP_FIELD,                                   \
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_FLASH_FIRE}, \
        .bodyColor = BODY_COLOR_YELLOW,                                 \
        .noFlip = FALSE,                                                \
        .natDexNum = NATIONAL_DEX_TYPHLOSION

    [SPECIES_TYPHLOSION] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .type2 = TYPE_FIRE,
        DEX_TEXT(Typhlosion, "Volcano"),
        DEX_SCALE(256, 0, 268, 1),
        HEIGHT_WEIGHT(17, 795),
        TYPHLOSION_MISC_STATS,
    },
    [SPECIES_TYPHLOSION_HISUIAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .type2 = TYPE_GHOST,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Ghost Flame"),
        DEX_SCALE(256, 0, 268, 1),
        HEIGHT_WEIGHT(16, 698),
        TYPHLOSION_MISC_STATS,
    },

    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 64,
        .baseSpeed     = 43,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TOTODILE,
        DEX_TEXT(Totodile, "Big Jaw"),
        DEX_SCALE(487, 20, 256, 0),
        HEIGHT_WEIGHT(6, 95),
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 59,
        .baseSpDefense = 63,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CROCONAW,
        DEX_TEXT(Croconaw, "Big Jaw"),
        DEX_SCALE(378, 13, 256, 0),
        HEIGHT_WEIGHT(11, 250),
    },

    [SPECIES_FERALIGATR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 79,
        .baseSpDefense = 83,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FERALIGATR,
        DEX_TEXT(Feraligatr, "Big Jaw"),
        DEX_SCALE(256, 0, 342, 7),
        HEIGHT_WEIGHT(23, 888),
    },

    [SPECIES_SENTRET] =
    {
        .baseHP        = 35,
        .baseAttack    = 46,
        .baseDefense   = 34,
        .baseSpeed     = 20,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 43,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SENTRET,
        DEX_TEXT(Sentret, "Scout"),
        DEX_SCALE(439, 12, 256, 0),
        HEIGHT_WEIGHT(8, 60),
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 85,
        .baseAttack    = 76,
        .baseDefense   = 64,
        .baseSpeed     = 90,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FURRET,
        DEX_TEXT(Furret, "Long Body"),
        DEX_SCALE(346, 11, 256, 0),
        HEIGHT_WEIGHT(18, 325),
    },

    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 36,
        .baseSpDefense = 56,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HOOTHOOT,
        DEX_TEXT(Hoothoot, "Owl"),
        DEX_SCALE(380, -2, 256, 0),
        HEIGHT_WEIGHT(7, 212),
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpDefense = 96,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpAttack  = 86,
    #else
        .baseSpAttack  = 76,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 158,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NOCTOWL,
        DEX_TEXT(Noctowl, "Owl"),
        DEX_SCALE(278, 3, 256, 0),
        HEIGHT_WEIGHT(16, 408),
    },

    [SPECIES_LEDYBA] =
    {
        .baseHP        = 40,
        .baseAttack    = 20,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LEDYBA,
        DEX_TEXT(Ledyba, "Five Star"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(10, 108),
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 110,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LEDIAN,
        DEX_TEXT(Ledian, "Five Star"),
        DEX_SCALE(256, 2, 256, 0),
        HEIGHT_WEIGHT(14, 356),
    },

    [SPECIES_SPINARAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SPINARAK,
        DEX_TEXT(Spinarak, "String Spit"),
        DEX_SCALE(414, 21, 256, 0),
        HEIGHT_WEIGHT(5, 85),
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpDefense = 70,
    #else
        .baseSpDefense = 60,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 140,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ARIADOS,
        DEX_TEXT(Ariados, "Long Leg"),
        DEX_SCALE(316, 8, 256, 0),
        HEIGHT_WEIGHT(11, 335),
    },

    [SPECIES_CROBAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FLYING,
        .catchRate = 90,
        .expYield = 241,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CROBAT,
        DEX_TEXT(Crobat, "Bat"),
        DEX_SCALE(256, 0, 281, 1),
        HEIGHT_WEIGHT(18, 750),
    },

    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 75,
        .baseAttack    = 38,
        .baseDefense   = 38,
        .baseSpeed     = 67,
        .baseSpAttack  = 56,
        .baseSpDefense = 56,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 66,
        .evYield_HP        = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHINCHOU,
        DEX_TEXT(Chinchou, "Angler"),
        DEX_SCALE(424, -2, 256, 0),
        HEIGHT_WEIGHT(5, 120),
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 67,
        .baseSpAttack  = 76,
        .baseSpDefense = 76,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 161,
        .evYield_HP        = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LANTURN,
        DEX_TEXT(Lanturn, "Light"),
        DEX_SCALE(269, 6, 256, 0),
        HEIGHT_WEIGHT(12, 225),
    },

#define PICHU_BASE_STATS(flip)                                              \
    {                                                                       \
        .baseHP        = 20,                                                \
        .baseAttack    = 40,                                                \
        .baseDefense   = 15,                                                \
        .baseSpeed     = 60,                                                \
        .baseSpAttack  = 35,                                                \
        .baseSpDefense = 35,                                                \
        .type1 = TYPE_ELECTRIC,                                             \
        .type2 = TYPE_ELECTRIC,                                             \
        .catchRate = 190,                                                   \
        .expYield = 41,                                                     \
        .evYield_Speed     = 1,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 10,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                                \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD}, \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .noFlip = flip,                                                     \
        .natDexNum = NATIONAL_DEX_PICHU,                                    \
        DEX_TEXT(Pichu, "Tiny Mouse"),                                      \
        DEX_SCALE(508, 20, 256, 0),                                         \
        HEIGHT_WEIGHT(3, 20),                                               \
    }
    [SPECIES_PICHU]             = PICHU_BASE_STATS(FLIP),
    [SPECIES_PICHU_SPIKY_EARED] = PICHU_BASE_STATS(NO_FLIP),

    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = CLEFAIRY_FAMILY_TYPE,
        .type2 = CLEFAIRY_FAMILY_TYPE,
        .catchRate = 150,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CLEFFA,
        DEX_TEXT(Cleffa, "Star Shape"),
        DEX_SCALE(462, 23, 256, 0),
        HEIGHT_WEIGHT(3, 30),
    },

    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        .type1 = TYPE_NORMAL,
        .type2 = JIGGLYPUFF_FAMILY_TYPE_2,
        .catchRate = 170,
        .expYield = 42,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_IGGLYBUFF,
        DEX_TEXT(Igglybuff, "Balloon"),
        DEX_SCALE(457, -1, 256, 0),
        HEIGHT_WEIGHT(3, 10),
    },

#if P_UPDATED_TYPES >= GEN_6
    #define TOGEPI_FAMILY_TYPE TYPE_FAIRY
#else
    #define TOGEPI_FAMILY_TYPE TYPE_NORMAL
#endif
    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .type1 = TOGEPI_FAMILY_TYPE,
        .type2 = TOGEPI_FAMILY_TYPE,
        .catchRate = 190,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TOGEPI,
        DEX_TEXT(Togepi, "Spike Ball"),
        DEX_SCALE(507, 23, 256, 0),
        HEIGHT_WEIGHT(3, 15),
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,
        .type1 = TOGEPI_FAMILY_TYPE,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TOGETIC,
        DEX_TEXT(Togetic, "Happiness"),
        DEX_SCALE(424, 17, 256, 0),
        HEIGHT_WEIGHT(6, 32),
    },

    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NATU,
        DEX_TEXT(Natu, "Tiny Bird"),
        DEX_SCALE(610, 25, 256, 0),
        HEIGHT_WEIGHT(2, 20),
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_XATU,
        DEX_TEXT(Xatu, "Mystic"),
        DEX_SCALE(256, 6, 318, 4),
        HEIGHT_WEIGHT(15, 150),
    },

    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 235,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAREEP,
        DEX_TEXT(Mareep, "Wool"),
        DEX_SCALE(379, 18, 256, 0),
        HEIGHT_WEIGHT(6, 78),
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 128,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FLAAFFY,
        DEX_TEXT(Flaaffy, "Wool"),
        DEX_SCALE(372, 15, 256, 0),
        HEIGHT_WEIGHT(8, 133),
    },

#define AMPHAROS_MISC_STATS                 \
        .type1 = TYPE_ELECTRIC,             \
        .catchRate = 45,                    \
        .evYield_SpAttack  = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_YELLOW,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_AMPHAROS, \
        DEX_SCALE(256, 4, 256, 0),          \
        HEIGHT_WEIGHT(14, 615)

#if P_UPDATED_STATS >= GEN_6
    #define AMPHAROS_DEFENSE 85
#else
    #define AMPHAROS_DEFENSE 75
#endif

    [SPECIES_AMPHAROS] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 90,
        .baseDefense   = AMPHAROS_DEFENSE,
        .type2 = TYPE_ELECTRIC,
        .expYield = 230,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        DEX_TEXT(Ampharos, "Light"),
        AMPHAROS_MISC_STATS,
    },
    [SPECIES_AMPHAROS_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseSpeed     = 45,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .baseDefense   = AMPHAROS_DEFENSE + 20,
        .type2 = TYPE_DRAGON,
        .expYield = 275,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(AmpharosMega, "Light"),
        AMPHAROS_MISC_STATS,
    },

    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
    #if P_UPDATED_STATS >= GEN_6
        .baseDefense   = 95,
    #else
        .baseDefense   = 85,
    #endif
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BELLOSSOM,
        DEX_TEXT(Bellossom, "Flower"),
        DEX_SCALE(472, 21, 256, 0),
        HEIGHT_WEIGHT(4, 58),
    },

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_WATER,
    #endif
        .catchRate = 190,
        .expYield = 88,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MARILL,
        DEX_TEXT(Marill, "Aqua Mouse"),
        DEX_SCALE(476, 20, 256, 0),
        HEIGHT_WEIGHT(4, 85),
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpDefense = 80,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 60,
    #else
        .baseSpAttack  = 50,
    #endif
        .type1 = TYPE_WATER,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_WATER,
    #endif
        .catchRate = 75,
        .expYield = 189,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_AZUMARILL,
        DEX_TEXT(Azumarill, "Aqua Rabbit"),
        DEX_SCALE(448, 16, 256, 0),
        HEIGHT_WEIGHT(8, 285),
    },

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 65,
        .expYield = 144,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SUDOWOODO,
        DEX_TEXT(Sudowoodo, "Imitation"),
        DEX_SCALE(305, 8, 256, 0),
        HEIGHT_WEIGHT(12, 380),
    },

    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_POLITOED,
        DEX_TEXT(Politoed, "Frog"),
        DEX_SCALE(289, 6, 256, 0),
        HEIGHT_WEIGHT(11, 339),
    },

    [SPECIES_HOPPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HOPPIP,
        DEX_TEXT(Hoppip, "Cottonweed"),
        DEX_SCALE(562, -7, 256, 0),
        HEIGHT_WEIGHT(4, 5),
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SKIPLOOM,
        DEX_TEXT(Skiploom, "Cottonweed"),
        DEX_SCALE(387, 0, 256, 0),
        HEIGHT_WEIGHT(6, 10),
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 95,
    #else
        .baseSpDefense = 85,
    #endif
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 207,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_JUMPLUFF,
        DEX_TEXT(Jumpluff, "Cottonweed"),
        DEX_SCALE(418, -4, 256, 0),
        HEIGHT_WEIGHT(8, 30),
    },

    [SPECIES_AIPOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_AIPOM,
        DEX_TEXT(Aipom, "Long Tail"),
        DEX_SCALE(363, 6, 256, 0),
        HEIGHT_WEIGHT(8, 115),
    },

    [SPECIES_SUNKERN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 235,
        .expYield = 36,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SUNKERN,
        DEX_TEXT(Sunkern, "Seed"),
        DEX_SCALE(541, 0, 256, 0),
        HEIGHT_WEIGHT(3, 18),
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 149,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SUNFLORA,
        DEX_TEXT(Sunflora, "Sun"),
        DEX_SCALE(444, 15, 256, 0),
        HEIGHT_WEIGHT(8, 85),
    },

    [SPECIES_YANMA] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 78,
        .evYield_Speed     = 1,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_COMPOUND_EYES, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_YANMA,
        DEX_TEXT(Yanma, "Clear Wing"),
        DEX_SCALE(274, -1, 256, 0),
        HEIGHT_WEIGHT(12, 380),
    },

    [SPECIES_WOOPER] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 42,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WOOPER,
        DEX_TEXT(Wooper, "Water Fish"),
        DEX_SCALE(479, 21, 256, 0),
        HEIGHT_WEIGHT(4, 85),
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 95,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_QUAGSIRE,
        DEX_TEXT(Quagsire, "Water Fish"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(14, 750),
    },

    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ESPEON,
        DEX_TEXT(Espeon, "Sun"),
        DEX_SCALE(363, 14, 256, 0),
        HEIGHT_WEIGHT(9, 265),
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_UMBREON,
        DEX_TEXT(Umbreon, "Moonlight"),
        DEX_SCALE(317, 11, 256, 0),
        HEIGHT_WEIGHT(10, 270),
    },

    [SPECIES_MURKROW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 42,
        .baseSpeed     = 91,
        .baseSpAttack  = 85,
        .baseSpDefense = 42,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 81,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MURKROW,
        DEX_TEXT(Murkrow, "Darkness"),
        DEX_SCALE(401, -8, 256, 1),
        HEIGHT_WEIGHT(5, 21),
    },

#define SLOWKING_MISC_STATS                 \
        .type2 = TYPE_PSYCHIC,              \
        .catchRate = 70,                    \
        .expYield = 172,                    \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_WATER_1,     \
        .bodyColor = BODY_COLOR_PINK,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SLOWKING, \
        DEX_SCALE(256, 0, 309, 5)

    [SPECIES_SLOWKING] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .type1 = TYPE_WATER,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        DEX_TEXT(Slowking, "Royal"),
        HEIGHT_WEIGHT(20, 795),
        SLOWKING_MISC_STATS,
    },
    [SPECIES_SLOWKING_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .type1 = TYPE_POISON,
        .evYield_SpDefense = 2,
        .abilities = {ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Hexpert"),
        HEIGHT_WEIGHT(18, 795),
        SLOWKING_MISC_STATS,
    },

    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 85,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 87,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MISDREAVUS,
        DEX_TEXT(Misdreavus, "Screech"),
        DEX_SCALE(407, -8, 256, 0),
        HEIGHT_WEIGHT(7, 10),
    },


#define UNOWN_BASE_STATS(flip)                          \
    {                                                   \
        .baseHP        = 48,                            \
        .baseAttack    = 72,                            \
        .baseDefense   = 48,                            \
        .baseSpeed     = 48,                            \
        .baseSpAttack  = 72,                            \
        .baseSpDefense = 48,                            \
        .type1 = TYPE_PSYCHIC,                          \
        .type2 = TYPE_PSYCHIC,                          \
        .catchRate = 225,                               \
        .expYield = 118,                                \
        .evYield_Attack    = 1,                         \
        .evYield_SpAttack  = 1,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 40,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_MEDIUM_FAST,               \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_BLACK,                  \
        .noFlip = flip,                                 \
        .natDexNum = NATIONAL_DEX_UNOWN,                \
        DEX_TEXT(Unown, "Symbol"),                      \
        DEX_SCALE(411, 2, 256, 0),                      \
        HEIGHT_WEIGHT(5, 50),                           \
    }
    [SPECIES_UNOWN]   = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_B] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_C] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_D] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_E] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_F] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_G] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_H] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_I] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_J] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_K] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_L] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_M] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_N] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_O] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_P] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_Q] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_R] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_S] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_T] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_U] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_V] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_W] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_X] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_Y] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_Z] = UNOWN_BASE_STATS(NO_FLIP),
    [SPECIES_UNOWN_EMARK] = UNOWN_BASE_STATS(FLIP),
    [SPECIES_UNOWN_QMARK] = UNOWN_BASE_STATS(NO_FLIP),

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 142,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WOBBUFFET,
        DEX_TEXT(Wobbuffet, "Patient"),
        DEX_SCALE(274, 4, 256, 0),
        HEIGHT_WEIGHT(13, 285),
    },

    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GIRAFARIG,
        DEX_TEXT(Girafarig, "Long Neck"),
        DEX_SCALE(281, 1, 256, 0),
        HEIGHT_WEIGHT(15, 415),
    },

    [SPECIES_PINECO] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 190,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PINECO,
        DEX_TEXT(Pineco, "Bagworm"),
        DEX_SCALE(445, 2, 256, 0),
        HEIGHT_WEIGHT(6, 72),
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 75,
        .expYield = 163,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FORRETRESS,
        DEX_TEXT(Forretress, "Bagworm"),
        DEX_SCALE(293, 5, 256, 0),
        HEIGHT_WEIGHT(12, 1258),
    },

    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 145,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DUNSPARCE,
        DEX_TEXT(Dunsparce, "Land Snake"),
        DEX_SCALE(316, 17, 256, 0),
        HEIGHT_WEIGHT(15, 140),
    },

    [SPECIES_GLIGAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 86,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_IMMUNITY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GLIGAR,
        DEX_TEXT(Gligar, "Fly Scorpion"),
        DEX_SCALE(350, -1, 256, 0),
        HEIGHT_WEIGHT(11, 648),
    },

#define STEELIX_MISC_STATS                  \
        .type1 = TYPE_STEEL,                \
        .type2 = TYPE_GROUND,               \
        .catchRate = 25,                    \
        .evYield_Defense   = 2,             \
        .itemRare = ITEM_METAL_COAT,        \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MINERAL,     \
        .eggGroup2 = EGG_GROUP_MINERAL,     \
        .bodyColor = BODY_COLOR_GRAY,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_STEELIX,  \
        DEX_SCALE(256, 0, 516, 13)

    [SPECIES_STEELIX] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .expYield = 179,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SHEER_FORCE},
        DEX_TEXT(Steelix, "Iron Snake"),
        HEIGHT_WEIGHT(92, 4000),
        STEELIX_MISC_STATS,
    },
    [SPECIES_STEELIX_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 214,
        .abilities = {ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Steelix, "Iron Snake"), // No official dex entry for this form
        HEIGHT_WEIGHT(105, 7400),
        STEELIX_MISC_STATS,
    },

#if P_UPDATED_TYPES >= GEN_6
    #define SNUBBULL_FAMILY_TYPE TYPE_FAIRY
#else
    #define SNUBBULL_FAMILY_TYPE TYPE_NORMAL
#endif

    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = SNUBBULL_FAMILY_TYPE,
        .type2 = SNUBBULL_FAMILY_TYPE,
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SNUBBULL,
        DEX_TEXT(Snubbull, "Fairy"),
        DEX_SCALE(465, 19, 256, 0),
        HEIGHT_WEIGHT(6, 78),
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = SNUBBULL_FAMILY_TYPE,
        .type2 = SNUBBULL_FAMILY_TYPE,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GRANBULL,
        DEX_TEXT(Granbull, "Fairy"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(14, 487),
    },

#if P_UPDATED_STATS >= GEN_7
    #define QWILFISH_DEFENSE 85
#else
    #define QWILFISH_DEFENSE 75
#endif

#define QWILFISH_BASE_STATS                                                         \
        .baseHP        = 65,                                                        \
        .baseAttack    = 95,                                                        \
        .baseSpeed     = 85,                                                        \
        .baseSpAttack  = 55,                                                        \
        .baseSpDefense = 55,                                                        \
        .baseDefense   = QWILFISH_DEFENSE,                                          \
        .type2 = TYPE_POISON,                                                       \
        .catchRate = 45,                                                            \
        .expYield = 88,                                                             \
        .evYield_Attack    = 1,                                                     \
        .itemRare = ITEM_POISON_BARB,                                               \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = 70,                                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroup1 = EGG_GROUP_WATER_2,                                             \
        .eggGroup2 = EGG_GROUP_WATER_2,                                             \
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE},\
        .bodyColor = BODY_COLOR_GRAY,                                               \
        .noFlip = FALSE,                                                            \
        .natDexNum = NATIONAL_DEX_QWILFISH,                                         \
        DEX_SCALE(430, 0, 256, 0),                                                  \
        HEIGHT_WEIGHT(5, 39)

    [SPECIES_QWILFISH] =
    {
        .type1 = TYPE_WATER,
        DEX_TEXT(Qwilfish, "Balloon"),
        QWILFISH_BASE_STATS,
    },
    [SPECIES_QWILFISH_HISUIAN] =
    {
        .type1 = TYPE_POISON,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Balloon"),
        QWILFISH_BASE_STATS,
    },

#define SCIZOR_MISC_STATS                   \
        .type1 = TYPE_BUG,                  \
        .type2 = TYPE_STEEL,                \
        .catchRate = 25,                    \
        .evYield_Attack    = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_BUG,         \
        .eggGroup2 = EGG_GROUP_BUG,         \
        .bodyColor = BODY_COLOR_RED,        \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SCIZOR

    [SPECIES_SCIZOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .expYield = 175,
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL},
        DEX_TEXT(Scizor, "Pincer"),
        DEX_SCALE(278, 1, 256, 0),
        HEIGHT_WEIGHT(18, 1180),
        SCIZOR_MISC_STATS,
    },
    [SPECIES_SCIZOR_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .expYield = 210,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_TECHNICIAN, ABILITY_TECHNICIAN},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(ScizorMega, "Pincer"),
        DEX_SCALE(256, 0, 388, 6),
        HEIGHT_WEIGHT(20, 1250),
        SCIZOR_MISC_STATS,
    },

    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 230,
        .baseSpeed     = 5,
        .baseSpAttack  = 10,
        .baseSpDefense = 230,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ROCK,
        .catchRate = 190,
        .expYield = 177,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_STURDY, ABILITY_GLUTTONY, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHUCKLE,
        DEX_TEXT(Shuckle, "Mold"),
        DEX_SCALE(485, 18, 256, 0),
        HEIGHT_WEIGHT(6, 205),
    },

#define HERACROSS_MISC_STATS                \
        .type1 = TYPE_BUG,                  \
        .type2 = TYPE_FIGHTING,             \
        .catchRate = 45,                    \
        .evYield_Attack    = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_BUG,         \
        .eggGroup2 = EGG_GROUP_BUG,         \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_HERACROSS

    [SPECIES_HERACROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .expYield = 175,
        .abilities = {ABILITY_SWARM, ABILITY_GUTS, ABILITY_MOXIE},
        DEX_TEXT(Heracross, "Single Horn"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(15, 540),
        HERACROSS_MISC_STATS,
    },
    [SPECIES_HERACROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .expYield = 210,
        .abilities = {ABILITY_SKILL_LINK, ABILITY_SKILL_LINK, ABILITY_SKILL_LINK},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(HeracrossMega, "Single Horn"),
        DEX_SCALE(256, 1, 273, 1),
        HEIGHT_WEIGHT(17, 625),
        HERACROSS_MISC_STATS,
    },

#define SNEASEL_BASE_STATS                  \
        .baseHP        = 55,                \
        .baseAttack    = 95,                \
        .baseDefense   = 55,                \
        .baseSpeed     = 115,               \
        .baseSpAttack  = 35,                \
        .baseSpDefense = 75,                \
        .catchRate = 60,                    \
        .expYield = 86,                     \
        .evYield_Speed     = 1,             \
        .itemRare = ITEM_QUICK_CLAW,        \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_BLACK,      \
        .noFlip = TRUE,                     \
        .natDexNum = NATIONAL_DEX_SNEASEL,  \
        DEX_SCALE(413, -3, 256, 0)

    [SPECIES_SNEASEL] =
    {
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET},
        DEX_TEXT(Sneasel, "Sharp Claw"),
        HEIGHT_WEIGHT(9, 280),
        SNEASEL_BASE_STATS,
    },
    [SPECIES_SNEASEL_HISUIAN] =
    {
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_POISON_TOUCH},
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        DEX_TEXT(Dummy, "Sharp Claw"),
        HEIGHT_WEIGHT(9, 270),
        SNEASEL_BASE_STATS,
    },

    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_QUICK_FEET, ABILITY_HONEY_GATHER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_TEDDIURSA,
        DEX_TEXT(Teddiursa, "Little Bear"),
        DEX_SCALE(455, 19, 256, 0),
        HEIGHT_WEIGHT(6, 88),
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_QUICK_FEET, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_URSARING,
        DEX_TEXT(Ursaring, "Hibernator"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(18, 1258),
    },

    [SPECIES_SLUGMA] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SLUGMA,
        DEX_TEXT(Slugma, "Lava"),
        DEX_SCALE(329, 15, 256, 0),
        HEIGHT_WEIGHT(7, 350),
    },

    [SPECIES_MAGCARGO] =
    {
        .baseSpDefense = 80,
        .baseAttack    = 50,
        .baseDefense   = 120,
        .baseSpeed     = 30,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 60,
        .baseSpAttack  = 90,
    #else
        .baseHP        = 50,
        .baseSpAttack  = 80,
    #endif
        .type1 = TYPE_FIRE,
        .type2 = TYPE_ROCK,
        .catchRate = 75,
        .expYield = 151,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_MAGCARGO,
        DEX_TEXT(Magcargo, "Lava"),
        DEX_SCALE(332, 15, 256, 0),
        HEIGHT_WEIGHT(8, 550),
    },

    [SPECIES_SWINUB] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 225,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SWINUB,
        DEX_TEXT(Swinub, "Pig"),
        DEX_SCALE(324, 20, 256, 0),
        HEIGHT_WEIGHT(4, 65),
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 158,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PILOSWINE,
        DEX_TEXT(Piloswine, "Swine"),
        DEX_SCALE(306, 10, 256, 0),
        HEIGHT_WEIGHT(11, 558),
    },

#if P_UPDATED_STATS >= GEN_7
    #define CORSOLA_HP 60
    #define CORSOLA_DEFENSES 95
#else
    #define CORSOLA_HP 50
    #define CORSOLA_DEFENSES 85
#endif

#define CORSOLA_MISC_STATS                  \
        .catchRate = 60,                    \
        .expYield = 144,                    \
        .evYield_SpDefense = 1,             \
        .genderRatio = PERCENT_FEMALE(75),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_FAST,          \
        .eggGroup1 = EGG_GROUP_WATER_1,     \
        .eggGroup2 = EGG_GROUP_WATER_3,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_CORSOLA

    [SPECIES_CORSOLA] =
    {
        .baseAttack    = 55,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseHP        = CORSOLA_HP + 5,
        .baseDefense   = CORSOLA_DEFENSES,
        .baseSpDefense = CORSOLA_DEFENSES,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .evYield_Defense   = 1,
        .itemRare = ITEM_LUMINOUS_MOSS,
        .abilities = {ABILITY_HUSTLE, ABILITY_NATURAL_CURE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        DEX_TEXT(Corsola, "Coral"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(6, 50),
        CORSOLA_MISC_STATS,
    },
    [SPECIES_CORSOLA_GALARIAN] =
    {
        .baseAttack    = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseHP        = CORSOLA_HP,
        .baseDefense   = CORSOLA_DEFENSES + 5,
        .baseSpDefense = CORSOLA_DEFENSES + 5,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Coral"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(6, 5),
        CORSOLA_MISC_STATS,
    },

    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 35,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 60,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_HUSTLE, ABILITY_SNIPER, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_REMORAID,
        DEX_TEXT(Remoraid, "Jet"),
        DEX_SCALE(316, 4, 256, 0),
        HEIGHT_WEIGHT(6, 120),
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_SNIPER, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_OCTILLERY,
        DEX_TEXT(Octillery, "Jet"),
        DEX_SCALE(296, 3, 256, 0),
        HEIGHT_WEIGHT(9, 285),
    },

    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .type1 = TYPE_ICE,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 116,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE, ABILITY_INSOMNIA},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DELIBIRD,
        DEX_TEXT(Delibird, "Delivery"),
        DEX_SCALE(293, 11, 256, 0),
        HEIGHT_WEIGHT(9, 160),
    },

    [SPECIES_MANTINE] =
    {
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 85,
    #else
        .baseHP        = 65,
    #endif
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MANTINE,
        DEX_TEXT(Mantine, "Kite"),
        DEX_SCALE(256, 0, 342, 7),
        HEIGHT_WEIGHT(21, 2200),
    },

    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 163,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SKARMORY,
        DEX_TEXT(Skarmory, "Armor Bird"),
        DEX_SCALE(256, 0, 271, 1),
        HEIGHT_WEIGHT(17, 505),
    },

    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FIRE,
        .catchRate = 120,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HOUNDOUR,
        DEX_TEXT(Houndour, "Dark"),
        DEX_SCALE(393, 16, 256, 0),
        HEIGHT_WEIGHT(6, 108),
    },

#define HOUNDOOM_MISC_STATS                 \
        .type1 = TYPE_DARK,                 \
        .type2 = TYPE_FIRE,                 \
        .catchRate = 45,                    \
        .evYield_SpAttack  = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_BLACK,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_HOUNDOOM

    [SPECIES_HOUNDOOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .expYield = 175,
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE},
        DEX_TEXT(Houndoom, "Dark"),
        DEX_SCALE(256, 4, 256, 0),
        HEIGHT_WEIGHT(14, 350),
        HOUNDOOM_MISC_STATS,
    },
    [SPECIES_HOUNDOOM_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .expYield = 210,
        .abilities = {ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(HoundoomMega, "Dark"),
        DEX_SCALE(346, 14, 256, 0),
        HEIGHT_WEIGHT(19, 495),
        HOUNDOOM_MISC_STATS,
    },

    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KINGDRA,
        DEX_TEXT(Kingdra, "Dragon"),
        DEX_SCALE(256, 0, 287, 0),
        HEIGHT_WEIGHT(18, 1520),
    },

    [SPECIES_PHANPY] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 66,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PHANPY,
        DEX_TEXT(Phanpy, "Long Nose"),
        DEX_SCALE(465, 21, 256, 0),
        HEIGHT_WEIGHT(5, 335),
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DONPHAN,
        DEX_TEXT(Donphan, "Armor"),
        DEX_SCALE(313, 9, 256, 0),
        HEIGHT_WEIGHT(11, 1200),
    },

    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PORYGON2,
        DEX_TEXT(Porygon2, "Virtual"),
        DEX_SCALE(320, 17, 256, 0),
        HEIGHT_WEIGHT(6, 325),
    },

    [SPECIES_STANTLER] =
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STANTLER,
        DEX_TEXT(Stantler, "Big Horn"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(14, 712),
    },

    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 20,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 20,
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 88,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SMEARGLE,
        DEX_TEXT(Smeargle, "Painter"),
        DEX_SCALE(287, 5, 256, 0),
        HEIGHT_WEIGHT(12, 580),
    },

    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 42,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TYROGUE,
        DEX_TEXT(Tyrogue, "Scuffle"),
        DEX_SCALE(292, 9, 256, 0),
        HEIGHT_WEIGHT(7, 210),
    },

    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_TECHNICIAN, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HITMONTOP,
        DEX_TEXT(Hitmontop, "Handstand"),
        DEX_SCALE(256, 2, 257, 0),
        HEIGHT_WEIGHT(14, 480),
    },

    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SMOOCHUM,
        DEX_TEXT(Smoochum, "Kiss"),
        DEX_SCALE(440, 20, 256, 0),
        HEIGHT_WEIGHT(4, 60),
    },

    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ELEKID,
        DEX_TEXT(Elekid, "Electric"),
        DEX_SCALE(363, 14, 256, 0),
        HEIGHT_WEIGHT(6, 235),
    },

    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 73,
        .evYield_Speed     = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_MAGBY,
        DEX_TEXT(Magby, "Live Coal"),
        DEX_SCALE(284, 13, 256, 0),
        HEIGHT_WEIGHT(7, 214),
    },

    [SPECIES_MILTANK] =
    {
        .baseHP        = 95,
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_MOOMOO_MILK,
        .itemRare = ITEM_MOOMOO_MILK,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_SCRAPPY, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MILTANK,
        DEX_TEXT(Miltank, "Milk Cow"),
        DEX_SCALE(280, 5, 256, 0),
        HEIGHT_WEIGHT(12, 755),
    },

    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 608,
        .evYield_HP        = 3,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BLISSEY,
        DEX_TEXT(Blissey, "Happiness"),
        DEX_SCALE(256, 4, 310, 3),
        HEIGHT_WEIGHT(15, 468),
    },

    [SPECIES_RAIKOU] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
    #else
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_VOLT_ABSORB},
    #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_RAIKOU,
        DEX_TEXT(Raikou, "Thunder"),
        DEX_SCALE(256, 0, 345, 7),
        HEIGHT_WEIGHT(19, 1780),
    },

    [SPECIES_ENTEI] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 3,
        .expYield = 261,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
    #else
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLASH_FIRE},
    #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_ENTEI,
        DEX_TEXT(Entei, "Volcano"),
        DEX_SCALE(259, 0, 345, 7),
        HEIGHT_WEIGHT(21, 1980),
    },

    [SPECIES_SUICUNE] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
    #if P_UPDATED_ABILITIES >= GEN_7
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
    #else
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_WATER_ABSORB},
    #endif
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_SUICUNE,
        DEX_TEXT(Suicune, "Aurora"),
        DEX_SCALE(269, 0, 345, 7),
        HEIGHT_WEIGHT(20, 1870),
    },

    [SPECIES_LARVITAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_GUTS, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LARVITAR,
        DEX_TEXT(Larvitar, "Rock Skin"),
        DEX_SCALE(472, 18, 256, 0),
        HEIGHT_WEIGHT(6, 720),
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 84,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PUPITAR,
        DEX_TEXT(Pupitar, "Hard Shell"),
        DEX_SCALE(292, 8, 256, 0),
        HEIGHT_WEIGHT(12, 1520),
    },

#define TYRANITAR_MISC_STATS                \
        .type1 = TYPE_ROCK,                 \
        .type2 = TYPE_DARK,                 \
        .catchRate = 45,                    \
        .evYield_Attack    = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 40,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_MONSTER,     \
        .bodyColor = BODY_COLOR_GREEN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_TYRANITAR

    [SPECIES_TYRANITAR] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 61,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .expYield = 270,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_UNNERVE},
        DEX_TEXT(Tyranitar, "Armor"),
        DEX_SCALE(256, 0, 345, 7),
        HEIGHT_WEIGHT(20, 2020),
        TYRANITAR_MISC_STATS,
    },
    [SPECIES_TYRANITAR_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 150,
        .baseSpeed     = 71,
        .baseSpAttack  = 95,
        .baseSpDefense = 120,
        .expYield = 315,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_SAND_STREAM, ABILITY_SAND_STREAM},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(TyranitarMega, "Armor"),
        DEX_SCALE(257, 10, 423, 8),
        HEIGHT_WEIGHT(25, 2550),
        TYRANITAR_MISC_STATS,
    },

    [SPECIES_LUGIA] =
    {
        .baseHP        = 106,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 154,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_LUGIA,
        DEX_TEXT(Lugia, "Diving"),
        DEX_SCALE(256, 0, 721, 19),
        HEIGHT_WEIGHT(52, 2160),
    },

    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 154,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_HO_OH,
        DEX_TEXT(HoOh, "Rainbow"),
        DEX_SCALE(256, 0, 610, 17),
        HEIGHT_WEIGHT(38, 1990),
    },

    [SPECIES_CELEBI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_CELEBI,
        DEX_TEXT(Celebi, "Time Travel"),
        DEX_SCALE(393, -10, 256, 0),
        HEIGHT_WEIGHT(6, 50),
    },

    [SPECIES_TREECKO] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TREECKO,
        DEX_TEXT(Treecko, "Wood Gecko"),
        DEX_SCALE(541, 19, 256, 0),
        HEIGHT_WEIGHT(5, 50),
        .levelUpLearnset = sTreeckoLevelUpLearnset,
        .teachableLearnset = sTreeckoTeachableLearnset,
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GROVYLE,
        DEX_TEXT(Grovyle, "Wood Gecko"),
        DEX_SCALE(360, 5, 256, 0),
        HEIGHT_WEIGHT(9, 216),
    },

#define SCEPTILE_MISC_STATS                 \
        .type1 = TYPE_GRASS,                \
        .catchRate = 45,                    \
        .evYield_Speed     = 3,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .bodyColor = BODY_COLOR_GREEN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SCEPTILE, \
        DEX_SCALE(256, -1, 275, 2)

    [SPECIES_SCEPTILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .type2 = TYPE_GRASS,
        .expYield = 239,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        DEX_TEXT(Sceptile, "Forest"),
        HEIGHT_WEIGHT(17, 522),
        SCEPTILE_MISC_STATS,
    },
    [SPECIES_SCEPTILE_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .type2 = TYPE_DRAGON,
        .expYield = 284,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Sceptile, "Forest"), // No official dex entry for this form
        HEIGHT_WEIGHT(19, 522),
        SCEPTILE_MISC_STATS,
    },

    [SPECIES_TORCHIC] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TORCHIC,
        DEX_TEXT(Torchic, "Chick"),
        DEX_SCALE(566, 19, 256, 0),
        HEIGHT_WEIGHT(4, 25),
        .levelUpLearnset = sTorchicLevelUpLearnset,
    },

    [SPECIES_COMBUSKEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_COMBUSKEN,
        DEX_TEXT(Combusken, "Young Fowl"),
        DEX_SCALE(343, 5, 256, 0),
        HEIGHT_WEIGHT(9, 195),
    },

#define BLAZIKEN_MISC_STATS                 \
        .type1 = TYPE_FIRE,                 \
        .type2 = TYPE_FIGHTING,             \
        .catchRate = 45,                    \
        .evYield_Attack    = 3,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_RED,        \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_BLAZIKEN, \
        DEX_SCALE(256, 0, 301, 4),          \
        HEIGHT_WEIGHT(19, 520)

    [SPECIES_BLAZIKEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .expYield = 239,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        DEX_TEXT(Blaziken, "Blaze"),
        BLAZIKEN_MISC_STATS,
    },
    [SPECIES_BLAZIKEN_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .expYield = 284,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Blaziken, "Blaze"), // No official dex entry for this form
        BLAZIKEN_MISC_STATS,
    },

    [SPECIES_MUDKIP] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MUDKIP,
        DEX_TEXT(Mudkip, "Mud Fish"),
        DEX_SCALE(535, 20, 256, 0),
        HEIGHT_WEIGHT(4, 76),
        .levelUpLearnset = sMudkipLevelUpLearnset,
    },

    [SPECIES_MARSHTOMP] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MARSHTOMP,
        DEX_TEXT(Marshtomp, "Mud Fish"),
        DEX_SCALE(340, 7, 256, 0),
        HEIGHT_WEIGHT(7, 280),
    },

#define SWAMPERT_MISC_STATS                 \
        .type1 = TYPE_WATER,                \
        .type2 = TYPE_GROUND,               \
        .catchRate = 45,                    \
        .evYield_Attack    = 3,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_WATER_1,     \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SWAMPERT, \
        DEX_SCALE(256, 0, 256, 0)

    [SPECIES_SWAMPERT] =
    {
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .expYield = 241,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        DEX_TEXT(Swampert, "Mud Fish"),
        HEIGHT_WEIGHT(15, 819),
        SWAMPERT_MISC_STATS,
    },
    [SPECIES_SWAMPERT_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .expYield = 286,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Swampert, "Mud Fish"), // No official dex entry for this form
        HEIGHT_WEIGHT(19, 1020),
        SWAMPERT_MISC_STATS,
    },

    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_POOCHYENA,
        DEX_TEXT(Poochyena, "Bite"),
        DEX_SCALE(481, 19, 256, 0),
        HEIGHT_WEIGHT(5, 136),
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 127,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_QUICK_FEET, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MIGHTYENA,
        DEX_TEXT(Mightyena, "Bite"),
        DEX_SCALE(362, 9, 256, 0),
        HEIGHT_WEIGHT(10, 370),
    },

#define ZIGZAGOON_MISC_STATS                                                \
        .baseHP        = 38,                                                \
        .baseAttack    = 30,                                                \
        .baseDefense   = 41,                                                \
        .baseSpeed     = 60,                                                \
        .baseSpAttack  = 30,                                                \
        .baseSpDefense = 41,                                                \
        .type2 = TYPE_NORMAL,                                               \
        .catchRate = 255,                                                   \
        .expYield = 56,                                                     \
        .evYield_Speed     = 1,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 15,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FIELD,                                       \
        .eggGroup2 = EGG_GROUP_FIELD,                                       \
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},\
        .noFlip = FALSE,                                                    \
        .natDexNum = NATIONAL_DEX_ZIGZAGOON,                                \
        DEX_SCALE(481, 19, 256, 0),                                         \
        HEIGHT_WEIGHT(4, 175)


    [SPECIES_ZIGZAGOON] =
    {
        .type1 = TYPE_NORMAL,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Zigzagoon, "Tiny Raccoon"),
        ZIGZAGOON_MISC_STATS,
    },
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .type1 = TYPE_DARK,
        .bodyColor = BODY_COLOR_WHITE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Tiny Raccoon"),
        ZIGZAGOON_MISC_STATS,
    },

#define LINOONE_MISC_STATS                                                  \
        .baseHP        = 78,                                                \
        .baseAttack    = 70,                                                \
        .baseDefense   = 61,                                                \
        .baseSpeed     = 100,                                               \
        .baseSpAttack  = 50,                                                \
        .baseSpDefense = 61,                                                \
        .type2 = TYPE_NORMAL,                                               \
        .catchRate = 90,                                                    \
        .expYield = 147,                                                    \
        .evYield_Speed     = 2,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 15,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FIELD,                                       \
        .eggGroup2 = EGG_GROUP_FIELD,                                       \
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
        .natDexNum = NATIONAL_DEX_LINOONE,                                  \
        DEX_SCALE(321, 7, 256, 0),                                          \
        HEIGHT_WEIGHT(5, 325)

    [SPECIES_LINOONE] =
    {
        .type1 = TYPE_NORMAL,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        DEX_TEXT(Linoone, "Rushing"),
        LINOONE_MISC_STATS,
    },
    [SPECIES_LINOONE_GALARIAN] =
    {
        .type1 = TYPE_DARK,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        DEX_TEXT(Dummy, "Rushing"),
        LINOONE_MISC_STATS,
    },

    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WURMPLE,
        DEX_TEXT(Wurmple, "Worm"),
        DEX_SCALE(711, 24, 256, 0),
        HEIGHT_WEIGHT(3, 36),
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SILCOON,
        DEX_TEXT(Silcoon, "Cocoon"),
        DEX_SCALE(431, 19, 256, 0),
        HEIGHT_WEIGHT(6, 100),
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpDefense = 50,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpAttack  = 100,
    #else
        .baseSpAttack  = 90,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BEAUTIFLY,
        DEX_TEXT(Beautifly, "Butterfly"),
        DEX_SCALE(298, -1, 256, 0),
        HEIGHT_WEIGHT(10, 284),
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CASCOON,
        DEX_TEXT(Cascoon, "Cocoon"),
        DEX_SCALE(391, 20, 256, 0),
        HEIGHT_WEIGHT(7, 115),
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_COMPOUND_EYES},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DUSTOX,
        DEX_TEXT(Dustox, "Poison Moth"),
        DEX_SCALE(269, 1, 256, 0),
        HEIGHT_WEIGHT(12, 316),
    },

    [SPECIES_LOTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LOTAD,
        DEX_TEXT(Lotad, "Water Weed"),
        DEX_SCALE(406, 19, 256, 0),
        HEIGHT_WEIGHT(5, 26),
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 119,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LOMBRE,
        DEX_TEXT(Lombre, "Jolly"),
        DEX_SCALE(277, 9, 256, 0),
        HEIGHT_WEIGHT(12, 325),
    },

    [SPECIES_LUDICOLO] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 216,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUDICOLO,
        DEX_TEXT(Ludicolo, "Carefree"),
        DEX_SCALE(256, 0, 268, -1),
        HEIGHT_WEIGHT(15, 550),
    },

    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 44,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SEEDOT,
        DEX_TEXT(Seedot, "Acorn"),
        DEX_SCALE(472, 20, 256, 0),
        HEIGHT_WEIGHT(5, 40),
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NUZLEAF,
        DEX_TEXT(Nuzleaf, "Wily"),
        DEX_SCALE(299, 10, 256, 0),
        HEIGHT_WEIGHT(10, 280),
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 216,
        .evYield_Attack    = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHIFTRY,
        DEX_TEXT(Shiftry, "Wicked"),
        DEX_SCALE(290, 4, 256, 0),
        HEIGHT_WEIGHT(13, 596),
    },

    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TAILLOW,
        DEX_TEXT(Taillow, "Tiny Swallow"),
        DEX_SCALE(465, 21, 256, 0),
        HEIGHT_WEIGHT(3, 23),
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpDefense = 50,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpAttack  = 75,
    #else
        .baseSpAttack  = 50,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_GUTS, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SWELLOW,
        DEX_TEXT(Swellow, "Swallow"),
        DEX_SCALE(428, 15, 256, 0),
        HEIGHT_WEIGHT(7, 198),
    },

    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 54,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_HYDRATION, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WINGULL,
        DEX_TEXT(Wingull, "Seagull"),
        DEX_SCALE(295, -2, 256, 0),
        HEIGHT_WEIGHT(6, 95),
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpDefense = 70,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpAttack  = 95,
    #else
        .baseSpAttack  = 85,
    #endif
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 154,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_DRIZZLE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PELIPPER,
        DEX_TEXT(Pelipper, "Water Bird"),
        DEX_SCALE(288, 1, 256, 0),
        HEIGHT_WEIGHT(12, 280),
    },

#if P_UPDATED_TYPES >= GEN_6
    #define RALTS_FAMILY_TYPE_2 TYPE_FAIRY
#else
    #define RALTS_FAMILY_TYPE_2 TYPE_PSYCHIC
#endif

#if P_UPDATED_EGG_GROUPS >= GEN_8
    #define RALTS_FAMILY_EGG_GROUP_1 EGG_GROUP_HUMAN_LIKE
#else
    #define RALTS_FAMILY_EGG_GROUP_1 EGG_GROUP_AMORPHOUS
#endif

    [SPECIES_RALTS] =
    {
        .baseHP        = 28,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .type1 = TYPE_PSYCHIC,
        .type2 = RALTS_FAMILY_TYPE_2,
        .catchRate = 235,
        .expYield = 40,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = RALTS_FAMILY_EGG_GROUP_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RALTS,
        DEX_TEXT(Ralts, "Feeling"),
        DEX_SCALE(457, -3, 256, 0),
        HEIGHT_WEIGHT(4, 66),
    },

    [SPECIES_KIRLIA] =
    {
        .baseHP        = 38,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = RALTS_FAMILY_TYPE_2,
        .catchRate = 120,
        .expYield = 97,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = RALTS_FAMILY_EGG_GROUP_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        DEX_TEXT(Kirlia, "Emotion"),
        DEX_SCALE(354, 0, 256, 0),
        HEIGHT_WEIGHT(8, 202),
    },

#define GARDEVOIR_MISC_STATS                    \
        .type1 = TYPE_PSYCHIC,                  \
        .type2 = RALTS_FAMILY_TYPE_2,           \
        .catchRate = 45,                        \
        .evYield_SpAttack  = 3,                 \
        .genderRatio = PERCENT_FEMALE(50),      \
        .eggCycles = 20,                        \
        .friendship = 35,                       \
        .growthRate = GROWTH_SLOW,              \
        .eggGroup1 = RALTS_FAMILY_EGG_GROUP_1,  \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,       \
        .bodyColor = BODY_COLOR_WHITE,          \
        .noFlip = FALSE,                        \
        .natDexNum = NATIONAL_DEX_GARDEVOIR,    \
        DEX_SCALE(256, 0, 256, 0),              \
        HEIGHT_WEIGHT(16, 484)

    [SPECIES_GARDEVOIR] =
    {
        .baseHP        = 68,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
        .expYield = 233,
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        DEX_TEXT(Gardevoir, "Embrace"),
        GARDEVOIR_MISC_STATS,
    },
    [SPECIES_GARDEVOIR_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .expYield = 278,
        .abilities = {ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Gardevoir, "Embrace"), // No official dex entry for this form
        GARDEVOIR_MISC_STATS,
    },

    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 32,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .type1 = TYPE_BUG,
        .type2 = TYPE_WATER,
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SURSKIT,
        DEX_TEXT(Surskit, "Pond Skater"),
        DEX_SCALE(375, 17, 256, 0),
        HEIGHT_WEIGHT(5, 17),
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 62,
        .baseSpDefense = 82,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
    #else
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 75,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MASQUERAIN,
        DEX_TEXT(Masquerain, "Eyeball"),
        DEX_SCALE(378, 8, 256, 0),
        HEIGHT_WEIGHT(8, 36),
    },

    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 59,
        .evYield_HP        = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHROOMISH,
        DEX_TEXT(Shroomish, "Mushroom"),
        DEX_SCALE(513, 22, 256, 0),
        HEIGHT_WEIGHT(4, 45),
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 161,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BRELOOM,
        DEX_TEXT(Breloom, "Mushroom"),
        DEX_SCALE(324, 6, 256, 0),
        HEIGHT_WEIGHT(12, 392),
    },

    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SLAKOTH,
        DEX_TEXT(Slakoth, "Slacker"),
        DEX_SCALE(291, 16, 256, 0),
        HEIGHT_WEIGHT(8, 240),
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 154,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VIGOROTH,
        DEX_TEXT(Vigoroth, "Wild Monkey"),
        DEX_SCALE(301, 2, 256, 0),
        HEIGHT_WEIGHT(14, 465),
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 252,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SLAKING,
        DEX_TEXT(Slaking, "Lazy"),
        DEX_SCALE(256, 2, 300, 1),
        HEIGHT_WEIGHT(20, 1305),
    },

    [SPECIES_NINCADA] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 53,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NINCADA,
        DEX_TEXT(Nincada, "Trainee"),
        DEX_SCALE(405, 21, 256, 0),
        HEIGHT_WEIGHT(5, 55),
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 160,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NINJASK,
        DEX_TEXT(Ninjask, "Ninja"),
        DEX_SCALE(383, -9, 256, 0),
        HEIGHT_WEIGHT(8, 120),
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 83,
        .evYield_HP        = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_WONDER_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHEDINJA,
        DEX_TEXT(Shedinja, "Shed"),
        DEX_SCALE(372, -8, 256, 0),
        HEIGHT_WEIGHT(8, 12),
    },

    [SPECIES_WHISMUR] =
    {
        .baseHP        = 64,
        .baseAttack    = 51,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 51,
        .baseSpDefense = 23,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 48,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WHISMUR,
        DEX_TEXT(Whismur, "Whisper"),
        DEX_SCALE(373, 17, 256, 0),
        HEIGHT_WEIGHT(6, 163),
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 84,
        .baseAttack    = 71,
        .baseDefense   = 43,
        .baseSpeed     = 48,
        .baseSpAttack  = 71,
        .baseSpDefense = 43,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 126,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LOUDRED,
        DEX_TEXT(Loudred, "Big Voice"),
        DEX_SCALE(356, 10, 256, 0),
        HEIGHT_WEIGHT(10, 405),
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 104,
        .baseAttack    = 91,
        .baseDefense   = 63,
        .baseSpeed     = 68,
        .baseSpAttack  = 91,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 73,
    #else
        .baseSpDefense = 63,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 221,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_EXPLOUD,
        DEX_TEXT(Exploud, "Loud Noise"),
        DEX_SCALE(284, 1, 256, 0),
        HEIGHT_WEIGHT(15, 840),
    },

    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 72,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 47,
        .evYield_HP        = 1,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAKUHITA,
        DEX_TEXT(Makuhita, "Guts"),
        DEX_SCALE(256, 10, 256, 0),
        HEIGHT_WEIGHT(10, 864),
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 144,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 200,
        .expYield = 166,
        .evYield_HP        = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HARIYAMA,
        DEX_TEXT(Hariyama, "Arm Thrust"),
        DEX_SCALE(256, 0, 343, 7),
        HEIGHT_WEIGHT(23, 2538),
    },

    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_NORMAL,
    #endif
        .catchRate = 150,
        .expYield = 38,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_AZURILL,
        DEX_TEXT(Azurill, "Polka Dot"),
        DEX_SCALE(603, 23, 256, 0),
        HEIGHT_WEIGHT(2, 20),
    },

    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 255,
        .expYield = 75,
        .evYield_Defense   = 1,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NOSEPASS,
        DEX_TEXT(Nosepass, "Compass"),
        DEX_SCALE(256, 9, 289, 3),
        HEIGHT_WEIGHT(10, 970),
    },

    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SKITTY,
        DEX_TEXT(Skitty, "Kitten"),
        DEX_SCALE(492, 19, 256, 0),
        HEIGHT_WEIGHT(6, 110),
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
    #if P_UPDATED_STATS >= GEN_7
        .baseSpeed     = 90,
    #else
        .baseSpeed     = 70,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 60,
        .expYield = 140,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DELCATTY,
        DEX_TEXT(Delcatty, "Prim"),
        DEX_SCALE(322, 10, 256, 0),
        HEIGHT_WEIGHT(11, 326),
    },

#define SABLEYE_MISC_STATS                  \
        .type1 = TYPE_DARK,                 \
        .type2 = TYPE_GHOST,                \
        .catchRate = 45,                    \
        .evYield_Attack    = 1,             \
        .evYield_Defense   = 1,             \
        .itemRare = ITEM_WIDE_LENS,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,  \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .bodyColor = BODY_COLOR_PURPLE,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SABLEYE,  \
        DEX_SCALE(451, 17, 256, 0)

    [SPECIES_SABLEYE] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .expYield = 133,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER},
        DEX_TEXT(Sableye, "Darkness"),
        HEIGHT_WEIGHT(5, 110),
        SABLEYE_MISC_STATS,
    },
    [SPECIES_SABLEYE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .expYield = 168,
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(SableyeMega, "Darkness"),
        HEIGHT_WEIGHT(5, 1610),
        SABLEYE_MISC_STATS,
    },

#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPE_2 TYPE_FAIRY
#else
    #define MAWILE_TYPE_2 TYPE_STEEL
#endif

#define MAWILE_MISC_STATS                   \
        .type1 = TYPE_STEEL,                \
        .type2 = MAWILE_TYPE_2,             \
        .catchRate = 45,                    \
        .evYield_Attack    = 1,             \
        .evYield_Defense   = 1,             \
        .itemRare = ITEM_IRON_BALL,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_FAST,          \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FAIRY,       \
        .bodyColor = BODY_COLOR_BLACK,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MAWILE

    [SPECIES_MAWILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .expYield = 133,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE},
        DEX_TEXT(Mawile, "Deceiver"),
        DEX_SCALE(466, 17, 256, 0),
        HEIGHT_WEIGHT(6, 115),
        MAWILE_MISC_STATS,
    },
    [SPECIES_MAWILE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .expYield = 168,
        .abilities = {ABILITY_HUGE_POWER, ABILITY_HUGE_POWER, ABILITY_HUGE_POWER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(MawileMega, "Deceiver"),
        DEX_SCALE(335, 13, 256, 0),
        HEIGHT_WEIGHT(10, 235),
        MAWILE_MISC_STATS,
    },

    [SPECIES_ARON] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_ROCK,
        .catchRate = 180,
        .expYield = 66,
        .evYield_Defense   = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ARON,
        DEX_TEXT(Aron, "Iron Armor"),
        DEX_SCALE(419, 23, 256, 0),
        HEIGHT_WEIGHT(4, 600),
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_ROCK,
        .catchRate = 90,
        .expYield = 151,
        .evYield_Defense   = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LAIRON,
        DEX_TEXT(Lairon, "Iron Armor"),
        DEX_SCALE(275, 12, 256, 0),
        HEIGHT_WEIGHT(9, 1200),
    },

#define AGGRON_MISC_STATS                   \
        .type1 = TYPE_STEEL,                \
        .catchRate = 45,                    \
        .evYield_Defense   = 3,             \
        .itemRare = ITEM_HARD_STONE,        \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 35,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_MONSTER,     \
        .bodyColor = BODY_COLOR_GRAY,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_AGGRON,   \
        DEX_TEXT(Aggron, "Iron Armor")

    [SPECIES_AGGRON] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type2 = TYPE_ROCK,
        .expYield = 239,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        DEX_SCALE(256, -1, 350, 6),
        HEIGHT_WEIGHT(21, 3600),
        AGGRON_MISC_STATS,
    },
    [SPECIES_AGGRON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .type2 = TYPE_STEEL,
        .expYield = 284,
        .abilities = {ABILITY_FILTER, ABILITY_FILTER, ABILITY_FILTER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(256, 0, 387, 8),
        HEIGHT_WEIGHT(22, 3950),
        AGGRON_MISC_STATS,
    },

    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MEDITITE,
        DEX_TEXT(Meditite, "Meditate"),
        DEX_SCALE(465, 17, 256, 0),
        HEIGHT_WEIGHT(6, 112),
    },

#define MEDICHAM_MISC_STATS                 \
        .type1 = TYPE_FIGHTING,             \
        .type2 = TYPE_PSYCHIC,              \
        .catchRate = 90,                    \
        .evYield_Speed     = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,  \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .bodyColor = BODY_COLOR_RED,        \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MEDICHAM, \
        DEX_SCALE(298, 5, 256, 0),          \
        HEIGHT_WEIGHT(13, 315)

    [SPECIES_MEDICHAM] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .expYield = 144,
        .abilities = {ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY},
        DEX_TEXT(Medicham, "Meditate"),
        MEDICHAM_MISC_STATS,
    },
    [SPECIES_MEDICHAM_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .expYield = 179,
        .abilities = {ABILITY_PURE_POWER, ABILITY_PURE_POWER, ABILITY_PURE_POWER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(Medicham, "Meditate"), // No official dex entry for this form
        MEDICHAM_MISC_STATS,
    },

    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 40,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ELECTRIKE,
        DEX_TEXT(Electrike, "Lightning"),
        DEX_SCALE(290, 15, 256, 0),
        HEIGHT_WEIGHT(6, 152),
    },

#define MANECTRIC_MISC_STATS                \
        .type1 = TYPE_ELECTRIC,             \
        .type2 = TYPE_ELECTRIC,             \
        .catchRate = 45,                    \
        .evYield_Speed     = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_YELLOW,     \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_MANECTRIC

    [SPECIES_MANECTRIC] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .expYield = 166,
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS},
        DEX_TEXT(Manectric, "Discharge"),
        DEX_SCALE(256, 3, 257, 0),
        HEIGHT_WEIGHT(15, 402),
        MANECTRIC_MISC_STATS,
    },
    [SPECIES_MANECTRIC_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        .expYield = 201,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_INTIMIDATE, ABILITY_INTIMIDATE},
        DEX_TEXT(ManectricMega, "Discharge"),
        DEX_SCALE(256, 0, 268, 0),
        HEIGHT_WEIGHT(18, 440),
        MANECTRIC_MISC_STATS,
    },

    [SPECIES_PLUSLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_PLUS, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PLUSLE,
        DEX_TEXT(Plusle, "Cheering"),
        DEX_SCALE(515, -9, 256, 0),
        HEIGHT_WEIGHT(4, 42),
    },

    [SPECIES_MINUN] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_MINUS, ABILITY_NONE, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MINUN,
        DEX_TEXT(Minun, "Cheering"),
        DEX_SCALE(512, -7, 256, 0),
        HEIGHT_WEIGHT(4, 42),
    },

    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseSpeed     = 85,
        .baseSpAttack  = 47,
    #if P_UPDATED_STATS >= GEN_7
        .baseDefense   = 75,
        .baseSpDefense = 85,
    #else
        .baseDefense   = 55,
        .baseSpDefense = 75,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_SWARM, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VOLBEAT,
        DEX_TEXT(Volbeat, "Firefly"),
        DEX_SCALE(442, 16, 256, 0),
        HEIGHT_WEIGHT(7, 177),
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 65,
        .baseAttack    = 47,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
    #if P_UPDATED_STATS >= GEN_7
        .baseDefense   = 75,
        .baseSpDefense = 85,
    #else
        .baseDefense   = 55,
        .baseSpDefense = 75,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ILLUMISE,
        DEX_TEXT(Illumise, "Firefly"),
        DEX_SCALE(572, 19, 256, 0),
        HEIGHT_WEIGHT(6, 177),
    },

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 150,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ROSELIA,
        DEX_TEXT(Roselia, "Thorn"),
        DEX_SCALE(677, 20, 256, 0),
        HEIGHT_WEIGHT(3, 20),
    },

    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 225,
        .expYield = 60,
        .evYield_HP        = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GULPIN,
        DEX_TEXT(Gulpin, "Stomach"),
        DEX_SCALE(593, 23, 256, 0),
        HEIGHT_WEIGHT(4, 103),
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,
        .baseAttack    = 73,
        .baseDefense   = 83,
        .baseSpeed     = 55,
        .baseSpAttack  = 73,
        .baseSpDefense = 83,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 163,
        .evYield_HP        = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SWALOT,
        DEX_TEXT(Swalot, "Poison Bag"),
        DEX_SCALE(256, 6, 345, 3),
        HEIGHT_WEIGHT(17, 800),
    },

    [SPECIES_CARVANHA] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,
        .baseDefense   = 20,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 20,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .catchRate = 225,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CARVANHA,
        DEX_TEXT(Carvanha, "Savage"),
        DEX_SCALE(362, 0, 256, 0),
        HEIGHT_WEIGHT(8, 208),
    },

#define SHARPEDO_MISC_STATS                 \
        .type1 = TYPE_WATER,                \
        .type2 = TYPE_DARK,                 \
        .catchRate = 60,                    \
        .evYield_Attack    = 2,             \
        .itemRare = ITEM_DEEP_SEA_TOOTH,    \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_WATER_2,     \
        .eggGroup2 = EGG_GROUP_WATER_2,     \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SHARPEDO

    [SPECIES_SHARPEDO] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 40,
        .expYield = 161,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST},
        DEX_TEXT(Sharpedo, "Brutal"),
        DEX_SCALE(256, 0, 317, 3),
        HEIGHT_WEIGHT(18, 888),
        SHARPEDO_MISC_STATS,
    },
    [SPECIES_SHARPEDO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .expYield = 196,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_STRONG_JAW, ABILITY_STRONG_JAW},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(SharpedoMega, "Brutal"),
        DEX_SCALE(257, 10, 423, 8),
        HEIGHT_WEIGHT(25, 1303),
        SHARPEDO_MISC_STATS,
    },

    [SPECIES_WAILMER] =
    {
        .baseHP        = 130,
        .baseAttack    = 70,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 125,
        .expYield = 80,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WAILMER,
        DEX_TEXT(Wailmer, "Ball Whale"),
        DEX_SCALE(256, 2, 493, 0),
        HEIGHT_WEIGHT(20, 1300),
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 175,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WAILORD,
        DEX_TEXT(Wailord, "Float Whale"),
        DEX_SCALE(256, 0, 1352, 18),
        HEIGHT_WEIGHT(145, 3980),
    },

    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_NUMEL,
        DEX_TEXT(Numel, "Numb"),
        DEX_SCALE(342, 17, 256, 0),
        HEIGHT_WEIGHT(7, 240),
    },

#define CAMERUPT_MISC_STATS                 \
        .type1 = TYPE_FIRE,                 \
        .type2 = TYPE_GROUND,               \
        .catchRate = 150,                   \
        .evYield_Attack    = 1,             \
        .evYield_SpAttack  = 1,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_RED,        \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_CAMERUPT, \
        DEX_TEXT(Camerupt, "Eruption")

    [SPECIES_CAMERUPT] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .expYield = 161,
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_SOLID_ROCK, ABILITY_ANGER_POINT},
        DEX_SCALE(256, 7, 345, 6),
        HEIGHT_WEIGHT(19, 2200),
        CAMERUPT_MISC_STATS,
    },
    [SPECIES_CAMERUPT_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .expYield = 196,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(257, 10, 423, 8),
        HEIGHT_WEIGHT(25, 3205),
        CAMERUPT_MISC_STATS,
    },

    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 140,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 90,
        .expYield = 165,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_WHITE_SMOKE, ABILITY_DROUGHT, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TORKOAL,
        DEX_TEXT(Torkoal, "Coal"),
        DEX_SCALE(390, 9, 256, 0),
        HEIGHT_WEIGHT(5, 804),
    },

    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SPOINK,
        DEX_TEXT(Spoink, "Bounce"),
        DEX_SCALE(423, 17, 256, 0),
        HEIGHT_WEIGHT(7, 306),
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GRUMPIG,
        DEX_TEXT(Grumpig, "Manipulate"),
        DEX_SCALE(358, 10, 256, 0),
        HEIGHT_WEIGHT(9, 715),
    },

    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 126,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_TANGLED_FEET, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_SPINDA,
        DEX_TEXT(Spinda, "Spot Panda"),
        DEX_SCALE(321, 4, 256, 0),
        HEIGHT_WEIGHT(11, 50),
    },

    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_DRAGON,
    #else
        .eggGroup2 = EGG_GROUP_BUG,
    #endif
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TRAPINCH,
        DEX_TEXT(Trapinch, "Ant Pit"),
        DEX_SCALE(298, 17, 256, 0),
        HEIGHT_WEIGHT(7, 150),
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DRAGON,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_DRAGON,
    #else
        .eggGroup2 = EGG_GROUP_BUG,
    #endif
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VIBRAVA,
        DEX_TEXT(Vibrava, "Vibration"),
        DEX_SCALE(370, 11, 256, 0),
        HEIGHT_WEIGHT(11, 153),
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_DRAGON,
    #else
        .eggGroup2 = EGG_GROUP_BUG,
    #endif
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FLYGON,
        DEX_TEXT(Flygon, "Mystic"),
        DEX_SCALE(256, 0, 268, 1),
        HEIGHT_WEIGHT(20, 820),
    },

    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CACNEA,
        DEX_TEXT(Cacnea, "Cactus"),
        DEX_SCALE(455, 20, 256, 0),
        HEIGHT_WEIGHT(4, 513),
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DARK,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CACTURNE,
        DEX_TEXT(Cacturne, "Scarecrow"),
        DEX_SCALE(327, 5, 256, 0),
        HEIGHT_WEIGHT(13, 774),
    },

    [SPECIES_SWABLU] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SWABLU,
        DEX_TEXT(Swablu, "Cotton Bird"),
        DEX_SCALE(422, -8, 256, 0),
        HEIGHT_WEIGHT(4, 12),
    },

#define ALTARIA_MISC_STATS                  \
        .type1 = TYPE_DRAGON,               \
        .catchRate = 45,                    \
        .evYield_SpDefense = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_ERRATIC,       \
        .eggGroup1 = EGG_GROUP_FLYING,      \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_ALTARIA,  \
        DEX_TEXT(Altaria, "Humming")

    [SPECIES_ALTARIA] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .type2 = TYPE_FLYING,
        .expYield = 172,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE},
        DEX_SCALE(327, 0, 256, 0),
        HEIGHT_WEIGHT(11, 206),
        ALTARIA_MISC_STATS,
    },
    [SPECIES_ALTARIA_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .type2 = TYPE_FAIRY,
        .expYield = 207,
        .abilities = {ABILITY_PIXILATE, ABILITY_PIXILATE, ABILITY_PIXILATE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(269, 0, 256, 0),
        HEIGHT_WEIGHT(15, 206),
        ALTARIA_MISC_STATS,
    },

    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 73,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_TOXIC_BOOST},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ZANGOOSE,
        DEX_TEXT(Zangoose, "Cat Ferret"),
        DEX_SCALE(256, 3, 256, 0),
        HEIGHT_WEIGHT(13, 403),
    },

    [SPECIES_SEVIPER] =
    {
        .baseHP        = 73,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_SEVIPER,
        DEX_TEXT(Seviper, "Fang Snake"),
        DEX_SCALE(275, 7, 256, 0),
        HEIGHT_WEIGHT(27, 525),
    },

    [SPECIES_LUNATONE] =
    {
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 90,
    #else
        .baseHP        = 70,
    #endif
        .type1 = TYPE_ROCK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUNATONE,
        DEX_TEXT(Lunatone, "Meteorite"),
        DEX_SCALE(300, 3, 256, 0),
        HEIGHT_WEIGHT(10, 1680),
    },

    [SPECIES_SOLROCK] =
    {
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 90,
    #else
        .baseHP        = 70,
    #endif
        .type1 = TYPE_ROCK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 161,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SOLROCK,
        DEX_TEXT(Solrock, "Meteorite"),
        DEX_SCALE(328, 0, 256, 0),
        HEIGHT_WEIGHT(12, 1540),
    },

    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 60,
        .baseSpAttack  = 46,
        .baseSpDefense = 41,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BARBOACH,
        DEX_TEXT(Barboach, "Whiskers"),
        DEX_SCALE(581, -3, 256, 0),
        HEIGHT_WEIGHT(4, 19),
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 110,
        .baseAttack    = 78,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = 76,
        .baseSpDefense = 71,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 75,
        .expYield = 164,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WHISCASH,
        DEX_TEXT(Whiscash, "Whiskers"),
        DEX_SCALE(317, 1, 256, 0),
        HEIGHT_WEIGHT(9, 236),
    },

    [SPECIES_CORPHISH] =
    {
        .baseHP        = 43,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 205,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CORPHISH,
        DEX_TEXT(Corphish, "Ruffian"),
        DEX_SCALE(484, 19, 256, 0),
        HEIGHT_WEIGHT(6, 115),
    },

    [SPECIES_CRAWDAUNT] =
    {
        .baseHP        = 63,
        .baseAttack    = 120,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DARK,
        .catchRate = 155,
        .expYield = 164,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CRAWDAUNT,
        DEX_TEXT(Crawdaunt, "Rogue"),
        DEX_SCALE(365, 9, 256, 0),
        HEIGHT_WEIGHT(11, 328),
    },

    [SPECIES_BALTOY] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BALTOY,
        DEX_TEXT(Baltoy, "Clay Doll"),
        DEX_SCALE(457, 21, 256, 0),
        HEIGHT_WEIGHT(5, 215),
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 120,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 175,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CLAYDOL,
        DEX_TEXT(Claydol, "Clay Doll"),
        DEX_SCALE(256, 3, 280, 1),
        HEIGHT_WEIGHT(15, 1080),
    },

    [SPECIES_LILEEP] =
    {
        .baseHP        = 66,
        .baseAttack    = 41,
        .baseDefense   = 77,
        .baseSpeed     = 23,
        .baseSpAttack  = 61,
        .baseSpDefense = 87,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 71,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LILEEP,
        DEX_TEXT(Lileep, "Sea Lily"),
        DEX_SCALE(305, 8, 256, 0),
        HEIGHT_WEIGHT(10, 238),
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 86,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 43,
        .baseSpAttack  = 81,
        .baseSpDefense = 107,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CRADILY,
        DEX_TEXT(Cradily, "Barnacle"),
        DEX_SCALE(267, 0, 256, 0),
        HEIGHT_WEIGHT(15, 604),
    },

    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ANORITH,
        DEX_TEXT(Anorith, "Old Shrimp"),
        DEX_SCALE(296, 4, 256, 0),
        HEIGHT_WEIGHT(7, 125),
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ARMALDO,
        DEX_TEXT(Armaldo, "Plate"),
        DEX_SCALE(312, 3, 271, 0),
        HEIGHT_WEIGHT(15, 682),
    },

    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FEEBAS,
        DEX_TEXT(Feebas, "Fish"),
        DEX_SCALE(423, -4, 256, 0),
        HEIGHT_WEIGHT(6, 74),
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_COMPETITIVE, ABILITY_CUTE_CHARM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MILOTIC,
        DEX_TEXT(Milotic, "Tender"),
        DEX_SCALE(256, 0, 360, 7),
        HEIGHT_WEIGHT(62, 1620),
    },

#define CASTFORM_MISC_STATS                             \
        .baseHP        = 70,                            \
        .baseAttack    = 70,                            \
        .baseDefense   = 70,                            \
        .baseSpeed     = 70,                            \
        .baseSpAttack  = 70,                            \
        .baseSpDefense = 70,                            \
        .catchRate = 45,                                \
        .expYield = 147,                                \
        .evYield_HP        = 1,                         \
        .itemCommon = ITEM_MYSTIC_WATER,                \
        .itemRare = ITEM_MYSTIC_WATER,                  \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_MEDIUM_FAST,               \
        .eggGroup1 = EGG_GROUP_FAIRY,                   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,               \
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},  \
        .noFlip = FALSE,                                \
        .natDexNum = NATIONAL_DEX_CASTFORM,             \
        DEX_SCALE(435, -5, 256, 0),                     \
        HEIGHT_WEIGHT(3, 8)

    [SPECIES_CASTFORM_NORMAL] =
    {
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .bodyColor = BODY_COLOR_GRAY,
        DEX_TEXT(Castform, "Weather"),
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_SUNNY]
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .bodyColor = BODY_COLOR_RED,
        DEX_TEXT(Dummy, "Weather"),
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_RAINY]
    {
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .bodyColor = BODY_COLOR_BLUE,
        DEX_TEXT(Dummy, "Weather"),
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_SNOWY]
    {
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .bodyColor = BODY_COLOR_WHITE,
        DEX_TEXT(Dummy, "Weather"),
        CASTFORM_MISC_STATS,
    },

    [SPECIES_KECLEON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 200,
        .expYield = 154,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KECLEON,
        DEX_TEXT(Kecleon, "Color Swap"),
        DEX_SCALE(316, 10, 256, 0),
        HEIGHT_WEIGHT(10, 220),
    },

    [SPECIES_SHUPPET] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 225,
        .expYield = 59,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHUPPET,
        DEX_TEXT(Shuppet, "Puppet"),
        DEX_SCALE(440, 20, 256, 0),
        HEIGHT_WEIGHT(6, 23),
    },

#define BANETTE_MISC_STATS                  \
        .type1 = TYPE_GHOST,                \
        .type2 = TYPE_GHOST,                \
        .catchRate = 45,                    \
        .evYield_Attack    = 2,             \
        .itemRare = ITEM_SPELL_TAG,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_FAST,          \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,   \
        .bodyColor = BODY_COLOR_BLACK,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_BANETTE

    [SPECIES_BANETTE] =
    {
        .baseHP        = 64,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 83,
        .baseSpDefense = 63,
        .expYield = 159,
        .abilities = {ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY},
        DEX_TEXT(Banette, "Marionette"),
        DEX_SCALE(262, 9, 256, 0),
        HEIGHT_WEIGHT(11, 125),
        BANETTE_MISC_STATS,
    },
    [SPECIES_BANETTE_MEGA] =
    {
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .expYield = 194,
        .abilities = {ABILITY_PRANKSTER, ABILITY_PRANKSTER, ABILITY_PRANKSTER},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(BanetteMega, "Marionette"),
        DEX_SCALE(278, 1, 256, 0),
        HEIGHT_WEIGHT(12, 130),
        BANETTE_MISC_STATS,
    },

    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DUSKULL,
        DEX_TEXT(Duskull, "Requiem"),
        DEX_SCALE(406, -4, 256, 0),
        HEIGHT_WEIGHT(8, 150),
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 159,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DUSCLOPS,
        DEX_TEXT(Dusclops, "Beckon"),
        DEX_SCALE(256, 3, 299, 1),
        HEIGHT_WEIGHT(16, 306),
    },

    [SPECIES_TROPIUS] =
    {
        .baseHP        = 99,
        .baseAttack    = 68,
        .baseDefense   = 83,
        .baseSpeed     = 51,
        .baseSpAttack  = 72,
        .baseSpDefense = 87,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 200,
        .expYield = 161,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TROPIUS,
        DEX_TEXT(Tropius, "Fruit"),
        DEX_SCALE(256, 0, 344, 7),
        HEIGHT_WEIGHT(20, 1000),
    },

    [SPECIES_CHIMECHO] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 75,
        .baseDefense   = 80,
        .baseSpDefense = 90,
    #else
        .baseHP        = 65,
        .baseDefense   = 70,
        .baseSpDefense = 80,
    #endif
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHIMECHO,
        DEX_TEXT(Chimecho, "Wind Chime"),
        DEX_SCALE(505, 0, 256, 0),
        HEIGHT_WEIGHT(6, 10),
    },

#define ABSOL_MISC_STATS                    \
        .type1 = TYPE_DARK,                 \
        .type2 = TYPE_DARK,                 \
        .catchRate = 30,                    \
        .evYield_Attack    = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 25,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .bodyColor = BODY_COLOR_WHITE,      \
        .noFlip = TRUE,                     \
        .natDexNum = NATIONAL_DEX_ABSOL,    \
        DEX_SCALE(301, 3, 256, 0)

    [SPECIES_ABSOL] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .expYield = 163,
        .abilities = {ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED},
        DEX_TEXT(Absol, "Disaster"),
        HEIGHT_WEIGHT(12, 470),
        ABSOL_MISC_STATS,
    },
    [SPECIES_ABSOL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .expYield = 198,
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(AbsolMega, "Disaster"),
        HEIGHT_WEIGHT(12, 490),
        ABSOL_MISC_STATS,
    },

    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,
        .baseAttack    = 23,
        .baseDefense   = 48,
        .baseSpeed     = 23,
        .baseSpAttack  = 23,
        .baseSpDefense = 48,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 125,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WYNAUT,
        DEX_TEXT(Wynaut, "Bright"),
        DEX_SCALE(484, 19, 256, 0),
        HEIGHT_WEIGHT(6, 140),
    },

    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 190,
        .expYield = 60,
        .evYield_HP        = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SNORUNT,
        DEX_TEXT(Snorunt, "Snow Hat"),
        DEX_SCALE(380, 15, 256, 0),
        HEIGHT_WEIGHT(7, 168),
    },

#define GLALIE_MISC_STATS                   \
        .type1 = TYPE_ICE,                  \
        .type2 = TYPE_ICE,                  \
        .catchRate = 75,                    \
        .evYield_HP        = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FAIRY,       \
        .eggGroup2 = EGG_GROUP_MINERAL,     \
        .bodyColor = BODY_COLOR_GRAY,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_GLALIE

    [SPECIES_GLALIE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .expYield = 168,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY},
        DEX_TEXT(Glalie, "Face"),
        DEX_SCALE(256, 3, 344, 0),
        HEIGHT_WEIGHT(15, 2565),
        GLALIE_MISC_STATS,
    },
    [SPECIES_GLALIE_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .expYield = 203,
        .abilities = {ABILITY_REFRIGERATE, ABILITY_REFRIGERATE, ABILITY_REFRIGERATE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(GlalieMega, "Face"),
        DEX_SCALE(256, 4, 423, 11),
        HEIGHT_WEIGHT(21, 3502),
        GLALIE_MISC_STATS,
    },

    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SPHEAL,
        DEX_TEXT(Spheal, "Clap"),
        DEX_SCALE(315, 16, 256, 0),
        HEIGHT_WEIGHT(8, 395),
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 120,
        .expYield = 144,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SEALEO,
        DEX_TEXT(Sealeo, "Ball Roll"),
        DEX_SCALE(338, 13, 256, 0),
        HEIGHT_WEIGHT(11, 876),
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .type1 = TYPE_ICE,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 239,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WALREIN,
        DEX_TEXT(Walrein, "Ice Break"),
        DEX_SCALE(316, 4, 256, 0),
        HEIGHT_WEIGHT(14, 1506),
    },

    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 35,
        .baseAttack    = 64,
        .baseDefense   = 85,
        .baseSpeed     = 32,
        .baseSpAttack  = 74,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 69,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CLAMPERL,
        DEX_TEXT(Clamperl, "Bivalve"),
        DEX_SCALE(691, 22, 256, 0),
        HEIGHT_WEIGHT(4, 525),
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 55,
        .baseAttack    = 104,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 94,
        .baseSpDefense = 75,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HUNTAIL,
        DEX_TEXT(Huntail, "Deep Sea"),
        DEX_SCALE(307, 1, 256, 0),
        HEIGHT_WEIGHT(17, 270),
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 55,
        .baseAttack    = 84,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 114,
        .baseSpDefense = 75,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GOREBYSS,
        DEX_TEXT(Gorebyss, "South Sea"),
        DEX_SCALE(278, 5, 256, 0),
        HEIGHT_WEIGHT(18, 226),
    },

    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 25,
        .expYield = 170,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RELICANTH,
        DEX_TEXT(Relicanth, "Longevity"),
        DEX_SCALE(316, 7, 256, 0),
        HEIGHT_WEIGHT(10, 234),
    },

    [SPECIES_LUVDISC] =
    {
        .baseHP        = 43,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 97,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 116,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUVDISC,
        DEX_TEXT(Luvdisc, "Rendezvous"),
        DEX_SCALE(371, 2, 256, 0),
        HEIGHT_WEIGHT(6, 87),
    },

    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BAGON,
        DEX_TEXT(Bagon, "Rock Head"),
        DEX_SCALE(448, 18, 256, 0),
        HEIGHT_WEIGHT(6, 421),
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHELGON,
        DEX_TEXT(Shelgon, "Endurance"),
        DEX_SCALE(311, 12, 256, 0),
        HEIGHT_WEIGHT(11, 1105),
    },

#define SALAMENCE_MISC_STATS                \
        .type1 = TYPE_DRAGON,               \
        .type2 = TYPE_FLYING,               \
        .catchRate = 45,                    \
        .evYield_Attack    = 3,             \
        .itemRare = ITEM_DRAGON_FANG,       \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 40,                    \
        .friendship = 35,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_DRAGON,      \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_SALAMENCE

    [SPECIES_SALAMENCE] =
    {
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .expYield = 270,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE},
        DEX_TEXT(Salamence, "Dragon"),
        DEX_SCALE(256, 0, 256, 0),
        HEIGHT_WEIGHT(15, 1026),
        SALAMENCE_MISC_STATS,
    },
    [SPECIES_SALAMENCE_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .expYield = 315,
        .abilities = {ABILITY_AERILATE, ABILITY_AERILATE, ABILITY_AERILATE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(SalamenceMega, "Dragon"),
        DEX_SCALE(256, 0, 268, 0),
        HEIGHT_WEIGHT(18, 1126),
        SALAMENCE_MISC_STATS,
    },

    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BELDUM,
        DEX_TEXT(Beldum, "Iron Ball"),
        DEX_SCALE(414, -1, 256, 0),
        HEIGHT_WEIGHT(6, 952),
    },

    [SPECIES_METANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_METANG,
        DEX_TEXT(Metang, "Iron Claw"),
        DEX_SCALE(256, 6, 256, 0),
        HEIGHT_WEIGHT(12, 2025),
    },

#define METAGROSS_MISC_STATS            \
        .type1 = TYPE_STEEL,            \
        .type2 = TYPE_PSYCHIC,          \
        .catchRate = 3,                 \
        .evYield_Defense   = 3,         \
        .itemRare = ITEM_METAL_COAT,    \
        .genderRatio = MON_GENDERLESS,  \
        .eggCycles = 40,                \
        .friendship = 35,               \
        .growthRate = GROWTH_SLOW,      \
        .eggGroup1 = EGG_GROUP_MINERAL, \
        .eggGroup2 = EGG_GROUP_MINERAL, \
        .bodyColor = BODY_COLOR_BLUE,   \
        .noFlip = FALSE,                \
        .natDexNum = NATIONAL_DEX_METAGROSS

    [SPECIES_METAGROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .expYield = 270,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        DEX_TEXT(Metagross, "Iron Leg"),
        DEX_SCALE(256, 4, 447, 9),
        HEIGHT_WEIGHT(16, 5500),
        METAGROSS_MISC_STATS,
    },
    [SPECIES_METAGROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .expYield = 315,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(MetagrossMega, "Iron Leg"),
        DEX_SCALE(257, 10, 423, 8),
        HEIGHT_WEIGHT(25, 9429),
        METAGROSS_MISC_STATS,
    },

    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_REGIROCK,
        DEX_TEXT(Regirock, "Rock Peak"),
        DEX_SCALE(256, 2, 309, 1),
        HEIGHT_WEIGHT(17, 2300),
    },

    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_REGICE,
        DEX_TEXT(Regice, "Iceberg"),
        DEX_SCALE(256, 0, 301, 2),
        HEIGHT_WEIGHT(18, 1750),
    },

    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_REGISTEEL,
        DEX_TEXT(Registeel, "Iron"),
        DEX_SCALE(256, 0, 359, 6),
        HEIGHT_WEIGHT(19, 2050),
    },

#define LATIS_MISC_STATS                                \
        .type1 = TYPE_DRAGON,                           \
        .type2 = TYPE_PSYCHIC,                          \
        .catchRate = 3,                                 \
        .eggCycles = 120,                               \
        .friendship = 90,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},  \
        .noFlip = FALSE

    [SPECIES_LATIAS] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .evYield_SpDefense = 3,
        .expYield = 270,
        .genderRatio = MON_FEMALE,
        .bodyColor = BODY_COLOR_RED,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_LATIAS,
        DEX_TEXT(Latias, "Eon"),
        DEX_SCALE(304, 3, 256, 0),
        HEIGHT_WEIGHT(14, 400),
        LATIS_MISC_STATS,
    },
    [SPECIES_LATIAS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .evYield_SpDefense = 3,
        .expYield = 315,
        .genderRatio = MON_FEMALE,
        .bodyColor = BODY_COLOR_PURPLE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
        .natDexNum = NATIONAL_DEX_LATIAS,
        DEX_TEXT(Latias, "Eon"),
        DEX_SCALE(256, 0, 277, 1),
        HEIGHT_WEIGHT(18, 520),
        LATIS_MISC_STATS,
    },

    [SPECIES_LATIOS] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .evYield_SpAttack  = 3,
        .expYield = 270,
        .genderRatio = MON_MALE,
        .bodyColor = BODY_COLOR_BLUE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_LATIOS,
        DEX_TEXT(Latios, "Eon"),
        DEX_SCALE(256, 0, 294, 3),
        HEIGHT_WEIGHT(20, 600),
        LATIS_MISC_STATS,
    },
    [SPECIES_LATIOS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .expYield = 315,
        .genderRatio = MON_MALE,
        .bodyColor = BODY_COLOR_PURPLE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
        .natDexNum = NATIONAL_DEX_LATIOS,
        DEX_TEXT(Latios, "Eon"),
        DEX_SCALE(256, 0, 342, 7),
        HEIGHT_WEIGHT(23, 700),
        LATIS_MISC_STATS,
    },

#define KYOGRE_MISC_STATS                   \
        .type1 = TYPE_WATER,                \
        .type2 = TYPE_WATER,                \
        .catchRate = 3,                     \
        .expYield = 302,                    \
        .evYield_SpAttack  = 3,             \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 0,                    \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .flags = SPECIES_FLAG_LEGENDARY,    \
        .natDexNum = NATIONAL_DEX_KYOGRE,   \
        DEX_TEXT(Kyogre, "Sea Basin")

    [SPECIES_KYOGRE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .abilities = {ABILITY_DRIZZLE, ABILITY_NONE},
        DEX_SCALE(256, 0, 614, 13),
        HEIGHT_WEIGHT(45, 3520),
        KYOGRE_MISC_STATS,
    },
    [SPECIES_KYOGRE_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .abilities = {ABILITY_PRIMORDIAL_SEA, ABILITY_NONE},
        DEX_SCALE(256, 0, 614, 13),
        HEIGHT_WEIGHT(98, 4300),
        KYOGRE_MISC_STATS,
    },

#define GROUDON_MISC_STATS                  \
        .type1 = TYPE_GROUND,               \
        .catchRate = 3,                     \
        .expYield = 302,                    \
        .evYield_Attack    = 3,             \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 0,                    \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_RED,        \
        .noFlip = FALSE,                    \
        .flags = SPECIES_FLAG_LEGENDARY,    \
        .natDexNum = NATIONAL_DEX_GROUDON,  \
        DEX_TEXT(Groudon, "Continent")

    [SPECIES_GROUDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_DROUGHT, ABILITY_NONE},
        DEX_SCALE(256, 0, 515, 14),
        HEIGHT_WEIGHT(35, 9500),
        GROUDON_MISC_STATS,
    },
    [SPECIES_GROUDON_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .type2 = TYPE_FIRE,
        .abilities = {ABILITY_DESOLATE_LAND, ABILITY_NONE},
        DEX_SCALE(256, 0, 515, 14),
        HEIGHT_WEIGHT(50, 9997),
        GROUDON_MISC_STATS,
    },

#define RAYQUAZA_MISC_STATS                 \
        .type1 = TYPE_DRAGON,               \
        .type2 = TYPE_FLYING,               \
        .catchRate = 45,                    \
        .expYield = 306,                    \
        .evYield_Attack    = 2,             \
        .evYield_SpAttack  = 1,             \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 0,                    \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_GREEN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_RAYQUAZA, \
        DEX_TEXT(Rayquaza, "Sky High")

    [SPECIES_RAYQUAZA] =
    {
        .baseHP        = 105,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .abilities = {ABILITY_AIR_LOCK, ABILITY_NONE},
        .flags = SPECIES_FLAG_LEGENDARY,
        DEX_SCALE(256, 0, 448, 12),
        HEIGHT_WEIGHT(70, 2065),
        RAYQUAZA_MISC_STATS,
    },
    [SPECIES_RAYQUAZA_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .abilities = {ABILITY_DELTA_STREAM, ABILITY_NONE},
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(256, 0, 448, 12),
        HEIGHT_WEIGHT(108, 3920),
        RAYQUAZA_MISC_STATS,
    },

    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        DEX_TEXT(Jirachi, "Wish"),
        DEX_SCALE(608, -8, 256, 0),
        HEIGHT_WEIGHT(3, 11),
    },

#define DEOXYS_MISC_STATS                               \
        .type1 = TYPE_PSYCHIC,                          \
        .type2 = TYPE_PSYCHIC,                          \
        .catchRate = 3,                                 \
        .expYield = 270,                                \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_RED,                    \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                 \
        .natDexNum = NATIONAL_DEX_DEOXYS,               \
        DEX_SCALE(256, 0, 290, 2),                      \
        HEIGHT_WEIGHT(17, 608)

    [SPECIES_DEOXYS_NORMAL] =
    {
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        DEX_TEXT(Deoxys, "DNA"),
        DEOXYS_MISC_STATS,
    },

    [SPECIES_DEOXYS_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        DEX_TEXT(Deoxys, "DNA"), // No official dex entry for this form
        DEOXYS_MISC_STATS,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        DEX_TEXT(Deoxys, "DNA"), // No official dex entry for this form
        DEOXYS_MISC_STATS,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .evYield_Speed     = 3,
        DEX_TEXT(Deoxys, "DNA"), // No official dex entry for this form
        DEOXYS_MISC_STATS,
    },

#if P_GEN_4_POKEMON == TRUE
    [SPECIES_TURTWIG] =
    {
        .baseHP        = 55,
        .baseAttack    = 68,
        .baseDefense   = 64,
        .baseSpeed     = 31,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TURTWIG,
        DEX_TEXT(Turtwig, "Tiny Leaf"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 102),
    },

    [SPECIES_GROTLE] =
    {
        .baseHP        = 75,
        .baseAttack    = 89,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GROTLE,
        DEX_TEXT(Grotle, "Grove"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(11, 970),
    },

    [SPECIES_TORTERRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 109,
        .baseDefense   = 105,
        .baseSpeed     = 56,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_TORTERRA,
        DEX_TEXT(Torterra, "Continent"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(22, 3100),
    },

    [SPECIES_CHIMCHAR] =
    {
        .baseHP        = 44,
        .baseAttack    = 58,
        .baseDefense   = 44,
        .baseSpeed     = 61,
        .baseSpAttack  = 58,
        .baseSpDefense = 44,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_CHIMCHAR,
        DEX_TEXT(Chimchar, "Chimp"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 62),
    },

    [SPECIES_MONFERNO] =
    {
        .baseHP        = 64,
        .baseAttack    = 78,
        .baseDefense   = 52,
        .baseSpeed     = 81,
        .baseSpAttack  = 78,
        .baseSpDefense = 52,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_MONFERNO,
        DEX_TEXT(Monferno, "Playful"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 220),
    },

    [SPECIES_INFERNAPE] =
    {
        .baseHP        = 76,
        .baseAttack    = 104,
        .baseDefense   = 71,
        .baseSpeed     = 108,
        .baseSpAttack  = 104,
        .baseSpDefense = 71,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 240,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_INFERNAPE,
        DEX_TEXT(Infernape, "Flame"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 550),
    },

    [SPECIES_PIPLUP] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 61,
        .baseSpDefense = 56,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PIPLUP,
        DEX_TEXT(Piplup, "Penguin"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 52),
    },

    [SPECIES_PRINPLUP] =
    {
        .baseHP        = 64,
        .baseAttack    = 66,
        .baseDefense   = 68,
        .baseSpeed     = 50,
        .baseSpAttack  = 81,
        .baseSpDefense = 76,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PRINPLUP,
        DEX_TEXT(Prinplup, "Penguin"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(8, 230),
    },

    [SPECIES_EMPOLEON] =
    {
        .baseHP        = 84,
        .baseAttack    = 86,
        .baseDefense   = 88,
        .baseSpeed     = 60,
        .baseSpAttack  = 111,
        .baseSpDefense = 101,
        .type1 = TYPE_WATER,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_EMPOLEON,
        DEX_TEXT(Empoleon, "Emperor"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(17, 845),
    },

    [SPECIES_STARLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STARLY,
        DEX_TEXT(Starly, "Starling"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 20),
    },

    [SPECIES_STARAVIA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STARAVIA,
        DEX_TEXT(Staravia, "Starling"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(6, 155),
    },

    [SPECIES_STARAPTOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 60,
    #else
        .baseSpDefense = 50,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 218,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STARAPTOR,
        DEX_TEXT(Staraptor, "Predator"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 249),
    },

    [SPECIES_BIDOOF] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 31,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 50,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BIDOOF,
        DEX_TEXT(Bidoof, "Plump Mouse"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 200),
    },

    [SPECIES_BIBAREL] =
    {
        .baseHP        = 79,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 71,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_WATER,
        .catchRate = 127,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BIBAREL,
        DEX_TEXT(Bibarel, "Beaver"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 315),
    },

    [SPECIES_KRICKETOT] =
    {
        .baseHP        = 37,
        .baseAttack    = 25,
        .baseDefense   = 41,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 41,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 39,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KRICKETOT,
        DEX_TEXT(Kricketot, "Cricket"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 22),
    },

    [SPECIES_KRICKETUNE] =
    {
        .baseHP        = 77,
        .baseAttack    = 85,
        .baseDefense   = 51,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 51,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 45,
        .expYield = 134,
        .evYield_Attack    = 2,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_KRICKETUNE,
        DEX_TEXT(Kricketune, "Cricket"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 255),
    },

    [SPECIES_SHINX] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 34,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 34,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 235,
        .expYield = 53,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHINX,
        DEX_TEXT(Shinx, "Flash"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 95),
    },

    [SPECIES_LUXIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 49,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 49,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 127,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUXIO,
        DEX_TEXT(Luxio, "Spark"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 305),
    },

    [SPECIES_LUXRAY] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 79,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 79,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 235,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUXRAY,
        DEX_TEXT(Luxray, "Gleam Eyes"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(14, 420),
    },

    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_BUDEW,
        DEX_TEXT(Budew, "Bud"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(2, 12),
    },

    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
    #if P_UPDATED_STATS >= GEN_6
        .baseDefense   = 65,
    #else
        .baseDefense   = 55,
    #endif
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 232,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_ROSERADE,
        DEX_TEXT(Roserade, "Bouquet"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 145),
    },

    [SPECIES_CRANIDOS] =
    {
        .baseHP        = 67,
        .baseAttack    = 125,
        .baseDefense   = 40,
        .baseSpeed     = 58,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CRANIDOS,
        DEX_TEXT(Cranidos, "Head Butt"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 315),
    },

    [SPECIES_RAMPARDOS] =
    {
        .baseHP        = 97,
        .baseAttack    = 165,
        .baseDefense   = 60,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RAMPARDOS,
        DEX_TEXT(Rampardos, "Head Butt"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(16, 1025),
    },

    [SPECIES_SHIELDON] =
    {
        .baseHP        = 30,
        .baseAttack    = 42,
        .baseDefense   = 118,
        .baseSpeed     = 30,
        .baseSpAttack  = 42,
        .baseSpDefense = 88,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 70,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SHIELDON,
        DEX_TEXT(Shieldon, "Shield"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 570),
    },

    [SPECIES_BASTIODON] =
    {
        .baseHP        = 60,
        .baseAttack    = 52,
        .baseDefense   = 168,
        .baseSpeed     = 30,
        .baseSpAttack  = 47,
        .baseSpDefense = 138,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BASTIODON,
        DEX_TEXT(Bastiodon, "Shield"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 1495),
    },

#define BURMY_BASE_STATS                                                    \
        .baseHP        = 40,                                                \
        .baseAttack    = 29,                                                \
        .baseDefense   = 45,                                                \
        .baseSpeed     = 36,                                                \
        .baseSpAttack  = 29,                                                \
        .baseSpDefense = 45,                                                \
        .type1 = TYPE_BUG,                                                  \
        .type2 = TYPE_BUG,                                                  \
        .catchRate = 120,                                                   \
        .expYield = 45,                                                     \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 15,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_BUG,                                         \
        .eggGroup2 = EGG_GROUP_BUG,                                         \
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT},   \
        .noFlip = FALSE,                                                    \
        .natDexNum = NATIONAL_DEX_BURMY,                                    \
        DEX_SCALE(356, 17, 256, 0),                                         \
        HEIGHT_WEIGHT(2, 34)

    [SPECIES_BURMY_PLANT_CLOAK] =
    {
        .bodyColor = BODY_COLOR_GREEN,
        DEX_TEXT(Burmy, "Bagworm"),
        BURMY_BASE_STATS,
    },
    [SPECIES_BURMY_SANDY_CLOAK] =
    {
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Dummy, "Bagworm"),
        BURMY_BASE_STATS,
    },
    [SPECIES_BURMY_TRASH_CLOAK] =
    {
        .bodyColor = BODY_COLOR_RED,
        DEX_TEXT(Dummy, "Bagworm"),
        BURMY_BASE_STATS,
    },

#define WORMADAM_MISC_STATS                                                 \
        .type1 = TYPE_BUG,                                                  \
        .catchRate = 45,                                                    \
        .expYield = 148,                                                    \
        .itemRare = ITEM_SILVER_POWDER,                                     \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 15,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_BUG,                                         \
        .eggGroup2 = EGG_GROUP_BUG,                                         \
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},\
        .noFlip = FALSE,                                                    \
        .natDexNum = NATIONAL_DEX_WORMADAM,                                 \
        DEX_SCALE(356, 17, 256, 0),                                         \
        HEIGHT_WEIGHT(5, 65)

    [SPECIES_WORMADAM_PLANT_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 59,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 79,
        .baseSpDefense = 105,
        .type2 = TYPE_GRASS,
        .evYield_SpDefense = 2,
        .bodyColor = BODY_COLOR_GREEN,
        DEX_TEXT(Wormadam, "Bagworm"),
        WORMADAM_MISC_STATS,
    },

    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 105,
        .baseSpeed     = 36,
        .baseSpAttack  = 59,
        .baseSpDefense = 85,
        .type2 = TYPE_GROUND,
        .evYield_Defense   = 2,
        .bodyColor = BODY_COLOR_BROWN,
        DEX_TEXT(Dummy, "Bagworm"),
        WORMADAM_MISC_STATS,
    },

    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 69,
        .baseSpDefense = 95,
        .type2 = TYPE_STEEL,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .bodyColor = BODY_COLOR_RED,
        DEX_TEXT(Dummy, "Bagworm"),
        WORMADAM_MISC_STATS,
    },

    [SPECIES_MOTHIM] =
    {
        .baseHP        = 70,
        .baseAttack    = 94,
        .baseDefense   = 50,
        .baseSpeed     = 66,
        .baseSpAttack  = 94,
        .baseSpDefense = 50,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MOTHIM,
        DEX_TEXT(Mothim, "Moth"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 233),
    },

    [SPECIES_COMBEE] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 42,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 42,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 49,
        .evYield_Speed     = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_NONE, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_COMBEE,
        DEX_TEXT(Combee, "Tiny Bee"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 55),
    },

    [SPECIES_VESPIQUEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 102,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 102,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 166,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_VESPIQUEN,
        DEX_TEXT(Vespiquen, "Beehive"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 385),
    },

    [SPECIES_PACHIRISU] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PACHIRISU,
        DEX_TEXT(Pachirisu, "EleSquirrel"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 39),
    },

    [SPECIES_BUIZEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 30,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BUIZEL,
        DEX_TEXT(Buizel, "Sea Weasel"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(7, 295),
    },

    [SPECIES_FLOATZEL] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FLOATZEL,
        DEX_TEXT(Floatzel, "Sea Weasel"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(11, 335),
    },

    [SPECIES_CHERUBI] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 35,
        .baseSpAttack  = 62,
        .baseSpDefense = 53,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHERUBI,
        DEX_TEXT(Cherubi, "Cherry"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 33),
    },

#define CHERRIM_MISC_STATS                                  \
        .baseHP        = 70,                                \
        .baseAttack    = 60,                                \
        .baseDefense   = 70,                                \
        .baseSpeed     = 85,                                \
        .baseSpAttack  = 87,                                \
        .baseSpDefense = 78,                                \
        .type1 = TYPE_GRASS,                                \
        .type2 = TYPE_GRASS,                                \
        .catchRate = 75,                                    \
        .expYield = 158,                                    \
        .evYield_SpAttack  = 2,                             \
        .itemRare = ITEM_MIRACLE_SEED,                      \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroup1 = EGG_GROUP_FAIRY,                       \
        .eggGroup2 = EGG_GROUP_GRASS,                       \
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_NONE},   \
        .noFlip = FALSE,                                    \
        .natDexNum = NATIONAL_DEX_CHERRIM,                  \
        DEX_SCALE(356, 17, 256, 0),                         \
        HEIGHT_WEIGHT(5, 93)

    [SPECIES_CHERRIM_OVERCAST] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        DEX_TEXT(Cherrim, "Blossom"),
        CHERRIM_MISC_STATS,
    },
    [SPECIES_CHERRIM_SUNSHINE] =
    {
        .bodyColor = BODY_COLOR_PINK,
        DEX_TEXT(Dummy, "Blossom"),
        CHERRIM_MISC_STATS,
    },

#define SHELLOS_MISC_STATS                                                          \
        .baseHP        = 76,                                                        \
        .baseAttack    = 48,                                                        \
        .baseDefense   = 48,                                                        \
        .baseSpeed     = 34,                                                        \
        .baseSpAttack  = 57,                                                        \
        .baseSpDefense = 62,                                                        \
        .type1 = TYPE_WATER,                                                        \
        .type2 = TYPE_WATER,                                                        \
        .catchRate = 190,                                                           \
        .expYield = 65,                                                             \
        .evYield_HP        = 1,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = 70,                                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroup1 = EGG_GROUP_WATER_1,                                             \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                                           \
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE},\
        .noFlip = FALSE,                                                            \
        .natDexNum = NATIONAL_DEX_SHELLOS,                                          \
        DEX_SCALE(356, 17, 256, 0),                                                 \
        HEIGHT_WEIGHT(3, 63)

    [SPECIES_SHELLOS_WEST_SEA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        DEX_TEXT(Shellos, "Sea Slug"),
        SHELLOS_MISC_STATS,
    },
    [SPECIES_SHELLOS_EAST_SEA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        DEX_TEXT(Dummy, "Sea Slug"),
        SHELLOS_MISC_STATS,
    },

#define GASTRODON_MISC_STATS                                                        \
        .baseHP        = 111,                                                       \
        .baseAttack    = 83,                                                        \
        .baseDefense   = 68,                                                        \
        .baseSpeed     = 39,                                                        \
        .baseSpAttack  = 92,                                                        \
        .baseSpDefense = 82,                                                        \
        .type1 = TYPE_WATER,                                                        \
        .type2 = TYPE_GROUND,                                                       \
        .catchRate = 75,                                                            \
        .expYield = 166,                                                            \
        .evYield_HP        = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = 70,                                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroup1 = EGG_GROUP_WATER_1,                                             \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                                           \
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_SAND_FORCE},\
        .noFlip = FALSE,                                                            \
        .natDexNum = NATIONAL_DEX_GASTRODON,                                        \
        DEX_SCALE(356, 17, 256, 0),                                                 \
        HEIGHT_WEIGHT(9, 299)

    [SPECIES_GASTRODON_WEST_SEA] =
    {
        .bodyColor = BODY_COLOR_PURPLE,
        DEX_TEXT(Gastrodon, "Sea Slug"),
        GASTRODON_MISC_STATS,
    },
    [SPECIES_GASTRODON_EAST_SEA] =
    {
        .bodyColor = BODY_COLOR_BLUE,
        DEX_TEXT(Dummy, "Sea Slug"),
        GASTRODON_MISC_STATS,
    },

    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 169,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_PICKUP, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_AMBIPOM,
        DEX_TEXT(Ambipom, "Long Tail"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 203),
    },

    [SPECIES_DRIFLOON] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 34,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 44,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FLYING,
        .catchRate = 125,
        .expYield = 70,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRIFLOON,
        DEX_TEXT(Drifloon, "Balloon"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 12),
    },

    [SPECIES_DRIFBLIM] =
    {
        .baseHP        = 150,
        .baseAttack    = 80,
        .baseDefense   = 44,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 54,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 174,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRIFBLIM,
        DEX_TEXT(Drifblim, "Blimp"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 150),
    },

    [SPECIES_BUNEARY] =
    {
        .baseHP        = 55,
        .baseAttack    = 66,
        .baseDefense   = 44,
        .baseSpeed     = 85,
        .baseSpAttack  = 44,
        .baseSpDefense = 56,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 70,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KLUTZ, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BUNEARY,
        DEX_TEXT(Buneary, "Rabbit"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 55),
    },

#define LOPUNNY_MISC_STATS                  \
        .type1 = TYPE_NORMAL,               \
        .catchRate = 60,                    \
        .evYield_Speed     = 2,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 140,                  \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_LOPUNNY

    [SPECIES_LOPUNNY] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 84,
        .baseSpeed     = 105,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .type2 = TYPE_NORMAL,
        .expYield = 168,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_KLUTZ, ABILITY_LIMBER},
        DEX_TEXT(Lopunny, "Rabbit"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 333),
        LOPUNNY_MISC_STATS,
    },
    [SPECIES_LOPUNNY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .type2 = TYPE_FIGHTING,
        .expYield = 203,
        .abilities = {ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(LopunnyMega, "Rabbit"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 283),
        LOPUNNY_MISC_STATS,
    },

    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MISMAGIUS,
        DEX_TEXT(Mismagius, "Magical"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 44),
    },

    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 71,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HONCHKROW,
        DEX_TEXT(Honchkrow, "Big Boss"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 273),
    },

    [SPECIES_GLAMEOW] =
    {
        .baseHP        = 49,
        .baseAttack    = 55,
        .baseDefense   = 42,
        .baseSpeed     = 85,
        .baseSpAttack  = 42,
        .baseSpDefense = 37,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIMBER, ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GLAMEOW,
        DEX_TEXT(Glameow, "Catty"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 39),
    },

    [SPECIES_PURUGLY] =
    {
        .baseHP        = 71,
        .baseAttack    = 82,
        .baseDefense   = 64,
        .baseSpeed     = 112,
        .baseSpAttack  = 64,
        .baseSpDefense = 59,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PURUGLY,
        DEX_TEXT(Purugly, "Tiger Cat"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 438),
    },

    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 120,
        .expYield = 57,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHINGLING,
        DEX_TEXT(Chingling, "Bell"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(2, 6),
    },

    [SPECIES_STUNKY] =
    {
        .baseHP        = 63,
        .baseAttack    = 63,
        .baseDefense   = 47,
        .baseSpeed     = 74,
        .baseSpAttack  = 41,
        .baseSpDefense = 41,
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 225,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_STUNKY,
        DEX_TEXT(Stunky, "Skunk"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 192),
    },

    [SPECIES_SKUNTANK] =
    {
        .baseHP        = 103,
        .baseAttack    = 93,
        .baseDefense   = 67,
        .baseSpeed     = 84,
        .baseSpAttack  = 71,
        .baseSpDefense = 61,
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 60,
        .expYield = 168,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SKUNTANK,
        DEX_TEXT(Skuntank, "Skunk"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 380),
    },

    [SPECIES_BRONZOR] =
    {
        .baseHP        = 57,
        .baseAttack    = 24,
        .baseDefense   = 86,
        .baseSpeed     = 23,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BRONZOR,
        DEX_TEXT(Bronzor, "Bronze"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 605),
    },

    [SPECIES_BRONZONG] =
    {
        .baseHP        = 67,
        .baseAttack    = 89,
        .baseDefense   = 116,
        .baseSpeed     = 33,
        .baseSpAttack  = 79,
        .baseSpDefense = 116,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 175,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BRONZONG,
        DEX_TEXT(Bronzong, "Bronze Bell"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 1870),
    },

    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 255,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_BONSLY,
        DEX_TEXT(Bonsly, "Bonsai"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 150),
    },

    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        .type1 = TYPE_PSYCHIC,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_PSYCHIC,
    #endif
        .catchRate = 145,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MIME_JR,
        DEX_TEXT(MimeJr, "Mime"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(6, 130),
    },

    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 130,
        .expYield = 110,
        .evYield_HP        = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HAPPINY,
        DEX_TEXT(Happiny, "Playhouse"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(6, 244),
    },

    [SPECIES_CHATOT] =
    {
        .baseHP        = 76,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 91,
        .baseSpAttack  = 92,
        .baseSpDefense = 42,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 144,
        .evYield_Attack    = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CHATOT,
        DEX_TEXT(Chatot, "Music Note"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(5, 19),
    },

    [SPECIES_SPIRITOMB] =
    {
        .baseHP        = 50,
        .baseAttack    = 92,
        .baseDefense   = 108,
        .baseSpeed     = 35,
        .baseSpAttack  = 92,
        .baseSpDefense = 108,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_DARK,
        .catchRate = 100,
        .expYield = 170,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SPIRITOMB,
        DEX_TEXT(Spiritomb, "Forbidden"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 1080),
    },

    [SPECIES_GIBLE] =
    {
        .baseHP        = 58,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GIBLE,
        DEX_TEXT(Gible, "Land Shark"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(7, 205),
    },

    [SPECIES_GABITE] =
    {
        .baseHP        = 68,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 82,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GABITE,
        DEX_TEXT(Gabite, "Cave"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(14, 560),
    },

#define GARCHOMP_MISC_STATS                 \
        .type1 = TYPE_DRAGON,               \
        .type2 = TYPE_GROUND,               \
        .catchRate = 45,                    \
        .evYield_Attack    = 3,             \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 40,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_DRAGON,      \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_GARCHOMP, \
        DEX_SCALE(356, 17, 256, 0),         \
        HEIGHT_WEIGHT(19, 950)

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 108,
        .baseAttack    = 130,
        .baseDefense   = 95,
        .baseSpeed     = 102,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .expYield = 270,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        DEX_TEXT(Garchomp, "Mach"),
        GARCHOMP_MISC_STATS,
    },
    [SPECIES_GARCHOMP_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .expYield = 315,
        .abilities = {ABILITY_SAND_FORCE, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(GarchompMega, "Mach"),
        GARCHOMP_MISC_STATS,
    },

    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 50,
        .expYield = 78,
        .evYield_HP        = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MUNCHLAX,
        DEX_TEXT(Munchlax, "Big Eater"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(6, 1050),
    },

    [SPECIES_RIOLU] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RIOLU,
        DEX_TEXT(Riolu, "Emanation"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(7, 202),
    },

#define LUCARIO_MISC_STATS                  \
        .type1 = TYPE_FIGHTING,             \
        .type2 = TYPE_STEEL,                \
        .catchRate = 45,                    \
        .evYield_Attack    = 1,             \
        .evYield_SpAttack  = 1,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 25,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,  \
        .bodyColor = BODY_COLOR_BLUE,       \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_LUCARIO

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .expYield = 184,
        .abilities = {ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED},
        DEX_TEXT(Lucario, "Aura"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 540),
        LUCARIO_MISC_STATS,
    },
    [SPECIES_LUCARIO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .expYield = 219,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_TEXT(LucarioMega, "Aura"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 575),
        LUCARIO_MISC_STATS,
    },

    [SPECIES_HIPPOPOTAS] =
    {
        .baseHP        = 68,
        .baseAttack    = 72,
        .baseDefense   = 78,
        .baseSpeed     = 32,
        .baseSpAttack  = 38,
        .baseSpDefense = 42,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 140,
        .expYield = 66,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HIPPOPOTAS,
        DEX_TEXT(Hippopotas, "Hippo"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(8, 495),
    },

    [SPECIES_HIPPOWDON] =
    {
        .baseHP        = 108,
        .baseAttack    = 112,
        .baseDefense   = 118,
        .baseSpeed     = 47,
        .baseSpAttack  = 68,
        .baseSpDefense = 72,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_HIPPOWDON,
        DEX_TEXT(Hippowdon, "Heavyweight"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(20, 3000),
    },

    [SPECIES_SKORUPI] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .type1 = TYPE_POISON,
        .type2 = TYPE_BUG,
        .catchRate = 120,
        .expYield = 66,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SKORUPI,
        DEX_TEXT(Skorupi, "Scorpion"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(8, 120),
    },

    [SPECIES_DRAPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .type1 = TYPE_POISON,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DRAPION,
        DEX_TEXT(Drapion, "Ogre Scorp"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 615),
    },

    [SPECIES_CROAGUNK] =
    {
        .baseHP        = 48,
        .baseAttack    = 61,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 61,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 140,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CROAGUNK,
        DEX_TEXT(Croagunk, "Toxic Mouth"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(7, 230),
    },

    [SPECIES_TOXICROAK] =
    {
        .baseHP        = 83,
        .baseAttack    = 106,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 86,
        .baseSpDefense = 65,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TOXICROAK,
        DEX_TEXT(Toxicroak, "Toxic Mouth"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 444),
    },

    [SPECIES_CARNIVINE] =
    {
        .baseHP        = 74,
        .baseAttack    = 100,
        .baseDefense   = 72,
        .baseSpeed     = 46,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 200,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_CARNIVINE,
        DEX_TEXT(Carnivine, "Bug Catcher"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(14, 270),
    },

    [SPECIES_FINNEON] =
    {
        .baseHP        = 49,
        .baseAttack    = 49,
        .baseDefense   = 56,
        .baseSpeed     = 66,
        .baseSpAttack  = 49,
        .baseSpDefense = 61,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FINNEON,
        DEX_TEXT(Finneon, "Wing Fish"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 70),
    },

    [SPECIES_LUMINEON] =
    {
        .baseHP        = 69,
        .baseAttack    = 69,
        .baseDefense   = 76,
        .baseSpeed     = 91,
        .baseSpAttack  = 69,
        .baseSpDefense = 86,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 161,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LUMINEON,
        DEX_TEXT(Lumineon, "Neon"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 240),
    },

    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 25,
        .expYield = 69,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MANTYKE,
        DEX_TEXT(Mantyke, "Kite"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 650),
    },

    [SPECIES_SNOVER] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_ICE,
        .catchRate = 120,
        .expYield = 67,
        .evYield_Attack    = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_SNOVER,
        DEX_TEXT(Snover, "Frost Tree"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 505),
    },

#define ABOMASNOW_MISC_STATS                \
        .type1 = TYPE_GRASS,                \
        .type2 = TYPE_ICE,                  \
        .catchRate = 60,                    \
        .evYield_Attack    = 1,             \
        .evYield_SpAttack  = 1,             \
        .itemRare = ITEM_NEVER_MELT_ICE,    \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_GRASS,       \
        .bodyColor = BODY_COLOR_WHITE,      \
        .noFlip = FALSE,                    \
        .natDexNum = NATIONAL_DEX_ABOMASNOW,\
        DEX_TEXT(Abomasnow, "Frost Tree")

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 92,
        .baseSpDefense = 85,
        .expYield = 173,
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF},
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(22, 1355),
        ABOMASNOW_MISC_STATS,
    },
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .expYield = 208,
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(27, 1850),
        ABOMASNOW_MISC_STATS,
    },

    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .type1 = TYPE_DARK,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_WEAVILE,
        DEX_TEXT(Weavile, "Sharp Claw"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(11, 340),
    },

    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAGNEZONE,
        DEX_TEXT(Magnezone, "Magnet Area"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(12, 1800),
    },

    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 180,
        .evYield_HP        = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LICKILICKY,
        DEX_TEXT(Lickilicky, "Licking"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(17, 1400),
    },

    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ROCK,
        .catchRate = 30,
        .expYield = 241,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_SOLID_ROCK, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_RHYPERIOR,
        DEX_TEXT(Rhyperior, "Drill"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(24, 2828),
    },

    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 30,
        .expYield = 187,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_TANGROWTH,
        DEX_TEXT(Tangrowth, "Vine"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(20, 1286),
    },

    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 30,
        .expYield = 243,
        .evYield_Attack    = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_ELECTIVIRE,
        DEX_TEXT(Electivire, "Thunderbolt"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(18, 1386),
    },

    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 30,
        .expYield = 243,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_MAGMORTAR,
        DEX_TEXT(Magmortar, "Blast"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(16, 680),
    },

    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        .type1 = TOGEPI_FAMILY_TYPE,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 245,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .natDexNum = NATIONAL_DEX_TOGEKISS,
        DEX_TEXT(Togekiss, "Jubilee"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(15, 380),
    },

    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 76,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 180,
        .evYield_Attack    = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_YANMEGA,
        DEX_TEXT(Yanmega, "Ogre Darner"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(19, 515),
    },

    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_LEAFEON,
        DEX_TEXT(Leafeon, "Verdant"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(10, 255),
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GLACEON,
        DEX_TEXT(Glaceon, "Fresh Snow"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(8, 259),
    },

    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 30,
        .expYield = 179,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_POISON_HEAL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_GLISCOR,
        DEX_TEXT(Gliscor, "Fang Scorp"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(20, 425),
    },

    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GROUND,
        .catchRate = 50,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_MAMOSWINE,
        DEX_TEXT(Mamoswine, "Twin Tusk"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(25, 2910),
    },

    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PORYGON_Z,
        DEX_TEXT(PorygonZ, "Virtual"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(9, 340),
    },

#define GALLADE_MISC_STATS                      \
        .type1 = TYPE_PSYCHIC,                  \
        .type2 = TYPE_FIGHTING,                 \
        .catchRate = 45,                        \
        .evYield_Attack    = 3,                 \
        .genderRatio = MON_MALE,                \
        .eggCycles = 20,                        \
        .friendship = 35,                       \
        .growthRate = GROWTH_SLOW,              \
        .eggGroup1 = RALTS_FAMILY_EGG_GROUP_1,  \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,       \
        .bodyColor = BODY_COLOR_WHITE,          \
        .noFlip = FALSE,                        \
        .natDexNum = NATIONAL_DEX_GALLADE,      \
        DEX_TEXT(Gallade, "Blade")

    [SPECIES_GALLADE] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .expYield = 233,
        .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED},
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(16, 520),
        GALLADE_MISC_STATS,
    },
    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .expYield = 278,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS},
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(16, 564),
        GALLADE_MISC_STATS,
    },

    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_PROBOPASS,
        DEX_TEXT(Probopass, "Compass"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(14, 3400),
    },

    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_DUSKNOIR,
        DEX_TEXT(Dusknoir, "Gripper"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(22, 1066),
    },

    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .type1 = TYPE_ICE,
        .type2 = TYPE_GHOST,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .natDexNum = NATIONAL_DEX_FROSLASS,
        DEX_TEXT(Froslass, "Snow Land"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(13, 266),
    },

#define ROTOM_MISC_STATS              \
        .type1 = TYPE_ELECTRIC,                       \
        .catchRate = 45,                              \
        .evYield_Speed     = 1,                       \
        .evYield_SpAttack  = 1,                       \
        .genderRatio = MON_GENDERLESS,                \
        .eggCycles = 20,                              \
        .friendship = 70,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,             \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,             \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_RED,                  \
        .natDexNum = NATIONAL_DEX_ROTOM,\
        DEX_SCALE(356, 17, 256, 0),\
        HEIGHT_WEIGHT(3, 3)

    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        .type2 = TYPE_GHOST,
        .expYield = 154,
        .noFlip = FALSE,
        ROTOM_MISC_STATS,
    },

#define ROTOM_APPLIANCE_STATS   \
        .baseHP        = 50,    \
        .baseAttack    = 65,    \
        .baseDefense   = 107,   \
        .baseSpeed     = 86,    \
        .baseSpAttack  = 105,   \
        .baseSpDefense = 107,   \
        .expYield = 182

    [SPECIES_ROTOM_HEAT] =
    {
        ROTOM_APPLIANCE_STATS,
        .type2 = TYPE_FIRE,
        .noFlip = FALSE,
        ROTOM_MISC_STATS,
    },
    [SPECIES_ROTOM_WASH] =
    {
        ROTOM_APPLIANCE_STATS,
        .type2 = TYPE_WATER,
        .noFlip = TRUE,
        ROTOM_MISC_STATS,
    },
    [SPECIES_ROTOM_FROST] =
    {
        ROTOM_APPLIANCE_STATS,
        .type2 = TYPE_ICE,
        .noFlip = FALSE,
        ROTOM_MISC_STATS,
    },
    [SPECIES_ROTOM_FAN] =
    {
        ROTOM_APPLIANCE_STATS,
        .type2 = TYPE_FLYING,
        .noFlip = FALSE,
        ROTOM_MISC_STATS,
    },
    [SPECIES_ROTOM_MOW] =
    {
        ROTOM_APPLIANCE_STATS,
        .type2 = TYPE_GRASS,
        .noFlip = FALSE,
        ROTOM_MISC_STATS,
    },

    [SPECIES_UXIE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_UXIE,
        DEX_TEXT(Uxie, "Knowledge"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 3),
    },

    [SPECIES_MESPRIT] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_MESPRIT,
        DEX_TEXT(Mesprit, "Emotion"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 3),
    },

    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 125,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_AZELF,
        DEX_TEXT(Azelf, "Willpower"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 3),
    },

#define DIALGA_MISC_STATS                                                   \
        .type1 = TYPE_STEEL,                                                \
        .type2 = TYPE_DRAGON,                                               \
        .catchRate = 3,                                                     \
        .expYield = 306,                                                    \
        .evYield_SpAttack  = 3,                                             \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 120,                                                   \
        .friendship = 0,                                                    \
        .growthRate = GROWTH_SLOW,                                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                                \
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},   \
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
        .flags = SPECIES_FLAG_LEGENDARY,                                    \
        .natDexNum = NATIONAL_DEX_DIALGA

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        DEX_TEXT(Dialga, "Temporal"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(54, 6830),
        DIALGA_MISC_STATS,
    },

    [SPECIES_DIALGA_ORIGIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        DEX_TEXT(Dummy, "Temporal"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(70, 8500),
        DIALGA_MISC_STATS,
    },

#define PALKIA_MISC_STATS                                                   \
        .type1 = TYPE_WATER,                                                \
        .type2 = TYPE_DRAGON,                                               \
        .catchRate = 3,                                                     \
        .expYield = 306,                                                    \
        .evYield_SpAttack  = 3,                                             \
        .genderRatio = MON_GENDERLESS,                                      \
        .eggCycles = 120,                                                   \
        .friendship = 0,                                                    \
        .growthRate = GROWTH_SLOW,                                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                                \
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},   \
        .bodyColor = BODY_COLOR_PURPLE,                                     \
        .noFlip = FALSE,                                                    \
        .flags = SPECIES_FLAG_LEGENDARY,                                    \
        .natDexNum = NATIONAL_DEX_PALKIA

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        DEX_TEXT(Palkia, "Spatial"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(42, 3360),
        PALKIA_MISC_STATS,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        DEX_TEXT(Dummy, "Spatial"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(63, 6600),
        PALKIA_MISC_STATS,
    },

    [SPECIES_HEATRAN] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 106,
        .baseSpeed     = 77,
        .baseSpAttack  = 130,
        .baseSpDefense = 106,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_HEATRAN,
        DEX_TEXT(Heatran, "Lava Dome"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(17, 4300),
    },

    [SPECIES_REGIGIGAS] =
    {
        .baseHP        = 110,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 110,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SLOW_START, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_REGIGIGAS,
        DEX_TEXT(Regigigas, "Colossal"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(37, 4200),
    },

#define GIRATINA_MISC_STATS                 \
        .type1 = TYPE_GHOST,                \
        .type2 = TYPE_DRAGON,               \
        .catchRate = 3,                     \
        .expYield = 306,                    \
        .evYield_HP        = 3,             \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 0,                    \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_BLACK,      \
        .noFlip = FALSE,                    \
        .flags = SPECIES_FLAG_LEGENDARY,    \
        .natDexNum = NATIONAL_DEX_GIRATINA

    [SPECIES_GIRATINA_ALTERED] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},
        DEX_TEXT(Giratina, "Renegade"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(45, 7500),
        GIRATINA_MISC_STATS,
    },
    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_LEVITATE},
        DEX_TEXT(Dummy, "Renegade"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(69, 6500),
        GIRATINA_MISC_STATS,
    },

    [SPECIES_CRESSELIA] =
    {
        .baseHP        = 120,
        .baseAttack    = 70,
        .baseDefense   = 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
        .natDexNum = NATIONAL_DEX_CRESSELIA,
        DEX_TEXT(Cresselia, "Lunar"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(15, 856),
    },

    [SPECIES_PHIONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 30,
        .expYield = 216,
        .evYield_HP        = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_PHIONE,
        DEX_TEXT(Phione, "Sea Drifter"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 31),
    },

    [SPECIES_MANAPHY] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_MANAPHY,
        DEX_TEXT(Manaphy, "Seafaring"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(3, 14),
    },

    [SPECIES_DARKRAI] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 125,
        .baseSpAttack  = 135,
        .baseSpDefense = 90,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BAD_DREAMS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
        .natDexNum = NATIONAL_DEX_DARKRAI,
        DEX_TEXT(Darkrai, "Pitch-Black"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(15, 505),
    },

#define SHAYMIN_MISC_STATS                  \
        .type1 = TYPE_GRASS,                \
        .catchRate = 45,                    \
        .expYield = 270,                    \
        .evYield_HP        = 3,             \
        .itemCommon = ITEM_LUM_BERRY,       \
        .itemRare = ITEM_LUM_BERRY,         \
        .genderRatio = MON_GENDERLESS,      \
        .eggCycles = 120,                   \
        .friendship = 100,                  \
        .growthRate = GROWTH_MEDIUM_SLOW,   \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_GREEN,      \
        .flags = SPECIES_FLAG_MYTHICAL,     \
        .natDexNum = NATIONAL_DEX_SHAYMIN

    [SPECIES_SHAYMIN_LAND] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type2 = TYPE_GRASS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .noFlip = FALSE,
        DEX_TEXT(Shaymin, "Gratitude"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(2, 21),
        SHAYMIN_MISC_STATS,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .type2 = TYPE_FLYING,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .noFlip = TRUE,
        DEX_TEXT(Dummy, "Gratitude"),
        DEX_SCALE(356, 17, 256, 0),
        HEIGHT_WEIGHT(4, 52),
        SHAYMIN_MISC_STATS,
    },

#define ARCEUS_BASE_STATS(type)                         \
    {                                                   \
        .baseHP        = 120,                           \
        .baseAttack    = 120,                           \
        .baseDefense   = 120,                           \
        .baseSpeed     = 120,                           \
        .baseSpAttack  = 120,                           \
        .baseSpDefense = 120,                           \
        .type1 = type,                                  \
        .type2 = type,                                  \
        .catchRate = 3,                                 \
        .expYield = 324,                                \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_MULTITYPE, ABILITY_NONE}, \
        .bodyColor = BODY_COLOR_WHITE,                  \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                 \
        .natDexNum = NATIONAL_DEX_ARCEUS,               \
        DEX_TEXT(Arceus, "Alpha"),                      \
        DEX_SCALE(356, 17, 256, 0),                     \
        HEIGHT_WEIGHT(32, 3200),                        \
    }
    [SPECIES_ARCEUS_NORMAL]   = ARCEUS_BASE_STATS(TYPE_NORMAL),
    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_BASE_STATS(TYPE_FIGHTING),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_BASE_STATS(TYPE_FLYING),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_BASE_STATS(TYPE_POISON),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_BASE_STATS(TYPE_GROUND),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_BASE_STATS(TYPE_ROCK),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_BASE_STATS(TYPE_BUG),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_BASE_STATS(TYPE_GHOST),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_BASE_STATS(TYPE_STEEL),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_BASE_STATS(TYPE_FIRE),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_BASE_STATS(TYPE_WATER),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_BASE_STATS(TYPE_GRASS),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_BASE_STATS(TYPE_ELECTRIC),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_BASE_STATS(TYPE_PSYCHIC),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_BASE_STATS(TYPE_ICE),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_BASE_STATS(TYPE_DRAGON),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_BASE_STATS(TYPE_DARK),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_BASE_STATS(TYPE_FAIRY),
#endif

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_VICTINI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FIRE,
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_VICTORY_STAR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_SNIVY] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 63,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SERVINE] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SERPERIOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 113,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 238,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TEPIG] =
    {
        .baseHP        = 65,
        .baseAttack    = 63,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PIGNITE] =
    {
        .baseHP        = 90,
        .baseAttack    = 93,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 146,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_EMBOAR] =
    {
        .baseHP        = 110,
        .baseAttack    = 123,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 238,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_OSHAWOTT] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DEWOTT] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 60,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 145,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

#define SAMUROTT_MISC_STATS(typeB,flag)                                     \
        .type1 = TYPE_WATER,                                                \
        .type2 = typeB,                                                     \
        .catchRate = 45,                                                    \
        .expYield = 238,                                                    \
        .evYield_SpAttack  = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroup1 = EGG_GROUP_FIELD,                                       \
        .eggGroup2 = EGG_GROUP_FIELD,                                       \
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},  \
        .bodyColor = BODY_COLOR_BLUE,                                       \
        .noFlip = FALSE,                                                    \
	    .flags = flag

    [SPECIES_SAMUROTT] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 108,
        .baseSpDefense = 70,
        SAMUROTT_MISC_STATS(TYPE_WATER, 0),
    },
    [SPECIES_SAMUROTT_HISUIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 108,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        SAMUROTT_MISC_STATS(TYPE_DARK, SPECIES_FLAG_HISUIAN_FORM),
    },

    [SPECIES_PATRAT] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 39,
        .baseSpeed     = 42,
        .baseSpAttack  = 35,
        .baseSpDefense = 39,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WATCHOG] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 69,
        .baseSpeed     = 77,
        .baseSpAttack  = 60,
        .baseSpDefense = 69,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_KEEN_EYE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LILLIPUP] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 55,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_PICKUP, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HERDIER] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 120,
        .expYield = 130,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_STOUTLAND] =
    {
        .baseHP        = 85,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 110,
    #else
        .baseAttack    = 100,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 225,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PURRLOIN] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 37,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 37,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_LIEPARD] =
    {
        .baseHP        = 64,
        .baseAttack    = 88,
        .baseDefense   = 50,
        .baseSpeed     = 106,
        .baseSpAttack  = 88,
        .baseSpDefense = 50,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 90,
        .expYield = 156,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_PANSAGE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_OVERGROW},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SIMISAGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_OVERGROW},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PANSEAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_BLAZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_SIMISEAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_BLAZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_PANPOUR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_TORRENT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SIMIPOUR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_NONE, ABILITY_TORRENT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MUNNA] =
    {
        .baseHP        = 76,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 24,
        .baseSpAttack  = 67,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MUSHARNA] =
    {
        .baseHP        = 116,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 29,
        .baseSpAttack  = 107,
        .baseSpDefense = 95,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 75,
        .expYield = 170,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_PIDOVE] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 43,
        .baseSpAttack  = 36,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TRANQUILL] =
    {
        .baseHP        = 62,
        .baseAttack    = 77,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 42,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 125,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_UNFEZANT] =
    {
        .baseHP        = 80,
        .baseDefense   = 80,
        .baseSpeed     = 93,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 115,
    #else
        .baseAttack    = 105,
    #endif
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BLITZLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 32,
        .baseSpeed     = 76,
        .baseSpAttack  = 50,
        .baseSpDefense = 32,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ZEBSTRIKA] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 63,
        .baseSpeed     = 116,
        .baseSpAttack  = 80,
        .baseSpDefense = 63,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ROGGENROLA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BOLDORE] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GIGALITH] =
    {
        .baseHP        = 85,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 80,
    #else
        .baseSpDefense = 70,
    #endif
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 232,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_SAND_STREAM, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WOOBAT] =
    {
        .baseAttack    = 45,
        .baseDefense   = 43,
        .baseSpeed     = 72,
        .baseSpAttack  = 55,
        .baseSpDefense = 43,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 65,
    #else
        .baseHP        = 55,
    #endif
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 65,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWOOBAT] =
    {
        .baseHP        = 67,
        .baseAttack    = 57,
        .baseDefense   = 55,
        .baseSpeed     = 114,
        .baseSpAttack  = 77,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 149,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRILBUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 68,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_EXCADRILL] =
    {
        .baseHP        = 110,
        .baseAttack    = 135,
        .baseDefense   = 60,
        .baseSpeed     = 88,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 178,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

#define AUDINO_MISC_STATS(typeB,exp,ability2,ability3,color)\
        .type1 = TYPE_NORMAL,                               \
        .type2 = typeB,                                     \
        .catchRate = 255,                                   \
        .expYield = exp,                                    \
        .evYield_HP        = 2,                             \
        .itemCommon = ITEM_ORAN_BERRY,                      \
        .itemRare = ITEM_SITRUS_BERRY,                      \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_FAST,                          \
        .eggGroup1 = EGG_GROUP_FAIRY,                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                       \
        .abilities = {ABILITY_HEALER, ability2, ability3},  \
        .bodyColor = color,                                 \
        .noFlip = FALSE

    [SPECIES_AUDINO] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 86,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 86,
        AUDINO_MISC_STATS(TYPE_NORMAL, 390, ABILITY_REGENERATOR, ABILITY_KLUTZ, BODY_COLOR_PINK),
    },
    [SPECIES_AUDINO_MEGA] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 126,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 126,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        AUDINO_MISC_STATS(TYPE_FAIRY, 425, ABILITY_HEALER, ABILITY_HEALER, BODY_COLOR_WHITE),
    },

    [SPECIES_TIMBURR] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GURDURR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CONKELDURR] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 95,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TYMPOLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 64,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PALPITOAD] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 69,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 134,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEISMITOAD] =
    {
        .baseHP        = 105,
        .baseDefense   = 75,
        .baseSpeed     = 74,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 95,
    #else
        .baseAttack    = 85,
    #endif
        .type1 = TYPE_WATER,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 229,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_POISON_TOUCH, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_THROH] =
    {
        .baseHP        = 120,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 85,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 163,
        .evYield_HP        = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_GUTS, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SAWK] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 75,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_STURDY, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_SEWADDLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 53,
        .baseDefense   = 70,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 62,
        .evYield_Defense   = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SWADLOON] =
    {
        .baseHP        = 55,
        .baseAttack    = 63,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 133,
        .evYield_Defense   = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LEAVANNY] =
    {
        .baseHP        = 75,
        .baseAttack    = 103,
        .baseDefense   = 80,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
    #if P_UPDATED_STATS >= GEN_6
        .baseSpDefense = 80,
    #else
        .baseSpDefense = 70,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 225,
        .evYield_Attack    = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VENIPEDE] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 39,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
    #else
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
    #endif
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 99,
        .baseSpeed     = 47,
        .baseSpAttack  = 40,
        .baseSpDefense = 79,
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 120,
        .expYield = 126,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
    #else
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
    #endif
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SCOLIPEDE] =
    {
        .baseHP        = 60,
        .baseDefense   = 89,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
    #if P_UPDATED_STATS >= GEN_6
        .baseAttack    = 100,
    #else
        .baseAttack    = 90,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 218,
        .evYield_Speed     = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
    #else
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
    #endif
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_COTTONEE] =
    {
        .baseHP        = 40,
        .baseAttack    = 27,
        .baseDefense   = 60,
        .baseSpeed     = 66,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        .type1 = TYPE_GRASS,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_GRASS,
    #endif
        .catchRate = 190,
        .expYield = 56,
        .evYield_Speed     = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WHIMSICOTT] =
    {
        .baseHP        = 60,
        .baseAttack    = 67,
        .baseDefense   = 85,
        .baseSpeed     = 116,
        .baseSpAttack  = 77,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
    #if P_UPDATED_TYPES >= GEN_6
        .type2 = TYPE_FAIRY,
    #else
        .type2 = TYPE_GRASS,
    #endif
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PETILIL] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LILLIGANT] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 168,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },
    [SPECIES_LILLIGANT_HISUIAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 50,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack  = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_HUSTLE, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

#define BASCULIN_BASE_STATS(item,ability1)                                  \
    {                                                                       \
        .baseHP        = 70,                                                \
        .baseAttack    = 92,                                                \
        .baseDefense   = 65,                                                \
        .baseSpeed     = 98,                                                \
        .baseSpAttack  = 80,                                                \
        .baseSpDefense = 55,                                                \
        .type1 = TYPE_WATER,                                                \
        .type2 = TYPE_WATER,                                                \
        .catchRate = 25,                                                    \
        .expYield = 161,                                                    \
        .evYield_Speed     = 2,                                             \
        .itemRare = item,                                                   \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 40,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_WATER_2,                                     \
        .eggGroup2 = EGG_GROUP_WATER_2,                                     \
        .abilities = {ability1, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},\
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .noFlip = FALSE,                                                    \
    }
    [SPECIES_BASCULIN_RED_STRIPED]   = BASCULIN_BASE_STATS(ITEM_DEEP_SEA_TOOTH, ABILITY_RECKLESS),
    [SPECIES_BASCULIN_BLUE_STRIPED]  = BASCULIN_BASE_STATS(ITEM_DEEP_SEA_SCALE, ABILITY_ROCK_HEAD),
    [SPECIES_BASCULIN_WHITE_STRIPED] = BASCULIN_BASE_STATS(ITEM_DEEP_SEA_SCALE, ABILITY_RATTLED),

    [SPECIES_SANDILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 72,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DARK,
        .catchRate = 180,
        .expYield = 58,
        .evYield_Attack    = 1,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KROKOROK] =
    {
        .baseHP        = 60,
        .baseAttack    = 82,
        .baseDefense   = 45,
        .baseSpeed     = 74,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DARK,
        .catchRate = 90,
        .expYield = 123,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KROOKODILE] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseSpeed     = 92,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
    #if P_UPDATED_STATS >= GEN_6
        .baseDefense   = 80,
    #else
        .baseDefense   = 70,
    #endif
        .type1 = TYPE_GROUND,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DARUMAKA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },
    [SPECIES_DARUMAKA_GALARIAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_DARMANITAN_STANDARD_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DARMANITAN_ZEN_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 30,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 140,
        .baseSpDefense = 105,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },
    [SPECIES_DARMANITAN_GALARIAN_STANDARD_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GORILLA_TACTICS, ABILITY_NONE, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },
    [SPECIES_DARMANITAN_GALARIAN_ZEN_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 160,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .type1 = TYPE_ICE,
        .type2 = TYPE_FIRE,
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GORILLA_TACTICS, ABILITY_NONE, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_MARACTUS] =
    {
        .baseHP        = 75,
        .baseAttack    = 86,
        .baseDefense   = 67,
        .baseSpeed     = 60,
        .baseSpAttack  = 106,
        .baseSpDefense = 67,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 255,
        .expYield = 161,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CHLOROPHYLL, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DWEBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ROCK,
        .catchRate = 190,
        .expYield = 65,
        .evYield_Defense   = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CRUSTLE] =
    {
        .baseHP        = 70,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
    #if P_UPDATED_STATS >= GEN_7
        .baseAttack    = 105,
    #else
        .baseAttack    = 95,
    #endif
        .type1 = TYPE_BUG,
        .type2 = TYPE_ROCK,
        .catchRate = 75,
        .expYield = 170,
        .evYield_Defense   = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SCRAGGY] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 48,
        .baseSpAttack  = 35,
        .baseSpDefense = 70,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SCRAFTY] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 115,
        .baseSpeed     = 58,
        .baseSpAttack  = 45,
        .baseSpDefense = 115,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FIGHTING,
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SIGILYPH] =
    {
        .baseHP        = 72,
        .baseAttack    = 58,
        .baseDefense   = 80,
        .baseSpeed     = 97,
        .baseSpAttack  = 103,
        .baseSpDefense = 80,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_WONDER_SKIN, ABILITY_MAGIC_GUARD, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_YAMASK] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MUMMY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },
    [SPECIES_YAMASK_GALARIAN] =
    {
        .baseHP        = 38,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WANDERING_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_COFAGRIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 50,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MUMMY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TIRTOUGA] =
    {
        .baseHP        = 54,
        .baseAttack    = 78,
        .baseDefense   = 103,
        .baseSpeed     = 22,
        .baseSpAttack  = 53,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CARRACOSTA] =
    {
        .baseHP        = 74,
        .baseAttack    = 108,
        .baseDefense   = 133,
        .baseSpeed     = 32,
        .baseSpAttack  = 83,
        .baseSpDefense = 65,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCHEN] =
    {
        .baseHP        = 55,
        .baseAttack    = 112,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 74,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_DEFEATIST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ARCHEOPS] =
    {
        .baseHP        = 75,
        .baseAttack    = 140,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 112,
        .baseSpDefense = 65,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_DEFEATIST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TRUBBISH] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 62,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GARBODOR] =
    {
        .baseHP        = 80,
        .baseAttack    = 95,
        .baseDefense   = 82,
        .baseSpeed     = 75,
        .baseSpAttack  = 60,
        .baseSpDefense = 82,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_SILK_SCARF,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STENCH, ABILITY_WEAK_ARMOR, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

#define ZORUA_MISC_STATS(typeA,typeB,flag)              \
        .type1 = typeA,                                 \
        .type2 = typeB,                                 \
        .catchRate = 75,                                \
        .expYield = 66,                                 \
        .evYield_SpAttack  = 1,                         \
        .genderRatio = PERCENT_FEMALE(12.5),            \
        .eggCycles = 25,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_MEDIUM_SLOW,               \
        .eggGroup1 = EGG_GROUP_FIELD,                   \
        .eggGroup2 = EGG_GROUP_FIELD,                   \
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_GRAY,                   \
        .noFlip = FALSE,                                \
	    .flags = flag

    [SPECIES_ZORUA] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 40,
        ZORUA_MISC_STATS(TYPE_DARK, TYPE_DARK, 0),
    },
    [SPECIES_ZORUA_HISUIAN] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        ZORUA_MISC_STATS(TYPE_NORMAL, TYPE_GHOST, SPECIES_FLAG_HISUIAN_FORM),
    },

#define ZOROARK_MISC_STATS(typeA,typeB,flag)            \
        .type1 = typeA,                                 \
        .type2 = typeB,                                 \
        .catchRate = 45,                                \
        .expYield = 179,                                \
        .evYield_SpAttack  = 2,                         \
        .genderRatio = PERCENT_FEMALE(12.5),            \
        .eggCycles = 20,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_MEDIUM_SLOW,               \
        .eggGroup1 = EGG_GROUP_FIELD,                   \
        .eggGroup2 = EGG_GROUP_FIELD,                   \
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_GRAY,                   \
        .noFlip = FALSE,                                \
	    .flags = flag

    [SPECIES_ZOROARK] =
    {
        .baseHP        = 60,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        ZOROARK_MISC_STATS(TYPE_DARK, TYPE_DARK, 0),
    },
    [SPECIES_ZOROARK_HISUIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        ZOROARK_MISC_STATS(TYPE_NORMAL, TYPE_GHOST, SPECIES_FLAG_HISUIAN_FORM),
    },

    [SPECIES_MINCCINO] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CINCCINO] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 60,
        .expYield = 165,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_GOTHITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOTHORITA] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 100,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOTHITELLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 50,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SOLOSIS] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 105,
        .baseSpDefense = 50,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_DUOSION] =
    {
        .baseHP        = 65,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 100,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_REUNICLUS] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 50,
        .expYield = 221,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DUCKLETT] =
    {
        .baseHP        = 62,
        .baseAttack    = 44,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 44,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWANNA] =
    {
        .baseHP        = 75,
        .baseAttack    = 87,
        .baseDefense   = 63,
        .baseSpeed     = 98,
        .baseSpAttack  = 87,
        .baseSpDefense = 63,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 166,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLITE] =
    {
        .baseHP        = 36,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLISH] =
    {
        .baseHP        = 51,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 59,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLUXE] =
    {
        .baseHP        = 71,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 79,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .itemCommon = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_WARNING, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define DEERLING_BASE_STATS(color)                                                   \
    {                                                                                \
        .baseHP        = 60,                                                         \
        .baseAttack    = 60,                                                         \
        .baseDefense   = 50,                                                         \
        .baseSpeed     = 75,                                                         \
        .baseSpAttack  = 40,                                                         \
        .baseSpDefense = 50,                                                         \
        .type1 = TYPE_NORMAL,                                                        \
        .type2 = TYPE_GRASS,                                                         \
        .catchRate = 190,                                                            \
        .expYield = 67,                                                              \
        .evYield_Speed     = 1,                                                      \
        .genderRatio = PERCENT_FEMALE(50),                                           \
        .eggCycles = 20,                                                             \
        .friendship = 70,                                                            \
        .growthRate = GROWTH_MEDIUM_FAST,                                            \
        .eggGroup1 = EGG_GROUP_FIELD,                                                \
        .eggGroup2 = EGG_GROUP_FIELD,                                                \
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE},\
        .bodyColor = color,                                                          \
        .noFlip = FALSE,                                                             \
    }
    [SPECIES_DEERLING_SPRING] = DEERLING_BASE_STATS(BODY_COLOR_PINK),
    [SPECIES_DEERLING_SUMMER] = DEERLING_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_DEERLING_AUTUMN] = DEERLING_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_DEERLING_WINTER] = DEERLING_BASE_STATS(BODY_COLOR_BROWN),

#define SAWSBUCK_BASE_STATS                                                          \
    {                                                                                \
        .baseHP        = 80,                                                         \
        .baseAttack    = 100,                                                        \
        .baseDefense   = 70,                                                         \
        .baseSpeed     = 95,                                                         \
        .baseSpAttack  = 60,                                                         \
        .baseSpDefense = 70,                                                         \
        .type1 = TYPE_NORMAL,                                                        \
        .type2 = TYPE_GRASS,                                                         \
        .catchRate = 75,                                                             \
        .expYield = 166,                                                             \
        .evYield_Attack    = 2,                                                      \
        .genderRatio = PERCENT_FEMALE(50),                                           \
        .eggCycles = 20,                                                             \
        .friendship = 70,                                                            \
        .growthRate = GROWTH_MEDIUM_FAST,                                            \
        .eggGroup1 = EGG_GROUP_FIELD,                                                \
        .eggGroup2 = EGG_GROUP_FIELD,                                                \
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE},\
        .bodyColor = BODY_COLOR_BROWN,                                               \
        .noFlip = FALSE,                                                             \
    }
    [SPECIES_SAWSBUCK_SPRING] = SAWSBUCK_BASE_STATS,
    [SPECIES_SAWSBUCK_SUMMER] = SAWSBUCK_BASE_STATS,
    [SPECIES_SAWSBUCK_AUTUMN] = SAWSBUCK_BASE_STATS,
    [SPECIES_SAWSBUCK_WINTER] = SAWSBUCK_BASE_STATS,

    [SPECIES_EMOLGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 103,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FLYING,
        .catchRate = 200,
        .expYield = 150,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_KARRABLAST] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 200,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_SHED_SKIN, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ESCAVALIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 60,
        .baseSpDefense = 105,
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 75,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FOONGUS] =
    {
        .baseHP        = 69,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 190,
        .expYield = 59,
        .evYield_HP        = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_AMOONGUSS] =
    {
        .baseHP        = 114,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 162,
        .evYield_HP        = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_FRILLISH] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_JELLICENT] =
    {
        .baseHP        = 100,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GHOST,
        .catchRate = 60,
        .expYield = 168,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ALOMOMOLA] =
    {
        .baseHP        = 165,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_HEALER, ABILITY_HYDRATION, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_JOLTIK] =
    {
        .baseHP        = 50,
        .baseAttack    = 47,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 57,
        .baseSpDefense = 50,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 64,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GALVANTULA] =
    {
        .baseHP        = 70,
        .baseAttack    = 77,
        .baseDefense   = 60,
        .baseSpeed     = 108,
        .baseSpAttack  = 97,
        .baseSpDefense = 60,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_FERROSEED] =
    {
        .baseHP        = 44,
        .baseAttack    = 50,
        .baseDefense   = 91,
        .baseSpeed     = 10,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_STEEL,
        .catchRate = 255,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_IRON_BARBS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FERROTHORN] =
    {
        .baseHP        = 74,
        .baseAttack    = 94,
        .baseDefense   = 131,
        .baseSpeed     = 20,
        .baseSpAttack  = 54,
        .baseSpDefense = 116,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_STEEL,
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense   = 2,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KLINK] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 60,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 130,
        .expYield = 60,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_KLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 60,
        .expYield = 154,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_KLINKLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 30,
        .expYield = 234,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_TYNAMO] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 190,
        .expYield = 55,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_EELEKTRIK] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 60,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EELEKTROSS] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 30,
        .expYield = 232,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ELGYEM] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 67,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BEHEEYEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 40,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 90,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LITWICK] =
    {
        .baseHP        = 50,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 20,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FIRE,
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
    #else
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
    #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_LAMPENT] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FIRE,
        .catchRate = 90,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
    #else
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_CHANDELURE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 145,
        .baseSpDefense = 90,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 234,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
    #if P_UPDATED_ABILITIES >= GEN_6
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
    #else
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
    #endif
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_AXEW] =
    {
        .baseHP        = 46,
        .baseAttack    = 87,
        .baseDefense   = 60,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 75,
        .expYield = 64,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FRAXURE] =
    {
        .baseHP        = 66,
        .baseAttack    = 117,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 60,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_HAXORUS] =
    {
        .baseHP        = 76,
        .baseAttack    = 147,
        .baseDefense   = 90,
        .baseSpeed     = 97,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CUBCHOO] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BEARTIC] =
    {
        .baseHP        = 95,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
    #if P_UPDATED_STATS >= GEN_7
        .baseAttack    = 130,
    #else
        .baseAttack    = 110,
    #endif
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_CRYOGONAL] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
    #if P_UPDATED_STATS >= GEN_7
        .baseHP        = 80,
        .baseDefense   = 50,
    #else
        .baseHP        = 70,
        .baseDefense   = 30,
    #endif
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 25,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELMET] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 200,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HYDRATION, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ACCELGOR] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_HYDRATION, ABILITY_STICKY_HOLD, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_STUNFISK] =
    {
        .baseHP        = 109,
        .baseAttack    = 66,
        .baseDefense   = 84,
        .baseSpeed     = 32,
        .baseSpAttack  = 81,
        .baseSpDefense = 99,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_STATIC, ABILITY_LIMBER, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },
    [SPECIES_STUNFISK_GALARIAN] =
    {
        .baseHP        = 109,
        .baseAttack    = 81,
        .baseDefense   = 99,
        .baseSpeed     = 32,
        .baseSpAttack  = 66,
        .baseSpDefense = 84,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_STEEL,
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_MIMICRY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_MIENFOO] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MIENSHAO] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRUDDIGON] =
    {
        .baseHP        = 77,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 48,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_SHEER_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_GOLETT] =
    {
        .baseHP        = 59,
        .baseAttack    = 74,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GHOST,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_GOLURK] =
    {
        .baseHP        = 89,
        .baseAttack    = 124,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 169,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_PAWNIARD] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_DARK,
        .type2 = TYPE_STEEL,
        .catchRate = 120,
        .expYield = 68,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BISHARP] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_DARK,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BOUFFALANT] =
    {
        .baseHP        = 95,
        .baseAttack    = 110,
        .baseDefense   = 95,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RECKLESS, ABILITY_SAP_SIPPER, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_RUFFLET] =
    {
        .baseHP        = 70,
        .baseAttack    = 83,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BRAVIARY] =
    {
        .baseHP        = 100,
        .baseAttack    = 123,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 57,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 179,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },
    [SPECIES_BRAVIARY_HISUIAN] =
    {
        .baseHP        = 110,
        .baseAttack    = 83,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 112,
        .baseSpDefense = 70,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_VULLABY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 190,
        .expYield = 74,
        .evYield_Defense   = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MANDIBUZZ] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HEATMOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 97,
        .baseDefense   = 66,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 66,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 90,
        .expYield = 169,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GLUTTONY, ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DURANT] =
    {
        .baseHP        = 58,
        .baseAttack    = 109,
        .baseDefense   = 112,
        .baseSpeed     = 109,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_HUSTLE, ABILITY_TRUANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DEINO] =
    {
        .baseHP        = 52,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 38,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ZWEILOUS] =
    {
        .baseHP        = 72,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HYDREIGON] =
    {
        .baseHP        = 92,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 98,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LARVESTA] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VOLCARONA] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 105,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FIRE,
        .catchRate = 15,
        .expYield = 248,
        .evYield_SpAttack  = 3,
        .itemCommon = ITEM_SILVER_POWDER,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_COBALION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 129,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TERRAKION] =
    {
        .baseHP        = 91,
        .baseAttack    = 129,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 72,
        .baseSpDefense = 90,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_VIRIZION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 72,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 129,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

#define TORNADUS_MISC_STATS(ability1, ability3)             \
        .type1 = TYPE_FLYING,                               \
        .type2 = TYPE_FLYING,                               \
        .catchRate = 3,                                     \
        .expYield = 261,                                    \
        .evYield_Attack    = 3,                             \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 120,                                   \
        .friendship = 90,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                \
        .abilities = {ability1, ABILITY_NONE, ability3},    \
        .bodyColor = BODY_COLOR_GREEN,                      \
        .noFlip = FALSE,                                    \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_TORNADUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        TORNADUS_MISC_STATS(ABILITY_PRANKSTER, ABILITY_DEFIANT),
    },
    [SPECIES_TORNADUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 121,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,
        TORNADUS_MISC_STATS(ABILITY_REGENERATOR, ABILITY_REGENERATOR),
    },

#define THUNDURUS_MISC_STATS(ability1, ability3)            \
        .type1 = TYPE_ELECTRIC,                             \
        .type2 = TYPE_FLYING,                               \
        .catchRate = 3,                                     \
        .expYield = 261,                                    \
        .genderRatio = MON_MALE,                            \
        .eggCycles = 120,                                   \
        .friendship = 90,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                \
        .abilities = {ability1, ABILITY_NONE, ability3},    \
        .bodyColor = BODY_COLOR_BLUE,                       \
        .noFlip = FALSE,                                    \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .evYield_Attack    = 3,
        THUNDURUS_MISC_STATS(ABILITY_PRANKSTER, ABILITY_DEFIANT),
    },
    [SPECIES_THUNDURUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 101,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .evYield_SpAttack  = 3,
        THUNDURUS_MISC_STATS(ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB),
    },

    [SPECIES_RESHIRAM] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FIRE,
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TURBOBLAZE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZEKROM] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TERAVOLT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LANDORUS] =
    {
        .baseHP        = 89,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 101,
        .baseSpAttack  = 115,
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SAND_FORCE, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYUREM] =
    {
        .baseHP        = 125,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 297,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KELDEO_ORDINARY] =
    {
        .baseHP        = 91,
        .baseAttack    = 72,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 129,
        .baseSpDefense = 90,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELOETTA_ARIA] =
    {
        .baseHP        = 100,
        .baseAttack    = 77,
        .baseDefense   = 77,
        .baseSpeed     = 90,
        .baseSpAttack  = 128,
        .baseSpDefense = 128,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .baseHP        = 100,
        .baseAttack    = 128,
        .baseDefense   = 90,
        .baseSpeed     = 128,
        .baseSpAttack  = 77,
        .baseSpDefense = 77,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack  = 1,
        .evYield_Defense = 1,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

#define GENESECT_BASE_STATS                           \
    {                                                 \
        .baseHP        = 71,                          \
        .baseAttack    = 120,                         \
        .baseDefense   = 95,                          \
        .baseSpeed     = 99,                          \
        .baseSpAttack  = 120,                         \
        .baseSpDefense = 95,                          \
        .type1 = TYPE_BUG,                            \
        .type2 = TYPE_STEEL,                          \
        .catchRate = 3,                               \
        .expYield = 270,                              \
        .evYield_Attack    = 1,                       \
        .evYield_Speed     = 1,                       \
        .evYield_SpAttack  = 1,                       \
        .genderRatio = MON_GENDERLESS,                \
        .eggCycles = 120,                             \
        .friendship = 0,                              \
        .growthRate = GROWTH_SLOW,                    \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,          \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,          \
        .abilities = {ABILITY_DOWNLOAD, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_PURPLE,               \
        .noFlip = FALSE,                              \
        .flags = SPECIES_FLAG_MYTHICAL,                       \
    }
    [SPECIES_GENESECT]             = GENESECT_BASE_STATS,
    [SPECIES_GENESECT_DOUSE_DRIVE] = GENESECT_BASE_STATS,
    [SPECIES_GENESECT_SHOCK_DRIVE] = GENESECT_BASE_STATS,
    [SPECIES_GENESECT_BURN_DRIVE]  = GENESECT_BASE_STATS,
    [SPECIES_GENESECT_CHILL_DRIVE] = GENESECT_BASE_STATS,

    [SPECIES_LANDORUS_THERIAN] =
    {
        .baseHP        = 89,
        .baseAttack    = 145,
        .baseDefense   = 90,
        .baseSpeed     = 91,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_FLYING,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYUREM_WHITE] =
    {
        .baseHP        = 125,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 170,
        .baseSpDefense = 100,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 315,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TURBOBLAZE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .baseHP        = 125,
        .baseAttack    = 170,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_ICE,
        .catchRate = 3,
        .expYield = 315,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TERAVOLT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KELDEO_RESOLUTE] =
    {
        .baseHP        = 91,
        .baseAttack    = 72,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 129,
        .baseSpDefense = 90,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_6_POKEMON == TRUE
    [SPECIES_CHESPIN] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 65,
        .baseSpeed     = 38,
        .baseSpAttack  = 48,
        .baseSpDefense = 45,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_QUILLADIN] =
    {
        .baseHP        = 61,
        .baseAttack    = 78,
        .baseDefense   = 95,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHESNAUGHT] =
    {
        .baseHP        = 88,
        .baseAttack    = 107,
        .baseDefense   = 122,
        .baseSpeed     = 64,
        .baseSpAttack  = 74,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FENNEKIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BRAIXEN] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DELPHOX] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_FROAKIE] =
    {
        .baseHP        = 41,
        .baseAttack    = 56,
        .baseDefense   = 40,
        .baseSpeed     = 71,
        .baseSpAttack  = 62,
        .baseSpDefense = 44,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_FROGADIER] =
    {
        .baseHP        = 54,
        .baseAttack    = 63,
        .baseDefense   = 52,
        .baseSpeed     = 97,
        .baseSpAttack  = 83,
        .baseSpDefense = 56,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

#define GRENINJA_BASE_FORM_ATTRIBUTES   \
        .baseHP        = 72,            \
        .baseAttack    = 95,            \
        .baseDefense   = 67,            \
        .baseSpeed     = 122,           \
        .baseSpAttack  = 103,           \
        .baseSpDefense = 71

#define GRENINJA_MISC_STATS(gender,eggGroup,ability1,ability3)  \
        .type1 = TYPE_WATER,                                    \
        .type2 = TYPE_DARK,                                     \
        .catchRate = 45,                                        \
        .expYield = 239,                                        \
        .evYield_Speed     = 3,                                 \
        .genderRatio = gender,                                  \
        .eggCycles = 20,                                        \
        .friendship = 70,                                       \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggGroup1 = eggGroup,                                  \
        .eggGroup2 = eggGroup,                                  \
        .abilities = {ability1, ABILITY_NONE, ability3},        \
        .bodyColor = BODY_COLOR_BLUE,                           \
        .noFlip = TRUE

    [SPECIES_GRENINJA] =
    {
        GRENINJA_BASE_FORM_ATTRIBUTES,
        GRENINJA_MISC_STATS(PERCENT_FEMALE(12.5), EGG_GROUP_WATER_1, ABILITY_TORRENT, ABILITY_PROTEAN),
    },
    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        GRENINJA_BASE_FORM_ATTRIBUTES,
        GRENINJA_MISC_STATS(MON_MALE, EGG_GROUP_UNDISCOVERED, ABILITY_BATTLE_BOND, ABILITY_NONE),
    },
    [SPECIES_GRENINJA_ASH] =
    {
        .baseHP        = 72,
        .baseAttack    = 145,
        .baseDefense   = 67,
        .baseSpeed     = 132,
        .baseSpAttack  = 153,
        .baseSpDefense = 71,
        GRENINJA_MISC_STATS(MON_MALE, EGG_GROUP_UNDISCOVERED, ABILITY_BATTLE_BOND, ABILITY_NONE),
    },

    [SPECIES_BUNNELBY] =
    {
        .baseHP        = 38,
        .baseAttack    = 36,
        .baseDefense   = 38,
        .baseSpeed     = 57,
        .baseSpAttack  = 32,
        .baseSpDefense = 36,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 47,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DIGGERSBY] =
    {
        .baseHP        = 85,
        .baseAttack    = 56,
        .baseDefense   = 77,
        .baseSpeed     = 78,
        .baseSpAttack  = 50,
        .baseSpDefense = 77,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_GROUND,
        .catchRate = 127,
        .expYield = 148,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FLETCHLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 38,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_FLETCHINDER] =
    {
        .baseHP        = 62,
        .baseAttack    = 73,
        .baseDefense   = 55,
        .baseSpeed     = 84,
        .baseSpAttack  = 56,
        .baseSpDefense = 52,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 134,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TALONFLAME] =
    {
        .baseHP        = 78,
        .baseAttack    = 81,
        .baseDefense   = 71,
        .baseSpeed     = 126,
        .baseSpAttack  = 74,
        .baseSpDefense = 69,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

#define SCATTERBUG_BASE_STATS                                                           \
    {                                                                                   \
        .baseHP        = 38,                                                            \
        .baseAttack    = 35,                                                            \
        .baseDefense   = 40,                                                            \
        .baseSpeed     = 35,                                                            \
        .baseSpAttack  = 27,                                                            \
        .baseSpDefense = 25,                                                            \
        .type1 = TYPE_BUG,                                                              \
        .type2 = TYPE_BUG,                                                              \
        .catchRate = 255,                                                               \
        .expYield = 40,                                                                 \
        .evYield_Defense   = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 15,                                                                \
        .friendship = 70,                                                               \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroup1 = EGG_GROUP_BUG,                                                     \
        .eggGroup2 = EGG_GROUP_BUG,                                                     \
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD},\
        .bodyColor = BODY_COLOR_BLACK,                                                  \
        .noFlip = FALSE,                                                                \
    }
    [SPECIES_SCATTERBUG_ICY_SNOW]    = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_POLAR]       = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_TUNDRA]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_CONTINENTAL] = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_GARDEN]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_ELEGANT]     = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_MEADOW]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_MODERN]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_MARINE]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_ARCHIPELAGO] = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_HIGH_PLAINS] = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_SANDSTORM]   = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_RIVER]       = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_MONSOON]     = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_SAVANNA]     = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_SUN]         = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_OCEAN]       = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_JUNGLE]      = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_FANCY]       = SCATTERBUG_BASE_STATS,
    [SPECIES_SCATTERBUG_POKE_BALL]   = SCATTERBUG_BASE_STATS,

#define SPEWPA_BASE_STATS                                                       \
    {                                                                           \
        .baseHP        = 45,                                                    \
        .baseAttack    = 22,                                                    \
        .baseDefense   = 60,                                                    \
        .baseSpeed     = 29,                                                    \
        .baseSpAttack  = 27,                                                    \
        .baseSpDefense = 30,                                                    \
        .type1 = TYPE_BUG,                                                      \
        .type2 = TYPE_BUG,                                                      \
        .catchRate = 120,                                                       \
        .expYield = 75,                                                         \
        .evYield_Defense   = 2,                                                 \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = 70,                                                       \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroup1 = EGG_GROUP_BUG,                                             \
        .eggGroup2 = EGG_GROUP_BUG,                                             \
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_FRIEND_GUARD},   \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .noFlip = FALSE,                                                        \
    }
    [SPECIES_SPEWPA_ICY_SNOW]    = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_POLAR]       = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_TUNDRA]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_CONTINENTAL] = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_GARDEN]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_ELEGANT]     = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_MEADOW]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_MODERN]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_MARINE]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_ARCHIPELAGO] = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_HIGH_PLAINS] = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_SANDSTORM]   = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_RIVER]       = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_MONSOON]     = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_SAVANNA]     = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_SUN]         = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_OCEAN]       = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_JUNGLE]      = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_FANCY]       = SPEWPA_BASE_STATS,
    [SPECIES_SPEWPA_POKE_BALL]   = SPEWPA_BASE_STATS,

#define VIVILLON_BASE_STATS(color)                                                      \
    {                                                                                   \
        .baseHP        = 80,                                                            \
        .baseAttack    = 52,                                                            \
        .baseDefense   = 50,                                                            \
        .baseSpeed     = 89,                                                            \
        .baseSpAttack  = 90,                                                            \
        .baseSpDefense = 50,                                                            \
        .type1 = TYPE_BUG,                                                              \
        .type2 = TYPE_FLYING,                                                           \
        .catchRate = 45,                                                                \
        .expYield = 185,                                                                \
        .evYield_HP        = 1,                                                         \
        .evYield_Speed     = 1,                                                         \
        .evYield_SpAttack  = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 15,                                                                \
        .friendship = 70,                                                               \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroup1 = EGG_GROUP_BUG,                                                     \
        .eggGroup2 = EGG_GROUP_BUG,                                                     \
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD},\
        .bodyColor = color,                                                             \
        .noFlip = FALSE,                                                                \
    }
    [SPECIES_VIVILLON_ICY_SNOW]    = VIVILLON_BASE_STATS(BODY_COLOR_WHITE),
    [SPECIES_VIVILLON_POLAR]       = VIVILLON_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_TUNDRA]      = VIVILLON_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_CONTINENTAL] = VIVILLON_BASE_STATS(BODY_COLOR_YELLOW),
    [SPECIES_VIVILLON_GARDEN]      = VIVILLON_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_ELEGANT]     = VIVILLON_BASE_STATS(BODY_COLOR_PURPLE),
    [SPECIES_VIVILLON_MEADOW]      = VIVILLON_BASE_STATS(BODY_COLOR_PINK),
    [SPECIES_VIVILLON_MODERN]      = VIVILLON_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_VIVILLON_MARINE]      = VIVILLON_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_ARCHIPELAGO] = VIVILLON_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_HIGH_PLAINS] = VIVILLON_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_SANDSTORM]   = VIVILLON_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_RIVER]       = VIVILLON_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_MONSOON]     = VIVILLON_BASE_STATS(BODY_COLOR_GRAY),
    [SPECIES_VIVILLON_SAVANNA]     = VIVILLON_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_SUN]         = VIVILLON_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_VIVILLON_OCEAN]       = VIVILLON_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_VIVILLON_JUNGLE]      = VIVILLON_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_FANCY]       = VIVILLON_BASE_STATS(BODY_COLOR_PINK),
    [SPECIES_VIVILLON_POKE_BALL]   = VIVILLON_BASE_STATS(BODY_COLOR_RED),

    [SPECIES_LITLEO] =
    {
        .baseHP        = 62,
        .baseAttack    = 50,
        .baseDefense   = 58,
        .baseSpeed     = 72,
        .baseSpAttack  = 73,
        .baseSpDefense = 54,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_NORMAL,
        .catchRate = 220,
        .expYield = 74,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PYROAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 68,
        .baseDefense   = 72,
        .baseSpeed     = 106,
        .baseSpAttack  = 109,
        .baseSpDefense = 66,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_NORMAL,
        .catchRate = 65,
        .expYield = 177,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

#define FLABEBE_BASE_STATS                                                  \
    {                                                                       \
        .baseHP        = 44,                                                \
        .baseAttack    = 38,                                                \
        .baseDefense   = 39,                                                \
        .baseSpeed     = 42,                                                \
        .baseSpAttack  = 61,                                                \
        .baseSpDefense = 79,                                                \
        .type1 = TYPE_FAIRY,                                                \
        .type2 = TYPE_FAIRY,                                                \
        .catchRate = 225,                                                   \
        .expYield = 61,                                                     \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FAIRY,                                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }
    [SPECIES_FLABEBE_RED_FLOWER]    = FLABEBE_BASE_STATS,
    [SPECIES_FLABEBE_YELLOW_FLOWER] = FLABEBE_BASE_STATS,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = FLABEBE_BASE_STATS,
    [SPECIES_FLABEBE_BLUE_FLOWER]   = FLABEBE_BASE_STATS,
    [SPECIES_FLABEBE_WHITE_FLOWER]  = FLABEBE_BASE_STATS,

#define FLOETTE_BASE_STATS                                                  \
    {                                                                       \
        .baseHP        = 54,                                                \
        .baseAttack    = 45,                                                \
        .baseDefense   = 47,                                                \
        .baseSpeed     = 52,                                                \
        .baseSpAttack  = 75,                                                \
        .baseSpDefense = 98,                                                \
        .type1 = TYPE_FAIRY,                                                \
        .type2 = TYPE_FAIRY,                                                \
        .catchRate = 120,                                                   \
        .expYield = 130,                                                    \
        .evYield_SpDefense = 2,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FAIRY,                                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }
    [SPECIES_FLOETTE_RED_FLOWER]    = FLOETTE_BASE_STATS,
    [SPECIES_FLOETTE_YELLOW_FLOWER] = FLOETTE_BASE_STATS,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = FLOETTE_BASE_STATS,
    [SPECIES_FLOETTE_BLUE_FLOWER]   = FLOETTE_BASE_STATS,
    [SPECIES_FLOETTE_WHITE_FLOWER]  = FLOETTE_BASE_STATS,
    [SPECIES_FLOETTE_ETERNAL_FLOWER] =
    {
        .baseHP        = 74,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 92,
        .baseSpAttack  = 125,
        .baseSpDefense = 128,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 120,
        .expYield = 243,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define FLORGES_BASE_STATS                                                  \
    {                                                                       \
        .baseHP        = 78,                                                \
        .baseAttack    = 65,                                                \
        .baseDefense   = 68,                                                \
        .baseSpeed     = 75,                                                \
        .baseSpAttack  = 112,                                               \
        .baseSpDefense = 154,                                               \
        .type1 = TYPE_FAIRY,                                                \
        .type2 = TYPE_FAIRY,                                                \
        .catchRate = 45,                                                    \
        .expYield = 248,                                                    \
        .evYield_SpDefense = 3,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FAIRY,                                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }
    [SPECIES_FLORGES_RED_FLOWER]    = FLORGES_BASE_STATS,
    [SPECIES_FLORGES_YELLOW_FLOWER] = FLORGES_BASE_STATS,
    [SPECIES_FLORGES_ORANGE_FLOWER] = FLORGES_BASE_STATS,
    [SPECIES_FLORGES_BLUE_FLOWER]   = FLORGES_BASE_STATS,
    [SPECIES_FLORGES_WHITE_FLOWER]  = FLORGES_BASE_STATS,

    [SPECIES_SKIDDO] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 62,
        .baseSpDefense = 57,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOGOAT] =
    {
        .baseHP        = 123,
        .baseAttack    = 100,
        .baseDefense   = 62,
        .baseSpeed     = 68,
        .baseSpAttack  = 97,
        .baseSpDefense = 81,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 186,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PANCHAM] =
    {
        .baseHP        = 67,
        .baseAttack    = 82,
        .baseDefense   = 62,
        .baseSpeed     = 43,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 220,
        .expYield = 70,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PANGORO] =
    {
        .baseHP        = 95,
        .baseAttack    = 124,
        .baseDefense   = 78,
        .baseSpeed     = 58,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_DARK,
        .catchRate = 65,
        .expYield = 173,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define FURFROU_BASE_STATS(flip)                      \
    {                                                 \
        .baseHP        = 75,                          \
        .baseAttack    = 80,                          \
        .baseDefense   = 60,                          \
        .baseSpeed     = 102,                         \
        .baseSpAttack  = 65,                          \
        .baseSpDefense = 90,                          \
        .type1 = TYPE_NORMAL,                         \
        .type2 = TYPE_NORMAL,                         \
        .catchRate = 160,                             \
        .expYield = 165,                              \
        .evYield_Speed     = 1,                       \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 20,                              \
        .friendship = 70,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroup1 = EGG_GROUP_FIELD,                 \
        .eggGroup2 = EGG_GROUP_FIELD,                 \
        .abilities = {ABILITY_FUR_COAT, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_WHITE,                \
        .noFlip = flip,                               \
    }
    [SPECIES_FURFROU_NATURAL]        = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_HEART_TRIM]     = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_STAR_TRIM]      = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_DIAMOND_TRIM]   = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_DEBUTANTE_TRIM] = FURFROU_BASE_STATS(NO_FLIP),
    [SPECIES_FURFROU_MATRON_TRIM]    = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_DANDY_TRIM]     = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_LA_REINE_TRIM]  = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_KABUKI_TRIM]    = FURFROU_BASE_STATS(FLIP),
    [SPECIES_FURFROU_PHARAOH_TRIM]   = FURFROU_BASE_STATS(FLIP),

    [SPECIES_ESPURR] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 54,
        .baseSpeed     = 68,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 71,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

#define MEOWSTIC_BASE_STATS(gender, ability3, color)                    \
    {                                                                   \
        .baseHP        = 74,                                            \
        .baseAttack    = 48,                                            \
        .baseDefense   = 76,                                            \
        .baseSpeed     = 104,                                           \
        .baseSpAttack  = 83,                                            \
        .baseSpDefense = 81,                                            \
        .type1 = TYPE_PSYCHIC,                                          \
        .type2 = TYPE_PSYCHIC,                                          \
        .catchRate = 75,                                                \
        .expYield = 163,                                                \
        .evYield_Speed     = 2,                                         \
        .genderRatio = gender,                                          \
        .eggCycles = 20,                                                \
        .friendship = 70,                                               \
        .growthRate = GROWTH_MEDIUM_FAST,                               \
        .eggGroup1 = EGG_GROUP_FIELD,                                   \
        .eggGroup2 = EGG_GROUP_FIELD,                                   \
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ability3}, \
        .bodyColor = color,                                             \
        .noFlip = FALSE,                                                \
    }
    [SPECIES_MEOWSTIC_MALE]   = MEOWSTIC_BASE_STATS(MON_MALE, ABILITY_PRANKSTER, BODY_COLOR_BLUE),
    [SPECIES_MEOWSTIC_FEMALE] = MEOWSTIC_BASE_STATS(MON_FEMALE, ABILITY_COMPETITIVE, BODY_COLOR_WHITE),

    [SPECIES_HONEDGE] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 28,
        .baseSpAttack  = 35,
        .baseSpDefense = 37,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_GHOST,
        .catchRate = 180,
        .expYield = 65,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_NO_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DOUBLADE] =
    {
        .baseHP        = 59,
        .baseAttack    = 110,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 49,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 157,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_NO_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },


#define AEGISLASH_MISC_STATS                                \
        .type1 = TYPE_STEEL,                                \
        .type2 = TYPE_GHOST,                                \
        .catchRate = 45,                                    \
        .expYield = 234,                                    \
        .evYield_Defense   = 2,                             \
        .evYield_SpDefense = 1,                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroup1 = EGG_GROUP_MINERAL,                     \
        .eggGroup2 = EGG_GROUP_MINERAL,                     \
        .abilities = {ABILITY_STANCE_CHANGE, ABILITY_NONE}, \
        .bodyColor = BODY_COLOR_BROWN,                      \
        .noFlip = FALSE

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
    #if P_UPDATED_STATS >= GEN_8
        .baseDefense   = 140,
        .baseSpDefense = 140,
    #else
        .baseDefense   = 150,
        .baseSpDefense = 150,
    #endif
        AEGISLASH_MISC_STATS,
    },
    [SPECIES_AEGISLASH_BLADE] =
    {
        .baseHP        = 60,
        .baseDefense   = 50,
        .baseSpeed     = 60,
    #if P_UPDATED_STATS >= GEN_8
        .baseAttack    = 140,
        .baseSpAttack  = 140,
    #else
        .baseAttack    = 150,
        .baseSpAttack  = 150,
    #endif
        .baseSpDefense = 50,
        AEGISLASH_MISC_STATS,
    },

    [SPECIES_SPRITZEE] =
    {
        .baseHP        = 78,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 23,
        .baseSpAttack  = 63,
        .baseSpDefense = 65,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 200,
        .expYield = 68,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_AROMATISSE] =
    {
        .baseHP        = 101,
        .baseAttack    = 72,
        .baseDefense   = 72,
        .baseSpeed     = 29,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 140,
        .expYield = 162,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SWIRLIX] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 66,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 57,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 200,
        .expYield = 68,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SLURPUFF] =
    {
        .baseHP        = 82,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 140,
        .expYield = 168,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_INKAY] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 53,
        .baseSpeed     = 45,
        .baseSpAttack  = 37,
        .baseSpDefense = 46,
        .type1 = TYPE_DARK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 190,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MALAMAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 92,
        .baseDefense   = 88,
        .baseSpeed     = 73,
        .baseSpAttack  = 68,
        .baseSpDefense = 75,
        .type1 = TYPE_DARK,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BINACLE] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 67,
        .baseSpeed     = 50,
        .baseSpAttack  = 39,
        .baseSpDefense = 56,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BARBARACLE] =
    {
        .baseHP        = 72,
        .baseAttack    = 105,
        .baseDefense   = 115,
        .baseSpeed     = 68,
        .baseSpAttack  = 54,
        .baseSpDefense = 86,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_SKRELP] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .type1 = TYPE_POISON,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGALGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 44,
        .baseSpAttack  = 97,
        .baseSpDefense = 123,
        .type1 = TYPE_POISON,
        .type2 = TYPE_DRAGON,
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CLAUNCHER] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 44,
        .baseSpAttack  = 58,
        .baseSpDefense = 63,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_CLAWITZER] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 88,
        .baseSpeed     = 59,
        .baseSpAttack  = 120,
        .baseSpDefense = 89,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 55,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_HELIOPTILE] =
    {
        .baseHP        = 44,
        .baseAttack    = 38,
        .baseDefense   = 33,
        .baseSpeed     = 70,
        .baseSpAttack  = 61,
        .baseSpDefense = 43,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_NORMAL,
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HELIOLISK] =
    {
        .baseHP        = 62,
        .baseAttack    = 55,
        .baseDefense   = 52,
        .baseSpeed     = 109,
        .baseSpAttack  = 109,
        .baseSpDefense = 94,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_NORMAL,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TYRUNT] =
    {
        .baseHP        = 58,
        .baseAttack    = 89,
        .baseDefense   = 77,
        .baseSpeed     = 48,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TYRANTRUM] =
    {
        .baseHP        = 82,
        .baseAttack    = 121,
        .baseDefense   = 119,
        .baseSpeed     = 71,
        .baseSpAttack  = 69,
        .baseSpDefense = 59,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 182,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_AMAURA] =
    {
        .baseHP        = 77,
        .baseAttack    = 59,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 67,
        .baseSpDefense = 63,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 72,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AURORUS] =
    {
        .baseHP        = 123,
        .baseAttack    = 77,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 99,
        .baseSpDefense = 92,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 104,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_MONSTER,
        .abilities = {ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_HAWLUCHA] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 63,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FLYING,
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack    = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup1 = EGG_GROUP_FLYING,
    #else
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
    #endif
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DEDENNE] =
    {
        .baseHP        = 67,
        .baseAttack    = 58,
        .baseDefense   = 57,
        .baseSpeed     = 101,
        .baseSpAttack  = 81,
        .baseSpDefense = 67,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 180,
        .expYield = 151,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_PICKUP, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CARBINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FAIRY,
        .catchRate = 60,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GOOMY] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SLIGGOO] =
    {
        .baseHP        = 68,
        .baseAttack    = 75,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },
    [SPECIES_SLIGGOO_HISUIAN] =
    {
        .baseHP        = 58,
        .baseAttack    = 75,
        .baseDefense   = 83,
        .baseSpeed     = 40,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_OVERCOAT, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },
    [SPECIES_GOODRA_HISUIAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_OVERCOAT, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_KLEFKI] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 87,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FAIRY,
        .catchRate = 75,
        .expYield = 165,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_PHANTUMP] =
    {
        .baseHP        = 43,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 38,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TREVENANT] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 76,
        .baseSpeed     = 56,
        .baseSpAttack  = 65,
        .baseSpDefense = 82,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GRASS,
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

#define PUMKPABOO_MISC_STATS                                           \
        .type1 = TYPE_GHOST,                                           \
        .type2 = TYPE_GRASS,                                           \
        .catchRate = 120,                                              \
        .expYield = 67,                                                \
        .evYield_Defense   = 1,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = 70,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,                              \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                              \
        .abilities = {ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA},\
        .bodyColor = BODY_COLOR_BROWN,                                 \
        .noFlip = FALSE

    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .baseHP        = 49,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMKPABOO_MISC_STATS,
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .baseHP        = 44,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 56,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMKPABOO_MISC_STATS,
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .baseHP        = 54,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 46,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMKPABOO_MISC_STATS,
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 41,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        PUMKPABOO_MISC_STATS,
    },

#define GOURGEIST_MISC_STATS                                           \
        .type1 = TYPE_GHOST,                                           \
        .type2 = TYPE_GRASS,                                           \
        .catchRate = 60,                                               \
        .expYield = 173,                                               \
        .evYield_Defense   = 2,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = 70,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,                              \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                              \
        .abilities = {ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA},\
        .bodyColor = BODY_COLOR_BROWN,                                 \
        .noFlip = FALSE

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 122,
        .baseSpeed     = 84,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_STATS,
    },
    [SPECIES_GOURGEIST_SMALL] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 122,
        .baseSpeed     = 99,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_STATS,
    },
    [SPECIES_GOURGEIST_LARGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 122,
        .baseSpeed     = 69,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_STATS,
    },
    [SPECIES_GOURGEIST_SUPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        GOURGEIST_MISC_STATS,
    },

    [SPECIES_BERGMITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 69,
        .baseDefense   = 85,
        .baseSpeed     = 28,
        .baseSpAttack  = 32,
        .baseSpDefense = 35,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_MINERAL,
    #else
        .eggGroup2 = EGG_GROUP_MONSTER,
    #endif
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AVALUGG] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = 184,
        .baseSpeed     = 28,
        .baseSpAttack  = 44,
        .baseSpDefense = 46,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_MINERAL,
    #else
        .eggGroup2 = EGG_GROUP_MONSTER,
    #endif
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },
    [SPECIES_AVALUGG_HISUIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 127,
        .baseDefense   = 184,
        .baseSpeed     = 38,
        .baseSpAttack  = 34,
        .baseSpDefense = 36,
        .type1 = TYPE_ICE,
        .type2 = TYPE_ROCK,
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_MONSTER,
    #else
        .eggGroup2 = EGG_GROUP_MINERAL,
    #endif
        .abilities = {ABILITY_STRONG_JAW, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_NOIBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_DRAGON,
        .catchRate = 190,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_DRAGON,
    #else
        .eggGroup2 = EGG_GROUP_FLYING,
    #endif
        .abilities = {ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NOIVERN] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 123,
        .baseSpAttack  = 97,
        .baseSpDefense = 80,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 187,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
    #if P_UPDATED_EGG_GROUPS >= GEN_8
        .eggGroup2 = EGG_GROUP_DRAGON,
    #else
        .eggGroup2 = EGG_GROUP_FLYING,
    #endif
        .abilities = {ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

#define XERNEAS_BASE_STATS                              \
    {                                                   \
        .baseHP        = 126,                           \
        .baseAttack    = 131,                           \
        .baseDefense   = 95,                            \
        .baseSpeed     = 99,                            \
        .baseSpAttack  = 131,                           \
        .baseSpDefense = 98,                            \
        .type1 = TYPE_FAIRY,                            \
        .type2 = TYPE_FAIRY,                            \
        .catchRate = 45,                                \
        .expYield = 306,                                \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_FAIRY_AURA, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY,                        \
    }
    [SPECIES_XERNEAS_NEUTRAL] = XERNEAS_BASE_STATS,
    [SPECIES_XERNEAS_ACTIVE]  = XERNEAS_BASE_STATS,

    [SPECIES_YVELTAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_DARK_AURA, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },


#define ZYGARDE_50_BASE_STATS(ability)       \
    {                                        \
        .baseHP        = 108,                \
        .baseAttack    = 100,                \
        .baseDefense   = 121,                \
        .baseSpeed     = 95,                 \
        .baseSpAttack  = 81,                 \
        .baseSpDefense = 95,                 \
        .type1 = TYPE_DRAGON,                \
        .type2 = TYPE_GROUND,                \
        .catchRate = 3,                      \
        .expYield = 270,                     \
        .evYield_HP        = 3,              \
        .genderRatio = MON_GENDERLESS,       \
        .eggCycles = 120,                    \
        .friendship = 0,                     \
        .growthRate = GROWTH_SLOW,           \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED, \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED, \
        .abilities = {ability, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GREEN,       \
        .noFlip = TRUE,                      \
        .flags = SPECIES_FLAG_LEGENDARY,             \
    }

#define ZYGARDE_10_BASE_STATS(ability)       \
    {                                        \
        .baseHP        = 54,                 \
        .baseAttack    = 100,                \
        .baseDefense   = 71,                 \
        .baseSpeed     = 115,                \
        .baseSpAttack  = 61,                 \
        .baseSpDefense = 85,                 \
        .type1 = TYPE_DRAGON,                \
        .type2 = TYPE_GROUND,                \
        .catchRate = 3,                      \
        .expYield = 219,                     \
        .evYield_HP        = 3,              \
        .genderRatio = MON_GENDERLESS,       \
        .eggCycles = 120,                    \
        .friendship = 0,                     \
        .growthRate = GROWTH_SLOW,           \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED, \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED, \
        .abilities = {ability, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLACK,       \
        .noFlip = TRUE,                      \
        .flags = SPECIES_FLAG_LEGENDARY,             \
    }
    [SPECIES_ZYGARDE_50]                 = ZYGARDE_50_BASE_STATS(ABILITY_AURA_BREAK),
    [SPECIES_ZYGARDE_10]                 = ZYGARDE_10_BASE_STATS(ABILITY_AURA_BREAK),
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = ZYGARDE_10_BASE_STATS(ABILITY_POWER_CONSTRUCT),
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = ZYGARDE_50_BASE_STATS(ABILITY_POWER_CONSTRUCT),
    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .baseHP        = 216,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 85,
        .baseSpAttack  = 91,
        .baseSpDefense = 95,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GROUND,
        .catchRate = 3,
        .expYield = 319,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_POWER_CONSTRUCT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_DIANCIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 150,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_DIANCIE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 110,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 315,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL | SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_HOOPA_CONFINED] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_GHOST,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_MAGICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 170,
        .baseSpDefense = 130,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_DARK,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_MAGICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_VOLCANION] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_WATER,
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ROWLET] =
    {
        .baseHP        = 68,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 64,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DARTRIX] =
    {
        .baseHP        = 78,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 52,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

#define DECIDUEYE_MISC_STATS(typeB, flag)                                   \
        .type1 = TYPE_GRASS,                                                \
        .type2 = typeB,                                                     \
        .catchRate = 45,                                                    \
        .expYield = 239,                                                    \
        .evYield_Attack    = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 15,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroup1 = EGG_GROUP_FLYING,                                      \
        .eggGroup2 = EGG_GROUP_FLYING,                                      \
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},  \
        .bodyColor = BODY_COLOR_BROWN,                                      \
        .noFlip = FALSE,                                                    \
	    .flags = flag

    [SPECIES_DECIDUEYE] =
    {
        .baseHP        = 78,
        .baseAttack    = 107,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        DECIDUEYE_MISC_STATS(TYPE_GHOST, 0),
    },
    [SPECIES_DECIDUEYE_HISUIAN] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        DECIDUEYE_MISC_STATS(TYPE_FIGHTING, SPECIES_FLAG_HISUIAN_FORM),
    },

    [SPECIES_LITTEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 64,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TORRACAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_INCINEROAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_DARK,
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_POPPLIO] =
    {
        .baseHP        = 50,
        .baseAttack    = 54,
        .baseDefense   = 54,
        .baseSpeed     = 40,
        .baseSpAttack  = 66,
        .baseSpDefense = 56,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BRIONNE] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 69,
        .baseSpeed     = 50,
        .baseSpAttack  = 91,
        .baseSpDefense = 81,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PRIMARINA] =
    {
        .baseHP        = 80,
        .baseAttack    = 74,
        .baseDefense   = 74,
        .baseSpeed     = 60,
        .baseSpAttack  = 126,
        .baseSpDefense = 116,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PIKIPEK] =
    {
        .baseHP        = 35,
        .baseAttack    = 75,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack    = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TRUMBEAK] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 124,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TOUCANNON] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 218,
        .evYield_Attack    = 3,
        .itemRare = ITEM_RAWST_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_YUNGOOS] =
    {
        .baseHP        = 48,
        .baseAttack    = 70,
        .baseDefense   = 30,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack    = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GUMSHOOS] =
    {
        .baseHP        = 88,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 127,
        .expYield = 146,
        .evYield_Attack    = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRUBBIN] =
    {
        .baseHP        = 47,
        .baseAttack    = 62,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CHARJABUG] =
    {
        .baseHP        = 57,
        .baseAttack    = 82,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 120,
        .expYield = 140,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_BATTERY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VIKAVOLT] =
    {
        .baseHP        = 77,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 43,
        .baseSpAttack  = 145,
        .baseSpDefense = 75,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CRABRAWLER] =
    {
        .baseHP        = 47,
        .baseAttack    = 82,
        .baseDefense   = 57,
        .baseSpeed     = 63,
        .baseSpAttack  = 42,
        .baseSpDefense = 47,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 225,
        .expYield = 68,
        .evYield_Attack    = 1,
        .itemRare = ITEM_ASPEAR_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CRABOMINABLE] =
    {
        .baseHP        = 97,
        .baseAttack    = 132,
        .baseDefense   = 77,
        .baseSpeed     = 43,
        .baseSpAttack  = 62,
        .baseSpDefense = 67,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_ICE,
        .catchRate = 60,
        .expYield = 167,
        .evYield_Attack    = 2,
        .itemRare = ITEM_CHERI_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_3,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define ORICORIO_BASE_STATS(typeA, color)           \
{                                                   \
        .baseHP        = 75,                        \
        .baseAttack    = 70,                        \
        .baseDefense   = 70,                        \
        .baseSpeed     = 93,                        \
        .baseSpAttack  = 98,                        \
        .baseSpDefense = 70,                        \
        .type1 = typeA,                             \
        .type2 = TYPE_FLYING,                       \
        .catchRate = 45,                            \
        .expYield = 167,                            \
        .evYield_SpAttack  = 2,                     \
        .itemRare = ITEM_HONEY,                     \
        .genderRatio = PERCENT_FEMALE(75),          \
        .eggCycles = 20,                            \
        .friendship = 70,                           \
        .growthRate = GROWTH_MEDIUM_FAST,           \
        .eggGroup1 = EGG_GROUP_FLYING,              \
        .eggGroup2 = EGG_GROUP_FLYING,              \
        .abilities = {ABILITY_DANCER, ABILITY_NONE},\
        .bodyColor = color,                         \
        .noFlip = FALSE,                            \
    }
    [SPECIES_ORICORIO_BAILE]   = ORICORIO_BASE_STATS(TYPE_FIRE, BODY_COLOR_RED),
    [SPECIES_ORICORIO_POM_POM] = ORICORIO_BASE_STATS(TYPE_ELECTRIC, BODY_COLOR_YELLOW),
    [SPECIES_ORICORIO_PAU]     = ORICORIO_BASE_STATS(TYPE_PSYCHIC, BODY_COLOR_PINK),
    [SPECIES_ORICORIO_SENSU]   = ORICORIO_BASE_STATS(TYPE_GHOST, BODY_COLOR_PURPLE),

    [SPECIES_CUTIEFLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 84,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FAIRY,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Speed     = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RIBOMBEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 124,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FAIRY,
        .catchRate = 75,
        .expYield = 162,
        .evYield_Speed     = 2,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

#define ROCKRUFF_BASE_STATS(ability1, ability2, hiddenAbility)\
    {                                                         \
        .baseHP        = 45,                                  \
        .baseAttack    = 65,                                  \
        .baseDefense   = 40,                                  \
        .baseSpeed     = 60,                                  \
        .baseSpAttack  = 30,                                  \
        .baseSpDefense = 40,                                  \
        .type1 = TYPE_ROCK,                                   \
        .type2 = TYPE_ROCK,                                   \
        .catchRate = 190,                                     \
        .expYield = 56,                                       \
        .evYield_Attack    = 1,                               \
        .genderRatio = PERCENT_FEMALE(50),                    \
        .eggCycles = 15,                                      \
        .friendship = 70,                                     \
        .growthRate = GROWTH_MEDIUM_FAST,                     \
        .eggGroup1 = EGG_GROUP_FIELD,                         \
        .eggGroup2 = EGG_GROUP_FIELD,                         \
        .abilities = {ability1, ability2, hiddenAbility},     \
        .bodyColor = BODY_COLOR_BROWN,                        \
        .noFlip = FALSE,                                      \
    }
    [SPECIES_ROCKRUFF]           = ROCKRUFF_BASE_STATS(ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_STEADFAST),
    [SPECIES_ROCKRUFF_OWN_TEMPO] = ROCKRUFF_BASE_STATS(ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE),

    [SPECIES_LYCANROC_MIDDAY] =
    {
        .baseHP        = 75,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SAND_RUSH, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },
    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 75,
        .baseSpeed     = 82,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_LYCANROC_DUSK] =
    {
        .baseHP        = 75,
        .baseAttack    = 117,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WISHIWASHI_SOLO] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 40,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SCHOOLING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .baseHP        = 45,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 140,
        .baseSpDefense = 135,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SCHOOLING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MAREANIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 45,
        .baseSpAttack  = 43,
        .baseSpDefense = 52,
        .type1 = TYPE_POISON,
        .type2 = TYPE_WATER,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TOXAPEX] =
    {
        .baseHP        = 50,
        .baseAttack    = 63,
        .baseDefense   = 152,
        .baseSpeed     = 35,
        .baseSpAttack  = 53,
        .baseSpDefense = 142,
        .type1 = TYPE_POISON,
        .type2 = TYPE_WATER,
        .catchRate = 75,
        .expYield = 173,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MUDBRAY] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 190,
        .expYield = 77,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MUDSDALE] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 55,
        .baseSpDefense = 85,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DEWPIDER] =
    {
        .baseHP        = 38,
        .baseAttack    = 40,
        .baseDefense   = 52,
        .baseSpeed     = 27,
        .baseSpAttack  = 40,
        .baseSpDefense = 72,
        .type1 = TYPE_WATER,
        .type2 = TYPE_BUG,
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARAQUANID] =
    {
        .baseHP        = 68,
        .baseAttack    = 70,
        .baseDefense   = 92,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 132,
        .type1 = TYPE_WATER,
        .type2 = TYPE_BUG,
        .catchRate = 100,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FOMANTIS] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 50,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_LURANTIS] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MORELULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FAIRY,
        .catchRate = 190,
        .expYield = 57,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SHIINOTIC] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FAIRY,
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SALANDIT] =
    {
        .baseHP        = 48,
        .baseAttack    = 44,
        .baseDefense   = 40,
        .baseSpeed     = 77,
        .baseSpAttack  = 71,
        .baseSpDefense = 40,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIRE,
        .catchRate = 120,
        .expYield = 64,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SALAZZLE] =
    {
        .baseHP        = 68,
        .baseAttack    = 64,
        .baseDefense   = 60,
        .baseSpeed     = 117,
        .baseSpAttack  = 111,
        .baseSpDefense = 60,
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_STUFFUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FIGHTING,
        .catchRate = 140,
        .expYield = 68,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_CUTE_CHARM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BEWEAR] =
    {
        .baseHP        = 120,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_FIGHTING,
        .catchRate = 70,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BOUNSWEET] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 38,
        .baseSpeed     = 32,
        .baseSpAttack  = 30,
        .baseSpDefense = 38,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 235,
        .expYield = 42,
        .evYield_HP        = 1,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_STEENEE] =
    {
        .baseHP        = 52,
        .baseAttack    = 40,
        .baseDefense   = 48,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 48,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 120,
        .expYield = 102,
        .evYield_Speed     = 2,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_TSAREENA] =
    {
        .baseHP        = 72,
        .baseAttack    = 120,
        .baseDefense   = 98,
        .baseSpeed     = 72,
        .baseSpAttack  = 50,
        .baseSpDefense = 98,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 230,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_QUEENLY_MAJESTY, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_COMFEY] =
    {
        .baseHP        = 51,
        .baseAttack    = 52,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 82,
        .baseSpDefense = 110,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_TRIAGE, ABILITY_NATURAL_CURE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_ORANGURU] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_TELEPATHY, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PASSIMIAN] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RECEIVER, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WIMPOD] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 80,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .type1 = TYPE_BUG,
        .type2 = TYPE_WATER,
        .catchRate = 90,
        .expYield = 46,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_WIMP_OUT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GOLISOPOD] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .type1 = TYPE_BUG,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 186,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_EMERGENCY_EXIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SANDYGAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 15,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GROUND,
        .catchRate = 140,
        .expYield = 64,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PALOSSAND] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 35,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GROUND,
        .catchRate = 60,
        .expYield = 168,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PYUKUMUKU] =
    {
        .baseHP        = 55,
        .baseAttack    = 60,
        .baseDefense   = 130,
        .baseSpeed     = 5,
        .baseSpAttack  = 30,
        .baseSpDefense = 130,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 144,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_INNARDS_OUT, ABILITY_NONE, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TYPE_NULL] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 59,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 3,
        .expYield = 107,
        .evYield_HP        = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

#define SILVALLY_BASE_STATS(type)                       \
    {                                                   \
        .baseHP        = 95,                            \
        .baseAttack    = 95,                            \
        .baseDefense   = 95,                            \
        .baseSpeed     = 95,                            \
        .baseSpAttack  = 95,                            \
        .baseSpDefense = 95,                            \
        .type1 = type,                                  \
        .type2 = type,                                  \
        .catchRate = 3,                                 \
        .expYield = 257,                                \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_RKS_SYSTEM, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GRAY,                   \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY,                        \
    }
    [SPECIES_SILVALLY_NORMAL]   = SILVALLY_BASE_STATS(TYPE_NORMAL),
    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_BASE_STATS(TYPE_FIGHTING),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_BASE_STATS(TYPE_FLYING),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_BASE_STATS(TYPE_POISON),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_BASE_STATS(TYPE_GROUND),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_BASE_STATS(TYPE_ROCK),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_BASE_STATS(TYPE_BUG),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_BASE_STATS(TYPE_GHOST),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_BASE_STATS(TYPE_STEEL),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_BASE_STATS(TYPE_FIRE),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_BASE_STATS(TYPE_WATER),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_BASE_STATS(TYPE_GRASS),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_BASE_STATS(TYPE_ELECTRIC),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_BASE_STATS(TYPE_PSYCHIC),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_BASE_STATS(TYPE_ICE),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_BASE_STATS(TYPE_DRAGON),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_BASE_STATS(TYPE_DARK),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_BASE_STATS(TYPE_FAIRY),

#define MINIOR_METEOR_ATTRIBUTES\
        .baseHP        = 60,    \
        .baseAttack    = 60,    \
        .baseDefense   = 100,   \
        .baseSpeed     = 60,    \
        .baseSpAttack  = 60,    \
        .baseSpDefense = 100
#define MINIOR_CORE_ATTRIBUTES\
        .baseHP        = 60,  \
        .baseAttack    = 100, \
        .baseDefense   = 60,  \
        .baseSpeed     = 120, \
        .baseSpAttack  = 100, \
        .baseSpDefense = 60
#define MINIOR_MISC_STATS(color)                          \
        .type1 = TYPE_ROCK,                               \
        .type2 = TYPE_FLYING,                             \
        .catchRate = 30,                                  \
        .expYield = 154,                                  \
        .evYield_Defense   = 1,                           \
        .evYield_SpDefense = 1,                           \
        .itemRare = ITEM_STAR_PIECE,                      \
        .genderRatio = MON_GENDERLESS,                    \
        .eggCycles = 25,                                  \
        .friendship = 70,                                 \
        .growthRate = GROWTH_MEDIUM_SLOW,                 \
        .eggGroup1 = EGG_GROUP_MINERAL,                   \
        .eggGroup2 = EGG_GROUP_MINERAL,                   \
        .abilities = {ABILITY_SHIELDS_DOWN, ABILITY_NONE},\
        .bodyColor = color,                               \
        .noFlip = TRUE
#define MINIOR_METEOR_BASE_STATS            \
    {                                       \
        MINIOR_METEOR_ATTRIBUTES,           \
        MINIOR_MISC_STATS(BODY_COLOR_BROWN),\
    }
#define MINIOR_CORE_BASE_STATS(color)\
    {                                \
        MINIOR_CORE_ATTRIBUTES,      \
        MINIOR_MISC_STATS(color),    \
    }
    [SPECIES_MINIOR_METEOR_RED]    = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_ORANGE] = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_YELLOW] = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_GREEN]  = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_BLUE]   = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_INDIGO] = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_METEOR_VIOLET] = MINIOR_METEOR_BASE_STATS,
    [SPECIES_MINIOR_CORE_RED]    = MINIOR_CORE_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_MINIOR_CORE_ORANGE] = MINIOR_CORE_BASE_STATS(BODY_COLOR_RED),
    [SPECIES_MINIOR_CORE_YELLOW] = MINIOR_CORE_BASE_STATS(BODY_COLOR_YELLOW),
    [SPECIES_MINIOR_CORE_GREEN]  = MINIOR_CORE_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_MINIOR_CORE_BLUE]   = MINIOR_CORE_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_MINIOR_CORE_INDIGO] = MINIOR_CORE_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_MINIOR_CORE_VIOLET] = MINIOR_CORE_BASE_STATS(BODY_COLOR_PURPLE),

    [SPECIES_KOMALA] =
    {
        .baseHP        = 65,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_COMATOSE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TURTONATOR] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 135,
        .baseSpeed     = 36,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_DRAGON,
        .catchRate = 70,
        .expYield = 170,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TOGEDEMARU] =
    {
        .baseHP        = 65,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 96,
        .baseSpAttack  = 40,
        .baseSpDefense = 73,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_STEEL,
        .catchRate = 180,
        .expYield = 152,
        .evYield_Attack    = 2,
        .itemRare = ITEM_ELECTRIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_IRON_BARBS, ABILITY_LIGHTNING_ROD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

#define MIMIKYU_BASE_STATS                            \
    {                                                 \
        .baseHP        = 55,                          \
        .baseAttack    = 90,                          \
        .baseDefense   = 80,                          \
        .baseSpeed     = 96,                          \
        .baseSpAttack  = 50,                          \
        .baseSpDefense = 105,                         \
        .type1 = TYPE_GHOST,                          \
        .type2 = TYPE_FAIRY,                          \
        .catchRate = 45,                              \
        .expYield = 167,                              \
        .evYield_SpDefense = 2,                       \
        .itemRare = ITEM_CHESTO_BERRY,                \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 20,                              \
        .friendship = 70,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,             \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,             \
        .abilities = {ABILITY_DISGUISE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_YELLOW,               \
        .noFlip = FALSE,                              \
    }
    [SPECIES_MIMIKYU_DISGUISED] = MIMIKYU_BASE_STATS,
    [SPECIES_MIMIKYU_BUSTED]    = MIMIKYU_BASE_STATS,

    [SPECIES_BRUXISH] =
    {
        .baseHP        = 68,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .type1 = TYPE_WATER,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 80,
        .expYield = 166,
        .evYield_Attack    = 2,
        .itemRare = ITEM_RAZOR_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_DAZZLING, ABILITY_STRONG_JAW, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_DRAMPA] =
    {
        .baseHP        = 78,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 135,
        .baseSpDefense = 91,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_DRAGON,
        .catchRate = 70,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_PERSIM_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BERSERK, ABILITY_SAP_SIPPER, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DHELMISE] =
    {
        .baseHP        = 70,
        .baseAttack    = 131,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 86,
        .baseSpDefense = 90,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GRASS,
        .catchRate = 25,
        .expYield = 181,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STEELWORKER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_JANGMO_O] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_HAKAMO_O] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KOMMO_O] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 105,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 270,
        .evYield_Defense   = 3,
        .itemCommon = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_DRAGON,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TAPU_KOKO] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 130,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 257,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_ELECTRIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_LELE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 115,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PSYCHIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_BULU] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 257,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_GRASSY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_FINI] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 130,
        .type1 = TYPE_WATER,
        .type2 = TYPE_FAIRY,
        .catchRate = 3,
        .expYield = 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_MISTY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_COSMOG] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 31,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 31,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 40,
        .evYield_HP        = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_UNAWARE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_COSMOEM] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 131,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 131,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 140,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_STURDY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_SOLGALEO] =
    {
        .baseHP        = 137,
        .baseAttack    = 137,
        .baseDefense   = 107,
        .baseSpeed     = 97,
        .baseSpAttack  = 113,
        .baseSpDefense = 89,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_FULL_METAL_BODY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LUNALA] =
    {
        .baseHP        = 137,
        .baseAttack    = 113,
        .baseDefense   = 89,
        .baseSpeed     = 97,
        .baseSpAttack  = 137,
        .baseSpDefense = 107,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_SHADOW_SHIELD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_NIHILEGO] =
    {
        .baseHP        = 109,
        .baseAttack    = 53,
        .baseDefense   = 47,
        .baseSpeed     = 103,
        .baseSpAttack  = 127,
        .baseSpDefense = 131,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_BUZZWOLE] =
    {
        .baseHP        = 107,
        .baseAttack    = 139,
        .baseDefense   = 139,
        .baseSpeed     = 79,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_PHEROMOSA] =
    {
        .baseHP        = 71,
        .baseAttack    = 137,
        .baseDefense   = 37,
        .baseSpeed     = 151,
        .baseSpAttack  = 137,
        .baseSpDefense = 37,
        .type1 = TYPE_BUG,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 257,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_XURKITREE] =
    {
        .baseHP        = 83,
        .baseAttack    = 89,
        .baseDefense   = 71,
        .baseSpeed     = 83,
        .baseSpAttack  = 173,
        .baseSpDefense = 71,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_CELESTEELA] =
    {
        .baseHP        = 97,
        .baseAttack    = 101,
        .baseDefense   = 103,
        .baseSpeed     = 61,
        .baseSpAttack  = 107,
        .baseSpDefense = 101,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_FLYING,
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_KARTANA] =
    {
        .baseHP        = 59,
        .baseAttack    = 181,
        .baseDefense   = 131,
        .baseSpeed     = 109,
        .baseSpAttack  = 59,
        .baseSpDefense = 31,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_GUZZLORD] =
    {
        .baseHP        = 223,
        .baseAttack    = 101,
        .baseDefense   = 53,
        .baseSpeed     = 43,
        .baseSpAttack  = 97,
        .baseSpDefense = 53,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 257,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_NECROZMA] =
    {
        .baseHP        = 97,
        .baseAttack    = 107,
        .baseDefense   = 101,
        .baseSpeed     = 79,
        .baseSpAttack  = 127,
        .baseSpDefense = 89,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 255,
        .expYield = 270,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .baseHP        = 97,
        .baseAttack    = 157,
        .baseDefense   = 127,
        .baseSpeed     = 77,
        .baseSpAttack  = 113,
        .baseSpDefense = 109,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_STEEL,
        .catchRate = 255,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .baseHP        = 97,
        .baseAttack    = 113,
        .baseDefense   = 109,
        .baseSpeed     = 77,
        .baseSpAttack  = 157,
        .baseSpDefense = 127,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_GHOST,
        .catchRate = 255,
        .expYield = 306,
        .evYield_SpAttack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_NECROZMA_ULTRA] =
    {
        .baseHP        = 97,
        .baseAttack    = 167,
        .baseDefense   = 97,
        .baseSpeed     = 129,
        .baseSpAttack  = 167,
        .baseSpDefense = 97,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_DRAGON,
        .catchRate = 255,
        .expYield = 339,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_NEUROFORCE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

#define MAGEARNA_BASE_STATS(color)                      \
    {                                                   \
        .baseHP        = 80,                            \
        .baseAttack    = 95,                            \
        .baseDefense   = 115,                           \
        .baseSpeed     = 65,                            \
        .baseSpAttack  = 130,                           \
        .baseSpDefense = 115,                           \
        .type1 = TYPE_STEEL,                            \
        .type2 = TYPE_FAIRY,                            \
        .catchRate = 3,                                 \
        .expYield = 270,                                \
        .evYield_SpAttack  = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_SOUL_HEART, ABILITY_NONE},\
        .bodyColor = color,                             \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                         \
    }
    [SPECIES_MAGEARNA]                = MAGEARNA_BASE_STATS(BODY_COLOR_GRAY),
    [SPECIES_MAGEARNA_ORIGINAL_COLOR] = MAGEARNA_BASE_STATS(BODY_COLOR_RED),

    [SPECIES_MARSHADOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 125,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_GHOST,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TECHNICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_POIPOLE] =
    {
        .baseHP        = 67,
        .baseAttack    = 73,
        .baseDefense   = 67,
        .baseSpeed     = 73,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .type1 = TYPE_POISON,
        .type2 = TYPE_POISON,
        .catchRate = 45,
        .expYield = 189,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_NAGANADEL] =
    {
        .baseHP        = 73,
        .baseAttack    = 73,
        .baseDefense   = 73,
        .baseSpeed     = 121,
        .baseSpAttack  = 127,
        .baseSpDefense = 73,
        .type1 = TYPE_POISON,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 243,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_STAKATAKA] =
    {
        .baseHP        = 61,
        .baseAttack    = 131,
        .baseDefense   = 211,
        .baseSpeed     = 13,
        .baseSpAttack  = 53,
        .baseSpDefense = 101,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_STEEL,
        .catchRate = 30,
        .expYield = 257,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_BLACEPHALON] =
    {
        .baseHP        = 53,
        .baseAttack    = 127,
        .baseDefense   = 53,
        .baseSpeed     = 107,
        .baseSpAttack  = 151,
        .baseSpDefense = 79,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .catchRate = 30,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_ZERAORA] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 75,
        .baseSpeed     = 143,
        .baseSpAttack  = 102,
        .baseSpDefense = 80,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELTAN] =
    {
        .baseHP        = 46,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 34,
        .baseSpAttack  = 55,
        .baseSpDefense = 35,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 135,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELMETAL] =
    {
        .baseHP        = 135,
        .baseAttack    = 143,
        .baseDefense   = 143,
        .baseSpeed     = 34,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_IRON_FIST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_8_POKEMON == TRUE
    [SPECIES_GROOKEY] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_THWACKEY] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_RILLABOOM] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SCORBUNNY] =
    {
        .baseHP        = 50,
        .baseAttack    = 71,
        .baseDefense   = 40,
        .baseSpeed     = 69,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_RABOOT] =
    {
        .baseHP        = 65,
        .baseAttack    = 86,
        .baseDefense   = 60,
        .baseSpeed     = 94,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CINDERACE] =
    {
        .baseHP        = 80,
        .baseAttack    = 116,
        .baseDefense   = 75,
        .baseSpeed     = 119,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SOBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIZZILE] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_INTELEON] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 125,
        .baseSpDefense = 65,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SKWOVET] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 55,
        .evYield_HP        = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GREEDENT] =
    {
        .baseHP        = 120,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 20,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 90,
        .expYield = 161,
        .evYield_HP        = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_ROOKIDEE] =
    {
        .baseHP        = 38,
        .baseAttack    = 47,
        .baseDefense   = 35,
        .baseSpeed     = 57,
        .baseSpAttack  = 33,
        .baseSpDefense = 35,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_FLYING,
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORVISQUIRE] =
    {
        .baseHP        = 68,
        .baseAttack    = 67,
        .baseDefense   = 55,
        .baseSpeed     = 77,
        .baseSpAttack  = 43,
        .baseSpDefense = 55,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_FLYING,
        .catchRate = 120,
        .expYield = 128,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORVIKNIGHT] =
    {
        .baseHP        = 98,
        .baseAttack    = 87,
        .baseDefense   = 105,
        .baseSpeed     = 67,
        .baseSpAttack  = 53,
        .baseSpDefense = 85,
        .type1 = TYPE_FLYING,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 248,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FLYING,
        .abilities = {ABILITY_PRESSURE, ABILITY_UNNERVE, ABILITY_MIRROR_ARMOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BLIPBUG] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .type1 = TYPE_BUG,
        .type2 = TYPE_BUG,
        .catchRate = 255,
        .expYield = 36,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DOTTLER] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .type1 = TYPE_BUG,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 120,
        .expYield = 117,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ORBEETLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 110,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .type1 = TYPE_BUG,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 253,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_FRISK, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_NICKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 28,
        .baseDefense   = 28,
        .baseSpeed     = 50,
        .baseSpAttack  = 47,
        .baseSpDefense = 52,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 255,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_THIEVUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 90,
        .baseSpAttack  = 87,
        .baseSpDefense = 92,
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .catchRate = 127,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOSSIFLEUR] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 10,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ELDEGOSS] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_GRASS,
        .catchRate = 75,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_GRASS,
        .abilities = {ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WOOLOO] =
    {
        .baseHP        = 42,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 255,
        .expYield = 122,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLUFFY, ABILITY_RUN_AWAY, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DUBWOOL] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 88,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .catchRate = 127,
        .expYield = 172,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_FLUFFY, ABILITY_STEADFAST, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_CHEWTLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 38,
        .baseSpDefense = 38,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DREDNAW] =
    {
        .baseHP        = 90,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 74,
        .baseSpAttack  = 48,
        .baseSpDefense = 68,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ROCK,
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MONSTER,
        .eggGroup2 = EGG_GROUP_WATER_1,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_YAMPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 26,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 255,
        .expYield = 54,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BALL_FETCH, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BOLTUND] =
    {
        .baseHP        = 69,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 121,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ROLYCOLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 255,
        .expYield = 48,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_HEATPROOF, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_CARKOL] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FIRE,
        .catchRate = 120,
        .expYield = 144,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_COALOSSAL] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_FIRE,
        .catchRate = 45,
        .expYield = 255,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_APPLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DRAGON,
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLAPPLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_APPLETUN] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 170,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_ERRATIC,
        .eggGroup1 = EGG_GROUP_GRASS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SILICOBRA] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 75,
        .baseSpeed     = 46,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 255,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SANDACONDA] =
    {
        .baseHP        = 72,
        .baseAttack    = 107,
        .baseDefense   = 125,
        .baseSpeed     = 71,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .catchRate = 120,
        .expYield = 179,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

#define CRAMORANT_BASE_STATS                              \
    {                                                     \
        .baseHP        = 70,                              \
        .baseAttack    = 85,                              \
        .baseDefense   = 55,                              \
        .baseSpeed     = 85,                              \
        .baseSpAttack  = 85,                              \
        .baseSpDefense = 95,                              \
        .type1 = TYPE_FLYING,                             \
        .type2 = TYPE_WATER,                              \
        .catchRate = 45,                                  \
        .expYield = 166,                                  \
        .evYield_SpDefense = 2,                           \
        .genderRatio = PERCENT_FEMALE(50),                \
        .eggCycles = 20,                                  \
        .friendship = 70,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                 \
        .eggGroup1 = EGG_GROUP_WATER_1,                   \
        .eggGroup2 = EGG_GROUP_FLYING,                    \
        .abilities = {ABILITY_GULP_MISSILE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLUE,                     \
        .noFlip = FALSE,                                  \
    }
    [SPECIES_CRAMORANT]         = CRAMORANT_BASE_STATS,
    [SPECIES_CRAMORANT_GULPING] = CRAMORANT_BASE_STATS,
    [SPECIES_CRAMORANT_GORGING] = CRAMORANT_BASE_STATS,

    [SPECIES_ARROKUDA] =
    {
        .baseHP        = 41,
        .baseAttack    = 63,
        .baseDefense   = 40,
        .baseSpeed     = 66,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BARRASKEWDA] =
    {
        .baseHP        = 61,
        .baseAttack    = 123,
        .baseDefense   = 60,
        .baseSpeed     = 136,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TOXEL] =
    {
        .baseHP        = 40,
        .baseAttack    = 38,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 54,
        .baseSpDefense = 35,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_POISON,
        .catchRate = 75,
        .expYield = 48,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_RATTLED, ABILITY_STATIC, ABILITY_KLUTZ},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

#define TOXTRICITY_BASE_STATS(ability2)                                \
    {                                                                  \
        .baseHP        = 75,                                           \
        .baseAttack    = 98,                                           \
        .baseDefense   = 70,                                           \
        .baseSpeed     = 75,                                           \
        .baseSpAttack  = 114,                                          \
        .baseSpDefense = 70,                                           \
        .type1 = TYPE_ELECTRIC,                                        \
        .type2 = TYPE_POISON,                                          \
        .catchRate = 45,                                               \
        .expYield = 176,                                               \
        .evYield_SpAttack  = 2,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 25,                                               \
        .friendship = 70,                                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                              \
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,                             \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,                             \
        .abilities = {ABILITY_PUNK_ROCK, ability2, ABILITY_TECHNICIAN},\
        .bodyColor = BODY_COLOR_PURPLE,                                \
        .noFlip = FALSE,                                               \
    }
    [SPECIES_TOXTRICITY_AMPED]   = TOXTRICITY_BASE_STATS(ABILITY_PLUS),
    [SPECIES_TOXTRICITY_LOW_KEY] = TOXTRICITY_BASE_STATS(ABILITY_MINUS),

    [SPECIES_SIZZLIPEDE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_BUG,
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CENTISKORCH] =
    {
        .baseHP        = 100,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .type1 = TYPE_FIRE,
        .type2 = TYPE_BUG,
        .catchRate = 75,
        .expYield = 184,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CLOBBOPUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 68,
        .baseDefense   = 60,
        .baseSpeed     = 32,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 180,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRAPPLOCT] =
    {
        .baseHP        = 80,
        .baseAttack    = 118,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

#define SINISTEA_BASE_STATS                                                  \
    {                                                                        \
        .baseHP        = 40,                                                 \
        .baseAttack    = 45,                                                 \
        .baseDefense   = 45,                                                 \
        .baseSpeed     = 50,                                                 \
        .baseSpAttack  = 74,                                                 \
        .baseSpDefense = 54,                                                 \
        .type1 = TYPE_GHOST,                                                 \
        .type2 = TYPE_GHOST,                                                 \
        .catchRate = 120,                                                    \
        .expYield = 62,                                                      \
        .evYield_SpAttack  = 1,                                              \
        .genderRatio = MON_GENDERLESS,                                       \
        .eggCycles = 20,                                                     \
        .friendship = 70,                                                    \
        .growthRate = GROWTH_MEDIUM_FAST,                                    \
        .eggGroup1 = EGG_GROUP_MINERAL,                                      \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                                    \
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},\
        .bodyColor = BODY_COLOR_PURPLE,                                      \
        .noFlip = FALSE,                                                     \
    }
    [SPECIES_SINISTEA_PHONY]   = SINISTEA_BASE_STATS,
    [SPECIES_SINISTEA_ANTIQUE] = SINISTEA_BASE_STATS,

#define POLTEAGEIST_BASE_STATS                                               \
    {                                                                        \
        .baseHP        = 60,                                                 \
        .baseAttack    = 65,                                                 \
        .baseDefense   = 65,                                                 \
        .baseSpeed     = 70,                                                 \
        .baseSpAttack  = 134,                                                \
        .baseSpDefense = 114,                                                \
        .type1 = TYPE_GHOST,                                                 \
        .type2 = TYPE_GHOST,                                                 \
        .catchRate = 60,                                                     \
        .expYield = 178,                                                     \
        .evYield_SpAttack  = 2,                                              \
        .genderRatio = MON_GENDERLESS,                                       \
        .eggCycles = 20,                                                     \
        .friendship = 70,                                                    \
        .growthRate = GROWTH_MEDIUM_FAST,                                    \
        .eggGroup1 = EGG_GROUP_MINERAL,                                      \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                                    \
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},\
        .bodyColor = BODY_COLOR_PURPLE,                                      \
        .noFlip = FALSE,                                                     \
    }
    [SPECIES_POLTEAGEIST_PHONY]   = POLTEAGEIST_BASE_STATS,
    [SPECIES_POLTEAGEIST_ANTIQUE] = POLTEAGEIST_BASE_STATS,

    [SPECIES_HATENNA] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 45,
        .baseSpeed     = 39,
        .baseSpAttack  = 56,
        .baseSpDefense = 53,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 235,
        .expYield = 53,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_HATTREM] =
    {
        .baseHP        = 57,
        .baseAttack    = 40,
        .baseDefense   = 65,
        .baseSpeed     = 49,
        .baseSpAttack  = 86,
        .baseSpDefense = 73,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_HATTERENE] =
    {
        .baseHP        = 57,
        .baseAttack    = 90,
        .baseDefense   = 95,
        .baseSpeed     = 29,
        .baseSpAttack  = 136,
        .baseSpDefense = 103,
        .type1 = TYPE_PSYCHIC,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_FAIRY,
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_IMPIDIMP] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FAIRY,
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MORGREM] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FAIRY,
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_GRIMMSNARL] =
    {
        .baseHP        = 95,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .type1 = TYPE_DARK,
        .type2 = TYPE_FAIRY,
        .catchRate = 45,
        .expYield = 255,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .type1 = TYPE_DARK,
        .type2 = TYPE_NORMAL,
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .type1 = TYPE_GHOST,
        .type2 = TYPE_GHOST,
        .catchRate = 30,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_WATER_3,
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FLYING,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .type1 = TYPE_ICE,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_HUMAN_LIKE,
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,
        .abilities = {ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_RUNERIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 95,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GHOST,
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_WANDERING_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MILCERY] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 34,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .type1 = TYPE_FAIRY,
        .type2 = TYPE_FAIRY,
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define ALCREMIE_BASE_STATS(color)                                          \
    {                                                                       \
        .baseHP        = 65,                                                \
        .baseAttack    = 60,                                                \
        .baseDefense   = 75,                                                \
        .baseSpeed     = 64,                                                \
        .baseSpAttack  = 110,                                               \
        .baseSpDefense = 121,                                               \
        .type1 = TYPE_FAIRY,                                                \
        .type2 = TYPE_FAIRY,                                                \
        .catchRate = 100,                                                   \
        .expYield = 173,                                                    \
        .evYield_SpDefense = 2,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = 70,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroup1 = EGG_GROUP_FAIRY,                                       \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                                   \
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL},\
        .bodyColor = color,                                                 \
        .noFlip = FALSE,                                                    \
    }
    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = ALCREMIE_BASE_STATS(BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = ALCREMIE_BASE_STATS(BODY_COLOR_PINK),
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = ALCREMIE_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = ALCREMIE_BASE_STATS(BODY_COLOR_BLUE),
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = ALCREMIE_BASE_STATS(BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = ALCREMIE_BASE_STATS(BODY_COLOR_WHITE),
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = ALCREMIE_BASE_STATS(BODY_COLOR_YELLOW),
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = ALCREMIE_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = ALCREMIE_BASE_STATS(BODY_COLOR_YELLOW),

    [SPECIES_FALINKS] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FAIRY,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PINCURCHIN] =
    {
        .baseHP        = 48,
        .baseAttack    = 101,
        .baseDefense   = 95,
        .baseSpeed     = 15,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 75,
        .expYield = 152,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_1,
        .eggGroup2 = EGG_GROUP_AMORPHOUS,
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_ELECTRIC_SURGE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SNOM] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 30,
        .type1 = TYPE_ICE,
        .type2 = TYPE_BUG,
        .catchRate = 190,
        .expYield = 37,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FROSMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .type1 = TYPE_ICE,
        .type2 = TYPE_BUG,
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_STONJOURNER] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 135,
        .baseSpeed     = 70,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .type1 = TYPE_ROCK,
        .type2 = TYPE_ROCK,
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_POWER_SPOT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

#define EISCUE_MISC_STATS                               \
        .type1 = TYPE_ICE,                              \
        .type2 = TYPE_ICE,                              \
        .catchRate = 60,                                \
        .expYield = 165,                                \
        .evYield_Defense   = 2,                         \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 25,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_WATER_1,                 \
        .eggGroup2 = EGG_GROUP_FIELD,                   \
        .abilities = {ABILITY_ICE_FACE, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE

    [SPECIES_EISCUE_ICE_FACE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        EISCUE_MISC_STATS,
    },
    [SPECIES_EISCUE_NOICE_FACE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        EISCUE_MISC_STATS,
    },

#define INDEEDEE_MISC_STATS(ability1, gender)                               \
        .type1 = TYPE_PSYCHIC,                                              \
        .type2 = TYPE_NORMAL,                                               \
        .catchRate = 30,                                                    \
        .expYield = 166,                                                    \
        .genderRatio = MON_MALE,                                            \
        .eggCycles = 40,                                                    \
        .friendship = 140,                                                  \
        .growthRate = GROWTH_FAST,                                          \
        .eggGroup1 = EGG_GROUP_FAIRY,                                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                                       \
        .abilities = {ability1, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE},\
        .bodyColor = BODY_COLOR_PURPLE,                                     \
        .noFlip = FALSE

    [SPECIES_INDEEDEE_MALE] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .evYield_SpAttack  = 2,
        INDEEDEE_MISC_STATS(ABILITY_INNER_FOCUS, MON_MALE),
    },
    [SPECIES_INDEEDEE_FEMALE] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .evYield_SpDefense = 2,
        INDEEDEE_MISC_STATS(ABILITY_OWN_TEMPO, MON_FEMALE),
    },

#define MORPEKO_BASE_STATS                                 \
    {                                                      \
        .baseHP        = 58,                               \
        .baseAttack    = 95,                               \
        .baseDefense   = 58,                               \
        .baseSpeed     = 97,                               \
        .baseSpAttack  = 70,                               \
        .baseSpDefense = 58,                               \
        .type1 = TYPE_ELECTRIC,                            \
        .type2 = TYPE_DARK,                                \
        .catchRate = 180,                                  \
        .expYield = 153,                                   \
        .evYield_Speed     = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),                 \
        .eggCycles = 10,                                   \
        .friendship = 70,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                  \
        .eggGroup1 = EGG_GROUP_FIELD,                      \
        .eggGroup2 = EGG_GROUP_FAIRY,                      \
        .abilities = {ABILITY_HUNGER_SWITCH, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_YELLOW,                    \
        .noFlip = FALSE,                                   \
    }
    [SPECIES_MORPEKO_FULL_BELLY] = MORPEKO_BASE_STATS,
    [SPECIES_MORPEKO_HANGRY]     = MORPEKO_BASE_STATS,

    [SPECIES_CUFANT] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 49,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 49,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 190,
        .expYield = 66,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_COPPERAJAH] =
    {
        .baseHP        = 122,
        .baseAttack    = 130,
        .baseDefense   = 69,
        .baseSpeed     = 30,
        .baseSpAttack  = 80,
        .baseSpDefense = 69,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_STEEL,
        .catchRate = 90,
        .expYield = 175,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_MINERAL,
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DRACOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_HUSTLE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCTOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_STATIC, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRACOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .type1 = TYPE_WATER,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_STRONG_JAW, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCTOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .type1 = TYPE_WATER,
        .type2 = TYPE_ICE,
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_ICE_BODY, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DURALUDON] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 120,
        .baseSpDefense = 50,
        .type1 = TYPE_STEEL,
        .type2 = TYPE_DRAGON,
        .catchRate = 45,
        .expYield = 187,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_MINERAL,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_LIGHT_METAL, ABILITY_HEAVY_METAL, ABILITY_STALWART},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DREEPY] =
    {
        .baseHP        = 28,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 82,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAKLOAK] =
    {
        .baseHP        = 68,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 102,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGAPULT] =
    {
        .baseHP        = 88,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 142,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_GHOST,
        .catchRate = 45,
        .expYield = 300,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_AMORPHOUS,
        .eggGroup2 = EGG_GROUP_DRAGON,
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

#define ZACIAN_MISC_STATS(typeB, exp)                       \
        .type1 = TYPE_FAIRY,                                \
        .type2 = typeB,                                     \
        .catchRate = 10,                                    \
        .expYield = exp,                                    \
        .evYield_Speed     = 3,                             \
        .genderRatio = MON_GENDERLESS,                      \
        .eggCycles = 120,                                   \
        .friendship = 0,                                    \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                \
        .abilities = {ABILITY_INTREPID_SWORD, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLUE,                       \
        .noFlip = FALSE,                                    \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_ZACIAN_HERO_OF_MANY_BATTLES] =
    {
        .baseHP        = 92,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        ZACIAN_MISC_STATS(TYPE_FAIRY, 335),
    },
    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        .baseHP        = 92,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 148,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        ZACIAN_MISC_STATS(TYPE_STEEL, 360),
    },

#define ZAMAZENTA_MISC_STATS(typeB, exp)                        \
        .type1 = TYPE_FIGHTING,                                 \
        .type2 = typeB,                                         \
        .catchRate = 10,                                        \
        .expYield = exp,                                        \
        .evYield_Speed     = 3,                                 \
        .genderRatio = MON_GENDERLESS,                          \
        .eggCycles = 120,                                       \
        .friendship = 0,                                        \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                    \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                    \
        .abilities = {ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_RED,                            \
        .noFlip = FALSE,                                        \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_ZAMAZENTA_HERO_OF_MANY_BATTLES] =
    {
        .baseHP        = 92,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        ZAMAZENTA_MISC_STATS(TYPE_FIGHTING, 335),
    },
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        .baseHP        = 92,
        .baseAttack    = 130,
        .baseDefense   = 145,
        .baseSpeed     = 128,
        .baseSpAttack  = 80,
        .baseSpDefense = 145,
        ZAMAZENTA_MISC_STATS(TYPE_STEEL, 360),
    },

#define ETERNATUS_MISC_STATS                            \
        .type1 = TYPE_POISON,                           \
        .type2 = TYPE_DRAGON,                           \
        .catchRate = 255,                               \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_PURPLE,                 \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_ETERNATUS] =
    {
        .baseHP        = 140,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 95,
        .expYield = 345,
        ETERNATUS_MISC_STATS,
    },
    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .baseHP        = 255,
        .baseAttack    = 115,
        .baseDefense   = 250,
        .baseSpeed     = 130,
        .baseSpAttack  = 125,
        .baseSpDefense = 250,
        .expYield = 563,
        ETERNATUS_MISC_STATS,
    },

    [SPECIES_KUBFU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 72,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_FIGHTING,
        .catchRate = 3,
        .expYield = 77,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

#define URSHIFU_BASE_STATS(typeB)                           \
    {                                                       \
        .baseHP        = 100,                               \
        .baseAttack    = 130,                               \
        .baseDefense   = 100,                               \
        .baseSpeed     = 97,                                \
        .baseSpAttack  = 63,                                \
        .baseSpDefense = 60,                                \
        .type1 = TYPE_FIGHTING,                             \
        .type2 = typeB,                                     \
        .catchRate = 3,                                     \
        .expYield = 275,                                    \
        .evYield_Attack    = 3,                             \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 120,                                   \
        .friendship = 70,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                \
        .abilities = {ABILITY_UNSEEN_FIST, ABILITY_NONE},   \
        .bodyColor = BODY_COLOR_GRAY,                       \
        .noFlip = FALSE,                                    \
        .flags = SPECIES_FLAG_LEGENDARY                     \
    }

    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE] = URSHIFU_BASE_STATS(TYPE_DARK),
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =  URSHIFU_BASE_STATS(TYPE_WATER),

#define ZARUDE_BASE_STATS                               \
    {                                                   \
        .baseHP        = 105,                           \
        .baseAttack    = 120,                           \
        .baseDefense   = 105,                           \
        .baseSpeed     = 105,                           \
        .baseSpAttack  = 70,                            \
        .baseSpDefense = 95,                            \
        .type1 = TYPE_DARK,                             \
        .type2 = TYPE_GRASS,                            \
        .catchRate = 3,                                 \
        .expYield = 300,                                \
        .evYield_Attack    = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GREEN,                  \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                 \
    }
    [SPECIES_ZARUDE]      = ZARUDE_BASE_STATS,
    [SPECIES_ZARUDE_DADA] = ZARUDE_BASE_STATS,

    [SPECIES_REGIELEKI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 200,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .type1 = TYPE_ELECTRIC,
        .type2 = TYPE_ELECTRIC,
        .catchRate = 3,
        .expYield = 290,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_TRANSISTOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_REGIDRAGO] =
    {
        .baseHP        = 200,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .type1 = TYPE_DRAGON,
        .type2 = TYPE_DRAGON,
        .catchRate = 3,
        .expYield = 290,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,
        .abilities = {ABILITY_DRAGONS_MAW, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

#define RIDER_MISC_STATS(typeA,typeB,exp,friend,ability,color)  \
        .type1 = typeA,                                         \
        .type2 = typeB,                                         \
        .catchRate = 3,                                         \
        .expYield = exp,                                        \
        .genderRatio = MON_GENDERLESS,                          \
        .eggCycles = 120,                                       \
        .friendship = friend,                                   \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                    \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                    \
        .abilities = {ability, ABILITY_NONE},                   \
        .bodyColor = color,                                     \
        .noFlip = FALSE,                                        \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_GLASTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .evYield_Attack    = 3,
        RIDER_MISC_STATS(TYPE_ICE, TYPE_ICE, 290, 35, ABILITY_CHILLING_NEIGH, BODY_COLOR_WHITE),
    },
    [SPECIES_SPECTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .evYield_SpAttack  = 3,
        RIDER_MISC_STATS(TYPE_GHOST, TYPE_GHOST, 290, 35, ABILITY_GRIM_NEIGH, BODY_COLOR_BLACK),
    },
    [SPECIES_CALYREX] =
    {
        .baseHP        = 100,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .evYield_HP        = 3,
        RIDER_MISC_STATS(TYPE_PSYCHIC, TYPE_GRASS, 250, 100, ABILITY_UNNERVE, BODY_COLOR_GREEN),
    },
    [SPECIES_CALYREX_ICE_RIDER] =
    {
        .baseHP        = 100,
        .baseAttack    = 165,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 85,
        .baseSpDefense = 130,
        .evYield_Attack    = 3,
        RIDER_MISC_STATS(TYPE_PSYCHIC, TYPE_ICE, 340, 100, ABILITY_AS_ONE_ICE_RIDER, BODY_COLOR_WHITE),
    },
    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 150,
        .baseSpAttack  = 165,
        .baseSpDefense = 100,
        RIDER_MISC_STATS(TYPE_PSYCHIC, TYPE_GHOST, 340, 100, ABILITY_AS_ONE_SHADOW_RIDER, BODY_COLOR_BLACK),
    },

    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 105,
        .baseDefense   = 72,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_PSYCHIC,
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .type1 = TYPE_BUG,
        .type2 = TYPE_ROCK,
        .catchRate = 25,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .type1 = TYPE_GROUND,
        .type2 = TYPE_NORMAL,
        .catchRate = 75,
        .expYield = 194,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_GUTS, ABILITY_BULLETPROOF, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BASCULEGION] =
    {
        .baseHP        = 120,
        .baseAttack    = 112,
        .baseDefense   = 65,
        .baseSpeed     = 78,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .type1 = TYPE_WATER,
        .type2 = TYPE_GHOST,
        .catchRate = 25,
        .expYield = 186,
        .evYield_HP     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_RATTLED, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .type1 = TYPE_FIGHTING,
        .type2 = TYPE_POISON,
        .catchRate = 135,
        .expYield = 179,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroup1 = EGG_GROUP_FIELD,
        .eggGroup2 = EGG_GROUP_FIELD,
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .type1 = TYPE_DARK,
        .type2 = TYPE_POISON,
        .catchRate = 135,
        .expYield = 180,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_WATER_2,
        .eggGroup2 = EGG_GROUP_WATER_2,
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

#define ENAMORUS_MISC_STATS                 \
        .type1 = TYPE_FAIRY,                \
        .type2 = TYPE_FLYING,               \
        .catchRate = 3,                     \
        .evYield_SpAttack  = 3,             \
        .genderRatio = MON_FEMALE,          \
        .eggCycles = 120,                   \
        .friendship = 90,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,\
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,\
        .bodyColor = BODY_COLOR_PINK,       \
        .noFlip = FALSE,                    \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 106,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .expYield = 261,
        .abilities = {ABILITY_HEALER, ABILITY_NONE, ABILITY_CONTRARY},
        ENAMORUS_MISC_STATS,
    },
    [SPECIES_ENAMORUS_THERIAN] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 110,
        .baseSpeed     = 46,
        .baseSpAttack  = 135,
        .baseSpDefense = 100,
        .expYield = 270,
        .abilities = {ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_OVERCOAT},
        ENAMORUS_MISC_STATS,
    },
#endif
};
