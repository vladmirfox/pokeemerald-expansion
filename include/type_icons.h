#ifndef GUARD_TYPE_ICONS_H
#define GUARD_TYPE_ICONS_H

void TryLoadTypeIcons(u32 battler);

#define TYPE_ICON_TAG 0x2720
#define TYPE_ICON_TAG_2 0x2721

#define BATTLER_ALIVE(battler) (gBattleMons[battler].hp > 0)

#endif // GUARD_TYPE_ICONS_H
