/* Macros to aid with metaprogramming. */
#ifndef METAPROGRAM_H
#define METAPROGRAM_H

/* Calls m0/m1/.../m8 depending on how many arguments are passed. */
#define VARARG_8(m, ...) CAT(m, NARG_8(__VA_ARGS__))(__VA_ARGS__)

/* Returns the number of arguments passed to it (up to 8). */
#define NARG_8(...) NARG_8_(_, ##__VA_ARGS__, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define NARG_8_(_, a, b, c, d, e, f, g, h, N, ...) N

/* Expands 'a' and 'b' and then concatenates them. */
#define CAT(a, b) CAT_(a, b)
#define CAT_(a, b) a ## b

/* Expands '__VA_ARGS__' and then stringizes them. */
#define STR(...) STR_(__VA_ARGS__)
#define STR_(...) #__VA_ARGS__

/* Converts a string to a compound literal, essentially making it a pointer to const u8 */
#define COMPOUND_STRING(str) (const u8[]) _(str)

/* Expands to the first/second/third/fourth argument (if it exists) */
#define FIRST(a, ...) a
#define SECOND(a, ...) __VA_OPT__(FIRST(__VA_ARGS__))
#define THIRD(a, ...) __VA_OPT__(SECOND(__VA_ARGS__))
#define FOURTH(a, ...) __VA_OPT__(THIRD(__VA_ARGS__))

/* Expands to everything but the first x arguments */
#define EXCEPT_1(a, ...) __VA_OPT__(__VA_ARGS__)
#define EXCEPT_2(a, ...) __VA_OPT__(EXCEPT_1(__VA_ARGS__))
#define EXCEPT_3(a, ...) __VA_OPT__(EXCEPT_2(__VA_ARGS__))
#define EXCEPT_4(a, ...) __VA_OPT__(EXCEPT_3(__VA_ARGS__))

/* Picks the xth VA_ARG if it exists, otherwise returns a default value */
#define DEFAULT(_default, ...) FIRST(__VA_OPT__(__VA_ARGS__, ) _default)
#define DEFAULT_2(_default, ...) DEFAULT(_default __VA_OPT__(, SECOND(__VA_ARGS__)))
#define DEFAULT_3(_default, ...) DEFAULT(_default __VA_OPT__(, THIRD(__VA_ARGS__)))
#define DEFAULT_4(_default, ...) DEFAULT(_default __VA_OPT__(, FOURTH(__VA_ARGS__)))

/* 'UNPACK (x, y, z)' expands to 'x, y, z'.
 * Useful for passing arguments which may contain commas into a macro. */
#define UNPACK(...) __VA_ARGS__

/* Expands to 'macro(...args, ...)'. */
#define INVOKE_WITH(macro, args, ...) INVOKE(macro, UNPACK args __VA_OPT__(, __VA_ARGS__))
#define INVOKE(macro, ...) macro(__VA_ARGS__)
#define INVOKE_() INVOKE

/* Recursive macros.
 * Based on https://www.scs.stanford.edu/~dm/blog/va-opt.html
 *
 * Macros prefixed with R_ are recursive, to correctly expand them the
 * top-level macro which references them should use 'RECURSIVELY' around
 * them. 'RECURSIVELY' cannot be nested, hence the top-level macro must
 * use it so that a recursive macro is able to reference another
 * recursive macro. */

#define RECURSIVELY(...) RECURSIVELY_4(RECURSIVELY_4(RECURSIVELY_4(RECURSIVELY_4(__VA_ARGS__))))
#define RECURSIVELY_4(...) RECURSIVELY_3(RECURSIVELY_3(RECURSIVELY_3(RECURSIVELY_3(__VA_ARGS__))))
#define RECURSIVELY_3(...) RECURSIVELY_2(RECURSIVELY_2(RECURSIVELY_2(RECURSIVELY_2(__VA_ARGS__))))
#define RECURSIVELY_2(...) RECURSIVELY_1(RECURSIVELY_1(RECURSIVELY_1(RECURSIVELY_1(__VA_ARGS__))))
#define RECURSIVELY_1(...) __VA_ARGS__

/* Useful for deferring expansion until the second scan. See
 * https://www.scs.stanford.edu/~dm/blog/va-opt.html for more info. */
#define PARENS ()

/* Expands to 'macro(a)' for each 'a' in '...' */
#define R_FOR_EACH(macro, ...) __VA_OPT__(R_FOR_EACH_(macro, __VA_ARGS__))
#define R_FOR_EACH_(macro, a, ...) macro(a) __VA_OPT__(R_FOR_EACH_P PARENS (macro, __VA_ARGS__))
#define R_FOR_EACH_P() R_FOR_EACH_

