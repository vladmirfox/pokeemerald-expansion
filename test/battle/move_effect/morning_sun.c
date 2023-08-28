#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_MORNING_SUN].effect == EFFECT_MORNING_SUN);
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/2 of the user's max HP")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(200); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(200 / 2));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 2/3 of the user's max HP in Sunlight")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(300 / 1.5));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/4 of the user's max HP in Rain")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/4 of the user's max HP in a Sandstorm")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SANDSTORM); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/4 of the user's max HP in Hail")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}

SINGLE_BATTLE_TEST("Morning Sun recovers 1/4 of the user's max HP in Snow")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MORNING_SUN].effect == EFFECT_MORNING_SUN);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(400); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SNOWSCAPE); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -(400 / 4));
    }
}
