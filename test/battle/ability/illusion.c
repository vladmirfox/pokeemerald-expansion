#include "global.h"
#include "test/battle.h"

//  This test is eyes on only
SINGLE_BATTLE_TEST("Illusion can only imitate Normal Form terapagos")
{
    GIVEN {
        PLAYER(SPECIES_ZOROARK);
        PLAYER(SPECIES_TERAPAGOS);
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        //  Zoroark is out, should be normal form Terapagos
        //  Switch to Terapagos which enters Terastal Form
        TURN { SWITCH(player, 1); }
        //  Switch back to Zoroark, should not be Terastal Terapagos
        TURN { SWITCH(player, 1); }
        // Switch back to Terapagos
        TURN { SWITCH(player, 1); }
        //  Terapagos Stellar, Zoroark gets Roared in, should not be Stellar Terapagos
        TURN { MOVE(player, MOVE_CELEBRATE, gimmick: GIMMICK_TERA); MOVE(opponent, MOVE_ROAR); }
        //  Reveal the Zoroark
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_TACKLE); }
    }
}
