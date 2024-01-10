const u8 gNotDoneYetDescription[] = _(
    "This move can't be used. Its\n"
    "effect is in development.");

const struct BattleMove gBattleMoves[MOVES_COUNT_DYNAMAX] =
{
    [MOVE_NONE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .mirrorMoveBanned = TRUE,
        .sketchBanned = TRUE,
    },

    [MOVE_POUND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS == GEN_4,
    },

    [MOVE_KARATE_CHOP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_SLAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COMET_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_MEGA_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_PAY_DAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PAY_DAY,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FIRE_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ICE_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_USE_FROSTBITE == TRUE
            .effect = EFFECT_FROSTBITE_HIT,
        #else
            .effect = EFFECT_FREEZE_HIT,
        #endif
        .power = 75,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_THUNDER_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 75,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SCRATCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_VISE_GRIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GUILLOTINE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAZOR_WIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .danceMove = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_CUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_GUST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GUST,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
    },

    [MOVE_WING_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WHIRLWIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 90,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 85,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_TRAP,
        .power = 15,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
    },

    [MOVE_SLAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VINE_WHIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 45,
            .pp = 25,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 35,
            .pp = 15,
        #else
            .power = 35,
            .pp = 10,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STOMP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DOUBLE_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_MEGA_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_JUMP_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 100,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 85,
            .pp = 25,
        #else
            .power = 70,
            .pp = 25,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_ROLLING_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SAND_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_HEADBUTT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HORN_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 65,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FURY_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HORN_DRILL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TACKLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 40,
            .accuracy = 100,
        #elif B_UPDATED_MOVE_DATA >= GEN_5
            .power = 50,
            .accuracy = 100,
        #else
            .power = 35,
            .accuracy = 95,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_NORMAL,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BODY_SLAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 85,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .skyBattleBanned = TRUE,
    },

    [MOVE_WRAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 85,
        #endif
        .effect = EFFECT_TRAP,
        .power = 15,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TAKE_DOWN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .recoil = 25,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #else
            .power = 90,
            .pp = 20,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_DOUBLE_EDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TAIL_WHIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POISON_STING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 15,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_TWINEEDLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 25,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .strikeCount = 2,
    },

    [MOVE_PIN_MISSILE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 25,
            .accuracy = 95,
        #else
            .power = 14,
            .accuracy = 85,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_BUG,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LEER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BITE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_GROWL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 55,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SONICBOOM,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DISABLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
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
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ACID] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        #else
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        #endif
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_EMBER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 40,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FLAMETHROWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MIST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIST,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_PUMP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 110,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_WATER,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SURF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
            .target = MOVE_TARGET_FOES_AND_ALLY,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 95,
            .target = MOVE_TARGET_FOES_AND_ALLY,
        #else
            .power = 95,
            .target = MOVE_TARGET_BOTH,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_ICE_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        // The following effect is also relevant in battle_pike.c
        // If you cherry-pick this to use something other than the config, make sure to update it there too
        #if B_USE_FROSTBITE == TRUE
            .effect = EFFECT_FROSTBITE_HIT,
        #else
            .effect = EFFECT_FREEZE_HIT,
        #endif
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BLIZZARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 110,
        #else
            .power = 120,
        #endif
        #if B_USE_FROSTBITE == TRUE
            .effect = EFFECT_FROSTBITE_HIT,
        #else
            .effect = EFFECT_FREEZE_HIT,
        #endif
        .type = TYPE_ICE,
        .accuracy = 70,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_PSYBEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 65,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BUBBLE_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_AURORA_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HYPER_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
    },

    [MOVE_PECK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_PECK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUBMISSION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 25,
        #endif
        .effect = EFFECT_RECOIL,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .recoil = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LOW_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_COUNTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COUNTER,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = -5,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE, // B_UPDATED_MOVE_FLAGS >= GEN_2
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SEISMIC_TOSS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STRENGTH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ABSORB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 25,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_ABSORB,
        .power = 20,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_MEGA_DRAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 15,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_ABSORB,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LEECH_SEED] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LEECH_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_GROWTH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 40,
        #endif
        #if B_GROWTH_STAT_RAISE >= GEN_5
            .effect = EFFECT_GROWTH,
        #else
            .effect = EFFECT_SPECIAL_ATTACK_UP,
        #endif
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 55,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_SOLAR_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_POISON_POWDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 75,
        .pp = 35,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_STUN_SPORE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_SLEEP_POWDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_PETAL_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 90,
            .pp = 20,
        #else
            .power = 70,
            .pp = 20,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .danceMove = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_STRING_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .effect = EFFECT_SPEED_DOWN_2,
        #else
            .effect = EFFECT_SPEED_DOWN,
        #endif
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAGON_RAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DRAGON_RAGE,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = (B_UPDATED_MOVE_FLAGS == GEN_4) || (B_UPDATED_MOVE_FLAGS < GEN_3),
    },

    [MOVE_FIRE_SPIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 35,
            .accuracy = 85,
        #else
            .power = 15,
            .accuracy = 70,
        #endif
        .effect = EFFECT_TRAP,
        .type = TYPE_FIRE,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
    },

    [MOVE_THUNDER_SHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 40,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_THUNDERBOLT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_THUNDER_WAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 90,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_PARALYZE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_THUNDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 110,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_THUNDER,
        .type = TYPE_ELECTRIC,
        .accuracy = 70,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborne = TRUE,
    },

    [MOVE_ROCK_THROW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_EARTHQUAKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EARTHQUAKE,
        .power = 100,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FISSURE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DIG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 80,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 85,
        #endif
        .effect = EFFECT_TOXIC,
        .power = 0,
        .type = TYPE_POISON,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 50,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PSYCHIC] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HYPNOSIS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 60,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEDITATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_RAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RAGE,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TELEPORT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TELEPORT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = -6,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NIGHT_SHADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LEVEL_DAMAGE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIMIC] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIMIC,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresSubstitute = TRUE,
        .mimicBanned = TRUE,
        .metronomeBanned = TRUE, // B_UPDATED_MOVE_FLAGS >= GEN_2
        .copycatBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .encoreBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SCREECH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EVASION_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
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
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HARDEN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 10,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_MINIMIZE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_CONFUSE_RAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WITHDRAW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_CURL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LIGHT_SCREEN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HAZE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REFLECT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FOCUS_ENERGY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .priority = 1,
        #else
            .accuracy = 100,
            .priority = 0,
        #endif
        .effect = EFFECT_BIDE,
        .power = 1,
        .type = TYPE_NORMAL,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_METRONOME] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_METRONOME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIRROR_MOVE,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EXPLOSION,
        .power = 200,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_EGG_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 30,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SMOG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 30,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_POISON_HIT,
        .type = TYPE_POISON,
        .accuracy = 70,
        .pp = 20,
        .secondaryEffectChance = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SLUDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BONE_CLUB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FIRE_BLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 110,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_WATERFALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_FLINCH_HIT,
        #else
            .effect = EFFECT_HIT,
        #endif
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_CLAMP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 85,
            .pp = 15,
        #else
            .accuracy = 75,
            .pp = 10,
        #endif
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_WATER,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
    },

    [MOVE_SWIFT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKULL_BASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 130,
            .pp = 10,
        #else
            .power = 100,
            .pp = 15,
        #endif
        .effect = EFFECT_SKULL_BASH,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CONSTRICT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 35,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_AMNESIA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_SOFT_BOILED] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .snatchAffected = TRUE,
    },

    [MOVE_HIGH_JUMP_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 130,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 100,
            .pp = 20,
        #else
            .power = 85,
            .pp = 20,
        #endif
        .effect = EFFECT_RECOIL_IF_MISS,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_GLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
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
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DREAM_EATER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DREAM_EATER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_POISON_GAS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 90,
            .target = MOVE_TARGET_BOTH,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 80,
            .target = MOVE_TARGET_BOTH,
        #else
            .accuracy = 55,
            .target = MOVE_TARGET_SELECTED,
        #endif
        .effect = EFFECT_POISON,
        .power = 0,
        .type = TYPE_POISON,
        .pp = 40,
        .secondaryEffectChance = 0,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BARRAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_LEECH_LIFE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 80,
            .pp = 10,
        #else
            .power = 20,
            .pp = 15,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_BUG,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_LOVELY_KISS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SKY_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_FLINCH,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_TRANSFORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRANSFORM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DIZZY_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SPORE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_FLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 100,
        #else
            .accuracy = 70,
        #endif
        .effect = EFFECT_ACCURACY_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_EVSN_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PSYWAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_PSYWAVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SPLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 40,
        #endif
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 100,
            .accuracy = 90,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 90,
            .accuracy = 90,
        #else
            .power = 90,
            .accuracy = 85,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_WATER,
        .criticalHitStage = 1,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EXPLOSION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EXPLOSION,
        .power = 250,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FURY_SWIPES] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 18,
        .type = TYPE_NORMAL,
        .accuracy = 80,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BONEMERANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_GROUND,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
    },

    [MOVE_REST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_REST,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
    },

    [MOVE_ROCK_SLIDE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 75,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HYPER_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_SHARPEN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONVERSION,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRI_ATTACK,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SUPER_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
    },

    [MOVE_SLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_SUBSTITUTE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUBSTITUTE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
            .effect = EFFECT_RECOIL_HP_25,
        #else
            .accuracy = 100,
            .effect = EFFECT_RECOIL,
        #endif
        .power = 50,
        .type = TYPE_NORMAL,
        .recoil = 25,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS >= GEN_4,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SKETCH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_THIEF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
            .pp = 25,
        #else
            .power = 40,
            .pp = 10,
        #endif
        .effect = EFFECT_THIEF,
        .type = TYPE_DARK,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_SPIDER_WEB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_MIND_READER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_NIGHTMARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 100,
        #else
            .accuracy = 0,
        #endif
        .effect = EFFECT_NIGHTMARE,
        .power = 0,
        .type = TYPE_GHOST,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = B_UPDATED_MOVE_FLAGS <= GEN_3,
    },

    [MOVE_FLAME_WHEEL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 60,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
    },

    [MOVE_SNORE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 50,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_SNORE,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_CURSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_TYPES >= GEN_5
            .type = TYPE_GHOST,
        #else
            .type = TYPE_MYSTERY,
        #endif
        .effect = EFFECT_CURSE,
        .power = 0,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CONVERSION_2] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONVERSION_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_COTTON_SPORE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
            .target = MOVE_TARGET_BOTH,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .accuracy = 100,
            .target = MOVE_TARGET_SELECTED,
        #else
            .accuracy = 85,
            .target = MOVE_TARGET_SELECTED,
        #endif
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_GRASS,
        .pp = 40,
        .secondaryEffectChance = 0,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_REVERSAL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLAIL,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SPITE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPITE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RECOVER_HP },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_POWDER_SNOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_USE_FROSTBITE == TRUE
            .effect = EFFECT_FROSTBITE_HIT,
        #else
            .effect = EFFECT_FREEZE_HIT,
        #endif
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PROTECT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 4,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .protectionMove = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MACH_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_SCARY_FACE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 100,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_SPEED_DOWN_2,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FEINT_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .makesContact = TRUE,
        #endif
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SWEET_KISS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_TYPES >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_CONFUSE,
        .power = 0,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_BELLY_DRUM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BELLY_DRUM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_MUD_SLAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 20,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_OCTAZOOKA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_SPIKES] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPIKES,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 120,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 50,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_FORESIGHT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_DESTINY_BOND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DESTINY_BOND,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PERISH_SONG,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_DETECT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 4,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_GROUND,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_LOCK_ON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_LOCK_ON,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
    },

    [MOVE_OUTRAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 120,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 120,
            .pp = 15,
        #else
            .power = 90,
            .pp = 15,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_SANDSTORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SANDSTORM,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 75,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 60,
            .pp = 10,
        #else
            .power = 60,
            .pp = 5,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_ENDURE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 4,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_ENDURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_TYPES >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ROLLOUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .instructBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_FALSE_SWIPE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SWAGGER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 85,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_SWAGGER,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MILK_DRINK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_SOFTBOILED,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SPARK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FURY_CUTTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 40,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 20,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_FURY_CUTTER,
        .type = TYPE_BUG,
        .accuracy = 95,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_STEEL_WING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 90,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MEAN_LOOK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_ATTRACT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTRACT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SLEEP_TALK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP_TALK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PRESENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PRESENT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
    },

    [MOVE_FRUSTRATION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FRUSTRATION,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SAFEGUARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SAFEGUARD,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PAIN_SPLIT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
    },

    [MOVE_SACRED_FIRE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
    },

    [MOVE_MAGNITUDE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAGNITUDE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesUnderground = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_DYNAMIC_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 50,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MEGAHORN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_BUG,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_BREATH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_3,
    },

    [MOVE_BATON_PASS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BATON_PASS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ENCORE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ENCORE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PURSUIT,
        .power = 40,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresKingsRock = B_UPDATED_MOVE_FLAGS < GEN_5, // && B_UPDATED_MOVE_FLAGS > GEN_2
    },

    [MOVE_RAPID_SPIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 50,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_RAPID_SPIN,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SWEET_SCENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .effect = EFFECT_EVASION_DOWN_2,
        #else
            .effect = EFFECT_EVASION_DOWN,
        #endif
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_IRON_TAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 75,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_METAL_CLAW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 35,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_VITAL_THROW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_VITAL_THROW,
        .power = 70,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MORNING_SUN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MORNING_SUN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SYNTHESIS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SYNTHESIS,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_MOONLIGHT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_TYPES >= GEN_6
            .type = TYPE_FAIRY,
        #else
            .type = TYPE_NORMAL,
        #endif
        .effect = EFFECT_MOONLIGHT,
        .power = 0,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HIDDEN_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .power = B_HIDDEN_POWER_DMG >= GEN_6 ? 60 : 1,
        .effect = EFFECT_HIDDEN_POWER,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CROSS_CHOP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TWISTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .damagesAirborneDoubleDamage = TRUE,
        .windMove = TRUE,
    },

    [MOVE_RAIN_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RAIN_DANCE,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SUNNY_DAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUNNY_DAY,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_CRUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .effect = EFFECT_DEFENSE_DOWN_HIT,
        #else
            .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        #endif
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_MIRROR_COAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIRROR_COAT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYCH_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 2,
        #else
            .priority = 1,
        #endif
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ANCIENT_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA < GEN_4
            .makesContact = TRUE,
        #endif
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 60,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SHADOW_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_FUTURE_SIGHT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
            .accuracy = 100,
            .pp = 10,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 100,
            .accuracy = 100,
            .pp = 10,
        #else
            .power = 80,
            .accuracy = 90,
            .pp = 15,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_PSYCHIC,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ROCK_SMASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 40,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_WHIRLPOOL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 35,
            .accuracy = 85,
        #else
            .power = 15,
            .accuracy = 70,
        #endif
        .effect = EFFECT_TRAP,
        .type = TYPE_WATER,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .damagesUnderwater = TRUE,
    },

    [MOVE_BEAT_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 1,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_BEAT_UP,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FAKE_OUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .priority = 3,
            .makesContact = TRUE,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .priority = 1,
            .makesContact = TRUE,
        #else
            .priority = 1,
        #endif
        .effect = EFFECT_FAKE_OUT,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_UPROAR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 90,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_UPROAR,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_STOCKPILE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .pp = 20,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_STOCKPILE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 1,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_SPIT_UP,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SWALLOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SWALLOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAT_WAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 95,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_HAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HAIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TORMENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TORMENT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLATTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLATTER,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_WILL_O_WISP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 85,
        #else
            .accuracy = 75,
        #endif
        .effect = EFFECT_WILL_O_WISP,
        .power = 0,
        .type = TYPE_FIRE,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_MEMENTO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MEMENTO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESTORE_REPLACEMENT_HP },
    },

    [MOVE_FACADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FACADE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FOCUS_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FOCUS_PUNCH,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 70,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SMELLING_SALTS,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
    },

    [MOVE_FOLLOW_ME] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 2,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_NATURE_POWER,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CHARGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TAUNT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_HELPING_HAND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .target = MOVE_TARGET_ALLY,
        #else
            .target = MOVE_TARGET_USER,
        #endif
        .effect = EFFECT_HELPING_HAND,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ROLE_PLAY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WISH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .healBlockBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ASSIST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ASSIST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_INGRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUPERPOWER,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MAGIC_COAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAGIC_COAT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RECYCLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECYCLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRICK_BREAK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 75,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_YAWN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_YAWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_KNOCK_OFF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
        #else
            .power = 20,
        #endif
        .effect = EFFECT_KNOCK_OFF,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ENDEAVOR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ENDEAVOR,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_ERUPTION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKILL_SWAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SKILL_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_IMPRISON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_IMPRISON,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REFRESH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GRUDGE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SNATCH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SECRET_POWER,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DIVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 80,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SEMI_INVULNERABLE,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CAMOUFLAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CAMOUFLAGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .effect = EFFECT_SPECIAL_ATTACK_UP_3,
        #else
            .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        #endif
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MIST_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = (B_UPDATED_MOVE_DATA >= GEN_9) ? 95 : 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_FEATHER_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_TEETER_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TEETER_DANCE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .danceMove = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_BLAZE_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 85,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .criticalHitStage = 1,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MUD_SPORT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MUD_SPORT,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ROLLOUT,
        .power = 30,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_SLACK_OFF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HYPER_VOICE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_POISON_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .secondaryEffectChance = 50,
        #else
            .secondaryEffectChance = 30,
        #endif
        .effect = EFFECT_POISON_FANG,
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
    },

    [MOVE_CRUSH_CLAW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BLAST_BURN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_HYDRO_CANNON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_METEOR_MASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
            .accuracy = 90,
        #else
            .power = 100,
            .accuracy = 85,
        #endif
        .effect = EFFECT_ATTACK_UP_HIT,
        .type = TYPE_STEEL,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ASTONISH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 30,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_WEATHER_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WEATHER_BALL,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AROMATHERAPY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAL_BELL,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AIR_CUTTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 55,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_OVERHEAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 130,
        #elif B_UPDATED_MOVE_DATA >= GEN_4
            .power = 140,
        #else
            .power = 140,
            .makesContact = TRUE,
        #endif
        .effect = EFFECT_OVERHEAT,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_ODOR_SLEUTH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_FORESIGHT,
        .power = 0,
        .type = TYPE_NORMAL,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_ROCK_TOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
            .accuracy = 95,
            .pp = 15,
        #else
            .power = 50,
            .accuracy = 80,
            .pp = 10,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_ROCK,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SILVER_WIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_METAL_SOUND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 55,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TICKLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_COSMIC_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SIGNAL_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 75,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SHADOW_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_EXTRASENSORY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 20,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_4,
    },

    [MOVE_SKY_UPPERCUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SKY_UPPERCUT,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .damagesAirborne = TRUE,
    },

    [MOVE_SAND_TOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 35,
            .accuracy = 85,
        #else
            .power = 15,
            .accuracy = 70,
        #endif
        .effect = EFFECT_TRAP,
        .type = TYPE_GROUND,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SHEER_COLD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OHKO,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 30,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MUDDY_WATER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_BULLET_SEED] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 25,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AERIAL_ACE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_ICICLE_SPEAR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 25,
        #else
            .power = 10,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_IRON_DEFENSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MEAN_LOOK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = (B_UPDATED_MOVE_FLAGS >= GEN_6) || (B_UPDATED_MOVE_FLAGS <= GEN_3),
        .magicCoatAffected = TRUE,
    },

    [MOVE_HOWL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .effect = EFFECT_ATTACK_UP_USER_ALLY,
        #else
            .effect = EFFECT_ATTACK_UP,
        #endif
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FRENZY_PLANT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_BULK_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BULK_UP,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 85,
        .type = TYPE_FLYING,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_PARALYSIS,
        .twoTurnMove = TRUE,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .gravityBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_MUD_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_POISON_TAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 25,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_COVET] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
            .pp = 25,
            .makesContact = TRUE,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 60,
            .pp = 40,
            .makesContact = TRUE,
        #elif B_UPDATED_MOVE_DATA == GEN_4
            .power = 40,
            .pp = 40,
            .makesContact = TRUE,
        #else
            .power = 40,
            .pp = 40,
        #endif
        .effect = EFFECT_THIEF,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_VOLT_TACKLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .argument = STATUS1_PARALYSIS,
        #endif
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MAGICAL_LEAF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_SPORT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WATER_SPORT,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CALM_MIND,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_4
            .power = 90,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_DRAGON_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DRAGON_DANCE,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .accuracy = 90,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_ROCK,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_SHOCK_WAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_WATER_PULSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
    },

    [MOVE_DOOM_DESIRE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 140,
            .accuracy = 100,
        #else
            .power = 120,
            .accuracy = 85,
        #endif
        .effect = EFFECT_FUTURE_SIGHT,
        .type = TYPE_STEEL,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PSYCHO_BOOST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OVERHEAT,
        .power = 140,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_ROOST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_ROOST,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRAVITY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GRAVITY,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIRACLE_EYE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WAKE_UP_SLAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 70,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_WAKE_UP_SLAP,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_SLEEP,
        .makesContact = TRUE,
    },

    [MOVE_HAMMER_ARM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HAMMER_ARM,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_GYRO_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GYRO_BALL,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_HEALING_WISH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .healBlockBanned = TRUE,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_BRINE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BRINE,
        .power = 65,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_NATURAL_GIFT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_NATURAL_GIFT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FEINT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 30,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_FEINT,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_6,
        .metronomeBanned = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_PLUCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BUG_BITE,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TAILWIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 15,
        #else
            .pp = 30,
        #endif
        .effect = EFFECT_TAILWIND,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACUPRESSURE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .meFirstBanned = TRUE,
    },

    [MOVE_U_TURN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CLOSE_COMBAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CLOSE_COMBAT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PAYBACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PAYBACK,
        .power = 50,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ASSURANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_ASSURANCE,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EMBARGO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EMBARGO,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_FLING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLING,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .parentalBondBanned = TRUE,
    },

    [MOVE_PSYCHO_SHIFT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 100,
        #else
            .accuracy = 90,
        #endif
        .effect = EFFECT_PSYCHO_SHIFT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
    },

    [MOVE_TRUMP_CARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRUMP_CARD,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_HEAL_BLOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAL_BLOCK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_2 },
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_WRING_OUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_POWER_TRICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GASTRO_ACID,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LUCKY_CHANT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LUCKY_CHANT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ME_FIRST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COPYCAT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POWER_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_GUARD_SWAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GUARD_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_PUNISHMENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PUNISHMENT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LAST_RESORT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 140,
        #else
            .power = 130,
        #endif
        .effect = EFFECT_LAST_RESORT,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_WORRY_SEED] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WORRY_SEED,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_SUCKER_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 70,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_SUCKER_PUNCH,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TOXIC_SPIKES] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TOXIC_SPIKES,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEART_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_BOOST_CRITS },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_AQUA_RING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AQUA_RING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAGNET_RISE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
    },

    [MOVE_FORCE_PALM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_AURA_SPHERE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_ROCK_POLISH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_UP_2,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 80,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DARK_PULSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .pulseMove = TRUE,
    },

    [MOVE_NIGHT_SLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_DARK,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_AQUA_TAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SEED_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_AIR_SLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 15,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_FLINCH_HIT,
        .power = 75,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_X_SCISSOR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_BUG_BUZZ] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_DRAGON_PULSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 85,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_DRAGON_RUSH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 75,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_POWER_GEM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DRAIN_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_5
            .power = 75,
            .pp = 10,
        #else
            .power = 60,
            .pp = 5,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_VACUUM_WAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_FOCUS_BLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 70,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_ENERGY_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 90,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_BRAVE_BIRD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_EARTH_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SWITCHEROO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRICK,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_NASTY_PLOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_UP_2,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_AVALANCHE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REVENGE,
        .power = 60,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = -4,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ICE_SHARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SHADOW_CLAW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_THUNDER_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_STATUS,
        .power = 65,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_PARALYSIS,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_ICE_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_USE_FROSTBITE == TRUE
            .argument = STATUS1_FROSTBITE,
        #else
            .argument = STATUS1_FREEZE,
        #endif
        .effect = EFFECT_FLINCH_STATUS,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_FIRE_FANG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_STATUS,
        .power = 65,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = STATUS1_BURN,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_SHADOW_SNEAK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MUD_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_PSYCHO_CUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_ZEN_HEADBUTT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MIRROR_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FLASH_CANNON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ROCK_CLIMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 20,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DEFOG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFOG,
        .power = 0,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        //.ignoresSubstitute = TRUE,
        .magicCoatAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
    },

    [MOVE_TRICK_ROOM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRICK_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = -7,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ACC_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_DRACO_METEOR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 130,
        #else
            .power = 140,
        #endif
        .effect = EFFECT_OVERHEAT,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DISCHARGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_LAVA_PLUME] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_LEAF_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 130,
        #else
            .power = 140,
        #endif
        .effect = EFFECT_OVERHEAT,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_POWER_WHIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ROCK_WRECKER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_CROSS_POISON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 70,
        .type = TYPE_POISON,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_GUNK_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .accuracy = 80,
        #else
            .accuracy = 70,
        #endif
        .effect = EFFECT_POISON_HIT,
        .power = 120,
        .type = TYPE_POISON,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_IRON_HEAD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MAGNET_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ballisticMove = TRUE,
    },

    [MOVE_STONE_EDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .criticalHitStage = 1,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CAPTIVATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CAPTIVATE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_STEALTH_ROCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STEALTH_ROCK,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LOW_KICK,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_CHATTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
            .secondaryEffectChance = 100,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 60,
            .secondaryEffectChance = 10,
        #else
            .power = 60,
            .secondaryEffectChance = 31,
        #endif
        .effect = EFFECT_CONFUSE_HIT,
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
    },

    [MOVE_JUDGMENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_PLATE,
    },

    [MOVE_BUG_BITE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BUG_BITE,
        .power = 60,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_CHARGE_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 50,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 70,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_WOOD_HAMMER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .recoil = 33,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AQUA_JET] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_ATTACK_ORDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_DEFEND_ORDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COSMIC_POWER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RESTORE_HP,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_HEAD_SMASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 150,
        .type = TYPE_ROCK,
        .accuracy = 80,
        .recoil = 50,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DOUBLE_HIT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 35,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_ROAR_OF_TIME] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SPACIAL_REND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_LUNAR_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEALING_WISH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = B_UPDATED_MOVE_FLAGS >= GEN_5,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_CRUSH_GRIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MAGMA_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 100,
            .accuracy = 75,
        #elif B_UPDATED_MOVE_DATA == GEN_5
            .power = 120,
            .accuracy = 75,
        #else
            .power = 120,
            .accuracy = 70,
        #endif
        .effect = EFFECT_TRAP,
        .type = TYPE_FIRE,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_DARK_VOID] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 50,
        #else
            .accuracy = 80,
        #endif
        .effect = EFFECT_DARK_VOID,
        .power = 0,
        .type = TYPE_DARK,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SEED_FLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
        .power = 120,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_OMINOUS_WIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SHADOW_FORCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = MOVE_EFFECT_FEINT,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_HONE_CLAWS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_ACCURACY_UP,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GUARD_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_POWER_SPLIT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POWER_SPLIT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_WONDER_ROOM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 0,
        #else
            .priority = -7,
        #endif
        .effect = EFFECT_WONDER_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_PSYSHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_VENOSHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_VENOSHOCK,
        .power = 65,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_AUTOTOMIZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AUTOTOMIZE,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 2,
        #else
            .priority = 3,
        #endif
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TELEKINESIS,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
        .gravityBanned = TRUE,
    },

    [MOVE_MAGIC_ROOM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .priority = 0,
        #else
            .priority = -7,
        #endif
        .effect = EFFECT_MAGIC_ROOM,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .ignoresProtect = TRUE,
    },

    [MOVE_SMACK_DOWN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SMACK_DOWN,
        .power = 50,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_STORM_THROW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_FLAME_BURST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLAME_BURST,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SLUDGE_WAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 95,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_QUIVER_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_QUIVER_DANCE,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_7,
        .skyBattleBanned = TRUE,
    },

    [MOVE_SYNCHRONOISE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
            .pp = 10,
        #else
            .power = 70,
            .pp = 15,
        #endif
        .effect = EFFECT_SYNCHRONOISE,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_ELECTRO_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ELECTRO_BALL,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_SOAK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_FLAME_CHARGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 50,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_COIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COIL,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ACID_SPRAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
        .power = 40,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_FOUL_PLAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FOUL_PLAY,
        .power = 95,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SIMPLE_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SIMPLE_BEAM,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_ENTRAINMENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ENTRAINMENT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_AFTER_YOU] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AFTER_YOU,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ROUND,
        .power = 60,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_ECHOED_VOICE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ECHOED_VOICE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_CHIP_AWAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_CLEAR_SMOG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CLEAR_SMOG,
        .power = 50,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STORED_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_QUICK_GUARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .priority = 2,
        #else
            .priority = 1,
        #endif
        .effect = EFFECT_ALLY_SWITCH,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_2 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_SCALD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
    },

    [MOVE_SHELL_SMASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SHELL_SMASH,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .magicCoatAffected = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .pulseMove = TRUE,
    },

    [MOVE_HEX] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 65,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_HEX,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SKY_DROP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SKY_DROP,
        .power = 60,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SHIFT_GEAR,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_INCINERATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_INCINERATE,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_QUASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_QUASH,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .metronomeBanned = TRUE,
    },

    [MOVE_ACROBATICS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACROBATICS,
        .power = 55,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_REFLECT_TYPE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REFLECT_TYPE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_RETALIATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RETALIATE,
        .power = 70,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FINAL_GAMBIT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FINAL_GAMBIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = TRUE,
        .parentalBondBanned = TRUE,
    },

    [MOVE_BESTOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BESTOW,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 50,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_WATER_PLEDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FIRE_PLEDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_GRASS_PLEDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 80,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_PLEDGE,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_VOLT_SWITCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STRUGGLE_BUG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 50,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BULLDOZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BULLDOZE,
        .power = 60,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_FROST_BREATH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 60,
        #else
            .power = 40,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_DRAGON_TAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SWITCH_TARGET,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = -6,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .copycatBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_WORK_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_SPATK_UP,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 55,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_WILD_CHARGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 90,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRILL_RUN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .criticalHitStage = 1,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DUAL_CHOP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_HEART_STAMP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HORN_LEECH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ABSORB,
        .power = 75,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SACRED_SWORD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .pp = 15,
        #else
            .pp = 20,
        #endif
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_RAZOR_SHELL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 75,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_HEAT_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAT_CRASH,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_LEAF_TORNADO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 65,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        //.windMove = TRUE,
    },

    [MOVE_STEAMROLLER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 65,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .minimizeDoubleDamage = TRUE,
    },

    [MOVE_COTTON_GUARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP_3,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ACCURACY_DOWN_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 40,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PSYSTRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TAIL_SLAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_NORMAL,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_HURRICANE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 110,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_HURRICANE,
        .type = TYPE_FLYING,
        .accuracy = 70,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .damagesAirborne = TRUE,
    },

    [MOVE_HEAD_CHARGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 120,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .recoil = 25,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_GEAR_GRIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 85,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SEARING_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ballisticMove = TRUE,
    },

    [MOVE_TECHNO_BLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
         #if B_UPDATED_MOVE_DATA >= GEN_6
            .power = 120,
        #else
            .power = 85,
        #endif
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = HOLD_EFFECT_DRIVE,
        .metronomeBanned = TRUE,
    },

    [MOVE_RELIC_SONG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RELIC_SONG,
        .power = 75,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_SLEEP,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SECRET_SWORD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYSHOCK,
        .power = 85,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .slicingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GLACIATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 65,
        .type = TYPE_ICE,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BOLT_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BLUE_FLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FIERY_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_FREEZE_SHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_PARALYSIS,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_ICE_BURN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TWO_TURNS_ATTACK,
        .power = 140,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = MOVE_EFFECT_BURN,
        .twoTurnMove = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_SNARL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 55,
        .type = TYPE_DARK,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ICICLE_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 85,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_V_CREATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_V_CREATE,
        .power = 180,
        .type = TYPE_FIRE,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FUSION_FLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_FUSION_BOLT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FUSION_COMBO,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_FLYING_PRESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 100,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_TWO_TYPED_MOVE,
        .type = TYPE_FIGHTING,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAT_BLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BELCH,
        .power = 120,
        .type = TYPE_POISON,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ROTOTILLER,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STICKY_WEB,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 50,
        #else
            .power = 30,
        #endif
        .effect = EFFECT_FELL_STINGER,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PHANTOM_FORCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SEMI_INVULNERABLE,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_FEINT,
        .twoTurnMove = TRUE,
        .ignoresProtect = TRUE,
        .makesContact = TRUE,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS == GEN_6,
        .sleepTalkBanned = TRUE,
        .instructBanned = TRUE,
        .assistBanned = TRUE,
    },

    [MOVE_TRICK_OR_TREAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GHOST,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NOBLE_ROAR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ION_DELUGE,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 25,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_PARABOLIC_CHARGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 65,
        #else
            .power = 50,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_FORESTS_CURSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_THIRD_TYPE,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_GRASS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_PETAL_BLIZZARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .windMove = TRUE,
    },

    [MOVE_FREEZE_DRY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FREEZE_DRY,
        .power = 70,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DISARMING_VOICE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_PARTING_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARTING_SHOT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .accuracy = 0,
        #else
            .accuracy = 100,
        #endif
        .effect = EFFECT_TOPSY_TURVY,
        .power = 0,
        .type = TYPE_DARK,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ATK_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_DRAINING_KISS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ABSORB,
        .power = 50,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .makesContact = TRUE,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_CRAFTY_SHIELD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLOWER_SHIELD,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_GRASSY_TERRAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GRASSY_TERRAIN,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MISTY_TERRAIN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ELECTRIFY,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
    },

    [MOVE_PLAY_ROUGH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FAIRY_WIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .windMove = TRUE,
    },

    [MOVE_MOONBLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 95,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BOOMBURST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_FAIRY_LOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FAIRY_LOCK,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_KINGS_SHIELD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .effect = EFFECT_DEFENSE_UP2_HIT,
        #else
            .effect = EFFECT_DEFENSE_UP_HIT,
        #endif
        .power = 100,
        .type = TYPE_ROCK,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_STEAM_ERUPTION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_HYPERSPACE_HOLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FEINT,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_WATER_SHURIKEN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .category = BATTLE_CATEGORY_SPECIAL,
        #else
            .category = BATTLE_CATEGORY_PHYSICAL,
        #endif
        .effect = EFFECT_MULTI_HIT,
        .power = 15,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,

    },

    [MOVE_MYSTICAL_FIRE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_7
            .power = 75,
        #else
            .power = 65,
        #endif
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SPIKY_SHIELD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AROMATIC_MIST,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_2,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_VENOM_DRENCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_VENOM_DRENCH,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_POWDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POWDER,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPDEF_UP_2 },
        .powderMove = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_GEOMANCY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GEOMANCY,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAGNETIC_FLUX,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_ELECTRIC_TERRAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ELECTRIC_TERRAIN,
        .power = 0,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_CELEBRATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DO_NOTHING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 40,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 30,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_NUZZLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 20,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_HOLD_BACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FALSE_SWIPE,
        .power = 40,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_INFESTATION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRAP,
        .power = 20,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
    },

    [MOVE_POWER_UP_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_UP_HIT,
        .power = 40,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_OBLIVION_WING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ABSORB,
        .power = 80,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = 75, // restores 75% HP instead of 50% HP
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_THOUSAND_ARROWS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SMACK_DOWN,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .damagesAirborne = TRUE,
        .ignoreTypeIfFlyingAndUngrounded = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_THOUSAND_WAVES] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .skyBattleBanned = TRUE,
    },

    [MOVE_LANDS_WRATH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = TRUE,
    },

    [MOVE_LIGHT_OF_RUIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL,
        .power = 140,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .recoil = 50,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ORIGIN_PULSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 110,
        .type = TYPE_WATER,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PRECIPICE_BLADES] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GROUND,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRAGON_ASCENT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CLOSE_COMBAT,
        .power = 120,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_HYPERSPACE_FURY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HYPERSPACE_FURY,
        .power = 100,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .metronomeBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SHORE_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 5,
        #else
            .pp = 10,
        #endif
        .effect = EFFECT_SHORE_UP,
        .power = 0,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .healBlockBanned = TRUE,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FIRST_IMPRESSION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FAKE_OUT,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BANEFUL_BUNKER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 80,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_DARKEST_LARIAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetDefenseEvasionStages = TRUE,
    },

    [MOVE_SPARKLING_ARIA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPARKLING_ARIA,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = STATUS1_BURN,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_ICE_HAMMER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HAMMER_ARM,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_FLORAL_HEALING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HEAL_PULSE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_RESET_STATS },
        .argument = MOVE_EFFECT_FLORAL_HEALING,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_HIGH_HORSEPOWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 95,
        .type = TYPE_GROUND,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_STRENGTH_SAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STRENGTH_SAP,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .magicCoatAffected = TRUE,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_SOLAR_BLADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SOLAR_BEAM,
        .power = 125,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_SPOTLIGHT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FOLLOW_ME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TOXIC_THREAD,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .magicCoatAffected = TRUE,
    },

    [MOVE_LASER_FOCUS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LASER_FOCUS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 30,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GEAR_UP,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_THROAT_CHOP,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_POLLEN_PUFF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_ENEMY_HEAL_ALLY,
        .power = 90,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
    },

    [MOVE_ANCHOR_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_PREVENT_ESCAPE,
        .power = 80,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PSYCHIC_TERRAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYCHIC_TERRAIN,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPATK_UP_1 },
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_LUNGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 80,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_FIRE_LASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_POWER_TRIP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STORED_POWER,
        .power = 20,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BURN_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_UP,
        .power = 130,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_SPEED_SWAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_SWAP,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_SPD_UP_1 },
        .ignoresSubstitute = TRUE,
    },

    [MOVE_SMART_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PURIFY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PURIFY,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_ALL_STATS_UP_1 },
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_REVELATION_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REVELATION_DANCE,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .danceMove = TRUE,
    },

    [MOVE_CORE_ENFORCER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CORE_ENFORCER,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .zMove = { .powerOverride = 140 },
    },

    [MOVE_TROP_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_INSTRUCT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_INSTRUCT,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BEAK_BLAST,
        .power = 100,
        .type = TYPE_FLYING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACKER_DEFENSE_DOWN_HIT,
        .power = 110,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .soundMove = TRUE,
    },

    [MOVE_DRAGON_HAMMER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 90,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_BRUTAL_SWING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_AURORA_VEIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AURORA_VEIL,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SHELL_TRAP,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OVERHEAT,
        .power = 130,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_PSYCHIC_FANGS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BRICK_BREAK,
        .power = 85,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_STOMPING_TANTRUM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_SHADOW_BONE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 85,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ACCELEROCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_LIQUIDATION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PRISMATIC_LASER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 160,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_SPECTRAL_THIEF] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECTRAL_THIEF,
        .power = 90,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .ignoresSubstitute = TRUE,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SUNSTEEL_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MOONGEIST_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_TEARFUL_LOOK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_NOBLE_ROAR,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .zMove = { .effect = Z_EFFECT_DEF_UP_1 },
        .ignoresProtect = TRUE,
        .magicCoatAffected = TRUE,
    },

    [MOVE_ZING_ZAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_NATURES_MADNESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = B_UPDATED_MOVE_FLAGS >= GEN_8,
    },

    [MOVE_MULTI_ATTACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 120,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_CHANGE_TYPE_ON_ITEM,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = HOLD_EFFECT_MEMORY,
        .makesContact = TRUE,
    },

    [MOVE_MIND_BLOWN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MIND_BLOWN,
        .power = 150,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_PLASMA_FISTS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLASMA_FISTS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PHOTON_GEYSER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PHOTON_GEYSER,
        .power = 100,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ignoresTargetAbility = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ZIPPY_ZAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 80,
            .effect = EFFECT_EVASION_UP_HIT,
            .pp = 10,
            .sheerForceBoost = TRUE,
        #else
            .power = 50,
            .pp = 15,
        #endif
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 2,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .alwaysCriticalHit = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPLISHY_SPLASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 90,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_FLOATY_FALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 90,
        .type = TYPE_FLYING,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .gravityBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_PIKA_PAPOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BOUNCY_BUBBLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 60,
            .pp = 20,
            .argument = 100, // restores 100% HP instead of 50% HP
        #else
            .power = 90,
            .pp = 15,
        #endif
        .effect = EFFECT_ABSORB,
        .type = TYPE_WATER,
        .accuracy = 100,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
        .healBlockBanned = B_HEAL_BLOCKING >= GEN_6,
    },

    [MOVE_BUZZY_BUZZ] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 60,
            .pp = 20,
        #else
            .power = 90,
            .pp = 15,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SIZZLY_SLIDE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 60,
            .pp = 20,
        #else
            .power = 90,
            .pp = 15,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GLITZY_GLOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 80,
            .accuracy = 95,
        #else
            .power = 90,
            .accuracy = 100,
        #endif
        .effect = EFFECT_GLITZY_GLOW,
        .type = TYPE_PSYCHIC,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_BADDY_BAD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 80,
            .accuracy = 95,
        #else
            .power = 90,
            .accuracy = 100,
        #endif
        .effect = EFFECT_BADDY_BAD,
        .type = TYPE_DARK,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SAPPY_SEED] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 100,
            .accuracy = 90,
            .pp = 10,
        #else
            .power = 90,
            .accuracy = 100,
            .pp = 15,
        #endif
        .effect = EFFECT_SAPPY_SEED,
        .type = TYPE_GRASS,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZY_FROST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 100,
            .accuracy = 90,
            .pp = 10,
        #else
            .power = 90,
            .accuracy = 100,
            .pp = 15,
        #endif
        .effect = EFFECT_FREEZY_FROST,
        .type = TYPE_ICE,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPARKLY_SWIRL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_8
            .power = 120,
            .accuracy = 85,
            .pp = 5,
        #else
            .power = 90,
            .accuracy = 100,
            .pp = 15,
        #endif
        .effect = EFFECT_SPARKLY_SWIRL,
        .type = TYPE_FAIRY,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_VEEVEE_VOLLEY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RETURN,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .mirrorMoveBanned = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_DOUBLE_IRON_BASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 60,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .sheerForceBoost = TRUE,
        .strikeCount = 2,
        .minimizeDoubleDamage = B_UPDATED_MOVE_FLAGS < GEN_8,
        .metronomeBanned = TRUE,
    },

    [MOVE_DYNAMAX_CANNON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SNIPE_SHOT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_JAW_LOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_JAW_LOCK,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_STUFF_CHEEKS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STUFF_CHEEKS,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_NO_RETREAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_NO_RETREAT,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TAR_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TAR_SHOT,
        .power = 0,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_MAGIC_POWDER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SOAK,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .argument = TYPE_PSYCHIC,
        .magicCoatAffected = TRUE,
        .powderMove = TRUE,
    },

    [MOVE_DRAGON_DARTS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT, //TODO
        .power = 50,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .strikeCount = 2,
        .parentalBondBanned = TRUE,
    },

    [MOVE_TEATIME] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TEATIME,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_OCTOLOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_OCTOLOCK,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },

    [MOVE_BOLT_BEAK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_FISHIOUS_REND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BOLT_BEAK,
        .power = 85,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .bitingMove = TRUE,
    },

    [MOVE_COURT_CHANGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COURT_CHANGE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
    },

    [MOVE_CLANGOROUS_SOUL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CLANGOROUS_SOUL,
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BODY_PRESS,
        .power = 80,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_DECORATE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DECORATE,
        .power = 0,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRUM_BEATING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SNAP_TRAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRAP,
        .power = 35,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_PYRO_BALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_BEHEMOTH_BLADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DYNAMAX_DOUBLE_DMG,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AURA_WHEEL,
        .power = 110,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_BREAKING_SWIPE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 60,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_BRANCH_POKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OVERDRIVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
        .metronomeBanned = TRUE,
    },

    [MOVE_APPLE_ACID] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GRAV_APPLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GRAV_APPLE,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPIRIT_BREAK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 75,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_STRANGE_STEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 90,
        .type = TYPE_FAIRY,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_LIFE_DEW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALL_BATTLERS,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_OBSTRUCT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_METEOR_ASSAULT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 150,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_ETERNABEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECHARGE,
        .power = 160,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_STEEL_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STEEL_BEAM,
        .power = 140,
        .type = TYPE_STEEL,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EXPANDING_FORCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EXPANDING_FORCE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_STEEL_ROLLER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 130,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_FAIL, // Remove a field terrain if there is one and hit, otherwise fail.
        .skyBattleBanned = TRUE,
    },

    [MOVE_SCALE_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MULTI_HIT,
        .power = 25,
        .type = TYPE_DRAGON,
        .accuracy = 90,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MOVE_EFFECT_SCALE_SHOT,
    },

    [MOVE_METEOR_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 120,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .twoTurnMove = TRUE,
        .instructBanned = TRUE,
    },

    [MOVE_SHELL_SIDE_ARM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SHELL_SIDE_ARM,
        .power = 90,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_MISTY_EXPLOSION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EXPLOSION,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_GRASSY_GLIDE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 55,
        #else
            .power = 70,
        #endif
        .effect = EFFECT_GRASSY_GLIDE,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_RISING_VOLTAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RISING_VOLTAGE,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_TERRAIN_PULSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TERRAIN_PULSE,
        .power = 50,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .pulseMove = TRUE,
    },

    [MOVE_SKITTER_SMACK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_DOWN_HIT,
        .power = 70,
        .type = TYPE_BUG,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BURNING_JEALOUSY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 70,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_LASH_OUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_LASH_OUT,
        .power = 75,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_POLTERGEIST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POLTERGEIST,
        .power = 110,
        .type = TYPE_GHOST,
        .accuracy = 90,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_CORROSIVE_GAS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CORROSIVE_GAS,
        .power = 0,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 40,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_FOES_AND_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
    },

    [MOVE_COACHING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COACHING,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_FLIP_TURN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_ESCAPE,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_TRIPLE_AXEL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRIPLE_KICK,
        .power = 20,
        .type = TYPE_ICE,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_DUAL_WINGBEAT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_FLYING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 2,
    },

    [MOVE_SCORCHING_SANDS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 70,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .thawsUser = TRUE,
    },

    [MOVE_JUNGLE_HEALING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .ignoresSubstitute = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_WICKED_BLOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 75,
        #else
            .power = 80,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 25,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TRAP,
        .power = 80,
        .type = TYPE_ELECTRIC,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_DRAGON_ENERGY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ERUPTION,
        .power = 150,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_FREEZING_GLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .power = 90,
        #if B_USE_FROSTBITE == TRUE
            .effect = EFFECT_FROSTBITE_HIT,
        #else
            .effect = EFFECT_FREEZE_HIT,
        #endif
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FIERY_WRATH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 90,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_THUNDEROUS_KICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_DOWN_HIT,
        .power = 90,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GLACIAL_LANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 120,
        #else
            .power = 130,
        #endif
        .effect = EFFECT_HIT,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ASTRAL_BARRAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 120,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_EERIE_SPELL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EERIE_SPELL,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_DIRE_CLAW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 80,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_DIRE_CLAW,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_PSYSHIELD_BASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_POWER_SHIFT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POWER_TRICK,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
        .power = 65,
        .type = TYPE_ROCK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = MOVE_EFFECT_STEALTH_ROCK,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_SPRINGTIDE_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 100,
        #else
            .power = 95,
        #endif
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .type = TYPE_FAIRY,
        .accuracy = 80,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_MYSTICAL_POWER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_ATTACK_UP_HIT,
        .power = 70,
        .type = TYPE_PSYCHIC,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_RAGING_FURY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 120,
        #else
            .power = 90,
        #endif
        .effect = EFFECT_RAMPAGE,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_RANDOM,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_WAVE_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 120,
        #else
            .power = 75,
        #endif
        .effect = EFFECT_RECOIL,
        .type = TYPE_WATER,
        .accuracy = 100,
        .recoil = 33,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_CHLOROBLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 150,
        #else
            .power = 120,
        #endif
        .effect = EFFECT_STEEL_BEAM,
        .type = TYPE_GRASS,
        .accuracy = 95,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MOUNTAIN_GALE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FLINCH_HIT,
        .power = 100,
        .type = TYPE_ICE,
        .accuracy = 85,
        .pp = 5,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_VICTORY_DANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_VICTORY_DANCE,
        .power = 0,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 20,
        .secondaryEffectChance = 100,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 120,
        #else
            .power = 100,
        #endif
        .effect = EFFECT_CLOSE_COMBAT,
        .type = TYPE_GROUND,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
    },

    [MOVE_BARB_BARRAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BARB_BARRAGE,
        .power = 60,
        .type = TYPE_POISON,
        .accuracy = 100,
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .pp = 10,
        #else
            .pp = 15,
        #endif
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ESPER_WING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 80,
            .accuracy = 100,
        #else
            .power = 75,
            .accuracy = 90,
        #endif
        .effect = EFFECT_SPEED_UP_HIT,
        .type = TYPE_PSYCHIC,
        .criticalHitStage = 1,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_BITTER_MALICE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 75,
        #else
            .power = 60,
        #endif
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_SHELTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DEFENSE_UP_2,
        .power = 0,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TRIPLE_ARROWS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 90,
            .pp = 10,
        #else
            .power = 50,
            .pp = 15,
        #endif
        .effect = EFFECT_TRIPLE_ARROWS,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .criticalHitStage = 1,
        .secondaryEffectChance = 100, // 50% Defense down, 30% Flinch. Can be modified in 'SetMoveEffect'
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_INFERNAL_PARADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_INFERNAL_PARADE,
        .power = 60,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_CEASELESS_EDGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_ENTRY_HAZARD,
        .power = 65,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = MOVE_EFFECT_SPIKES,
        .sheerForceBoost = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_BLEAKWIND_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 100,
            .pp = 10,
        #else
            .power = 95,
            .pp = 5,
        #endif
        .effect = EFFECT_SPEED_DOWN_HIT,
        .type = TYPE_FLYING,
        .accuracy = 80,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_WILDBOLT_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 100,
            .pp = 10,
        #else
            .power = 95,
            .pp = 5,
        #endif
        .effect = EFFECT_PARALYZE_HIT,
        .type = TYPE_ELECTRIC,
        .accuracy = 80,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_SANDSEAR_STORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        #if B_UPDATED_MOVE_DATA >= GEN_9
            .power = 100,
            .pp = 10,
        #else
            .power = 95,
            .pp = 5,
        #endif
        .effect = EFFECT_BURN_HIT,
        .type = TYPE_GROUND,
        .accuracy = 80,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .windMove = TRUE,
    },

    [MOVE_LUNAR_BLESSING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_JUNGLE_HEALING,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .healBlockBanned = TRUE,
    },

    [MOVE_TAKE_HEART] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_TAKE_HEART,
        .power = 0,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .snatchAffected = TRUE,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
    },

    [MOVE_TERA_BLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TERA_BLAST,
        .power = 80,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
        .forcePressure = TRUE,
    },

    [MOVE_SILK_TRAP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_AXE_KICK,
        .power = 120,
        .type = TYPE_FIGHTING,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 30,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
    },

    [MOVE_LAST_RESPECTS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_LAST_RESPECTS
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_LUMINA_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPECIAL_DEFENSE_DOWN_HIT_2,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
    },

    [MOVE_ORDER_UP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_ORDER_UP
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_JET_PUNCH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 60,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_SPICY_EXTRACT
        .power = 0,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .magicCoatAffected = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SPIN_OUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPIN_OUT,
        .power = 100,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_POPULATION_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POPULATION_BOMB,
        .power = 20,
        .type = TYPE_NORMAL,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 80,
        .type = TYPE_ICE,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT, // Remove the active field terrain if there is one.
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_GLAIVE_RUSH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_GLAIVE_RUSH,
        .power = 120,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE, // Only since it isn't implemented yet
    },

    [MOVE_REVIVAL_BLESSING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_REVIVAL_BLESSING,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
        .healBlockBanned = TRUE,
        .sketchBanned = (B_SKETCH_BANS >= GEN_9),
    },

    [MOVE_SALT_CURE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SALT_CURE,
        .power = 40,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TRIPLE_DIVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 30,
        .type = TYPE_WATER,
        .accuracy = 95,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .strikeCount = 3,
    },

    [MOVE_MORTAL_SPIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MORTAL_SPIN,
        .power = 30,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .sheerForceBoost = TRUE,
        .makesContact = TRUE,
    },

    [MOVE_DOODLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DOODLE,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_FILLET_AWAY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FILLET_AWAY,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 85,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_FLOWER_TRICK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .alwaysCriticalHit = TRUE,
    },

    [MOVE_TORCH_SONG] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SP_ATTACK_UP_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .sheerForceBoost = TRUE,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },

    [MOVE_AQUA_STEP] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .sheerForceBoost = TRUE,
        .danceMove = TRUE,
    },

    [MOVE_RAGING_BULL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RAGING_BULL,
        .power = 90,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_MAKE_IT_RAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAKE_IT_RAIN,
        .power = 120,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_RUINATION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 90,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_COLLISION_COURSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_DRIFT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_COLLISION_COURSE,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SHED_TAIL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_SHED_TAIL
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CHILLY_RECEPTION,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, // EFFECT_TIDY_UP
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresProtect = TRUE,
        .mirrorMoveBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_SNOWSCAPE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SNOWSCAPE,
        .power = 0,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_DOWN_HIT,
        .power = 50,
        .type = TYPE_BUG,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TRAILBLAZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SPEED_UP_HIT,
        .power = 50,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_CHILLING_WATER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ATTACK_DOWN_HIT,
        .power = 50,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 20,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_HYPER_DRILL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 100,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .ignoresProtect = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_TWIN_BEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 40,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .metronomeBanned = TRUE,
    },

    [MOVE_RAGE_FIST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RAGE_FIST,
        .power = 50,
        .type = TYPE_GHOST,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .punchingMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_ARMOR_CANNON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CLOSE_COMBAT,
        .power = 120,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_BITTER_BLADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ABSORB,
        .power = 90,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
        .healBlockBanned = TRUE,
    },

    [MOVE_DOUBLE_SHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_DOUBLE_SHOCK,
        .power = 120,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_GIGATON_HAMMER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 160,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_COMEUPPANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_METAL_BURST,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_DEPENDS,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .meFirstBanned = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_AQUA_CUTTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 70,
        .type = TYPE_WATER,
        .accuracy = 100,
        .criticalHitStage = 1,
        .pp = 20,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .slicingMove = TRUE,
    },

    [MOVE_BLAZING_TORQUE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_BURN_HIT,
        .power = 80,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
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
    },

    [MOVE_WICKED_TORQUE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SLEEP_HIT,
        .power = 80,
        .type = TYPE_DARK,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 10,
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
    },

    [MOVE_NOXIOUS_TORQUE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_HIT,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
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
    },

    [MOVE_COMBAT_TORQUE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 100,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
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
    },

    [MOVE_MAGICAL_TORQUE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 100,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 30,
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
    },

    [MOVE_PSYBLADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PSYBLADE,
        .power = 80,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_HYDRO_STEAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HYDRO_STEAM,
        .power = 80,
        .type = TYPE_WATER,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
    },

    [MOVE_BLOOD_MOON] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 140,
        .type = TYPE_NORMAL,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .cantUseTwice = TRUE,
    },

    [MOVE_MATCHA_GOTCHA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MATCHA_GOTCHA,
        .power = 80,
        .type = TYPE_GRASS,
        .accuracy = 90,
        .pp = 15,
        .secondaryEffectChance = 20,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .thawsUser = TRUE,
        .metronomeBanned = TRUE,
        .healBlockBanned = TRUE,
    },

    [MOVE_SYRUP_BOMB] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SYRUP_BOMB,
        .power = 60,
        .type = TYPE_GRASS,
        .accuracy = 85,
        .pp = 10,
        .secondaryEffectChance = 100, // syrup bomb volatile status
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .ballisticMove = TRUE,
        .metronomeBanned = TRUE,
    },

    [MOVE_IVY_CUDGEL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_IVY_CUDGEL,
        .power = 100,
        .type = TYPE_GRASS,
        .accuracy = 100,
        .pp = 10,
        .criticalHitStage = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .metronomeBanned = TRUE,
    },

    [MOVE_ELECTRO_SHOT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_METEOR_BEAM,
        .power = 130,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        //.sheerForceBoost = TRUE, (uncomment when effect is implemented, otherwise it breaks the Sheer Force Test)
    },

    [MOVE_TERA_STARSTORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_TERA_STARSTORM
        .power = 120,
        .type = TYPE_NORMAL, // Stellar type if used by Terapagos-Stellar
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FICKLE_BEAM,
        .power = 80,
        .type = TYPE_DRAGON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_BURNING_BULWARK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
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
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUCKER_PUNCH,
        .power = 70,
        .type = TYPE_ELECTRIC,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 1,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    [MOVE_MIGHTY_CLEAVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_FEINT,
        .power = 95,
        .type = TYPE_ROCK,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
        .slicingMove = TRUE,
    },

    [MOVE_TACHYON_CUTTER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 50,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .strikeCount = 2,
        .slicingMove = TRUE,
    },

    [MOVE_HARD_PRESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_WRING_OUT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_DRAGON_CHEER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_DRAGON_CHEER
        .power = 0,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_ALLY,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_ALLURING_VOICE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_CONFUSE_HIT,
        .power = 80,
        .type = TYPE_FAIRY,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .sheerForceBoost = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_TEMPER_FLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_STOMPING_TANTRUM,
        .power = 75,
        .type = TYPE_FIRE,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_SUPERCELL_SLAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_RECOIL_IF_MISS,
        .power = 100,
        .type = TYPE_ELECTRIC,
        .accuracy = 95,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_PSYCHIC_NOISE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_PSYCHIC_NOISE
        .power = 75,
        .type = TYPE_PSYCHIC,
        .accuracy = 100,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = TRUE,
    },

    [MOVE_UPPER_HAND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PLACEHOLDER, //EFFECT_UPPER_HAND
        .power = 65,
        .type = TYPE_FIGHTING,
        .accuracy = 100,
        .pp = 15,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 3,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .makesContact = TRUE,
    },

    [MOVE_MALIGNANT_CHAIN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_POISON_FANG,
        .power = 100,
        .type = TYPE_POISON,
        .accuracy = 100,
        .pp = 5,
        .secondaryEffectChance = 50,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },

    // Z-Moves
    [MOVE_BREAKNECK_BLITZ] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,    //determined from move type
    },
    [MOVE_ALL_OUT_PUMMELING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUPERSONIC_SKYSTRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_ACID_DOWNPOUR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TECTONIC_RAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },
    [MOVE_CONTINENTAL_CRUSH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SAVAGE_SPIN_OUT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_NEVER_ENDING_NIGHTMARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CORKSCREW_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_INFERNO_OVERDRIVE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_HYDRO_VORTEX] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLOOM_DOOM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GIGAVOLT_HAVOC] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SHATTERED_PSYCHE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_SUBZERO_SLAMMER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_DEVASTATING_DRAKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_BLACK_HOLE_ECLIPSE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_TWINKLE_TACKLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CATASTROPIKA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_10000000_VOLT_THUNDERBOLT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .criticalHitStage = 2,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_STOKED_SPARKSURFER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PARALYZE_HIT,
        .power = 175,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_EXTREME_EVOBOOST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_EXTREME_EVOBOOST,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 0,
        .category = BATTLE_CATEGORY_STATUS,
    },
    [MOVE_PULVERIZING_PANCAKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 210,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_GENESIS_SUPERNOVA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 185,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .argument = ARG_SET_PSYCHIC_TERRAIN, // Set Psychic Terrain. If there's a different field terrain active, overwrite it.
    },
    [MOVE_SINISTER_ARROW_RAID] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MALICIOUS_MOONSAULT] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 180,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_OCEANIC_OPERETTA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SPLINTERED_STORMSHARDS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT_SET_REMOVE_TERRAIN,
        .power = 190,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = ARG_TRY_REMOVE_TERRAIN_HIT,  // Remove the active field terrain if there is one.
    },
    [MOVE_LETS_SNUGGLE_FOREVER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 190,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_CLANGOROUS_SOULBLAZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_ALL_STATS_UP_HIT,
        .power = 185,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_BOTH,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
        .soundMove = TRUE,
        .ignoresSubstitute = B_UPDATED_MOVE_FLAGS >= GEN_6,
    },
    [MOVE_GUARDIAN_OF_ALOLA] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_SUPER_FANG,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SEARING_SUNRAZE_SMASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },
    [MOVE_MENACING_MOONRAZE_MAELSTROM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_LIGHT_THAT_BURNS_THE_SKY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 200,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_SPECIAL,
    },
    [MOVE_SOUL_STEALING_7_STAR_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_HIT,
        .power = 195,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 1,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
    },

    [MOVE_MAX_GUARD] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_PROTECT,
        .power = 0,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 0,
        .target = MOVE_TARGET_USER,
        .priority = 4,
        .category = BATTLE_CATEGORY_STATUS,
        .protectionMove = TRUE,
    },

    [MOVE_MAX_FLARE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SUN,
    },

    [MOVE_MAX_FLUTTERBY] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_ATK,
    },

    [MOVE_MAX_LIGHTNING] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_ELECTRIC_TERRAIN,
    },

    [MOVE_MAX_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED,
    },

    [MOVE_MAX_KNUCKLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_ATTACK,
    },

    [MOVE_MAX_PHANTASM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_DEFENSE,
    },

    [MOVE_MAX_HAILSTORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HAIL,
    },

    [MOVE_MAX_OOZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_ATK,
    },

    [MOVE_MAX_GEYSER] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAIN,
    },

    [MOVE_MAX_AIRSTREAM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SPEED,
    },

    [MOVE_MAX_STARFALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MISTY_TERRAIN,
    },

    [MOVE_MAX_WYRMWIND] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_ATTACK,
    },

    [MOVE_MAX_MINDSTORM] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PSYCHIC_TERRAIN,
    },

    [MOVE_MAX_ROCKFALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDSTORM,
    },

    [MOVE_MAX_QUAKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_SP_DEF,
        .skyBattleBanned = B_EXTRAPOLATED_MOVE_FLAGS,
    },

    [MOVE_MAX_DARKNESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 1,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SP_DEF,
    },

    [MOVE_MAX_OVERGROWTH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRASSY_TERRAIN,
    },

    [MOVE_MAX_STEELSPIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RAISE_TEAM_DEFENSE,
    },

    [MOVE_G_MAX_VINE_LASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VINE_LASH,
    },

    [MOVE_G_MAX_WILDFIRE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_WILDFIRE,
    },

    [MOVE_G_MAX_CANNONADE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CANNONADE,
    },

    [MOVE_G_MAX_BEFUDDLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_BUG,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_EFFECT_SPORE_FOES,
    },

    [MOVE_G_MAX_VOLT_CRASH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_PARALYZE_FOES,
    },

    [MOVE_G_MAX_GOLD_RUSH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES_PAY_DAY,
    },

    [MOVE_G_MAX_CHI_STRIKE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIGHTING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CRIT_PLUS,
    },

    [MOVE_G_MAX_TERROR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GHOST,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_MEAN_LOOK,
    },

    [MOVE_G_MAX_FOAM_BURST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_SPEED_2_FOES,
    },

    [MOVE_G_MAX_RESONANCE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ICE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AURORA_VEIL,
    },

    [MOVE_G_MAX_CUDDLE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_INFATUATE_FOES,
    },

    [MOVE_G_MAX_REPLENISH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_NORMAL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_RECYCLE_BERRIES,
    },

    [MOVE_G_MAX_MALODOR] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_POISON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_FOES,
    },

    [MOVE_G_MAX_MELTDOWN] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_TORMENT_FOES,
    },

    [MOVE_G_MAX_DRUM_SOLO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_FIREBALL] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_HYDROSNIPE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIXED_POWER, //EFFECT TODO
        .ignoresTargetAbility = TRUE,
    },

    [MOVE_G_MAX_WIND_RAGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FLYING,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_DEFOG,
    },

    [MOVE_G_MAX_GRAVITAS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_PSYCHIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_GRAVITY,
    },

    [MOVE_G_MAX_STONESURGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEALTH_ROCK,
    },

    [MOVE_G_MAX_VOLCALITH] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ROCK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_VOLCALITH,
    },

    [MOVE_G_MAX_TARTNESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_LOWER_EVASIVENESS_FOES,
    },

    [MOVE_G_MAX_SWEETNESS] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GRASS,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_AROMATHERAPY,
    },

    [MOVE_G_MAX_SANDBLAST] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_GROUND,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SANDBLAST_FOES,
    },

    [MOVE_G_MAX_STUN_SHOCK] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_ELECTRIC,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_POISON_PARALYZE_FOES,
    },

    [MOVE_G_MAX_CENTIFERNO] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FIRE,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_FIRE_SPIN_FOES,
    },

    [MOVE_G_MAX_SMITE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_CONFUSE_FOES,
    },


    [MOVE_G_MAX_SNOOZE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_YAWN_FOE,
    },

    [MOVE_G_MAX_FINALE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_FAIRY,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_HEAL_TEAM,
    },

    [MOVE_G_MAX_STEELSURGE] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_STEEL,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_STEELSURGE,
    },

    [MOVE_G_MAX_DEPLETION] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DRAGON,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_SPITE,
    },

    [MOVE_G_MAX_ONE_BLOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_DARK,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

    [MOVE_G_MAX_RAPID_FLOW] =
    {
        .name = _("Dummy"),
        .description = COMPOUND_STRING("Dummy description."),    //ANIM TODO
        .effect = EFFECT_MAX_MOVE,
        .power = 10,
        .type = TYPE_WATER,
        .accuracy = 0,
        .pp = 10,
        .secondaryEffectChance = 100,
        .target = MOVE_TARGET_SELECTED,
        .priority = 0,
        .category = BATTLE_CATEGORY_PHYSICAL,
        .argument = MAX_EFFECT_BYPASS_PROTECT, //EFFECT TODO
    },

};
