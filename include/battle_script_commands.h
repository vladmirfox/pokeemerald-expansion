#ifndef GUARD_BATTLE_SCRIPT_COMMANDS_H
#define GUARD_BATTLE_SCRIPT_COMMANDS_H

#include "constants/battle_script_commands.h"

// Arguments for 'flags' in HandleBattleWindow
#define WINDOW_CLEAR (1 << 0)
#define WINDOW_BG1   (1 << 7)

// Arguments for 'xStart, yStart, xEnd, yEnd' in HandleBattleWindow
#define YESNOBOX_X_Y 24, 8, 29, 13

struct StatFractions
{
    u8 dividend;
    u8 divisor;
};

struct PickupItem
{
    u16 itemId;
    u8 percentage[10];
};

enum {
    MOVE_EFFECT_BLOCKER_ABILITY,
    MOVE_EFFECT_BLOCKER_ABILITY_ON_SIDE,
    MOVE_EFFECT_BLOCKER_SUBSTITUTE,
    MOVE_EFFECT_BLOCKER_TERRAIN,
    MOVE_EFFECT_BLOCKER_SAFEGUARD,
    MOVE_EFFECT_BLOCKER_ACCURACY,
    MOVE_EFFECT_BLOCKER_UPROAR,
    MOVE_EFFECT_BLOCKER_FLOWER_VEIL,
    MOVE_EFFECT_BLOCKER_LEAF_GUARD,
    MOVE_EFFECT_BLOCKER_SHIELDS_DOWN,
    MOVE_EFFECT_BLOCKER_ALREADY_HAS_STATUS_1,
    MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_1,
    MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_2,
    MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_3,
    MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_4,
    MOVE_EFFECT_BLOCKER_NO_MONS_ALIVE_EITHER_PARTY,
    MOVE_EFFECT_BLOCKER_END
};

#define MOVE_EFFECT_BLOCKER_HAS_ANY_STATUS_1_FAIL_SCRIPT BattleScript_ButItFailed

#define MOVE_EFFECT_BLOCKER_ABILITY(_ability, ...) { .type = MOVE_EFFECT_BLOCKER_ABILITY, .blockerId = _ability, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ABILITY_ON_SIDE(_ability, ...) { .type = MOVE_EFFECT_BLOCKER_ABILITY_ON_SIDE, .blockerId = _ability, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_SUBSTITUTE(...) { .type = MOVE_EFFECT_BLOCKER_SUBSTITUTE, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_TERRAIN(_terrain, _script) { .type = MOVE_EFFECT_BLOCKER_TERRAIN, .blockerId = _terrain, .battleScript = _script }
#define MOVE_EFFECT_BLOCKER_SAFEGUARD(...) { .type = MOVE_EFFECT_BLOCKER_SAFEGUARD, .battleScript = DEFAULT(BattleScript_SafeguardProtected, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ACCURACY(...) { .type = MOVE_EFFECT_BLOCKER_ACCURACY, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_UPROAR(...) { .type = MOVE_EFFECT_BLOCKER_UPROAR, .battleScript = DEFAULT(0, __VA_ARGS__) } /* BattleScript_CantMakeAsleep */
#define MOVE_EFFECT_BLOCKER_FLOWER_VEIL(...) { .type = MOVE_EFFECT_BLOCKER_FLOWER_VEIL, .battleScript = DEFAULT(BattleScript_FlowerVeilProtectsRet, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_LEAF_GUARD(...) { .type = MOVE_EFFECT_BLOCKER_LEAF_GUARD, .battleScript = DEFAULT(0, __VA_ARGS__) } /*BattleScript_AbilityProtectsDoesntAffectRet*/
#define MOVE_EFFECT_BLOCKER_SHIELDS_DOWN(...) { .type = MOVE_EFFECT_BLOCKER_SHIELDS_DOWN, .battleScript = DEFAULT(0, __VA_ARGS__) } /*BattleScript_AbilityProtectsDoesntAffectRet*/
#define MOVE_EFFECT_BLOCKER_ALREADY_HAS_STATUS_1(...) { .type = MOVE_EFFECT_BLOCKER_ALREADY_HAS_STATUS_1, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_1(...) { .type = MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_1, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_2(...) { .type = MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_2, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_3(...) { .type = MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_3, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_4(...) { .type = MOVE_EFFECT_BLOCKER_ALREADY_HAS_SAME_STATUS_4, .battleScript = DEFAULT(BattleScript_ButItFailed, __VA_ARGS__) }
#define MOVE_EFFECT_BLOCKER_NO_MONS_ALIVE_EITHER_PARTY(...) { .type = MOVE_EFFECT_BLOCKER_NO_MONS_ALIVE_EITHER_PARTY, .battleScript = DEFAULT(0, __VA_ARGS__) }

