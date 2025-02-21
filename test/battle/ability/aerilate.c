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
TO_DO_BATTLE_TEST("Aerilate overrides Electrify (Gen6-7)");
TO_DO_BATTLE_TEST("Aerilate overrides Ion Deluge (Gen6-7)");
// Gen 8+
//TO_DO_BATTLE_TEST("Aerilate doesn't override Electrify (Gen8+)");  // No mon with Aerilate exists in Gen8+, but probably behaves similar to Pixilate, which does.
//TO_DO_BATTLE_TEST("Aerilate doesn't override Ion Deluge (Gen8+)"); // Ion Deluge doesn't exist in Gen 8+, but we probably could assume it behaves similar to under Electrify. TODO: Test by hacking SV.
