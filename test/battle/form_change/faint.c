#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Aegislash reverts to Shield Form upon fainting")
{
    GIVEN {
        ASSUME(P_GEN_6_POKEMON == TRUE);
        PLAYER(SPECIES_AEGISLASH) { HP(1); }
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_GUST); SEND_OUT(player, 1); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_GUST) "!");
        MESSAGE(SPECIES_NAME(SPECIES_AEGISLASH) " fainted!");
    } THEN {
        EXPECT_EQ(GetMonData(&PLAYER_PARTY[0], MON_DATA_SPECIES), SPECIES_AEGISLASH);
    }
}
