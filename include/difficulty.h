#ifndef GUARD_DIFFICULTY_H
#define GUARD_DIFFICULTY_H

u32 GetCurrentDifficultyLevel(void);
u32 GetBattlePartnerDifficultyLevel(u16);
u32 GetTrainerDifficultyLevel(u16);

enum DifficultyLevel
{
    DIFFICULTY_EASY,
    DIFFICULTY_NORMAL,
    DIFFICULTY_HARD,
    DIFFICULTY_COUNT,
};

#endif // GUARD_DIFFICULTY_H
