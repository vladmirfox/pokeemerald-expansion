#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Water Compaction raises Defense 2 stages when hit by a water type move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
        PLAYER(SPECIES_SANDYGAST) { Ability(ABILITY_WATER_COMPACTION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_GUN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, opponent);
        ABILITY_POPUP(player, ABILITY_WATER_COMPACTION);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 2);
    }
}

SINGLE_BATTLE_TEST("Water Compaction raises Defense 2 stages on each hit of a multi-hit Water type move")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_WATER_SHURIKEN].type == TYPE_WATER);
        ASSUME(gMovesInfo[MOVE_WATER_SHURIKEN].effect == EFFECT_MULTI_HIT);
        PLAYER(SPECIES_SANDYGAST) { Ability(ABILITY_WATER_COMPACTION); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_WATER_SHURIKEN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
        ABILITY_POPUP(player, ABILITY_WATER_COMPACTION);
        MESSAGE("Sandygast's Defense sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
        ABILITY_POPUP(player, ABILITY_WATER_COMPACTION);
        MESSAGE("Sandygast's Defense sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
        ABILITY_POPUP(player, ABILITY_WATER_COMPACTION);
        MESSAGE("Sandygast's Defense sharply rose!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_SHURIKEN, opponent);
    } THEN {
        EXPECT_EQ(player->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 6);
    }
}