/* Expands to 'macro(...args, a)' for each 'a' in '...'. */
#define R_FOR_EACH_WITH(macro, args, ...) __VA_OPT__(R_FOR_EACH_WITH_(macro, args, __VA_ARGS__))
#define R_FOR_EACH_WITH_(macro, args, a, ...) INVOKE_WITH(macro, args, a) __VA_OPT__(R_FOR_EACH_WITH_P PARENS (macro, args, __VA_ARGS__))
#define R_FOR_EACH_WITH_P() R_FOR_EACH_WITH_

/* current gen = 1*/
#define CONFIG_BY_DEFINE_0_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_0_GTOE_1(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_2(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_3(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_4(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_5(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_0_GTOE_8(a, b) b

/* current gen = 2 */
#define CONFIG_BY_DEFINE_1_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_1_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_1_GTOE_2(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_3(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_4(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_5(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_1_GTOE_8(a, b) b

/* current gen = 3 */
#define CONFIG_BY_DEFINE_2_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_2_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_2_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_2_GTOE_3(a, b) b
#define CONFIG_BY_DEFINE_2_GTOE_4(a, b) b
#define CONFIG_BY_DEFINE_2_GTOE_5(a, b) b
#define CONFIG_BY_DEFINE_2_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_2_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_2_GTOE_8(a, b) b

/* current gen = 4 */
#define CONFIG_BY_DEFINE_3_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_3_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_3_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_3_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_3_GTOE_4(a, b) b
#define CONFIG_BY_DEFINE_3_GTOE_5(a, b) b
#define CONFIG_BY_DEFINE_3_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_3_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_3_GTOE_8(a, b) b

/* current gen = 5 */
#define CONFIG_BY_DEFINE_4_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_4_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_4_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_4_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_4_GTOE_4(a, b) a
#define CONFIG_BY_DEFINE_4_GTOE_5(a, b) b
#define CONFIG_BY_DEFINE_4_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_4_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_4_GTOE_8(a, b) b

/* current gen = 6 */
#define CONFIG_BY_DEFINE_5_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_4(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_5(a, b) a
#define CONFIG_BY_DEFINE_5_GTOE_6(a, b) b
#define CONFIG_BY_DEFINE_5_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_5_GTOE_8(a, b) b

/* current gen = 7 */
#define CONFIG_BY_DEFINE_6_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_4(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_5(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_6(a, b) a
#define CONFIG_BY_DEFINE_6_GTOE_7(a, b) b
#define CONFIG_BY_DEFINE_6_GTOE_8(a, b) b

/* current gen = 8 */
#define CONFIG_BY_DEFINE_7_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_4(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_5(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_6(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_7(a, b) a
#define CONFIG_BY_DEFINE_7_GTOE_8(a, b) b

/* current gen = 9 */
#define CONFIG_BY_DEFINE_8_GTOE_0(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_1(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_2(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_3(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_4(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_5(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_6(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_7(a, b) a
#define CONFIG_BY_DEFINE_8_GTOE_8(a, b) a

/* A "simple" macro that lets you define values by a config where a ternary wouldn't work
Can be read from left to right as (define >= target ? val : val2)
Define and target are compared on a "greater than or equal" (GTOE) basis and no other */
#define CONFIG_BY_DEFINE(define, target, val1, val2) CONFIG_BY_DEFINE_(define, target)(val1, val2)
#define CONFIG_BY_DEFINE_(define, target) CONFIG_BY_DEFINE_ ## define ## _GTOE_ ## target

/* Similar but check for TRUE or FALSE - only works for booleans */
#define CONFIG_BY_DEFINE_TRUE(define, val1, val2) CONFIG_BY_DEFINE_EQ_(define, 1)(val1, val2)
#define CONFIG_BY_DEFINE_FALSE(define, val1, val2) CONFIG_BY_DEFINE_EQ_(define, 0)(val1, val2)
#define CONFIG_BY_DEFINE_EQ_(define, target) CONFIG_BY_DEFINE_ ## define ## _EQ_ ## target
#define CONFIG_BY_DEFINE_1_EQ_0(a, b) b
#define CONFIG_BY_DEFINE_1_EQ_1(a, b) a
#define CONFIG_BY_DEFINE_0_EQ_0(a, b) a
#define CONFIG_BY_DEFINE_0_EQ_1(a, b) b

