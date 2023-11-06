#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_ALLY_SWITCH].effect == EFFECT_ALLY_SWITCH);
}

SINGLE_BATTLE_TEST("Ally Switch fails in a single battle")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, player);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch fails if there is no partner")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target:playerRight); }
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); }
    } SCENE {
        MESSAGE("Wobbuffet fainted!");
        MESSAGE("Wobbuffet used Ally Switch!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Ally Switch changes the position of battlers")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SCREECH].effect == EFFECT_DEFENSE_DOWN_2);
        ASSUME(gBattleMoves[MOVE_SCREECH].target == MOVE_TARGET_SELECTED);
        PLAYER(SPECIES_WOBBUFFET) { Speed(5); } // Wobb is playerLeft, but it'll be Wynaut after Ally Switch
        PLAYER(SPECIES_WYNAUT) { Speed(4); }
        OPPONENT(SPECIES_KADABRA) { Speed(3); }
        OPPONENT(SPECIES_ABRA) { Speed(2); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_ALLY_SWITCH); MOVE(opponentLeft, MOVE_SCREECH, target:playerLeft); MOVE(opponentRight, MOVE_SCREECH, target:playerLeft); }
    } SCENE {
        MESSAGE("Wobbuffet used Ally Switch!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ALLY_SWITCH, playerLeft);
        MESSAGE("Wobbuffet and Wynaut switched places!");

        MESSAGE("Foe Kadabra used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Wynaut's Defense harshly fell!");

        MESSAGE("Foe Abra used Screech!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE("Wynaut's Defense harshly fell!");
    } THEN {
        EXPECT_EQ(playerLeft->speed, 4);
        EXPECT_EQ(playerLeft->species, SPECIES_WYNAUT);
        EXPECT_EQ(playerRight->speed, 5);
        EXPECT_EQ(playerRight->species, SPECIES_WOBBUFFET);
    }
}
