#ifndef GUARD_TRAINER_SLIDE_H
#define GUARD_TRAINER_SLIDE_H

#include "constants/trainer_slide.h"

struct TrainerSlide
{
    const u8 *msgBeforeFirstTurn;
    const u8 *msgFirstCriticalHit;
    const u8 *msgFirstSuperEffectiveHit;
    const u8 *msgFirstSTABMove;
    const u8 *msgFirstDown;
    const u8 *msgPlayerMonUnaffected;
    const u8 *msgLastSwitchIn;
    const u8 *msgLastHalfHp;
    const u8 *msgLastLowHp;
    const u8 *msgMegaEvolution;
    const u8 *msgZMove;
    const u8 *msgDynamax;
};

bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 slideType);
bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId, u32 battler);
bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32, u32 firstId, u32 lastId, u32 battler);
bool32 ShouldRunTrainerSlideFirstDown(enum DifficultyLevel difficulty, u32,u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32,u32 battler, u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideFirstCriticalHit(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32,u32 battler);
bool32 ShouldRunTrainerSlideFirstSTABMove(enum DifficultyLevel difficulty, u32,u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlidePlayMonUnaffected(enum DifficultyLevel difficulty, u32, u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32);


#endif // GUARD_TRAINER_SLIDE_H
