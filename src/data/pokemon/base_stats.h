// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

// Macros to allow editing every form at once
#define FLIP    0
#define NO_FLIP 1

const struct BaseStats gBaseStats[] =
{
    [SPECIES_NONE] =
    {
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Seed"),
        .height = 7,
        .weight = 69,
        .description = gBulbasaurPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Seed"),
        .height = 10,
        .weight = 130,
        .description = gIvysaurPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Seed")

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
        .height = 20,
        .weight = 1000,
        .description = gVenusaurPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
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
        .height = 24,
        .weight = 1555,
        .description = gVenusaurMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
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
        .categoryName = _("Lizard"),
        .height = 6,
        .weight = 85,
        .description = gCharmanderPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flame"),
        .height = 11,
        .weight = 190,
        .description = gCharmeleonPokedexText,
        .pokemonScale = 302,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flame"),         \
        .height = 17,                       \
        .pokemonScale = 256,                \
        .pokemonOffset = 1,                 \
        .trainerScale = 302,                \
        .trainerOffset = 3

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
        .weight = 905,
        .description = gCharizardPokedexText,
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
        .weight = 1105,
        .description = gCharizardMegaXPokedexText,
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
        .weight = 1005,
        .description = gCharizardMegaYPokedexText,
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
        .categoryName = _("Tiny Turtle"),
        .height = 5,
        .weight = 90,
        .description = gSquirtlePokedexText,
        .pokemonScale = 412,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Turtle"),
        .height = 10,
        .weight = 225,
        .description = gWartortlePokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Shellfish"),     \
        .height = 16,                       \
        .pokemonScale = 256,                \
        .pokemonOffset = -1,                \
        .trainerScale = 293,                \
        .trainerOffset = 2

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
        .weight = 855,
        .description = gBlastoisePokedexText,
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
        .weight = 1011,
        .description = gBlastoiseMegaPokedexText,
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
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 29,
        .description = gCaterpiePokedexText,
        .pokemonScale = 549,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cocoon"),
        .height = 7,
        .weight = 99,
        .description = gMetapodPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Butterfly"),
        .height = 11,
        .weight = 320,
        .description = gButterfreePokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Hairy Bug"),
        .height = 3,
        .weight = 32,
        .description = gWeedlePokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = gKakunaPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Bee"),    \
        .pokemonScale = 366,                \
        .pokemonOffset = 2,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 10,
        .weight = 295,
        .description = gBeedrillPokedexText,
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
        .height = 14,
        .weight = 405,
        .description = gBeedrillMegaPokedexText,
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
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 18,
        .description = gPidgeyPokedexText,
        .pokemonScale = 508,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bird"),
        .height = 11,
        .weight = 300,
        .description = gPidgeottoPokedexText,
        .pokemonScale = 331,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bird"),          \
        .pokemonScale = 269,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 15,
        .weight = 395,
        .description = gPidgeotPokedexText,
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
        .height = 22,
        .weight = 505,
        .description = gPidgeotMegaPokedexText,
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
        .noFlip = FALSE,                    \
        .categoryName = _("Mouse"),         \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 3,                        \
        .pokemonScale = 481,                \
        .pokemonOffset = 21,                \
        RATTATA_FAMILY_MISC_STATS

    [SPECIES_RATTATA] =
    {
        .type1 = TYPE_NORMAL,
        .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .weight = 35,
        .description = gRattataPokedexText,
        RATTATA_MISC_STATS,
    },
    [SPECIES_RATTATA_ALOLAN] =
    {
        .type1 = TYPE_DARK,
        .itemRare = ITEM_PECHA_BERRY,
        .abilities = {ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        .weight = 38,
        .description = gRattataAlolanPokedexText,
        RATTATA_MISC_STATS,
    },

#define RATICATE_MISC_STATS         \
        .catchRate = 127,           \
        .expYield = 145,            \
        .evYield_Speed     = 2,     \
        .height = 7,                \
        .pokemonScale = 459,        \
        .pokemonOffset = 18,        \
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
        .weight = 185,
        .description = gRaticatePokedexText,
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
        .weight = 255,
        .description = gRaticateAlolanPokedexText,
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
        .categoryName = _("Tiny Bird"),
        .height = 3,
        .weight = 20,
        .description = gSpearowPokedexText,
        .pokemonScale = 571,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Beak"),
        .height = 12,
        .weight = 380,
        .description = gFearowPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Snake"),
        .height = 20,
        .weight = 69,
        .description = gEkansPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cobra"),
        .height = 35,
        .weight = 650,
        .description = gArbokPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 296,
        .trainerOffset = 2,
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
#define PIKACHU_BASE_STATS(gender, flip, dexText)                          \
    {                                                                      \
        .baseHP        = 35,                                               \
        .baseAttack    = 55,                                               \
        .baseSpeed     = 90,                                               \
        .baseSpAttack  = 50,                                               \
        PIKACHU_BASE_DEFENSES,                                             \
        .type1 = TYPE_ELECTRIC,                                            \
        .type2 = TYPE_ELECTRIC,                                            \
        .catchRate = 190,                                                  \
        .expYield = 112,                                                   \
        .evYield_Speed     = 2,                                            \
        .itemRare = ITEM_LIGHT_BALL,                                       \
        .genderRatio = gender,                                             \
        .eggCycles = 10,                                                   \
        .friendship = 70,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroup1 = EGG_GROUP_FIELD,                                      \
        .eggGroup2 = EGG_GROUP_FAIRY,                                      \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},\
        .bodyColor = BODY_COLOR_YELLOW,                                    \
        .noFlip = flip,                                                    \
        .categoryName = _("Mouse"),                                        \
        .height = 4,                                                       \
        .weight = 60,                                                      \
        .description = dexText,                                            \
        .pokemonScale = 479,                                               \
        .pokemonOffset = 19,                                               \
        .trainerScale = 256,                                               \
        .trainerOffset = 0,                                                \
    }
    [SPECIES_PIKACHU]               = PIKACHU_BASE_STATS(PERCENT_FEMALE(50), FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_COSPLAY]       = PIKACHU_BASE_STATS(MON_FEMALE, FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_ROCK_STAR]     = PIKACHU_BASE_STATS(MON_FEMALE, FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_BELLE]         = PIKACHU_BASE_STATS(MON_FEMALE, NO_FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_POP_STAR]      = PIKACHU_BASE_STATS(MON_FEMALE, NO_FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_PH_D]          = PIKACHU_BASE_STATS(MON_FEMALE, FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_LIBRE]         = PIKACHU_BASE_STATS(MON_FEMALE, FLIP, gPikachuPokedexText),
    [SPECIES_PIKACHU_ORIGINAL_CAP]  = PIKACHU_BASE_STATS(MON_MALE, NO_FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_HOENN_CAP]     = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_SINNOH_CAP]    = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_UNOVA_CAP]     = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_KALOS_CAP]     = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_ALOLA_CAP]     = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_PARTNER_CAP]   = PIKACHU_BASE_STATS(MON_MALE, NO_FLIP, gDummyPokedexText),
    [SPECIES_PIKACHU_WORLD_CAP]     = PIKACHU_BASE_STATS(MON_MALE, FLIP, gDummyPokedexText),

#if P_UPDATED_STATS >= GEN_6
    #define RAICHU_SPEED 110
#else
    #define RAICHU_SPEED 100
#endif

#define RAICHU_MISC_STATS   \
        .type1 = TYPE_ELECTRIC,                                 \
        .catchRate = 75,                                        \
        .expYield = 218,                                        \
        .evYield_Speed     = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 10,                                        \
        .friendship = 70,                                       \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroup1 = EGG_GROUP_FIELD,                           \
        .eggGroup2 = EGG_GROUP_FAIRY,                           \
        .noFlip = FALSE,                                        \
        .categoryName = _("Mouse")

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
        RAICHU_MISC_STATS,
        .height = 8,
        .weight = 300,
        .description = gRaichuPokedexText,
        .pokemonScale = 426,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 7,
        .weight = 210,
        .description = gRaichuAlolanPokedexText,
    },

#define SANDSHREW_FAMILY_MISC_STATS         \
        .itemRare = ITEM_GRIP_CLAW,         \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE,                    \
        .categoryName = _("Mouse")

#define SANDSHREW_MISC_STATS                \
        .catchRate = 255,                   \
        .expYield = 60,                     \
        .evYield_Defense   = 1,             \
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
        .height = 6,
        .weight = 120,
        .description = gSandshrewPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 7,
        .weight = 400,
        .description = gSandshrewAlolanPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
        SANDSHREW_MISC_STATS,
    },

#define SANDSLASH_MISC_STATS                \
        .catchRate = 90,                    \
        .expYield = 158,                    \
        .evYield_Defense   = 2,             \
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
        .height = 10,
        .weight = 295,
        .description = gSandslashPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 12,
        .weight = 550,
        .description = gSandslashAlolanPokedexText,
        .pokemonScale = 341,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Pin"),
        .height = 4,
        .weight = 70,
        .description = gNidoranFPokedexText,
        .pokemonScale = 488,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Pin"),
        .height = 8,
        .weight = 200,
        .description = gNidorinaPokedexText,
        .pokemonScale = 381,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Drill"),
        .height = 13,
        .weight = 600,
        .description = gNidoqueenPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Pin"),
        .height = 5,
        .weight = 90,
        .description = gNidoranMPokedexText,
        .pokemonScale = 511,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Pin"),
        .height = 9,
        .weight = 195,
        .description = gNidorinoPokedexText,
        .pokemonScale = 408,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Drill"),
        .height = 14,
        .weight = 620,
        .description = gNidokingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 75,
        .description = gClefairyPokedexText,
        .pokemonScale = 441,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fairy"),
        .height = 13,
        .weight = 400,
        .description = gClefablePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define VULPIX_FAMILY_MISC_STATS            \
        .genderRatio = PERCENT_FEMALE(75),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE,                    \
        .categoryName = _("Fox")

#define VULPIX_MISC_STATS   \
        .baseHP        = 38,        \
        .baseAttack    = 41,        \
        .baseDefense   = 40,        \
        .baseSpeed     = 65,        \
        .baseSpAttack  = 50,        \
        .baseSpDefense = 65,        \
        .catchRate = 190,           \
        .expYield = 60,             \
        .evYield_Speed     = 1,     \
        VULPIX_FAMILY_MISC_STATS,   \
        .height = 6,                \
        .weight = 99,               \
        .pokemonScale = 542,        \
        .pokemonOffset = 19,        \
        .trainerScale = 256,        \
        .trainerOffset = 0

    [SPECIES_VULPIX] =
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .itemRare = ITEM_CHARCOAL,
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_BROWN,
        .description = gVulpixPokedexText,                                             \
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
        .description = gVulpixAlolanPokedexText,                                             \
        VULPIX_MISC_STATS,
    },

#define NINETALES_MISC_STATS        \
        .catchRate = 75,            \
        .expYield = 177,            \
        .evYield_Speed     = 1,     \
        .evYield_SpDefense = 1,     \
        .height = 11,               \
        .weight = 199,              \
        .pokemonScale = 339,        \
        .pokemonOffset = 10,        \
        .trainerScale = 256,        \
        .trainerOffset = 0,         \
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
        .description = gNinetalesPokedexText,
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
        .description = gNinetalesAlolanPokedexText,
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
        .categoryName = _("Balloon"),
        .height = 5,
        .weight = 55,
        .description = gJigglypuffPokedexText,
        .pokemonScale = 433,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Balloon"),
        .height = 10,
        .weight = 120,
        .description = gWigglytuffPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bat"),
        .height = 8,
        .weight = 75,
        .description = gZubatPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = -5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bat"),
        .height = 16,
        .weight = 550,
        .description = gGolbatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Weed"),
        .height = 5,
        .weight = 54,
        .description = gOddishPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Weed"),
        .height = 8,
        .weight = 86,
        .description = gGloomPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flower"),
        .height = 12,
        .weight = 186,
        .description = gVileplumePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mushroom"),
        .height = 3,
        .weight = 54,
        .description = gParasPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mushroom"),
        .height = 10,
        .weight = 295,
        .description = gParasectPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Insect"),
        .height = 10,
        .weight = 300,
        .description = gVenonatPokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = -1,
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
        .categoryName = _("Poison Moth"),
        .height = 15,
        .weight = 125,
        .description = gVenomothPokedexText,
        .pokemonScale = 285,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 1,
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
        .bodyColor = BODY_COLOR_BROWN,      \
        .categoryName = _("Mole"),          \
        .trainerScale = 256,                \
        .trainerOffset = 0

