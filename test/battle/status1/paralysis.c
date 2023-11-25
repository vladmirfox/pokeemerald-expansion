#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Paralysis reduces Speed by 50%")
{
    u16 playerSpeed;
    bool32 playerFirst;
    PARAMETRIZE { playerSpeed = 98; playerFirst = FALSE; }
    PARAMETRIZE { playerSpeed = 102; playerFirst = TRUE; }
    GIVEN {
        ASSUME(B_PARALYSIS_SPEED >= GEN_7);
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_PARALYSIS); Speed(playerSpeed); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (playerFirst) {
            ONE_OF {
                MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_CELEBRATE) "!");
                MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " is paralyzed! It can't move!");
            }
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_CELEBRATE) "!");
        } else {
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_CELEBRATE) "!");
            ONE_OF {
                MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_CELEBRATE) "!");
                MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " is paralyzed! It can't move!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Paralysis has a 25% chance of skipping the turn")
{
    PASSES_RANDOMLY(25, 100, RNG_PARALYSIS);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_PARALYSIS); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " is paralyzed! It can't move!");
    }
}
