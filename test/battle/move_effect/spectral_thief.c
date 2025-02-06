#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Spectral Thies steals opponents boost before attacking", s16 damage)
{
    u32 move;
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    PARAMETRIZE { move = MOVE_SWORDS_DANCE; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWORDS_DANCE].effect == EFFECT_ATTACK_UP_2);
        ASSUME(gMovesInfo[MOVE_SPECTRAL_THIEF].effect == EFFECT_SPECTRAL_THIEF);
        PLAYER(SPECIES_REGIROCK);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (move == MOVE_CELEBRATE)
            TURN { MOVE(player, move); MOVE(opponent, MOVE_SPECTRAL_THIEF); }
        else
            TURN { MOVE(player, move); MOVE(opponent, MOVE_SPECTRAL_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        MESSAGE("The opposing Wobbuffet used Spectral Thief!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPECTRAL_THIEF, opponent);
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}