#define DIGLETT_MISC_STATS          \
        .catchRate = 255,           \
        .expYield = 53,             \
        .evYield_Speed     = 1,     \
        .noFlip = FALSE,            \
        .height = 2,                \
        .pokemonScale = 833,        \
        .pokemonOffset = 25,        \
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
        .weight = 8,
        .description = gDiglettPokedexText,
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
        .weight = 10,
        .description = gDiglettAlolanPokedexText,
        DIGLETT_MISC_STATS,
    },

#define DUGTRIO_MISC_STATS                    \
        .catchRate = 50,                                                \
        .expYield = 149,                                                \
        .evYield_Speed     = 2,                                         \
        .height = 7,                                                    \
        DIGLETT_FAMILY_MISC_STATS

#if P_UPDATED_STATS >= GEN_7
    #define DUGTRIO_SPEED 100
#else
    #define DUGTRIO_SPEED 80
#endif

    [SPECIES_DUGTRIO] =
    {
        .baseHP        = 35,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .baseAttack    = DUGTRIO_SPEED,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE},
        .noFlip = TRUE,
        .weight = 333,
        .description = gDugtrioPokedexText,
        DUGTRIO_MISC_STATS,
    },
    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .baseHP        = 35,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .baseAttack    = DUGTRIO_SPEED,
        .type2 = TYPE_STEEL,
        .abilities = {ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE},
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        .weight = 666,
        .description = gDugtrioAlolanPokedexText,
        DUGTRIO_MISC_STATS,
    },

#define MEOWTH_MISC_STATS   \
        .catchRate = 255,                                           \
        .expYield = 58,                                             \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 20,                                            \
        .friendship = 70,                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                           \
        .eggGroup1 = EGG_GROUP_FIELD,                               \
        .eggGroup2 = EGG_GROUP_FIELD,                               \
        .noFlip = FALSE,                                            \
        .categoryName = _("Scratch Cat"),                           \
        .height = 4,                                                \
        .pokemonScale = 480,                                        \
        .pokemonOffset = 19,                                        \
        .trainerScale = 256,                                        \
        .trainerOffset = 0

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
        MEOWTH_MISC_STATS,
        .weight = 42,
        .description = gMeowthPokedexText,
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
        .weight = 42,
        .description = gMeowthAlolanPokedexText,
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
        .weight = 75,
        .description = gDummyPokedexText,
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
        .categoryName = _("Classy Cat"),    \
        .pokemonOffset = 10,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 10,
        .weight = 320,
        .description = gPersianPokedexText,
        .pokemonScale = 320,
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
        .height = 11,
        .weight = 330,
        .description = gPersianAlolanPokedexText,
        .pokemonScale = 339,
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
        .categoryName = _("Duck"),
        .height = 8,
        .weight = 196,
        .description = gPsyduckPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Duck"),
        .height = 17,
        .weight = 766,
        .description = gGolduckPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
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
        .categoryName = _("Pig Monkey"),
        .height = 5,
        .weight = 280,
        .description = gMankeyPokedexText,
        .pokemonScale = 404,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Pig Monkey"),
        .height = 10,
        .weight = 320,
        .description = gPrimeapePokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define GROWLITHE_FAMILY_MISC_STATS                                                 \
        .type1 = TYPE_FIRE,                                                         \
        .catchRate = 190,                                                           \
        .expYield = 70,                                                             \
        .evYield_Attack    = 1,                                                     \
        .genderRatio = PERCENT_FEMALE(25),                                          \
        .eggCycles = 20,                                                            \
        .friendship = 70,                                                           \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroup1 = EGG_GROUP_FIELD,                                               \
        .eggGroup2 = EGG_GROUP_FIELD,                                               \
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED},   \
        .bodyColor = BODY_COLOR_BROWN,                                              \
        .noFlip = FALSE

#define GROWLITHE_MISC_STATS    \
        .pokemonScale = 346,    \
        .pokemonOffset = 14,    \
        .trainerScale = 256,    \
        .trainerOffset = 0,     \
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
        .categoryName = _("Puppy"),
        .height = 7,
        .weight = 190,
        .description = gGrowlithePokedexText,
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
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 227,
        .description = gDummyPokedexText,
        GROWLITHE_MISC_STATS,
    },

#define ARCANINE_MISC_STATS             \
        .categoryName = _("Legendary"), \
        .pokemonScale = 346,            \
        .pokemonOffset = 14,            \
        .trainerScale = 256,            \
        .trainerOffset = 0,             \
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
        .height = 19,
        .weight = 1550,
        .description = gArcaninePokedexText,
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
        .height = 20,
        .weight = 1680,
        .description = gDummyPokedexText,
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
        .categoryName = _("Tadpole"),
        .height = 6,
        .weight = 124,
        .description = gPoliwagPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tadpole"),
        .height = 10,
        .weight = 200,
        .description = gPoliwhirlPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tadpole"),
        .height = 13,
        .weight = 540,
        .description = gPoliwrathPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Psi"),
        .height = 9,
        .weight = 195,
        .description = gAbraPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Psi"),
        .height = 13,
        .weight = 565,
        .description = gKadabraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Psi"),           \
        .weight = 480,                      \
        .pokemonScale = 256,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 15,
        .description = gAlakazamPokedexText,
        .pokemonOffset = 3,
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
        .height = 12,
        .description = gAlakazamMegaPokedexText,
        .pokemonOffset = -5,
        ALAKAZAM_MISC_STATS,
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
        .categoryName = _("Superpower"),
        .height = 8,
        .weight = 195,
        .description = gMachopPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Superpower"),
        .height = 15,
        .weight = 705,
        .description = gMachokePokedexText,
        .pokemonScale = 323,
        .pokemonOffset = 9,
        .trainerScale = 257,
        .trainerOffset = 0,
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
        .categoryName = _("Superpower"),
        .height = 16,
        .weight = 1300,
        .description = gMachampPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 1,
        .trainerScale = 269,
        .trainerOffset = -1,
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
        .categoryName = _("Flower"),
        .height = 7,
        .weight = 40,
        .description = gBellsproutPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flycatcher"),
        .height = 10,
        .weight = 64,
        .description = gWeepinbellPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flycatcher"),
        .height = 17,
        .weight = 155,
        .description = gVictreebelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 312,
        .trainerOffset = 3,
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
        .categoryName = _("Jellyfish"),
        .height = 9,
        .weight = 455,
        .description = gTentacoolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Jellyfish"),
        .height = 16,
        .weight = 550,
        .description = gTentacruelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 312,
        .trainerOffset = 1,
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

#define GEODUDE_MISC_STATS          \
        .baseHP        = 40,        \
        .baseAttack    = 80,        \
        .baseDefense   = 100,       \
        .baseSpeed     = 20,        \
        .baseSpAttack  = 30,        \
        .baseSpDefense = 30,        \
        .catchRate = 255,           \
        .expYield = 60,             \
        .evYield_Defense   = 1,     \
        .categoryName = _("Rock"),  \
        .height = 4,                \
        .pokemonScale = 347,        \
        .pokemonOffset = 18,        \
        .trainerScale = 256,        \
        .trainerOffset = 0,         \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GEODUDE] =
    {
        .weight = 200,
        .description = gGeodudePokedexText,
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
        .weight = 203,
        .description = gGeodudeAlolanPokedexText,
        ALOLAN_GEODUDE_FAMILY_STATS,
        GEODUDE_MISC_STATS,
    },

#define GRAVELER_MISC_STATS         \
        .baseHP        = 55,        \
        .baseAttack    = 95,        \
        .baseDefense   = 115,       \
        .baseSpeed     = 35,        \
        .baseSpAttack  = 45,        \
        .baseSpDefense = 45,        \
        .catchRate = 120,           \
        .expYield = 137,            \
        .evYield_Defense   = 2,     \
        .categoryName = _("Rock"),  \
        .height = 10,               \
        .pokemonScale = 256,        \
        .pokemonOffset = 2,         \
        .trainerScale = 256,        \
        .trainerOffset = 0,         \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GRAVELER] =
    {
        .weight = 1050,
        .description = gGravelerPokedexText,
        KANTONIAN_GEODUDE_FAMILY_STATS,
        GRAVELER_MISC_STATS,
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        .weight = 1100,
        .description = gGravelerAlolanPokedexText,
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
        .categoryName = _("Megaton"),   \
        .pokemonScale = 256,            \
        .pokemonOffset = 3,             \
        .trainerScale = 296,            \
        .trainerOffset = 2,             \
        GEODUDE_FAMILY_MISC_STATS

    [SPECIES_GOLEM] =
    {
        .height = 14,
        .weight = 3000,
        .description = gGolemPokedexText,
        KANTONIAN_GEODUDE_FAMILY_STATS,
        GOLEM_MISC_STATS,
    },
    [SPECIES_GOLEM_ALOLAN] =
    {
        .height = 17,
        .weight = 3160,
        .description = gGolemAlolanPokedexText,
        ALOLAN_GEODUDE_FAMILY_STATS,
        GOLEM_MISC_STATS,
    },

#define KANTONIAN_PONYTA_FAMILY_STATS                                           \
        .type1 = TYPE_FIRE,                                                     \
        .type2 = TYPE_FIRE,                                                     \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},\
        .bodyColor = BODY_COLOR_YELLOW,                                         \
        .categoryName = _("Fire Horse")

#define PONYTA_FAMILY_MISC_STATS            \
        .genderRatio = PERCENT_FEMALE(50),  \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_FIELD,       \
        .eggGroup2 = EGG_GROUP_FIELD,       \
        .noFlip = FALSE

#define PONYTA_MISC_STATS           \
        .baseHP        = 50,        \
        .baseAttack    = 85,        \
        .baseDefense   = 55,        \
        .baseSpeed     = 90,        \
        .baseSpAttack  = 65,        \
        .baseSpDefense = 65,        \
        .catchRate = 190,           \
        .expYield = 82,             \
        .evYield_Speed     = 1,     \
        PONYTA_FAMILY_MISC_STATS

    [SPECIES_PONYTA] =
    {
        .height = 10,
        .weight = 300,
        .description = gPonytaPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
        KANTONIAN_PONYTA_FAMILY_STATS,
        PONYTA_MISC_STATS,
    },

#define GALARIAN_PONYTA_FAMILY_STATS                                                \
        .type1 = TYPE_PSYCHIC,                                                      \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION}, \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .flags = SPECIES_FLAG_GALARIAN_FORM,                                        \
        .categoryName = _("Unique Horn")

    [SPECIES_PONYTA_GALARIAN] =
    {
        .type2 = TYPE_PSYCHIC,
        .height = 8,
        .weight = 240,
        .description = gDummyPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
        GALARIAN_PONYTA_FAMILY_STATS,
        PONYTA_MISC_STATS,
    },

#define RAPIDASH_MISC_STATS     \
        .baseHP        = 65,    \
        .baseAttack    = 100,   \
        .baseDefense   = 70,    \
        .baseSpeed     = 105,   \
        .baseSpAttack  = 80,    \
        .baseSpDefense = 80,    \
        .catchRate = 60,        \
        .expYield = 175,        \
        .evYield_Speed     = 2, \
        PONYTA_FAMILY_MISC_STATS

    [SPECIES_RAPIDASH] =
    {
        .height = 17,
        .weight = 950,
        .description = gRapidashPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
        KANTONIAN_PONYTA_FAMILY_STATS,
        RAPIDASH_MISC_STATS,
    },
    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .type2 = TYPE_FAIRY,
        .height = 17,
        .weight = 800,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 289,
        .trainerOffset = 1,
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
        .categoryName = _("Dopey"),         \
        .height = 12,                       \
        .weight = 360,                      \
        .pokemonScale = 256,                \
        .pokemonOffset = 10,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

    [SPECIES_SLOWPOKE] =
    {
        .type1 = TYPE_WATER,
        .itemRare = ITEM_LAGGING_TAIL,
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .description = gSlowpokePokedexText,
        SLOWPOKE_MISC_STATS,
    },
    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .type1 = TYPE_PSYCHIC,
        .abilities = {ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        .description = gDummyPokedexText,
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
        .categoryName = _("Hermit Crab")

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
        .height = 16,
        .weight = 785,
        .description = gSlowbroPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
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
        .height = 20,
        .weight = 1200,
        .description = gSlowbroMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
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
        .height = 16,
        .weight = 705,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 296,
        .trainerOffset = 2,
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
        .categoryName = _("Magnet"),
        .height = 3,
        .weight = 60,
        .description = gMagnemitePokedexText,
        .pokemonScale = 288,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Magnet"),
        .height = 10,
        .weight = 600,
        .description = gMagnetonPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wild Duck"),     \
        .height = 8,                        \
        .pokemonScale = 330,                \
        .pokemonOffset = 2,                 \
        .trainerScale = 293,                \
        .trainerOffset = 2

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
        .weight = 150,
        .description = gFarfetchdPokedexText,
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
        .weight = 420,
        .description = gDummyPokedexText,
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
        .categoryName = _("Twin Bird"),
        .height = 14,
        .weight = 392,
        .description = gDoduoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = -1,
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
        .categoryName = _("Triple Bird"),
        .height = 18,
        .weight = 852,
        .description = gDodrioPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
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
        .categoryName = _("Sea Lion"),
        .height = 11,
        .weight = 900,
        .description = gSeelPokedexText,
        .pokemonScale = 297,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Sea Lion"),
        .height = 17,
        .weight = 1200,
        .description = gDewgongPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 275,
        .trainerOffset = 0,
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
        .noFlip = FALSE,                    \
        .categoryName = _("Sludge")

#define GRIMER_MISC_STATS       \
        .baseHP        = 80,    \
        .baseAttack    = 80,    \
        .baseDefense   = 50,    \
        .baseSpeed     = 25,    \
        .baseSpAttack  = 40,    \
        .baseSpDefense = 50,    \
        .catchRate = 190,       \
        .expYield = 65,         \
        .evYield_HP        = 1, \
        GRIMER_FAMILY_MISC_STATS

#define KANTONIAN_GRIMER_FAMILY_STATS                                               \
        .type2 = TYPE_POISON,                                                       \
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH},   \
        .bodyColor = BODY_COLOR_PURPLE

    [SPECIES_GRIMER] =
    {
        .height = 9,
        .weight = 300,
        .description = gGrimerPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 7,
        .weight = 420,
        .description = gGrimerAlolanPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        ALOLAN_GRIMER_FAMILY_STATS,
        GRIMER_MISC_STATS,
    },

