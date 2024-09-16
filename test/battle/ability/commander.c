#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("(Commander) Commander will activate once Dondozo switches in")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { SWITCH(playerLeft, 2); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Commander increases all stats by 2 stages once it is triggered")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN {  }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        MESSAGE("Dondozo's Attack sharply rose!");
        MESSAGE("Dondozo's Defense sharply rose!");
        MESSAGE("Dondozo's Sp. Atk sharply rose!");
        MESSAGE("Dondozo's Sp. Def sharply rose!");
        MESSAGE("Dondozo's Speed sharply rose!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) When Commander is active moves targeted at Tatsugiri will fail")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); MOVE(opponentRight, MOVE_POUND, target: playerRight); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Foe Wobbuffet's attack missed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POUND, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri will still take residual damage from a field effect while inside Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_TYRANITAR) { Ability(ABILITY_SAND_STREAM); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ABILITY_POPUP(opponentLeft, ABILITY_SAND_STREAM);
        MESSAGE("Dondozo is buffeted by the sandstorm!");
        MESSAGE("Tatsugiri is buffeted by the sandstorm!");
        MESSAGE("Foe Wobbuffet is buffeted by the sandstorm!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri will still take poison damage if while inside Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); Status1(STATUS1_POISON); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        MESSAGE("Tatsugiri is hurt by poison!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) No Guard affected moves will still fail while Tatsugiri is inside Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_MACHAMP) { Ability(ABILITY_NO_GUARD); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        MESSAGE("Foe Machamp's attack missed!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Commander cannot affect a Dondozo that was previously affected by Commander until it faints and revived")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_TATSUGIRI) { HP(1); Ability(ABILITY_COMMANDER); Status1(STATUS1_POISON); }
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_CELEBRATE); SWITCH(playerLeft, 2); SEND_OUT(playerLeft, 3); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        MESSAGE("Tatsugiri is hurt by poison!");
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
            MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        }
    }
}

DOUBLE_BATTLE_TEST("(Commander) Commander cannot affect a Dondozo that was previously affected by Commander until it faints and a replacement is switched in")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_TATSUGIRI) { HP(1); Ability(ABILITY_COMMANDER); Status1(STATUS1_POISON); }
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_CELEBRATE); SWITCH(playerLeft, 2); SEND_OUT(playerLeft, 3); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        MESSAGE("Tatsugiri is hurt by poison!");
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
            MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        }
    }
}

DOUBLE_BATTLE_TEST("Order Up increases a stat based on Tatsugiri's form")
{
    u32 species = 0;
    PARAMETRIZE { species = SPECIES_TATSUGIRI_CURLY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_DROOPY; }
    PARAMETRIZE { species = SPECIES_TATSUGIRI_STRETCHY; }

    GIVEN {
        PLAYER(species) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_VOLBEAT) { Ability(ABILITY_PRANKSTER); };
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_HAZE); MOVE(playerRight, MOVE_ORDER_UP, target: opponentLeft); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HAZE, opponentRight); // Remove previous stat boosts
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ORDER_UP, playerRight);
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            MESSAGE("Dondozo's Attack rose!");
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            MESSAGE("Dondozo's Defense rose!");
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            MESSAGE("Dondozo's Speed rose!");
            break;
        }
    } THEN {
        switch (species)
        {
        case SPECIES_TATSUGIRI_CURLY:
            EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_DROOPY:
            EXPECT_EQ(playerRight->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
            break;
        case SPECIES_TATSUGIRI_STRETCHY:
            EXPECT_EQ(playerRight->statStages[STAT_SPEED], DEFAULT_STAT_STAGE + 1);
            break;
        }
    }
}

