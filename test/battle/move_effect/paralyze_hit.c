#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_THUNDER_SHOCK].effect == EFFECT_PARALYZE_HIT);
}

SINGLE_BATTLE_TEST("Thunder Shock inflicts paralysis")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}

SINGLE_BATTLE_TEST("Thunder Shock cannot paralyze an Electric-type")
{
    GIVEN {
        ASSUME(B_PARALYZE_ELECTRIC >= GEN_6);
        ASSUME(gSpeciesInfo[SPECIES_PIKACHU].types[0] == TYPE_ELECTRIC);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_PIKACHU);
    } WHEN {
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_SHOCK, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
            STATUS_ICON(opponent, paralysis: TRUE);
        }
    }
}

// test against Gen1
SINGLE_BATTLE_TEST("Body Slam should paralyze Normal-types")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_TAUROS].types[0] == TYPE_NORMAL);
        PLAYER(SPECIES_TAUROS);
        OPPONENT(SPECIES_TAUROS);
    } WHEN {
        TURN { MOVE(player, MOVE_BODY_SLAM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BODY_SLAM, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_PRZ, opponent);
        STATUS_ICON(opponent, paralysis: TRUE);
    }
}