#define MUK_MISC_STATS          \
        .baseHP        = 105,   \
        .baseAttack    = 105,   \
        .baseDefense   = 75,    \
        .baseSpeed     = 50,    \
        .baseSpAttack  = 65,    \
        .baseSpDefense = 100,   \
        .catchRate = 75,        \
        .expYield = 175,        \
        .evYield_HP        = 1, \
        .evYield_Attack    = 1, \
        GRIMER_FAMILY_MISC_STATS

    [SPECIES_MUK] =
    {
        .height = 12,
        .weight = 300,
        .description = gMukPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
        KANTONIAN_GRIMER_FAMILY_STATS,
        MUK_MISC_STATS,
    },
    [SPECIES_MUK_ALOLAN] =
    {
        .height = 10,
        .weight = 520,
        .description = gMukAlolanPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bivalve"),
        .height = 3,
        .weight = 40,
        .description = gShellderPokedexText,
        .pokemonScale = 675,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bivalve"),
        .height = 15,
        .weight = 1325,
        .description = gCloysterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 269,
        .trainerOffset = 1,
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
        .categoryName = _("Gas"),
        .height = 13,
        .weight = 1,
        .description = gGastlyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Gas"),
        .height = 16,
        .weight = 1,
        .description = gHaunterPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 293,
        .trainerOffset = 2,
    },

#define GENGAR_MISC_STATS   \
        .type1 = TYPE_GHOST,                                \
        .type2 = TYPE_POISON,                               \
        .catchRate = 45,                                    \
        .evYield_SpAttack  = 3,                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroup1 = EGG_GROUP_AMORPHOUS,                   \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,                   \
        .bodyColor = BODY_COLOR_PURPLE,                     \
        .noFlip = FALSE,                                    \
        .categoryName = _("Shadow"),                        \
        .weight = 405,                                      \
        .pokemonScale = 256,                                \
        .pokemonOffset = 2,                                 \
        .trainerScale = 302,                                \
        .trainerOffset = 2

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
        .height = 15,
        .description = gGengarPokedexText,
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
        .height = 14,
        .description = gGengarMegaPokedexText,
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
        .categoryName = _("Rock Snake"),
        .height = 88,
        .weight = 2100,
        .description = gOnixPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 515,
        .trainerOffset = 14,
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
        .categoryName = _("Hypnosis"),
        .height = 10,
        .weight = 324,
        .description = gDrowzeePokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Hypnosis"),
        .height = 16,
        .weight = 756,
        .description = gHypnoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 257,
        .trainerOffset = 0,
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
        .categoryName = _("River Crab"),
        .height = 4,
        .weight = 65,
        .description = gKrabbyPokedexText,
        .pokemonScale = 469,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Pincer"),
        .height = 13,
        .weight = 600,
        .description = gKinglerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .noFlip = FALSE,                                                        \
        .trainerScale = 256,                                                    \
        .trainerOffset = 0

#define VOLTORB_MISC_STATS      \
        .baseHP        = 40,    \
        .baseAttack    = 30,    \
        .baseDefense   = 50,    \
        .baseSpeed     = 100,   \
        .baseSpAttack  = 55,    \
        .baseSpDefense = 55,    \
        .catchRate = 190,       \
        .expYield = 66,         \
        .evYield_Speed     = 1, \
        .height = 5,            \
        .pokemonScale = 364,    \
        .pokemonOffset = -8,    \
        VOLTORB_FAMILY_MISC_STATS

    [SPECIES_VOLTORB] =
    {
        .type2 = TYPE_ELECTRIC,
        .categoryName = _("Ball"),
        .weight = 104,
        .description = gVoltorbPokedexText,
        VOLTORB_MISC_STATS,
    },
    [SPECIES_VOLTORB_HISUIAN] =
    {
        .type2 = TYPE_GRASS,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        .categoryName = _("Sphere"),
        .weight = 130,
        .description = gDummyPokedexText,
        VOLTORB_MISC_STATS,
    },

#if P_UPDATED_STATS >= GEN_7
    #define ELECTRODE_SPEED 150
#else
    #define ELECTRODE_SPEED 140
#endif

