#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_GLAIVE_RUSH].effect == EFFECT_GLAIVE_RUSH);
}

SINGLE_BATTLE_TEST("If Glaive Rush is successful moves targeted at the user do not check accuracy")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MEGA_PUNCH].accuracy == 85);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_GLAIVE_RUSH); MOVE(opponent, MOVE_MEGA_PUNCH); }
    } SCENE {
        MESSAGE("Wobbuffet used Glaive Rush!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GLAIVE_RUSH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_MEGA_PUNCH, opponent);
    }
}

SINGLE_BATTLE_TEST("If Glaive Rush is successful, moves targeted at the user deal double damage")
{
    s16 glaiveRushEffectedDmg;
    s16 normalDmg;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_GLAIVE_RUSH); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GLAIVE_RUSH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &glaiveRushEffectedDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &normalDmg);
    } THEN {
        EXPECT_MUL_EQ(normalDmg, Q_4_12(2.0), glaiveRushEffectedDmg);
    }
}

SINGLE_BATTLE_TEST("If Glaive Rush is successful, moves targeted at the user deal double damage until the user moves again")
{
    s16 glaiveRushEffectedDmg;
    s16 normalDmg;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_GLAIVE_RUSH); }
        TURN { MOVE(opponent, MOVE_TACKLE); MOVE(player, MOVE_CELEBRATE);  }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &normalDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GLAIVE_RUSH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &glaiveRushEffectedDmg);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
    } THEN {
        EXPECT_MUL_EQ(normalDmg, Q_4_12(2.0), glaiveRushEffectedDmg);
    }
}

SINGLE_BATTLE_TEST("Glaive Rush status last until the the user's next turn")
{
    s16 normalDmgFristHit;
    s16 normalDmgSecondHit;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_GLAIVE_RUSH); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GLAIVE_RUSH, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &normalDmgFristHit);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        HP_BAR(player, captureDamage: &normalDmgSecondHit);
    } THEN {
        EXPECT_EQ(normalDmgFristHit, normalDmgSecondHit);
    }
}
