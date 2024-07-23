#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Battler end turn effects are done per battler for each state")
{
    GIVEN {
        PLAYER(SPECIES_VENUSAUR);
        PLAYER(SPECIES_CHARIZARD) { GigantamaxFactor(TRUE); }
        OPPONENT(SPECIES_BLASTOISE);
        OPPONENT(SPECIES_WYNAUT);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_HAIL); MOVE(playerRight, MOVE_EMBER, target: opponentLeft, gimmick: GIMMICK_DYNAMAX); }

    } SCENE {
        MESSAGE("Charizard is pelted by HAIL!");
        HP_BAR(playerRight);
        MESSAGE("Venusaur is pelted by HAIL!");
        HP_BAR(playerLeft);
        MESSAGE("Foe Blastoise is pelted by HAIL!");
        HP_BAR(opponentLeft);
        MESSAGE("Foe Wynaut is pelted by HAIL!");
        HP_BAR(opponentRight);
        MESSAGE("Foe Blastoise is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentLeft);
        MESSAGE("Foe Wynaut is burning up within G-Max Wildfire's flames!");
        HP_BAR(opponentRight);
   }
}