#define ELECTRODE_MISC_STATS   \
        .baseHP        = 60,                                                    \
        .baseAttack    = 50,                                                    \
        .baseDefense   = 70,                                                    \
        .baseSpAttack  = 80,                                                    \
        .baseSpDefense = 80,                                                    \
        .baseSpeed     = ELECTRODE_SPEED,                                       \
        .catchRate = 60,                                                        \
        .expYield = 172,                                                        \
        .evYield_Speed     = 2,                                                 \
        .height = 12,                                                           \
        .pokemonScale = 256,                                                    \
        .pokemonOffset = 0,                                                     \
        VOLTORB_FAMILY_MISC_STATS

    [SPECIES_ELECTRODE] =
    {
        .type2 = TYPE_ELECTRIC,
        .categoryName = _("Ball"),
        .weight = 666,
        .description = gElectrodePokedexText,
        ELECTRODE_MISC_STATS,
    },
    [SPECIES_ELECTRODE_HISUIAN] =
    {
        .type2 = TYPE_GRASS,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        .categoryName = _("Sphere"),
        .weight = 710,
        .description = gDummyPokedexText,
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
        .categoryName = _("Egg"),
        .height = 4,
        .weight = 25,
        .description = gExeggcutePokedexText,
        .pokemonScale = 489,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Coconut")

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
        .height = 20,
        .weight = 1200,
        .description = gExeggutorPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
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
        .height = 109,
        .weight = 4156,
        .description = gExeggutorAlolanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 5,
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
        .categoryName = _("Lonely"),
        .height = 4,
        .weight = 65,
        .description = gCubonePokedexText,
        .pokemonScale = 545,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bone Keeper"),   \
        .height = 10,                       \
        .pokemonScale = 293,                \
        .pokemonOffset = 12,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

    [SPECIES_MAROWAK] =
    {
        .type1 = TYPE_GROUND,
        .type2 = TYPE_GROUND,
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .weight = 450,
        .description = gMarowakPokedexText,
        MAROWAK_MISC_STATS,
    },
    [SPECIES_MAROWAK_ALOLAN] =
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_GHOST,
        .abilities = {ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_PURPLE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
        .weight = 340,
        .description = gMarowakAlolanPokedexText,
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
        .categoryName = _("Kicking"),
        .height = 15,
        .weight = 498,
        .description = gHitmonleePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 259,
        .trainerOffset = 1,
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
        .categoryName = _("Punching"),
        .height = 14,
        .weight = 502,
        .description = gHitmonchanPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 277,
        .trainerOffset = 2,
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
        .categoryName = _("Licking"),
        .height = 12,
        .weight = 655,
        .description = gLickitungPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Gas"),
        .height = 6,
        .weight = 10,
        .description = gKoffingPokedexText,
        .pokemonScale = 369,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Gas"),    \
        .pokemonScale = 305,                \
        .pokemonOffset = 3,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

    [SPECIES_WEEZING] =
    {
        .type2 = TYPE_POISON,
        .itemRare = ITEM_SMOKE_BALL,
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .height = 12,
        .weight = 95,
        .description = gWeezingPokedexText,
        WEEZING_MISC_STATS,
    },
    [SPECIES_WEEZING_GALARIAN] =
    {
        .type2 = TYPE_FAIRY,
        .itemRare = ITEM_MISTY_SEED,
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE},
        .bodyColor = BODY_COLOR_GRAY,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        .height = 30,
        .weight = 160,
        .description = gDummyPokedexText,
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
        .categoryName = _("Spikes"),
        .height = 10,
        .weight = 1150,
        .description = gRhyhornPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Drill"),
        .height = 19,
        .weight = 1200,
        .description = gRhydonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 299,
        .trainerOffset = 2,
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
        .categoryName = _("Egg"),
        .height = 11,
        .weight = 346,
        .description = gChanseyPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Vine"),
        .height = 10,
        .weight = 350,
        .description = gTangelaPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define KANGASKHAN_MISC_STATS               \
        .type1 = TYPE_NORMAL,               \
        .type2 = TYPE_NORMAL,               \
        .catchRate = 45,                    \
        .evYield_HP        = 2,             \
        .genderRatio = MON_FEMALE,          \
        .eggCycles = 20,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_MEDIUM_FAST,   \
        .eggGroup1 = EGG_GROUP_MONSTER,     \
        .eggGroup2 = EGG_GROUP_MONSTER,     \
        .bodyColor = BODY_COLOR_BROWN,      \
        .noFlip = FALSE,                    \
        .categoryName = _("Parent"),        \
        .height = 22,                       \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 387,                \
        .trainerOffset = 8

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
        .weight = 800,
        .description = gKangaskhanPokedexText,
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
        .weight = 1000,
        .description = gKangaskhanMegaPokedexText,
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
        .categoryName = _("Dragon"),
        .height = 4,
        .weight = 80,
        .description = gHorseaPokedexText,
        .pokemonScale = 399,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Dragon"),
        .height = 12,
        .weight = 250,
        .description = gSeadraPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Goldfish"),
        .height = 6,
        .weight = 150,
        .description = gGoldeenPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Goldfish"),
        .height = 13,
        .weight = 390,
        .description = gSeakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Star Shape"),
        .height = 8,
        .weight = 345,
        .description = gStaryuPokedexText,
        .pokemonScale = 326,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mysterious"),
        .height = 11,
        .weight = 800,
        .description = gStarmiePokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .noFlip = FALSE

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
        .categoryName = _("Barrier"),
        .height = 13,
        .weight = 545,
        .description = gMrMimePokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Dancing"),
        .height = 14,
        .weight = 568,
        .description = gDummyPokedexText,
        .pokemonScale = 258,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mantis"),
        .height = 15,
        .weight = 560,
        .description = gScytherPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 293,
        .trainerOffset = 2,
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
        .categoryName = _("Human Shape"),
        .height = 14,
        .weight = 406,
        .description = gJynxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 300,
        .trainerOffset = 1,
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
        .categoryName = _("Electric"),
        .height = 11,
        .weight = 300,
        .description = gElectabuzzPokedexText,
        .pokemonScale = 351,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Spitfire"),
        .height = 13,
        .weight = 445,
        .description = gMagmarPokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define PINSIR_MISC_STATS \
        .type1 = TYPE_BUG,                                      \
        .catchRate = 45,                                        \
        .evYield_Attack    = 2,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 25,                                        \
        .friendship = 70,                                       \
        .growthRate = GROWTH_SLOW,                              \
        .eggGroup1 = EGG_GROUP_BUG,                             \
        .eggGroup2 = EGG_GROUP_BUG,                             \
        .bodyColor = BODY_COLOR_BROWN,                          \
        .noFlip = FALSE,                                        \
        .categoryName = _("Stag Beetle")

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
        .height = 15,
        .weight = 550,
        .description = gPinsirPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
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
        .height = 17,
        .weight = 590,
        .description = gPinsirMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
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
        .categoryName = _("Wild Bull"),
        .height = 14,
        .weight = 884,
        .description = gTaurosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fish"),
        .height = 9,
        .weight = 100,
        .description = gMagikarpPokedexText,
        .pokemonScale = 310,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define GYARADOS_MISC_STATS\
        .type1 = TYPE_WATER,                            \
        .catchRate = 45,                                \
        .evYield_Attack    = 2,                         \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 5,                                 \
        .friendship = 70,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_WATER_2,                 \
        .eggGroup2 = EGG_GROUP_DRAGON,                  \
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE,                                \
        .categoryName = _("Atrocious"),                 \
        .height = 65,                                   \
        .pokemonScale = 256,                            \
        .pokemonOffset = 6,                             \
        .trainerScale = 481,                            \
        .trainerOffset = 13

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
        .weight = 2350,
        .description = gGyaradosPokedexText,
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
        .weight = 3050,
        .description = gGyaradosMegaPokedexText,
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
        .categoryName = _("Transport"),
        .height = 25,
        .weight = 2200,
        .description = gLaprasPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
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
        .categoryName = _("Transform"),
        .height = 3,
        .weight = 40,
        .description = gDittoPokedexText,
        .pokemonScale = 633,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
        .categoryName = _("Evolution"),
        .height = 3,
        .weight = 65,
        .description = gEeveePokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bubble Jet"),
        .height = 10,
        .weight = 290,
        .description = gVaporeonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Lightning"),
        .height = 8,
        .weight = 245,
        .description = gJolteonPokedexText,
        .pokemonScale = 283,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Flame"),
        .height = 9,
        .weight = 250,
        .description = gFlareonPokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Virtual"),
        .height = 8,
        .weight = 365,
        .description = gPorygonPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Spiral"),
        .height = 4,
        .weight = 75,
        .description = gOmanytePokedexText,
        .pokemonScale = 521,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Spiral"),
        .height = 10,
        .weight = 350,
        .description = gOmastarPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Shellfish"),
        .height = 5,
        .weight = 115,
        .description = gKabutoPokedexText,
        .pokemonScale = 454,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Shellfish"),
        .height = 13,
        .weight = 405,
        .description = gKabutopsPokedexText,
        .pokemonScale = 271,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define AERODACTYL_MISC_STATS               \
        .type1 = TYPE_ROCK,                 \
        .type2 = TYPE_FLYING,               \
        .catchRate = 45,                    \
        .evYield_Speed     = 2,             \
        .genderRatio = PERCENT_FEMALE(12.5),\
        .eggCycles = 35,                    \
        .friendship = 70,                   \
        .growthRate = GROWTH_SLOW,          \
        .eggGroup1 = EGG_GROUP_FLYING,      \
        .eggGroup2 = EGG_GROUP_FLYING,      \
        .bodyColor = BODY_COLOR_PURPLE,     \
        .noFlip = FALSE,                    \
        .categoryName = _("Fossil"),        \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 302,                \
        .trainerOffset = 4

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
        .height = 18,
        .weight = 590,
        .description = gAerodactylPokedexText,
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
        .height = 21,
        .weight = 790,
        .description = gAerodactylMegaPokedexText,
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
        .categoryName = _("Sleeping"),
        .height = 21,
        .weight = 4600,
        .description = gSnorlaxPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
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
        .height = 17,                       \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 309,                \
        .trainerOffset = 2

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
        .categoryName = _("Freeze"),
        .weight = 554,
        .description = gArticunoPokedexText,
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
        .categoryName = _("Cruel"),
        .weight = 509,
        .description = gDummyPokedexText,
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
        .height = 16,                       \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 318,                \
        .trainerOffset = 3

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
        .categoryName = _("Electric"),
        .weight = 526,
        .description = gZapdosPokedexText,
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
        .categoryName = _("Strong Legs"),
        .weight = 582,
        .description = gDummyPokedexText,
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
        .height = 20,                       \
        .pokemonScale = 270,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 387,                \
        .trainerOffset = 8

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
        .categoryName = _("Flame"),
        .weight = 600,
        .description = gMoltresPokedexText,
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
        .categoryName = _("Malevolent"),
        .weight = 600,
        .description = gDummyPokedexText,
        MOLTRES_MISC_STATS,
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
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 33,
        .description = gDratiniPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 8,
        .trainerScale = 386,
        .trainerOffset = 6,
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
        .categoryName = _("Dragon"),
        .height = 40,
        .weight = 165,
        .description = gDragonairPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 411,
        .trainerOffset = 5,
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
        .categoryName = _("Dragon"),
        .height = 22,
        .weight = 2100,
        .description = gDragonitePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 309,
        .trainerOffset = 4,
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
        .categoryName = _("Genetic"),       \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 309,                \
        .trainerOffset = 4

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
        .height = 20,
        .weight = 1220,
        .description = gMewtwoPokedexText,
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
        .height = 23,
        .weight = 1270,
        .description = gMewtwoMegaXPokedexText,
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
        .height = 15,
        .weight = 330,
        .description = gMewtwoMegaYPokedexText,
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
        .categoryName = _("New Species"),
        .height = 4,
        .weight = 40,
        .description = gMewPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Leaf"),
        .height = 9,
        .weight = 64,
        .description = gChikoritaPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Leaf"),
        .height = 12,
        .weight = 158,
        .description = gBayleefPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Herb"),
        .height = 18,
        .weight = 1005,
        .description = gMeganiumPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
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
        .categoryName = _("Fire Mouse"),
        .height = 5,
        .weight = 79,
        .description = gCyndaquilPokedexText,
        .pokemonScale = 539,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Volcano"),
        .height = 9,
        .weight = 190,
        .description = gQuilavaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .noFlip = FALSE

    [SPECIES_TYPHLOSION] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .type2 = TYPE_FIRE,
        .categoryName = _("Volcano"),
        .height = 17,
        .weight = 795,
        .description = gTyphlosionPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
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
        .categoryName = _("Ghost Flame"),
        .height = 16,
        .weight = 698,
        .description = gDummyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
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
        .categoryName = _("Big Jaw"),
        .height = 6,
        .weight = 95,
        .description = gTotodilePokedexText,
        .pokemonScale = 487,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Big Jaw"),
        .height = 11,
        .weight = 250,
        .description = gCroconawPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Big Jaw"),
        .height = 23,
        .weight = 888,
        .description = gFeraligatrPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
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
        .categoryName = _("Scout"),
        .height = 8,
        .weight = 60,
        .description = gSentretPokedexText,
        .pokemonScale = 439,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Long Body"),
        .height = 18,
        .weight = 325,
        .description = gFurretPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Owl"),
        .height = 7,
        .weight = 212,
        .description = gHoothootPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Owl"),
        .height = 16,
        .weight = 408,
        .description = gNoctowlPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Five Star"),
        .height = 10,
        .weight = 108,
        .description = gLedybaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Five Star"),
        .height = 14,
        .weight = 356,
        .description = gLedianPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("String Spit"),
        .height = 5,
        .weight = 85,
        .description = gSpinarakPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Long Leg"),
        .height = 11,
        .weight = 335,
        .description = gAriadosPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bat"),
        .height = 18,
        .weight = 750,
        .description = gCrobatPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 281,
        .trainerOffset = 1,
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
        .categoryName = _("Angler"),
        .height = 5,
        .weight = 120,
        .description = gChinchouPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Light"),
        .height = 12,
        .weight = 225,
        .description = gLanturnPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define PICHU_BASE_STATS(flip)                                             \
    {                                                                      \
        .baseHP        = 20,                                               \
        .baseAttack    = 40,                                               \
        .baseDefense   = 15,                                               \
        .baseSpeed     = 60,                                               \
        .baseSpAttack  = 35,                                               \
        .baseSpDefense = 35,                                               \
        .type1 = TYPE_ELECTRIC,                                            \
        .type2 = TYPE_ELECTRIC,                                            \
        .catchRate = 190,                                                  \
        .expYield = 41,                                                    \
        .evYield_Speed     = 1,                                            \
        .genderRatio = PERCENT_FEMALE(50),                                 \
        .eggCycles = 10,                                                   \
        .friendship = 70,                                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                               \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                               \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},\
        .bodyColor = BODY_COLOR_YELLOW,                                    \
        .noFlip = flip,                                                    \
        .categoryName = _("Tiny Mouse"),                                   \
        .height = 3,                                                       \
        .weight = 20,                                                      \
        .description = gPichuPokedexText,                                  \
        .pokemonScale = 508,                                               \
        .pokemonOffset = 20,                                               \
        .trainerScale = 256,                                               \
        .trainerOffset = 0,                                                \
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
        .categoryName = _("Star Shape"),
        .height = 3,
        .weight = 30,
        .description = gCleffaPokedexText,
        .pokemonScale = 462,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Balloon"),
        .height = 3,
        .weight = 10,
        .description = gIgglybuffPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Spike Ball"),
        .height = 3,
        .weight = 15,
        .description = gTogepiPokedexText,
        .pokemonScale = 507,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Happiness"),
        .height = 6,
        .weight = 32,
        .description = gTogeticPokedexText,
        .pokemonScale = 424,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tiny Bird"),
        .height = 2,
        .weight = 20,
        .description = gNatuPokedexText,
        .pokemonScale = 610,
        .pokemonOffset = 25,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mystic"),
        .height = 15,
        .weight = 150,
        .description = gXatuPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 318,
        .trainerOffset = 4,
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
        .categoryName = _("Wool"),
        .height = 6,
        .weight = 78,
        .description = gMareepPokedexText,
        .pokemonScale = 379,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wool"),
        .height = 8,
        .weight = 133,
        .description = gFlaaffyPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Light"),         \
        .height = 14,                       \
        .weight = 615,                      \
        .pokemonScale = 256,                \
        .pokemonOffset = 4,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .description = gAmpharosPokedexText,
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
        .description = gAmpharosMegaPokedexText,
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
        .categoryName = _("Flower"),
        .height = 4,
        .weight = 58,
        .description = gBellossomPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Aqua Mouse"),
        .height = 4,
        .weight = 85,
        .description = gMarillPokedexText,
        .pokemonScale = 476,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Aqua Rabbit"),
        .height = 8,
        .weight = 285,
        .description = gAzumarillPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Imitation"),
        .height = 12,
        .weight = 380,
        .description = gSudowoodoPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Frog"),
        .height = 11,
        .weight = 339,
        .description = gPolitoedPokedexText,
        .pokemonScale = 289,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cottonweed"),
        .height = 4,
        .weight = 5,
        .description = gHoppipPokedexText,
        .pokemonScale = 562,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cottonweed"),
        .height = 6,
        .weight = 10,
        .description = gSkiploomPokedexText,
        .pokemonScale = 387,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cottonweed"),
        .height = 8,
        .weight = 30,
        .description = gJumpluffPokedexText,
        .pokemonScale = 418,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Long Tail"),
        .height = 8,
        .weight = 115,
        .description = gAipomPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Seed"),
        .height = 3,
        .weight = 18,
        .description = gSunkernPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Sun"),
        .height = 8,
        .weight = 85,
        .description = gSunfloraPokedexText,
        .pokemonScale = 444,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Clear Wing"),
        .height = 12,
        .weight = 380,
        .description = gYanmaPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Water Fish"),
        .height = 4,
        .weight = 85,
        .description = gWooperPokedexText,
        .pokemonScale = 479,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Water Fish"),
        .height = 14,
        .weight = 750,
        .description = gQuagsirePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Sun"),
        .height = 9,
        .weight = 265,
        .description = gEspeonPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Moonlight"),
        .height = 10,
        .weight = 270,
        .description = gUmbreonPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Darkness"),
        .height = 5,
        .weight = 21,
        .description = gMurkrowPokedexText,
        .pokemonScale = 401,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 1,
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
        .weight = 795,                      \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 309,                \
        .trainerOffset = 5

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
        .categoryName = _("Royal"),
        .height = 20,
        .description = gSlowkingPokedexText,
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
        .categoryName = _("Hexpert"),
        .height = 18,
        .description = gDummyPokedexText,
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
        .categoryName = _("Screech"),
        .height = 7,
        .weight = 10,
        .description = gMisdreavusPokedexText,
        .pokemonScale = 407,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Symbol"),                    \
        .height = 5,                                    \
        .weight = 50,                                   \
        .description = gUnownPokedexText,               \
        .pokemonScale = 411,                            \
        .pokemonOffset = 2,                             \
        .trainerScale = 256,                            \
        .trainerOffset = 0,                             \
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
        .categoryName = _("Patient"),
        .height = 13,
        .weight = 285,
        .description = gWobbuffetPokedexText,
        .pokemonScale = 274,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Long Neck"),
        .height = 15,
        .weight = 415,
        .description = gGirafarigPokedexText,
        .pokemonScale = 281,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bagworm"),
        .height = 6,
        .weight = 72,
        .description = gPinecoPokedexText,
        .pokemonScale = 445,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bagworm"),
        .height = 12,
        .weight = 1258,
        .description = gForretressPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Land Snake"),
        .height = 15,
        .weight = 140,
        .description = gDunsparcePokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fly Scorpion"),
        .height = 11,
        .weight = 648,
        .description = gGligarPokedexText,
        .pokemonScale = 350,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Iron Snake"),    \
        .description = gSteelixPokedexText, \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 516,                \
        .trainerOffset = 13

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
        .height = 92,
        .weight = 4000,
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
        .height = 105,
        .weight = 7400,
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
        .categoryName = _("Fairy"),
        .height = 6,
        .weight = 78,
        .description = gSnubbullPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fairy"),
        .height = 14,
        .weight = 487,
        .description = gGranbullPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Balloon"),                                               \
        .height = 5,                                                                \
        .weight = 39,                                                               \
        .pokemonScale = 430,                                                        \
        .pokemonOffset = 0,                                                         \
        .trainerScale = 256,                                                        \
        .trainerOffset = 0

    [SPECIES_QWILFISH] =
    {
        .type1 = TYPE_WATER,
        .description = gQwilfishPokedexText,
        QWILFISH_BASE_STATS,
    },
    [SPECIES_QWILFISH_HISUIAN] =
    {
        .type1 = TYPE_POISON,
        .description = gDummyPokedexText,
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        QWILFISH_BASE_STATS,
    },

#define SCIZOR_MISC_STATS   \
        .type1 = TYPE_BUG,                                  \
        .type2 = TYPE_STEEL,                                \
        .catchRate = 25,                                    \
        .evYield_Attack    = 2,                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 25,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroup1 = EGG_GROUP_BUG,                         \
        .eggGroup2 = EGG_GROUP_BUG,                         \
        .bodyColor = BODY_COLOR_RED,                        \
        .noFlip = FALSE,                                    \
        .categoryName = _("Pincer")

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
        .height = 18,
        .weight = 1180,
        .description = gScizorPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 20,
        .weight = 1250,
        .description = gScizorMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 388,
        .trainerOffset = 6,
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
        .categoryName = _("Mold"),
        .height = 6,
        .weight = 205,
        .description = gShucklePokedexText,
        .pokemonScale = 485,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Single Horn")

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
        .height = 15,
        .weight = 540,
        .description = gHeracrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 17,
        .weight = 625,
        .description = gHeracrossMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 1,
        .trainerScale = 273,
        .trainerOffset = 1,
        HERACROSS_MISC_STATS,
    },

#define SNEASEL_BASE_STATS                   \
        .baseHP        = 55,                                            \
        .baseAttack    = 95,                                            \
        .baseDefense   = 55,                                            \
        .baseSpeed     = 115,                                           \
        .baseSpAttack  = 35,                                            \
        .baseSpDefense = 75,                                            \
        .catchRate = 60,                                                \
        .expYield = 86,                                                 \
        .evYield_Speed     = 1,                                         \
        .itemRare = ITEM_QUICK_CLAW,                                    \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 20,                                                \
        .friendship = 35,                                               \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroup1 = EGG_GROUP_FIELD,                                   \
        .eggGroup2 = EGG_GROUP_FIELD,                                   \
        .bodyColor = BODY_COLOR_BLACK,                                  \
        .noFlip = TRUE,                                                 \
        .categoryName = _("Sharp Claw"),                                \
        .height = 9,                                                    \
        .pokemonScale = 413,                                            \
        .pokemonOffset = -3,                                            \
        .trainerScale = 256,                                            \
        .trainerOffset = 0

    [SPECIES_SNEASEL] =
    {
        .type1 = TYPE_DARK,
        .type2 = TYPE_DARK,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET},
        .weight = 280,
        .description = gSneaselPokedexText,
        SNEASEL_BASE_STATS,
    },
    [SPECIES_SNEASEL_HISUIAN] =
    {
        .type1 = TYPE_POISON,
        .type2 = TYPE_FIGHTING,
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_POISON_TOUCH},
	    .flags = SPECIES_FLAG_HISUIAN_FORM,
        .weight = 270,
        .description = gDummyPokedexText,
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
        .categoryName = _("Little Bear"),
        .height = 6,
        .weight = 88,
        .description = gTeddiursaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Hibernator"),
        .height = 18,
        .weight = 1258,
        .description = gUrsaringPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Lava"),
        .height = 7,
        .weight = 350,
        .description = gSlugmaPokedexText,
        .pokemonScale = 329,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Lava"),
        .height = 8,
        .weight = 550,
        .description = gMagcargoPokedexText,
        .pokemonScale = 332,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Pig"),
        .height = 4,
        .weight = 65,
        .description = gSwinubPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Swine"),
        .height = 11,
        .weight = 558,
        .description = gPiloswinePokedexText,
        .pokemonScale = 306,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Coral"),         \
        .height = 6,                        \
        .pokemonScale = 410,                \
        .pokemonOffset = 15,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .weight = 50,
        .description = gCorsolaPokedexText,
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
        .weight = 5,
        .description = gDummyPokedexText,
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
        .categoryName = _("Jet"),
        .height = 6,
        .weight = 120,
        .description = gRemoraidPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Jet"),
        .height = 9,
        .weight = 285,
        .description = gOctilleryPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Delivery"),
        .height = 9,
        .weight = 160,
        .description = gDelibirdPokedexText,
        .pokemonScale = 293,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Kite"),
        .height = 21,
        .weight = 2200,
        .description = gMantinePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
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
        .categoryName = _("Armor Bird"),
        .height = 17,
        .weight = 505,
        .description = gSkarmoryPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 1,
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
        .categoryName = _("Dark"),
        .height = 6,
        .weight = 108,
        .description = gHoundourPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define HOUNDOOM_MISC_STATS \
        .type1 = TYPE_DARK,                                 \
        .type2 = TYPE_FIRE,                                 \
        .catchRate = 45,                                    \
        .evYield_SpAttack  = 2,                             \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 35,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_FIELD,                       \
        .eggGroup2 = EGG_GROUP_FIELD,                       \
        .bodyColor = BODY_COLOR_BLACK,                      \
        .noFlip = FALSE,                                    \
        .categoryName = _("Dark"),                          \
        .trainerScale = 256,                                \
        .trainerOffset = 0

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
        .height = 14,
        .weight = 350,
        .description = gHoundoomPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
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
        .height = 19,
        .weight = 495,
        .description = gHoundoomMegaPokedexText,
        .pokemonScale = 346,
        .pokemonOffset = 14,
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
        .categoryName = _("Dragon"),
        .height = 18,
        .weight = 1520,
        .description = gKingdraPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 287,
        .trainerOffset = 0,
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
        .categoryName = _("Long Nose"),
        .height = 5,
        .weight = 335,
        .description = gPhanpyPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Armor"),
        .height = 11,
        .weight = 1200,
        .description = gDonphanPokedexText,
        .pokemonScale = 313,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Virtual"),
        .height = 6,
        .weight = 325,
        .description = gPorygon2PokedexText,
        .pokemonScale = 320,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Big Horn"),
        .height = 14,
        .weight = 712,
        .description = gStantlerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Painter"),
        .height = 12,
        .weight = 580,
        .description = gSmearglePokedexText,
        .pokemonScale = 287,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Scuffle"),
        .height = 7,
        .weight = 210,
        .description = gTyroguePokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Handstand"),
        .height = 14,
        .weight = 480,
        .description = gHitmontopPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 257,
        .trainerOffset = 0,
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
        .categoryName = _("Kiss"),
        .height = 4,
        .weight = 60,
        .description = gSmoochumPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Electric"),
        .height = 6,
        .weight = 235,
        .description = gElekidPokedexText,
        .pokemonScale = 363,
        .pokemonOffset = 14,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Live Coal"),
        .height = 7,
        .weight = 214,
        .description = gMagbyPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Milk Cow"),
        .height = 12,
        .weight = 755,
        .description = gMiltankPokedexText,
        .pokemonScale = 280,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Happiness"),
        .height = 15,
        .weight = 468,
        .description = gBlisseyPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 310,
        .trainerOffset = 3,
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
        .categoryName = _("Thunder"),
        .height = 19,
        .weight = 1780,
        .description = gRaikouPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
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
        .categoryName = _("Volcano"),
        .height = 21,
        .weight = 1980,
        .description = gEnteiPokedexText,
        .pokemonScale = 259,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
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
        .categoryName = _("Aurora"),
        .height = 20,
        .weight = 1870,
        .description = gSuicunePokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
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
        .categoryName = _("Rock Skin"),
        .height = 6,
        .weight = 720,
        .description = gLarvitarPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Hard Shell"),
        .height = 12,
        .weight = 1520,
        .description = gPupitarPokedexText,
        .pokemonScale = 292,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define TYRANITAR_MISC_STATS                         \
        .type1 = TYPE_ROCK,                                         \
        .type2 = TYPE_DARK,                                         \
        .catchRate = 45,                                            \
        .evYield_Attack    = 3,                                     \
        .genderRatio = PERCENT_FEMALE(50),                          \
        .eggCycles = 40,                                            \
        .friendship = 35,                                           \
        .growthRate = GROWTH_SLOW,                                  \
        .eggGroup1 = EGG_GROUP_MONSTER,                             \
        .eggGroup2 = EGG_GROUP_MONSTER,                             \
        .bodyColor = BODY_COLOR_GREEN,                              \
        .noFlip = FALSE,                                            \
        .categoryName = _("Armor")

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
        .height = 20,
        .weight = 2020,
        .description = gTyranitarPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 345,
        .trainerOffset = 7,
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
        .height = 25,
        .weight = 2550,
        .description = gTyranitarMegaPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
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
        .categoryName = _("Diving"),
        .height = 52,
        .weight = 2160,
        .description = gLugiaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 721,
        .trainerOffset = 19,
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
        .categoryName = _("Rainbow"),
        .height = 38,
        .weight = 1990,
        .description = gHoOhPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 610,
        .trainerOffset = 17,
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
        .categoryName = _("Time Travel"),
        .height = 6,
        .weight = 50,
        .description = gCelebiPokedexText,
        .pokemonScale = 393,
        .pokemonOffset = -10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wood Gecko"),
        .height = 5,
        .weight = 50,
        .description = gTreeckoPokedexText,
        .pokemonScale = 541,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wood Gecko"),
        .height = 9,
        .weight = 216,
        .description = gGrovylePokedexText,
        .pokemonScale = 360,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Forest"),        \
        .weight = 522,                      \
        .description = gSceptilePokedexText,\
        .pokemonScale = 256,                \
        .pokemonOffset = -1,                \
        .trainerScale = 275,                \
        .trainerOffset = 2

    [SPECIES_SCEPTILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .type2 = TYPE_GRASS,
        .height = 17,
        .expYield = 239,
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
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
        .height = 19,
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
        .categoryName = _("Chick"),
        .height = 4,
        .weight = 25,
        .description = gTorchicPokedexText,
        .pokemonScale = 566,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Young Fowl"),
        .height = 9,
        .weight = 195,
        .description = gCombuskenPokedexText,
        .pokemonScale = 343,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define BLAZIKEN_MISC_STATS                           \
        .type1 = TYPE_FIRE,                                         \
        .type2 = TYPE_FIGHTING,                                     \
        .catchRate = 45,                                            \
        .evYield_Attack    = 3,                                     \
        .genderRatio = PERCENT_FEMALE(12.5),                        \
        .eggCycles = 20,                                            \
        .friendship = 70,                                           \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroup1 = EGG_GROUP_FIELD,                               \
        .eggGroup2 = EGG_GROUP_FIELD,                               \
        .bodyColor = BODY_COLOR_RED,                                \
        .noFlip = FALSE,                                            \
        .categoryName = _("Blaze"),                                 \
        .height = 19,                                               \
        .weight = 520,                                              \
        .description = gBlazikenPokedexText,                        \
        .pokemonScale = 256,                                        \
        .pokemonOffset = 0,                                         \
        .trainerScale = 301,                                        \
        .trainerOffset = 4

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
        .categoryName = _("Mud Fish"),
        .height = 4,
        .weight = 76,
        .description = gMudkipPokedexText,
        .pokemonScale = 535,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mud Fish"),
        .height = 7,
        .weight = 280,
        .description = gMarshtompPokedexText,
        .pokemonScale = 340,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mud Fish"),      \
        .description = gSwampertPokedexText,\
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .height = 15,
        .weight = 819,
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
        .height = 19,
        .weight = 1020,
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
        .categoryName = _("Bite"),
        .height = 5,
        .weight = 136,
        .description = gPoochyenaPokedexText,
        .pokemonScale = 481,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bite"),
        .height = 10,
        .weight = 370,
        .description = gMightyenaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tiny Raccoon"),                                  \
        .height = 4,                                                        \
        .weight = 175,                                                      \
        .pokemonScale = 560,                                                \
        .pokemonOffset = 22,                                                \
        .trainerScale = 256,                                                \
        .trainerOffset = 0


    [SPECIES_ZIGZAGOON] =
    {
        .type1 = TYPE_NORMAL,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .bodyColor = BODY_COLOR_BROWN,
        .description = gZigzagoonPokedexText,
        ZIGZAGOON_MISC_STATS,
    },
    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .type1 = TYPE_DARK,
        .bodyColor = BODY_COLOR_WHITE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        .description = gDummyPokedexText,
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
        .categoryName = _("Rushing"),                                       \
        .height = 5,                                                        \
        .weight = 325,                                                      \
        .pokemonScale = 321,                                                \
        .pokemonOffset = 7,                                                 \
        .trainerScale = 256,                                                \
        .trainerOffset = 0

    [SPECIES_LINOONE] =
    {
        .type1 = TYPE_NORMAL,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        .description = gLinoonePokedexText,
        LINOONE_MISC_STATS,
    },
    [SPECIES_LINOONE_GALARIAN] =
    {
        .type1 = TYPE_DARK,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
        .description = gDummyPokedexText,
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
        .categoryName = _("Worm"),
        .height = 3,
        .weight = 36,
        .description = gWurmplePokedexText,
        .pokemonScale = 711,
        .pokemonOffset = 24,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cocoon"),
        .height = 6,
        .weight = 100,
        .description = gSilcoonPokedexText,
        .pokemonScale = 431,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Butterfly"),
        .height = 10,
        .weight = 284,
        .description = gBeautiflyPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cocoon"),
        .height = 7,
        .weight = 115,
        .description = gCascoonPokedexText,
        .pokemonScale = 391,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Moth"),
        .height = 12,
        .weight = 316,
        .description = gDustoxPokedexText,
        .pokemonScale = 269,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Water Weed"),
        .height = 5,
        .weight = 26,
        .description = gLotadPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Jolly"),
        .height = 12,
        .weight = 325,
        .description = gLombrePokedexText,
        .pokemonScale = 277,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Carefree"),
        .height = 15,
        .weight = 550,
        .description = gLudicoloPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = -1,
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
        .categoryName = _("Acorn"),
        .height = 5,
        .weight = 40,
        .description = gSeedotPokedexText,
        .pokemonScale = 472,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wily"),
        .height = 10,
        .weight = 280,
        .description = gNuzleafPokedexText,
        .pokemonScale = 299,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wicked"),
        .height = 13,
        .weight = 596,
        .description = gShiftryPokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tiny Swallow"),
        .height = 3,
        .weight = 23,
        .description = gTaillowPokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Swallow"),
        .height = 7,
        .weight = 198,
        .description = gSwellowPokedexText,
        .pokemonScale = 428,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Seagull"),
        .height = 6,
        .weight = 95,
        .description = gWingullPokedexText,
        .pokemonScale = 295,
        .pokemonOffset = -2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Water Bird"),
        .height = 12,
        .weight = 280,
        .description = gPelipperPokedexText,
        .pokemonScale = 288,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = gRaltsPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Emotion"),
        .height = 8,
        .weight = 202,
        .description = gKirliaPokedexText,
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Embrace"),           \
        .height = 16,                           \
        .weight = 484,                          \
        .description = gGardevoirPokedexText,   \
        .pokemonScale = 256,                    \
        .pokemonOffset = 0,                     \
        .trainerScale = 256,                    \
        .trainerOffset = 0

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
        .categoryName = _("Pond Skater"),
        .height = 5,
        .weight = 17,
        .description = gSurskitPokedexText,
        .pokemonScale = 375,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Eyeball"),
        .height = 8,
        .weight = 36,
        .description = gMasquerainPokedexText,
        .pokemonScale = 378,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mushroom"),
        .height = 4,
        .weight = 45,
        .description = gShroomishPokedexText,
        .pokemonScale = 513,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mushroom"),
        .height = 12,
        .weight = 392,
        .description = gBreloomPokedexText,
        .pokemonScale = 324,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Slacker"),
        .height = 8,
        .weight = 240,
        .description = gSlakothPokedexText,
        .pokemonScale = 291,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Wild Monkey"),
        .height = 14,
        .weight = 465,
        .description = gVigorothPokedexText,
        .pokemonScale = 301,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Lazy"),
        .height = 20,
        .weight = 1305,
        .description = gSlakingPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 300,
        .trainerOffset = 1,
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
        .categoryName = _("Trainee"),
        .height = 5,
        .weight = 55,
        .description = gNincadaPokedexText,
        .pokemonScale = 405,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Ninja"),
        .height = 8,
        .weight = 120,
        .description = gNinjaskPokedexText,
        .pokemonScale = 383,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Shed"),
        .height = 8,
        .weight = 12,
        .description = gShedinjaPokedexText,
        .pokemonScale = 372,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Whisper"),
        .height = 6,
        .weight = 163,
        .description = gWhismurPokedexText,
        .pokemonScale = 373,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Big Voice"),
        .height = 10,
        .weight = 405,
        .description = gLoudredPokedexText,
        .pokemonScale = 356,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Loud Noise"),
        .height = 15,
        .weight = 840,
        .description = gExploudPokedexText,
        .pokemonScale = 284,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Guts"),
        .height = 10,
        .weight = 864,
        .description = gMakuhitaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Arm Thrust"),
        .height = 23,
        .weight = 2538,
        .description = gHariyamaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 343,
        .trainerOffset = 7,
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
        .categoryName = _("Polka Dot"),
        .height = 2,
        .weight = 20,
        .description = gAzurillPokedexText,
        .pokemonScale = 603,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Compass"),
        .height = 10,
        .weight = 970,
        .description = gNosepassPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 9,
        .trainerScale = 289,
        .trainerOffset = 3,
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
        .categoryName = _("Kitten"),
        .height = 6,
        .weight = 110,
        .description = gSkittyPokedexText,
        .pokemonScale = 492,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Prim"),
        .height = 11,
        .weight = 326,
        .description = gDelcattyPokedexText,
        .pokemonScale = 322,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Darkness"),      \
        .height = 5,                        \
        .pokemonScale = 451,                \
        .pokemonOffset = 17,                \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .weight = 110,
        .description = gSableyePokedexText,
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
        .weight = 1610,
        .description = gSableyeMegaPokedexText,
        SABLEYE_MISC_STATS,
    },

#if P_UPDATED_TYPES >= GEN_6
    #define MAWILE_TYPE_2 TYPE_FAIRY
#else
    #define MAWILE_TYPE_2 TYPE_STEEL
#endif

#define MAWILE_MISC_STATS   \
        .type1 = TYPE_STEEL,                                \
        .type2 = MAWILE_TYPE_2,                             \
        .catchRate = 45,                                    \
        .evYield_Attack    = 1,                             \
        .evYield_Defense   = 1,                             \
        .itemRare = ITEM_IRON_BALL,                         \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 20,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_FAST,                          \
        .eggGroup1 = EGG_GROUP_FIELD,                       \
        .eggGroup2 = EGG_GROUP_FAIRY,                       \
        .bodyColor = BODY_COLOR_BLACK,                      \
        .noFlip = FALSE,                                    \
        .categoryName = _("Deceiver")

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
        .height = 6,
        .weight = 115,
        .description = gMawilePokedexText,
        .pokemonScale = 466,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 10,
        .weight = 235,
        .description = gMawileMegaPokedexText,
        .pokemonScale = 335,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Iron Armor"),
        .height = 4,
        .weight = 600,
        .description = gAronPokedexText,
        .pokemonScale = 419,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Iron Armor"),
        .height = 9,
        .weight = 1200,
        .description = gLaironPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Iron Armor"),    \
        .description = gAggronPokedexText

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
        .height = 21,
        .weight = 3600,
        .pokemonScale = 256,
        .pokemonOffset = -1,
        .trainerScale = 350,
        .trainerOffset = 6,
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
        .height = 22,
        .weight = 3950,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 387,
        .trainerOffset = 8,
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
        .categoryName = _("Meditate"),
        .height = 6,
        .weight = 112,
        .description = gMedititePokedexText,
        .pokemonScale = 465,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Meditate"),      \
        .height = 13,                       \
        .weight = 315,                      \
        .description = gMedichamPokedexText,\
        .pokemonScale = 298,                \
        .pokemonOffset = 5,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .categoryName = _("Lightning"),
        .height = 6,
        .weight = 152,
        .description = gElectrikePokedexText,
        .pokemonScale = 290,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Discharge")

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
        .height = 18,
        .weight = 440,
        .description = gManectricMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
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
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = gPluslePokedexText,
        .pokemonScale = 515,
        .pokemonOffset = -9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cheering"),
        .height = 4,
        .weight = 42,
        .description = gMinunPokedexText,
        .pokemonScale = 512,
        .pokemonOffset = -7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Firefly"),
        .height = 7,
        .weight = 177,
        .description = gVolbeatPokedexText,
        .pokemonScale = 442,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Firefly"),
        .height = 6,
        .weight = 177,
        .description = gIllumisePokedexText,
        .pokemonScale = 572,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Thorn"),
        .height = 3,
        .weight = 20,
        .description = gRoseliaPokedexText,
        .pokemonScale = 677,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Stomach"),
        .height = 4,
        .weight = 103,
        .description = gGulpinPokedexText,
        .pokemonScale = 593,
        .pokemonOffset = 23,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Poison Bag"),
        .height = 17,
        .weight = 800,
        .description = gSwalotPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 345,
        .trainerOffset = 3,
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
        .categoryName = _("Savage"),
        .height = 8,
        .weight = 208,
        .description = gCarvanhaPokedexText,
        .pokemonScale = 362,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Brutal")

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
        .height = 18,
        .weight = 888,
        .description = gSharpedoPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 317,
        .trainerOffset = 3,
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
        .height = 25,
        .weight = 1303,
        .description = gSharpedoMegaPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
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
        .categoryName = _("Ball Whale"),
        .height = 20,
        .weight = 1300,
        .description = gWailmerPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 493,
        .trainerOffset = 0,
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
        .categoryName = _("Float Whale"),
        .height = 145,
        .weight = 3980,
        .description = gWailordPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 1352,
        .trainerOffset = 18,
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
        .categoryName = _("Numb"),
        .height = 7,
        .weight = 240,
        .description = gNumelPokedexText,
        .pokemonScale = 342,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Eruption"),      \
        .description = gCameruptPokedexText

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
        .height = 25,
        .weight = 3205,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
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
        .categoryName = _("Coal"),
        .height = 5,
        .weight = 804,
        .description = gTorkoalPokedexText,
        .pokemonScale = 390,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bounce"),
        .height = 7,
        .weight = 306,
        .description = gSpoinkPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Manipulate"),
        .height = 9,
        .weight = 715,
        .description = gGrumpigPokedexText,
        .pokemonScale = 358,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Spot Panda"),
        .height = 11,
        .weight = 50,
        .description = gSpindaPokedexText,
        .pokemonScale = 321,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Ant Pit"),
        .height = 7,
        .weight = 150,
        .description = gTrapinchPokedexText,
        .pokemonScale = 298,
        .pokemonOffset = 17,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Vibration"),
        .height = 11,
        .weight = 153,
        .description = gVibravaPokedexText,
        .pokemonScale = 370,
        .pokemonOffset = 11,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Mystic"),
        .height = 20,
        .weight = 820,
        .description = gFlygonPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 1,
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
        .categoryName = _("Cactus"),
        .height = 4,
        .weight = 513,
        .description = gCacneaPokedexText,
        .pokemonScale = 455,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Scarecrow"),
        .height = 13,
        .weight = 774,
        .description = gCacturnePokedexText,
        .pokemonScale = 327,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cotton Bird"),
        .height = 4,
        .weight = 12,
        .description = gSwabluPokedexText,
        .pokemonScale = 422,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Humming"),       \
        .description = gAltariaPokedexText

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
        .height = 11,
        .weight = 206,
        .pokemonScale = 327,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 15,
        .weight = 206,
        .pokemonScale = 269,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Cat Ferret"),
        .height = 13,
        .weight = 403,
        .description = gZangoosePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Fang Snake"),
        .height = 27,
        .weight = 525,
        .description = gSeviperPokedexText,
        .pokemonScale = 275,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Meteorite"),
        .height = 10,
        .weight = 1680,
        .description = gLunatonePokedexText,
        .pokemonScale = 300,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Meteorite"),
        .height = 12,
        .weight = 1540,
        .description = gSolrockPokedexText,
        .pokemonScale = 328,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Whiskers"),
        .height = 4,
        .weight = 19,
        .description = gBarboachPokedexText,
        .pokemonScale = 581,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Whiskers"),
        .height = 9,
        .weight = 236,
        .description = gWhiscashPokedexText,
        .pokemonScale = 317,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Ruffian"),
        .height = 6,
        .weight = 115,
        .description = gCorphishPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Rogue"),
        .height = 11,
        .weight = 328,
        .description = gCrawdauntPokedexText,
        .pokemonScale = 365,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Clay Doll"),
        .height = 5,
        .weight = 215,
        .description = gBaltoyPokedexText,
        .pokemonScale = 457,
        .pokemonOffset = 21,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Clay Doll"),
        .height = 15,
        .weight = 1080,
        .description = gClaydolPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 280,
        .trainerOffset = 1,
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
        .categoryName = _("Sea Lily"),
        .height = 10,
        .weight = 238,
        .description = gLileepPokedexText,
        .pokemonScale = 305,
        .pokemonOffset = 8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Barnacle"),
        .height = 15,
        .weight = 604,
        .description = gCradilyPokedexText,
        .pokemonScale = 267,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Old Shrimp"),
        .height = 7,
        .weight = 125,
        .description = gAnorithPokedexText,
        .pokemonScale = 296,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Plate"),
        .height = 15,
        .weight = 682,
        .description = gArmaldoPokedexText,
        .pokemonScale = 312,
        .pokemonOffset = 3,
        .trainerScale = 271,
        .trainerOffset = 0,
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
        .categoryName = _("Fish"),
        .height = 6,
        .weight = 74,
        .description = gFeebasPokedexText,
        .pokemonScale = 423,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Tender"),
        .height = 62,
        .weight = 1620,
        .description = gMiloticPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 360,
        .trainerOffset = 7,
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
        .categoryName = _("Weather"),                   \
        .height = 3,                                    \
        .weight = 8,                                    \
        .pokemonScale = 435,                            \
        .pokemonOffset = -5,                            \
        .trainerScale = 256,                            \
        .trainerOffset = 0

    [SPECIES_CASTFORM_NORMAL] =
    {
        .type1 = TYPE_NORMAL,
        .type2 = TYPE_NORMAL,
        .bodyColor = BODY_COLOR_GRAY,
        .description = gCastformPokedexText,
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_SUNNY]
    {
        .type1 = TYPE_FIRE,
        .type2 = TYPE_FIRE,
        .bodyColor = BODY_COLOR_RED,
        .description = gDummyPokedexText,
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_RAINY]
    {
        .type1 = TYPE_WATER,
        .type2 = TYPE_WATER,
        .bodyColor = BODY_COLOR_BLUE,
        .description = gDummyPokedexText,
        CASTFORM_MISC_STATS,
    },
    [SPECIES_CASTFORM_SNOWY]
    {
        .type1 = TYPE_ICE,
        .type2 = TYPE_ICE,
        .bodyColor = BODY_COLOR_WHITE,
        .description = gDummyPokedexText,
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
        .categoryName = _("Color Swap"),
        .height = 10,
        .weight = 220,
        .description = gKecleonPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 10,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Puppet"),
        .height = 6,
        .weight = 23,
        .description = gShuppetPokedexText,
        .pokemonScale = 440,
        .pokemonOffset = 20,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Marionette")

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
        .height = 11,
        .weight = 125,
        .description = gBanettePokedexText,
        .pokemonScale = 262,
        .pokemonOffset = 9,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 12,
        .weight = 130,
        .description = gBanetteMegaPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Requiem"),
        .height = 8,
        .weight = 150,
        .description = gDuskullPokedexText,
        .pokemonScale = 406,
        .pokemonOffset = -4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Beckon"),
        .height = 16,
        .weight = 306,
        .description = gDusclopsPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 299,
        .trainerOffset = 1,
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
        .categoryName = _("Fruit"),
        .height = 20,
        .weight = 1000,
        .description = gTropiusPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 344,
        .trainerOffset = 7,
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
        .categoryName = _("Wind Chime"),
        .height = 6,
        .weight = 10,
        .description = gChimechoPokedexText,
        .pokemonScale = 505,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Disaster"),      \
        .height = 12,                       \
        .pokemonScale = 301,                \
        .pokemonOffset = 3,                 \
        .trainerScale = 256,                \
        .trainerOffset = 0

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
        .weight = 470,
        .description = gAbsolPokedexText,
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
        .weight = 490,
        .description = gAbsolMegaPokedexText,
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
        .categoryName = _("Bright"),
        .height = 6,
        .weight = 140,
        .description = gWynautPokedexText,
        .pokemonScale = 484,
        .pokemonOffset = 19,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Snow Hat"),
        .height = 7,
        .weight = 168,
        .description = gSnoruntPokedexText,
        .pokemonScale = 380,
        .pokemonOffset = 15,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Face")

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
        .height = 15,
        .weight = 2565,
        .description = gGlaliePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 3,
        .trainerScale = 344,
        .trainerOffset = 0,
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
        .height = 21,
        .weight = 3502,
        .description = gGlalieMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 423,
        .trainerOffset = 11,
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
        .categoryName = _("Clap"),
        .height = 8,
        .weight = 395,
        .description = gSphealPokedexText,
        .pokemonScale = 315,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Ball Roll"),
        .height = 11,
        .weight = 876,
        .description = gSealeoPokedexText,
        .pokemonScale = 338,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Ice Break"),
        .height = 14,
        .weight = 1506,
        .description = gWalreinPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Bivalve"),
        .height = 4,
        .weight = 525,
        .description = gClamperlPokedexText,
        .pokemonScale = 691,
        .pokemonOffset = 22,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Deep Sea"),
        .height = 17,
        .weight = 270,
        .description = gHuntailPokedexText,
        .pokemonScale = 307,
        .pokemonOffset = 1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("South Sea"),
        .height = 18,
        .weight = 226,
        .description = gGorebyssPokedexText,
        .pokemonScale = 278,
        .pokemonOffset = 5,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Longevity"),
        .height = 10,
        .weight = 234,
        .description = gRelicanthPokedexText,
        .pokemonScale = 316,
        .pokemonOffset = 7,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Rendezvous"),
        .height = 6,
        .weight = 87,
        .description = gLuvdiscPokedexText,
        .pokemonScale = 371,
        .pokemonOffset = 2,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Rock Head"),
        .height = 6,
        .weight = 421,
        .description = gBagonPokedexText,
        .pokemonScale = 448,
        .pokemonOffset = 18,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Endurance"),
        .height = 11,
        .weight = 1105,
        .description = gShelgonPokedexText,
        .pokemonScale = 311,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define SALAMENCE_MISC_STATS(exp,ability1,ability3)     \
        .type1 = TYPE_DRAGON,                           \
        .type2 = TYPE_FLYING,                           \
        .catchRate = 45,                                \
        .expYield = exp,                                \
        .evYield_Attack    = 3,                         \
        .itemRare = ITEM_DRAGON_FANG,                   \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 40,                                \
        .friendship = 35,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_DRAGON,                  \
        .eggGroup2 = EGG_GROUP_DRAGON,                  \
        .abilities = {ability1, ABILITY_NONE, ability3},\
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE,                                \
        .categoryName = _("Dragon")

    [SPECIES_SALAMENCE] =
    {
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .height = 15,
        .weight = 1026,
        .description = gSalamencePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        SALAMENCE_MISC_STATS(270, ABILITY_INTIMIDATE, ABILITY_MOXIE),
    },
    [SPECIES_SALAMENCE_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        .height = 18,
        .weight = 1126,
        .description = gSalamenceMegaPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 268,
        .trainerOffset = 0,
        SALAMENCE_MISC_STATS(315, ABILITY_AERILATE, ABILITY_AERILATE),
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
        .categoryName = _("Iron Ball"),
        .height = 6,
        .weight = 952,
        .description = gBeldumPokedexText,
        .pokemonScale = 414,
        .pokemonOffset = -1,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("Iron Claw"),
        .height = 12,
        .weight = 2025,
        .description = gMetangPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 6,
        .trainerScale = 256,
        .trainerOffset = 0,
    },

#define METAGROSS_MISC_STATS     \
        .type1 = TYPE_STEEL,                            \
        .type2 = TYPE_PSYCHIC,                          \
        .catchRate = 3,                                 \
        .evYield_Defense   = 3,                         \
        .itemRare = ITEM_METAL_COAT,                    \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 40,                                \
        .friendship = 35,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_MINERAL,                 \
        .eggGroup2 = EGG_GROUP_MINERAL,                 \
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE,                                \
        .categoryName = _("Iron Leg")

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
        .height = 16,
        .weight = 5500,
        .description = gMetagrossPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 4,
        .trainerScale = 447,
        .trainerOffset = 9,
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
        .height = 25,
        .weight = 9429,
        .description = gMetagrossMegaPokedexText,
        .pokemonScale = 257,
        .pokemonOffset = 10,
        .trainerScale = 423,
        .trainerOffset = 8,
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
        .categoryName = _("Rock Peak"),
        .height = 17,
        .weight = 2300,
        .description = gRegirockPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 2,
        .trainerScale = 309,
        .trainerOffset = 1,
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
        .categoryName = _("Iceberg"),
        .height = 18,
        .weight = 1750,
        .description = gRegicePokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 301,
        .trainerOffset = 2,
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
        .categoryName = _("Iron"),
        .height = 19,
        .weight = 2050,
        .description = gRegisteelPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 359,
        .trainerOffset = 6,
    },

#define LATIS_MISC_STATS              \
        .type1 = TYPE_DRAGON,                           \
        .type2 = TYPE_PSYCHIC,                          \
        .catchRate = 3,                                 \
        .eggCycles = 120,                               \
        .friendship = 90,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},  \
        .noFlip = FALSE,\
        .categoryName = _("Eon")

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
        .height = 14,
        .weight = 400,
        .description = gLatiasPokedexText,
        .pokemonScale = 304,
        .pokemonOffset = 3,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .height = 18,
        .weight = 520,
        .description = gLatiasPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 277,
        .trainerOffset = 1,
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
        .height = 20,
        .weight = 600,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 294,
        .trainerOffset = 3,
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
        .height = 23,
        .weight = 700,
        .description = gLatiosPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 342,
        .trainerOffset = 7,
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
        .categoryName = _("Sea Basin"),     \
        .description = gKyogrePokedexText,  \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 614,                \
        .trainerOffset = 13

    [SPECIES_KYOGRE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .abilities = {ABILITY_DRIZZLE, ABILITY_NONE},
        .height = 45,
        .weight = 3520,
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
        .height = 98,
        .weight = 4300,
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
        .categoryName = _("Continent"),     \
        .description = gGroudonPokedexText, \
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 515,                \
        .trainerOffset = 14

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
        .height = 35,
        .weight = 9500,
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
        .height = 50,
        .weight = 9997,
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
        .categoryName = _("Sky High"),      \
        .description = gRayquazaPokedexText,\
        .pokemonScale = 256,                \
        .pokemonOffset = 0,                 \
        .trainerScale = 448,                \
        .trainerOffset = 12

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
        .height = 70,
        .weight = 2065,
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
        .height = 108,
        .weight = 3920,
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
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = gJirachiPokedexText,
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
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
        .categoryName = _("DNA"),                       \
        .height = 17,                                   \
        .weight = 608,                                  \
        .description = gDeoxysPokedexText,              \
        .pokemonScale = 256,                            \
        .pokemonOffset = 0,                             \
        .trainerScale = 290,                            \
        .trainerOffset = 2

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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
    },

