#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("AI scores are order-independent", struct AILog logTackle, struct AILog logHornAttack)
{
    u32 move1, move2;
    PARAMETRIZE { move1 = MOVE_TACKLE; move2 = MOVE_HORN_ATTACK; }
    PARAMETRIZE { move1 = MOVE_HORN_ATTACK; move2 = MOVE_TACKLE; }
    GIVEN {
        AIFlags(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_CHECK_VIABILITY);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Moves(move1, move2); }
    } THEN {
        results[i].logTackle = AIMoveLog(opponent, MOVE_TACKLE);
        results[i].logHornAttack = AIMoveLog(opponent, MOVE_HORN_ATTACK);
        if (i > 0) {
            EXPECT_AI_EQ(&results[0].logTackle, &results[i].logTackle);
            EXPECT_AI_EQ(&results[0].logHornAttack, &results[i].logHornAttack);
        }
    }
}
