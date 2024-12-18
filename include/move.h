#ifndef GUARD_MOVES_H
#define GUARD_MOVES_H

#include "contest_effect.h"
#include "constants/battle_move_effects.h"
#include "constants/moves.h"

#define EFFECTS_ARR(...) (const struct AdditionalEffect[]) {__VA_ARGS__}
#define ADDITIONAL_EFFECTS(...) EFFECTS_ARR( __VA_ARGS__ ), .numAdditionalEffects = ARRAY_COUNT(EFFECTS_ARR( __VA_ARGS__ ))

// Just a hack to make a move boosted by Sheer Force despite having no secondary effects affected
#define SHEER_FORCE_HACK { .moveEffect = 0, .chance = 100, }

struct AdditionalEffect
{
    u16 moveEffect;
    u8 self:1;
    u8 onlyIfTargetRaisedStats:1;
    u8 onChargeTurnOnly:1;
    u8 chance; // 0% = effect certain, primary effect
};

struct MoveInfo
{
    const u8 *name;
    const u8 *description;
    u16 effect;
    u16 type:5;     // Up to 32
    u16 category:2;
    u16 power:9;    // up to 511
    u16 accuracy:7;
    u16 target:9;
    u8 pp;
    union {
        u8 effect;
        u8 powerOverride;
    } zMove;

    s32 priority:4;
    u32 recoil:7;
    u32 strikeCount:4; // Max 15 hits. Defaults to 1 if not set. May apply its effect on each hit.
    u32 criticalHitStage:2;
    u32 alwaysCriticalHit:1;
    u32 numAdditionalEffects:2; // limited to 3 - don't want to get too crazy
    // 12 bits left to complete this word - continues into flags

    // Flags
    u32 makesContact:1;
    u32 ignoresProtect:1;
    u32 magicCoatAffected:1;
    u32 snatchAffected:1;
    u32 ignoresKingsRock:1;
    u32 punchingMove:1;
    u32 bitingMove:1;
    u32 pulseMove:1;
    u32 soundMove:1;
    u32 ballisticMove:1;
    u32 powderMove:1;
    u32 danceMove:1;
    u32 windMove:1;
    u32 slicingMove:1; // end of word
    u32 healingMove:1;
    u32 minimizeDoubleDamage:1;
    u32 ignoresTargetAbility:1;
    u32 ignoresTargetDefenseEvasionStages:1;
    u32 damagesUnderground:1;
    u32 damagesUnderwater:1;
    u32 damagesAirborne:1;
    u32 damagesAirborneDoubleDamage:1;
    u32 ignoreTypeIfFlyingAndUngrounded:1;
    u32 thawsUser:1;
    u32 ignoresSubstitute:1;
    u32 forcePressure:1;
    u32 cantUseTwice:1;

    // Ban flags
    u32 gravityBanned:1;
    u32 mirrorMoveBanned:1;
    u32 meFirstBanned:1;
    u32 mimicBanned:1;
    u32 metronomeBanned:1;
    u32 copycatBanned:1;
    u32 assistBanned:1; // Matches same moves as copycatBanned + semi-invulnerable moves and Mirror Coat.
    u32 sleepTalkBanned:1;
    u32 instructBanned:1;
    u32 encoreBanned:1;
    u32 parentalBondBanned:1;
    u32 skyBattleBanned:1;
    u32 sketchBanned:1;
    u32 padding:5; // end of word

    u32 argument;

    // primary/secondary effects
    const struct AdditionalEffect *additionalEffects;

    // contest parameters
    u8 contestEffect;
    u8 contestCategory:3;
    u8 contestComboStarterId;
    u8 contestComboMoves[MAX_COMBO_MOVES];
    const u8 *battleAnimScript;
};

extern const struct MoveInfo gMovesInfo[];
extern const u8 gNotDoneYetDescription[];

static inline u32 SanitizeMoveId(u32 moveId)
{
    if (moveId >= MOVES_COUNT_ALL)
        return MOVE_NONE;
    else
        return moveId;
}

static inline const u8 *GetMoveName(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].name;
}

static inline const u8 *GetMoveDescription(u32 moveId)
{
    moveId = SanitizeMoveId(moveId);
    if (gMovesInfo[moveId].effect == EFFECT_PLACEHOLDER)
        return gNotDoneYetDescription;
    return gMovesInfo[moveId].description;
}

static inline u32 GetMoveEffect(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].effect;
}

static inline u32 GetMoveType(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].type;
}

static inline u32 GetMoveCategory(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].category;
}

static inline u32 GetMovePower(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].power;
}

static inline u32 GetMoveAccuracy(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].accuracy;
}

static inline u32 GetMoveTarget(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].target;
}

static inline u32 GetMovePP(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].pp;
}

static inline u32 GetMoveZEffect(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].zMove.effect;
}

static inline u32 GetMoveZPowerOverride(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].zMove.powerOverride;
}

static inline s32 GetMovePriority(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].priority;
}

static inline u32 GetMoveRecoil(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].recoil;
}

static inline const u8 *GetMoveAnimationScript(u32 moveId)
{
    moveId = SanitizeMoveId(moveId);
    if (gMovesInfo[moveId].battleAnimScript == NULL)
    {
        DebugPrintfLevel(MGBA_LOG_WARN, "No animation for moveId=%u", moveId);
        return gMovesInfo[MOVE_NONE].battleAnimScript;
    }
    return gMovesInfo[moveId].battleAnimScript;
}

#endif // GUARD_MOVES_H