#define BURMY_BASE_STATS(color)                                          \
    {                                                                    \
        .baseHP        = 40,                                             \
        .baseAttack    = 29,                                             \
        .baseDefense   = 45,                                             \
        .baseSpeed     = 36,                                             \
        .baseSpAttack  = 29,                                             \
        .baseSpDefense = 45,                                             \
        .type1 = TYPE_BUG,                                               \
        .type2 = TYPE_BUG,                                               \
        .catchRate = 120,                                                \
        .expYield = 45,                                                  \
        .evYield_SpDefense = 1,                                          \
        .genderRatio = PERCENT_FEMALE(50),                               \
        .eggCycles = 15,                                                 \
        .friendship = 70,                                                \
        .growthRate = GROWTH_MEDIUM_FAST,                                \
        .eggGroup1 = EGG_GROUP_BUG,                                      \
        .eggGroup2 = EGG_GROUP_BUG,                                      \
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT},\
        .bodyColor = color,                                              \
        .noFlip = FALSE,                                                 \
    }
    [SPECIES_BURMY_PLANT_CLOAK] = BURMY_BASE_STATS(BODY_COLOR_GREEN),
    [SPECIES_BURMY_SANDY_CLOAK] = BURMY_BASE_STATS(BODY_COLOR_BROWN),
    [SPECIES_BURMY_TRASH_CLOAK] = BURMY_BASE_STATS(BODY_COLOR_RED),

    [SPECIES_WORMADAM_PLANT_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 59,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 79,
        .baseSpDefense = 105,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GRASS,
        .catchRate = 45,
        .expYield = 148,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 105,
        .baseSpeed     = 36,
        .baseSpAttack  = 59,
        .baseSpDefense = 85,
        .type1 = TYPE_BUG,
        .type2 = TYPE_GROUND,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 69,
        .baseSpDefense = 95,
        .type1 = TYPE_BUG,
        .type2 = TYPE_STEEL,
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroup1 = EGG_GROUP_BUG,
        .eggGroup2 = EGG_GROUP_BUG,
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
    },

