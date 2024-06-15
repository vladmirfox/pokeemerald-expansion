#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Moxie raises Attack by one stage after directly causing a Pokemon to faint")
{
    ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);

    GIVEN {
        PLAYER(SPECIES_SALAMENCE) { Ability(ABILITY_MOXIE); }
        PLAYER(SPECIES_SNORUNT) { HP(1); }
        OPPONENT(SPECIES_GLALIE) { HP(1); }
        OPPONENT(SPECIES_ABRA) { HP(1); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EARTHQUAKE); SEND_OUT(opponentLeft, 2);  }
    } SCENE {
        int i;

        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, playerLeft);
        for (i = 0; i < 3; i++) {
            ONE_OF {
                MESSAGE("Snorunt fainted!");
                MESSAGE("Foe Glalie fainted!");
                MESSAGE("Foe Abra fainted!");
            }
            ABILITY_POPUP(playerLeft, ABILITY_MOXIE);
            MESSAGE("Salamence's Moxie raised its Attack!");
        }
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 3);
    }
}

DOUBLE_BATTLE_TEST("Moxie does not trigger if Pokemon faint to indirect damage or damage from other Pokemon")
{
    ASSUME(gMovesInfo[MOVE_EARTHQUAKE].target == MOVE_TARGET_FOES_AND_ALLY);

    GIVEN {
        PLAYER(SPECIES_SALAMENCE) { Ability(ABILITY_MOXIE); }
        PLAYER(SPECIES_SNORUNT) { HP(1); Status1(STATUS1_POISON); }
        OPPONENT(SPECIES_GLALIE) { HP(1); Status1(STATUS1_BURN); }
        OPPONENT(SPECIES_ABRA) { HP(1); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_QUICK_ATTACK, target: opponentRight); SEND_OUT(opponentLeft, 2);  }
    } SCENE {
        int i;

        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, playerRight);
        for (i = 0; i < 3; i++) {
            ONE_OF {
                MESSAGE("Snorunt fainted!");
                MESSAGE("Foe Glalie fainted!");
                MESSAGE("Foe Abra fainted!");
            }
            NONE_OF {
                ABILITY_POPUP(playerLeft, ABILITY_MOXIE);
                MESSAGE("Salamence's Moxie raised its Attack!");
            }
        }
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}
