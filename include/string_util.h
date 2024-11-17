#ifndef GUARD_STRING_UTIL_H
#define GUARD_STRING_UTIL_H

#define BADNESS_UNFILLED    1       //  Badness added per pixel diff from max width
#define BADNESS_JAGGED      1       //  Badness added per pixel diff from longest, squared per line
#define BADNESS_RUNT        100     //  Badness added if there's a runt
#define BADNESS_OVERFLOW    100     //  Badness added per pixel overflow, squared per line (not used)
#define BADNESS_WIDE_SPACE  1       //  Badness added per extra pixel width (not used)
#define MAX_SPACE_WIDTH     5

extern u8 gStringVar1[0x100];
extern u8 gStringVar2[0x100];
extern u8 gStringVar3[0x100];
extern u8 gStringVar4[0x3E8];

enum StringConvertMode
{
    STR_CONV_MODE_LEFT_ALIGN,
    STR_CONV_MODE_RIGHT_ALIGN,
    STR_CONV_MODE_LEADING_ZEROS
};

struct SubString {
    u16 startIndex;
    u16 length;
};

struct StringWord {
    u32 startIndex:16;
    u32 length:8;
    u32 width:8;
};

struct StringLine {
    struct StringWord *words;
    u16 numWords;
    u8 spaceWidth;
    u8 extraSpaceWidth;
};

u8 *StringCopy_Nickname(u8 *dest, const u8 *src);
u8 *StringGet_Nickname(u8 *str);
u8 *StringCopy_PlayerName(u8 *dest, const u8 *src);
u8 *StringCopy(u8 *dest, const u8 *src);
u8 *StringAppend(u8 *dest, const u8 *src);
u8 *StringCopyN(u8 *dest, const u8 *src, u8 n);
u8 *StringAppendN(u8 *dest, const u8 *src, u8 n);
u16 StringLength(const u8 *str);
u16 StringLineLength(const u8 *str);
s32 StringCompare(const u8 *str1, const u8 *str2);
s32 StringCompareN(const u8 *str1, const u8 *str2, u32 n);
bool8 IsStringLengthAtLeast(const u8 *str, s32 n);
u8 *ConvertIntToDecimalStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 *ConvertUIntToDecimalStringN(u8 *dest, u32 value, enum StringConvertMode mode, u8 n);
u8 *ConvertIntToHexStringN(u8 *dest, s32 value, enum StringConvertMode mode, u8 n);
u8 *StringExpandPlaceholders(u8 *dest, const u8 *src);
u8 *StringBraille(u8 *dest, const u8 *src);
const u8 *GetExpandedPlaceholder(u32 id);
u8 *StringFill(u8 *dest, u8 c, u16 n);
u8 *StringCopyPadded(u8 *dest, const u8 *src, u8 c, u16 n);
u8 *StringFillWithTerminator(u8 *dest, u16 n);
u8 *StringCopyN_Multibyte(u8 *dest, u8 *src, u32 n);
u32 StringLength_Multibyte(const u8 *str);
u8 *WriteColorChangeControlCode(u8 *dest, u32 colorType, u8 color);
bool32 IsStringJapanese(u8 *str);
bool32 IsStringNJapanese(u8 *str, s32 n);
u8 GetExtCtrlCodeLength(u8 code);
s32 StringCompareWithoutExtCtrlCodes(const u8 *str1, const u8 *str2);
void ConvertInternationalString(u8 *s, u8 language);
void StripExtCtrlCodes(u8 *str);
u8 *StringCopyUppercase(u8 *dest, const u8 *src);
void BreakStringKnuth(u8 *src, u32 maxWidth, u8 screenLines, u8 fontId);
void BreakSubStringKnuth(u8 *src, u32 maxWidth, u8 screenLines, u8 fontId);

bool32 IsWordSplittingChar(const u8 *src, u16 *index);
u32 GetStringBadness(struct StringLine *stringLines, u16 numLines, u16 maxWidth);
void BuildNewString(struct StringLine *stringLines, u16 numLines, u16 maxLines, u8 *str);
bool32 StringHasManualBreaks(u8 *src);

#endif // GUARD_STRING_UTIL_H
