#ifndef GUARD_TYPE_ICONS_H
#define GUARD_TYPE_ICONS_H

void TryLoadTypeIcons(u32 battler);

#define TYPE_ICON_TAG 0x2720
#define TYPE_ICON_TAG_2 0x2721

#define BATTLER_ALIVE(bank) (gBattleMons[bank].hp > 0)
#define SIDE(bank) GetBattlerSide(bank)

#endif // GUARD_TYPE_ICONS_H
