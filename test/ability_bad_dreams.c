#include "global.h"
#include "test_battle.h"

ASSUMPTIONS
{
    ASSUME(P_GEN_4_POKEMON == TRUE); // Because only Darkrai can have this ability.
}

SINGLE_BATTLE_TEST("Bad Dreams causes the enemy sleeping Pokemon to lose 1/8 of hp")
{
    u32 status;
    PARAMETRIZE { status = STATUS1_NONE; }
    PARAMETRIZE { status = STATUS1_SLEEP; }
    GIVEN {
        PLAYER(SPECIES_DARKRAI);
        OPPONENT(SPECIES_WOBBUFFET) {Status1(status);}
    } WHEN {
        TURN {;}
    } SCENE {
        if (status == STATUS1_SLEEP) {
            ABILITY_POPUP(player, ABILITY_BAD_DREAMS);
            MESSAGE("Foe Wobbuffet is tormented!");
            HP_BAR(opponent);
        }
        else {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_BAD_DREAMS);
                MESSAGE("Foe Wobbuffet is tormented!");
                HP_BAR(opponent);
            };
        }
    } THEN {
        if (status == STATUS1_SLEEP) {
            EXPECT_EQ(opponent->hp, opponent->maxHP - opponent->maxHP / 8);
        }
        else {
            EXPECT_EQ(opponent->hp, opponent->maxHP);
        }
    }
}