#define CHERRIM_BASE_STATS(color)                        \
    {                                                    \
        .baseHP        = 70,                             \
        .baseAttack    = 60,                             \
        .baseDefense   = 70,                             \
        .baseSpeed     = 85,                             \
        .baseSpAttack  = 87,                             \
        .baseSpDefense = 78,                             \
        .type1 = TYPE_GRASS,                             \
        .type2 = TYPE_GRASS,                             \
        .catchRate = 75,                                 \
        .expYield = 158,                                 \
        .evYield_SpAttack  = 2,                          \
        .itemRare = ITEM_MIRACLE_SEED,                   \
        .genderRatio = PERCENT_FEMALE(50),               \
        .eggCycles = 20,                                 \
        .friendship = 70,                                \
        .growthRate = GROWTH_MEDIUM_FAST,                \
        .eggGroup1 = EGG_GROUP_FAIRY,                    \
        .eggGroup2 = EGG_GROUP_GRASS,                    \
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_NONE},\
        .bodyColor = color,                              \
        .noFlip = FALSE,                                 \
    }
    [SPECIES_CHERRIM_OVERCAST] = CHERRIM_BASE_STATS(BODY_COLOR_PURPLE),
    [SPECIES_CHERRIM_SUNSHINE] = CHERRIM_BASE_STATS(BODY_COLOR_PINK),

