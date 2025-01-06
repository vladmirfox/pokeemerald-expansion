#ifndef GUARD_SCRIPT_H
#define GUARD_SCRIPT_H

#include <setjmp.h>

struct ScriptContext;

typedef bool8 (*ScrCmdFunc)(struct ScriptContext *);
typedef u8 Script[];

struct ScriptContext
{
    u8 stackDepth;
    u8 mode;
    u8 comparisonResult;
    u8 (*nativePtr)(void);
    const u8 *scriptPtr;
    const u8 *stack[20];
    ScrCmdFunc *cmdTable;
    ScrCmdFunc *cmdTableEnd;
    u32 data[4];
};

#define ScriptReadByte(ctx) (*(ctx->scriptPtr++))

void InitScriptContext(struct ScriptContext *ctx, void *cmdTable, void *cmdTableEnd);
u8 SetupBytecodeScript(struct ScriptContext *ctx, const u8 *ptr);
void SetupNativeScript(struct ScriptContext *ctx, bool8 (*ptr)(void));
void StopScript(struct ScriptContext *ctx);
bool8 RunScriptCommand(struct ScriptContext *ctx);
void ScriptJump(struct ScriptContext *ctx, const u8 *ptr);
void ScriptCall(struct ScriptContext *ctx, const u8 *ptr);
void ScriptReturn(struct ScriptContext *ctx);
u16 ScriptReadHalfword(struct ScriptContext *ctx);
u32 ScriptReadWord(struct ScriptContext *ctx);
u32 ScriptPeekWord(struct ScriptContext *ctx);
void LockPlayerFieldControls(void);
void UnlockPlayerFieldControls(void);
bool8 ArePlayerFieldControlsLocked(void);
void ScriptContext_Init(void);
bool8 ScriptContext_IsEnabled(void);
bool8 ScriptContext_RunScript(void);
void ScriptContext_SetupScript(const u8 *ptr);
void ScriptContext_Stop(void);
void ScriptContext_Enable(void);
void RunScriptImmediately(const u8 *ptr);
const u8 *MapHeaderGetScriptTable(u8 tag);
void MapHeaderRunScriptType(u8 tag);
const u8 *MapHeaderCheckScriptTable(u8 tag);
void RunOnLoadMapScript(void);
void RunOnTransitionMapScript(void);
void RunOnResumeMapScript(void);
void RunOnReturnToFieldMapScript(void);
void RunOnDiveWarpMapScript(void);
bool8 TryRunOnFrameMapScript(void);
void TryRunOnWarpIntoMapScript(void);
u32 CalculateRamScriptChecksum(void);
void ClearRamScript(void);
bool8 InitRamScript(const u8 *script, u16 scriptSize, u8 mapGroup, u8 mapNum, u8 objectId);
const u8 *GetRamScript(u8 objectId, const u8 *script);
bool32 ValidateSavedRamScript(void);
u8 *GetSavedRamScriptIfValid(void);
void InitRamScript_NoObjectEvent(u8 *script, u16 scriptSize);

enum
{
    SCREFF_SAVE = 1 << 0,
    SCREFF_HARDWARE = 1 << 1,
    SCREFF_TRAINERBATTLE = 1 << 2,
};

enum
{
    SCREFF_V1 = ~7,
};

/* 'RunScriptImmediatelyUntilEffect' executes a script until it reaches
 * the first command which calls 'Script_RequestEffects' with an
 * effect in 'effects' in which case it returns 'TRUE' and stores the
 * current state in 'ctx'; or until it reaches an 'end'/'return' in
 * which case it returns 'FALSE'.
 *
 * Commands, natives, and specials which call 'Script_RequestEffects'
 * must be explicitly tagged, and must call the function before any of
 * those effects have occurred. An untagged function could cause any
 * effect, so execution is stopped to be safe. */
bool32 RunScriptImmediatelyUntilEffect(u32 effects, const u8 *ptr, struct ScriptContext *ctx);
bool32 Script_HasNoEffect(const u8 *ptr);
void Script_RequestEffects(u32 effects);
void Script_RequestWriteVar(u32 varId);
void Script_CheckEffectInstrumentedSpecial(u32 specialId);
void Script_CheckEffectInstrumentedGotoNative(bool8 (*func)(void));
void Script_CheckEffectInstrumentedCallNative(void (*func)(struct ScriptContext *));
bool32 Script_IsAnalyzingEffects(void);

// srccmd.h
void SetMovingNpcId(u16 npcId);

extern u8 gMsgIsSignPost;
extern u8 gMsgBoxIsCancelable;

#endif // GUARD_SCRIPT_H
