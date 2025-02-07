#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_SPARKLY_SWIRL, MOVE_EFFECT_AROMATHERAPY));
}

DOUBLE_BATTLE_TEST("Sparkly Swirl cures the entire party")
{
    u32 j;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPARKLY_SWIRL, target: playerLeft); }
        TURN { SWITCH(playerLeft, 2); SWITCH(playerRight, 3); }
    } SCENE {
        MESSAGE("Wobbuffet used Sparkly Swirl!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPARKLY_SWIRL, playerLeft);
        STATUS_ICON(playerLeft, sleep: FALSE);
        STATUS_ICON(playerRight, sleep: FALSE);
        NOT MESSAGE("Wobbuffet was hurt by its poisoning!");
    } THEN {
        for (j = 0; j < PARTY_SIZE; j++)
            EXPECT_EQ(GetMonData(&gPlayerParty[0], MON_DATA_STATUS), STATUS1_NONE);
    }
}
