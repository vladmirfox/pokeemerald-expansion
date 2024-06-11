#ifndef GUARD_ROAMER_H
#define GUARD_ROAMER_H

void ClearRoamerData(void);
void ClearRoamerLocationData(void);
void InitRoamer(void);
void UpdateLocationHistoryForRoamer(void);
void RoamerMoveToOtherLocationSet(u8 roamerIndex);
void RoamerMove(u8 roamerIndex);
bool8 IsRoamerAt(u8 roamerIndex, u8 mapGroup, u8 mapNum);
void CreateRoamerMonInstance(u8 roamerIndex);
u8 TryStartRoamerEncounter(void);
void UpdateRoamerHPStatus(struct Pokemon *mon);
void SetRoamerInactive(u8 roamerIndex);
void GetRoamerLocation(u8 roamerIndex, u8 *mapGroup, u8 *mapNum);

extern u8 gEncounteredRoamerIndex;

#endif // GUARD_ROAMER_H
