#include "global.h"
#include "data.h"
#include "event_data.h"
#include "script.h"
#include "constants/battle.h"

u32 GetCurrentDifficultyLevel(void)
{
    if (!B_VAR_DIFFICULTY)
        return DIFFICULTY_NORMAL;

    return VarGet(B_VAR_DIFFICULTY);
}

void SetCurrentDifficulty(u32 desiredDifficulty)
{
    if (!B_VAR_DIFFICULTY)
        return;

    if (desiredDifficulty > DIFFICULTY_MAX)
        desiredDifficulty = DIFFICULTY_MAX;

    VarSet(B_VAR_DIFFICULTY, desiredDifficulty);
}

u32 GetBattlePartnerDifficultyLevel(u16 partnerId)
{
    u32 difficulty = GetCurrentDifficultyLevel();

    if (partnerId > TRAINER_PARTNER(PARTNER_NONE))
        partnerId -= TRAINER_PARTNER(PARTNER_NONE);

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gBattlePartners[difficulty][partnerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

u32 GetTrainerDifficultyLevel(u16 trainerId)
{
    u32 difficulty = GetCurrentDifficultyLevel();

    if (difficulty == DIFFICULTY_NORMAL)
        return DIFFICULTY_NORMAL;

    if (gTrainers[difficulty][trainerId].party == NULL)
        return DIFFICULTY_NORMAL;

    return difficulty;
}

void Script_IncreaseDifficulty(struct ScriptContext *ctx)
{
    u32 currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (currentDifficulty++ > DIFFICULTY_MAX)
        return;

    SetCurrentDifficulty(currentDifficulty);
}

void Script_DecreaseDifficulty(struct ScriptContext *ctx)
{
    u32 currentDifficulty;

    if (!B_VAR_DIFFICULTY)
        return;

    currentDifficulty = GetCurrentDifficultyLevel();

    if (!currentDifficulty)
        return;

    SetCurrentDifficulty(--currentDifficulty);
}

void Script_GetDifficulty(struct ScriptContext *ctx)
{
    gSpecialVar_Result = GetCurrentDifficultyLevel();
}

void Script_SetDifficulty(struct ScriptContext *ctx)
{
    u32 desiredDifficulty = ScriptReadByte(ctx);

    SetCurrentDifficulty(desiredDifficulty);
}
