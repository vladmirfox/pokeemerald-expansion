#include "global.h"
#include "test/battle.h"


ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_QUICK_ATTACK].priority > 0);
}

DOUBLE_BATTLE_TEST("Dazzling protects user from priority moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRUXISH) { Ability(ABILITY_DAZZLING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ABILITY_DAZZLING);
        MESSAGE("Wobbuffet cannot use Quick Attack!");
    }
}

DOUBLE_BATTLE_TEST("Dazzling protects partner from priority moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRUXISH) { Ability(ABILITY_DAZZLING); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentRight); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ABILITY_DAZZLING);
        MESSAGE("Wobbuffet cannot use Quick Attack!");
    }
}
