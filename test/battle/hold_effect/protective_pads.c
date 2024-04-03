#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_PROTECTIVE_PADS].holdEffect == HOLD_EFFECT_PROTECTIVE_PADS);
}

SINGLE_BATTLE_TEST("Protective Pads protected moves still make direct contact", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_KLUTZ; }
    PARAMETRIZE { ability = ABILITY_FLUFFY; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_PROTECTIVE_PADS); }
        OPPONENT(SPECIES_STUFFUL) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Wobbuffet used Tackle!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(0.5), results[1].damage);
    }
}
