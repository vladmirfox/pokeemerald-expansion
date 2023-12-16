#include "constants/abilities.h"

// Shared Pokédex entries
const u8 gZygarde10PokedexText[] = _("");

const u8 gSilvallyMemoryPokedexText[] = _("");

const u8 gMiniorCorePokedexText[] = _("");

const u8 gAlcremieVanillaCreamPokedexText[] = _(
    "When it trusts a Trainer, it will treat\n"
    "them to berries it's decorated with cream.");

const u8 gAlcremieRubyCreamPokedexText[] = _("");

const u8 gAlcremieMatchaCreamPokedexText[] = _("");

const u8 gAlcremieMintCreamPokedexText[] = _("");

const u8 gAlcremieLemonCreamPokedexText[] = _("");

const u8 gAlcremieSaltedCreamPokedexText[] = _("");

const u8 gAlcremieRubySwirlPokedexText[] = _("");

const u8 gAlcremieCaramelSwirlPokedexText[] = _("");

const u8 gAlcremieRainbowSwirlPokedexText[] = _("");

const u8 gToxtricityGigantamaxPokedexText[] = _("");

const u8 gOgerponTealMaskPokedexText[] = _(
    "This Pokémon's type changes based on\n"
    "which mask it's wearing. It confounds\n"
    "its enemies with nimble movements\n"
    "and kicks.");

const u8 gOgerponWellspringMaskPokedexText[] = _("");

const u8 gOgerponHearthflameMaskPokedexText[] = _("");

const u8 gOgerponCornerstoneMaskPokedexText[] = _("");

// Macros for ease of use.

#define PARENS ()

#define EXPAND(...) EXPAND4(EXPAND4(EXPAND4(EXPAND4(__VA_ARGS__))))
#define EXPAND4(...) EXPAND3(EXPAND3(EXPAND3(EXPAND3(__VA_ARGS__))))
#define EXPAND3(...) EXPAND2(EXPAND2(EXPAND2(EXPAND2(__VA_ARGS__))))
#define EXPAND2(...) EXPAND1(EXPAND1(EXPAND1(EXPAND1(__VA_ARGS__))))
#define EXPAND1(...) __VA_ARGS__

#define FOR_EACH_IF_ABLE(a, macro, ...) __VA_OPT__(,) __VA_OPT__(macro(a, __VA_ARGS__))

#define FOR_EACH_1(a, macro, ...) \
  __VA_OPT__(EXPAND(FOR_EACH_1_HELPER(a, macro, __VA_ARGS__)))

#define FOR_EACH_1_HELPER(a, macro, a1, ...) \
    FOR_EACH_IF_ABLE(a, macro, a1) \
    __VA_OPT__(FOR_EACH_1_AGAIN PARENS (a, macro, __VA_ARGS__))

#define FOR_EACH_1_AGAIN() FOR_EACH_1_HELPER

//

#define UNPACK(...) __VA_ARGS__
#define FIRST(a, _, b) a
#define SECOND(_, b, c) b c

#define SPECIES(tag, base, ...) \
  [tag] = { \
    UNPACK base \
  } \
  FOR_EACH_1(base, SPECIES_FORM, __VA_ARGS__)

#define SPECIES_FORM(base, tagOverrides, ...) \
  [FIRST tagOverrides] = { \
    UNPACK base \
    UNPACK SECOND tagOverrides \
    __VA_ARGS__ \
  }

#define FORM(tag, overrides) (tag, overrides, )

// Fusions
#if P_FUSION_FORMS
#define FUSION FORM
#else
#define FUSION(tag, overrides)
#endif

// Mega evolutions
#if P_MEGA_EVOLUTIONS
#define MEGA_EVOLUTION(tag, overrides) (tag, overrides, .isMegaEvolution = TRUE)
#else
#define MEGA_EVOLUTION(tag, overrides)
#endif

// Primal reversions
#if P_PRIMAL_REVERSIONS
#define PRIMAL_REVERSION(tag, overrides) (tag, overrides, .isPrimalReversion = TRUE)
#else
#define PRIMAL_REVERSION(tag, overrides)
#endif

// Gmax forms
#if P_GIGANTAMAX_FORMS
#define GIGANTAMAX_FORM(tag, overrides) (tag, overrides, .isGigantamax = TRUE)
#else
#define GIGANTAMAX_FORM(tag, overrides)
#endif

// Alolan forms
#if P_ALOLAN_FORMS
#define ALOLAN_FORM(tag, overrides) (tag, overrides, .isAlolanForm = TRUE)
#else
#define ALOLAN_FORM(tag, overrides)
#endif

// Ultra bursts
#if P_ULTRA_BURST_FORMS && P_FUSION_FORMS
#define ULTRA_BURST(tag, overrides) (tag, overrides, .isUltraBurst = TRUE)
#else
#define ULTRA_BURST(tag, overrides)
#endif

// Galarian forms
#if P_GALARIAN_FORMS
#define GALARIAN_FORM(tag, overrides) (tag, overrides, .isGalarianForm = TRUE)
#else
#define GALARIAN_FORM(tag, overrides)
#endif

// Hisuian forms
#if P_HISUIAN_FORMS
#define HISUIAN_FORM(tag, overrides) (tag, overrides, .isHisuianForm = TRUE)
#else
#define HISUIAN_FORM(tag, overrides)
#endif

// Paldean forms
#if P_PALDEAN_FORMS
#define PALDEAN_FORM(tag, overrides) (tag, overrides, .isPaldeanForm = TRUE)
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
    ))
};
