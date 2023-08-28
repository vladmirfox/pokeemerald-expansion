#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gBattleMoves[MOVE_WATER_GUN].type == TYPE_WATER);
}
 
SINGLE_BATTLE_TEST("Sunlight multiplies the power of Fire-type moves by 1.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}
 
SINGLE_BATTLE_TEST("Sunlight multiplies the power of Water-type moves by 0.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sunlight turns Weather Ball to a Fire-type move and doubles its power", s16 damage)
{
    u16 move;
    PARAMETRIZE{ move = MOVE_CELEBRATE; }
    PARAMETRIZE{ move = MOVE_SUNNY_DAY; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WEATHER_BALL].effect == EFFECT_WEATHER_BALL);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_MEGANIUM);
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(player, MOVE_WEATHER_BALL); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(6.0), results[1].damage); // double base power + type effectiveness + sun 50% boost
    }
}

SINGLE_BATTLE_TEST("Sunlight allows Solar Beam to be used instantly")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BEAM].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_SOLAR_BEAM); }
    } SCENE {
        NOT MESSAGE("Wobbuffet took in sunlight!");
    }
}

SINGLE_BATTLE_TEST("Sunlight allows Solar Blade to be used instantly")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SOLAR_BLADE].effect == EFFECT_SOLAR_BEAM);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_SOLAR_BLADE); }
    } SCENE {
        NOT MESSAGE("Wobbuffet took in sunlight!");
    }
}

SINGLE_BATTLE_TEST("Sunlight prevents being frozen")
{
    PASSES_RANDOMLY(100, 100, RNG_ACCURACY); //should freeze 10 times if no sun, but never under sun
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_ICE_BEAM); }
    } SCENE {
        NOT MESSAGE("Wobbuffet was frozen solid!");
    }
}

SINGLE_BATTLE_TEST("Sunlight causes Moonlight to recover 2/3 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MOONLIGHT].effect == EFFECT_MOONLIGHT);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_MOONLIGHT); }
    } SCENE {
        HP_BAR(player, damage: -200);
    }
}

SINGLE_BATTLE_TEST("Sunlight causes Synthesis to recover 2/3 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SYNTHESIS].effect == EFFECT_SYNTHESIS);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_SYNTHESIS); }
    } SCENE {
        HP_BAR(player, damage: -200);
    }
}

SINGLE_BATTLE_TEST("Sunlight causes Morning Sun to recover 2/3 of the user's max HP")
{
    GIVEN {
        ASSUME(gBattleMoves[MOVE_MORNING_SUN].effect == EFFECT_MORNING_SUN);
        PLAYER(SPECIES_WOBBUFFET) { HP(1); MaxHP(300); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_MORNING_SUN); }
    } SCENE {
        HP_BAR(player, damage: -200);
    }
}

SINGLE_BATTLE_TEST("Sunlight lowers accuracy of Thunder to 50%")
{
    PASSES_RANDOMLY(50, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_THUNDER].accuracy == 70);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); MOVE(opponent, MOVE_THUNDER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER, opponent);
    }
}

SINGLE_BATTLE_TEST("Sunlight lowers accuracy of Hurricane to 50%")
{
    PASSES_RANDOMLY(50, 100, RNG_ACCURACY);
    GIVEN {
        ASSUME(gBattleMoves[MOVE_HURRICANE].accuracy == 70);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); MOVE(opponent, MOVE_HURRICANE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_HURRICANE, opponent);
    }
}

TO_DO_BATTLE_TEST("Sunlight guarantees Harvest will restore a held berry");