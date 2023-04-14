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
