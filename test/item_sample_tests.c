#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Potion restores a battler's HP by 20")
{
    s16 damage;
    GIVEN {
        ASSUME(gItems[ITEM_POTION].battleUsage == EFFECT_ITEM_RESTORE_HP);
        PLAYER(SPECIES_WOBBUFFET) { HP(50); MaxHP(100); Item(ITEM_POTION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_POTION, partyIndex: 0); }
    } SCENE {
        HP_BAR(player, captureDamage: &damage);
    } FINALLY {
        EXPECT_EQ(damage, -20);
    }
}

SINGLE_BATTLE_TEST("X-Attack sharply raises battler's attack stat", s16 damage)
{
    u16 useItem;
    PARAMETRIZE { useItem = FALSE; }
    PARAMETRIZE { useItem = TRUE; }
    GIVEN {
        ASSUME(gItems[ITEM_X_ATTACK].battleUsage == EFFECT_ITEM_INCREASE_STAT);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        if (useItem) TURN { USE_ITEM(player, ITEM_X_ATTACK); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Wobbuffet used Tackle!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(2.0), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Ether restores the PP of one of a battler's moves")
{
    GIVEN {
        ASSUME(gItems[ITEM_ETHER].battleUsage == EFFECT_ITEM_RESTORE_PP);
        ASSUME(gItems[ITEM_ETHER].type == ITEM_USE_PARTY_MENU_MOVES);
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_TACKLE, MOVE_CONFUSION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_CONFUSION); }
        TURN { USE_ITEM(player, ITEM_ETHER, partyIndex: 0, move: MOVE_TACKLE); }
    } FINALLY {
        EXPECT_EQ(player->pp[0], 35);
        EXPECT_EQ(player->pp[1], 24);
    }
}