/* Lets you define values that vary across generations without needing a ternary
You should use it by defining CONFIG_BY_GEN in each file where you want to use it
along with the relevant constant e.g. for moves_info.h:
#define CONFIG_BY_GEN(...) CONFIG_BY_GEN_DEFINE(B_UPDATED_MOVE_DATA, __VA_ARGS__) */
#define CONFIG_BY_GEN_DEFINE(define, ...) VARARG_8(CONFIG_BY_GEN_DEFINE_, define, __VA_ARGS__)
#define CONFIG_BY_GEN_DEFINE_3(define, base, tuple) INVOKE(CONFIG_BY_DEFINE, define, UNPACK tuple, base)
#define CONFIG_BY_GEN_DEFINE_4(define, base, tuple1, tuple2) INVOKE(CONFIG_BY_GEN_DEFINE_4_UNPACKED, define, base, UNPACK tuple1, UNPACK tuple2)
#define CONFIG_BY_GEN_DEFINE_4_UNPACKED(define, base, target1, value1, target2, value2) CONFIG_BY_DEFINE_(define, target1)(CONFIG_BY_DEFINE_(define, target2)(value2, value1), base)
#define CONFIG_BY_GEN_DEFINE_5(define, base, tuple1, tuple2, tuple3) INVOKE(CONFIG_BY_GEN_DEFINE_5_UNPACKED, define, base, UNPACK tuple1, UNPACK tuple2, UNPACK tuple3)
#define CONFIG_BY_GEN_DEFINE_5_UNPACKED(define, base, target1, value1, target2, value2, target3, value3) CONFIG_BY_DEFINE_(define, target1)(CONFIG_BY_DEFINE_(define, target2)(CONFIG_BY_DEFINE_(define, target3)(value3, value2), value1), base)

/* (Credit to MGriffin) A rather monstrous way of finding the set bit in a word.
Invalid input causes a compiler error. Sample: https://cexplore.karathan.at/z/x1hm7B */
#define BIT_INDEX(n) \
    (n) == (1 << 0) ? 0 : \
    (n) == (1 << 1) ? 1 : \
    (n) == (1 << 2) ? 2 : \
    (n) == (1 << 3) ? 3 : \
    (n) == (1 << 4) ? 4 : \
    (n) == (1 << 5) ? 5 : \
    (n) == (1 << 6) ? 6 : \
    (n) == (1 << 7) ? 7 : \
    (n) == (1 << 8) ? 8 : \
    (n) == (1 << 9) ? 9 : \
    (n) == (1 << 10) ? 10 : \
    (n) == (1 << 11) ? 11 : \
    (n) == (1 << 12) ? 12 : \
    (n) == (1 << 13) ? 13 : \
    (n) == (1 << 14) ? 14 : \
    (n) == (1 << 15) ? 15 : \
    (n) == (1 << 16) ? 16 : \
    (n) == (1 << 17) ? 17 : \
    (n) == (1 << 18) ? 18 : \
    (n) == (1 << 19) ? 19 : \
    (n) == (1 << 20) ? 20 : \
    (n) == (1 << 21) ? 21 : \
    (n) == (1 << 22) ? 22 : \
    (n) == (1 << 23) ? 23 : \
    (n) == (1 << 24) ? 24 : \
    (n) == (1 << 25) ? 25 : \
    (n) == (1 << 26) ? 26 : \
    (n) == (1 << 27) ? 27 : \
    (n) == (1 << 28) ? 28 : \
    (n) == (1 << 29) ? 29 : \
    (n) == (1 << 30) ? 30 : \
    (n) == (1 << 31) ? 31 : \
    *(u32 *)NULL

#define COMPRESS_BITS_0 0, 1
#define COMPRESS_BITS_1 1, 1
#define COMPRESS_BITS_2 2, 1
#define COMPRESS_BITS_3 3, 1
#define COMPRESS_BITS_4 4, 1
#define COMPRESS_BITS_5 5, 1
#define COMPRESS_BITS_6 6, 1
#define COMPRESS_BITS_7 7, 1

/* Will try and compress a set bit (or up to three sequential bits) into a single byte
Input must be of the form (upper << lower) where upper can be up to 3, lower up to 31 */
#define COMPRESS_BITS(_val) COMPRESS_BITS_STEP_2 _val
#define COMPRESS_BITS_STEP_2(_unpacked) COMPRESS_BITS_STEP_3(COMPRESS_BITS_## _unpacked)
#define COMPRESS_BITS_STEP_3(...) COMPRESS_BITS_STEP_4(__VA_ARGS__)
#define COMPRESS_BITS_STEP_4(upper, lower) (((upper % 8) << 5) + (BIT_INDEX(lower)))

/* Will read a compressed bit stored by COMPRESS_BIT into a single byte */
#define UNCOMPRESS_BITS(compressed) ((compressed >> 5) << (compressed & 0x1F))

#endif
