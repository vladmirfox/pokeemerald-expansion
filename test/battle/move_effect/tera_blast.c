#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TERA_BLAST].effect == EFFECT_TERA_BLAST);
}

SINGLE_BATTLE_TEST("Tera Blast changes from Normal-type to the user's Tera Type")
{
    GIVEN {
        PLAYER(SPECIES_WOBBUFFET) { TeraType(TYPE_DARK); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TERA_BLAST); }
    } SCENE {
        MESSAGE("Wobbuffet used Tera Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERA_BLAST, player);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Tera Blast becomes a physical move if the user is Terastallized and has a higher Attack stat", s16 damage)
{
    bool32 tera;
    // Wobbuffet has equal defenses and Machamp has higher Attack than Sp. Attack.
    ASSUME(gSpeciesInfo[SPECIES_WOBBUFFET].spDefense == gSpeciesInfo[SPECIES_WOBBUFFET].defense)
    ASSUME(gSpeciesInfo[SPECIES_MACHAMP].attack > gSpeciesInfo[SPECIES_MACHAMP].spAttack)

    PARAMETRIZE { tera = FALSE; }
    PARAMETRIZE { tera = TRUE; }
    GIVEN {
        PLAYER(SPECIES_MACHAMP) { TeraType(TYPE_NORMAL); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_TERA_BLAST, tera: tera); }
    } SCENE {
        MESSAGE("Machamp used Tera Blast!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TERA_BLAST, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        // Since Wobbuffett has equal defenses, Tera Blast should do more damage than just the
        // newly gained STAB boost.
        EXPECT_GE(results[1].damage, results[0].damage * 1.50);
    }
}
