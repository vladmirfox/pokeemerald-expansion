#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Move Animations don't leak when used - Singles")
{
    u32 j = 1, move = 0, species = 0;
    FORCE_MOVE_ANIM(TRUE);

    for (; j < MOVES_COUNT; j++) {
        if (gMovesInfo[j].effect == EFFECT_DARK_VOID) { // User needs to be Darkrai
            PARAMETRIZE { move = j; species = SPECIES_DARKRAI; }
        } else if (gMovesInfo[j].effect == EFFECT_HYPERSPACE_FURY) { // User needs to be Hoopa Unbound
            PARAMETRIZE { move = j; species = SPECIES_HOOPA_UNBOUND; }
        } else if (gMovesInfo[j].effect == EFFECT_AURA_WHEEL) { // User needs to be Morpeko
            PARAMETRIZE { move = j; species = SPECIES_MORPEKO_FULL_BELLY; }
        } else if (gMovesInfo[j].effect == EFFECT_ROTOTILLER
                || gMovesInfo[j].effect == EFFECT_FLOWER_SHIELD) { // User needs to be Grass-type
            PARAMETRIZE { move = j; species = SPECIES_TANGELA; }
        } else if (gMovesInfo[j].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE && gMovesInfo[j].argument == TYPE_FIRE) { // User needs to be Fire-type
            PARAMETRIZE { move = j; species = SPECIES_FLAREON; }
        } else if (gMovesInfo[j].effect == EFFECT_FAIL_IF_NOT_ARG_TYPE && gMovesInfo[j].argument == TYPE_ELECTRIC) { // User needs to be Electric-type
            PARAMETRIZE { move = j; species = SPECIES_JOLTEON; }
        } else if (gMovesInfo[j].effect == EFFECT_MAGNETIC_FLUX
                || gMovesInfo[j].effect == EFFECT_GEAR_UP) { // User needs to have Plus
            PARAMETRIZE { move = j; species = SPECIES_KLINKLANG; }
        } else if (gMovesInfo[j].effect == EFFECT_PLACEHOLDER) { // Ignore placeholder moves
            PARAMETRIZE { move = MOVE_POUND; species = SPECIES_WOBBUFFET; }
        } else { // Everything else
            PARAMETRIZE { move = j; species = SPECIES_WOBBUFFET; }
        }
    }

    GIVEN {
        PLAYER(species) {
            HP(9997); MaxHP(9999); Item(ITEM_ORAN_BERRY);
            if (species == SPECIES_WOBBUFFET)
                Gender(MON_FEMALE);
            if (gMovesInfo[move].effect == EFFECT_LAST_RESORT)
                Moves(move, MOVE_POUND);
            if (species == SPECIES_KLINKLANG)
                Ability(ABILITY_PLUS);
        }
        PLAYER(SPECIES_WOBBUFFET)   {
            Gender(MON_MALE); MaxHP(9999); Moves(MOVE_POUND);
            if (gMovesInfo[move].effect == EFFECT_REVIVAL_BLESSING) {
                HP(0);
            } else {
                HP(9998);
            }
        }
        OPPONENT(SPECIES_WOBBUFFET) {
            Gender(MON_MALE); HP(9998); MaxHP(9999); SpDefense(9999); Defense(9999); Ability(ABILITY_TELEPATHY);
            if (gMovesInfo[move].effect != EFFECT_BESTOW) {
                Item(ITEM_ORAN_BERRY);
            }
        }
        OPPONENT(SPECIES_WOBBUFFET) { Gender(MON_FEMALE); HP(9998); MaxHP(9999); SpDefense(9999); Defense(9999); }
    } WHEN {
        // Setup turn
        if (gMovesInfo[move].effect == EFFECT_SNORE
         || gMovesInfo[move].effect == EFFECT_SLEEP_TALK) {  // Player needs to be asleep
            TURN { MOVE(player, MOVE_REST); }
        } else if (gMovesInfo[move].effect == EFFECT_SPIT_UP
                || gMovesInfo[move].effect == EFFECT_SWALLOW) { // Player needs to have used Stockpile
            TURN { MOVE(player, MOVE_STOCKPILE); }
        } else if ((gMovesInfo[move].effect == EFFECT_DOUBLE_POWER_ON_ARG_STATUS && gMovesInfo[move].argument == STATUS1_PARALYSIS)) { // Opponent needs to be paralyzed
            TURN { MOVE(player, MOVE_THUNDER_WAVE); }
        } else if (gMovesInfo[move].effect == EFFECT_RECYCLE
                || gMovesInfo[move].effect == EFFECT_BELCH) { // Player needs to have eaten its Berry
            TURN { MOVE(player, MOVE_STUFF_CHEEKS); }
        } else if (gMovesInfo[move].effect == EFFECT_REFRESH
                || gMovesInfo[move].effect == EFFECT_PSYCHO_SHIFT) { // Player needs to be paralyzed
            TURN { MOVE(opponent, MOVE_THUNDER_WAVE); }
        } else if (gMovesInfo[move].effect == EFFECT_LAST_RESORT) { // Player needs to have used all other moves
            TURN { MOVE(player, MOVE_POUND); }
        } else if (gMovesInfo[move].effect == EFFECT_DREAM_EATER
                || gMovesInfo[move].effect == EFFECT_NIGHTMARE) { // Opponent needs to be asleep
            TURN { MOVE(opponent, MOVE_REST); }
        } else if (gMovesInfo[move].effect == EFFECT_VENOM_DRENCH
                || gMovesInfo[move].effect == EFFECT_PURIFY) { // Opponent needs to be poisoned
            TURN { MOVE(player, MOVE_POISON_POWDER); }
        } else if (gMovesInfo[move].effect == EFFECT_TOPSY_TURVY) { // Opponent needs to have its stats buffed
            TURN { MOVE(opponent, MOVE_SWORDS_DANCE); }
        } else if (gMovesInfo[move].effect == EFFECT_AURORA_VEIL) { // Has to be hailing
            TURN { MOVE(player, MOVE_HAIL); }
        } else if (gMovesInfo[move].effect == EFFECT_HIT_SET_REMOVE_TERRAIN && gMovesInfo[move].argument == ARG_TRY_REMOVE_TERRAIN_FAIL) { // Needs a terrain
            TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); }
        }
        // Effective turn
        TURN {
            if (gMovesInfo[move].effect == EFFECT_COUNTER
             || gMovesInfo[move].effect == EFFECT_MIRROR_MOVE
             || gMovesInfo[move].effect == EFFECT_CONVERSION_2
             || gMovesInfo[move].effect == EFFECT_MIRROR_COAT
             || gMovesInfo[move].effect == EFFECT_METAL_BURST
             || gMovesInfo[move].effect == EFFECT_COPYCAT
             || gMovesInfo[move].effect == EFFECT_SUCKER_PUNCH
             || gMovesInfo[move].effect == EFFECT_INSTRUCT) { // Opponent needs to hit the player first
                MOVE(opponent, gMovesInfo[move].effect == EFFECT_MIRROR_COAT ? MOVE_SWIFT : MOVE_POUND);
                MOVE(player, move);
            } else if (gMovesInfo[move].effect == EFFECT_SNATCH) { // Opponent needs to steal the opponent's buffing move
                MOVE(player, move);
                MOVE(opponent, MOVE_SWORDS_DANCE);
            } else if (gMovesInfo[move].effect == EFFECT_OHKO) { // Opponent needs to send out a different team member
                MOVE(player, move);
                SEND_OUT(opponent, 1);
            } else if (gMovesInfo[move].effect == EFFECT_TELEPORT
                    || gMovesInfo[move].effect == EFFECT_EXPLOSION
                    || gMovesInfo[move].effect == EFFECT_BATON_PASS
                    || gMovesInfo[move].effect == EFFECT_MEMENTO
                    || gMovesInfo[move].effect == EFFECT_HEALING_WISH
                    || gMovesInfo[move].effect == EFFECT_HIT_ESCAPE
                    || gMovesInfo[move].effect == EFFECT_FINAL_GAMBIT
                    || gMovesInfo[move].effect == EFFECT_PARTING_SHOT
                    || gMovesInfo[move].effect == EFFECT_SHED_TAIL
                    || gMovesInfo[move].effect == EFFECT_CHILLY_RECEPTION) { // Player needs to send out a different team member
                MOVE(player, move);
                SEND_OUT(player, 1);
            } else if (gMovesInfo[move].effect == EFFECT_PROTECT
                    || gMovesInfo[move].effect == EFFECT_ENDURE
                    || gMovesInfo[move].effect == EFFECT_FOLLOW_ME
                    || gMovesInfo[move].effect == EFFECT_MAGIC_COAT
                    || gMovesInfo[move].effect == EFFECT_ME_FIRST
                    || gMovesInfo[move].effect == EFFECT_QUASH
                    || gMovesInfo[move].effect == EFFECT_MAT_BLOCK
                    || gMovesInfo[move].effect == EFFECT_ELECTRIFY
                    || gMovesInfo[move].effect == EFFECT_SHELL_TRAP) { // Player needs to go first
                MOVE(player, move);
                MOVE(opponent, MOVE_POUND);
            } else if (gMovesInfo[move].effect == EFFECT_REVIVAL_BLESSING) { // Player selects party member
                MOVE(player, move, partyIndex: 1);
                MOVE(opponent, MOVE_HELPING_HAND);
            } else if (gMovesInfo[move].effect == EFFECT_UPPER_HAND) { // Opponent needs to choose priority move
                MOVE(player, move);
                MOVE(opponent, MOVE_QUICK_ATTACK);
            } else { // All other moves
                MOVE(opponent, MOVE_HELPING_HAND); // Helping Hand, so there's no anim on the opponent's side.
                MOVE(player, move);
            }
        }
    } SCENE {
        if (gMovesInfo[move].effect == EFFECT_FOLLOW_ME
         || gMovesInfo[move].effect == EFFECT_HELPING_HAND
         || gMovesInfo[move].effect == EFFECT_AFTER_YOU
         || gMovesInfo[move].effect == EFFECT_ALLY_SWITCH
         || gMovesInfo[move].effect == EFFECT_AROMATIC_MIST
         || move == MOVE_HOLD_HANDS // Hack here because it shares its effect with Splash and Celebrate
         || gMovesInfo[move].effect == EFFECT_COACHING
         || gMovesInfo[move].effect == EFFECT_DRAGON_CHEER) {
            // Moves that fail in Single Battles
        } else if (gMovesInfo[move].effect == EFFECT_MIRROR_MOVE) { // Copy the opponent's move
            ANIMATION(ANIM_TYPE_MOVE, MOVE_POUND, player);
        } else if (gMovesInfo[move].effect == EFFECT_NATURE_POWER) { // Recorded battles always use BATTLE_TERRAIN_BUILDING
            ANIMATION(ANIM_TYPE_MOVE, B_NATURE_POWER_MOVES >= GEN_4 ? MOVE_TRI_ATTACK : MOVE_SWIFT, player);
        } else if (gMovesInfo[move].effect == EFFECT_INSTRUCT) { // Instruct incorrectly sets the animation to the opponent. This should be fixed.
            ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        } else { // All other moves
            ANIMATION(ANIM_TYPE_MOVE, move, player);
        }
    } THEN {
        FORCE_MOVE_ANIM(FALSE);
    }
}

TO_DO_BATTLE_TEST("Move Animations don't leak when used - Doubles");
