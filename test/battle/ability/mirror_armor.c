#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(P_GEN_8_POKEMON == TRUE);
}

SINGLE_BATTLE_TEST("Mirror Armor lowers a stat of the attacking pokemon")
{
    u16 move, statId;

    PARAMETRIZE { move = MOVE_LEER; statId = STAT_DEF; }
    PARAMETRIZE { move = MOVE_GROWL; statId = STAT_ATK; }
    PARAMETRIZE { move = MOVE_SWEET_SCENT; statId = STAT_EVASION; }
    PARAMETRIZE { move = MOVE_SAND_ATTACK; statId = STAT_ACC; }
    PARAMETRIZE { move = MOVE_CONFIDE; statId = STAT_SPATK; }
    PARAMETRIZE { move = MOVE_FAKE_TEARS; statId = STAT_SPDEF; }

    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        switch (statId)
        {
        case STAT_DEF:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Defense fell!");
            break;
        case STAT_ATK:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Attack fell!");
            break;
        case STAT_EVASION:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s evasiveness harshly fell!");
            break;
        case STAT_ACC:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s accuracy fell!");
            break;
        case STAT_SPATK:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Sp. Atk fell!");
            break;
        case STAT_SPDEF:
            MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Sp. Def harshly fell!");
            break;
        }
    } THEN {
        EXPECT_EQ(player->statStages[statId], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[statId], (statId == STAT_SPDEF || statId == STAT_EVASION) ? DEFAULT_STAT_STAGE - 2 : DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor triggers even if the attacking Pokemon also has Mirror Armor ability")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_CORVIKNIGHT) " used " MOVE_NAME(MOVE_LEER) "!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_CORVIKNIGHT) "'s Defense fell!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE - 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stats of an attacking Pokemon with the Clear Body ability")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_WYNAUT) { Ability(ABILITY_CLEAR_BODY); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_LEER) "!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ABILITY_POPUP(opponent, ABILITY_CLEAR_BODY);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Clear Body prevents stat loss!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor lowers the Attack of Pokemon with Intimidate")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_GYARADOS) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN {}
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_GYARADOS) "'s Attack fell!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_ATK], DEFAULT_STAT_STAGE - 1);
    }
}

// Unsure whether this should or should not fail, as Showdown has conflicting information. Needs testing in gen8 games.
SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stats of an attacking Pokemon behind Substitute")
{
    KNOWN_FAILING;
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) { Ability(ABILITY_MIRROR_ARMOR); }
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); }
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_SUBSTITUTE) "!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUBSTITUTE, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_LEER) "!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor raises the stat of an attacking Pokemon with Contrary")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_SHUCKLE) {Ability(ABILITY_CONTRARY);}
    } WHEN {
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE("Foe " SPECIES_NAME(SPECIES_SHUCKLE) " used " MOVE_NAME(MOVE_LEER) "!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_SHUCKLE) "'s Defense rose!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Mirror Armor doesn't lower the stat of the attacking Pokemon if it is already at -6")
{
    GIVEN {
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR);}
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(player, MOVE_SCREECH); }
        TURN { MOVE(opponent, MOVE_LEER); }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_CORVIKNIGHT) " used " MOVE_NAME(MOVE_SCREECH) "!");
        MESSAGE(SPECIES_NAME(SPECIES_CORVIKNIGHT) " used " MOVE_NAME(MOVE_SCREECH) "!");
        MESSAGE(SPECIES_NAME(SPECIES_CORVIKNIGHT) " used " MOVE_NAME(MOVE_SCREECH) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_LEER) "!");
        ABILITY_POPUP(player, ABILITY_MIRROR_ARMOR);
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponent);
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) "'s Defense won't go lower!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE);
        EXPECT_EQ(opponent->statStages[STAT_DEF], MIN_STAT_STAGE);
    }
}

// This behaviour needs to be verified in the actual games. Currently it's written to follow Showdown's logic.
DOUBLE_BATTLE_TEST("Mirror Armor lowers Speed of the partner Pokemon after Court Change was used by the opponent after it set up Sticky Web")
{
    KNOWN_FAILING;
    GIVEN {
        ASSUME(gBattleMoves[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
        ASSUME(gBattleMoves[MOVE_COURT_CHANGE].effect == EFFECT_COURT_CHANGE);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_CORVIKNIGHT) {Ability(ABILITY_MIRROR_ARMOR); Item(ITEM_IRON_BALL); }
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_STICKY_WEB); }
        TURN { MOVE(opponentLeft, MOVE_COURT_CHANGE); }
        TURN { SWITCH(playerRight, 2);}
        TURN { }
    } SCENE {
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) " used " MOVE_NAME(MOVE_STICKY_WEB) "!");
        MESSAGE("Foe " SPECIES_NAME(SPECIES_WYNAUT) " used " MOVE_NAME(MOVE_COURT_CHANGE) "!");
        MESSAGE("Foe Wynaut swapped the battle effects affecting each side!");
        MESSAGE("Go! " SPECIES_NAME(SPECIES_CORVIKNIGH) "!");
        MESSAGE(SPECIES_NAME(SPECIES_CORVIKNIGHT) " was caught in a Sticky Web!");
        ABILITY_POPUP(playerRight, ABILITY_MIRROR_ARMOR);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
        MESSAGE(SPECIES_NAME(SPECIES_WOBBUFFET) "'s Speed fell!");
    }
}
