#include "global.h"
#include "test_battle.h"

SINGLE_BATTLE_TEST("Potion heals 20 HP in battle")
{
    s16 damage;
    GIVEN {
        ASSUME(gItems[ITEM_POTION].battleUsage == EFFECT_ITEM_RESTORE_HP);
        PLAYER(SPECIES_WOBBUFFET) { HP(50); MaxHP(100); Item(ITEM_POTION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { USE_ITEM(player, ITEM_POTION); }
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
        ASSUME(gItems[ITEM_X_ATTACK].battleUsage == ITEM_B_USE_OTHER);
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
