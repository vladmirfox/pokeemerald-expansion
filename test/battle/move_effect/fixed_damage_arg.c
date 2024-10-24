#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_SONIC_BOOM].effect == EFFECT_FIXED_DAMAGE_ARG);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].effect == EFFECT_FIXED_DAMAGE_ARG);
    
    ASSUME(gMovesInfo[MOVE_SONIC_BOOM].argument == 20);
    ASSUME(gMovesInfo[MOVE_DRAGON_RAGE].argument == 40);
}

SINGLE_BATTLE_TEST("Sonic Boom deals fixed damage", s16 damage)
{
    u16 mon;
    PARAMETRIZE { mon = SPECIES_RATTATA; }
    PARAMETRIZE { mon = SPECIES_ARON; }
    
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_SONIC_BOOM); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SONIC_BOOM, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT(results[0].damage == 20);
        EXPECT(results[1].damage == 20);
    }
}

SINGLE_BATTLE_TEST("Sonic Boom doesn't affect ghost types")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(SPECIES_GASTLY);
    } WHEN {
        TURN { MOVE(player, MOVE_SONIC_BOOM); }
    } SCENE {
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SONIC_BOOM, player);
    }
}

SINGLE_BATTLE_TEST("Dragon Rage deals fixed damage", s16 damage)
{
    u16 mon;
    PARAMETRIZE { mon = SPECIES_RATTATA; }
    PARAMETRIZE { mon = SPECIES_BELDUM; }
    PARAMETRIZE { mon = SPECIES_DRAGONAIR; }
    
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET);
        OPPONENT(mon);
    } WHEN {
        TURN { MOVE(player, MOVE_DRAGON_RAGE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_RAGE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT(results[0].damage == 40);
        EXPECT(results[1].damage == 40);
        EXPECT(results[2].damage == 40);
    }
}
