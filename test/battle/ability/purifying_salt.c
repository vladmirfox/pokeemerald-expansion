#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Purifying Salt halves damage from Ghost-type moves", s16 damage)
{
    u16 ability;
    PARAMETRIZE { ability = ABILITY_STURDY; }
    PARAMETRIZE { ability = ABILITY_PURIFYING_SALT; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_SHADOW_BALL].type == TYPE_GHOST);
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_WOBBUFFET) { Ability(ability); }
    } WHEN {
        TURN { MOVE(player, MOVE_SHADOW_BALL); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, UQ_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Purifying Salt makes Rest fail")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_PURIFYING_SALT); HP(1); MaxHP(100);}
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_REST); }
    } SCENE {
        NONE_OF {
            MESSAGE("Wobbuffet went to sleep!");
        }
    }
}

SINGLE_BATTLE_TEST("Purifying Salt grants immunity to status effects")
{
    u32 move;
    PARAMETRIZE { move = MOVE_WILL_O_WISP; }
    PARAMETRIZE { move = MOVE_HYPNOSIS; }
    PARAMETRIZE { move = MOVE_THUNDER_WAVE; }
    PARAMETRIZE { move = MOVE_TOXIC; }
    PARAMETRIZE { move = MOVE_POWDER_SNOW; }
    GIVEN {
        ASSUME(gBattleMoves[MOVE_WILL_O_WISP].effect == EFFECT_WILL_O_WISP);
        ASSUME(gBattleMoves[MOVE_HYPNOSIS].effect == EFFECT_SLEEP);
        ASSUME(gBattleMoves[MOVE_THUNDER_WAVE].effect == EFFECT_PARALYZE);
        ASSUME(gBattleMoves[MOVE_TOXIC].effect == EFFECT_TOXIC);
        ASSUME(gBattleMoves[MOVE_POWDER_SNOW].effect == EFFECT_FREEZE_HIT);
        PLAYER(SPECIES_WOBBUFFET) { Ability(ABILITY_PURIFYING_SALT); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        switch (move)
        {
            case MOVE_WILL_O_WISP:
                MESSAGE("Foe Wobbuffet used Will-o-Wisp!");
                NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_WILL_O_WISP, opponent);
                ABILITY_POPUP(player, ABILITY_PURIFYING_SALT);
                MESSAGE("It doesn't affect Wobbuffet…");
                break;
            case MOVE_HYPNOSIS:
                MESSAGE("Foe Wobbuffet used Hypnosis!");
                NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HYPNOSIS, opponent);
                ABILITY_POPUP(player, ABILITY_PURIFYING_SALT);
                MESSAGE("It doesn't affect Wobbuffet…");
                break;
            case MOVE_THUNDER_WAVE:
                MESSAGE("Foe Wobbuffet used Thunder Wave!");
                NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_THUNDER_WAVE, opponent);
                ABILITY_POPUP(player, ABILITY_PURIFYING_SALT);
                MESSAGE("It doesn't affect Wobbuffet…");
                break;
            case MOVE_TOXIC:
                MESSAGE("Foe Wobbuffet used Toxic!");
                NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_TOXIC, opponent);
                ABILITY_POPUP(player, ABILITY_PURIFYING_SALT);
                MESSAGE("It doesn't affect Wobbuffet…");
                break;
            case MOVE_POWDER_SNOW:
                MESSAGE("Foe Wobbuffet used Powder Snow!");
                ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, opponent);
                break;
        }
        NONE_OF { STATUS_ICON(player, status1: TRUE); }
    }
}
