#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gBattleMoves[MOVE_ELECTRO_SHOT].effect == EFFECT_TWO_TURNS_ATTACK);
    ASSUME(MoveHasMoveEffectSelf(MOVE_ELECTRO_SHOT, MOVE_EFFECT_SP_ATK_PLUS_1) == TRUE);
}

SINGLE_BATTLE_TEST("Electro Shot needs a charging Turn")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRO_SHOT); }
        TURN { SKIP_TURN(player); }
    } SCENE {
        // Charging turn
        MESSAGE("Wobbuffet used Electro Shot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRO_SHOT, player);
        MESSAGE("Wobbuffet absorbed electricity!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Sp. Atk rose!");
        // Attack turn
        MESSAGE("Wobbuffet used Electro Shot!");
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Electro Shot doesn't need to charge when it's raining")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); MOVE(player, MOVE_ELECTRO_SHOT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, opponent);
        MESSAGE("Wobbuffet used Electro Shot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRO_SHOT, player);
        MESSAGE("Wobbuffet absorbed electricity!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Sp. Atk rose!");
        NONE_OF {
            MESSAGE("Wobbuffet used Electro Shot!");
        }
        HP_BAR(opponent);
    }
}

SINGLE_BATTLE_TEST("Electro Shot doesn't need to charge with Power Herb")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Item(ITEM_POWER_HERB); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRO_SHOT); }
    } SCENE {
        MESSAGE("Wobbuffet used Electro Shot!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRO_SHOT, player);
        MESSAGE("Wobbuffet absorbed electricity!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Wobbuffet's Sp. Atk rose!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Wobbuffet became fully charged due to its Power Herb!");
        NONE_OF {
            MESSAGE("Wobbuffet used Electro Shot!");
        }
        HP_BAR(opponent);
    }
}
