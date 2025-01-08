#ifndef GUARD_TRAINER_SLIDE_H
#define GUARD_TRAINER_SLIDE_H

#include "constants/trainer_slide.h"

bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 slideType);
bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32 trainerId, u32 firstId, u32 lastId, u32 battler);
bool32 ShouldRunTrainerSlideLastLowHp(enum DifficultyLevel difficulty, u32, u32 firstId, u32 lastId, u32 battler);
bool32 ShouldRunTrainerSlidePlayerLandsFirstDown(enum DifficultyLevel difficulty, u32,u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideLastHalfHP(enum DifficultyLevel difficulty, u32,u32 battler, u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlidePlayerLandsFirstCriticalHit(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlidePlayerLandsFirstSuperEffectiveHit(enum DifficultyLevel difficulty, u32,u32 battler);
bool32 ShouldRunTrainerSlidePlayerLandsFirstSTABMove(enum DifficultyLevel difficulty, u32,u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideEnemyMonUnaffected(enum DifficultyLevel difficulty, u32, u32 firstId, u32 lastId);
bool32 ShouldRunTrainerSlideMegaEvolution(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideZMove(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideDynamax(enum DifficultyLevel difficulty, u32);
bool32 ShouldRunTrainerSlideBeforeFirstTurn(enum DifficultyLevel difficulty, u32);
void TryInitalizeFirstSTABMoveTrainerSlide(bool32, u32, u32, u32);

#endif // GUARD_TRAINER_SLIDE_H
