#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Transistor boosts Electric type moves by 1.5 in Gen8 and 1.3 in Gen9+", s16 damage)
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_NEUTRALIZING_GAS; }
    PARAMETRIZE { ability = ABILITY_LEVITATE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_THUNDER_SHOCK].type == TYPE_ELECTRIC);
        PLAYER(SPECIES_REGIELEKI) { Ability(ABILITY_TRANSISTOR); }
        OPPONENT(SPECIES_KOFFING) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_TRANSISTOR_BOOST)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
