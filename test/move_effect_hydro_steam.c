#include "global.h"
#include "test_battle.h"
 
ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_HYDRO_STEAM].effect == EFFECT_HYDRO_STEAM);
}
 
SINGLE_BATTLE_TEST("Hydro Steam deals 1.5x damage under both Sunlight and Rain", s16 damage)
{
    u16 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_HYDRO_STEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYDRO_STEAM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[2].damage);
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
 
SINGLE_BATTLE_TEST("Hydro Steam is affected by Utility Umbrella", s16 damage)
{
    u16 itemPlayer, setupMove;

    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY;  itemPlayer = ITEM_UTILITY_UMBRELLA; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY;  itemPlayer = ITEM_NONE; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; itemPlayer = ITEM_UTILITY_UMBRELLA; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; itemPlayer = ITEM_NONE; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(itemPlayer); };
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_HYDRO_STEAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HYDRO_STEAM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
        EXPECT_MUL_EQ(results[2].damage, Q_4_12(1.5), results[3].damage);
    }
}