#define MAX_BLOCKERS 31 // arbitrary
#define MOVE_EFFECT_BLOCKERS(...) (const struct MoveEffectBlocker[]){__VA_ARGS__, { .type = MOVE_EFFECT_BLOCKER_END}}

struct MoveEffectBlocker
{
    u16 type;
    u16 blockerId;
    const u8 *battleScript;
};

struct MoveEffectResult
{
    bool32 fail;
    const u8 *nextScript;
};

struct __attribute__((packed, aligned(2))) MoveEffectInfo
{
    u32 statusFlag;
    const u8 *battleScript;
    const struct MoveEffectBlocker *blockers;
    u16 activateAfterFaint:1;
    u16 finalHitOnly:1;
    u16 moveEndEffect:1;
    u16 moveOnly:1;
};

#define SET_MOVE_EFFECT(moveEffect, ...) CheckOrSetMoveEffect(moveEffect, DEFAULT(FALSE, __VA_ARGS__), DEFAULT_2(FALSE, __VA_ARGS__), DEFAULT_3(gZeroArgument, __VA_ARGS__), DEFAULT_4(MOVE_NONE, __VA_ARGS__), DEFAULT_5(FALSE, __VA_ARGS__))

s32 CalcCritChanceStageArgs(u32 battlerAtk, u32 battlerDef, u32 move, bool32 recordAbility, u32 abilityAtk, u32 abilityDef, u32 holdEffectAtk);
s32 CalcCritChanceStage(u32 battlerAtk, u32 battlerDef, u32 move, bool32 recordAbility);
s32 GetCritHitChance(s32 critChanceIndex);
u32 GetTotalAccuracy(u32 battlerAtk, u32 battlerDef, u32 move, u32 atkAbility, u32 defAbility, u32 atkHoldEffect, u32 defHoldEffect);
u8 GetBattlerTurnOrderNum(u8 battlerId);
bool32 NoAliveMonsForPlayer(void);
bool32 NoAliveMonsForEitherParty(void);
struct MoveEffectResult SetMoveEffect(u16 moveEffect, bool32 primary, bool32 certain, MoveEffectArgument argument, u32 move);
bool32 CheckMoveEffect(u16 moveEffect, bool32 primary, bool32 certain, MoveEffectArgument argument, u32 move);
struct MoveEffectResult CheckOrSetMoveEffect(u16 moveEffect, bool32 primary, bool32 certain, MoveEffectArgument argument, u32 move, u32 check);
bool32 CanBattlerSwitch(u32 battlerId);
void BattleDestroyYesNoCursorAt(u8 cursorPosition);
void BattleCreateYesNoCursorAt(u8 cursorPosition);
void BufferMoveToLearnIntoBattleTextBuff2(void);
void HandleBattleWindow(u8 xStart, u8 yStart, u8 xEnd, u8 yEnd, u8 flags);
bool8 UproarWakeUpCheck(u8 battlerId);
bool32 DoesSubstituteBlockMove(u32 battlerAtk, u32 battlerDef, u32 move);
bool32 DoesDisguiseBlockMove(u32 battlerAtk, u32 battlerDef, u32 move);
bool32 CanPoisonType(u8 battlerAttacker, u8 battlerTarget);
bool32 CanParalyzeType(u8 battlerAttacker, u8 battlerTarget);
bool32 CanUseLastResort(u8 battlerId);
u32 IsFlowerVeilProtected(u32 battler);
u32 IsLeafGuardProtected(u32 battler);
bool32 IsShieldsDownProtected(u32 battler);
u32 IsAbilityStatusProtected(u32 battler);
bool32 TryResetBattlerStatChanges(u8 battler);
bool32 CanCamouflage(u8 battlerId);
u16 GetNaturePowerMove(void);
void StealTargetItem(u8 battlerStealer, u8 battlerItem);
u8 GetCatchingBattler(void);
u32 GetHighestStatId(u32 battlerId);
bool32 ProteanTryChangeType(u32 battler, u32 ability, u32 move, u32 moveType);
bool32 IsMoveNotAllowedInSkyBattles(u32 move);
bool32 DoSwitchInAbilities(u32 battlerId);
u8 GetFirstFaintedPartyIndex(u8 battlerId);
bool32 IsMoveAffectedByParentalBond(u32 move, u32 battler);

extern void (* const gBattleScriptingCommandsTable[])(void);
extern const u8 gBattlePalaceNatureToMoveGroupLikelihood[NUM_NATURES][4];
extern const struct StatFractions gAccuracyStageRatios[];
extern const MoveEffectArgument gZeroArgument;

#endif // GUARD_BATTLE_SCRIPT_COMMANDS_H
