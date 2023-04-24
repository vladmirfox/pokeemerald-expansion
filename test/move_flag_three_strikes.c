#include "global.h"
#include "test_battle.h"


SINGLE_BATTLE_TEST("Three Strikes are used on Triple Dive")
{
    s16 firstHit;
    s16 secondHit;
    s16 thirdHit;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TRIPLE_DIVE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_DIVE, player);
        HP_BAR(opponent, captureDamage: &firstHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_DIVE, player);
        HP_BAR(opponent, captureDamage: &secondHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_DIVE, player);
        HP_BAR(opponent, captureDamage: &thirdHit);
    } FINALLY {
        EXPECT_EQ(firstHit, secondHit);
        EXPECT_EQ(secondHit, thirdHit);
        EXPECT_EQ(firstHit, thirdHit);
    }
}

SINGLE_BATTLE_TEST("Three Strikes on Surging Strikes do critical damage")
{
    s16 firstHit;
    s16 secondHit;
    s16 thirdHit;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SURGING_STRIKES); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURGING_STRIKES, player);
        HP_BAR(opponent, captureDamage: &firstHit);
        MESSAGE("A critical hit!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURGING_STRIKES, player);
        HP_BAR(opponent, captureDamage: &secondHit);
        MESSAGE("A critical hit!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURGING_STRIKES, player);
        HP_BAR(opponent, captureDamage: &thirdHit);
        MESSAGE("A critical hit!");
    } FINALLY {
        EXPECT_EQ(firstHit, secondHit);
        EXPECT_EQ(secondHit, thirdHit);
        EXPECT_EQ(firstHit, thirdHit);
    }
}
