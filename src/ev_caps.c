#include "global.h"
#include "battle.h"
#include "event_data.h"
#include "ev_caps.h"
#include "pokemon.h"

u32 GetCurrentEVCap(void)
{

    static const u16 sEvCapFlagMap[][2] = {
        // Define EV caps for each milestone
        {FLAG_BADGE01_GET, 16},
        {FLAG_BADGE02_GET, 48},
        {FLAG_BADGE03_GET, 80},
        {FLAG_BADGE04_GET, 112},
        {FLAG_BADGE05_GET, 144},
        {FLAG_BADGE06_GET, 176},
        {FLAG_BADGE07_GET, 208},
        {FLAG_BADGE08_GET, 240},
        {FLAG_IS_CHAMPION, MAX_TOTAL_EVS},
    };

    u32 i;

    if (B_EV_CAP_TYPE == EV_CAP_FLAG_LIST)
    {
        for (i = 0; i < ARRAY_COUNT(sEvCapFlagMap); i++)
        {
            if (!FlagGet(sEvCapFlagMap[i][0]))
            {
                return sEvCapFlagMap[i][1];
            }
        }
    }
    else if (B_EV_CAP_TYPE == EV_CAP_VARIABLE)
    {
        return VarGet(B_EV_CAP_VARIABLE);
    }
    else if (B_EV_CAP_TYPE == EV_CAP_NO_GAIN)
    {
        return 0;
    }

    return MAX_TOTAL_EVS;
}