#define SHELLOS_BASE_STATS(color)                                                   \
    {                                                                               \
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
        .bodyColor = color,                                                         \
        .noFlip = FALSE,                                                            \
    }
    [SPECIES_SHELLOS_WEST_SEA] = SHELLOS_BASE_STATS(BODY_COLOR_PURPLE),
    [SPECIES_SHELLOS_EAST_SEA] = SHELLOS_BASE_STATS(BODY_COLOR_BLUE),

#define GASTRODON_BASE_STATS(color)                                                 \
    {                                                                               \
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
        .bodyColor = color,                                                         \
        .noFlip = FALSE,                                                            \
    }
    [SPECIES_GASTRODON_WEST_SEA] = GASTRODON_BASE_STATS(BODY_COLOR_PURPLE),
    [SPECIES_GASTRODON_EAST_SEA] = GASTRODON_BASE_STATS(BODY_COLOR_BLUE),

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
    },

#define LOPUNNY_MISC_STATS(typeB,exp,ability1,ability2,ability3)\
        .type1 = TYPE_NORMAL,                                   \
        .type2 = typeB,                                         \
        .catchRate = 60,                                        \
        .expYield = exp,                                        \
        .evYield_Speed     = 2,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = 140,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroup1 = EGG_GROUP_FIELD,                           \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,                      \
        .abilities = {ability1, ability2, ability3},            \
        .bodyColor = BODY_COLOR_BROWN,                          \
        .noFlip = FALSE

    [SPECIES_LOPUNNY] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 84,
        .baseSpeed     = 105,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        LOPUNNY_MISC_STATS(TYPE_NORMAL, 168, ABILITY_CUTE_CHARM, ABILITY_KLUTZ, ABILITY_LIMBER),
    },
    [SPECIES_LOPUNNY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        LOPUNNY_MISC_STATS(TYPE_FIGHTING, 203, ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY),
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
    },

