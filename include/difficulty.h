#ifndef GUARD_DIFFICULTY_H
#define GUARD_DIFFICULTY_H

#include "constants/difficulty.h"
#include "script.h"

u32 GetCurrentDifficultyLevel(void);
void SetCurrentDifficultyLevel(u32);

u32 GetBattlePartnerDifficultyLevel(u16);
u32 GetTrainerDifficultyLevel(u16);
void Script_IncreaseDifficulty(struct ScriptContext *);
void Script_DecreaseDifficulty(struct ScriptContext *);
void Script_GetDifficulty(struct ScriptContext *);
void Script_SetDifficulty(struct ScriptContext *);

#endif // GUARD_DIFFICULTY_H
