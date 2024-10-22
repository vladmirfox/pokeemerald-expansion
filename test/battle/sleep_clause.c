#include "global.h"
#include "test/battle.h"

AI_SINGLE_BATTLE_TEST("Sleep Clause: AI will not use sleep moves while sleep clause is active")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Moves(MOVE_SPORE, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep moves fail when sleep clause is active")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("Foe Wobbuffet fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Rest does not activate sleep clause")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_REST); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Rest can still be used when sleep clause is active")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_TACKLE); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_REST); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_REST, opponent);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Psycho Shift'ing sleep will fail if sleep clause is active")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET)
        PLAYER(SPECIES_WOBBUFFET) { Moves(MOVE_SLEEP_TALK, MOVE_PSYCHO_SHIFT); }
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(player, 1); SWITCH(opponent, 1); }
        TURN { MOVE(opponent, MOVE_SPORE); MOVE(player, MOVE_SLEEP_TALK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHO_SHIFT, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            STATUS_ICON(opponent, sleep: TRUE);
        }
        MESSAGE("But it failed!");
    } 
}

AI_SINGLE_BATTLE_TEST("Sleep Clause: AI will not use Yawn while sleep clause is active")
{
    GIVEN {
        AI_FLAGS(AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_CHECK_VIABILITY | AI_FLAG_TRY_TO_FAINT);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Moves(MOVE_YAWN, MOVE_MACH_PUNCH); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_YAWN); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { SWITCH(player, 1); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
        TURN { MOVE(player, MOVE_CELEBRATE); EXPECT_MOVE(opponent, MOVE_MACH_PUNCH); }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Yawn will fail when sleep clause is active")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_YAWN); }
        TURN { }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_YAWN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Wobbuffet fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_YAWN, opponent);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
            STATUS_ICON(player, sleep: TRUE);
        }
        MESSAGE("But it failed!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Effect Spore causes sleep 11% of the time with sleep clause active")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SPORE); }
        TURN { SWITCH(player, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Foe Breloom's Effect Spore made Wobbuffet sleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep from Effect Spore will not activate sleep clause")
{
    PASSES_RANDOMLY(11, 100, RNG_EFFECT_SPORE);
    GIVEN {
        ASSUME(B_ABILITY_TRIGGER_CHANCE >= GEN_5);
        ASSUME(gMovesInfo[MOVE_TACKLE].makesContact);
        PLAYER(SPECIES_WOBBUFFET);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_BRELOOM) { Ability(ABILITY_EFFECT_SPORE); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN {}
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_SPORE); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_EFFECT_SPORE);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Foe Breloom's Effect Spore made Wobbuffet sleep!");
        STATUS_ICON(player, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, player);
        MESSAGE("Wobbuffet fell asleep!");
        STATUS_ICON(player, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Moves with sleep effect chance will activate sleep clause")
{
    PASSES_RANDOMLY(10, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_RELIC_SONG); }
        TURN { MOVE(player, MOVE_SPORE); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RELIC_SONG, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        MESSAGE("Wobbuffet used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("Foe Wobbuffet fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Moves with sleep effect chance will still do damage when sleep clause active, but won't sleep")
{
    PASSES_RANDOMLY(100, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_RELIC_SONG); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_RELIC_SONG, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("Foe Wobbuffet fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

// I added a dire claw test because im too lazy to read what MOVE_EFFECT_DIRE_CLAW does and i suspect it could be
// different than a normal "secondary sleep chance" effect -- feel free to delete this comment also
// or even this test as it might be redundant
ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_DIRE_CLAW, MOVE_EFFECT_DIRE_CLAW) == TRUE);
}

SINGLE_BATTLE_TEST("Sleep Clause: Dire Claw cannot sleep a mon when sleep clause is active")
{
    PASSES_RANDOMLY(100, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_DIRE_CLAW); SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        STATUS_ICON(opponent, sleep: TRUE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DIRE_CLAW, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
            MESSAGE("Foe Wobbuffet fell asleep!");
            STATUS_ICON(opponent, sleep: TRUE);
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Dark Void can only sleep one opposing mon if sleep clause is active")
{
    // Source: https://bulbapedia.bulbagarden.net/wiki/Dark_Void_(move)
    GIVEN {
        PLAYER(SPECIES_DARKRAI);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_DARK_VOID); }
        TURN { MOVE(playerLeft, MOVE_DARK_VOID); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DARK_VOID, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("Foe Wobbuffet fell asleep!");
        }
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: G-Max Befuddle can only sleep one opposing mon if sleep clause is active")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_G_MAX_BEFUDDLE].argument == MAX_EFFECT_EFFECT_SPORE_FOES);
        PLAYER(SPECIES_BUTTERFREE) { GigantamaxFactor(TRUE); }
        PLAYER(SPECIES_CATERPIE);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_BUG_BITE, target: opponentLeft, gimmick: GIMMICK_DYNAMAX,
               WITH_RNG(RNG_G_MAX_BEFUDDLE, STATUS1_SLEEP)); }
    } SCENE {
        MESSAGE("Butterfree used G-Max Befuddle!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("Foe Wobbuffet fell asleep!");
        }
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon wakes up")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(B_SLEEP_TURNS >= GEN_5);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN {}
        TURN {}
        TURN {}
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Foe Wobbuffet woke up!");
        MESSAGE("Wobbuffet used Spore!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Wobbuffet fell asleep!");
        STATUS_ICON(opponent, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up with Aromatherapy or Heal Bell")
{
    u32 move;
    PARAMETRIZE { move = MOVE_AROMATHERAPY; }
    PARAMETRIZE { move = MOVE_HEAL_BELL; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gMovesInfo[MOVE_AROMATHERAPY].effect == EFFECT_HEAL_BELL);
        ASSUME(gMovesInfo[MOVE_HEAL_BELL].effect == EFFECT_HEAL_BELL);
        ASSUME(B_SLEEP_TURNS >= GEN_5);
        PLAYER(SPECIES_ZIGZAGOON);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
        TURN { SWITCH(opponentLeft, 2); MOVE(playerLeft, MOVE_SPORE, target:opponentRight); }
        TURN { SWITCH(opponentLeft, 0); MOVE(opponentRight, move); MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        MESSAGE("Zigzagoon used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("Foe Zigzagoon fell asleep!");
        }
        MESSAGE("But it failed!");
        if (move == MOVE_AROMATHERAPY)
        {
            MESSAGE("Foe Zigzagoon used Aromatherapy!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AROMATHERAPY, opponentRight);
        }
        else
        {
            MESSAGE("Foe Zigzagoon used Heal Bell!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HEAL_BELL, opponentRight);
        }
        STATUS_ICON(opponentLeft, sleep: FALSE);
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up forcefully by a move from an opponent")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(MoveHasAdditionalEffect(MOVE_WAKE_UP_SLAP, MOVE_EFFECT_REMOVE_STATUS));
        PLAYER(SPECIES_ZIGZAGOON);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
        TURN { SWITCH(opponentLeft, 2); MOVE(playerLeft, MOVE_SPORE, target:opponentRight); }
        TURN { SWITCH(opponentLeft, 0); MOVE(playerLeft, MOVE_WAKE_UP_SLAP, target:opponentLeft); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        MESSAGE("Zigzagoon used Spore!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentRight);
            STATUS_ICON(opponentRight, sleep: TRUE);
            MESSAGE("Foe Zigzagoon fell asleep!");
        }
        MESSAGE("But it failed!");
        MESSAGE("Zigzagoon used Wake-Up Slap!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WAKE_UP_SLAP, playerLeft);
        MESSAGE("Foe Zigzagoon woke up!");
        STATUS_ICON(opponentLeft, sleep: FALSE);
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}

DOUBLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up forcefully by Uproar")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gMovesInfo[MOVE_UPROAR].effect == EFFECT_UPROAR);
        PLAYER(SPECIES_ZIGZAGOON);
        PLAYER(SPECIES_ZIGZAGOON);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); MOVE(playerRight, MOVE_UPROAR); MOVE(opponentRight, MOVE_ROAR, target:playerRight); }
        TURN { MOVE(playerLeft, MOVE_SPORE, target:opponentLeft); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
        MESSAGE("Zigzagoon used Uproar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_UPROAR, playerRight);
        MESSAGE("Zigzagoon caused an UPROAR!"); // Why is this one in all caps this should be brought up to RHH
        MESSAGE("Foe Zigzagoon woke up in the UPROAR!");
        STATUS_ICON(opponentLeft, sleep: FALSE);
        MESSAGE("Foe Zigzagoon used Roar!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROAR, opponentRight);
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, playerLeft);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponentLeft);
        MESSAGE("Foe Zigzagoon fell asleep!");
        STATUS_ICON(opponentLeft, sleep: TRUE);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by using Sleep Talk into a status curing move")
{
    u32 move;
    PARAMETRIZE { move = MOVE_PSYCHO_SHIFT; }
    PARAMETRIZE { move = MOVE_JUNGLE_HEALING; }
    PARAMETRIZE { move = MOVE_LUNAR_BLESSING; }
    PARAMETRIZE { move = MOVE_TAKE_HEART; }
    PARAMETRIZE { move = MOVE_AROMATHERAPY; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        ASSUME(gMovesInfo[MOVE_SLEEP_TALK].effect == EFFECT_SLEEP_TALK);
        ASSUME(gMovesInfo[MOVE_PSYCHO_SHIFT].effect == EFFECT_PSYCHO_SHIFT);
        ASSUME(gMovesInfo[MOVE_JUNGLE_HEALING].effect == EFFECT_JUNGLE_HEALING);
        ASSUME(gMovesInfo[MOVE_LUNAR_BLESSING].effect == EFFECT_JUNGLE_HEALING);
        ASSUME(gMovesInfo[MOVE_PURIFY].effect == EFFECT_PURIFY);
        ASSUME(gMovesInfo[MOVE_TAKE_HEART].effect == EFFECT_TAKE_HEART);
        ASSUME(gMovesInfo[MOVE_AROMATHERAPY].effect == EFFECT_HEAL_BELL);
        ASSUME(gItemsInfo[ITEM_CHESTO_BERRY].holdEffect == HOLD_EFFECT_CURE_SLP);
        PLAYER(SPECIES_ZIGZAGOON) { Item(ITEM_CHESTO_BERRY); }
        OPPONENT(SPECIES_ZIGZAGOON) { Moves(MOVE_SLEEP_TALK, move); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, MOVE_SLEEP_TALK); }
        TURN { MOVE(player, MOVE_SPORE); MOVE(opponent, move); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Zigzagoon fell asleep!");
        MESSAGE("Foe Zigzagoon used Sleep Talk!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SLEEP_TALK, opponent);
        if (move == MOVE_PSYCHO_SHIFT)
        {
            MESSAGE("Foe Zigzagoon used Psycho Shift!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_PSYCHO_SHIFT, opponent);
        }
        else if (move == MOVE_JUNGLE_HEALING)
        {
            MESSAGE("Foe Zigzagoon used Jungle Healing!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_JUNGLE_HEALING, opponent);
        }
        else if (move == MOVE_LUNAR_BLESSING)
        {
            MESSAGE("Foe Zigzagoon used Lunar Blessing!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_LUNAR_BLESSING, opponent);
        }
        else if (move == MOVE_TAKE_HEART)
        {
            MESSAGE("Foe Zigzagoon used Take Heart!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TAKE_HEART, opponent);
        }
        else if (move == MOVE_AROMATHERAPY)
        {
            MESSAGE("Foe Zigzagoon used Aromatherapy!");
            ANIMATION(ANIM_TYPE_MOVE, MOVE_AROMATHERAPY, opponent);
        }
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Hydration in the rain")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_PELIPPER) { Ability(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_LUVDISC) { Ability(ABILITY_HYDRATION); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Pelipper used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Luvdisc fell asleep!");
        MESSAGE("Foe Luvdisc's Hydration cured its sleep problem!");
        STATUS_ICON(opponent, sleep: FALSE);
        MESSAGE("Pelipper used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Luvdisc fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Natural Cure")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_SWABLU) { Ability(ABILITY_NATURAL_CURE); }
        OPPONENT(SPECIES_ZIGZAGOON);
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { SWITCH(opponent, 1); }
        TURN { SWITCH(opponent, 0); MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Swablu fell asleep!");
        MESSAGE("2 withdrew Swablu!");
        MESSAGE("2 sent out Swablu!");
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Swablu fell asleep!");
    }
}

SINGLE_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Shed Skin")
{
    PASSES_RANDOMLY(30, 100, RNG_SHED_SKIN); // Needs to be changed to 33 once my PR gets merged to RHH
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPORE].effect == EFFECT_SLEEP);
        PLAYER(SPECIES_ZIGZAGOON);
        OPPONENT(SPECIES_DRATINI) { Ability(ABILITY_SHED_SKIN); }
    } WHEN {
        TURN { MOVE(player, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Dratini fell asleep!");
        MESSAGE("Foe Dratini's Shed Skin cured its sleep problem!");
        MESSAGE("Zigzagoon used Spore!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPORE, player);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_SLP, opponent);
        MESSAGE("Foe Dratini fell asleep!");
    }
}

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by Healer");
    // Doubles test

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by the item Awakening");
// replace awakening with the following items:
    // blue flute, chesto berry, big malasada, casteliacone, full heal, full restore, heal powder, lava cookie, lum berry
    // lumiose galett, miracle berry?, old gateau, pewter Crunchies, rage candy bar, shalour sable
    // idk wtf half these items even are and id imagine a lot of them share effects so i doubt a test will be needed for all of them

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by gaining the ability Insomnia");

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by gaining the ability Vital Spirit");

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon faints");

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is sent out, has Trace, and Traces Insomnia / Vital spirit");

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up by a held item such as Chesto Berry");

// ADDED HANDLING FOR THIS
TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is sent out and transforms into a mon with Insomnia / Vital spirit");

TO_DO_BATTLE_TEST("Sleep Clause: AI will use sleep moves again when sleep clause has been deactivated");

TO_DO_BATTLE_TEST("Sleep Clause: Sleep clause is deactivated when a sleeping mon is woken up with G-Max Sweetness");
// something like:
    // player has wob and wob
    // ai has wob and wob
    // someone puts someone to sleep and someone on the sleeping team uses gmax sweetness, which should cure the party of status
    // can sleep again after that

//TODO treat falling asleep from disobeying the same as rest
