#include "constants/abilities.h"

// Shared Pokédex entries
const u8 gZygarde10PokedexText[] = _(
    "This is Zygarde when about 10% of\n"
    "its pieces have been assembled. It\n"
    "leaps at its opponent's chest and\n"
    "sinks its sharp fangs into them.");

const u8 gSilvallyMemoryPokedexText[] = _(
    "Upon awakening, its RKS System is\n"
    "activated. By employing specific\n"
    "memories, this Pokémon can adapt its\n"
    "type to confound its enemies.");

const u8 gMiniorCorePokedexText[] = _(
    "If its core stays exposed, it will\n"
    "soon die off. It's possible that it\n"
    "may survive if it's put into a Poké Ball\n"
    "quickly enough.");

const u8 gAlcremieVanillaCreamPokedexText[] = _(
    "When it trusts a Trainer, it will treat\n"
    "them to berries it's decorated with cream.");

const u8 gAlcremieRubyCreamPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "sweet and tart flavor. This is\n"
    "because of the way its cells\n"
    "spontaneously shifted during evolution.");

const u8 gAlcremieMatchaCreamPokedexText[] = _(
    "The moment it evolved, it took on\n"
    "an aromatic flavor. This is because\n"
    "of the way its cells spontaneously\n"
    "shifted during evolution.");

const u8 gAlcremieMintCreamPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "refreshing flavor. This is because\n"
    "of the way its cells spontaneously\n"
    "shifted during evolution.");

const u8 gAlcremieLemonCreamPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "sour flavor. This is because of the\n"
    "way its cells spontaneously shifted\n"
    "during evolution.");

const u8 gAlcremieSaltedCreamPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "salty flavor. This is because of the\n"
    "way its cells spontaneously shifted\n"
    "during evolution.");

const u8 gAlcremieRubySwirlPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "mixed flavor. This is because of the\n"
    "way its cells spontaneously shifted\n"
    "during evolution.");

const u8 gAlcremieCaramelSwirlPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "bitter flavor. This is because of\n"
    "the way its cells spontaneously\n"
    "shifted during evolution.");

const u8 gAlcremieRainbowSwirlPokedexText[] = _(
    "The moment it evolved, it took on a\n"
    "complex flavor. This is because of\n"
    "the way its cells spontaneously\n"
    "shifted during evolution.");

const u8 gToxtricityGigantamaxPokedexText[] = _(
    "Out of control after its own\n"
    "poison penetrated its brain, it tears\n"
    "across the land in a rampage,\n"
    "contaminating the earth with toxic sweat.");

const u8 gOgerponTealMaskPokedexText[] = _(
    "This Pokémon's type changes based on\n"
    "which mask it's wearing. It confounds\n"
    "its enemies with nimble movements\n"
    "and kicks.");

const u8 gOgerponWellspringMaskPokedexText[] = _(
    "This form excels in both attack\n"
    "and defense. It ceaselessly unleashes\n"
    "moves like a spring gushes water.");

const u8 gOgerponHearthflameMaskPokedexText[] = _(
    "This form is the most aggressive,\n"
    "bombarding enemies with the\n"
    "intensity of flames blazing within a hearth.");

const u8 gOgerponCornerstoneMaskPokedexText[] = _(
    "In this form, it draws on the power\n"
    "of stone. Its body is rock-solid,\n"
    "protecting it from all manner of\n"
    "attacks.");

#define SPECIES(tag, members, ...) \
    [tag] = { \
        __VA_OPT__( \
            .formSpecies = { .formSpeciesIdTable = (static const u16[]) { \
                tag, \
                RECURSIVELY(R_FOR_EACH(SPECIES_FORM_TAG, __VA_ARGS__)) \
                FORM_SPECIES_END, \
            }}, \
        ) \
        UNPACK members \
    } \
    RECURSIVELY(R_FOR_EACH_WITH(SPECIES_FORM, (tag, members), __VA_ARGS__))

#define SPECIES_FORM_TAG(...) __VA_OPT__(FIRST __VA_ARGS__,)

// Prevents these members from being inherited by forms.
#define NO_INHERIT \
    .frontPicFemale = 0, \
    .frontPicSizeFemale = 0, \
    .formChangeTable = 0, \
    .iconPalIndex = 0, \
    .iconPalIndexFemale = 0, \
    .frontAnimId = 0, \
    .backPicFemale = 0, \
    .backPicSizeFemale = 0, \
    .frontAnimId = 0, \
    .frontAnimDelay = 0, \
    .frontPicYOffset = 0, \
    .evolutions = 0, \
    .backPicSize = 0, \
    .enemyMonElevation = 0, \
    .backAnimId = 0,

/* Parses a triple of '(tag, overrides, extra)' which are constructed
 * by FUSION/MEGA_EVOLUTION/PRIMAL_REVERSION/... */
#define SPECIES_FORM(baseTag, baseMembers, ...) __VA_OPT__(SPECIES_FORM_(baseTag, baseMembers, FIRST __VA_ARGS__, SECOND __VA_ARGS__, THIRD __VA_ARGS__))
#define SPECIES_FORM_(baseTag, baseMembers, formTag, formMembers, extraMembers) \
    , [formTag] = { \
        .formSpecies = { .baseSpecies = baseTag }, \
        UNPACK baseMembers \
        NO_INHERIT \
        UNPACK formMembers \
        UNPACK extraMembers \
    } \

#define FORM(tag, overrides) (tag, overrides, ())

// Fusions
#if P_FUSION_FORMS
#define FUSION(tag, overrides) (tag, overrides, ())
#else
#define FUSION(tag, overrides)
#endif

