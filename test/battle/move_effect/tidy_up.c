#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_TIDY_UP].effect == EFFECT_TIDY_UP);
    ASSUME(gBattleMoves[MOVE_SUBSTITUTE].effect == EFFECT_SUBSTITUTE);
    ASSUME(gBattleMoves[MOVE_STEALTH_ROCK].effect == EFFECT_STEALTH_ROCK);
    ASSUME(gBattleMoves[MOVE_SPIKES].effect == EFFECT_SPIKES);
    ASSUME(gBattleMoves[MOVE_TOXIC_SPIKES].effect == EFFECT_TOXIC_SPIKES);
    ASSUME(gBattleMoves[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
}

SINGLE_BATTLE_TEST("Tidy Up raises attack and speed by 1 and removes Spikes")
{
    u16 move;

    PARAMETRIZE { move = MOVE_TIDY_UP; }
    PARAMETRIZE { move = MOVE_CELEBRATE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        PLAYER(SPECIES_WOBBUFFET) { Speed(2); }
        OPPONENT(SPECIES_WOBBUFFET) { Speed(5); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPIKES); MOVE(player, move); }
        TURN { SWITCH(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPIKES, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        if (move == MOVE_TIDY_UP) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Wobbuffet's Attack rose!");
            MESSAGE("Wobbuffet's Speed rose!");
            MESSAGE("The spikes disappeared from the ground around your team!");
        }
        // Switch happens
        MESSAGE("Wobbuffet, that's enough! Come back!");
        MESSAGE("Go! Wobbuffet!");
        if (move != MOVE_TIDY_UP) {
            HP_BAR(player);
            MESSAGE("Wobbuffet is hurt by spikes!");
        }
        else {
            NONE_OF {
                HP_BAR(player);
                MESSAGE("Wobbuffet is hurt by spikes!");
            }
        }
    }
}

TO_DO_BATTLE_TEST("Tidy Up raises attack and speed by 1 and removes Substitute")
TO_DO_BATTLE_TEST("Tidy Up raises attack and speed by 1 and removes Stealth Rock")
TO_DO_BATTLE_TEST("Tidy Up raises attack and speed by 1 and removes Toxic Spikes")
TO_DO_BATTLE_TEST("Tidy Up raises attack and speed by 1 and removes Sticky Web")