#define GARCHOMP_MISC_STATS(exp,ability1,ability3)      \
        .type1 = TYPE_DRAGON,                           \
        .type2 = TYPE_GROUND,                           \
        .catchRate = 45,                                \
        .expYield = exp,                                \
        .evYield_Attack    = 3,                         \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 40,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_MONSTER,                 \
        .eggGroup2 = EGG_GROUP_DRAGON,                  \
        .abilities = {ability1, ABILITY_NONE, ability3},\
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 108,
        .baseAttack    = 130,
        .baseDefense   = 95,
        .baseSpeed     = 102,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        GARCHOMP_MISC_STATS(270, ABILITY_SAND_VEIL, ABILITY_ROUGH_SKIN),
    },
    [SPECIES_GARCHOMP_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        GARCHOMP_MISC_STATS(315, ABILITY_SAND_FORCE, ABILITY_SAND_FORCE),
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
    },

#define LUCARIO_MISC_STATS(exp,ability1,ability2,ability3)  \
        .type1 = TYPE_FIGHTING,                             \
        .type2 = TYPE_STEEL,                                \
        .catchRate = 45,                                    \
        .expYield = exp,                                    \
        .evYield_Attack    = 1,                             \
        .evYield_SpAttack  = 1,                             \
        .genderRatio = PERCENT_FEMALE(12.5),                \
        .eggCycles = 25,                                    \
        .friendship = 70,                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroup1 = EGG_GROUP_FIELD,                       \
        .eggGroup2 = EGG_GROUP_HUMAN_LIKE,                  \
        .abilities = {ability1, ability2, ability3},        \
        .bodyColor = BODY_COLOR_BLUE,                       \
        .noFlip = FALSE

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        LUCARIO_MISC_STATS(184, ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED),
    },
    [SPECIES_LUCARIO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        LUCARIO_MISC_STATS(219, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY),
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
    },

#define ABOMASNOW_MISC_STATS(exp,ability1,ability3)     \
        .type1 = TYPE_GRASS,                            \
        .type2 = TYPE_ICE,                              \
        .catchRate = 60,                                \
        .expYield = exp,                                \
        .evYield_Attack    = 1,                         \
        .evYield_SpAttack  = 1,                         \
        .itemRare = ITEM_NEVER_MELT_ICE,                \
        .genderRatio = PERCENT_FEMALE(50),              \
        .eggCycles = 20,                                \
        .friendship = 70,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_MONSTER,                 \
        .eggGroup2 = EGG_GROUP_GRASS,                   \
        .abilities = {ability1, ABILITY_NONE, ability3},\
        .bodyColor = BODY_COLOR_WHITE,                  \
        .noFlip = FALSE

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 92,
        .baseSpDefense = 85,
        ABOMASNOW_MISC_STATS(173, ABILITY_SNOW_WARNING, ABILITY_SOUNDPROOF),
    },
    [SPECIES_ABOMASNOW_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        ABOMASNOW_MISC_STATS(208, ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING),
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
    },

#define GALLADE_MISC_STATS(exp,ability1,ability3)       \
        .type1 = TYPE_PSYCHIC,                          \
        .type2 = TYPE_FIGHTING,                         \
        .catchRate = 45,                                \
        .expYield = exp,                                \
        .evYield_Attack    = 3,                         \
        .genderRatio = MON_MALE,                        \
        .eggCycles = 20,                                \
        .friendship = 35,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = RALTS_FAMILY_EGG_GROUP_1,          \
        .eggGroup2 = EGG_GROUP_AMORPHOUS,               \
        .abilities = {ability1, ABILITY_NONE, ability3},\
        .bodyColor = BODY_COLOR_WHITE,                  \
        .noFlip = FALSE

    [SPECIES_GALLADE] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        GALLADE_MISC_STATS(233, ABILITY_STEADFAST, ABILITY_JUSTIFIED),
    },
    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
        GALLADE_MISC_STATS(278, ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS),
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
    },

#define ROTOM_MISC_STATS(typeB,exp,flip)              \
        .type1 = TYPE_ELECTRIC,                       \
        .type2 = typeB,                               \
        .catchRate = 45,                              \
        .expYield = exp,                              \
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
        .noFlip = flip

#define ROTOM_FORM_BASE_STATS(typeB, flip)            \
    {                                                 \
        .baseHP        = 50,                          \
        .baseAttack    = 65,                          \
        .baseDefense   = 107,                         \
        .baseSpeed     = 86,                          \
        .baseSpAttack  = 105,                         \
        .baseSpDefense = 107,                         \
        ROTOM_MISC_STATS(typeB, 182, flip),           \
    }
    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        ROTOM_MISC_STATS(TYPE_GHOST, 154, NO_FLIP),
    },
    [SPECIES_ROTOM_HEAT]  = ROTOM_FORM_BASE_STATS(TYPE_FIRE, FLIP),
    [SPECIES_ROTOM_WASH]  = ROTOM_FORM_BASE_STATS(TYPE_WATER, NO_FLIP),
    [SPECIES_ROTOM_FROST] = ROTOM_FORM_BASE_STATS(TYPE_ICE, FLIP),
    [SPECIES_ROTOM_FAN]   = ROTOM_FORM_BASE_STATS(TYPE_FLYING, FLIP),
    [SPECIES_ROTOM_MOW]   = ROTOM_FORM_BASE_STATS(TYPE_GRASS, FLIP),

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
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
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
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
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
    },

#define GIRATINA_MISC_STATS(ability1, ability3)             \
        .type1 = TYPE_GHOST,                                \
        .type2 = TYPE_DRAGON,                               \
        .catchRate = 3,                                     \
        .expYield = 306,                                    \
        .evYield_HP        = 3,                             \
        .genderRatio = MON_GENDERLESS,                      \
        .eggCycles = 120,                                   \
        .friendship = 0,                                    \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,                \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,                \
        .abilities = {ability1, ABILITY_NONE, ability3},    \
        .bodyColor = BODY_COLOR_BLACK,                      \
        .noFlip = FALSE,                                    \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_GIRATINA_ALTERED] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        GIRATINA_MISC_STATS(ABILITY_PRESSURE, ABILITY_TELEPATHY),
    },
    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        GIRATINA_MISC_STATS(ABILITY_LEVITATE, ABILITY_LEVITATE),
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
    },

    [SPECIES_SHAYMIN_LAND] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .type1 = TYPE_GRASS,
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
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .type1 = TYPE_GRASS,
        .type2 = TYPE_FLYING,
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
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

#define ARCEUS_BASE_STATS(type)                        \
    {                                                  \
        .baseHP        = 120,                          \
        .baseAttack    = 120,                          \
        .baseDefense   = 120,                          \
        .baseSpeed     = 120,                          \
        .baseSpAttack  = 120,                          \
        .baseSpDefense = 120,                          \
        .type1 = type,                                 \
        .type2 = type,                                 \
        .catchRate = 3,                                \
        .expYield = 324,                               \
        .evYield_HP        = 3,                        \
        .genderRatio = MON_GENDERLESS,                 \
        .eggCycles = 120,                              \
        .friendship = 0,                               \
        .growthRate = GROWTH_SLOW,                     \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,           \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,           \
        .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_WHITE,                 \
        .noFlip = FALSE,                               \
        .flags = SPECIES_FLAG_MYTHICAL,                \
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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
        .flags = SPECIES_FLAG_GENDER_DIFFERENCE,
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

#define ENAMORUS_MISC_STATS(exp,ability1,ability3)      \
        .type1 = TYPE_FAIRY,                            \
        .type2 = TYPE_FLYING,                           \
        .catchRate = 3,                                 \
        .expYield = exp,                                \
        .evYield_SpAttack  = 3,                         \
        .genderRatio = MON_FEMALE,                      \
        .eggCycles = 120,                               \
        .friendship = 90,                               \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroup1 = EGG_GROUP_UNDISCOVERED,            \
        .eggGroup2 = EGG_GROUP_UNDISCOVERED,            \
        .abilities = {ability1, ABILITY_NONE, ability3},\
        .bodyColor = BODY_COLOR_PINK,                   \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY

    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 106,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        ENAMORUS_MISC_STATS(261, ABILITY_HEALER, ABILITY_CONTRARY),
    },
    [SPECIES_ENAMORUS_THERIAN] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 110,
        .baseSpeed     = 46,
        .baseSpAttack  = 135,
        .baseSpDefense = 100,
        ENAMORUS_MISC_STATS(270, ABILITY_OVERCOAT, ABILITY_OVERCOAT),
    },
#endif
};
