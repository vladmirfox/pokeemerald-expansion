#include "global.h"
#include "test_battle.h"

#define TEST_MAX_HP (100)

SINGLE_BATTLE_TEST("Ice Body recovers 1/16th of Max HP in Hail.")
{
    GIVEN {
        PLAYER(SPECIES_GLALIE) { Ability(ABILITY_ICE_BODY); HP(1); MaxHP(TEST_MAX_HP); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_ICE_BODY);
        MESSAGE("Glalie's Ice Body healed it a little bit!");
        HP_BAR(player, hp: TEST_MAX_HP / 16 + 1);
    }
}
