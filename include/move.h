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
    // end of word
    u16 accuracy:7;
    u16 target:9;
    u8 pp;
    union {
        u8 effect;
        u8 powerOverride;
    } zMove;
    // end of word
    s32 priority:4;
    u32 recoil:7;
    u32 strikeCount:4; // Max 15 hits. Defaults to 1 if not set. May apply its effect on each hit.
    u32 criticalHitStage:2;
    bool32 alwaysCriticalHit:1;
    u32 numAdditionalEffects:2; // limited to 3 - don't want to get too crazy
    // Flags
    bool32 makesContact:1;
    bool32 ignoresProtect:1;
    bool32 magicCoatAffected:1;
    bool32 snatchAffected:1;
    bool32 ignoresKingsRock:1;
    bool32 punchingMove:1;
    bool32 bitingMove:1;
    bool32 pulseMove:1;
    bool32 soundMove:1;
    bool32 ballisticMove:1;
    bool32 powderMove:1;
    bool32 danceMove:1;
    // end of word
    bool32 windMove:1;
    bool32 slicingMove:1;
    bool32 healingMove:1;
    bool32 minimizeDoubleDamage:1;
    bool32 ignoresTargetAbility:1;
    bool32 ignoresTargetDefenseEvasionStages:1;
    bool32 damagesUnderground:1;
    bool32 damagesUnderwater:1;
    bool32 damagesAirborne:1;
    bool32 damagesAirborneDoubleDamage:1;
    bool32 ignoreTypeIfFlyingAndUngrounded:1;
    bool32 thawsUser:1;
    bool32 ignoresSubstitute:1;
    bool32 forcePressure:1;
    bool32 cantUseTwice:1;
    // Ban flags
    bool32 gravityBanned:1;
    bool32 mirrorMoveBanned:1;
    bool32 meFirstBanned:1;
    bool32 mimicBanned:1;
    bool32 metronomeBanned:1;
    bool32 copycatBanned:1;
    bool32 assistBanned:1; // Matches same moves as copycatBanned + semi-invulnerable moves and Mirror Coat.
    bool32 sleepTalkBanned:1;
    bool32 instructBanned:1;
    bool32 encoreBanned:1;
    bool32 parentalBondBanned:1;
    bool32 skyBattleBanned:1;
    bool32 sketchBanned:1;
    u32 padding:19;
    // end of word

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

static inline u32 GetMoveStrikeCount(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].strikeCount;
}

static inline u32 GetMoveCriticalHitStage(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].criticalHitStage;
}

static inline bool32 MoveAlwaysCrits(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].alwaysCriticalHit;
}

static inline u32 GetMoveAdditionalEffectCount(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].numAdditionalEffects;
}

static inline bool32 MoveMakesContact(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].makesContact;
}

static inline bool32 MoveIgnoresProtect(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].ignoresProtect;
}

static inline bool32 MoveCanBeBouncedBack(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].magicCoatAffected;
}

static inline bool32 MoveCanSnatched(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].snatchAffected;
}

static inline bool32 MoveIgnoresKingsRock(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].ignoresKingsRock;
}

static inline bool32 IsPunchingMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].punchingMove;
}

static inline bool32 IsBitingMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].bitingMove;
}

static inline bool32 IsPulseMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].pulseMove;
}

static inline bool32 IsSoundMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].soundMove;
}

static inline bool32 IsBallisticMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].ballisticMove;
}

static inline bool32 IsPowderMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].powderMove;
}

static inline bool32 IsDanceMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].danceMove;
}

static inline bool32 IsWindMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].windMove;
}

static inline bool32 IsSlicingMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].slicingMove;
}

static inline bool32 IsHealingMove(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].healingMove;
}

static inline bool32 MoveIncreasesPowerToMinimizedTargets(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].minimizeDoubleDamage;
}

static inline bool32 MoveIgnoresTargetAbility(u32 moveId)
{
    return gMovesInfo[SanitizeMoveId(moveId)].ignoresTargetAbility;
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
