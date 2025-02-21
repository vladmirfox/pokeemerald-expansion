#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(GetMoveType(MOVE_TACKLE) == TYPE_NORMAL);
    ASSUME(GetMovePower(MOVE_TACKLE) > 0);
}

SINGLE_BATTLE_TEST("Aerilate turns a Normal-type move into Flying-type move")
{
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_SALAMENCE) { Item(ITEM_SALAMENCITE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE, gimmick: GIMMICK_MEGA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Aerilate can not turn certain moves into Flying type moves")
{
    u32 move;
    PARAMETRIZE { move = MOVE_WEATHER_BALL; }
    // PARAMETRIZE { move = MOVE_NATURAL_GIFT; } TODO: handle this case via Skill Swap
    PARAMETRIZE { move = MOVE_JUDGMENT; }
    PARAMETRIZE { move = MOVE_TECHNO_BLAST; }
    PARAMETRIZE { move = MOVE_REVELATION_DANCE; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; }
    PARAMETRIZE { move = MOVE_TERRAIN_PULSE; }
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_SALAMENCE) { Item(ITEM_SALAMENCITE); }
    } WHEN {
        TURN { MOVE(opponent, move, gimmick: GIMMICK_MEGA); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_MEGA_EVOLUTION, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NONE_OF {
            MESSAGE("It's super effective!");
        }
    }
}

SINGLE_BATTLE_TEST("Aerilate boosts power of affected moves by 20% (Gen7+) or 30% (Gen6-)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_6; }

    GIVEN {
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        PLAYER(SPECIES_PINSIR) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // No STAB
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.3), results[3].damage); // No STAB
    }
}

// Gen 6-7
SINGLE_BATTLE_TEST("Aerilate overrides Electrify (Gen6-7)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_6; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ELECTRIFY) == EFFECT_ELECTRIFY);
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        WITH_CONFIG(GEN_CONFIG_ATE_OVERRIDE, genConfig);
        PLAYER(SPECIES_PINSIR) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ELECTRIFY); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // No STAB
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.3), results[3].damage); // No STAB
    }
}

SINGLE_BATTLE_TEST("Aerilate overrides Ion Deluge (Gen6-7)", s16 damage)
{
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_6; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_6; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ION_DELUGE) == EFFECT_ION_DELUGE);
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        WITH_CONFIG(GEN_CONFIG_ATE_OVERRIDE, genConfig);
        PLAYER(SPECIES_PINSIR) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ION_DELUGE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // No STAB
        else
            EXPECT_MUL_EQ(results[1].damage, Q_4_12(1.3), results[3].damage); // No STAB
    }
}

// Gen 8+
SINGLE_BATTLE_TEST("Aerilate doesn't override Electrify (Gen8+)", s16 damage)
{
    // No mon with Aerilate exists in Gen8+, but probably behaves similar to Pixilate, which does.
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_8; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_8; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ELECTRIFY) == EFFECT_ELECTRIFY);
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        WITH_CONFIG(GEN_CONFIG_ATE_OVERRIDE, genConfig);
        PLAYER(SPECIES_PINSIR) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ELECTRIFY); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // No STAB
        else
            EXPECT_EQ(results[1].damage, results[3].damage);
    }
}

SINGLE_BATTLE_TEST("Aerilate doesn't override Ion Deluge (Gen8+)", s16 damage)
{
    // Ion Deluge doesn't exist in Gen 8+, but we probably could assume it behaves similar to under Electrify. TODO: Test by hacking SV.
    u32 ability, genConfig;
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_HYPER_CUTTER;   genConfig = GEN_8; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_7; }
    PARAMETRIZE { ability = ABILITY_AERILATE;       genConfig = GEN_8; }

    GIVEN {
        ASSUME(GetMoveEffect(MOVE_ION_DELUGE) == EFFECT_ION_DELUGE);
        WITH_CONFIG(GEN_CONFIG_ATE_MULTIPLIER, genConfig);
        WITH_CONFIG(GEN_CONFIG_ATE_OVERRIDE, genConfig);
        PLAYER(SPECIES_PINSIR) { Ability(ability); Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_ION_DELUGE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (genConfig >= GEN_7)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage); // No STAB
        else
            EXPECT_EQ(results[1].damage,  results[3].damage);
    }
}

TO_DO_BATTLE_TEST("Aerilate doesn't affect Tera Starstorm's type");
TO_DO_BATTLE_TEST("Aerilate doesn't affect Natural Gift's type");
TO_DO_BATTLE_TEST("Aerilate doesn't affect Max Strike's type");
TO_DO_BATTLE_TEST("Aerilate does affect Weather Ball's type");
TO_DO_BATTLE_TEST("Aerilate does affect Hidden Power's type");
TO_DO_BATTLE_TEST("Aerilate does affect Judgment/Techno Blast/Multi-Attack's type");
TO_DO_BATTLE_TEST("Aerilate does affect Terrain Pulse's type");
TO_DO_BATTLE_TEST("Aerilate does affect damaging Z-Move types");
TO_DO_BATTLE_TEST("(DYNAMAX) Aerilate turns Max Strike into Max Airstream"); // All other -ate abilities do this, so interpolating this as no Aerilate mon is available in a Dynamax game
