#ifndef GUARD_TYPE_ICONS_H
#define GUARD_TYPE_ICONS_H

struct Pokemon* GetBankPartyData(u8 bank);
u8 GetMonType(struct Pokemon* mon, u8 typeId);
void TryLoadTypeIcons(u32 battler);

#endif // GUARD_TYPE_ICONS_H
