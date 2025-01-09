#ifndef GUARD_TRAINER_SLIDE_H
#define GUARD_TRAINER_SLIDE_H

#include "constants/trainer_slide.h"

struct MessageStatus
{
    u32 messageInitalized;
    u32 messagePlayed;
};

void TryInitalizeTrainerSlidePlayerLandsFirstSuperEffectiveHit(u32 target, u32 stringId);
void TryInitalizeTrainerSlidePlayerLandsFirstCriticalHit(u32 target);
void TryInitalizeTrainerSlideEnemyMonUnaffected(u32 target, u32 stringId);
void TryInitalizeFirstSTABMoveTrainerSlide(bool32 recordAbilities, u32 battlerDef, u32 battlerAtk, u32 moveType);
bool32 IsTrainerSlideInitialized(enum TrainerSlideType slideId);
bool32 IsTrainerSlidePlayed(enum TrainerSlideType slideId);
void InitalizeTrainerSlide(enum TrainerSlideType slideId);
void MarkTrainerSlideAsPlayed(enum TrainerSlideType slideId);
bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel, u32, u32);
void TryInitalizeFirstSTABMoveTrainerSlide(bool32, u32, u32, u32);
bool32 DoesTrainerHaveSlideMessage(enum DifficultyLevel difficulty, u32 trainerId, u32 slideType);
enum TrainerSlideTargets ShouldDoTrainerSlide(u32 battler, enum TrainerSlideType slideId);
#endif // GUARD_TRAINER_SLIDE_H
