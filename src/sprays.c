#include "global.h"
#include "event_data.h"
#include "script_menu.h"
#include "strings.h"
#include "constants/items.h"
#include "item.h"
#include "script_menu.h"
#include "menu.h"

#define SPRAY_COUNT 0
#define SPRAY_GET 1

#define SPRAYS_COUNT 3

#define SPRAY_MENU_Y_COORD 8

#define VAR_SPRAY gSpecialVar_0x8004
#define VAR_NUM_SPRAY_STRENGTH gSpecialVar_0x8005
#define VAR_SPRAY_TYPE gSpecialVar_0x8009
#define VAR_NEW_SPRAY gSpecialVar_0x8007

u32 CountOrGetSprays(u32);
u32 GetNumberSprayStrength(void);
u32 GetSprayId(void);
u32 GetLastUsedSprayType(void);
void PushSprayElement(u16);

u32 CountOrGetSprays(u32 func)
{
    u32 i, sprayCount = 0;
    u32 spray = GetLastUsedSprayType();
    u32 yCoord = SPRAY_MENU_Y_COORD;

    for (i = 0; i < 3; i++)
    {
        if (!CheckBagHasItem(spray+i,1))
            continue;

        switch(func)
        {
            case SPRAY_COUNT:
                sprayCount++;
                break;
            default:
                return (spray+i);
        }
    }
    VarSet(gSpecialVar_0x8008,yCoord);
    return sprayCount;
}

u32 GetNumberSprayStrength(void)
{
    return CountOrGetSprays(SPRAY_COUNT);
}

u32 GetSprayId(void)
{
    return CountOrGetSprays(SPRAY_GET);
}

u32 GetLastUsedSprayType(void)
{
    if (IS_LAST_USED_LURE(VarGet(VAR_REPEL_STEP_COUNT)))
        return ITEM_LURE;
    else
        return ITEM_REPEL;
}

u32 SetSprayMenuPosition(int currentSpray, int count)
{
    if (VarGet(VAR_LAST_REPEL_LURE_USED) == currentSpray)
        return count;

    return 0;
}


void DrawSprayMenu(void)
{
    struct MenuAction menuItems[SPRAYS_COUNT+1] = {NULL};
    int sprayIndex, count = 0, menuPos = 0, currentSpray;
    u32 yCoord = 8;
    u32 spray = GetLastUsedSprayType();

    for (sprayIndex = 0; sprayIndex < (SPRAYS_COUNT); sprayIndex++)
    {
        currentSpray = spray + sprayIndex;

        if (!CheckBagHasItem(currentSpray, 1))
            continue;

        menuItems[count].text = ItemId_GetName(currentSpray);
        VarSet(VAR_0x8004 + count, currentSpray);

        if (VAR_LAST_REPEL_LURE_USED != 0)
            menuPos = SetSprayMenuPosition(currentSpray, count);

        yCoord = SPRAY_MENU_Y_COORD - (2 * count);
        count++;
    }

    gSpecialVar_0x8003 = count;
    menuItems[count].text = gText_Cancel2;

    DrawMultichoiceMenuInternal(18, yCoord, 0, FALSE, menuPos, menuItems, count+1);
}

void HandleSprayMenuChoice(void)
{
    u32 lureMask = (GetLastUsedSprayType() == ITEM_LURE) ? REPEL_LURE_MASK : 0;

    gSpecialVar_0x8004 = VarGet(VAR_0x8004 + gSpecialVar_Result);
    VarSet(VAR_REPEL_STEP_COUNT, ItemId_GetHoldEffectParam(gSpecialVar_0x8004) | lureMask);

    if (VAR_LAST_REPEL_LURE_USED != 0)
        VarSet(VAR_LAST_REPEL_LURE_USED, gSpecialVar_0x8004);
}
