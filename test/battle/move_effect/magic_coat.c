#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Magic Coat prints the correct message when bouncing back a move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gMovesInfo[MOVE_MAGIC_COAT].effect == EFFECT_MAGIC_COAT);
        PLAYER(SPECIES_ZIGZAGOON);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(player, MOVE_MAGIC_COAT); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MAGIC_COAT, player);
        MESSAGE("Zigzagoon's Spore was bounced back by MAGIC COAT!");
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}
