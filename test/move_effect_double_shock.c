#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_DOUBLE_SHOCK].effect == EFFECT_DOUBLE_SHOCK);
}

SINGLE_BATTLE_TEST("Double Shock user loses it's typing", s16 damage)
{
    s16 stabDamage;
    s16 nonStabDamage;

    GIVEN {
        PLAYER(SPECIES_PIKACHU);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); }
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        MESSAGE("Pikachu used up all of its electricity!");
        MESSAGE("Pikachu used Double Shock!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Double Shock fails if the user isn't a fire type", s16 damage)
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); }
    } SCENE {
        NONE_OF { ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player); }
        MESSAGE("Wobbuffet used Double Shock!");
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Double Shock user loses it's typing if enemy faints", s16 damage)
{
    s16 stabDamage;
    s16 nonStabDamage;

    GIVEN {
        PLAYER(SPECIES_PIKACHU);
        OPPONENT(SPECIES_WOBBUFFET) { HP(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_DOUBLE_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_SHOCK, player);
        HP_BAR(opponent, hp: 0);
        MESSAGE("Pikachu used up all of its electricity!");
    }
}
