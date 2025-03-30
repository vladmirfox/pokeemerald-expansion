#ifndef GUARD_FRONTIER_UTIL_H
#define GUARD_FRONTIER_UTIL_H

void CallFrontierUtilFunc(void);
u8 GetFrontierBrainStatus(void);
void CopyFrontierTrainerText(u8 whichText, u16 trainerId);
void ResetWinStreaks(void);
u32 GetCurrentFacilityWinStreak(void);
void ResetFrontierTrainerIds(void);
u8 GetPlayerSymbolCountForFacility(u8 facility);
void ShowRankingHallRecordsWindow(void);
void ScrollRankingHallRecordsWindow(void);
void ClearRankingHallRecords(void);
void SaveGameFrontier(void);
u8 GetFrontierBrainTrainerPicIndex(void);
u8 GetFrontierBrainTrainerClass(void);
void CopyFrontierBrainTrainerName(u8 *dst);
bool8 IsFrontierBrainFemale(void);
void SetFrontierBrainObjEventGfx_2(void);
void CreateFrontierBrainPokemon(void);
u16 GetFrontierBrainMonSpecies(u8 monId);
void SetFrontierBrainObjEventGfx(u8 facility);
u16 GetFrontierBrainMonMove(u8 monId, u8 moveSlotId);
u8 GetFrontierBrainMonNature(u8 monId);
u8 GetFrontierBrainMonEvs(u8 monId, u8 evStatId);
s32 GetFronterBrainSymbol(void);
void ClearEnemyPartyAfterChallenge(void);
bool8 IsFrontierTrainerFemale(u16 trainerId);
u8 GetFrontierTrainerFixedIvs(u16 trainerId);
u16 GetRandomScaledFrontierTrainerId(u8 challengeNum, u8 battleNum);
void SetBattleFacilityTrainerGfxId(u16 trainerId, u8 tempVarId);
u16 GetBattleFacilityTrainerGfxId(u16 trainerId);
u8 GetFrontierTrainerFrontSpriteId(u16 trainerId);
u8 GetFrontierOpponentClass(u16 trainerId);
u8 GetFrontierTrainerFacilityClass(u16 trainerId);
void GetFrontierTrainerName(u8 *dst, u16 trainerId);
u16 GetRandomFrontierMonFromSet(u16 trainerId);
void FrontierSpeechToString(const u16 *words);
u8 SetFacilityPtrsGetLevel(void);
u8 GetFrontierEnemyMonLevel(u8 lvlMode);
s32 GetHighestLevelInPlayerParty(void);
u16 FacilityClassToGraphicsId(u8 facilityClass);

#endif // GUARD_FRONTIER_UTIL_H
