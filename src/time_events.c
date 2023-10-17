#include "global.h"
#include "time_events.h"
#include "event_data.h"
#include "field_weather.h"
#include "pokemon.h"
#include "random.h"
#include "overworld.h"
#include "rtc.h"
#include "script.h"
#include "task.h"

const u16 sHiddenGrottoVars[NUM_GROTTO_VARS] =
{
    VAR_HIDDEN_GROTTO_ROUTE_103, VAR_HIDDEN_GROTTO_ROUTE_116, VAR_HIDDEN_GROTTO_ROUTE_117, VAR_HIDDEN_GROTTO_ROUTE_112, 
    VAR_HIDDEN_GROTTO_ROUTE_119, VAR_HIDDEN_GROTTO_ROUTE_121, VAR_HIDDEN_GROTTO_ROUTE_115, VAR_HIDDEN_GROTTO_ROUTE_123,
    VAR_HIDDEN_GROTTO_PETALBURG_WOODS
};

static u32 GetMirageRnd(void)
{
    u32 hi = VarGet(VAR_MIRAGE_RND_H);
    u32 lo = VarGet(VAR_MIRAGE_RND_L);
    return (hi << 16) | lo;
}

static void SetMirageRnd(u32 rnd)
{
    VarSet(VAR_MIRAGE_RND_H, rnd >> 16);
    VarSet(VAR_MIRAGE_RND_L, rnd);
}

// unused
void InitMirageRnd(void)
{
    SetMirageRnd((Random() << 16) | Random());
}

void UpdateMirageRnd(u16 days)
{
    s32 rnd = GetMirageRnd();
    while (days)
    {
        rnd = ISO_RANDOMIZE2(rnd);
        days--;
    }
    SetMirageRnd(rnd);
}

bool8 IsMirageIslandPresent(void)
{
    u16 rnd = GetMirageRnd() >> 16;
    int i;

    for (i = 0; i < PARTY_SIZE; i++)
        if (GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) && (GetMonData(&gPlayerParty[i], MON_DATA_PERSONALITY) & 0xFFFF) == rnd)
            return TRUE;

    return FALSE;
}

void UpdateShoalTideFlag(void)
{
    static const u8 tide[] =
    {
        1, // 00
        1, // 01
        1, // 02
        0, // 03
        0, // 04
        0, // 05
        0, // 06
        0, // 07
        0, // 08
        1, // 09
        1, // 10
        1, // 11
        1, // 12
        1, // 13
        1, // 14
        0, // 15
        0, // 16
        0, // 17
        0, // 18
        0, // 19
        0, // 20
        1, // 21
        1, // 22
        1, // 23
    };

    if (IsMapTypeOutdoors(GetLastUsedWarpMapType()))
    {
        RtcCalcLocalTime();
        if (tide[gLocalTime.hours])
            FlagSet(FLAG_SYS_SHOAL_TIDE);
        else
            FlagClear(FLAG_SYS_SHOAL_TIDE);
    }
}

static void Task_WaitWeather(u8 taskId)
{
    if (IsWeatherChangeComplete())
    {
        ScriptContext_Enable();
        DestroyTask(taskId);
    }
}

void WaitWeather(void)
{
    CreateTask(Task_WaitWeather, 80);
}

void InitBirchState(void)
{
    *GetVarPointer(VAR_BIRCH_STATE) = 0;
}

void UpdateBirchState(u16 days)
{
    u16 *state = GetVarPointer(VAR_BIRCH_STATE);
    *state += days;
    *state %= 7;
}

bool8 GetGrottoWarpId(void)
{
    u8 flagsSet = 0;
    u8 i;
    int result;
    int j;
    bool8 isUnique = FALSE;

    for (i = 0; i < NUM_SOFT_CAPS; i++)
    {
        if (FlagGet(sLevelCapFlags[i]))
        {
            flagsSet++;
        }
    }

    result = (flagsSet * 27) / 9 + 3;

    for (i = 0; i < NUM_GROTTO_VARS; i++)
    {
        if (result == VarGet(sHiddenGrottoVars[i]))
        {
            while (1)
            {
                result = (Random() % result) + 1;
                isUnique = TRUE;
                for (j = 0; j < NUM_GROTTO_VARS; j++)
                {
                    if (result == VarGet(sHiddenGrottoVars[j]))
                    {
                        isUnique = FALSE;
                        break;
                    }
                }
                if (isUnique)
                    break;
            }
        }
    }

    return result;
}
