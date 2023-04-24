#include "global.h"
#include "test_battle.h"


SINGLE_BATTLE_TEST("Triple Kick effect damage on Triple Axel is increaased by 20 for each hit")
{
    s16 firstHit;
    s16 secondHit;
    s16 thirdHit;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TRIPLE_AXEL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_AXEL, player);
        HP_BAR(opponent, captureDamage: &firstHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_AXEL, player);
        HP_BAR(opponent, captureDamage: &secondHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_AXEL, player);
        HP_BAR(opponent, captureDamage: &thirdHit);
    } FINALLY {
        EXPECT_EQ(secondHit, firstHit * 2);
        EXPECT_EQ(thirdHit, firstHit * 3);
    }
}

SINGLE_BATTLE_TEST("Triple Kick effect damage on Triple Kick is increaased by 10 for each hit")
{
    s16 firstHit;
    s16 secondHit;
    s16 thirdHit;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TRIPLE_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_KICK, player);
        HP_BAR(opponent, captureDamage: &firstHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_KICK, player);
        HP_BAR(opponent, captureDamage: &secondHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRIPLE_KICK, player);
        HP_BAR(opponent, captureDamage: &thirdHit);
    } FINALLY {
        EXPECT_EQ(secondHit, firstHit * 2);
        EXPECT_EQ(thirdHit, firstHit * 3);
    }
}