#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Supreme Overlord boosts Attack by an additive 10% per fainted mon on the side", s16 damage)
{
    u32 faintedCount = 0;

    PARAMETRIZE { faintedCount = 0; }
    PARAMETRIZE { faintedCount = 1; }
    PARAMETRIZE { faintedCount = 2; }
    PARAMETRIZE { faintedCount = 3; }
    PARAMETRIZE { faintedCount = 4; }
    PARAMETRIZE { faintedCount = 5; }
    GIVEN {
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        PLAYER(SPECIES_PAWNIARD) { HP(faintedCount >= 1 ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(faintedCount >= 2 ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(faintedCount >= 3 ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(faintedCount >= 4 ? 0 : 1); }
        PLAYER(SPECIES_PAWNIARD) { HP(faintedCount >= 5 ? 0 : 1); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE, target: opponent); }
    } SCENE {
        if (faintedCount > 0)
        {
            ABILITY_POPUP(player, ABILITY_SUPREME_OVERLORD);
            MESSAGE("Kingambit gained strength from the fallen!");
        }
        else
        {
            NONE_OF {
                ABILITY_POPUP(player, ABILITY_SUPREME_OVERLORD);
                MESSAGE("Kingambit gained strength from the fallen!");
            }
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.1), results[1].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.2), results[2].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[3].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.4), results[4].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[5].damage);
    }
}

DOUBLE_BATTLE_TEST("Supreme Overlord's Attack boost is determined when it comes into battle")
{
    s16 damage1 = 0;
    s16 damage2 = 0;
    s16 damage3 = 0;
    s16 damage4 = 0;

    GIVEN {
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); MOVE(playerRight, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerRight, 2); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); MOVE(playerRight, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerRight, 3); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); USE_ITEM(playerRight, ITEM_REVIVE, partyIndex: 1); }
        TURN { MOVE(playerLeft, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage1);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage2);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage3);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerLeft);
        HP_BAR(opponentLeft, captureDamage: &damage4);
    } THEN {
        EXPECT_EQ(damage1, damage2);
        EXPECT_EQ(damage1, damage3);
        EXPECT_EQ(damage1, damage4);
    }
}

SINGLE_BATTLE_TEST("Supreme Overlord's boost is reduced when party members are revived", s16 damage)
{
    u32 reviveCount = 0;
    u32 j = 0;

    PARAMETRIZE { reviveCount = 0; }
    PARAMETRIZE { reviveCount = 1; }
    PARAMETRIZE { reviveCount = 2; }
    PARAMETRIZE { reviveCount = 3; }
    PARAMETRIZE { reviveCount = 4; }
    PARAMETRIZE { reviveCount = 5; }
    GIVEN {
        ASSUME(gItemsInfo[ITEM_REVIVE].battleUsage == EFFECT_ITEM_REVIVE);
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        PLAYER(SPECIES_PAWNIARD) { HP(0); }
        PLAYER(SPECIES_PAWNIARD) { HP(0); }
        PLAYER(SPECIES_PAWNIARD) { HP(0); }
        PLAYER(SPECIES_PAWNIARD) { HP(0); }
        PLAYER(SPECIES_PAWNIARD) { HP(0); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        for (j = 0; j < reviveCount; j++)
        {
            TURN { USE_ITEM(player, ITEM_REVIVE, partyIndex: j + 1); }
        }
        if (reviveCount != 0)
        {
            TURN { SWITCH(player, 1); }
            TURN { SWITCH(player, 0); }
        }
        TURN { MOVE(player, MOVE_TACKLE, target: opponent); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[5].damage, Q_4_12(1.5), results[0].damage);
        EXPECT_MUL_EQ(results[5].damage, Q_4_12(1.4), results[1].damage);
        EXPECT_MUL_EQ(results[5].damage, Q_4_12(1.3), results[2].damage);
        EXPECT_MUL_EQ(results[5].damage, Q_4_12(1.2), results[3].damage);
        EXPECT_MUL_EQ(results[5].damage, Q_4_12(1.1), results[4].damage);
    }
}

DOUBLE_BATTLE_TEST("Supreme Overlord's boost caps at a 1.5x multipler", s16 damage)
{
    u32 faintCount = 0;
    PARAMETRIZE { faintCount = 5; }
    PARAMETRIZE { faintCount = 6; }
    GIVEN {
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_PAWNIARD);
        PLAYER(SPECIES_KINGAMBIT) { Ability(ABILITY_SUPREME_OVERLORD); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 2); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 2); USE_ITEM(playerRight, ITEM_REVIVE, 2); }
        if (faintCount == 6)
            TURN { MOVE(playerLeft, MOVE_MEMENTO, target: opponentRight); SEND_OUT(playerLeft, 0); USE_ITEM(playerRight, ITEM_REVIVE, 0); }
        TURN { SWITCH(playerRight, 3); }
        TURN { MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, playerRight);
        HP_BAR(opponentLeft, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}
