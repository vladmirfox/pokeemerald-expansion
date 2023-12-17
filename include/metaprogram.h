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

/* Expands to the first/second/third/fourth argument. */
#define FIRST(a, ...) a
#define SECOND(a, b, ...) b
#define THIRD(a, b, c, ...) c
#define FOURTH(a, b, c, d, ...) d

/* 'UNPACK (x, y, z)' expands to 'x, y, z'.
 * Useful for passing arguments which may contain commas into a macro. */
#define UNPACK(...) __VA_ARGS__

/* Expands to 'macro(...args, ...)'. */
#define INVOKE_WITH(macro, args, ...) INVOKE_WITH_(macro, UNPACK args __VA_OPT__(, __VA_ARGS__))
#define INVOKE_WITH_(macro, ...) macro(__VA_ARGS__)

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

#endif
