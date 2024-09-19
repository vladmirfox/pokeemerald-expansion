#include "global.h"
#include "test/battle.h"
#include "battle_ai_util.h"

AI_DOUBLE_BATTLE_TEST("AI will not double target a pokemon when both AI mons see kill on the right player slot")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_REGIROCK) { Speed(10); }
        PLAYER(SPECIES_CLEFFA) { Speed(20); }
        OPPONENT(SPECIES_ZAPDOS) { Speed(100); Moves(MOVE_BOLT_BEAK); }
        OPPONENT(SPECIES_SALAMENCE) { Speed(90); Moves(MOVE_BRAVE_BIRD); }
    } WHEN {
        TURN {
            MOVE(playerRight, MOVE_PROTECT);
            EXPECT_MOVE(opponentLeft, MOVE_BOLT_BEAK);
            EXPECT_MOVE(opponentRight, MOVE_BRAVE_BIRD);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, playerRight);
        MESSAGE("Foe Zapdos used Bolt Beak");
        MESSAGE("Cleffa protected itself!");
        NOT HP_BAR(playerRight);
        HP_BAR(playerLeft);
     }
}

AI_DOUBLE_BATTLE_TEST("AI will not double target a pokemon when both AI mons see kill on the left player slot")
{
    KNOWN_FAILING;
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_CLEFFA) { Speed(20); }
        PLAYER(SPECIES_REGIROCK) { Speed(10); }
        OPPONENT(SPECIES_ZAPDOS) { Speed(100); Moves(MOVE_BOLT_BEAK); }
        OPPONENT(SPECIES_SALAMENCE) { Speed(90); Moves(MOVE_BRAVE_BIRD); }
    } WHEN {
        TURN {
            MOVE(playerLeft, MOVE_PROTECT);
            EXPECT_MOVE(opponentLeft, MOVE_BOLT_BEAK);
            EXPECT_MOVE(opponentRight, MOVE_BRAVE_BIRD);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PROTECT, playerLeft);
        MESSAGE("Foe Zapdos used Bolt Beak");
        MESSAGE("Cleffa protected itself!");
        NOT HP_BAR(playerLeft);
        HP_BAR(playerRight);
     }
}