// Mega evolutions
#if P_MEGA_EVOLUTIONS
#define MEGA_EVOLUTION(tag, overrides) (tag, overrides, (.isMegaEvolution = TRUE))
#else
#define MEGA_EVOLUTION(tag, overrides)
#endif

// Primal reversions
#if P_PRIMAL_REVERSIONS
#define PRIMAL_REVERSION(tag, overrides) (tag, overrides, (.isPrimalReversion = TRUE))
#else
#define PRIMAL_REVERSION(tag, overrides)
#endif

// Gmax forms
#if P_GIGANTAMAX_FORMS
#define GIGANTAMAX_FORM(tag, overrides) (tag, overrides, (.isGigantamax = TRUE))
#else
#define GIGANTAMAX_FORM(tag, overrides)
#endif

// Alolan forms
#if P_ALOLAN_FORMS
#define ALOLAN_FORM(tag, overrides) (tag, overrides, (.isAlolanForm = TRUE))
#else
#define ALOLAN_FORM(tag, overrides)
#endif

// Ultra bursts
#if P_ULTRA_BURST_FORMS && P_FUSION_FORMS
#define ULTRA_BURST(tag, overrides) (tag, overrides, (.isUltraBurst = TRUE))
#else
#define ULTRA_BURST(tag, overrides)
#endif

// Galarian forms
#if P_GALARIAN_FORMS
#define GALARIAN_FORM(tag, overrides) (tag, overrides, (.isGalarianForm = TRUE))
#else
#define GALARIAN_FORM(tag, overrides)
#endif

// Hisuian forms
#if P_HISUIAN_FORMS
#define HISUIAN_FORM(tag, overrides) (tag, overrides, (.isHisuianForm = TRUE))
#else
#define HISUIAN_FORM(tag, overrides)
#endif

// Paldean forms
#if P_PALDEAN_FORMS
#define PALDEAN_FORM(tag, overrides) (tag, overrides, (.isPaldeanForm = TRUE))
#else
#define PALDEAN_FORM(tag, overrides)
#endif

// Tera forms (?)
#if P_TERA_FORMS
#define TERA_FORM FORM
#else
#define TERA_FORM(tag, overrides)
#endif

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }

#define FRONT_PIC(sprite, width, height)                    \
        .frontPic = gMonFrontPic_## sprite,                 \
        .frontPicSize = MON_COORDS_SIZE(width, height)

#define FRONT_PIC_FEMALE(sprite, width, height)             \
        .frontPicFemale = gMonFrontPic_## sprite##F,        \
        .frontPicSizeFemale = MON_COORDS_SIZE(width, height)

#define BACK_PIC(sprite, width, height)                     \
        .backPic = gMonBackPic_## sprite,                   \
        .backPicSize = MON_COORDS_SIZE(width, height)

#define BACK_PIC_FEMALE(sprite, width, height)              \
        .backPicFemale = gMonBackPic_## sprite##F,          \
        .backPicSizeFemale = MON_COORDS_SIZE(width, height)

#define PALETTES(pal)                                       \
        .palette = gMonPalette_## pal,                      \
        .shinyPalette = gMonShinyPalette_## pal

#define PALETTE_FEMALE(pal)                                 \
        .paletteFemale = gMonPalette_## pal##F,             \
        .shinyPaletteFemale = gMonShinyPalette_## pal##F

#define ICON(sprite, palId)                                 \
        .iconSprite = gMonIcon_## sprite,                   \
        .iconPalIndex = palId

#define ICON_FEMALE(sprite, palId)                          \
        .iconSpriteFemale = gMonIcon_## sprite##F,          \
        .iconPalIndexFemale = palId

#define LEARNSETS(learn)                                    \
        .levelUpLearnset = s ## learn##LevelUpLearnset,     \
        .teachableLearnset = s ## learn##TeachableLearnset

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    SPECIES(SPECIES_NONE, (
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CircledQuestionMark, 40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_None,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        BACK_PIC(CircledQuestionMark, 40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        PALETTES(CircledQuestionMark),
        ICON(QuestionMark, 0),
        LEARNSETS(None),
    )),

    #include "species_info/gen_1.h"
    #include "species_info/gen_2.h"
    #include "species_info/gen_3.h"
    #include "species_info/gen_4.h"
    #include "species_info/gen_5.h"
    #include "species_info/gen_6.h"
    #include "species_info/gen_7.h"
    #include "species_info/gen_8.h"
    #include "species_info/gen_9.h"

    SPECIES(SPECIES_EGG, (
        FRONT_PIC(Egg, 24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        ICON(Egg, 1),
    )),

    /* You may add any custom species below this point based on the following structure: */

    /*
    SPECIES(SPECIES_NONE, (
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = { TYPE_MYSTERY, TYPE_MYSTERY },
        .catchRate = 255,
        .expYield = 67,
        .evYields = { .hp = 1, .defense = 1, .spDefense = 1 },
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_NO_EGGS_DISCOVERED, EGG_GROUP_NO_EGGS_DISCOVERED },
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        FRONT_PIC(CircledQuestionMark, 64, 64),
        //FRONT_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 0,
        BACK_PIC(CircledQuestionMark, 64, 64),
        //BACK_PIC_FEMALE(CircledQuestionMark, 64, 64),
        .backPicYOffset = 7,
        .backAnimId = BACK_ANIM_NONE,
        PALETTES(CircledQuestionMark),
        //PALETTE_FEMALE(CircledQuestionMark),
        ICON(QuestionMark, 0),
        //ICON_FEMALE(QuestionMark, 1),
        //.footprint = gMonFootprint_None,
        LEARNSETS(None),
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formChangeTable = sNoneFormChangeTable,
        .allPerfectIVs = TRUE,
    )),
    */
};
