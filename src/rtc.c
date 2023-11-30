#include "global.h"
#include "rtc.h"
#include "string_util.h"
#include "text.h"

// iwram bss
static u16 sErrorStatus;
static struct SiiRtcInfo sRtc;
static u8 sProbeResult;
static u16 sSavedIme;

// iwram common
struct Time gLocalTime;

// const rom

static const struct SiiRtcInfo sRtcDummy = {0, MONTH_JAN, 1}; // 2000 Jan 1

static const s32 sNumDaysInMonths[12] =
{
    31,
    28,
    31,
    30,
    31,
    30,
    31,
    31,
    30,
    31,
    30,
    31,
};

struct Time* GetFakeRtc(void)
{
    return &gSaveBlock2Ptr->fakeRTC;
}

void RtcDisableInterrupts(void)
{
    sSavedIme = REG_IME;
    REG_IME = 0;
}

void RtcRestoreInterrupts(void)
{
    REG_IME = sSavedIme;
}

u32 ConvertBcdToBinary(u8 bcd)
{
    if (bcd > 0x9F)
        return 0xFF;

    if ((bcd & 0xF) <= 9)
        return (10 * ((bcd >> 4) & 0xF)) + (bcd & 0xF);
    else
        return 0xFF;
}

bool8 IsLeapYear(u32 year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return TRUE;

    return FALSE;
}

u16 ConvertDateToDayCount(u8 year, u8 month, u8 day)
{
    s32 i;
    u16 dayCount = 0;

    for (i = year - 1; i >= 0; i--)
    {
        dayCount += 365;

        if (IsLeapYear(i) == TRUE)
            dayCount++;
    }

    for (i = 0; i < month - 1; i++)
        dayCount += sNumDaysInMonths[i];

    if (month > MONTH_FEB && IsLeapYear(year) == TRUE)
        dayCount++;

    dayCount += day;

    return dayCount;
}

u16 RtcGetDayCount(struct SiiRtcInfo *rtc)
{
    return rtc->day;
}

void RtcInit(void)
{

}

u16 RtcGetErrorStatus(void)
{
    return 0;
}

void RtcGetInfo(struct SiiRtcInfo *rtc)
{
    struct Time* time = GetFakeRtc();
    rtc->second = time->seconds;
    rtc->minute = time->minutes;
    rtc->hour = time->hours;
    rtc->day = time->days;
}

void RtcGetDateTime(struct SiiRtcInfo *rtc)
{
    RtcDisableInterrupts();
    SiiRtcGetDateTime(rtc);
    RtcRestoreInterrupts();
}

void RtcGetStatus(struct SiiRtcInfo *rtc)
{
    RtcDisableInterrupts();
    SiiRtcGetStatus(rtc);
    RtcRestoreInterrupts();
}

void RtcGetRawInfo(struct SiiRtcInfo *rtc)
{
    RtcGetStatus(rtc);
    RtcGetDateTime(rtc);
}

u16 RtcCheckInfo(struct SiiRtcInfo *rtc)
{
    return 0;
}

void RtcReset(void)
{
    memset(GetFakeRtc(), 0, sizeof(struct Time));
}

void FormatDecimalTime(u8 *dest, s32 hour, s32 minute, s32 second)
{
    dest = ConvertIntToDecimalStringN(dest, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToDecimalStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToDecimalStringN(dest, second, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexTime(u8 *dest, s32 hour, s32 minute, s32 second)
{
    dest = ConvertIntToHexStringN(dest, hour, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToHexStringN(dest, minute, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_COLON;
    dest = ConvertIntToHexStringN(dest, second, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexRtcTime(u8 *dest)
{
    FormatHexTime(dest, sRtc.hour, sRtc.minute, sRtc.second);
}

void FormatDecimalDate(u8 *dest, s32 year, s32 month, s32 day)
{
    dest = ConvertIntToDecimalStringN(dest, year, STR_CONV_MODE_LEADING_ZEROS, 4);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToDecimalStringN(dest, month, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToDecimalStringN(dest, day, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void FormatHexDate(u8 *dest, s32 year, s32 month, s32 day)
{
    dest = ConvertIntToHexStringN(dest, year, STR_CONV_MODE_LEADING_ZEROS, 4);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToHexStringN(dest, month, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest++ = CHAR_HYPHEN;
    dest = ConvertIntToHexStringN(dest, day, STR_CONV_MODE_LEADING_ZEROS, 2);
    *dest = EOS;
}

void RtcCalcTimeDifference(struct SiiRtcInfo *rtc, struct Time *result, struct Time *t)
{
    u16 days = RtcGetDayCount(rtc);
    result->seconds = rtc->second - t->seconds;
    result->minutes = rtc->minute - t->minutes;
    result->hours = rtc->hour - t->hours;
    result->days = days - t->days;

    if (result->seconds < 0)
    {
        result->seconds += 60;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += 60;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += 24;
        --result->days;
    }
}

void RtcCalcLocalTime(void)
{
    RtcGetInfo(&sRtc);
    RtcCalcTimeDifference(&sRtc, &gLocalTime, &gSaveBlock2Ptr->localTimeOffset);
}

void RtcInitLocalTimeOffset(s32 hour, s32 minute)
{
    RtcCalcLocalTimeOffset(0, hour, minute, 0);
}

void RtcCalcLocalTimeOffset(s32 days, s32 hours, s32 minutes, s32 seconds)
{
    gLocalTime.days = days;
    gLocalTime.hours = hours;
    gLocalTime.minutes = minutes;
    gLocalTime.seconds = seconds;
    RtcGetInfo(&sRtc);
    RtcCalcTimeDifference(&sRtc, &gSaveBlock2Ptr->localTimeOffset, &gLocalTime);
}

void CalcTimeDifference(struct Time *result, struct Time *t1, struct Time *t2)
{
    result->seconds = t2->seconds - t1->seconds;
    result->minutes = t2->minutes - t1->minutes;
    result->hours = t2->hours - t1->hours;
    result->days = t2->days - t1->days;

    if (result->seconds < 0)
    {
        result->seconds += 60;
        --result->minutes;
    }

    if (result->minutes < 0)
    {
        result->minutes += 60;
        --result->hours;
    }

    if (result->hours < 0)
    {
        result->hours += 24;
        --result->days;
    }
}

u32 RtcGetMinuteCount(void)
{
    RtcGetInfo(&sRtc);
    return (24 * 60) * RtcGetDayCount(&sRtc) + 60 * sRtc.hour + sRtc.minute;
}

u32 RtcGetLocalDayCount(void)
{
    return RtcGetDayCount(&sRtc);
}

void RtcAdvanceTime(u32 hours, u32 minutes, u32 seconds)
{
    struct Time* time = GetFakeRtc();
    seconds += time->seconds;
    minutes += time->minutes;
    hours += time->hours;

    while(seconds >= 60)
    {
	    minutes++;
	    seconds -= 60;	
    }

    while(minutes >= 60)
    {
	    hours++;
	    minutes -= 60;
    }

    while(hours >= 24)
    {
	    time->days++;
	    hours -= 24;
    }

    time->seconds = seconds;
    time->minutes = minutes;
    time->hours = hours;
}

void RtcAdvanceTimeTo(u32 hour, u32 minute, u32 second)
{
    struct Time diff, target;
    RtcCalcLocalTime();
    
    target.hours = hour;
    target.minutes = minute;
    target.seconds = second;
    target.days = gLocalTime.days;
    
    CalcTimeDifference(&diff, &gLocalTime, &target);
    RtcAdvanceTime(diff.hours, diff.minutes, diff.seconds);
}