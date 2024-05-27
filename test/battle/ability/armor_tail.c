#include "global.h"
#include "test/battle.h"


ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_QUICK_ATTACK].priority > 0);
}

DOUBLE_BATTLE_TEST("Armor Tail protects user from priority moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_FARIGIRAF) { Ability(ABILITY_ARMOR_TAIL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentLeft); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ABILITY_ARMOR_TAIL);
        MESSAGE("Wobbuffet cannot use Quick Attack!");
    }
}

DOUBLE_BATTLE_TEST("Armor Tail protects partner from priority moves")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_FARIGIRAF) { Ability(ABILITY_ARMOR_TAIL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_QUICK_ATTACK, target: opponentRight); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, opponentRight);
        ABILITY_POPUP(opponentLeft, ABILITY_ARMOR_TAIL);
        MESSAGE("Wobbuffet cannot use Quick Attack!");
    }
}
