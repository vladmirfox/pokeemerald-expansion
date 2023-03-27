#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("AI scores are order-independent", s8 score1, s8 score2)
{
    u32 move1, move2;
    PARAMETRIZE { move1 = MOVE_TACKLE; move2 = MOVE_HORN_ATTACK; }
    PARAMETRIZE { move1 = MOVE_HORN_ATTACK; move2 = MOVE_TACKLE; }
    GIVEN {
        AIFlags(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(move1, move2); }
    } THEN {
        results[i].score1 = AIMoveScore(opponent, move1);
        results[i].score2 = AIMoveScore(opponent, move2);
        if (i > 0) {
            EXPECT_EQ(results[0].score1, results[i].score1);
            EXPECT_EQ(results[0].score2, results[i].score2);
        }
    }
}
