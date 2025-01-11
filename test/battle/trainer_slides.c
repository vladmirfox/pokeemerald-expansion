#include "global.h"
#include "test/battle.h"
#include "battle_setup.h"

SINGLE_BATTLE_TEST("Trainer Slide: Before First Turn")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_BEFORE_FIRST_TURN;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { }
    } SCENE {
        MESSAGE("This message plays before the first turn.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Player Lands First Critical Hit")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_PLAYER_LANDS_FIRST_CRITICAL_HIT;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_FROST_BREATH); }
    } SCENE {
        MESSAGE("A critical hit!");
        MESSAGE("This message plays after the player lands their first critical hit.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Player Lands First Super Effective Hit")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_PLAYER_LANDS_FIRST_SUPER_EFFECTIVE_HIT;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_BITE); }
    } SCENE {
        MESSAGE("It's super effective!");
        MESSAGE("This message plays after the player lands their first super effective hit.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Player Lands First Down")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_PLAYER_LANDS_FIRST_DOWN;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays after the player KOs one enemy mon.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Enemy Mon Unaffected")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_ENEMY_MON_UNAFFECTED;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays after the player attacks the enemy with a move that is ineffective.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Last Switchin")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_LAST_SWITCHIN;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays after the enemy switches in their last Pokemon.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Last Half Hp")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_LAST_HALF_HP;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays after the enemy's last Pokemon has less than 51% remaining HP.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Last Low Hp")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_LAST_LOW_HP;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays after the enemy's last Pokemon has less than 26% remaining HP.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Mega Evolution")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_MEGA_EVOLUTION;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays before the enemy activates the Mega Evolution gimmick.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Z Move")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_Z_MOVE;
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HEALING_WISH); SEND_OUT(opponent,1); }
    } SCENE {
        MESSAGE("The opposing Wobbuffet fainted!");
        MESSAGE("This message plays before the enemy activates the Z-Move gimmick.{PAUSE_UNTIL_PRESS}");
    }
}

SINGLE_BATTLE_TEST("Trainer Slide: Dynamax")
{
    gBattleTestRunnerState->data.recordedBattle.opponentA = TRAINER_SLIDE_DYNAMAX;

    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
            TURN { MOVE(opponent, MOVE_PROTECT, gimmick: GIMMICK_DYNAMAX); }
    } SCENE {
        MESSAGE("This message plays before the enemy activates the Dynamax gimmick.{PAUSE_UNTIL_PRESS}");
    }
}
