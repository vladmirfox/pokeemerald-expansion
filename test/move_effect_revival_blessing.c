#include "global.h"
#include "test_battle.h"

// For concision:
#define MOVE_MESSAGE(name)                       \
    if (B_EXPANDED_MOVE_NAMES == FALSE)          \
        MESSAGE(#name" used RevivlBlesng!");     \
    else                                         \
        MESSAGE(#name" used Revival Blessing!"); \

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_REVIVAL_BLESSING].effect == EFFECT_REVIVAL_BLESSING);
}

TO_DO_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player");
// SINGLE_BATTLE_TEST("Revival Blessing revives a chosen fainted party member for the player")
// {
//     GIVEN {
//         PLAYER(SPECIES_WOBBUFFET);
//         PLAYER(SPECIES_WYNAUT) { HP(0); }
//         OPPONENT(SPECIES_WOBBUFFET);
//     } WHEN {
//         TURN { MOVE(player, MOVE_REVIVAL_BLESSING); SEND_OUT(player, 1); }
//     } SCENE {
//         MOVE_MESSAGE(Wobbuffet)
//         MESSAGE("Wynaut was revived and is ready to fight again!");
//     } FINALLY {
//         EXPECT_NE(GetMonData(&gPlayerParty[1], MON_DATA_HP), 0);
//     }
// }

SINGLE_BATTLE_TEST("Revival Blessing revives the first fainted party member for an opponent")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_RAICHU);
        OPPONENT(SPECIES_PICHU) { HP(0); }
        OPPONENT(SPECIES_PIKACHU) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING); }
        TURN { MOVE(opponent, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MOVE_MESSAGE(Foe Raichu)
        MESSAGE("Pichu was revived and is ready to fight again!");
        MOVE_MESSAGE(Foe Raichu)
        MESSAGE("Pikachu was revived and is ready to fight again!");
    } FINALLY {
        EXPECT_NE(GetMonData(&gEnemyParty[1], MON_DATA_HP), 0);
        EXPECT_NE(GetMonData(&gEnemyParty[2], MON_DATA_HP), 0);
    }
}

SINGLE_BATTLE_TEST("Revival Blessing fails if no party members are fainted")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MOVE_MESSAGE(Wobbuffet)
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("Revival Blessing cannot revive a partner's party member")
{
    struct BattlePokemon *user;
    gBattleTypeFlags |= BATTLE_TYPE_TWO_OPPONENTS;
    PARAMETRIZE { user = opponentLeft; }
    PARAMETRIZE { user = opponentRight; }
    KNOWN_FAILING; // this doesn't seem to function as a Multi Battle, but has been tested in-game
    GIVEN {
        ASSUME((gBattleTypeFlags & BATTLE_TYPE_TWO_OPPONENTS) != FALSE);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT) { HP(0); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(user, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        if (user == opponentLeft) {
            MOVE_MESSAGE(Foe Wobbuffet)
            MESSAGE("But it failed!");
        } else {
            MOVE_MESSAGE(Foe Wynaut)
            MESSAGE("Wynaut was revived and is ready to fight again!");
        }
    }
}

DOUBLE_BATTLE_TEST("Revived battlers still lose their turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT) { HP(1); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentRight); MOVE(opponentLeft, MOVE_REVIVAL_BLESSING); }
    } SCENE {
        MESSAGE("Wobbuffet used Tackle!");
        MESSAGE("Foe Wynaut fainted!");
        MOVE_MESSAGE(Foe Wobbuffet)
        MESSAGE("Wynaut was revived and is ready to fight again!");
        NOT { MESSAGE("Wynaut used Celebrate!"); }
    }
}
