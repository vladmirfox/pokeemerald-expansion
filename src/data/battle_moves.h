#include "battle_dynamax.h"
#include "constants/battle.h"
#include "constants/battle_move_effects.h"
#include "constants/battle_script_commands.h"
#include "constants/battle_z_move_effects.h"
#include "constants/hold_effects.h"
#include "constants/moves.h"

const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

const struct BattleMove gBattleMoves[MOVES_COUNT_DYNAMAX] =
{
    [MOVE_NONE] =
    {
        .name = _("-"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .mirrorMoveBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_POUND] =
    {
        .name = _("Pound"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS == GEN_4,
    },

    [MOVE_KARATE_CHOP] =
    {
        .name = _("Karate Chop"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_SLAP] =
    {
        .name = _("Double Slap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COMET_PUNCH] =
    {
        .name = _("Comet Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_MEGA_PUNCH] =
    {
        .name = _("Mega Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_PAY_DAY] =
    {
        .name = _("Pay Day"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PAYDAY,
        }),
    },

    [MOVE_FIRE_PUNCH] =
    {
        .name = _("Fire Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_ICE_PUNCH] =
    {
        .name = _("Ice Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .name = _("ThunderPunch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_SCRATCH] =
    {
        .name = _("Scratch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_VISE_GRIP] =
    {
        .name = _("Vise Grip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GUILLOTINE] =
    {
        .name = _("Guillotine"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAZOR_WIND] =
    {
        .name = _("Razor Wind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SWORDS_DANCE] =
    {
        .name = _("Swords Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_CUT] =
    {
        .name = _("Cut"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_GUST] =
    {
        .name = _("Gust"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUST,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
    },

    [MOVE_WING_ATTACK] =
    {
        .name = _("Wing Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WHIRLWIND] =
    {
        .name = _("Whirlwind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .windMove = TRUE,
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_FLY] =
    {
        .name = _("Fly"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 90 : 70,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BIND] =
    {
        .name = _("Bind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 75,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SLAM] =
    {
        .name = _("Slam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VINE_WHIP] =
    {
        .name = _("Vine Whip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 25,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 15,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 45 : 35,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STOMP] =
    {
        .name = _("Stomp"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_DOUBLE_KICK] =
    {
        .name = _("Double Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_MEGA_KICK] =
    {
        .name = _("Mega Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_JUMP_KICK] =
    {
        .name = _("Jump Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 85,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_ROLLING_KICK] =
    {
        .name = _("Rolling Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_SAND_ATTACK] =
    {
        .name = _("Sand Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_HEADBUTT] =
    {
        .name = _("Headbutt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HORN_ATTACK] =
    {
        .name = _("Horn Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FURY_ATTACK] =
    {
        .name = _("Fury Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HORN_DRILL] =
    {
        .name = _("Horn Drill"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TACKLE] =
    {
        .name = _("Tackle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 40,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 50,
        #else
            .power = 35,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 95,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BODY_SLAM] =
    {
        .name = _("Body Slam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_WRAP] =
    {
        .name = _("Wrap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_TAKE_DOWN] =
    {
        .name = _("Take Down"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .recoil = 25,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THRASH] =
    {
        .name = _("Thrash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 120 : 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .name = _("Double-Edge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TAIL_WHIP] =
    {
        .name = _("Tail Whip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POISON_STING] =
    {
        .name = _("Poison Sting"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 15,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_TWINEEDLE] =
    {
        .name = _("Twineedle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 25,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .strikeCount = 2,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 20,
        }),
    },

    [MOVE_PIN_MISSILE] =
    {
        .name = _("Pin Missile"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 14,
        .type = TYPE_BUG,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LEER] =
    {
        .name = _("Leer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BITE] =
    {
        .name = _("Bite"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_GROWL] =
    {
        .name = _("Growl"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_ROAR] =
    {
        .name = _("Roar"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .soundMove = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SING] =
    {
        .name = _("Sing"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_SUPERSONIC] =
    {
        .name = _("Supersonic"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_SONIC_BOOM] =
    {
        .name = _("Sonic Boom"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FIXED_DAMAGE_ARG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 20,
    },

    [MOVE_DISABLE] =
    {
        .name = _("Disable"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .accuracy = 80,
        #else
            .accuracy = 55,
        #endif
        .effect = EFFECT_DISABLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ACID] =
    {
        .name = _("Acid"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_EFFECT_SP_DEF_MINUS_1 : MOVE_EFFECT_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_EMBER] =
    {
        .name = _("Ember"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_FLAMETHROWER] =
    {
        .name = _("Flamethrower"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_MIST] =
    {
        .name = _("Mist"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIST,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_WATER_GUN] =
    {
        .name = _("Water Gun"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_PUMP] =
    {
        .name = _("Hydro Pump"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_WATER,
        .accuracy = 80,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SURF] =
    {
        .name = _("Surf"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_TARGET_FOES_AND_ALLY : MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ICE_BEAM] =
    {
        .name = _("Ice Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            // The following effect is also relevant in battle_pike.c
            // If you cherry-pick this to use something other than the config, make sure to update it there too
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_BLIZZARD] =
    {
        .name = _("Blizzard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_BLIZZARD_HAIL >= GEN_4 ? EFFECT_BLIZZARD : EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_ICE,
        .accuracy = 70,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_PSYBEAM] =
    {
        .name = _("Psybeam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .name = _("Bubble Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_AURORA_BEAM] =
    {
        .name = _("Aurora Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_HYPER_BEAM] =
    {
        .name = _("Hyper Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_PECK] =
    {
        .name = _("Peck"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_PECK] =
    {
        .name = _("Drill Peck"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUBMISSION] =
    {
        .name = _("Submission"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 25,
        .recoil = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LOW_KICK] =
    {
        .name = _("Low Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COUNTER] =
    {
        .name = _("Counter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COUNTER,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .meFirstBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_2,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .name = _("Seismic Toss"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STRENGTH] =
    {
        .name = _("Strength"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ABSORB] =
    {
        .name = _("Absorb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 20,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 25 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_MEGA_DRAIN] =
    {
        .name = _("Mega Drain"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LEECH_SEED] =
    {
        .name = _("Leech Seed"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEECH_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_GROWTH] =
    {
        .name = _("Growth"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_GROWTH_STAT_RAISE >= GEN_5 ? EFFECT_GROWTH : EFFECT_SPECIAL_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_RAZOR_LEAF] =
    {
        .name = _("Razor Leaf"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .name = _("Solar Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_POISON_POWDER] =
    {
        .name = _("PoisonPowder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 75,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_STUN_SPORE] =
    {
        .name = _("Stun Spore"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .name = _("Sleep Powder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_PETAL_DANCE] =
    {
        .name = _("Petal Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 90,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .danceMove = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_STRING_SHOT] =
    {
        .name = _("String Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_SPEED_DOWN_2 : EFFECT_SPEED_DOWN,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 40,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAGON_RAGE] =
    {
        .name = _("Dragon Rage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FIXED_DAMAGE_ARG,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
        .argument = 40,
    },

    [MOVE_FIRE_SPIN] =
    {
        .name = _("Fire Spin"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_THUNDER_SHOCK] =
    {
        .name = _("ThunderShock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_THUNDERBOLT] =
    {
        .name = _("Thunderbolt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        }),
    },

    [MOVE_THUNDER_WAVE] =
    {
        .name = _("Thunder Wave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 90 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_THUNDER] =
    {
        .name = _("Thunder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THUNDER,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 70,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborne = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_ROCK_THROW] =
    {
        .name = _("Rock Throw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_EARTHQUAKE] =
    {
        .name = _("Earthquake"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EARTHQUAKE,
        .power = 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FISSURE] =
    {
        .name = _("Fissure"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DIG] =
    {
        .name = _("Dig"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 80 : 60,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_TOXIC] =
    {
        .name = _("Toxic"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSION] =
    {
        .name = _("Confusion"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_PSYCHIC] =
    {
        .name = _("Psychic"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_HYPNOSIS] =
    {
        .name = _("Hypnosis"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 60,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEDITATE] =
    {
        .name = _("Meditate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_AGILITY] =
    {
        .name = _("Agility"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_QUICK_ATTACK] =
    {
        .name = _("Quick Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAGE] =
    {
        .name = _("Rage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGE,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TELEPORT] =
    {
        .name = _("Teleport"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TELEPORT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NIGHT_SHADE] =
    {
        .name = _("Night Shade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIMIC] =
    {
        .name = _("Mimic"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIMIC,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresSubstitute = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_2,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SCREECH] =
    {
        .name = _("Screech"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_DOUBLE_TEAM] =
    {
        .name = _("Double Team"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EVASION_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_RECOVER] =
    {
        .name = _("Recover"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 10,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HARDEN] =
    {
        .name = _("Harden"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_MINIMIZE] =
    {
        .name = _("Minimize"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MINIMIZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_SMOKESCREEN] =
    {
        .name = _("Smokescreen"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .name = _("Confuse Ray"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WITHDRAW] =
    {
        .name = _("Withdraw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_DEFENSE_CURL] =
    {
        .name = _("Defense Curl"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_CURL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_BARRIER] =
    {
        .name = _("Barrier"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_LIGHT_SCREEN] =
    {
        .name = _("Light Screen"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LIGHT_SCREEN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HAZE] =
    {
        .name = _("Haze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HAZE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_REFLECT] =
    {
        .name = _("Reflect"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFLECT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_FOCUS_ENERGY] =
    {
        .name = _("Focus Energy"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOCUS_ENERGY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_BIDE] =
    {
        .name = _("Bide"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BIDE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_4 ? 1 : 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_METRONOME] =
    {
        .name = _("Metronome"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METRONOME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_3,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MIRROR_MOVE] =
    {
        .name = _("Mirror Move"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRROR_MOVE,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_2 },
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_3,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SELF_DESTRUCT] =
    {
        .name = _("SelfDestruct"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 200,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_EGG_BOMB] =
    {
        .name = _("Egg Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LICK] =
    {
        .name = _("Lick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 30 : 20,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_SMOG] =
    {
        .name = _("Smog"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 30 : 20,
        .type = TYPE_POISON,
        .accuracy = 70,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 40,
        }),
    },

    [MOVE_SLUDGE] =
    {
        .name = _("Sludge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_BONE_CLUB] =
    {
        .name = _("Bone Club"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_FIRE_BLAST] =
    {
        .name = _("Fire Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_WATERFALL] =
    {
        .name = _("Waterfall"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_FLINCH,
                .chance = 20,
            }),
        #endif
    },

    [MOVE_CLAMP] =
    {
        .name = _("Clamp"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 75,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SWIFT] =
    {
        .name = _("Swift"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKULL_BASH] =
    {
        .name = _("Skull Bash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKULL_BASH,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_SPIKE_CANNON] =
    {
        .name = _("Spike Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CONSTRICT] =
    {
        .name = _("Constrict"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_AMNESIA] =
    {
        .name = _("Amnesia"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_KINESIS] =
    {
        .name = _("Kinesis"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_SOFT_BOILED] =
    {
        .name = _("Soft-Boiled"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HIGH_JUMP_KICK] =
    {
        .name = _("HighJumpKick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 130,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 100,
        #else
            .power = 85,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_GLARE] =
    {
        .name = _("Glare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 90,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DREAM_EATER] =
    {
        .name = _("Dream Eater"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DREAM_EATER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_POISON_GAS] =
    {
        .name = _("Poison Gas"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 90,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 80,
        #else
            .accuracy = 55,
        #endif
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .pp = 40,
        .target = B_UPDATED_MOVE_DATA >= GEN_5 ? MOVE_TARGET_BOTH : MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BARRAGE] =
    {
        .name = _("Barrage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LEECH_LIFE] =
    {
        .name = _("Leech Life"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 80 : 20,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_7 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LOVELY_KISS] =
    {
        .name = _("Lovely Kiss"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SKY_ATTACK] =
    {
        .name = _("Sky Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .criticalHitStage = B_UPDATED_MOVE_DATA >= GEN_3 ? 1 : 0,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    #if B_UPDATED_MOVE_DATA >= GEN_3
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    #endif
    },

    [MOVE_TRANSFORM] =
    {
        .name = _("Transform"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRANSFORM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BUBBLE] =
    {
        .name = _("Bubble"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 40 : 20,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .name = _("Dizzy Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_SPORE] =
    {
        .name = _("Spore"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_FLASH] =
    {
        .name = _("Flash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 100 : 70,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PSYWAVE] =
    {
        .name = _("Psywave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYWAVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SPLASH] =
    {
        .name = _("Splash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_3 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_ACID_ARMOR] =
    {
        .name = _("Acid Armor"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CRABHAMMER] =
    {
        .name = _("Crabhammer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 90,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 85,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EXPLOSION] =
    {
        .name = _("Explosion"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 250,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FURY_SWIPES] =
    {
        .name = _("Fury Swipes"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BONEMERANG] =
    {
        .name = _("Bonemerang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
    },

    [MOVE_REST] =
    {
        .name = _("Rest"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REST,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .name = _("Rock Slide"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HYPER_FANG] =
    {
        .name = _("Hyper Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SHARPEN] =
    {
        .name = _("Sharpen"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CONVERSION] =
    {
        .name = _("Conversin"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONVERSION,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TRI_ATTACK] =
    {
        .name = _("Tri Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TRI_ATTACK,
            .chance = 20,
        }),
    },

    [MOVE_SUPER_FANG] =
    {
        .name = _("Super Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_SLASH] =
    {
        .name = _("Slash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_SUBSTITUTE] =
    {
        .name = _("Substitute"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUBSTITUTE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STRUGGLE] =
    {
        .name = _("Struggle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_RECOIL_HP_25,
            .accuracy = 0,
            .mirrorMoveBanned = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_RECOIL_HP_25,
                .self = TRUE,
            }),
        #else
            .effect = EFFECT_HIT,
            .accuracy = 100,
            .recoil = 25,
        #endif
        .power = 50,
        .type = TYPE_NORMAL,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_SKETCH] =
    {
        .name = _("Sketch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKETCH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_TRIPLE_KICK] =
    {
        .name = _("Triple Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_THIEF] =
    {
        .name = _("Thief"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEAL_ITEM,
        }),
    },

    [MOVE_SPIDER_WEB] =
    {
        .name = _("Spider Web"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_MIND_READER] =
    {
        .name = _("Mind Reader"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_NIGHTMARE] =
    {
        .name = _("Nightmare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NIGHTMARE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 100 : 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS <= GEN_3,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .name = _("Flame Wheel"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_SNORE] =
    {
        .name = _("Snore"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNORE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_CURSE] =
    {
        .name = _("Curse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CURSE,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_5 ? TYPE_GHOST : TYPE_MYSTERY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_CURSE },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FLAIL] =
    {
        .name = _("Flail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CONVERSION_2] =
    {
        .name = _("Conversion 2"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONVERSION_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_AEROBLAST] =
    {
        .name = _("Aeroblast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_COTTON_SPORE] =
    {
        .name = _("Cotton Spore"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 85,
        .pp = 40,
        .target = B_UPDATED_MOVE_DATA >= GEN_6 ? MOVE_TARGET_BOTH : MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_REVERSAL] =
    {
        .name = _("Reversal"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SPITE] =
    {
        .name = _("Spite"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPITE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_POWDER_SNOW] =
    {
        .name = _("Powder Snow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_PROTECT] =
    {
        .name = _("Protect"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MACH_PUNCH] =
    {
        .name = _("Mach Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_SCARY_FACE] =
    {
        .name = _("Scary Face"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FEINT_ATTACK] =
    {
        .name = _("Feint Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
    },

    [MOVE_SWEET_KISS] =
    {
        .name = _("Sweet Kiss"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BELLY_DRUM] =
    {
        .name = _("Belly Drum"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BELLY_DRUM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SLUDGE_BOMB] =
    {
        .name = _("Sludge Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_MUD_SLAP] =
    {
        .name = _("Mud-Slap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_OCTAZOOKA] =
    {
        .name = _("Octazooka"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_SPIKES] =
    {
        .name = _("Spikes"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPIKES,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .forcePressure = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ZAP_CANNON] =
    {
        .name = _("Zap Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 120 : 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_FORESIGHT] =
    {
        .name = _("Foresight"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 0 : 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_DESTINY_BOND] =
    {
        .name = _("Destiny Bond"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DESTINY_BOND,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_FOLLOW_ME },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PERISH_SONG] =
    {
        .name = _("Perish Song"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PERISH_SONG,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .mirrorMoveBanned = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_ICY_WIND] =
    {
        .name = _("Icy Wind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_DETECT] =
    {
        .name = _("Detect"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BONE_RUSH] =
    {
        .name = _("Bone Rush"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GROUND,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 80,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LOCK_ON] =
    {
        .name = _("Lock-On"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
    },

    [MOVE_OUTRAGE] =
    {
        .name = _("Outrage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 120 : 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 15,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_SANDSTORM] =
    {
        .name = _("Sandstorm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SANDSTORM,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .windMove = TRUE,
    },

    [MOVE_GIGA_DRAIN] =
    {
        .name = _("Giga Drain"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 10 : 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_ENDURE] =
    {
        .name = _("Endure"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENDURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 4 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_CHARM] =
    {
        .name = _("Charm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ROLLOUT] =
    {
        .name = _("Rollout"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FALSE_SWIPE] =
    {
        .name = _("False Swipe"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SWAGGER] =
    {
        .name = _("Swagger"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SWAGGER,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 85 : 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MILK_DRINK] =
    {
        .name = _("Milk Drink"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SPARK] =
    {
        .name = _("Spark"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_FURY_CUTTER] =
    {
        .name = _("Fury Cutter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 20,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_FURY_CUTTER,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_STEEL_WING] =
    {
        .name = _("Steel Wing"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_PLUS_1,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_MEAN_LOOK] =
    {
        .name = _("Mean Look"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_ATTRACT] =
    {
        .name = _("Attract"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTRACT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SLEEP_TALK] =
    {
        .name = _("Sleep Talk"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP_TALK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mimicBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_HEAL_BELL] =
    {
        .name = _("Heal Bell"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = B_UPDATED_MOVE_FLAGS != GEN_5,
    },

    [MOVE_RETURN] =
    {
        .name = _("Return"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PRESENT] =
    {
        .name = _("Present"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PRESENT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_FRUSTRATION] =
    {
        .name = _("Frustration"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FRUSTRATION,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SAFEGUARD] =
    {
        .name = _("Safeguard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SAFEGUARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 25,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PAIN_SPLIT] =
    {
        .name = _("Pain Split"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PAIN_SPLIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
    },

    [MOVE_SACRED_FIRE] =
    {
        .name = _("Sacred Fire"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 50,
        }),
    },

    [MOVE_MAGNITUDE] =
    {
        .name = _("Magnitude"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNITUDE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .name = _("DynamicPunch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 100,
        }),
    },

    [MOVE_MEGAHORN] =
    {
        .name = _("Megahorn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_BREATH] =
    {
        .name = _("DragonBreath"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_BATON_PASS] =
    {
        .name = _("Baton Pass"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BATON_PASS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ENCORE] =
    {
        .name = _("Encore"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENCORE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .encoreBanned = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_PURSUIT] =
    {
        .name = _("Pursuit"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PURSUIT,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_3 || B_UPDATED_MOVE_FLAGS == GEN_4),
    },

    [MOVE_RAPID_SPIN] =
    {
        .name = _("Rapid Spin"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 50 : 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RAPIDSPIN,
            .self = TRUE,
        }
        #if B_SPEED_BUFFING_RAPID_SPIN >= GEN_8
            ,{
                .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
                .self = TRUE,
                .chance = 100,
            }
        #endif
        ),
    },

    [MOVE_SWEET_SCENT] =
    {
        .name = _("Sweet Scent"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_6 ? EFFECT_EVASION_DOWN_2 : EFFECT_EVASION_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_IRON_TAIL] =
    {
        .name = _("Iron Tail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_METAL_CLAW] =
    {
        .name = _("Metal Claw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 35,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_VITAL_THROW] =
    {
        .name = _("Vital Throw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MORNING_SUN] =
    {
        .name = _("Morning Sun"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MORNING_SUN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SYNTHESIS] =
    {
        .name = _("Synthesis"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SYNTHESIS,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_MOONLIGHT] =
    {
        .name = _("Moonlight"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MOONLIGHT,
        .power = 0,
        .type = B_UPDATED_MOVE_TYPES >= GEN_6 ? TYPE_FAIRY : TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HIDDEN_POWER] =
    {
        .name = _("Hidden Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = B_HIDDEN_POWER_DMG >= GEN_6 ? 60 : 1,
        .effect = EFFECT_HIDDEN_POWER,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CROSS_CHOP] =
    {
        .name = _("Cross Chop"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TWISTER] =
    {
        .name = _("Twister"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_RAIN_DANCE] =
    {
        .name = _("Rain Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_DANCE,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SUNNY_DAY] =
    {
        .name = _("Sunny Day"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUNNY_DAY,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CRUNCH] =
    {
        .name = _("Crunch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
        #else
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
        #endif
            .chance = 20,
        }),
    },

    [MOVE_MIRROR_COAT] =
    {
        .name = _("Mirror Coat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRROR_COAT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PSYCH_UP] =
    {
        .name = _("Psych Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCH_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS < GEN_5,
    },

    [MOVE_EXTREME_SPEED] =
    {
        .name = _("ExtremeSpeed"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 2 : 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ANCIENT_POWER] =
    {
        .name = _("AncientPower"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = B_UPDATED_MOVE_DATA < GEN_4,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_BALL] =
    {
        .name = _("Shadow Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_FUTURE_SIGHT] =
    {
        .name = _("Future Sight"),
        .description = COMPOUND_STRING("Dummy2 description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 90,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ROCK_SMASH] =
    {
        .name = _("Rock Smash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 40 : 20,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_WHIRLPOOL] =
    {
        .name = _("Whirlpool"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_WATER,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_BEAT_UP] =
    {
        .name = _("Beat Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BEAT_UP,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 1 : 10,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FAKE_OUT] =
    {
        .name = _("Fake Out"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .priority = B_UPDATED_MOVE_DATA >= GEN_5 ? 3 : 1,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
        .effect = EFFECT_FAKE_OUT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 100,
        }),
    },

    [MOVE_UPROAR] =
    {
        .name = _("Uproar"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_UPROAR,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_UPROAR,
            .self = TRUE,
        }),
    },

    [MOVE_STOCKPILE] =
    {
        .name = _("Stockpile"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOCKPILE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_4 ? 20 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SPIT_UP] =
    {
        .name = _("Spit Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPIT_UP,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 1 : 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SWALLOW] =
    {
        .name = _("Swallow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SWALLOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAT_WAVE] =
    {
        .name = _("Heat Wave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 100,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_HAIL] =
    {
        .name = _("Hail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HAIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TORMENT] =
    {
        .name = _("Torment"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TORMENT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLATTER] =
    {
        .name = _("Flatter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLATTER,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WILL_O_WISP] =
    {
        .name = _("Will-o-Wisp"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WILL_O_WISP,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 85 : 75,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEMENTO] =
    {
        .name = _("Memento"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEMENTO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESTORE_REPLACEMENT_HP },
    },

    [MOVE_FACADE] =
    {
        .name = _("Facade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FACADE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .name = _("Focus Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOCUS_PUNCH,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = TRUE,
        .punchingMove = TRUE,
        .meFirstBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SMELLING_SALTS] =
    {
        .name = _("SmellngSalts"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 70 : 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
        }),
    },

    [MOVE_FOLLOW_ME] =
    {
        .name = _("Follow Me"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 2 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_NATURE_POWER] =
    {
        .name = _("Nature Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NATURE_POWER,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_CHARGE] =
    {
        .name = _("Charge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHARGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAUNT] =
    {
        .name = _("Taunt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAUNT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_HELPING_HAND] =
    {
        .name = _("Helping Hand"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HELPING_HAND,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = B_UPDATED_MOVE_DATA >= GEN_4 ? MOVE_TARGET_ALLY : MOVE_TARGET_USER,
        .priority = 5,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TRICK] =
    {
        .name = _("Trick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_ROLE_PLAY] =
    {
        .name = _("Role Play"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLE_PLAY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WISH] =
    {
        .name = _("Wish"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WISH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .healingMove = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ASSIST] =
    {
        .name = _("Assist"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ASSIST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_INGRAIN] =
    {
        .name = _("Ingrain"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_INGRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SUPERPOWER] =
    {
        .name = _("Superpower"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_DEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_MAGIC_COAT] =
    {
        .name = _("Magic Coat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGIC_COAT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RECYCLE] =
    {
        .name = _("Recycle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECYCLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_REVENGE] =
    {
        .name = _("Revenge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRICK_BREAK] =
    {
        .name = _("Brick Break"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_YAWN] =
    {
        .name = _("Yawn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_YAWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_KNOCK_OFF] =
    {
        .name = _("Knock Off"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_KNOCK_OFF,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_KNOCK_OFF,
        }),
    },

    [MOVE_ENDEAVOR] =
    {
        .name = _("Endeavor"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENDEAVOR,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_ERUPTION] =
    {
        .name = _("Eruption"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKILL_SWAP] =
    {
        .name = _("Skill Swap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_IMPRISON] =
    {
        .name = _("Imprison"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_IMPRISON,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .forcePressure = TRUE,
    },

    [MOVE_REFRESH] =
    {
        .name = _("Refresh"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFRESH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRUDGE] =
    {
        .name = _("Grudge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRUDGE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_FOLLOW_ME },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SNATCH] =
    {
        .name = _("Snatch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNATCH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresSubstitute = TRUE,
        .forcePressure = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SECRET_POWER] =
    {
        .name = _("Secret Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SECRET_POWER,
            .chance = 30,
        }),
    },

    [MOVE_DIVE] =
    {
        .name = _("Dive"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 80 : 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ARM_THRUST] =
    {
        .name = _("Arm Thrust"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .name = _("Camouflage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CAMOUFLAGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAIL_GLOW] =
    {
        .name = _("Tail Glow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = B_UPDATED_MOVE_DATA >= GEN_5 ? EFFECT_SPECIAL_ATTACK_UP_3 : EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LUSTER_PURGE] =
    {
        .name = _("Luster Purge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_MIST_BALL] =
    {
        .name = _("Mist Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_FEATHER_DANCE] =
    {
        .name = _("FeatherDance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_TEETER_DANCE] =
    {
        .name = _("Teeter Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TEETER_DANCE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .danceMove = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_BLAZE_KICK] =
    {
        .name = _("Blaze Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_MUD_SPORT] =
    {
        .name = _("Mud Sport"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MUD_SPORT,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ICE_BALL] =
    {
        .name = _("Ice Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ballisticMove = TRUE,
        .instructBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_NEEDLE_ARM] =
    {
        .name = _("Needle Arm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_SLACK_OFF] =
    {
        .name = _("Slack Off"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HYPER_VOICE] =
    {
        .name = _("Hyper Voice"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_POISON_FANG] =
    {
        .name = _("Poison Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TOXIC,
            .chance = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 30,
        }),
    },

    [MOVE_CRUSH_CLAW] =
    {
        .name = _("Crush Claw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_BLAST_BURN] =
    {
        .name = _("Blast Burn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_HYDRO_CANNON] =
    {
        .name = _("Hydro Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_METEOR_MASH] =
    {
        .name = _("Meteor Mash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 100,
        .type = TYPE_STEEL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 20,
        }),
    },

    [MOVE_ASTONISH] =
    {
        .name = _("Astonish"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_WEATHER_BALL] =
    {
        .name = _("Weather Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WEATHER_BALL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AROMATHERAPY] =
    {
        .name = _("Aromatherapy"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FAKE_TEARS] =
    {
        .name = _("Fake Tears"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AIR_CUTTER] =
    {
        .name = _("Air Cutter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 55,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_OVERHEAT] =
    {
        .name = _("Overheat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = B_UPDATED_MOVE_DATA < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_ODOR_SLEUTH] =
    {
        .name = _("Odor Sleuth"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_4 ? 0 : 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ROCK_TOMB] =
    {
        .name = _("Rock Tomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 50,
        .type = TYPE_ROCK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 95 : 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SILVER_WIND] =
    {
        .name = _("Silver Wind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_METAL_SOUND] =
    {
        .name = _("Metal Sound"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_GRASS_WHISTLE] =
    {
        .name = _("GrassWhistle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 55,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_TICKLE] =
    {
        .name = _("Tickle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TICKLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_COSMIC_POWER] =
    {
        .name = _("Cosmic Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WATER_SPOUT] =
    {
        .name = _("Water Spout"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .name = _("Signal Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .name = _("hadow Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_EXTRASENSORY] =
    {
        .name = _("Extrasensory"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 20 : 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SKY_UPPERCUT] =
    {
        .name = _("Sky Uppercut"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .damagesAirborne = TRUE,
    },

    [MOVE_SAND_TOMB] =
    {
        .name = _("Sand Tomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 35 : 15,
        .type = TYPE_GROUND,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 85 : 70,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_SHEER_COLD] =
    {
        .name = _("Sheer Cold"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 30,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MUDDY_WATER] =
    {
        .name = _("Muddy Water"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 95,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_BULLET_SEED] =
    {
        .name = _("Bullet Seed"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 25 : 10,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AERIAL_ACE] =
    {
        .name = _("Aerial Ace"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_ICICLE_SPEAR] =
    {
        .name = _("Icicle Spear"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 25 : 10,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .name = _("Iron Defense"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BLOCK] =
    {
        .name = _("Block"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_HOWL] =
    {
        .name = _("Howl"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 0,
        .effect = B_UPDATED_MOVE_DATA >= GEN_8 ? EFFECT_ATTACK_UP_USER_ALLY : EFFECT_ATTACK_UP,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_DRAGON_CLAW] =
    {
        .name = _("Dragon Claw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FRENZY_PLANT] =
    {
        .name = _("Frenzy Plant"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_BULK_UP] =
    {
        .name = _("Bulk Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BOUNCE] =
    {
        .name = _("Bounce"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 85,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_MUD_SHOT] =
    {
        .name = _("Mud Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_POISON_TAIL] =
    {
        .name = _("Poison Tail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_COVET] =
    {
        .name = _("Covet"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 60 : 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 25 : 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = B_UPDATED_MOVE_DATA >= GEN_4,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEAL_ITEM,
        }),
    },

    [MOVE_VOLT_TACKLE] =
    {
        .name = _("Volt Tackle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .sheerForceBoost = TRUE,
            .additionalEffects = ADDITIONAL_EFFECTS({
                .moveEffect = MOVE_EFFECT_PARALYSIS,
                .chance = 10,
            }),
        #endif
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .name = _("Magical Leaf"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_SPORT] =
    {
        .name = _("Water Sport"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WATER_SPORT,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_CALM_MIND] =
    {
        .name = _("Calm Mind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CALM_MIND,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LEAF_BLADE] =
    {
        .name = _("Leaf Blade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_4 ? 90 : 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_DRAGON_DANCE] =
    {
        .name = _("Dragon Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ROCK_BLAST] =
    {
        .name = _("Rock Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ROCK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 90 : 80,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_SHOCK_WAVE] =
    {
        .name = _("Shock Wave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_PULSE] =
    {
        .name = _("Water Pulse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_DOOM_DESIRE] =
    {
        .name = _("Doom Desire"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUTURE_SIGHT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 140 : 120,
        .type = TYPE_STEEL,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 100 : 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .name = _("Psycho Boost"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_ROOST] =
    {
        .name = _("Roost"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROOST,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRAVITY] =
    {
        .name = _("Gravity"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRAVITY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MIRACLE_EYE] =
    {
        .name = _("Miracle Eye"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIRACLE_EYE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WAKE_UP_SLAP] =
    {
        .name = _("Wake-Up Slap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 70 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_SLEEP,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
        }),
    },

    [MOVE_HAMMER_ARM] =
    {
        .name = _("Hammer Arm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_GYRO_BALL] =
    {
        .name = _("Gyro Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GYRO_BALL,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_HEALING_WISH] =
    {
        .name = _("Healing Wish"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .healingMove = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BRINE] =
    {
        .name = _("Brine"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRINE,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_NATURAL_GIFT] =
    {
        .name = _("Natural Gift"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NATURAL_GIFT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FEINT] =
    {
        .name = _("Feint"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 30 : 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_6,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_PLUCK] =
    {
        .name = _("Pluck"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BUG_BITE,
        }),
    },

    [MOVE_TAILWIND] =
    {
        .name = _("Tailwind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAILWIND,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .snatchAffected = TRUE,
        .windMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ACUPRESSURE] =
    {
        .name = _("Acupressure"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACUPRESSURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER | MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS < GEN_5,
    },

    [MOVE_METAL_BURST] =
    {
        .name = _("Metal Burst"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .meFirstBanned = TRUE,
    },

    [MOVE_U_TURN] =
    {
        .name = _("U-turn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CLOSE_COMBAT] =
    {
        .name = _("Close Combat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_PAYBACK] =
    {
        .name = _("Payback"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PAYBACK,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ASSURANCE] =
    {
        .name = _("Asurance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ASSURANCE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EMBARGO] =
    {
        .name = _("Embargo"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EMBARGO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLING] =
    {
        .name = _("Fling"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLING,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_PSYCHO_SHIFT] =
    {
        .name = _("Psycho Shift"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCHO_SHIFT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
    },

    [MOVE_TRUMP_CARD] =
    {
        .name = _("Trump Card"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRUMP_CARD,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_HEAL_BLOCK] =
    {
        .name = _("Heal Block"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_BLOCK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WRING_OUT] =
    {
        .name = _("Wring Out"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_POWER_TRICK] =
    {
        .name = _("Power Trick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GASTRO_ACID] =
    {
        .name = _("Gastro Acid"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GASTRO_ACID,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LUCKY_CHANT] =
    {
        .name = _("Lucky Chant"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LUCKY_CHANT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ME_FIRST] =
    {
        .name = _("Me First"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ME_FIRST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_COPYCAT] =
    {
        .name = _("Copycat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COPYCAT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .mimicBanned = TRUE,
    },

    [MOVE_POWER_SWAP] =
    {
        .name = _("Power Swap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_GUARD_SWAP] =
    {
        .name = _("Guard Swap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUARD_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_PUNISHMENT] =
    {
        .name = _("Punishment"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PUNISHMENT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LAST_RESORT] =
    {
        .name = _("Last Resort"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LAST_RESORT,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 140 : 130,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WORRY_SEED] =
    {
        .name = _("Worry Seed"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WORRY_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SUCKER_PUNCH] =
    {
        .name = _("Sucker Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUCKER_PUNCH,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 70 : 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TOXIC_SPIKES] =
    {
        .name = _("Toxic Spikes"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC_SPIKES,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .forcePressure = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_HEART_SWAP] =
    {
        .name = _("Heart Swap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEART_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_AQUA_RING] =
    {
        .name = _("Aqua Ring"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AQUA_RING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_MAGNET_RISE] =
    {
        .name = _("Magnet Rise"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNET_RISE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_FLARE_BLITZ] =
    {
        .name = _("Flare Blitz"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_FORCE_PALM] =
    {
        .name = _("Force Palm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_AURA_SPHERE] =
    {
        .name = _("Aura Sphere"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 90,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_ROCK_POLISH] =
    {
        .name = _("Rock Polish"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_POISON_JAB] =
    {
        .name = _("Poison Jab"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_DARK_PULSE] =
    {
        .name = _("Dark Pulse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_NIGHT_SLASH] =
    {
        .name = _("Night Slash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_AQUA_TAIL] =
    {
        .name = _("Aqua Tail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SEED_BOMB] =
    {
        .name = _("Seed Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AIR_SLASH] =
    {
        .name = _("Air Slash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_X_SCISSOR] =
    {
        .name = _("X-Scissor"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_BUG_BUZZ] =
    {
        .name = _("Bug Buzz"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_DRAGON_PULSE] =
    {
        .name = _("Dragon Pulse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 85 : 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_DRAGON_RUSH] =
    {
        .name = _("Dragon Rush"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 75,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_POWER_GEM] =
    {
        .name = _("Power Gem"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 70,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .name = _("Drain Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_5 ? 10 : 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_VACUUM_WAVE] =
    {
        .name = _("Vacuum Wave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_FOCUS_BLAST] =
    {
        .name = _("Focus Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_ENERGY_BALL] =
    {
        .name = _("Energy Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 90 : 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_BRAVE_BIRD] =
    {
        .name = _("Brave Bird"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EARTH_POWER] =
    {
        .name = _("Earth Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_SWITCHEROO] =
    {
        .name = _("Switcheroo"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_GIGA_IMPACT] =
    {
        .name = _("Giga Impact"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_NASTY_PLOT] =
    {
        .name = _("Nasty Plot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BULLET_PUNCH] =
    {
        .name = _("Bullet Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_AVALANCHE] =
    {
        .name = _("Avalanche"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ICE_SHARD] =
    {
        .name = _("Ice Shard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SHADOW_CLAW] =
    {
        .name = _("Shadow Claw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THUNDER_FANG] =
    {
        .name = _("Thunder Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_ICE_FANG] =
    {
        .name = _("Ice Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_FIRE_FANG] =
    {
        .name = _("Fire Fang"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_SNEAK] =
    {
        .name = _("Shadow Sneak"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MUD_BOMB] =
    {
        .name = _("Mud Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_PSYCHO_CUT] =
    {
        .name = _("Psycho Cut"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .name = _("Zen Headbutt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_MIRROR_SHOT] =
    {
        .name = _("Mirro Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_FLASH_CANNON] =
    {
        .name = _("Flash Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_ROCK_CLIMB] =
    {
        .name = _("Rock Climb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_DEFOG] =
    {
        .name = _("Defog"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFOG,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        //.ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_TRICK_ROOM] =
    {
        .name = _("Trick Room"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRICK_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_DRACO_METEOR] =
    {
        .name = _("Draco Meteor"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_DISCHARGE] =
    {
        .name = _("Discharge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_LAVA_PLUME] =
    {
        .name = _("Lava Plume"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_LEAF_STORM] =
    {
        .name = _("Leaf Storm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 130 : 140,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_POWER_WHIP] =
    {
        .name = _("Power Whip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ROCK_WRECKER] =
    {
        .name = _("Rock Wrecker"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_CROSS_POISON] =
    {
        .name = _("Cross Poison"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_GUNK_SHOT] =
    {
        .name = _("Gunk Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_IRON_HEAD] =
    {
        .name = _("Iron Head"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_MAGNET_BOMB] =
    {
        .name = _("Magnet Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_STONE_EDGE] =
    {
        .name = _("Stone Edge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CAPTIVATE] =
    {
        .name = _("Captivate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CAPTIVATE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_STEALTH_ROCK] =
    {
        .name = _("Stealth Rock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STEALTH_ROCK,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .forcePressure = TRUE,
    },

    [MOVE_GRASS_KNOT] =
    {
        .name = _("Grass Knot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_CHATTER] =
    {
        .name = _("Chatter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_6,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .chance = 100,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .chance = 10,
        #else
            .chance = 31,
        #endif
        }),
    },

    [MOVE_JUDGMENT] =
    {
        .name = _("Judgment"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_PLATE,
    },

    [MOVE_BUG_BITE] =
    {
        .name = _("Bug Bite"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BUG_BITE,
        }),
    },

    [MOVE_CHARGE_BEAM] =
    {
        .name = _("Charge Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 70,
        }),
    },

    [MOVE_WOOD_HAMMER] =
    {
        .name = _("Wood Hammer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AQUA_JET] =
    {
        .name = _("Aqua Jet"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ATTACK_ORDER] =
    {
        .name = _("Attack Order"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_DEFEND_ORDER] =
    {
        .name = _("Defend Order"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAL_ORDER] =
    {
        .name = _("Heal Order"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAD_SMASH] =
    {
        .name = _("Head Smash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .recoil = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_HIT] =
    {
        .name = _("Double Hit"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_ROAR_OF_TIME] =
    {
        .name = _("Roar of Time"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_SPACIAL_REND] =
    {
        .name = _("Spacial Rend"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_LUNAR_DANCE] =
    {
        .name = _("Lunar Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_CRUSH_GRIP] =
    {
        .name = _("Crush Grip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MAGMA_STORM] =
    {
        .name = _("Magma Storm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 100 : 120,
        .type = TYPE_FIRE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_5 ? 75 : 70,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_DARK_VOID] =
    {
        .name = _("Dark Void"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DARK_VOID,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 50 : 80,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SEED_FLARE] =
    {
        .name = _("Seed Flare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 40,
        }),
    },

    [MOVE_OMINOUS_WIND] =
    {
        .name = _("Ominous Wind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 10,
        }),
    },

    [MOVE_SHADOW_FORCE] =
    {
        .name = _("Shadow Force"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_HONE_CLAWS] =
    {
        .name = _("Hone Claws"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_ACCURACY_UP,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WIDE_GUARD] =
    {
        .name = _("Wide Guard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GUARD_SPLIT] =
    {
        .name = _("Guard Split"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GUARD_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_POWER_SPLIT] =
    {
        .name = _("Power Split"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WONDER_ROOM] =
    {
        .name = _("Wonder Room"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WONDER_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_PSYSHOCK] =
    {
        .name = _("Psyshock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_VENOSHOCK] =
    {
        .name = _("Venoshock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_PSN_ANY,
    },

    [MOVE_AUTOTOMIZE] =
    {
        .name = _("Autotomize"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AUTOTOMIZE,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RAGE_POWDER] =
    {
        .name = _("Rage Powder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 2 : 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .powderMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TELEKINESIS] =
    {
        .name = _("Telekinesis"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TELEKINESIS,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_MAGIC_ROOM] =
    {
        .name = _("Magic Room"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGIC_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = B_UPDATED_MOVE_DATA >= GEN_6 ? 0 : -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_SMACK_DOWN] =
    {
        .name = _("Smack Down"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SMACK_DOWN,
        }),
    },

    [MOVE_STORM_THROW] =
    {
        .name = _("Storm Throw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_FLAME_BURST] =
    {
        .name = _("Flame Burst"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLAME_BURST,
            .self = TRUE,
        }),
    },

    [MOVE_SLUDGE_WAVE] =
    {
        .name = _("Sludge Wave"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 10,
        }),
    },

    [MOVE_QUIVER_DANCE] =
    {
        .name = _("Quiver Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_QUIVER_DANCE,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAVY_SLAM] =
    {
        .name = _("Heavy Slam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_7,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SYNCHRONOISE] =
    {
        .name = _("Synchronoise"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SYNCHRONOISE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 120 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 10 : 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_ELECTRO_BALL] =
    {
        .name = _("Electro Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRO_BALL,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_SOAK] =
    {
        .name = _("Soak"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FLAME_CHARGE] =
    {
        .name = _("Flame Charge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_COIL] =
    {
        .name = _("Coil"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COIL,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LOW_SWEEP] =
    {
        .name = _("Low Sweep"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_ACID_SPRAY] =
    {
        .name = _("Acid Spray"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 100,
        }),
    },

    [MOVE_FOUL_PLAY] =
    {
        .name = _("Foul Play"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOUL_PLAY,
        .power = 95,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SIMPLE_BEAM] =
    {
        .name = _("Simple Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SIMPLE_BEAM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ENTRAINMENT] =
    {
        .name = _("Entrainment"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ENTRAINMENT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AFTER_YOU] =
    {
        .name = _("After You"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AFTER_YOU,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ROUND] =
    {
        .name = _("Round"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROUND,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ROUND,
        }),
    },

    [MOVE_ECHOED_VOICE] =
    {
        .name = _("Echoed Voice"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ECHOED_VOICE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_CHIP_AWAY] =
    {
        .name = _("Chip Away"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_CLEAR_SMOG] =
    {
        .name = _("Clear Smog"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CLEAR_SMOG,
        }),
    },

    [MOVE_STORED_POWER] =
    {
        .name = _("Stored Power"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_QUICK_GUARD] =
    {
        .name = _("Quick Guard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ALLY_SWITCH] =
    {
        .name = _("Ally Switch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ALLY_SWITCH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = B_UPDATED_MOVE_DATA >= GEN_7 ? 2 : 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SCALD] =
    {
        .name = _("Scald"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_SHELL_SMASH] =
    {
        .name = _("Shell Smash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_SMASH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAL_PULSE] =
    {
        .name = _("Heal Pulse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .pulseMove = TRUE,
    },

    [MOVE_HEX] =
    {
        .name = _("Hex"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 65 : 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_ANY,
    },

    [MOVE_SKY_DROP] =
    {
        .name = _("Sky Drop"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SKY_DROP,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SHIFT_GEAR] =
    {
        .name = _("Shift Gear"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHIFT_GEAR,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CIRCLE_THROW] =
    {
        .name = _("Circle Throw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_INCINERATE] =
    {
        .name = _("Incinerate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 30,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_INCINERATE,
        }),
    },

    [MOVE_QUASH] =
    {
        .name = _("Quash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_QUASH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .metronomeBanned = TRUE,
    },

    [MOVE_ACROBATICS] =
    {
        .name = _("Acrobatics"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ACROBATICS,
        .power = 55,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_REFLECT_TYPE] =
    {
        .name = _("Reflect Type"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REFLECT_TYPE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RETALIATE] =
    {
        .name = _("Retaliate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETALIATE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FINAL_GAMBIT] =
    {
        .name = _("Final Gambit"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FINAL_GAMBIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_BESTOW] =
    {
        .name = _("Bestow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BESTOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_INFERNO] =
    {
        .name = _("Inferno"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 100,
        }),
    },

    [MOVE_WATER_PLEDGE] =
    {
        .name = _("Water Pledge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FIRE_PLEDGE] =
    {
        .name = _("Fire Pledge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_GRASS_PLEDGE] =
    {
        .name = _("Grass Pledge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLEDGE,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 80 : 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VOLT_SWITCH] =
    {
        .name = _("Volt Switch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STRUGGLE_BUG] =
    {
        .name = _("Strugle Bug"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 50 : 30,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BULLDOZE] =
    {
        .name = _("Bulldoze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BULLDOZE,
        .power = 60,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_FROST_BREATH] =
    {
        .name = _("Frost Breath"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 60 : 40,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_DRAGON_TAIL] =
    {
        .name = _("Dragon Tail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_WORK_UP] =
    {
        .name = _("Work Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_SPATK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE
    },

    [MOVE_ELECTROWEB] =
    {
        .name = _("Electroweb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_WILD_CHARGE] =
    {
        .name = _("Wild Chagre"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_RUN] =
    {
        .name = _("Drill Run"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DUAL_CHOP] =
    {
        .name = _("Dual Chop"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_HEART_STAMP] =
    {
        .name = _("Heart Stamp"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_HORN_LEECH] =
    {
        .name = _("Horn Leech"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 75,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SACRED_SWORD] =
    {
        .name = _("Sacred Sword"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_6 ? 15 : 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_RAZOR_SHELL] =
    {
        .name = _("Razor Shell"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_HEAT_CRASH] =
    {
        .name = _("Heat Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_LEAF_TORNADO] =
    {
        .name = _("Leaf Tornado"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        //.windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 50,
        }),
    },

    [MOVE_STEAMROLLER] =
    {
        .name = _("Steamroller"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_COTTON_GUARD] =
    {
        .name = _("Cotton Guard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_3,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NIGHT_DAZE] =
    {
        .name = _("Night Daze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ACC_MINUS_1,
            .chance = 40,
        }),
    },

    [MOVE_PSYSTRIKE] =
    {
        .name = _("Psystrike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TAIL_SLAP] =
    {
        .name = _("Tail Slap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HURRICANE] =
    {
        .name = _("Hurricane"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THUNDER,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 110 : 120,
        .type = TYPE_FLYING,
        .accuracy = 70,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .damagesAirborne = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_HEAD_CHARGE] =
    {
        .name = _("Head Charge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GEAR_GRIND] =
    {
        .name = _("Gear Grind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SEARING_SHOT] =
    {
        .name = _("Searing Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_TECHNO_BLAST] =
    {
        .name = _("Techno Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = B_UPDATED_MOVE_DATA >= GEN_6 ? 120 : 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_DRIVE,
        .metronomeBanned = TRUE,
    },

    [MOVE_RELIC_SONG] =
    {
        .name = _("Relic Song"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RELIC_SONG,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_SLEEP,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SLEEP,
            .chance = 10,
        }),
    },

    [MOVE_SECRET_SWORD] =
    {
        .name = _("Secret Sword"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GLACIATE] =
    {
        .name = _("Glaciate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BOLT_STRIKE] =
    {
        .name = _("Bolt Strike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 20,
        }),
    },

    [MOVE_BLUE_FLARE] =
    {
        .name = _("Blue Flare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_FIERY_DANCE] =
    {
        .name = _("Fiery Dance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 50,
        }),
    },

    [MOVE_FREEZE_SHOCK] =
    {
        .name = _("Freeze Shock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_ICE_BURN] =
    {
        .name = _("Ice Burn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_SNARL] =
    {
        .name = _("Snarl"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_ICICLE_CRASH] =
    {
        .name = _("Icicle Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_V_CREATE] =
    {
        .name = _("V-create"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_V_CREATE,
            .self = TRUE,
        }),
    },

    [MOVE_FUSION_FLARE] =
    {
        .name = _("Fusion Flare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_FUSION_BOLT] =
    {
        .name = _("Fusion Bolt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FLYING_PRESS] =
    {
        .name = _("Flying Press"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TWO_TYPED_MOVE,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 100 : 80,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = TYPE_FLYING,
        .makesContact = TRUE,
        .minimizeDoubleDamage = TRUE,
        .gravityBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MAT_BLOCK] =
    {
        .name = _("Mat Block"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAT_BLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_BELCH] =
    {
        .name = _("Belch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BELCH,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_ROTOTILLER] =
    {
        .name = _("Rototiller"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ROTOTILLER,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STICKY_WEB] =
    {
        .name = _("Sticky Web"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STICKY_WEB,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_OPPONENTS_FIELD,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .magicCoatAffected = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FELL_STINGER] =
    {
        .name = _("Fell Stinger"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FELL_STINGER,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 50 : 30,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 25,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PHANTOM_FORCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Phantom Force"),
        #else
            .name = _("PhantomForce"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_TRICK_OR_TREAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Trick-or-Treat"),
        #else
            .name = _("TrickOrTreat"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GHOST,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NOBLE_ROAR] =
    {
        .name = _("Noble Roar"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .magicCoatAffected = TRUE,
        .soundMove = TRUE,
    },

    [MOVE_ION_DELUGE] =
    {
        .name = _("Ion Deluge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ION_DELUGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 25,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PARABOLIC_CHARGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Parabolic Charge"),
        #else
            .name = _("ParaboldChrg"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 65 : 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_FORESTS_CURSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Forest's Curse"),
        #else
            .name = _("Forest'sCurs"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GRASS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PETAL_BLIZZARD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Petal Blizzard"),
        #else
            .name = _("PetalBlizzrd"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .windMove = TRUE,
    },

    [MOVE_FREEZE_DRY] =
    {
        .name = _("Freeze-Dry"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FREEZE_DRY,
        .power = 70,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_DISARMING_VOICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Disarming Voice"),
        #else
            .name = _("DisrmngVoice"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_PARTING_SHOT] =
    {
        .name = _("Parting Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PARTING_SHOT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESTORE_REPLACEMENT_HP },
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_TOPSY_TURVY] =
    {
        .name = _("Topsy-Turvy"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOPSY_TURVY,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_7 ? 0 : 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAINING_KISS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Draining Kiss"),
        #else
            .name = _("DrainingKiss"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 50,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .makesContact = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_CRAFTY_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Crafty Shield"),
        #else
            .name = _("CraftyShield"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TRUE, // Protects the whole side.
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FLOWER_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Flower Shield"),
        #else
            .name = _("FlowerShield"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FLOWER_SHIELD,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRASSY_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Grassy Terrain"),
        #else
            .name = _("GrssyTerrain"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRASSY_TERRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MISTY_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Misty Terrain"),
        #else
            .name = _("MistyTerrain"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MISTY_TERRAIN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ELECTRIFY] =
    {
        .name = _("Electrify"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRIFY,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_PLAY_ROUGH] =
    {
        .name = _("Play Rough"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 10,
        }),
    },

    [MOVE_FAIRY_WIND] =
    {
        .name = _("Fairy Wind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_MOONBLAST] =
    {
        .name = _("Moonblast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_BOOMBURST] =
    {
        .name = _("Boomburst"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_FAIRY_LOCK] =
    {
        .name = _("Fairy Lock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIRY_LOCK,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_KINGS_SHIELD] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("King's Shield"),
        #else
            .name = _("King'sShield"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PLAY_NICE] =
    {
        .name = _("Play Nice"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFIDE] =
    {
        .name = _("Confide"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_DIAMOND_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Diamond Storm"),
        #else
            .name = _("DiamondStorm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = B_UPDATED_MOVE_DATA >= GEN_7 ? MOVE_EFFECT_DEF_PLUS_2:  MOVE_EFFECT_DEF_PLUS_1,
            .chance = 50,
        }),
    },

    [MOVE_STEAM_ERUPTION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Steam Eruption"),
        #else
            .name = _("SteamErption"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_HYPERSPACE_HOLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Hyperspace Hole"),
        #else
            .name = _("HyprspceHole"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FEINT,
        }),
    },

    [MOVE_WATER_SHURIKEN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Water Shuriken"),
        #else
            .name = _("WatrShuriken"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = B_UPDATED_MOVE_DATA >= GEN_7 ? BATTLE_CATEGORY_SPECIAL : BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_MYSTICAL_FIRE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Mystical Fire"),
        #else
            .name = _("MysticalFire"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_7 ? 75 : 65,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SPIKY_SHIELD] =
    {
        .name = _("Spiky Shield"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_AROMATIC_MIST] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Aromatic Mist"),
        #else
            .name = _("AromaticMist"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AROMATIC_MIST,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_EERIE_IMPULSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Eerie Impulse"),
        #else
            .name = _("EerieImpulse"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_VENOM_DRENCH] =
    {
        .name = _("Venom Drench"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_VENOM_DRENCH,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POWDER] =
    {
        .name = _("Powder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWDER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .powderMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_GEOMANCY] =
    {
        .name = _("Geomancy"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GEOMANCY,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_MAGNETIC_FLUX] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Magnetic Flux"),
        #else
            .name = _("MagneticFlux"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAGNETIC_FLUX,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HAPPY_HOUR] =
    {
        .name = _("Happy Hour"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ELECTRIC_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Electric Terrain"),
        #else
            .name = _("ElctrcTrrain"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ELECTRIC_TERRAIN,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DAZZLING_GLEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dazzling Gleam"),
        #else
            .name = _("DazzlngGleam"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CELEBRATE] =
    {
        .name = _("Celebrate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_HOLD_HANDS] =
    {
        .name = _("Hold Hands"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .mimicBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_BABY_DOLL_EYES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Baby-Doll Eyes"),
        #else
            .name = _("BabyDollEyes"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NUZZLE] =
    {
        .name = _("Nuzzle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_HOLD_BACK] =
    {
        .name = _("Hold Back"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_INFESTATION] =
    {
        .name = _("Infestation"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 20,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_POWER_UP_PUNCH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Power-Up Punch"),
        #else
            .name = _("PowerUpPunch"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_OBLIVION_WING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Oblivion Wing"),
        #else
            .name = _("OblivionWing"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_THOUSAND_ARROWS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Thousand Arrows"),
        #else
            .name = _("ThousndArrws"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .ignoreTypeIfFlyingAndUngrounded = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SMACK_DOWN,
        }),
    },

    [MOVE_THOUSAND_WAVES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Thousand Waves"),
        #else
            .name = _("ThousndWaves"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
        }),
    },

    [MOVE_LANDS_WRATH] =
    {
        .name = _("Land's Wrath"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_LIGHT_OF_RUIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Light of Ruin"),
        #else
            .name = _("LightOfRuin"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .recoil = 50,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ORIGIN_PULSE] =
    {
        .name = _("Origin Pulse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PRECIPICE_BLADES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Precipice Blades"),
        #else
            .name = _("PrcipceBldes"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRAGON_ASCENT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dragon Ascent"),
        #else
            .name = _("DragonAscent"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_HYPERSPACE_FURY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Hyperspace Fury"),
        #else
            .name = _("HyprspceFury"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HYPERSPACE_FURY,
        .power = 100,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS(
            // Feint move effect handled in script as it goes before animation
        {
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_SHORE_UP] =
    {
        .name = _("Shore Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHORE_UP,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 5 : 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healingMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FIRST_IMPRESSION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("First Impression"),
        #else
            .name = _("FrstImpressn"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAKE_OUT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BANEFUL_BUNKER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Baneful Bunker"),
        #else
            .name = _("BanefulBunkr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SPIRIT_SHACKLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Spirit Shackle"),
        #else
            .name = _("SpiritShackl"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
            .chance = 100,
        }),
    },

    [MOVE_DARKEST_LARIAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Darkest Lariat"),
        #else
            .name = _("DarkstLariat"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_SPARKLING_ARIA] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Sparkling Aria"),
        #else
            .name = _("SparklngAria"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_BURN,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_STATUS,
            .chance = 100,
        }),
    },

    [MOVE_ICE_HAMMER] =
    {
        .name = _("Ice Hammer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_FLORAL_HEALING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Floral Healing"),
        #else
            .name = _("FloralHealng"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .argument = MOVE_EFFECT_FLORAL_HEALING,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_HIGH_HORSEPOWER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("High Horsepower"),
        #else
            .name = _("HighHorseprw"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STRENGTH_SAP] =
    {
        .name = _("Strength Sap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STRENGTH_SAP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SOLAR_BLADE] =
    {
        .name = _("Solar Blade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 125,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_LEAFAGE] =
    {
        .name = _("Leafage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SPOTLIGHT] =
    {
        .name = _("Spotlight"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TOXIC_THREAD] =
    {
        .name = _("Toxic Thread"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TOXIC_THREAD,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LASER_FOCUS] =
    {
        .name = _("Laser Focus"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LASER_FOCUS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GEAR_UP] =
    {
        .name = _("Gear Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GEAR_UP,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_THROAT_CHOP] =
    {
        .name = _("Throat Chop"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THROAT_CHOP,
            .chance = 100,
        }),
    },

    [MOVE_POLLEN_PUFF] =
    {
        .name = _("Pollen Puff"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_ANCHOR_SHOT] =
    {
        .name = _("Anchor Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PREVENT_ESCAPE,
            .chance = 100,
        }),
    },

    [MOVE_PSYCHIC_TERRAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Psychic Terrain"),
        #else
            .name = _("PsychcTrrain"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYCHIC_TERRAIN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LUNGE] =
    {
        .name = _("Lunge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_FIRE_LASH] =
    {
        .name = _("Fire Lash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_POWER_TRIP] =
    {
        .name = _("Power Trip"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BURN_UP] =
    {
        .name = _("Burn Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIL_IF_NOT_ARG_TYPE,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
        .argument = TYPE_FIRE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_ARG_TYPE,
            .self = TRUE,
        }),
    },

    [MOVE_SPEED_SWAP] =
    {
        .name = _("Speed Swap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPEED_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SMART_STRIKE] =
    {
        .name = _("Smart Strike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PURIFY] =
    {
        .name = _("Purify"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PURIFY,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_REVELATION_DANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Revelation Dance"),
        #else
            .name = _("RvlationDnce"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVELATION_DANCE,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .danceMove = TRUE,
    },

    [MOVE_CORE_ENFORCER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Core Enforcer"),
        #else
            .name = _("CoreEnforcer"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .zMove = { .powerOverride = 140 },
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CORE_ENFORCER,
        }),
    },

    [MOVE_TROP_KICK] =
    {
        .name = _("Trop kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_INSTRUCT] =
    {
        .name = _("Instruct"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_INSTRUCT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_BEAK_BLAST] =
    {
        .name = _("Beak Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BEAK_BLAST,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = -3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .mirrorMoveBanned = TRUE,
        .ballisticMove = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_CLANGING_SCALES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Clanging Scales"),
        #else
            .name = _("ClngngScales"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_DRAGON_HAMMER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dragon Hammer"),
        #else
            .name = _("DragonHammer"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRUTAL_SWING] =
    {
        .name = _("Brutal Swing"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AURORA_VEIL] =
    {
        .name = _("Aurora Veil"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AURORA_VEIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SHELL_TRAP] =
    {
        .name = _("Shell Trap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_TRAP,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = -3,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_FLEUR_CANNON] =
    {
        .name = _("Fleur Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 130,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_TWO_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_PSYCHIC_FANGS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Psychic Fangs"),
        #else
            .name = _("PsychicFangs"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 85,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_STOMPING_TANTRUM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Stomping Tantrum"),
        #else
            .name = _("StmpngTantrm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SHADOW_BONE] =
    {
        .name = _("Shadow Bone"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_ACCELEROCK] =
    {
        .name = _("Accelerock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LIQUIDATION] =
    {
        .name = _("Liquidation"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 20,
        }),
    },

    [MOVE_PRISMATIC_LASER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Prismatic Laser"),
        #else
            .name = _("PrsmaticLasr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_SPECTRAL_THIEF] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Spectral Thief"),
        #else
            .name = _("SpectrlThief"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresSubstitute = TRUE,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPECTRAL_THIEF,
        }),
    },

    [MOVE_SUNSTEEL_STRIKE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Sunsteel Strike"),
        #else
            .name = _("SnsteelStrke"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MOONGEIST_BEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Moongeist Beam"),
        #else
            .name = _("MoongestBeam"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_TEARFUL_LOOK] =
    {
        .name = _("Tearful Look"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_ZING_ZAP] =
    {
        .name = _("Zing Zap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_NATURES_MADNESS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Nature's Madness"),
        #else
            .name = _("Natur'sMadns"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MULTI_ATTACK] =
    {
        .name = _("Multi-Attack"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 120 : 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = HOLD_EFFECT_MEMORY,
        .makesContact = TRUE,
    },

    [MOVE_MIND_BLOWN] =
    {
        .name = _("Mind Blown"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MIND_BLOWN,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_PLASMA_FISTS] =
    {
        .name = _("Plasma Fists"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLASMA_FISTS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PHOTON_GEYSER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Photon Geyser"),
        #else
            .name = _("PhotonGeyser"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PHOTON_GEYSER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ZIPPY_ZAP] =
    {
        .name = _("Zippy Zap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .sheerForceBoost = B_UPDATED_MOVE_DATA >= GEN_8,
        .alwaysCriticalHit = TRUE,
        .metronomeBanned = TRUE,
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_EVS_PLUS_1,
            .chance = 100,
        }),
        #endif
    },

    [MOVE_SPLISHY_SPLASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Splishy Splash"),
        #else
            .name = _("SplishySplsh"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_FLOATY_FALL] =
    {
        .name = _("Floaty Fall"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .gravityBanned = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_PIKA_PAPOW] =
    {
        .name = _("Pika Papow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BOUNCY_BUBBLE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Bouncy Bubble"),
        #else
            .name = _("BouncyBubble"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 50, // restores 100% HP instead of 50% HP
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .healingMove = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_BUZZY_BUZZ] =
    {
        .name = _("Buzzy Buzz"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },

    [MOVE_SIZZLY_SLIDE] =
    {
        .name = _("Sizzly Slide"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 60 : 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 20 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 100,
        }),
    },

    [MOVE_GLITZY_GLOW] =
    {
        .name = _("Glitzy Glow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GLITZY_GLOW,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 90,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 95 : 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BADDY_BAD] =
    {
        .name = _("Baddy Bad"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BADDY_BAD,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 80 : 90,
        .type = TYPE_DARK,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 95 : 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SAPPY_SEED] =
    {
        .name = _("Sappy Seed"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SAPPY_SEED,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 90,
        .type = TYPE_GRASS,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 90 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZY_FROST] =
    {
        .name = _("Freezy Frost"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FREEZY_FROST,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 100 : 90,
        .type = TYPE_ICE,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 90 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPARKLY_SWIRL] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Sparkly Swirl"),
        #else
            .name = _("SparklySwirl"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SPARKLY_SWIRL,
        .power = B_UPDATED_MOVE_DATA >= GEN_8 ? 120 : 90,
        .type = TYPE_FAIRY,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_8 ? 85 : 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_8 ? 5 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_VEEVEE_VOLLEY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Veevee Volley"),
        #else
            .name = _("VeeveeVolley"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_DOUBLE_IRON_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Double Iron Bash"),
        #else
            .name = _("DublIronBash"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .strikeCount = 2,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_DYNAMAX_CANNON] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dynamax Cannon"),
        #else
            .name = _("DynamxCannon"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mimicBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .parentalBondBanned = TRUE,
    },

    [MOVE_SNIPE_SHOT] =
    {
        .name = _("Snipe Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNIPE_SHOT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_JAW_LOCK] =
    {
        .name = _("Jaw Lock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TRAP_BOTH,
        }),
    },

    [MOVE_STUFF_CHEEKS] =
    {
        .name = _("Stuff Cheeks"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STUFF_CHEEKS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NO_RETREAT] =
    {
        .name = _("No Retreat"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_NO_RETREAT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAR_SHOT] =
    {
        .name = _("Tar Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAR_SHOT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_MAGIC_POWDER] =
    {
        .name = _("Magic Powder"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_PSYCHIC,
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_DRAGON_DARTS] =
    {
        .name = _("Dragon Darts"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT, //TODO
        .power = 50,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
        .parentalBondBanned = TRUE,
    },

    [MOVE_TEATIME] =
    {
        .name = _("Teatime"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TEATIME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_OCTOLOCK] =
    {
        .name = _("Octolock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_OCTOLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },

    [MOVE_BOLT_BEAK] =
    {
        .name = _("Bolt Beak"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FISHIOUS_REND] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Fishious Rend"),
        #else
            .name = _("FishiousRend"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_COURT_CHANGE] =
    {
        .name = _("Court Change"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COURT_CHANGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
    },

    [MOVE_CLANGOROUS_SOUL] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Clangorous Soul"),
        #else
            .name = _("ClngrousSoul"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CLANGOROUS_SOUL,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .soundMove = TRUE,
        .danceMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_BODY_PRESS] =
    {
        .name = _("Body Press"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_BODY_PRESS,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_DECORATE] =
    {
        .name = _("Decorate"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DECORATE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRUM_BEATING] =
    {
        .name = _("Drum Beating"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SNAP_TRAP] =
    {
        .name = _("Snap Trap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_PYRO_BALL] =
    {
        .name = _("Pyro Ball"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 10,
        }),
    },

    [MOVE_BEHEMOTH_BLADE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Behemoth Blade"),
        #else
            .name = _("BehemthBlade"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_BEHEMOTH_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Behemoth Bash"),
        #else
            .name = _("BehemothBash"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .assistBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_AURA_WHEEL] =
    {
        .name = _("Aura Wheel"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_AURA_WHEEL,
        .power = 110,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_BREAKING_SWIPE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Breaking Swipe"),
        #else
            .name = _("BreakngSwipe"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BRANCH_POKE] =
    {
        .name = _("Branch Poke"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OVERDRIVE] =
    {
        .name = _("Overdrive"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .metronomeBanned = TRUE,
    },

    [MOVE_APPLE_ACID] =
    {
        .name = _("Apple Acid"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_GRAV_APPLE] =
    {
        .name = _("Grav Apple"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRAV_APPLE,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SPIRIT_BREAK] =
    {
        .name = _("Spirit Break"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 75,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_STRANGE_STEAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Strange Steam"),
        #else
            .name = _("StrangeSteam"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 20,
        }),
    },

    [MOVE_LIFE_DEW] =
    {
        .name = _("Life Dew"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OBSTRUCT] =
    {
        .name = _("Obstruct"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_FALSE_SURRENDER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("False Surrender"),
        #else
            .name = _("FalsSurrendr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_METEOR_ASSAULT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Meteor Assault"),
        #else
            .name = _("MeteorAssalt"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_ETERNABEAM] =
    {
        .name = _("Eternabeam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RECHARGE,
            .self = TRUE,
        }),
    },

    [MOVE_STEEL_BEAM] =
    {
        .name = _("Steel Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STEEL_BEAM,
        .power = 140,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EXPANDING_FORCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Expanding Force"),
        #else
            .name = _("ExpandngForc"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPANDING_FORCE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STEEL_ROLLER] =
    {
        .name = _("Steel Roller"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 130,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_FAIL, // Remove a field terrain if there is one and hit, otherwise fail.
        .skyBattleBanned = TRUE,
    },

    [MOVE_SCALE_SHOT] =
    {
        .name = _("Scale Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_SCALE_SHOT,
    },

    [MOVE_METEOR_BEAM] =
    {
        .name = _("Meteor Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 120,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .instructBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .onChargeTurnOnly = TRUE,
        }),
    },

    [MOVE_SHELL_SIDE_ARM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Shell Side Arm"),
        #else
            .name = _("ShellSideArm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SHELL_SIDE_ARM,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 20,
        }),
    },

    [MOVE_MISTY_EXPLOSION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Misty Explosion"),
        #else
            .name = _("MstyExplsion"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXPLOSION,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_GRASSY_GLIDE] =
    {
        .name = _("Grassy Glide"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GRASSY_GLIDE,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 55 : 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_RISING_VOLTAGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Rising Voltage"),
        #else
            .name = _("RisngVoltage"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RISING_VOLTAGE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TERRAIN_PULSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Terrain Pulse"),
        #else
            .name = _("TerrainPulse"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TERRAIN_PULSE,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_SKITTER_SMACK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Skitter Smack"),
        #else
            .name = _("SkitterSmack"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_BURNING_JEALOUSY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Burning Jealousy"),
        #else
            .name = _("BrningJelosy"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .onlyIfTargetRaisedStats = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_LASH_OUT] =
    {
        .name = _("Lash Out"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_LASH_OUT,
        .power = 75,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_POLTERGEIST] =
    {
        .name = _("Poltergeist"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POLTERGEIST,
        .power = 110,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CORROSIVE_GAS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Corrosive Gas"),
        #else
            .name = _("CorrosiveGas"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CORROSIVE_GAS,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 40,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_COACHING] =
    {
        .name = _("Coaching"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COACHING,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FLIP_TURN] =
    {
        .name = _("Flip Turn"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TRIPLE_AXEL] =
    {
        .name = _("Triple Axel"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 20,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_DUAL_WINGBEAT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dual Wingbeat"),
        #else
            .name = _("DualWingbeat"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SCORCHING_SANDS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Scorching Sands"),
        #else
            .name = _("ScorchngSnds"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_JUNGLE_HEALING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Jungle Healing"),
        #else
            .name = _("JungleHealng"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_WICKED_BLOW] =
    {
        .name = _("Wicked Blow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 75 : 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SURGING_STRIKES] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Surging Strikes"),
        #else
            .name = _("SrgngStrkes"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 25,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
        .punchingMove = TRUE,
        .strikeCount = 3,
        .metronomeBanned = TRUE,
    },

    [MOVE_THUNDER_CAGE] =
    {
        .name = _("Thunder Cage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_WRAP,
        }),
    },

    [MOVE_DRAGON_ENERGY] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Dragon Energy"),
        #else
            .name = _("DragonEnergy"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZING_GLARE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Freezing Glare"),
        #else
            .name = _("FreezngGlare"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .power = 90,
        .effect = EFFECT_HIT,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FREEZE_OR_FROSTBITE,
            .chance = 10,
        }),
    },

    [MOVE_FIERY_WRATH] =
    {
        .name = _("Fiery Wrath"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 20,
        }),
    },

    [MOVE_THUNDEROUS_KICK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Thunderous Kick"),
        #else
            .name = _("ThnderusKick"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_GLACIAL_LANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Glacial Lance"),
        #else
            .name = _("GlacialLance"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 130,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ASTRAL_BARRAGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Astral Barrage"),
        #else
            .name = _("AstrlBarrage"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EERIE_SPELL] =
    {
        .name = _("Eerie Spell"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EERIE_SPELL,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_DIRE_CLAW] =
    {
        .name = _("Dire Claw"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 80 : 60,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DIRE_CLAW,
            .chance = 50,
        }),
    },

    [MOVE_PSYSHIELD_BASH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Psyshield Bash"),
        #else
            .name = _("PsyshieldBsh"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_POWER_SHIFT] =
    {
        .name = _("Power Shift"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
},

    [MOVE_STONE_AXE] =
    {
        .name = _("Stone Axe"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_STEALTH_ROCK,
            .chance = 100,
        }),
    },

    [MOVE_SPRINGTIDE_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Springtide Storm"),
        #else
            .name = _("SprngtdeStrm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_FAIRY,
        .accuracy = 80,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_MYSTICAL_POWER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Mystical Power"),
        #else
            .name = _("MystcalPower"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_RAGING_FURY] =
    {
        .name = _("Raging Fury"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_THRASH,
            .self = TRUE,
        }),
    },

    [MOVE_WAVE_CRASH] =
    {
        .name = _("Wave Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 75,
        .type = TYPE_WATER,
        .accuracy = 100,
        .recoil = 33,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_CHLOROBLAST] =
    {
        .name = _("Chloroblast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STEEL_BEAM,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 150 : 120,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MOUNTAIN_GALE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Mountain Gale"),
        #else
            .name = _("MountainGale"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 85,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_VICTORY_DANCE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Victory Dance"),
        #else
            .name = _("VictoryDance"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_VICTORY_DANCE,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .danceMove = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEADLONG_RUSH] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Headlong Rush"),
        #else
            .name = _("HeadlongRush"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 120 : 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_BARB_BARRAGE] =
    {
        .name = _("Barb Barrage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 60,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .argument = STATUS1_PSN_ANY,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 50,
        }),
    },

    [MOVE_ESPER_WING] =
    {
        .name = _("Esper Wing"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 80 : 75,
        .type = TYPE_PSYCHIC,
        .accuracy = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 90,
        .criticalHitStage = 1,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_BITTER_MALICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Bitter Malice"),
        #else
            .name = _("BitterMalice"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 75 : 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_SHELTER] =
    {
        .name = _("Shelter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TRIPLE_ARROWS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Triple Arrows"),
        #else
            .name = _("TripleArrows"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 90 : 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 15,
        .criticalHitStage = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_MINUS_1,
            .chance = 50,
        },
        {
            .moveEffect = MOVE_EFFECT_FLINCH,
            .chance = 30,
        }),
    },

    [MOVE_INFERNAL_PARADE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Infernal Parade"),
        #else
            .name = _("InfrnlParade"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOUBLE_POWER_ON_ARG_STATUS,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_ANY,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_CEASELESS_EDGE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Ceasless Edge"),
        #else
            .name = _("CeaslessEdge"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPIKES,
            .chance = 100,
        }),
    },

    [MOVE_BLEAKWIND_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Bleakwind Storm"),
        #else
            .name = _("BlekwndStorm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_FLYING,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 30,
        }),
    },

    [MOVE_WILDBOLT_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Wildbolt Storm"),
        #else
            .name = _("WildbltStorm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_ELECTRIC,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 20,
        }),
    },

    [MOVE_SANDSEAR_STORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Sandsear Storm"),
        #else
            .name = _("SndsearStorm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAIN_ALWAYS_HIT,
        .power = B_UPDATED_MOVE_DATA >= GEN_9 ? 100 : 95,
        .type = TYPE_GROUND,
        .accuracy = 80,
        .pp = B_UPDATED_MOVE_DATA >= GEN_9 ? 10 : 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_LUNAR_BLESSING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Lunar Blessing"),
        #else
            .name = _("LunarBlessng"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_TAKE_HEART] =
    {
        .name = _("Take Heart"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_TAKE_HEART,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TERA_BLAST] =
    {
        .name = _("Tera Blast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TERA_BLAST,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
        .forcePressure = TRUE,
    },

    [MOVE_SILK_TRAP] =
    {
        .name = _("Silk Trap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_AXE_KICK] =
    {
        .name = _("Axe Kick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_LAST_RESPECTS] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Last Respects"),
        #else
            .name = _("LastRespects"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_LAST_RESPECTS
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_LUMINA_CRASH] =
    {
        .name = _("Lumina Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_DEF_MINUS_2,
            .chance = 100,
        }),
    },

    [MOVE_ORDER_UP] =
    {
        .name = _("Order Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_ORDER_UP
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_JET_PUNCH] =
    {
        .name = _("Jet Punch"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPICY_EXTRACT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Spicy Extract"),
        #else
            .name = _("SpicyExtract"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_SPICY_EXTRACT
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPIN_OUT] =
    {
        .name = _("Spin Out"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_2,
            .self = TRUE,
        }),
    },

    [MOVE_POPULATION_BOMB] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Population Bomb"),
        #else
            .name = _("PoplatinBomb"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_POPULATION_BOMB,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
        .strikeCount = 10,
    },

    [MOVE_ICE_SPINNER] =
    {
        .name = _("Ice Spinner"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 80,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT, // Remove the active field terrain if there is one.
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_GLAIVE_RUSH] =
    {
        .name = _("Glaive Rush"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_GLAIVE_RUSH,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_REVIVAL_BLESSING] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Revival Blessing"),
        #else
            .name = _("RevivlBlesng"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_REVIVAL_BLESSING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .healingMove = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SALT_CURE] =
    {
        .name = _("Salt Cure"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SALT_CURE,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TRIPLE_DIVE] =
    {
        .name = _("Triple Dive"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_MORTAL_SPIN] =
    {
        .name = _("Mortal Spin"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .makesContact = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_RAPIDSPIN,
            .self = TRUE,
        },
        {
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 100,
        }),
    },

    [MOVE_DOODLE] =
    {
        .name = _("Doodle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_DOODLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FILLET_AWAY] =
    {
        .name = _("Fillet Away"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FILLET_AWAY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_KOWTOW_CLEAVE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Kowtow Cleave"),
        #else
            .name = _("KowtowCleave"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_FLOWER_TRICK] =
    {
        .name = _("Flower Trick"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_TORCH_SONG] =
    {
        .name = _("Torch Song"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_AQUA_STEP] =
    {
        .name = _("Aqua Step"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_RAGING_BULL] =
    {
        .name = _("Raging Bull"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGING_BULL,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_MAKE_IT_RAIN] =
    {
        .name = _("Make It Rain"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PAYDAY,
        },
        {
            .moveEffect = MOVE_EFFECT_SP_ATK_MINUS_1,
            .self = TRUE,
        }),
    },

    [MOVE_RUINATION] =
    {
        .name = _("Ruination"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_COLLISION_COURSE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Colision Course"),
        #else
            .name = _("ColisinCours"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_DRIFT] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Electro Drift"),
        #else
            .name = _("ElectroDrift"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SHED_TAIL] =
    {
        .name = _("Shed Tail"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_SHED_TAIL
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_CHILLY_RECEPTION] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Chilly Reception"),
        #else
            .name = _("ChilReceptin"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_CHILLY_RECEPTION,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TIDY_UP] =
    {
        .name = _("Tidy Up"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TIDY_UP
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SNOWSCAPE] =
    {
        .name = _("Snowscape"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SNOWSCAPE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_POUNCE] =
    {
        .name = _("Pounce"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_TRAILBLAZE] =
    {
        .name = _("Trailblaze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SPD_PLUS_1,
            .self = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_CHILLING_WATER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Chilling Water"),
        #else
            .name = _("ChillingWatr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ATK_MINUS_1,
            .chance = 100,
        }),
    },

    [MOVE_HYPER_DRILL] =
    {
        .name = _("Hyper Drill"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresProtect = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TWIN_BEAM] =
    {
        .name = _("Twin Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .metronomeBanned = TRUE,
    },

    [MOVE_RAGE_FIST] =
    {
        .name = _("Rage Fist"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RAGE_FIST,
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ARMOR_CANNON] =
    {
        .name = _("Armor Cannon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_DEF_SPDEF_DOWN,
            .self = TRUE,
        }),
    },

    [MOVE_BITTER_BLADE] =
    {
        .name = _("Bitter Blade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .healingMove = TRUE,
    },

    [MOVE_DOUBLE_SHOCK] =
    {
        .name = _("Double Shock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FAIL_IF_NOT_ARG_TYPE,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .argument = TYPE_ELECTRIC,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_REMOVE_ARG_TYPE,
            .self = TRUE,
        }),
    },

    [MOVE_GIGATON_HAMMER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Gigaton Hammer"),
        #else
            .name = _("GigatonHammr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_COMEUPPANCE] =
    {
        .name = _("Comeuppance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_AQUA_CUTTER] =
    {
        .name = _("Aqua Cutter"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_BLAZING_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Blazing Torque"),
        #else
            .name = _("BlazngTorque"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 30,
        }),
    },

    [MOVE_WICKED_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Wicked Torque"),
        #else
            .name = _("WickedTorque"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SLEEP,
            .chance = 10,
        }),
    },

    [MOVE_NOXIOUS_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Noxius Torque"),
        #else
            .name = _("NoxiusTorque"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_POISON,
            .chance = 30,
        }),
    },

    [MOVE_COMBAT_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Combat Torque"),
        #else
            .name = _("CombatTorque"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 30,
        }),
    },

    [MOVE_MAGICAL_TORQUE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Magical Torque"),
        #else
            .name = _("MagiclTorque"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .meFirstBanned = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .chance = 30,
        }),
    },

    [MOVE_PSYBLADE] =
    {
        .name = _("Psyblade"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PSYBLADE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_HYDRO_STEAM] =
    {
        .name = _("Hydro Steam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HYDRO_STEAM,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_BLOOD_MOON] =
    {
        .name = _("Blood Moon"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_MATCHA_GOTCHA] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Matcha Gotcha"),
        #else
            .name = _("MatchaGotcha"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .healingMove = B_EXTRAPOLATED_MOVE_FLAGS,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_BURN,
            .chance = 20,
        }),
    },

    [MOVE_SYRUP_BOMB] =
    {
        .name = _("Syrup Bomb"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SYRUP_BOMB,
            .chance = 100,
        }),
    },

    [MOVE_IVY_CUDGEL] =
    {
        .name = _("Ivy Cudgel"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_IVY_CUDGEL,
        .power = 100,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .criticalHitStage = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_SHOT] =
    {
        .name = _("Electro Shot"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_SP_ATK_PLUS_1,
            .self = TRUE,
            .onChargeTurnOnly = TRUE,
        }),
    },

    [MOVE_TERA_STARSTORM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Tera Starstorm"),
        #else
            .name = _("TeraStarstrm"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_TERA_STARSTORM
        .power = 120,
        .type = TYPE_NORMAL, // Stellar type if used by Terapagos-Stellar
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED, // MOVE_TARGET_BOTH if used by Terapagos-Stellar
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .assistBanned = TRUE,
        .copycatBanned = TRUE,
        .mimicBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_FICKLE_BEAM] =
    {
        .name = _("Fickle Beam"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_FICKLE_BEAM,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_BURNING_BULWARK] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Burning Bulwark"),
        #else
            .name = _("BurnngBulwrk"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_THUNDERCLAP] =
    {
        .name = _("Thunderclap"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUCKER_PUNCH,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIGHTY_CLEAVE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Mighty Cleave"),
        #else
            .name = _("MightyCleave"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresProtect = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_TACHYON_CUTTER] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Tachyon Cutter"),
        #else
            .name = _("TachyonCuttr"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .slicingMove = TRUE,
    },

    [MOVE_HARD_PRESS] =
    {
        .name = _("Hard Press"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_CHEER] =
    {
        .name = _("Dragon Cheer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_DRAGON_CHEER
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 15,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_ALLURING_VOICE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Alluring Voice"),
        #else
            .name = _("AllurngVoice"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = TRUE,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_CONFUSION,
            .onlyIfTargetRaisedStats = TRUE,
            .chance = 100,
        }),
    },

    [MOVE_TEMPER_FLARE] =
    {
        .name = _("Temper Flare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUPERCELL_SLAM] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Supercell Slam"),
        #else
            .name = _("SuprcellSlam"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PSYCHIC_NOISE] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Psychic Noise"),
        #else
            .name = _("PsychicNoise"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_PSYCHIC_NOISE
        .power = 75,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_UPPER_HAND] =
    {
        .name = _("Upper Hand"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_UPPER_HAND
        .power = 65,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MALIGNANT_CHAIN] =
    {
        #if B_EXPANDED_MOVE_NAMES == TRUE
            .name = _("Malignant Chain"),
        #else
            .name = _("MalignntChan"),
        #endif
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 5,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_TOXIC,
            .chance = 50,
        }),
    },

    // Z-Moves
    [MOVE_BREAKNECK_BLITZ] =
    {
        .name = _("Breakneck Blitz"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,    //determined from move type
    },
    [MOVE_ALL_OUT_PUMMELING] =
    {
        .name = _("All Out Pummeling"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUPERSONIC_SKYSTRIKE] =
    {
        .name = _("Supersonic Skystrike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_ACID_DOWNPOUR] =
    {
        .name = _("Acid Downpour"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TECTONIC_RAGE] =
    {
        .name = _("Tectonic Rage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },
    [MOVE_CONTINENTAL_CRUSH] =
    {
        .name = _("Continental Crush"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SAVAGE_SPIN_OUT] =
    {
        .name = _("Savage Spin Out"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_NEVER_ENDING_NIGHTMARE] =
    {
        .name = _("Never Ending Nightmare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CORKSCREW_CRASH] =
    {
        .name = _("Corkscrew Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_INFERNO_OVERDRIVE] =
    {
        .name = _("Inferno Overdrive"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_HYDRO_VORTEX] =
    {
        .name = _("Hydro Vortex"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLOOM_DOOM] =
    {
        .name = _("Bloom Doom"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GIGAVOLT_HAVOC] =
    {
        .name = _("Gigavolt Havoc"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SHATTERED_PSYCHE] =
    {
        .name = _("Shattered Psyche"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUBZERO_SLAMMER] =
    {
        .name = _("Subzero Slammer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_DEVASTATING_DRAKE] =
    {
        .name = _("Devastating Drake"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLACK_HOLE_ECLIPSE] =
    {
        .name = _("Black Hole Eclipse"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TWINKLE_TACKLE] =
    {
        .name = _("Twinkle Tackle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CATASTROPIKA] =
    {
        .name = _("Catastropika"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_10000000_VOLT_THUNDERBOLT] =
    {
        .name = _("10000000 Volt Thunderbolt"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .criticalHitStage = 2,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_STOKED_SPARKSURFER] =
    {
        .name = _("Stoked Sparksurfer"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 175,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_PARALYSIS,
            .chance = 100,
        }),
    },
    [MOVE_EXTREME_EVOBOOST] =
    {
        .name = _("Extreme Evoboost"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_EXTREME_EVOBOOST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },
    [MOVE_PULVERIZING_PANCAKE] =
    {
        .name = _("Pulverizing Pancake"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GENESIS_SUPERNOVA] =
    {
        .name = _("Genesis Supernova"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 185,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = ARG_SET_PSYCHIC_TERRAIN, // Set Psychic Terrain. If there's a different field terrain active, overwrite it.
    },
    [MOVE_SINISTER_ARROW_RAID] =
    {
        .name = _("Sinister Arrow Raid"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MALICIOUS_MOONSAULT] =
    {
        .name = _("Malicious Moonsault"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_OCEANIC_OPERETTA] =
    {
        .name = _("Oceaning Operetta"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SPLINTERED_STORMSHARDS] =
    {
        .name = _("Splintered Stormshards"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 190,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT,  // Remove the active field terrain if there is one.
    },
    [MOVE_LETS_SNUGGLE_FOREVER] =
    {
        .name = _("Let's Snuggle Forever"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 190,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CLANGOROUS_SOULBLAZE] =
    {
        .name = _("Clangorous Soulblaze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 185,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .additionalEffects = ADDITIONAL_EFFECTS({
            .moveEffect = MOVE_EFFECT_ALL_STATS_UP,
            .self = TRUE,
            .chance = 100,
        }),
    },
    [MOVE_GUARDIAN_OF_ALOLA] =
    {
        .name = _("Guardian Of Alola"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SEARING_SUNRAZE_SMASH] =
    {
        .name = _("Searing Sunraze Smash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MENACING_MOONRAZE_MAELSTROM] =
    {
        .name = _("Menacing Moonraze Maelstrom"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_LIGHT_THAT_BURNS_THE_SKY] =
    {
        .name = _("Light That Burns The Sky"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SOUL_STEALING_7_STAR_STRIKE] =
    {
        .name = _("Soul Stealing 7 Star Strike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_MAX_GUARD] =
    {
        .name = _("Max Guard"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
    },

    [MOVE_MAX_FLARE] =
    {
        .name = _("Max Flare"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SUN,
    },

    [MOVE_MAX_FLUTTERBY] =
    {
        .name = _("Max Flutterby"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_ATK,
    },

    [MOVE_MAX_LIGHTNING] =
    {
        .name = _("Max Lightning"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_ELECTRIC_TERRAIN,
    },

    [MOVE_MAX_STRIKE] =
    {
        .name = _("Max Strike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED,
    },

    [MOVE_MAX_KNUCKLE] =
    {
        .name = _("Max Knuckle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_ATTACK,
    },

    [MOVE_MAX_PHANTASM] =
    {
        .name = _("Max Phantasm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_DEFENSE,
    },

    [MOVE_MAX_HAILSTORM] =
    {
        .name = _("Max Hailstorm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HAIL,
    },

    [MOVE_MAX_OOZE] =
    {
        .name = _("Max Ooze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_ATK,
    },

    [MOVE_MAX_GEYSER] =
    {
        .name = _("Max Geyser"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAIN,
    },

    [MOVE_MAX_AIRSTREAM] =
    {
        .name = _("Max Airstream"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SPEED,
    },

    [MOVE_MAX_STARFALL] =
    {
        .name = _("Max Starfall"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MISTY_TERRAIN,
    },

    [MOVE_MAX_WYRMWIND] =
    {
        .name = _("Max Wyrmwind"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_ATTACK,
    },

    [MOVE_MAX_MINDSTORM] =
    {
        .name = _("Max Mindstorm"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PSYCHIC_TERRAIN,
    },

    [MOVE_MAX_ROCKFALL] =
    {
        .name = _("Max Rockfall"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDSTORM,
    },

    [MOVE_MAX_QUAKE] =
    {
        .name = _("Max Quake"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_DEF,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_MAX_DARKNESS] =
    {
        .name = _("Max Darkness"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_DEF,
    },

    [MOVE_MAX_OVERGROWTH] =
    {
        .name = _("Max Overgrowth"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRASSY_TERRAIN,
    },

    [MOVE_MAX_STEELSPIKE] =
    {
        .name = _("Max Steelspike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_DEFENSE,
    },

    [MOVE_G_MAX_VINE_LASH] =
    {
        .name = _("G-Max Vine Lash"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VINE_LASH,
    },

    [MOVE_G_MAX_WILDFIRE] =
    {
        .name = _("G-Max Wildfire"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_WILDFIRE,
    },

    [MOVE_G_MAX_CANNONADE] =
    {
        .name = _("G-Max Canonade"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CANNONADE,
    },

    [MOVE_G_MAX_BEFUDDLE] =
    {
        .name = _("G-Max Befuddle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_EFFECT_SPORE_FOES,
    },

    [MOVE_G_MAX_VOLT_CRASH] =
    {
        .name = _("G-Max Volt Crash"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PARALYZE_FOES,
    },

    [MOVE_G_MAX_GOLD_RUSH] =
    {
        .name = _("G-Max Gold Rush"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES_PAY_DAY,
    },

    [MOVE_G_MAX_CHI_STRIKE] =
    {
        .name = _("G-Max Chi Strike"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CRIT_PLUS,
    },

    [MOVE_G_MAX_TERROR] =
    {
        .name = _("G-Max Terror"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MEAN_LOOK,
    },

    [MOVE_G_MAX_FOAM_BURST] =
    {
        .name = _("G-Max Foam Burst"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED_2_FOES,
    },

    [MOVE_G_MAX_RESONANCE] =
    {
        .name = _("G-Max Resonance"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AURORA_VEIL,
    },

    [MOVE_G_MAX_CUDDLE] =
    {
        .name = _("G-Max Cuddle"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_INFATUATE_FOES,
    },

    [MOVE_G_MAX_REPLENISH] =
    {
        .name = _("G-Max Replenish"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RECYCLE_BERRIES,
    },

    [MOVE_G_MAX_MALODOR] =
    {
        .name = _("G-Max Malodor"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_FOES,
    },

    [MOVE_G_MAX_MELTDOWN] =
    {
        .name = _("G-Max Meltdown"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_TORMENT_FOES,
    },

    [MOVE_G_MAX_DRUM_SOLO] =
    {
        .name = _("G-Max Drum Solo"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_FIREBALL] =
    {
        .name = _("G-Max Fireball"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_HYDROSNIPE] =
    {
        .name = _("G-Max Hydrosnipe"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_WIND_RAGE] =
    {
        .name = _("G-Max Wind Rage"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_DEFOG,
    },

    [MOVE_G_MAX_GRAVITAS] =
    {
        .name = _("G-Max Gravitas"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRAVITY,
    },

    [MOVE_G_MAX_STONESURGE] =
    {
        .name = _("G-Max Stonesurge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEALTH_ROCK,
    },

    [MOVE_G_MAX_VOLCALITH] =
    {
        .name = _("G-Max Volcalith"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VOLCALITH,
    },

    [MOVE_G_MAX_TARTNESS] =
    {
        .name = _("G-Max Tartness"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_EVASIVENESS_FOES,
    },

    [MOVE_G_MAX_SWEETNESS] =
    {
        .name = _("G-Max Sweetness"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AROMATHERAPY,
    },

    [MOVE_G_MAX_SANDBLAST] =
    {
        .name = _("G-Max Sandblast"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDBLAST_FOES,
    },

    [MOVE_G_MAX_STUN_SHOCK] =
    {
        .name = _("G-Max Stun Shock"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_PARALYZE_FOES,
    },

    [MOVE_G_MAX_CENTIFERNO] =
    {
        .name = _("G-Max Centiferno"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIRE_SPIN_FOES,
    },

    [MOVE_G_MAX_SMITE] =
    {
        .name = _("G-Max Smite"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES,
    },


    [MOVE_G_MAX_SNOOZE] =
    {
        .name = _("G-Max Snooze"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_YAWN_FOE,
    },

    [MOVE_G_MAX_FINALE] =
    {
        .name = _("G-Max Finale"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HEAL_TEAM,
    },

    [MOVE_G_MAX_STEELSURGE] =
    {
        .name = _("G-Max Steelsurge"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEELSURGE,
    },

    [MOVE_G_MAX_DEPLETION] =
    {
        .name = _("G-Max Depletion"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SPITE,
    },

    [MOVE_G_MAX_ONE_BLOW] =
    {
        .name = _("G-Max One Blow"),
        .description = COMPOUND_STRING("Dummy2 description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

    [MOVE_G_MAX_RAPID_FLOW] =
    {
        .name = _("G-Max Rapid Flow"),
        .description = COMPOUND_STRING("Dummy2 description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

};
