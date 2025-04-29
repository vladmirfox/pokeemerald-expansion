#ifndef GUARD_SAFARI_ZONE_H
#define GUARD_SAFARI_ZONE_H

extern u8 gNumSafariBalls;

bool32 GetSafariZoneFlag(void);
void SetSafariZoneFlag(void);
void ResetSafariZoneFlag(void);

void EnterSafariMode(void);
void ExitSafariMode(void);

bool8 SafariZoneTakeStep(void);
void SafariZoneRetirePrompt(void);

void CB2_EndSafariBattle(void);

struct Pokeblock *SafariZoneGetActivePokeblock(void);
void SafariZoneActivatePokeblockFeeder(u8 pokeblock_index);

extern u8 gNumPTBalls;

bool32 GetPTFlag(void);
void SetPTFlag(void);
void ResetPTFlag(void);

void EnterPTMode(void);
void ExitPTMode(void);

bool8 PTTakeStep(void);
void PTRetirePrompt(void);

void CB2_EndPTBattle(void);

//struct Pokeblock *SafariZoneGetActivePokeblock(void);
//void SafariZoneActivatePokeblockFeeder(u8 pokeblock_index);

#endif // GUARD_SAFARI_ZONE_H
