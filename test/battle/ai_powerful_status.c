#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_SINGLE_BATTLE_TEST("AI prefers to set up a powerful Status over fainting a target")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_TRICK_ROOM].effect == EFFECT_TRICK_ROOM);
        ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_POWERFUL_STATUS);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_DUSCLOPS) { Moves(MOVE_TRICK_ROOM, MOVE_TACKLE); }
    } WHEN {
        TURN { EXPECT_MOVE(opponent, MOVE_TRICK_ROOM); }
        TURN { EXPECT_MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    }
    SCENE {
        MESSAGE("Wynaut fainted!");
    }
}