DOUBLE_BATTLE_TEST("(Commander) Whirlwind can not be used against Dondozo or Tatsugiri while Commander is active")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_WHIRLWIND, target: playerLeft); }
        TURN { MOVE(opponentRight, MOVE_WHIRLWIND, target: playerRight); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        MESSAGE("Foe Wobbuffet used Whirlwind!");
        MESSAGE("But it failed!");
        MESSAGE("Foe Wobbuffet used Whirlwind!");
        MESSAGE("But it failed!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Red Card fails on Dondozo while Commander is active")
{
    GIVEN {
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_TACKLE, target: opponentLeft); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponentLeft);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri is not damaged by a double target move if Dondozo faints")
{
    KNOWN_FAILING;
    /*
    test/battle/ability/commander.c:260:
    1 TURNs specified, but 2 ran - (Commander) Tatsugiri is not damaged by a double target move if Dondozo faints.
    */
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SURF].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_DONDOZO) { HP(1); };
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); MOVE(opponentLeft, MOVE_SURF); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        HP_BAR(playerLeft);
        MESSAGE("Dondozo fainted!");
        HP_BAR(opponentRight);
        NOT HP_BAR(playerRight);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri under Commander takes no damage")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_SURF); MOVE(opponentRight, MOVE_SURF); SWITCH(playerLeft, 2); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponentLeft);
        HP_BAR(playerLeft);
        NOT HP_BAR(playerRight);
        HP_BAR(opponentRight);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponentRight);
        HP_BAR(playerLeft);
        HP_BAR(opponentLeft);
        NOT HP_BAR(playerRight);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Transform can be used while Tatsugiri is commanding Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_TRANSFORM, target: playerRight); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TRANSFORM, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Imposter will transfrom into Tatsugiri while it is commanding Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_DITTO) { Ability(ABILITY_IMPOSTER); }
    } WHEN {
        TURN { }
        TURN { SWITCH(opponentRight, 2); }
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ABILITY_POPUP(opponentRight, ABILITY_IMPOSTER);
        MESSAGE("Foe Ditto transformed into Tatsugiri using Imposter!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri will not be affected by Perish Song while controlling Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_DONDOZO);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_PERISH_SONG); }
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_PERISH_SONG, opponentLeft);
        MESSAGE("All affected POKéMON will faint in three turns!");
        MESSAGE("Dondozo's PERISH count fell to 0!");
        MESSAGE("Dondozo fainted!");
        MESSAGE("Foe Wobbuffet's PERISH count fell to 0!");
        MESSAGE("Foe Wobbuffet fainted!");
        NONE_OF {
            MESSAGE("Tatsugiri's PERISH count fell to 0!");
            MESSAGE("Tatsugiri fainted!");
        }
        MESSAGE("Foe Wynaut's PERISH count fell to 0!");
        MESSAGE("Foe Wynaut fainted!");
    }
}

DOUBLE_BATTLE_TEST("(Commander) Tatsugiri is still affected by Haze while controlling Dondozo")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerRight, MOVE_SWORDS_DANCE); }
        TURN { SWITCH(playerLeft, 2); MOVE(opponentRight, MOVE_HAZE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWORDS_DANCE, playerRight);
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HAZE, opponentRight);
    } THEN {
        EXPECT_EQ(playerRight->statStages[STAT_ATK], DEFAULT_STAT_STAGE);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Attacker is kept (Dondozo Left Slot)")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SURF].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_TACKLE, target: opponentLeft); }
        TURN { SWITCH(playerLeft, 2); MOVE(opponentLeft, MOVE_SURF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        ABILITY_POPUP(playerRight, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponentLeft);
        HP_BAR(playerLeft);
        MESSAGE("Foe Wobbuffet's attack missed!");
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("(Commander) Attacker is kept (Dondozo Right Slot)")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SURF].target == MOVE_TARGET_FOES_AND_ALLY);
        PLAYER(SPECIES_TATSUGIRI) { Ability(ABILITY_COMMANDER); }
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_DONDOZO);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_TACKLE, target: opponentLeft); }
        TURN { SWITCH(playerRight, 2); MOVE(opponentLeft, MOVE_SURF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        ABILITY_POPUP(playerLeft, ABILITY_COMMANDER);
        MESSAGE("Tatsugiri was swallowed by Dondozo and became Dondozo's commander!");
        MESSAGE("Foe Wobbuffet's attack missed!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SURF, opponentLeft);
        HP_BAR(playerRight);
        HP_BAR(opponentRight);
    }
}
