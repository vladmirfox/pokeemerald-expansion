#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Bad poison deals 1/16th cumulative damage per turn")
{
    u32 j;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_TOXIC_POISON); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < 4; j++)
            TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        for (j = 0; j < 4; j++)
            HP_BAR(player, damage: maxHP / 16 * (j + 1));
    }
}

SINGLE_BATTLE_TEST("Bad poison cumulative damage resets on switch")
{
    u32 j;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Status1(STATUS1_TOXIC_POISON); }
        PLAYER(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {}
        TURN {}
        TURN { SWITCH(player, 1); }
        TURN { SWITCH(player, 0); }
        TURN {}
        TURN {}
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        for (j = 0; j < 2; j++)
            HP_BAR(player, damage: maxHP / 16 * (j + 1));
        for (j = 0; j < 2; j++)
            HP_BAR(player, damage: maxHP / 16 * (j + 1));
    }
}

DOUBLE_BATTLE_TEST("Not allowed")
{
    //bool32 faintCount = 0;
    //PARAMETRIZE { faintCount = 5; }
    //PARAMETRIZE { faintCount = 6; }
    GIVEN {
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        //TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        //ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        //HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    //} FINALLY {
    //    EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.1), results[1].damage);
    }
}
