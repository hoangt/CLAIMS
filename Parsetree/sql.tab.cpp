/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison GLR parsers in C

      Copyright (C) 2002-2012 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 1

/* Copy the first part of user declarations.  */
/* Line 207 of glr.c  */
#line 11 "sql.ypp"

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <vector>
using namespace std;
void yyerror(struct ParseResult *pp, const char *s, ...);

/* Line 207 of glr.c  */
#line 68 "sql.tab.cpp"

#ifndef YY_NULL
#if defined __cplusplus && 201103L <= __cplusplus
#define YY_NULL nullptr
#else
#define YY_NULL 0
#endif
#endif

#include "sql.tab.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
#undef YYERROR_VERBOSE
#define YYERROR_VERBOSE 1
#else
#define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */
/* Line 230 of glr.c  */
#line 32 "sql.ypp"

///
#include "sql.lex.h"
#include "sql_node_struct.h"

#define YYLEX_PARAM result->yyscan_info_

/*
should replace YYLEX with the following clause in sql.tab.cpp, why so? I don't
know

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
#endif
*/

/* Line 230 of glr.c  */
#line 116 "sql.tab.cpp"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#define YY_(Msgid) dgettext("bison-runtime", Msgid)
#endif
#endif
#ifndef YY_
#define YY_(Msgid) Msgid
#endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if !defined lint || defined __GNUC__
#define YYUSE(E) ((void)(E))
#else
#define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
#define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ || defined __cplusplus || \
     defined _MSC_VER)
static int YYID(int i)
#else
static int YYID(i) int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
#define YYFREE free
#endif
#ifndef YYMALLOC
#define YYMALLOC malloc
#endif
#ifndef YYREALLOC
#define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t)-1)

#ifdef __cplusplus
typedef bool yybool;
#else
typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
#include <setjmp.h>
#define YYJMP_BUF jmp_buf
#define YYSETJMP(Env) setjmp(Env)
/* Pacify clang.  */
#define YYLONGJMP(Env, Val) (longjmp(Env, Val), YYASSERT(0))
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
#if (!defined __GNUC__ || __GNUC__ < 2 || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#define __attribute__(Spec) /* empty */
#endif
#endif

#ifndef YYASSERT
#define YYASSERT(Condition) ((void)((Condition) || (abort(), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL 250
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST 3372

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS 343
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS 169
/* YYNRULES -- Number of rules.  */
#define YYNRULES 616
/* YYNRULES -- Number of states.  */
#define YYNSTATES 1275
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 13
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK 2
#define YYMAXUTOK 582

#define YYTRANSLATE(YYX) \
  ((unsigned int)(YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned short int yytranslate[] = {
    0,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   17,  2,   2,   2,   28,  22,  2,   340, 341, 26,  24,  338,
    25,  339, 27,  2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   337,
    2,   2,   2,   342, 2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   30,  2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   21,  2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,   2,
    2,   1,   2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
    15,  16,  18,  19,  20,  23,  29,  31,  32,  33,  34,  35,  36,  37,  38,
    39,  40,  41,  42,  43,  44,  45,  46,  47,  48,  49,  50,  51,  52,  53,
    54,  55,  56,  57,  58,  59,  60,  61,  62,  63,  64,  65,  66,  67,  68,
    69,  70,  71,  72,  73,  74,  75,  76,  77,  78,  79,  80,  81,  82,  83,
    84,  85,  86,  87,  88,  89,  90,  91,  92,  93,  94,  95,  96,  97,  98,
    99,  100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
    114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
    129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173,
    174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188,
    189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203,
    204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218,
    219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233,
    234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
    249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263,
    264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278,
    279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293,
    294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308,
    309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323,
    324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] = {
    0,    0,    3,    6,    10,   13,   17,   19,   23,   35,   36,   39,
    40,   45,   48,   53,   54,   56,   58,   59,   62,   63,   66,   67,
    71,   72,   75,   80,   81,   84,   86,   90,   91,   94,   97,   100,
    103,  106,  109,  112,  115,  117,  121,  123,  127,  130,  132,  136,
    138,  140,  143,  148,  152,  156,  157,  159,  162,  164,  165,  171,
    175,  181,  188,  194,  195,  197,  199,  200,  202,  204,  206,  209,
    212,  213,  214,  216,  219,  224,  226,  230,  234,  236,  244,  247,
    250,  253,  254,  261,  264,  269,  270,  273,  281,  283,  292,  293,
    299,  300,  303,  306,  309,  312,  314,  315,  316,  320,  324,  330,
    332,  334,  338,  342,  350,  358,  362,  366,  372,  378,  380,  389,
    397,  405,  407,  416,  417,  420,  423,  427,  433,  439,  447,  449,
    454,  459,  460,  464,  466,  475,  486,  496,  503,  515,  524,  528,
    529,  531,  533,  534,  536,  538,  542,  546,  552,  557,  562,  568,
    574,  575,  579,  582,  586,  590,  594,  598,  601,  605,  609,  612,
    616,  622,  624,  635,  649,  652,  654,  657,  661,  663,  668,  673,
    675,  681,  683,  687,  691,  698,  702,  706,  710,  715,  718,  722,
    726,  727,  729,  730,  732,  734,  745,  746,  748,  750,  752,  753,
    756,  758,  760,  764,  770,  772,  778,  780,  785,  790,  791,  794,
    796,  803,  805,  809,  813,  819,  820,  822,  824,  826,  839,  849,
    859,  872,  874,  878,  879,  883,  891,  897,  907,  909,  913,  916,
    919,  923,  925,  928,  930,  932,  934,  937,  940,  941,  943,  948,
    949,  953,  956,  957,  960,  962,  967,  969,  974,  976,  978,  980,
    983,  989,  993,  995,  999,  1001, 1005, 1009, 1011, 1014, 1017, 1019,
    1021, 1024, 1026, 1033, 1034, 1036, 1038, 1041, 1044, 1047, 1049, 1051,
    1055, 1057, 1061, 1063, 1068, 1074, 1076, 1080, 1082, 1086, 1088, 1098,
    1100, 1104, 1106, 1109, 1111, 1113, 1115, 1117, 1119, 1121, 1123, 1125,
    1128, 1130, 1131, 1134, 1137, 1140, 1143, 1146, 1149, 1151, 1161, 1163,
    1173, 1175, 1179, 1182, 1185, 1188, 1190, 1192, 1194, 1196, 1198, 1201,
    1203, 1212, 1214, 1224, 1226, 1236, 1238, 1242, 1246, 1252, 1254, 1263,
    1264, 1267, 1269, 1274, 1275, 1277, 1279, 1281, 1287, 1289, 1294, 1295,
    1297, 1299, 1301, 1303, 1305, 1307, 1312, 1313, 1315, 1317, 1319, 1324,
    1326, 1332, 1333, 1336, 1339, 1342, 1344, 1350, 1352, 1358, 1362, 1370,
    1375, 1380, 1385, 1389, 1393, 1398, 1403, 1407, 1411, 1415, 1420, 1426,
    1430, 1434, 1440, 1443, 1447, 1452, 1458, 1463, 1468, 1473, 1477, 1481,
    1482, 1484, 1485, 1488, 1489, 1492, 1493, 1496, 1497, 1499, 1501, 1507,
    1509, 1513, 1515, 1519, 1520, 1522, 1524, 1526, 1530, 1532, 1536, 1538,
    1540, 1542, 1544, 1547, 1549, 1552, 1555, 1560, 1562, 1564, 1568, 1569,
    1571, 1573, 1575, 1581, 1585, 1590, 1591, 1594, 1596, 1599, 1601, 1605,
    1607, 1610, 1612, 1614, 1619, 1623, 1627, 1631, 1632, 1635, 1637, 1639,
    1642, 1644, 1648, 1652, 1656, 1657, 1661, 1667, 1668, 1670, 1671, 1674,
    1677, 1678, 1683, 1687, 1690, 1694, 1698, 1702, 1706, 1710, 1714, 1718,
    1722, 1726, 1730, 1732, 1734, 1736, 1738, 1740, 1744, 1750, 1753, 1758,
    1760, 1762, 1764, 1766, 1770, 1774, 1778, 1782, 1788, 1794, 1796, 1800,
    1802, 1804, 1808, 1812, 1814, 1816, 1818, 1820, 1824, 1828, 1832, 1836,
    1840, 1844, 1847, 1850, 1854, 1858, 1862, 1866, 1872, 1879, 1886, 1893,
    1897, 1901, 1905, 1909, 1912, 1915, 1919, 1923, 1927, 1932, 1936, 1941,
    1947, 1949, 1953, 1957, 1959, 1963, 1969, 1977, 1984, 1993, 1999, 2007,
    2014, 2023, 2028, 2034, 2039, 2044, 2049, 2054, 2059, 2064, 2069, 2076,
    2083, 2092, 2101, 2106, 2114, 2119, 2126, 2131, 2133, 2135, 2137, 2138,
    2140, 2142, 2144, 2146, 2148, 2155, 2162, 2166, 2170, 2174, 2178, 2182,
    2186, 2190, 2194, 2198, 2203, 2210, 2214, 2220, 2225, 2231, 2235, 2240,
    2244, 2249, 2251, 2253, 2255};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] = {
    344, 0,   -1,  345, 337, -1,  344, 345, 337, -1,  1,   337, -1,  344, 1,
    337, -1,  346, -1,  193, 357, 358, -1,  193, 357, 358, 107, 360, 347, 348,
    352, 353, 354, 355, -1,  -1,  243, 496, -1,  -1,  110, 48,  349, 351, -1,
    496, 350, -1,  496, 350, 338, 349, -1,  -1,  40,  -1,  83,  -1,  -1,  245,
    188, -1,  -1,  111, 496, -1,  -1,  163, 48,  349, -1,  -1,  136, 496, -1,
    136, 496, 338, 496, -1,  -1,  127, 356, -1,  3,   -1,  3,   338, 356, -1,
    -1,  357, 33,  -1,  357, 86,  -1,  357, 87,  -1,  357, 112, -1,  357, 212,
    -1,  357, 209, -1,  357, 207, -1,  357, 208, -1,  359, -1,  359, 338, 358,
    -1,  26,  -1,  26,  338, 358, -1,  496, 364, -1,  361, -1,  361, 338, 360,
    -1,  362, -1,  365, -1,  3,   364, -1,  3,   339, 3,   364, -1,  373, 363,
    3,   -1,  340, 360, 341, -1,  -1,  39,  -1,  39,  3,   -1,  3,   -1,  -1,
    361, 366, 129, 362, 370, -1,  361, 212, 362, -1,  361, 212, 362, 158, 496,
    -1,  361, 368, 367, 129, 362, 371, -1,  361, 154, 369, 129, 362, -1,  -1,
    120, -1,  63,  -1,  -1,  165, -1,  135, -1,  187, -1,  135, 367, -1,  187,
    367, -1,  -1,  -1,  371, -1,  158, 496, -1,  234, 340, 356, 341, -1,  3,
    -1,  372, 338, 3,   -1,  340, 346, 341, -1,  374, -1,  82,  375, 107, 360,
    347, 353, 354, -1,  375, 146, -1,  375, 173, -1,  375, 117, -1,  -1,  82,
    375, 376, 107, 360, 347, -1,  3,   377, -1,  376, 338, 3,   377, -1,  -1,
    339, 26,  -1,  82,  375, 107, 376, 234, 360, 347, -1,  378, -1,  123, 380,
    381, 3,   382, 238, 383, 379, -1,  -1,  158, 159, 130, 231, 385, -1,  -1,
    380, 146, -1,  380, 81,  -1,  380, 112, -1,  380, 117, -1,  127, -1,  -1,
    -1,  340, 356, 341, -1,  340, 384, 341, -1,  340, 384, 341, 338, 383, -1,
    496, -1,  80,  -1,  496, 338, 384, -1,  80,  338, 384, -1,  123, 380, 381,
    3,   196, 385, 379, -1,  123, 380, 381, 3,   382, 346, 379, -1,  3,   20,
    496, -1,  3,   20,  80,  -1,  385, 338, 3,   20,  496, -1,  385, 338, 3,
    20,  80,  -1,  386, -1,  182, 380, 381, 3,   382, 238, 383, 379, -1,  182,
    380, 381, 3,   196, 385, 379, -1,  182, 380, 381, 3,   382, 346, 379, -1,
    387, -1,  231, 388, 360, 196, 389, 347, 353, 354, -1,  -1,  380, 146, -1,
    380, 117, -1,  3,   20,  496, -1,  3,   339, 3,   20,  496, -1,  389, 338,
    3,   20,  496, -1,  389, 338, 3,   339, 3,   20,  496, -1,  390, -1,  62,
    69,  391, 3,   -1,  62,  190, 391, 3,   -1,  -1,  116, 18,  99,  -1,  392,
    -1,  62,  395, 213, 391, 3,   340, 396, 341, -1,  62,  395, 213, 391, 3,
    339, 3,   340, 396, 341, -1,  62,  395, 213, 391, 3,   340, 396, 341, 393,
    -1,  62,  395, 213, 391, 3,   393, -1,  62,  395, 213, 391, 3,   339, 3,
    340, 396, 341, 393, -1,  62,  395, 213, 391, 3,   339, 3,   393, -1,  394,
    363, 346, -1,  -1,  117, -1,  182, -1,  -1,  214, -1,  397, -1,  397, 338,
    396, -1,  3,   504, 398, -1,  169, 130, 340, 356, 341, -1,  130, 340, 356,
    341, -1,  118, 340, 356, 341, -1,  108, 118, 340, 356, 341, -1,  108, 130,
    340, 356, 341, -1,  -1,  398, 18,  156, -1,  398, 156, -1,  398, 80,  4,
    -1,  398, 80,  5,   -1,  398, 80,  7,   -1,  398, 80,  6,   -1,  398, 41,
    -1,  398, 228, 130, -1,  398, 169, 130, -1,  398, 130, -1,  398, 57,  4,
    -1,  398, 228, 340, 356, 341, -1,  399, -1,  62,  171, 158, 3,   340, 356,
    341, 167, 158, 3,   -1,  62,  171, 158, 3,   340, 356, 341, 157, 20,  5,
    167, 158, 3,   -1,  251, 506, -1,  400, -1,  257, 3,   -1,  257, 213, 3,
    -1,  401, -1,  34,  69,  3,   503, -1,  34,  190, 3,   503, -1,  402, -1,
    34,  406, 213, 3,   403, -1,  404, -1,  403, 338, 404, -1,  32,  405, 396,
    -1,  52,  405, 3,   3,   504, 398, -1,  90,  405, 3,   -1,  90,  169, 130,
    -1,  90,  118, 356, -1,  90,  106, 130, 356, -1,  180, 3,   -1,  180, 223,
    3,   -1,  163, 48,  3,   -1,  -1,  56,  -1,  -1,  117, -1,  407, -1,  62,
    408, 118, 3,   409, 158, 3,   340, 411, 341, -1,  -1,  228, -1,  108, -1,
    201, -1,  -1,  234, 410, -1,  319, -1,  320, -1,  3,   500, 350, -1,  3,
    500, 350, 338, 411, -1,  412, -1,  90,  118, 3,   158, 3,   -1,  413, -1,
    90,  69,  414, 3,   -1,  90,  190, 414, 3,   -1,  -1,  116, 99,  -1,  415,
    -1,  90,  395, 213, 414, 416, 417, -1,  3,   -1,  3,   339, 3,   -1,  416,
    338, 3,   -1,  416, 338, 3,   339, 3,   -1,  -1,  184, -1,  50,  -1,  418,
    -1,  138, 213, 3,   107, 506, 245, 4,   338, 4,   189, 20,  7,   -1,  138,
    213, 3,   107, 506, 245, 4,   338, 4,   -1,  38,  213, 3,   107, 506, 245,
    4,   338, 4,   -1,  38,  213, 3,   107, 506, 245, 4,   338, 4,   189, 20,
    7,   -1,  419, -1,  180, 213, 420, -1,  -1,  3,   223, 3,   -1,  3,   339,
    3,   223, 3,   339, 3,   -1,  420, 338, 3,   223, 3,   -1,  420, 338, 3,
    339, 3,   223, 3,   339, 3,   -1,  421, -1,  84,  213, 3,   -1,  84,  3,
    -1,  83,  3,   -1,  83,  213, 3,   -1,  422, -1,  233, 3,   -1,  423, -1,
    425, -1,  428, -1,  269, 270, -1,  267, 424, -1,  -1,  318, -1,  268, 424,
    426, 427, -1,  -1,  36,  271, 272, -1,  36,  272, -1,  -1,  271, 179, -1,
    179, -1,  275, 424, 426, 427, -1,  429, -1,  196, 273, 20,  496, -1,  430,
    -1,  431, -1,  432, -1,  274, 3,   -1,  275, 424, 223, 274, 3,   -1,  179,
    274, 3,   -1,  433, -1,  141, 277, 434, -1,  435, -1,  434, 338, 435, -1,
    3,   364, 436, -1,  175, -1,  175, 276, -1,  146, 246, -1,  246, -1,  437,
    -1,  229, 277, -1,  438, -1,  196, 439, 270, 278, 279, 440, -1,  -1,  280,
    -1,  281, -1,  175, 282, -1,  175, 283, -1,  284, 175, -1,  285, -1,  441,
    -1,  62,  256, 442, -1,  443, -1,  442, 338, 443, -1,  8,   -1,  8,   286,
    48,  4,   -1,  8,   286, 48,  287, 4,   -1,  444, -1,  90,  256, 445, -1,
    8,   -1,  445, 338, 8,   -1,  446, -1,  109, 447, 158, 26,  339, 26,  223,
    442, 449, -1,  448, -1,  447, 338, 448, -1,  33,  -1,  33,  288, -1,  193,
    -1,  231, -1,  123, -1,  82,  -1,  62,  -1,  90,  -1,  118, -1,  34,  -1,
    109, 161, -1,  178, -1,  -1,  245, 450, -1,  109, 161, -1,  252, 496, -1,
    253, 496, -1,  254, 496, -1,  255, 496, -1,  451, -1,  109, 447, 158, 3,
    339, 26,  223, 442, 449, -1,  452, -1,  109, 453, 158, 3,   339, 3,   223,
    442, 449, -1,  454, -1,  453, 338, 454, -1,  193, 382, -1,  231, 382, -1,
    123, 382, -1,  82,  -1,  62,  -1,  90,  -1,  118, -1,  34,  -1,  109, 161,
    -1,  455, -1,  186, 447, 158, 26,  339, 26,  107, 445, -1,  456, -1,  186,
    447, 158, 3,   339, 26,  107, 445, 449, -1,  457, -1,  186, 453, 158, 3,
    339, 3,   107, 445, 449, -1,  458, -1,  180, 256, 459, -1,  8,   223, 8,
    -1,  459, 338, 8,   223, 8,   -1,  460, -1,  196, 287, 461, 20,  287, 340,
    4,   341, -1,  -1,  104, 8,   -1,  462, -1,  35,  463, 213, 416, -1,  -1,
    276, -1,  155, -1,  464, -1,  289, 213, 416, 223, 4,   -1,  465, -1,  54,
    213, 416, 466, -1,  -1,  173, -1,  258, -1,  259, -1,  260, -1,  261, -1,
    467, -1,  290, 213, 416, 468, -1,  -1,  173, -1,  260, -1,  469, -1,  160,
    463, 213, 416, -1,  470, -1,  291, 463, 213, 416, 471, -1,  -1,  471, 173,
    -1,  471, 260, -1,  471, 292, -1,  472, -1,  293, 213, 416, 107, 4,   -1,
    473, -1,  197, 474, 277, 475, 476, -1,  197, 295, 476, -1,  197, 474, 296,
    107, 3,   475, 476, -1,  197, 62,  69,  3,   -1,  197, 62,  190, 3,   -1,
    197, 62,  213, 3,   -1,  197, 69,  3,   -1,  197, 190, 3,   -1,  197, 297,
    3,   298, -1,  197, 297, 3,   299, -1,  197, 300, 301, -1,  197, 302, 354,
    -1,  197, 496, 302, -1,  197, 303, 104, 8,   -1,  197, 118, 107, 3,   475,
    -1,  197, 304, 299, -1,  197, 478, 298, -1,  197, 322, 277, 475, 476, -1,
    197, 288, -1,  197, 474, 305, -1,  197, 439, 299, 476, -1,  197, 213, 299,
    475, 476, -1,  197, 294, 196, 476, -1,  197, 306, 475, 477, -1,  197, 439,
    307, 476, -1,  197, 308, 354, -1,  197, 496, 308, -1,  -1,  323, -1,  -1,
    107, 3,   -1,  -1,  14,  4,   -1,  -1,  14,  496, -1,  -1,  321, -1,  479,
    -1,  265, 118, 480, 16,  3,   -1,  481, -1,  480, 338, 481, -1,  3,   -1,
    3,   482, 372, -1,  -1,  118, -1,  130, -1,  483, -1,  309, 463, 484, -1,
    485, -1,  484, 338, 485, -1,  310, -1,  311, -1,  298, -1,  288, -1,  264,
    265, -1,  299, -1,  213, 3,   -1,  277, 416, -1,  277, 245, 175, 141, -1,
    312, -1,  486, -1,  132, 487, 496, -1,  -1,  313, -1,  264, -1,  488, -1,
    138, 118, 127, 265, 480, -1,  3,   489, 490, -1,  482, 340, 372, 341, -1,
    -1,  117, 262, -1,  491, -1,  314, 492, -1,  493, -1,  492, 338, 493, -1,
    263, -1,  264, 265, -1,  266, -1,  494, -1,  315, 3,   107, 345, -1,  317,
    3,   495, -1,  316, 315, 3,   -1,  90,  315, 3,   -1,  -1,  234, 445, -1,
    342, -1,  497, -1,  196, 498, -1,  499, -1,  498, 338, 499, -1,  8,   20,
    496, -1,  8,   9,   496, -1,  -1,  340, 5,   341, -1,  340, 5,   338, 5,
    341, -1,  -1,  44,  -1,  -1,  502, 230, -1,  502, 249, -1,  -1,  503, 53,
    196, 3,   -1,  503, 55,  3,   -1,  45,  500, -1,  221, 500, 502, -1,  198,
    500, 502, -1,  149, 500, 502, -1,  124, 500, 502, -1,  125, 500, 502, -1,
    43,  500, 502, -1,  177, 500, 502, -1,  89,  500, 502, -1,  103, 500, 502,
    -1,  78,  500, 502, -1,  71,  -1,  218, -1,  219, -1,  72,  -1,  247, -1,
    53,  500, 503, -1,  240, 340, 5,   341, 503, -1,  44,  500, -1,  239, 340,
    5,   341, -1,  220, -1,  46,  -1,  148, -1,  143, -1,  222, 501, 503, -1,
    215, 501, 503, -1,  150, 501, 503, -1,  144, 501, 503, -1,  97,  340, 505,
    341, 503, -1,  196, 340, 505, 341, 503, -1,  4,   -1,  505, 338, 4,   -1,
    3,   -1,  8,   -1,  3,   339, 3,   -1,  3,   339, 26,  -1,  4,   -1,  5,
    -1,  7,   -1,  6,   -1,  496, 24,  496, -1,  496, 25,  496, -1,  496, 26,
    496, -1,  496, 27,  496, -1,  496, 28,  496, -1,  496, 29,  496, -1,  25,
    496, -1,  24,  496, -1,  496, 12,  496, -1,  496, 10,  496, -1,  496, 11,
    496, -1,  496, 20,  496, -1,  496, 20,  340, 346, 341, -1,  496, 20,  37,
    340, 346, 341, -1,  496, 20,  199, 340, 346, 341, -1,  496, 20,  33,  340,
    346, 341, -1,  496, 21,  496, -1,  496, 22,  496, -1,  496, 30,  496, -1,
    496, 23,  496, -1,  18,  496, -1,  17,  496, -1,  8,   9,   496, -1,  340,
    496, 341, -1,  496, 15,  156, -1,  496, 15,  18,  156, -1,  496, 15,  6,
    -1,  496, 15,  18,  6,   -1,  496, 19,  496, 36,  496, -1,  496, -1,  496,
    338, 506, -1,  340, 506, 341, -1,  506, -1,  506, 338, 507, -1,  496, 16,
    340, 506, 341, -1,  340, 506, 341, 16,  340, 507, 341, -1,  496, 18,  16,
    340, 506, 341, -1,  340, 506, 341, 18,  16,  340, 506, 341, -1,  496, 16,
    340, 346, 341, -1,  340, 506, 341, 16,  340, 346, 341, -1,  496, 18,  16,
    340, 346, 341, -1,  340, 506, 341, 18,  16,  340, 346, 341, -1,  99,  340,
    346, 341, -1,  18,  99,  340, 346, 341, -1,  3,   340, 507, 341, -1,  328,
    340, 26,  341, -1,  328, 340, 496, 341, -1,  333, 340, 496, 341, -1,  334,
    340, 496, 341, -1,  335, 340, 496, 341, -1,  336, 340, 496, 341, -1,  324,
    340, 496, 338, 496, 341, -1,  324, 340, 496, 107, 496, 341, -1,  324, 340,
    496, 338, 496, 338, 496, 341, -1,  324, 340, 496, 107, 496, 104, 496, 341,
    -1,  325, 340, 496, 341, -1,  325, 340, 508, 496, 107, 496, 341, -1,  329,
    340, 496, 341, -1,  330, 340, 496, 39,  509, 341, -1,  331, 340, 506, 341,
    -1,  133, -1,  224, -1,  47,  -1,  -1,  125, -1,  4,   -1,  89,  -1,  103,
    -1,  53,  -1,  326, 340, 496, 338, 510, 341, -1,  327, 340, 496, 338, 510,
    341, -1,  126, 496, 73,  -1,  126, 496, 75,  -1,  126, 496, 76,  -1,  126,
    496, 77,  -1,  126, 496, 74,  -1,  126, 496, 248, -1,  126, 496, 247, -1,
    126, 496, 250, -1,  126, 496, 174, -1,  51,  496, 511, 96,  -1,  51,  496,
    511, 93,  496, 96,  -1,  51,  511, 96,  -1,  51,  511, 93,  496, 96,  -1,
    242, 496, 217, 496, -1,  511, 242, 496, 217, 496, -1,  496, 14,  496, -1,
    496, 18,  14,  496, -1,  496, 13,  496, -1,  496, 18,  13,  496, -1,  66,
    -1,  64,  -1,  65,  -1,  44,  496, -1};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] = {
    0,    451,  451,  464,  477,  485,  497,  501,  506,  515,  516,  518,
    519,  522,  527,  534,  535,  536,  539,  540,  543,  544,  551,  552,
    559,  560,  561,  564,  565,  568,  569,  572,  573,  574,  575,  576,
    577,  578,  579,  580,  583,  584,  585,  586,  589,  592,  593,  596,
    597,  601,  606,  611,  615,  618,  619,  622,  623,  624,  639,  643,
    647,  652,  656,  662,  663,  664,  667,  668,  671,  672,  675,  676,
    677,  680,  681,  688,  692,  712,  713,  716,  721,  724,  732,  733,
    734,  735,  738,  743,  744,  747,  748,  751,  757,  760,  766,  767,
    770,  771,  772,  773,  774,  777,  777,  780,  781,  785,  786,  790,
    791,  792,  793,  796,  800,  805,  808,  811,  814,  820,  823,  829,
    835,  841,  844,  852,  853,  854,  858,  868,  879,  881,  890,  894,
    896,  900,  901,  906,  909,  913,  917,  922,  926,  931,  937,  941,
    942,  943,  946,  947,  950,  951,  955,  956,  957,  958,  959,  960,
    964,  965,  966,  967,  968,  969,  970,  971,  972,  973,  974,  975,
    976,  980,  984,  986,  997,  1001, 1004, 1005, 1009, 1013, 1014, 1018,
    1023, 1027, 1028, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040,
    1043, 1044, 1048, 1049, 1053, 1057, 1061, 1062, 1063, 1064, 1067, 1068,
    1071, 1072, 1075, 1076, 1080, 1083, 1087, 1091, 1092, 1095, 1096, 1100,
    1103, 1106, 1107, 1108, 1109, 1112, 1113, 1114, 1118, 1122, 1127, 1128,
    1129, 1136, 1139, 1142, 1143, 1144, 1145, 1146, 1150, 1153, 1154, 1155,
    1156, 1160, 1163, 1167, 1168, 1169, 1172, 1173, 1176, 1177, 1180, 1183,
    1184, 1185, 1188, 1189, 1190, 1193, 1197, 1200, 1204, 1205, 1206, 1210,
    1213, 1216, 1220, 1223, 1226, 1227, 1230, 1233, 1234, 1235, 1236, 1240,
    1243, 1247, 1251, 1254, 1255, 1256, 1260, 1261, 1262, 1263, 1267, 1270,
    1273, 1274, 1277, 1278, 1279, 1283, 1286, 1289, 1290, 1294, 1297, 1300,
    1301, 1305, 1306, 1307, 1308, 1309, 1310, 1311, 1312, 1313, 1314, 1315,
    1316, 1319, 1320, 1324, 1325, 1326, 1327, 1328, 1332, 1335, 1339, 1342,
    1345, 1346, 1350, 1351, 1352, 1353, 1354, 1355, 1356, 1357, 1358, 1368,
    1371, 1374, 1377, 1380, 1383, 1387, 1390, 1394, 1395, 1399, 1402, 1405,
    1406, 1410, 1413, 1416, 1417, 1418, 1422, 1425, 1429, 1432, 1435, 1436,
    1437, 1438, 1439, 1440, 1444, 1447, 1450, 1451, 1452, 1456, 1459, 1463,
    1466, 1469, 1470, 1471, 1472, 1476, 1479, 1482, 1485, 1486, 1487, 1488,
    1489, 1490, 1491, 1492, 1493, 1494, 1495, 1496, 1497, 1498, 1499, 1500,
    1501, 1502, 1503, 1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1514,
    1515, 1518, 1519, 1522, 1523, 1526, 1527, 1530, 1531, 1535, 1538, 1541,
    1542, 1545, 1546, 1549, 1550, 1551, 1555, 1558, 1561, 1562, 1565, 1566,
    1567, 1568, 1569, 1570, 1571, 1572, 1573, 1574, 1578, 1581, 1584, 1585,
    1586, 1590, 1593, 1596, 1599, 1602, 1603, 1607, 1610, 1613, 1614, 1617,
    1618, 1619, 1623, 1626, 1627, 1628, 1629, 1632, 1633, 1636, 1644, 1647,
    1649, 1649, 1652, 1656, 1664, 1665, 1666, 1669, 1670, 1673, 1674, 1675,
    1678, 1679, 1681, 1686, 1687, 1688, 1689, 1690, 1691, 1692, 1693, 1694,
    1695, 1696, 1697, 1698, 1699, 1700, 1701, 1702, 1703, 1704, 1705, 1706,
    1707, 1708, 1709, 1710, 1711, 1712, 1713, 1714, 1715, 1718, 1719, 1724,
    1725, 1726, 1727, 1728, 1729, 1730, 1731, 1734, 1735, 1736, 1737, 1738,
    1739, 1740, 1741, 1742, 1743, 1744, 1745, 1746, 1747, 1748, 1749, 1750,
    1751, 1752, 1753, 1754, 1755, 1756, 1757, 1760, 1761, 1762, 1763, 1766,
    1771, 1773, 1775, 1779, 1780, 1784, 1785, 1786, 1787, 1788, 1789, 1790,
    1791, 1792, 1793, 1796, 1800, 1801, 1803, 1804, 1805, 1806, 1811, 1812,
    1813, 1814, 1815, 1816, 1817, 1818, 1819, 1821, 1822, 1823, 1825, 1826,
    1827, 1828, 1829, 1830, 1835, 1836, 1839, 1840, 1841, 1842, 1843, 1844,
    1845, 1846, 1847, 1851, 1852, 1853, 1854, 1857, 1858, 1861, 1862, 1865,
    1866, 1869, 1870, 1871, 1874};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] = {
    "$end",                     "error",
    "$undefined",               "NAME",
    "STRING",                   "INTNUM",
    "BOOL",                     "APPROXNUM",
    "USERVAR",                  "ASSIGN",
    "OR",                       "XOR",
    "ANDOP",                    "REGEXP",
    "LIKE",                     "IS",
    "IN",                       "'!'",
    "NOT",                      "BETWEEN",
    "COMPARISON",               "'|'",
    "'&'",                      "SHIFT",
    "'+'",                      "'-'",
    "'*'",                      "'/'",
    "'%'",                      "MOD",
    "'^'",                      "UMINUS",
    "ADD",                      "ALL",
    "ALTER",                    "ANALYZE",
    "AND",                      "ANY",
    "APPEND",                   "AS",
    "ASC",                      "AUTO_INCREMENT",
    "BEFORE",                   "BIGINT",
    "BINARY",                   "BIT",
    "BLOB",                     "BOTH",
    "BY",                       "CALL",
    "CASCADE",                  "CASE",
    "CHANGE",                   "CHAR",
    "CHECK",                    "COLLATE",
    "COLUMN",                   "COMMENT",
    "CONDITION",                "CONSTRAINT",
    "CONTINUE",                 "CONVERT",
    "CREATE",                   "CROSS",
    "CURRENT_DATE",             "CURRENT_TIME",
    "CURRENT_TIMESTAMP",        "CURRENT_USER",
    "CURSOR",                   "DATABASE",
    "DATABASES",                "DATE",
    "DATETIME",                 "DAY_HOUR",
    "DAY",                      "DAY_MICROSECOND",
    "DAY_MINUTE",               "DAY_SECOND",
    "DECIMAL",                  "DECLARE",
    "DEFAULT",                  "DELAYED",
    "DELETE",                   "DESC",
    "DESCRIBE",                 "DETERMINISTIC",
    "DISTINCT",                 "DISTINCTROW",
    "DIV",                      "DOUBLE",
    "DROP",                     "DUAL",
    "EACH",                     "ELSE",
    "ELSEIF",                   "ENCLOSED",
    "END",                      "ENUM",
    "ESCAPED",                  "EXISTS",
    "EXIT",                     "EXPLAIN",
    "FETCH",                    "FLOAT",
    "FOR",                      "FORCE",
    "FOREIGN",                  "FROM",
    "FULLTEXT",                 "GRANT",
    "GROUP",                    "HAVING",
    "HIGH_PRIORITY",            "HOUR_MICROSECOND",
    "HOUR_MINUTE",              "HOUR_SECOND",
    "IF",                       "IGNORE",
    "INDEX",                    "INFILE",
    "INNER",                    "INOUT",
    "INSENSITIVE",              "INSERT",
    "INT",                      "INTEGER",
    "INTERVAL",                 "INTO",
    "ITERATE",                  "JOIN",
    "KEY",                      "KEYS",
    "KILL",                     "LEADING",
    "LEAVE",                    "LEFT",
    "LIMIT",                    "LINES",
    "LOAD",                     "LOCALTIME",
    "LOCALTIMESTAMP",           "LOCK",
    "LONG",                     "LONGBLOB",
    "LONGTEXT",                 "LOOP",
    "LOW_PRIORITY",             "MATCH",
    "MEDIUMBLOB",               "MEDIUMINT",
    "MEDIUMTEXT",               "MINUTE_MICROSECOND",
    "MINUTE_SECOND",            "MODIFIES",
    "NATURAL",                  "NO_WRITE_TO_BINLOG",
    "NULLX",                    "NUMBER",
    "ON",                       "DUPLICATE",
    "OPTIMIZE",                 "OPTION",
    "OPTIONALLY",               "ORDER",
    "OUT",                      "OUTER",
    "OUTFILE",                  "PARTITIONED",
    "PRECISION",                "PRIMARY",
    "PROCEDURE",                "PROJECTION",
    "PURGE",                    "QUICK",
    "QUARTER",                  "READ",
    "READS",                    "REAL",
    "REFERENCES",               "RELEASE",
    "RENAME",                   "REPEAT",
    "REPLACE",                  "REQUIRE",
    "RESTRICT",                 "RETURN",
    "REVOKE",                   "RIGHT",
    "ROLLUP",                   "SAMPLE",
    "SCHEMA",                   "SCHEMAS",
    "SECOND_MICROSECOND",       "SELECT",
    "SENSITIVE",                "SEPARATOR",
    "SET",                      "SHOW",
    "SMALLINT",                 "SOME",
    "SONAME",                   "SPATIAL",
    "SPECIFIC",                 "SQL",
    "SQLEXCEPTION",             "SQLSTATE",
    "SQLWARNING",               "SQL_BIG_RESULT",
    "SQL_CALC_FOUND_ROWS",      "SQL_SMALL_RESULT",
    "SSL",                      "STARTING",
    "STRAIGHT_JOIN",            "TABLE",
    "TEMPORARY",                "TEXT",
    "TERMINATED",               "THEN",
    "TIME",                     "TIMESTAMP",
    "TINYBLOB",                 "TINYINT",
    "TINYTEXT",                 "TO",
    "TRAILING",                 "TRIGGER",
    "UNDO",                     "UNION",
    "UNIQUE",                   "UNLOCK",
    "UNSIGNED",                 "UPDATE",
    "USAGE",                    "USE",
    "USING",                    "UTC_DATE",
    "UTC_TIME",                 "UTC_TIMESTAMP",
    "VALUES",                   "VARBINARY",
    "VARCHAR",                  "VARYING",
    "WHEN",                     "WHERE",
    "WHILE",                    "WITH",
    "WRITE",                    "YEAR",
    "YEAR_MONTH",               "ZEROFILL",
    "WEEK",                     "DO",
    "MAX_QUERIES_PER_HOUR",     "MAX_UPDATES_PER_HOUR",
    "MAX_CONNECTIONS_PER_HOUR", "MAX_USER_CONNECTIONS",
    "USER",                     "TRUNCATE",
    "FAST",                     "MEDIUM",
    "EXTENDED",                 "CHANGED",
    "LEAVES",                   "MASTER",
    "QUERY",                    "CACHE",
    "SLAVE",                    "BEGINT",
    "COMMIT",                   "START",
    "TRANSACTION",              "NO",
    "CHAIN",                    "AUTOCOMMIT",
    "SAVEPOINT",                "ROLLBACK",
    "LOCAL",                    "TABLES",
    "ISOLATION",                "LEVEL",
    "GLOBAL",                   "SESSION",
    "UNCOMMITTED",              "COMMITTED",
    "REPEATABLE",               "SERIALIZABLE",
    "IDENTIFIED",               "PASSWORD",
    "PRIVILEGES",               "BACKUP",
    "CHECKSUM",                 "REPAIR",
    "USE_FRM",                  "RESTORE",
    "CHARACTER",                "COLLATION",
    "COLUMNS",                  "ENGINE",
    "LOGS",                     "STATUS",
    "STORAGE",                  "ENGINES",
    "ERRORS",                   "GRANTS",
    "INNODB",                   "PROCESSLIST",
    "TRIGGERS",                 "VARIABLES",
    "WARNINGS",                 "FLUSH",
    "HOSTS",                    "DES_KEY_FILE",
    "USER_RESOURCES",           "CONNECTION",
    "RESET",                    "PREPARE",
    "DEALLOCATE",               "EXECUTE",
    "WORK",                     "BTREE",
    "HASH",                     "BDB",
    "OPEN",                     "FULL",
    "FSUBSTRING",               "FTRIM",
    "FDATE_ADD",                "FDATE_SUB",
    "FCOUNT",                   "FUPPER",
    "FCAST",                    "FCOALESCE",
    "FCONVERT",                 "FSUM",
    "FAVG",                     "FMIN",
    "FMAX",                     "';'",
    "','",                      "'.'",
    "'('",                      "')'",
    "'?'",                      "$accept",
    "stmt_list",                "stmt",
    "select_stmt",              "opt_where",
    "opt_groupby",              "groupby_list",
    "opt_asc_desc",             "opt_with_rollup",
    "opt_having",               "opt_orderby",
    "opt_limit",                "opt_into_list",
    "column_list",              "select_opts",
    "select_expr_list",         "select_expr",
    "table_references",         "table_reference",
    "table_factor",             "opt_as",
    "opt_as_alias",             "join_table",
    "opt_inner_cross",          "opt_outer",
    "left_or_right",            "opt_left_or_right_outer",
    "opt_join_condition",       "join_condition",
    "index_list",               "table_subquery",
    "delete_stmt",              "delete_opts",
    "delete_list",              "opt_dot_star",
    "insert_stmt",              "opt_ondupupdate",
    "insert_opts",              "opt_into",
    "opt_col_names",            "insert_vals_list",
    "insert_vals",              "insert_asgn_list",
    "replace_stmt",             "update_stmt",
    "update_opts",              "update_asgn_list",
    "create_database_stmt",     "opt_if_not_exists",
    "create_table_stmt",        "create_select_statement",
    "opt_ignore_replace",       "opt_temporary",
    "create_col_list",          "create_definition",
    "column_atts",              "create_projection_stmt",
    "truncate_stmt",            "alter_database_stmt",
    "alter_table_stmt",         "alter_list",
    "alter_def",                "opt_col",
    "opt_ignore",               "create_index_stmt",
    "index_att",                "opt_using_type",
    "index_type",               "index_col_list",
    "drop_index_stmt",          "drop_database_stmt",
    "opt_if_exists",            "drop_table_stmt",
    "table_list",               "opt_rc",
    "load_table_stmt",          "rename_table_stmt",
    "rename_list",              "describe_stmt",
    "use_stmt",                 "start_transaction_stmt",
    "opt_work",                 "commit_stmt",
    "opt_chain",                "opt_release",
    "rollback_stmt",            "set_autocommit_stmt",
    "savepoint_stmt",           "rollback_to_savepoint_stmt",
    "release_savepoint",        "lock_table_stmt",
    "lock_table_list",          "lock_table",
    "opt_read_write",           "unlock_tables",
    "set_transaction_stmt",     "opt_trans_level",
    "trans_att",                "create_user_stmt",
    "create_user_list",         "create_user",
    "drop_user_stmt",           "user_list",
    "grant_all_stmt",           "priv_database_list",
    "priv_database_type",       "opt_with_opt",
    "with_opt",                 "grant_database_stmt",
    "grant_table_stmt",         "priv_table_list",
    "priv_table_type",          "revoke_all_stmt",
    "revoke_database_stmt",     "revoke_table_stmt",
    "rename_user_stmt",         "utou_list",
    "set_password_stmt",        "opt_for_user",
    "analyze_table_stmt",       "analyze_opt",
    "backup_table_stmt",        "check_table_stmt",
    "check_opts",               "checksum_table_stmt",
    "checksum_opt",             "optimize_table_stmt",
    "repair_table_stmt",        "repair_opts",
    "restore_table_stmt",       "show_stmt",
    "opt_full",                 "opt_from",
    "opt_like_string",          "opt_like_expr",
    "opt_bdb",                  "cache_index_stmt",
    "table_index_list",         "table_index",
    "opt_index_key",            "flush_stmt",
    "flush_opt_list",           "flush_opt",
    "kill_stmt",                "opt_connection_query",
    "load_index_stmt",          "opt_index_key_list",
    "opt_ignore_leaves",        "reset_stmt",
    "reset_opt_list",           "reset_opt",
    "prepare_stmt",             "opt_use_name",
    "expr",                     "set_stmt",
    "set_list",                 "set_expr",
    "opt_length",               "opt_binary",
    "opt_uz",                   "opt_csc",
    "data_type",                "enum_list",
    "expr_list",                "opt_expr_list",
    "trim_ltb",                 "date_type",
    "interval_exp",             "case_list",
    YY_NULL};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] = {
    0,   343, 344, 344, 344, 344, 345, 346, 346, 347, 347, 348, 348, 349, 349,
    350, 350, 350, 351, 351, 352, 352, 353, 353, 354, 354, 354, 355, 355, 356,
    356, 357, 357, 357, 357, 357, 357, 357, 357, 357, 358, 358, 358, 358, 359,
    360, 360, 361, 361, 362, 362, 362, 362, 363, 363, 364, 364, 364, 365, 365,
    365, 365, 365, 366, 366, 366, 367, 367, 368, 368, 369, 369, 369, 370, 370,
    371, 371, 372, 372, 373, 345, 374, 375, 375, 375, 375, 374, 376, 376, 377,
    377, 374, 345, 378, 379, 379, 380, 380, 380, 380, 380, 381, 381, 382, 382,
    383, 383, 384, 384, 384, 384, 378, 378, 385, 385, 385, 385, 345, 386, 386,
    386, 345, 387, 388, 388, 388, 389, 389, 389, 389, 345, 390, 390, 391, 391,
    345, 392, 392, 392, 392, 392, 392, 393, 394, 394, 394, 395, 395, 396, 396,
    397, 397, 397, 397, 397, 397, 398, 398, 398, 398, 398, 398, 398, 398, 398,
    398, 398, 398, 398, 345, 399, 399, 345, 345, 400, 400, 345, 401, 401, 345,
    402, 403, 403, 404, 404, 404, 404, 404, 404, 404, 404, 404, 405, 405, 406,
    406, 345, 407, 408, 408, 408, 408, 409, 409, 410, 410, 411, 411, 345, 412,
    345, 413, 413, 414, 414, 345, 415, 416, 416, 416, 416, 417, 417, 417, 345,
    418, 418, 418, 418, 345, 419, 420, 420, 420, 420, 420, 345, 421, 421, 421,
    421, 345, 422, 345, 345, 345, 423, 423, 424, 424, 425, 426, 426, 426, 427,
    427, 427, 428, 345, 429, 345, 345, 345, 430, 431, 432, 345, 433, 434, 434,
    435, 436, 436, 436, 436, 345, 437, 345, 438, 439, 439, 439, 440, 440, 440,
    440, 345, 441, 442, 442, 443, 443, 443, 345, 444, 445, 445, 345, 446, 447,
    447, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 448, 449, 449,
    450, 450, 450, 450, 450, 345, 451, 345, 452, 453, 453, 454, 454, 454, 454,
    454, 454, 454, 454, 454, 345, 455, 345, 456, 345, 457, 345, 458, 459, 459,
    345, 460, 461, 461, 345, 462, 463, 463, 463, 345, 464, 345, 465, 466, 466,
    466, 466, 466, 466, 345, 467, 468, 468, 468, 345, 469, 345, 470, 471, 471,
    471, 471, 345, 472, 345, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
    473, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473, 473,
    473, 473, 474, 474, 475, 475, 476, 476, 477, 477, 478, 478, 345, 479, 480,
    480, 481, 481, 482, 482, 482, 345, 483, 484, 484, 485, 485, 485, 485, 485,
    485, 485, 485, 485, 485, 345, 486, 487, 487, 487, 345, 488, 480, 489, 490,
    490, 345, 491, 492, 492, 493, 493, 493, 345, 494, 494, 494, 494, 495, 495,
    496, 345, 497, 498, 498, 499, 499, 500, 500, 500, 501, 501, 502, 502, 502,
    503, 503, 503, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504,
    504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504, 504,
    504, 504, 504, 505, 505, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496,
    496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496,
    496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 506, 506, 506,
    507, 507, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496,
    496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 496, 508, 508,
    508, 509, 509, 509, 509, 509, 509, 496, 496, 510, 510, 510, 510, 510, 510,
    510, 510, 510, 496, 496, 496, 496, 511, 511, 496, 496, 496, 496, 496, 496,
    496, 496};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] = {
    0, 2, 2,  3, 2, 3, 1, 3, 11, 0,  2,  0, 4, 2,  4, 0, 1, 1, 0,  2, 0, 2,  0,
    3, 0, 2,  4, 0, 2, 1, 3, 0,  2,  2,  2, 2, 2,  2, 2, 2, 1, 3,  1, 3, 2,  1,
    3, 1, 1,  2, 4, 3, 3, 0, 1,  2,  1,  0, 5, 3,  5, 6, 5, 0, 1,  1, 0, 1,  1,
    1, 2, 2,  0, 0, 1, 2, 4, 1,  3,  3,  1, 7, 2,  2, 2, 0, 6, 2,  4, 0, 2,  7,
    1, 8, 0,  5, 0, 2, 2, 2, 2,  1,  0,  0, 3, 3,  5, 1, 1, 3, 3,  7, 7, 3,  3,
    5, 5, 1,  8, 7, 7, 1, 8, 0,  2,  2,  3, 5, 5,  7, 1, 4, 4, 0,  3, 1, 8,  10,
    9, 6, 11, 8, 3, 0, 1, 1, 0,  1,  1,  3, 3, 5,  4, 4, 5, 5, 0,  3, 2, 3,  3,
    3, 3, 2,  3, 3, 2, 3, 5, 1,  10, 13, 2, 1, 2,  3, 1, 4, 4, 1,  5, 1, 3,  3,
    6, 3, 3,  3, 4, 2, 3, 3, 0,  1,  0,  1, 1, 10, 0, 1, 1, 1, 0,  2, 1, 1,  3,
    5, 1, 5,  1, 4, 4, 0, 2, 1,  6,  1,  3, 3, 5,  0, 1, 1, 1, 12, 9, 9, 12, 1,
    3, 0, 3,  7, 5, 9, 1, 3, 2,  2,  3,  1, 2, 1,  1, 1, 2, 2, 0,  1, 4, 0,  3,
    2, 0, 2,  1, 4, 1, 4, 1, 1,  1,  2,  5, 3, 1,  3, 1, 3, 3, 1,  2, 2, 1,  1,
    2, 1, 6,  0, 1, 1, 2, 2, 2,  1,  1,  3, 1, 3,  1, 4, 5, 1, 3,  1, 3, 1,  9,
    1, 3, 1,  2, 1, 1, 1, 1, 1,  1,  1,  1, 2, 1,  0, 2, 2, 2, 2,  2, 2, 1,  9,
    1, 9, 1,  3, 2, 2, 2, 1, 1,  1,  1,  1, 2, 1,  8, 1, 9, 1, 9,  1, 3, 3,  5,
    1, 8, 0,  2, 1, 4, 0, 1, 1,  1,  5,  1, 4, 0,  1, 1, 1, 1, 1,  1, 4, 0,  1,
    1, 1, 4,  1, 5, 0, 2, 2, 2,  1,  5,  1, 5, 3,  7, 4, 4, 4, 3,  3, 4, 4,  3,
    3, 3, 4,  5, 3, 3, 5, 2, 3,  4,  5,  4, 4, 4,  3, 3, 0, 1, 0,  2, 0, 2,  0,
    2, 0, 1,  1, 5, 1, 3, 1, 3,  0,  1,  1, 1, 3,  1, 3, 1, 1, 1,  1, 2, 1,  2,
    2, 4, 1,  1, 3, 0, 1, 1, 1,  5,  3,  4, 0, 2,  1, 2, 1, 3, 1,  2, 1, 1,  4,
    3, 3, 3,  0, 2, 1, 1, 2, 1,  3,  3,  3, 0, 3,  5, 0, 1, 0, 2,  2, 0, 4,  3,
    2, 3, 3,  3, 3, 3, 3, 3, 3,  3,  3,  1, 1, 1,  1, 1, 3, 5, 2,  4, 1, 1,  1,
    1, 3, 3,  3, 3, 5, 5, 1, 3,  1,  1,  3, 3, 1,  1, 1, 1, 3, 3,  3, 3, 3,  3,
    2, 2, 3,  3, 3, 3, 5, 6, 6,  6,  3,  3, 3, 3,  2, 2, 3, 3, 3,  4, 3, 4,  5,
    1, 3, 3,  1, 3, 5, 7, 6, 8,  5,  7,  6, 8, 4,  5, 4, 4, 4, 4,  4, 4, 4,  6,
    6, 8, 8,  4, 7, 4, 6, 4, 1,  1,  1,  0, 1, 1,  1, 1, 1, 6, 6,  3, 3, 3,  3,
    3, 3, 3,  3, 3, 4, 6, 3, 5,  4,  5,  3, 4, 3,  4, 1, 1, 1, 2};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the default
   is an error.  */
static const unsigned short int yydefact[] = {
    0,   0,   194, 351, 0,   0,   146, 85,  0,   0,   146, 0,   96,  442, 0,
    0,   351, 0,   0,   96,  0,   31,  279, 407, 0,   96,  0,   0,   0,   0,
    248, 248, 0,   0,   248, 0,   0,   351, 0,   351, 0,   0,   0,   0,   0,
    0,   6,   80,  92,  117, 121, 130, 135, 169, 173, 176, 179, 196, 208, 210,
    215, 224, 229, 236, 241, 243, 244, 245, 258, 260, 261, 262, 266, 275, 277,
    286, 293, 297, 320, 322, 335, 337, 339, 341, 345, 349, 354, 356, 364, 369,
    371, 377, 379, 417, 426, 440, 445, 451, 458, 466, 4,   0,   195, 0,   0,
    353, 352, 0,   0,   0,   133, 200, 0,   133, 201, 147, 199, 0,   0,   0,
    0,   239, 0,   238, 0,   213, 0,   213, 0,   0,   0,   301, 310, 307, 306,
    308, 0,   309, 103, 312, 103, 103, 0,   299, 0,   324, 102, 444, 443, 0,
    0,   0,   0,   0,   0,   231, 0,   102, 0,   0,   0,   0,   0,   280, 281,
    347, 0,   467, 468, 515, 519, 520, 522, 521, 516, 0,   0,   0,   0,   0,
    0,   0,   614, 615, 613, 0,   0,   0,   0,   0,   398, 0,   411, 0,   0,
    24,  0,   0,   409, 24,  416, 0,   408, 0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   465, 0,   0,   0,   0,   276, 0,   0,   242,
    0,   552, 172, 174, 0,   0,   249, 247, 251, 246, 263, 251, 0,   0,   0,
    0,   0,   455, 0,   457, 452, 453, 0,   0,   463, 1,   0,   0,   2,   480,
    480, 0,   0,   0,   217, 358, 0,   0,   0,   0,   290, 287, 288, 133, 0,
    89,  0,   84,  82,  83,  0,   240, 237, 0,   0,   0,   0,   295, 294, 462,
    213, 302, 311, 0,   328, 326, 327, 0,   0,   0,   0,   98,  99,  100, 101,
    97,  0,   441, 0,   0,   57,  267, 268, 0,   265, 0,   230, 0,   342, 0,
    0,   0,   42,  32,  33,  34,  35,  38,  39,  37,  36,  7,   40,  57,  0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   544, 0,   543, 530, 529, 616,
    0,   0,   0,   0,   0,   0,   386, 0,   0,   387, 409, 411, 0,   381, 0,
    390, 0,   391, 0,   395, 0,   413, 405, 409, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   411, 411, 409, 0,   399, 396, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   392, 406, 100, 97,  57,  0,   0,   45,  47,  48,  53,
    0,   0,   175, 421, 0,   419, 0,   254, 0,   254, 0,   366, 0,   0,   0,
    0,   0,   433, 432, 435, 430, 431, 439, 427, 428, 456, 0,   0,   461, 0,
    460, 5,   3,   177, 178, 0,   350, 0,   0,   359, 360, 361, 362, 363, 0,
    357, 0,   131, 0,   132, 0,   0,   0,   202, 0,   87,  57,  9,   0,   0,
    0,   214, 211, 0,   212, 0,   0,   29,  0,   0,   0,   310, 307, 306, 308,
    0,   309, 305, 303, 304, 300, 0,   333, 330, 329, 331, 0,   332, 103, 103,
    103, 325, 103, 0,   0,   56,  0,   0,   0,   370, 0,   0,   0,   0,   0,
    103, 0,   0,   0,   0,   0,   0,   44,  471, 470, 259, 348, 0,   0,   469,
    517, 518, 555, 0,   545, 0,   0,   0,   0,   605, 0,   383, 384, 385, 0,
    409, 411, 402, 412, 388, 389, 25,  393, 410, 0,   403, 411, 0,   585, 583,
    584, 0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   546,
    0,   400, 404, 411, 0,   532, 533, 531, 611, 609, 549, 0,   547, 0,   0,
    0,   0,   0,   0,   0,   0,   0,   534, 539, 540, 542, 523, 524, 525, 526,
    527, 528, 541, 0,   49,  0,   0,   0,   65,  64,  68,  72,  69,  0,   0,
    0,   66,  54,  0,   554, 553, 424, 425, 0,   449, 0,   0,   0,   253, 256,
    0,   250, 0,   257, 0,   367, 368, 365, 373, 0,   436, 434, 0,   437, 0,
    454, 459, 464, 0,   0,   192, 192, 192, 0,   0,   180, 181, 0,   218, 219,
    134, 0,   0,   289, 143, 0,   0,   90,  0,   0,   22,  0,   9,   89,  209,
    296, 221, 0,   104, 0,   0,   311, 0,   334, 0,   0,   446, 0,   55,  0,
    271, 274, 270, 269, 232, 0,   0,   343, 0,   0,   0,   0,   0,   0,   43,
    9,   41,  0,   0,   0,   567, 0,   0,   0,   603, 0,   0,   565, 394, 401,
    0,   414, 397, 0,   0,   578, 0,   0,   0,   568, 569, 580, 586, 582, 570,
    571, 572, 573, 0,   0,   380, 409, 550, 548, 0,   0,   612, 610, 0,   0,
    0,   0,   0,   0,   57,  79,  52,  0,   9,   66,  66,  0,   59,  46,  0,
    67,  0,   51,  77,  0,   422, 0,   447, 418, 421, 420, 252, 255, 264, 355,
    372, 378, 0,   429, 0,   482, 193, 0,   0,   0,   0,   0,   0,   0,   189,
    0,   0,   0,   0,   0,   291, 0,   144, 145, 0,   0,   139, 53,  204, 205,
    203, 0,   10,  0,   24,  9,   86,  88,  223, 222, 216, 30,  0,   0,   0,
    0,   94,  0,   94,  0,   273, 272, 0,   0,   0,   0,   94,  0,   94,  0,
    0,   0,   11,  0,   0,   0,   285, 278, 556, 565, 607, 0,   606, 0,   26,
    0,   0,   0,   0,   0,   0,   588, 591, 589, 590, 587, 0,   0,   0,   411,
    561, 557, 0,   0,   551, 0,   0,   0,   535, 50,  0,   0,   0,   22,  70,
    71,  0,   0,   73,  0,   0,   0,   450, 0,   374, 375, 376, 438, 481, 0,
    0,   0,   0,   0,   183, 148, 0,   0,   187, 186, 185, 191, 190, 182, 0,
    220, 0,   292, 143, 0,   0,   0,   0,   81,  91,  0,   0,   0,   0,   0,
    0,   111, 0,   94,  112, 0,   0,   234, 0,   344, 119, 94,  120, 0,   0,
    0,   0,   20,  0,   282, 283, 284, 604, 608, 0,   575, 0,   574, 0,   0,
    592, 593, 581, 0,   0,   0,   382, 563, 559, 538, 536, 537, 126, 0,   0,
    24,  62,  60,  0,   0,   58,  74,  0,   448, 78,  472, 472, 472, 504, 472,
    494, 497, 472, 472, 0,   472, 472, 472, 506, 475, 505, 472, 475, 472, 0,
    472, 475, 495, 496, 503, 472, 475, 0,   0,   498, 156, 0,   0,   0,   0,
    0,   0,   0,   188, 0,   0,   0,   0,   141, 143, 142, 0,   23,  15,  313,
    313, 313, 114, 113, 0,   0,   108, 0,   107, 93,  0,   0,   0,   118, 313,
    336, 313, 0,   0,   22,  346, 0,   0,   579, 594, 598, 595, 596, 597, 602,
    600, 599, 601, 562, 558, 0,   0,   0,   0,   0,   122, 75,  0,   61,  0,
    477, 501, 483, 480, 477, 477, 0,   477, 477, 477, 476, 480, 477, 480, 477,
    0,   477, 480, 477, 480, 0,   0,   150, 0,   0,   0,   0,   0,   149, 156,
    227, 0,   0,   0,   138, 472, 0,   16,  17,  13,  0,   321, 298, 323, 0,
    0,   0,   105, 0,   226, 233, 0,   338, 340, 18,  21,  24,  577, 576, 564,
    560, 127, 128, 0,   0,   0,   489, 499, 493, 491, 513, 0,   492, 487, 488,
    510, 486, 509, 490, 0,   485, 508, 484, 507, 0,   0,   0,   163, 0,   0,
    166, 158, 0,   0,   0,   0,   153, 152, 0,   184, 0,   0,   170, 143, 15,
    197, 0,   0,   0,   0,   0,   0,   314, 0,   116, 115, 110, 0,   109, 0,
    0,   0,   12,  27,  0,   76,  0,   473, 478, 479, 0,   480, 480, 502, 480,
    157, 167, 159, 160, 162, 161, 165, 164, 0,   154, 155, 151, 0,   0,   140,
    206, 14,  315, 316, 317, 318, 319, 95,  106, 0,   235, 19,  0,   8,   129,
    0,   514, 511, 512, 500, 0,   228, 0,   0,   225, 28,  474, 168, 171, 207};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] = {
    -1,  44,   45,   46,   685, 962,  1047, 1134, 1217, 1069, 829, 362, 1258,
    488, 160,  326,  327,  415, 416,  417,  633,  619,  418,  630, 781, 631,
    776, 995,  996,  785,  419, 47,   120,  275,  475,  48,   946, 146, 301,
    289, 948,  1057, 841,  49,  50,   223,  773,  51,   262,  52,  821, 822,
    118, 919,  920,  1117, 53,  54,   55,   56,   670,  671,  802, 104, 57,
    119, 681,  825,  1131, 58,  59,   279,  60,   260,  835,  61,  62,  311,
    63,  64,   65,   232,  66,  427,  646,  67,   68,   69,   70,  71,  72,
    306, 307,  707,  73,   74,  166,  862,  75,   266,  267,  76,  283, 77,
    142, 143,  1136, 1207, 78,  79,   144,  145,  80,   81,   82,  83,  313,
    84,  333,  85,   107,  86,  87,   465,  88,   652,  89,   90,  795, 91,
    92,  218,  366,  358,  565, 219,  93,   424,  425,  638,  94,  443, 444,
    95,  149,  96,   639,  787, 97,   245,  246,  98,   450,  226, 99,  167,
    168, 1095, 1106, 1161, 453, 1030, 1166, 542,  543,  572,  881, 874, 347};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -921
static const short int yypact[] = {
    2407, -189, 331,  -39,  -45,  -4,   486,  -921, 37,   41,   -55,  1351,
    -921, -118, 92,   136,  -39,  40,   186,  -921, 1351, -921, 30,   473,
    141,  22,   216,  1546, 43,   202,  9,    9,    217,  490,  9,    305,
    320,  -39,  327,  -39,  265,  541,  237,  563,  2340, 256,  -921, -921,
    -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, -921, -921, -921, 608,  -921, 617,  412,  -921, -921, 416,
    635,  640,  531,  -921, 494,  531,  -921, -921, -921, 651,  449,  559,
    326,  -921, 676,  -921, 681,  569,  691,  569,  689,  695,  493,  411,
    -105, -104, -99,  -98,  540,  -97,  -113, -921, -110, -109, -96,  -921,
    -71,  -921, 537,  -921, -921, 1569, 580,  708,  710,  507,  716,  725,
    722,  537,  -70,  -68,  609,  304,  711,  -921, -921, 629,  464,  397,
    -921, 135,  -921, -921, -921, -921, 728,  1569, 1657, 1569, 1569, 1569,
    973,  129,  -921, -921, -921, 735,  399,  633,  740,  445,  -921, 550,
    733,  745,  451,  619,  652,  458,  653,  619,  -921, 481,  -921, 419,
    422,  423,  424,  425,  426,  429,  434,  442,  443,  452,  465,  1546,
    -921, 107,  139,  512,  2333, -921, 475,  23,   -921, 1546, 272,  -921,
    -921, 808,  809,  -921, -921, 778,  -921, -921, 3,    640,  640,  606,
    640,  930,  -921, 555,  -921, 484,  -921, 717,  820,  597,  -921, 496,
    497,  -921, -921, -921, 829,  640,  729,  498,  -13,  817,  835,  838,
    839,  557,  513,  -921, 531,  845,  514,  24,   -921, -921, -921, -73,
    -921, -921, 756,  853,  699,  856,  -921, 523,  -921, 569,  -921, -66,
    859,  -921, -921, -921, 406,  1438, 860,  1939, -921, -921, -921, -921,
    -921, 861,  3342, 600,  760,  401,  530,  -921, 640,  -921, -134, 532,
    648,  536,  872,  479,  873,  539,  -921, -921, -921, -921, -921, -921,
    -921, -921, 771,  542,  3293, 1569, 1569, 1569, 874,  863,  603,  877,
    510,  1546, 1569, 1033, 556,  1033, -921, -921, -921, 1569, 2813, 89,
    907,  908,  909,  -921, 720,  912,  -921, 653,  733,  913,  -921, 280,
    -921, 1569, -921, 910,  -921, 916,  902,  -921, 653,  1569, 822,  1569,
    1569, 1025, 1569, 1569, 1546, 1569, 1569, 1569, 1569, 85,   581,  733,
    733,  653,  816,  -921, -921, 1569, 1569, 1569, 1569, 1569, 317,  585,
    547,  1569, 685,  1569, 1569, 1569, 1569, 1569, 1569, 1569, 1569, 1569,
    1569, -921, -921, 25,   47,   52,   19,   730,  64,   -921, -921, 888,
    587,  1546, -921, 13,   -6,   -921, 310,  -58,  655,  -58,  -121, -130,
    640,  -72,  927,  666,  26,   -921, -921, -921, -921, -921, -921, 594,
    -921, -921, 265,  2625, -921, 689,  -921, -921, -921, 495,  495,  395,
    612,  1546, 938,  -921, -921, -921, -921, -921, 944,  -921, 854,  -921,
    616,  -921, 904,  651,  954,  724,  933,  -921, 55,   718,  -100, 23,
    957,  -921, -921, 960,  -921, 956,  640,  627,  625,  628,  630,  -921,
    -921, -921, -921, 807,  -921, -921, -921, -921, -921, 632,  -921, -921,
    -921, -921, 813,  -921, 643,  643,  643,  -921, -125, 809,  1546, -921,
    979,  -26,  710,  612,  981,  982,  983,  980,  984,  -77,  650,  654,
    656,  1075, 23,   1075, -921, 3342, 3342, 3342, -921, 700,  715,  -921,
    -921, -921, 658,  682,  3342, 720,  2933, 165,  1569, -921, 1569, -921,
    -921, -921, 693,  653,  733,  -921, -921, -921, -921, 2234, -921, -921,
    1569, -921, 733,  440,  -921, -921, -921, 54,   1569, 2263, 2284, 694,
    1752, 1773, 3250, 706,  1794, 1815, 1836, 1902, -921, 126,  -921, -921,
    733,  1019, 2982, 1712, 1670, 2391, 2391, -921, 50,   -921, 1181, 1569,
    1569, 686,  3315, 696,  701,  726,  1181, 978,  1105, 642,  761,  697,
    697,  1010, 1010, 1010, 1010, -921, 1045, -921, 727,  732,  1064, -921,
    -921, -921, 4,    -921, 23,   23,   941,  906,  -921, 1071, 126,  -921,
    -921, -921, 48,   958,  1074, 1081, 814,  -921, -921, 915,  -921, 1084,
    -921, 1091, -921, -921, -921, 612,  1092, -921, -921, 922,  747,  930,
    -921, -921, 523,  892,  1095, 1057, 1057, 439,  1066, 39,   777,  -921,
    871,  -921, 782,  -921, 859,  29,   -921, -60,  266,  964,  -921, 517,
    1569, 962,  23,   718,  514,  -921, -921, 2,    859,  -921, 1097, 1110,
    -921, 1134, -921, 1135, -42,  804,  899,  -921, 914,  869,  -921, -921,
    -921, -921, 931,  -87,  -921, 936,  1135, 88,   1137, 1139, 1158, -921,
    718,  -921, 826,  49,   1546, -921, 827,  1569, 1569, -921, 3185, 2958,
    -921, -921, -921, 1569, 3342, -921, 1569, 1569, -921, 3087, 1041, 1041,
    -921, -921, -921, 506,  -921, -921, -921, -921, -921, 830,  1153, -921,
    653,  -921, -921, 831,  832,  2391, 2391, 1181, 1569, 720,  720,  720,
    834,  401,  -921, -921, -3,   -103, 906,  906,  1042, 1018, -921, 23,
    -921, 1048, -921, -921, 1176, 852,  929,  -921, -921, 200,  -921, -921,
    -921, -921, -921, -28,  -921, 1051, -921, 1190, -921, -921, 393,  1192,
    1067, 859,  1070, 1198, 1199, -921, 1200, 395,  1204, 1201, 875,  -921,
    1215, -921, -921, 1218, 393,  -921, 888,  -921, -921, -921, 1219, 3342,
    1178, 619,  718,  -921, -921, -921, -921, -921, -921, 1004, 1011, 1012,
    1213, -65,  896,  1079, 1234, -921, -921, 1236, 1240, 1241, 1243, -65,
    896,  1079, 1141, 1142, 1145, 1143, 1250, 307,  1080, -921, -921, -921,
    1931, 3342, 3206, -921, 1569, 3342, 151,  879,  1569, 1569, 919,  921,
    -921, -921, -921, -921, -921, 925,  1181, 923,  733,  -921, -921, 935,
    937,  1082, 940,  942,  943,  -921, -921, 1569, 1253, 1271, 962,  -921,
    -921, 23,   1569, 163,  23,   87,   1276, -921, 1176, -921, -921, -921,
    -921, -921, 2946, 20,   945,  947,  1159, -921, 950,  1287, 859,  -921,
    -921, -921, -921, -921, -921, 953,  -921, 253,  -921, 1,    951,  720,
    955,  1569, -921, -921, 651,  651,  651,  1206, 1151, 1290, -921, 1313,
    1079, -921, 974,  972,  -921, 1073, -921, -921, 1079, -921, 689,  689,
    689,  1246, 1203, 985,  -921, -921, -921, -921, 3342, 1569, -921, 1569,
    -921, 2139, 2717, -921, -921, -921, 986,  987,  1181, -921, -921, -921,
    -921, -921, -921, 3342, 1302, -2,   619,  -921, 3342, 1569, 989,  -921,
    -921, 181,  -921, -921, 992,  992,  992,  -921, 992,  -921, -921, 992,
    992,  993,  992,  992,  992,  -921, 1279, -921, 992,  1279, 992,  994,
    992,  1279, -921, -921, -921, 992,  1279, 995,  996,  -921, -921, 999,
    1000, 859,  859,  1001, 393,  2946, -921, 1320, 1305, 1184, 393,  -921,
    6,    -921, 1340, -921, 3227, -117, -117, -117, -921, 3342, 1214, 1325,
    1008, 1006, 2305, -921, 1344, 1359, 1360, -921, -116, 523,  -116, 1569,
    1569, 962,  -921, 2172, 2193, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, -921, -921, -921, 1027, 1028, 1569, 1569, 1363, -921, 3342,
    859,  -921, 1365, -921, -921, -921, -921, -921, -921, 1367, -921, -921,
    -921, -921, -921, -921, -921, -921, 1367, -921, -921, -921, -921, 1368,
    1370, 489,  859,  859,  1031, 1035, 859,  -921, -921, 1191, 1376, 1379,
    1047, -921, 992,  1049, -921, -921, 1053, 348,  -921, -921, -921, 1152,
    1419, 1313, 1054, 1313, 1197, -921, 1050, -921, -921, 1149, 3342, 619,
    -921, -921, -921, -921, 3342, 3342, 1375, 1055, 171,  168,  495,  168,
    168,  -921, 229,  168,  168,  168,  495,  168,  495,  168,  233,  168,
    495,  168,  495,  1056, 1077, 1242, -921, 1403, 592,  -921, -921, 1284,
    -83,  1078, 1087, -921, -921, 1088, 489,  1396, 1254, -921, 8,    160,
    -921, 1569, 1259, 1569, 1569, 1569, 1569, -921, 1135, -921, 3342, -921,
    896,  -921, 1410, 1428, 1244, -921, 1307, 1569, -921, 1430, -921, -921,
    -921, 1434, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -921, -921, 859,  -921, -921, -921, 1432, 1282, -921, 1104, -921, -921,
    3342, 3342, 3342, 3342, 1107, -921, 1439, -921, -921, 859,  -921, 3342,
    1106, -921, 495,  495,  495,  1108, -921, 1445, 1340, -921, -921, -921,
    -921, -921, -921};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] = {
    -921, -921, -36,  -329, -279, -921, -873, 251,  -921, -921, -765, -197,
    -921, -673, -921, 99,   -921, -256, -921, -592, 631,  -298, -921, -921,
    -119, -921, -921, -921, 454,  668,  -921, -921, -921, 1183, 767,  -921,
    -422, 122,  1299, -120, -840, -536, -708, -921, -921, -921, -921, -921,
    76,   -921, -920, -921, 1447, -783, -921, 334,  -921, -921, -921, -921,
    -921, 657,  14,   -921, -921, -921, -921, -921, 191,  -921, -921, -41,
    -921, 246,  -921, -921, -921, -921, -921, -921, -921, 488,  -921, 1225,
    1036, -921, -921, -921, -921, -921, -921, -921, 946,  -921, -921, -921,
    1443, -921, -921, -318, 991,  -921, -444, -921, 1453, 1174, -562, -921,
    -921, -921, 1455, 1182, -921, -921, -921, -921, -921, -921, -921, -921,
    385,  -921, -921, -921, -921, -921, -921, -921, -921, -921, -921, -921,
    -344, -352, -921, -921, -921, 963,  837,  690,  -921, -921, 821,  -921,
    -921, -921, -921, -921, -921, -921, 1040, -921, -921, -23,  -921, -921,
    1146, 257,  -453, -463, -254, 450,  372,  -18,  -607, -921, -921, 746,
    1144};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -566
static const short int yytable[] = {
    220,  454,  367,  814,  557,  662,  851,  517,  252,  227,  640,  556,
    956,  1043, 125,  477,  -423, 895,  1088, 836,  290,  291,  413,  554,
    566,  -123, 413,  476,  -125, 259,  532,  586,  587,  815,  479,  654,
    777,  934,  161,  426,  121,  588,  809,  650,  123,  -103, 228,  1237,
    -103, -103, -124, 783,  833,  -310, -307, 515,  757,  817,  515,  -306,
    -308, -309, 292,  126,  389,  390,  391,  392,  393,  394,  395,  699,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  620,  281,  294,  315,  520,  316,  516,  -311, 944,  516,  389,
    390,  391,  392,  393,  394,  395,  649,  396,  397,  398,  399,  400,
    401,  402,  403,  404,  405,  406,  407,  408,  105,  863,  817,  714,
    704,  644,  818,  817,  1129, 817,  302,  623,  1135, 1135, 651,  636,
    923,  990,  686,  127,  848,  328,  1031, 774,  684,  157,  753,  637,
    754,  909,  147,  222,  100,  705,  1032, 21,   339,  341,  342,  343,
    344,  346,  621,  115,  459,  389,  390,  391,  392,  393,  394,  395,
    108,  396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,
    407,  408,  548,  818,  624,  549,  834,  903,  818,  264,  818,  775,
    381,  -63,  1149, 148,  842,  382,  348,  625,  1132, 128,  381,  -423,
    734,  521,  758,  420,  464,  109,  150,  733,  21,   645,  737,  288,
    726,  464,  626,  224,  706,  471,  485,  687,  859,  -103, 428,  288,
    -103, -103, 288,  288,  910,  -310, -307, 897,  755,  106,  480,  -306,
    -308, -309, 293,  1133, 486,  460,  461,  462,  463,  1038, 122,  627,
    849,  1123, 124,  969,  229,  1238, 728,  1128, 129,  729,  810,  288,
    911,  480,  464,  295,  293,  759,  295,  657,  -311, 945,  720,  979,
    628,  768,  1244, 819,  820,  21,   389,  390,  391,  392,  393,  394,
    395,  -89,  396,  397,  398,  399,  400,  401,  402,  403,  404,  405,
    406,  407,  408,  162,  1151, 151,  533,  534,  535,  991,  163,  164,
    997,  329,  154,  544,  816,  165,  636,  349,  230,  993,  546,  595,
    330,  464,  852,  231,  1246, 270,  637,  550,  641,  860,  861,  596,
    896,  1089, 561,  993,  464,  1042, 350,  -136, 472,  -137, 567,  571,
    573,  574,  576,  577,  578,  -423, 580,  581,  582,  583,  579,  414,
    1120, 1121, -123, 414,  414,  -125, 590,  591,  592,  593,  594,  843,
    1253, 778,  602,  607,  608,  609,  610,  611,  612,  613,  614,  615,
    616,  617,  853,  -124, 784,  290,  291,  618,  700,  -57,  683,  740,
    914,  994,  1223, 155,  101,  153,  629,  635,  515,  715,  383,  550,
    831,  489,  1040, 661,  884,  152,  384,  994,  385,  1224, 221,  1159,
    1041, 949,  239,  421,  241,  906,  584,  665,  998,  955,  830,  957,
    490,  271,  887,  386,  890,  891,  892,  672,  516,  857,  156,  272,
    387,  1189, 1190, 666,  102,  1193, 389,  390,  391,  392,  393,  394,
    395,  1202, 396,  397,  398,  399,  400,  401,  402,  403,  404,  405,
    406,  407,  408,  894,  273,  597,  336,  337,  169,  170,  171,  172,
    173,  174,  526,  430,  431,  667,  433,  234,  1137, 1138, 175,  176,
    970,  235,  898,  801,  702,  177,  178,  274,  1252, 915,  1147, 456,
    1148, 527,  328,  1181, 328,  1221, 876,  916,  1222, 540,  1064, 1065,
    1066, 179,  237,  233,  769,  103,  236,  917,  180,  730,  1059, 731,
    242,  243,  1182, 244,  981,  238,  1063, 181,  541,  182,  183,  184,
    240,  736,  185,  682,  247,  804,  1183, 738,  663,  741,  664,  939,
    248,  978,  519,  110,  296,  805,  668,  877,  599,  600,  918,  601,
    1108, 1265, 249,  1225, 1112, 1184, 1226, 1225, 186,  1114, 1227, 669,
    761,  762,  559,  560,  760,  642,  643,  381,  1270, 823,  824,  297,
    382,  964,  965,  187,  411,  253,  111,  878,  1232, 1233, 1234, 1235,
    1203, 1204, 1205, 1206, -198, 1211, 1045, 1213, 806,  879,  421,  254,
    169,  170,  171,  172,  173,  174,  296,  1185, 255,  412,  1049, 1050,
    1051, 256,  175,  176,  719,  257,  721,  880,  938,  177,  178,  317,
    1163, 1164, 258,  1167, 1168, 1169, 318,  259,  1171, 1186, 1173, 261,
    1175, 297,  1177, 1085, 263,  179,  298,  899,  900,  112,  1187, 265,
    180,  827,  268,  188,  299,  401,  402,  403,  404,  405,  406,  407,
    408,  182,  183,  184,  113,  269,  653,  276,  803,  807,  658,  300,
    277,  278,  189,  114,  169,  170,  171,  172,  173,  174,  280,  319,
    320,  282,  284,  286,  115,  287,  175,  176,  865,  866,  285,  303,
    186,  177,  178,  304,  869,  305,  116,  870,  871,  1188, 603,  309,
    308,  321,  604,  404,  405,  406,  407,  408,  310,  179,  312,  331,
    691,  332,  334,  335,  180,  338,  351,  352,  353,  889,  117,  354,
    355,  888,  356,  357,  359,  182,  183,  184,  360,  163,  164,  361,
    363,  364,  368,  369,  365,  190,  370,  371,  372,  373,  374,  191,
    192,  375,  193,  -415, -279, 194,  376,  195,  196,  197,  739,  198,
    -279, 199,  377,  378,  186,  402,  403,  404,  405,  406,  407,  408,
    379,  1090, 200,  201,  202,  203,  204,  205,  206,  207,  208,  209,
    210,  380,  211,  212,  213,  214,  388,  422,  423,  215,  426,  216,
    322,  323,  324,  432,  445,  325,  446,  448,  447,  169,  170,  171,
    172,  173,  174,  449,  455,  451,  452,  466,  457,  458,  467,  175,
    176,  468,  469,  470,  1162, 968,  177,  178,  473,  973,  974,  471,
    1170, 474,  1172, 481,  482,  483,  1176, 484,  1178, 485,  487,  501,
    512,  513,  179,  514,  518,  568,  522,  523,  987,  180,  524,  525,
    528,  529,  530,  992,  531,  538,  536,  537,  605,  161,  182,  183,
    184,  389,  390,  391,  392,  393,  394,  395,  545,  396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  551,  552,
    553,  21,   1048, 555,  564,  558,  562,  563,  1053, 186,  585,  589,
    1058, 598,  622,  632,  634,  647,  655,  656,  659,  203,  204,  205,
    206,  207,  208,  209,  210,  673,  211,  212,  213,  214,  1071, 674,
    1072, 215,  464,  216,  677,  675,  1218, 569,  676,  679,  680,  682,
    688,  684,  1086, 689,  690,  692,  693,  694,  696,  695,  1091, 697,
    1262, 1263, 698,  1264, 169,  170,  171,  172,  173,  174,  703,  288,
    709,  710,  711,  722,  712,  716,  175,  176,  713,  717,  723,  718,
    724,  177,  178,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  203,  204,  205,  206,  207,  208,  209,  210,  179,  211,  212,
    213,  214,  756,  725,  180,  606,  763,  216,  169,  170,  171,  172,
    173,  174,  732,  744,  765,  182,  183,  184,  408,  766,  175,  176,
    1048, 1150, 570,  748,  769,  177,  178,  575,  397,  398,  399,  400,
    401,  402,  403,  404,  405,  406,  407,  408,  1156, 1157, 767,  772,
    770,  179,  779,  780,  186,  771,  782,  786,  180,  788,  169,  170,
    171,  172,  173,  174,  789,  464,  791,  793,  799,  182,  183,  184,
    175,  176,  792,  794,  796,  797,  800,  177,  178,  317,  398,  399,
    400,  401,  402,  403,  404,  405,  406,  407,  408,  801,  808,  811,
    812,  1210, 1058, 179,  1058, 813,  826,  837,  186,  828,  180,  400,
    401,  402,  403,  404,  405,  406,  407,  408,  838,  839,  840,  182,
    183,  184,  641,  434,  844,  846,  203,  204,  205,  206,  207,  208,
    209,  210,  847,  211,  212,  213,  214,  850,  845,  856,  215,  854,
    216,  855,  858,  873,  864,  883,  882,  901,  885,  886,  186,  893,
    902,  904,  1048, 783,  1248, 1249, 1250, 1251, 169,  170,  171,  172,
    173,  174,  906,  907,  912,  913,  435,  921,  1259, 922,  175,  176,
    924,  925,  926,  927,  930,  177,  178,  436,  929,  169,  170,  171,
    172,  173,  174,  345,  931,  971,  437,  932,  972,  933,  936,  175,
    176,  179,  937,  940,  438,  439,  177,  178,  180,  943,  941,  942,
    947,  944,  950,  951,  440,  441,  442,  952,  953,  182,  183,  184,
    958,  959,  179,  954,  960,  961,  963,  966,  988,  180,  1096, 1097,
    975,  1098, 976,  980,  1099, 1100, 977,  1102, 1103, 1104, 182,  183,
    184,  1107, 989,  1109, 982,  1111, 983,  999,  186,  984,  1113, 985,
    986,  1033, 1052, 1034, 1036, 1035, 1037, 1039, 1044, 1055, 1067, 1046,
    1062, 203,  204,  205,  206,  207,  208,  209,  210,  186,  211,  212,
    213,  214,  1054, 1061, 1060, 215,  1068, 216,  169,  170,  171,  172,
    173,  174,  1087, 1105, 1125, 1126, 1070, 1083, 1084, 1092, 175,  176,
    1094, 1101, 1110, 1115, 1116, 177,  178,  1118, 1119, 1122, 1127, 1130,
    1139, 1140, 1141, 1142, 1144, 203,  204,  205,  206,  207,  208,  209,
    210,  179,  211,  212,  213,  214,  1145, 1146, 180,  215,  1158, 216,
    1154, 1155, 1160, 1165, 1191, 1179, 21,   1180, 1192, 182,  183,  184,
    1195, 1196, 1197, 1208, 131,  132,  1214, 1199, 1198, 1215, 1200, 1201,
    1212, 1056, 1216, 1219, 1220, 1228, 1230, 203,  204,  205,  206,  207,
    208,  209,  210,  1231, 211,  212,  213,  214,  186,  133,  1236, 215,
    1242, 216,  1229, 1239, 1247, 1243, 169,  170,  171,  172,  173,  174,
    1240, 1241, 1254, 1255, 1256, 134,  1257, 1260, 175,  176,  1261, 1266,
    1267, 135,  1268, 177,  178,  945,  1269, 1271, 1273, 1272, 1245, 1093,
    905,  935,  478,  832,  314,  130,  1194, 1274, 136,  429,  678,  179,
    708,  648,  217,  500,  928,  137,  180,  131,  491,  158,  138,  159,
    701,  511,  790,  908,  798,  539,  1174, 182,  183,  184,  660,  1124,
    0,    875,  547,  0,    0,    0,    0,    0,    0,    0,    0,    1209,
    492,  0,    0,    0,    0,    203,  204,  205,  206,  207,  208,  209,
    210,  0,    211,  212,  213,  214,  186,  0,    493,  225,  0,    216,
    0,    0,    0,    0,    494,  139,  203,  204,  205,  206,  207,  208,
    209,  210,  0,    211,  212,  213,  214,  0,    140,  0,    215,  495,
    216,  169,  170,  171,  172,  173,  174,  0,    496,  0,    0,    0,
    0,    497,  0,    175,  176,  0,    0,    0,    0,    0,    177,  178,
    169,  170,  171,  172,  173,  174,  0,    0,    0,    0,    141,  0,
    0,    0,    175,  176,  0,    0,    179,  0,    0,    177,  178,  0,
    0,    180,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    182,  183,  184,  179,  0,    0,    139,  0,    0,    0,
    180,  0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    498,
    0,    182,  183,  184,  0,    203,  204,  205,  206,  207,  208,  209,
    210,  186,  211,  212,  213,  214,  0,    0,    0,    215,  0,    216,
    0,    0,    0,    0,    169,  170,  171,  172,  173,  174,  0,    0,
    186,  499,  0,    0,    0,    0,    175,  176,  0,    0,    0,    0,
    0,    177,  178,  392,  393,  394,  395,  0,    396,  397,  398,  399,
    400,  401,  402,  403,  404,  405,  406,  407,  408,  179,  0,    0,
    0,    0,    0,    0,    180,  0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    182,  183,  184,  391,  392,  393,  394,
    395,  0,    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,
    406,  407,  408,  203,  204,  205,  206,  207,  208,  209,  210,  0,
    211,  212,  213,  214,  340,  0,    0,    215,  0,    216,  389,  390,
    391,  392,  393,  394,  395,  0,    396,  397,  398,  399,  400,  401,
    402,  403,  404,  405,  406,  407,  408,  389,  390,  391,  392,  393,
    394,  395,  0,    396,  397,  398,  399,  400,  401,  402,  403,  404,
    405,  406,  407,  408,  389,  390,  391,  392,  393,  394,  395,  0,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  389,  390,  391,  392,  393,  394,  395,  0,    396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  389,  390,
    391,  392,  393,  394,  395,  0,    396,  397,  398,  399,  400,  401,
    402,  403,  404,  405,  406,  407,  408,  0,    0,    0,    203,  204,
    205,  206,  207,  208,  209,  210,  0,    211,  212,  213,  214,  0,
    0,    0,    225,  0,    216,  0,    0,    0,    0,    203,  204,  205,
    206,  207,  208,  209,  210,  0,    211,  212,  213,  214,  0,    0,
    0,    215,  0,    216,  389,  390,  391,  392,  393,  394,  395,  0,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  0,    -565, 0,    0,    0,    0,    0,    0,    -565, -565, -565,
    -565, -565, -565, -565, 0,    -565, -565, -565, -565, -565, -565, -565,
    -565, -565, -565, -565, -565, -565, 0,    0,    0,    0,    0,    -565,
    0,    0,    -565, -565, 0,    502,  0,    0,    0,    0,    0,    0,
    0,    203,  204,  205,  206,  207,  208,  209,  210,  0,    211,  212,
    213,  214,  -565, 0,    0,    215,  0,    216,  0,    503,  0,    0,
    -565, -565, -565, -565, -565, 0,    0,    0,    0,    0,    -565, 0,
    0,    0,    0,    0,    0,    504,  0,    0,    -565, 0,    0,    -565,
    0,    505,  0,    0,    0,    0,    0,    -565, 0,    0,    -565, 0,
    0,    -565, -565, 0,    0,    0,    0,    0,    506,  0,    0,    -565,
    0,    0,    0,    0,    0,    507,  -565, 0,    -565, 0,    508,  0,
    0,    0,    -565, -565, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    -565, 0,    0,
    0,    -565, 0,    0,    0,    745,  -565, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    -565, 0,    0,    0,    0,    0,    0,
    0,    0,    746,  0,    0,    0,    -565, 0,    0,    0,    0,    0,
    0,    0,    0,    -565, 0,    0,    0,    0,    509,  0,    0,    749,
    0,    0,    0,    0,    0,    0,    0,    -565, 0,    0,    0,    0,
    -565, 389,  390,  391,  392,  393,  394,  395,  750,  396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  510,  0,
    0,    -565, -565, 0,    -565, 751,  -565, -565, 0,    -565, 389,  390,
    391,  392,  393,  394,  395,  0,    396,  397,  398,  399,  400,  401,
    402,  403,  404,  405,  406,  407,  408,  389,  390,  391,  392,  393,
    394,  395,  0,    396,  397,  398,  399,  400,  401,  402,  403,  404,
    405,  406,  407,  408,  0,    0,    0,    0,    0,    0,    0,    0,
    0,    -565, 0,    0,    0,    0,    0,    -565, 0,    0,    0,    752,
    389,  390,  391,  392,  393,  394,  395,  0,    396,  397,  398,  399,
    400,  401,  402,  403,  404,  405,  406,  407,  408,  0,    0,    0,
    -565, -565, 0,    0,    -565, 389,  390,  391,  392,  393,  394,  395,
    0,    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,
    407,  408,  389,  390,  391,  392,  393,  394,  395,  0,    396,  397,
    398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  389,
    390,  391,  392,  393,  394,  395,  0,    396,  397,  398,  399,  400,
    401,  402,  403,  404,  405,  406,  407,  408,  0,    0,    0,    0,
    250,  251,  0,    389,  390,  391,  392,  393,  394,  395,  0,    396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2,    3,
    0,    0,    4,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,    0,    0,    0,    0,    0,
    0,    0,    6,    0,    -566, -566, -566, -566, 1,    396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  7,    8,
    9,    0,    0,    0,    0,    0,    10,   0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    2,    3,    0,    0,    4,    0,    0,
    0,    11,   0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    5,    0,    12,   0,    0,    0,    0,    0,    6,    0,    0,
    13,   0,    0,    0,    0,    0,    14,   0,    1073, 15,   0,    0,
    0,    0,    0,    0,    0,    7,    8,    9,    0,    0,    0,    0,
    0,    10,   0,    0,    16,   0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1152, 0,    0,    11,   0,    0,    17,
    18,   0,    19,   0,    0,    0,    20,   0,    0,    0,    12,   0,
    0,    21,   1153, 0,    22,   23,   0,    13,   0,    0,    0,    0,
    0,    14,   0,    0,    15,   0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    16,
    0,    24,   0,    25,   735,  26,   0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    17,   18,   0,    19,   0,    27,
    0,    20,   0,    0,    0,    28,   0,    0,    21,   742,  0,    22,
    23,   29,   0,    30,   31,   32,   0,    0,    0,    0,    33,   34,
    0,    0,    0,    0,    0,    0,    743,  0,    0,    0,    0,    0,
    0,    35,   36,   37,   0,    38,   0,    409,  24,   0,    25,   0,
    26,   410,  0,    1143, 0,    0,    0,    0,    0,    39,   0,    0,
    0,    0,    40,   41,   42,   43,   27,   2,    3,    0,    0,    4,
    28,   0,    0,    0,    0,    0,    0,    0,    29,   0,    30,   31,
    32,   0,    0,    5,    0,    33,   34,   0,    0,    0,    0,    6,
    0,    0,    0,    0,    0,    0,    0,    0,    35,   36,   37,   0,
    38,   0,    0,    0,    0,    0,    0,    7,    8,    9,    0,    0,
    0,    0,    0,    10,   39,   0,    0,    0,    0,    40,   41,   42,
    43,   0,    0,    389,  390,  391,  392,  393,  394,  395,  11,   396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    12,   0,    0,    0,    0,    0,    0,    0,    0,    13,   0,    0,
    0,    0,    0,    14,   0,    0,    15,   0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    16,   0,    0,    0,    0,    1074, 1075, 1076, 1077, 1078, 0,
    0,    0,    0,    0,    0,    0,    0,    0,    17,   18,   0,    19,
    0,    0,    0,    20,   0,    0,    0,    0,    0,    0,    21,   0,
    0,    22,   23,   389,  390,  391,  392,  393,  394,  395,  0,    396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    24,   0,
    25,   0,    26,   0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    27,   0,    0,    0,
    0,    0,    28,   0,    0,    0,    0,    0,    0,    0,    29,   1079,
    30,   31,   32,   0,    0,    0,    0,    33,   34,   0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    35,   36,
    37,   0,    38,   0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    39,   0,    0,    0,    0,    40,
    41,   42,   43,   389,  390,  391,  392,  393,  394,  395,  0,    396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    1080, 1081, 0,    1082, 389,  390,  391,  392,  393,  394,  395,  0,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  1000, 1001, 1002, 1003, 390,  391,  392,  393,  394,  395,  1004,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408,  0,    0,    0,    0,    1005, 1006, 0,    0,    0,    0,    0,
    1007, 0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1008,
    0,    0,    0,    0,    0,    0,    0,    1009, 0,    0,    0,    0,
    0,    1010, 0,    0,    0,    0,    0,    345,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1011, 1012,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1013, 1014, 0,    0,    0,    1015, 1016,
    1017, 389,  390,  391,  392,  393,  394,  395,  0,    396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  0,    0,
    0,    0,    0,    1018, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    1019, 0,
    1020, 0,    0,    0,    0,    0,    727,  0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    1021, 0,    0,    1022, 1023, 1024, 1025,
    1026, 0,    0,    0,    0,    0,    0,    868,  0,    0,    0,    0,
    0,    0,    0,    0,    0,    1027, 1028, 0,    0,    0,    0,    0,
    0,    1029, 872,  389,  390,  391,  392,  393,  394,  395,  0,    396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    389,  390,  391,  392,  393,  394,  395,  0,    396,  397,  398,  399,
    400,  401,  402,  403,  404,  405,  406,  407,  408,  389,  390,  391,
    392,  393,  394,  395,  0,    396,  397,  398,  399,  400,  401,  402,
    403,  404,  405,  406,  407,  408,  0,    0,    389,  390,  391,  392,
    393,  394,  395,  1132, 396,  397,  398,  399,  400,  401,  402,  403,
    404,  405,  406,  407,  408,  867,  0,    0,    0,    0,    0,    0,
    0,    747,  0,    0,    0,    0,    0,    0,    515,  0,    0,    0,
    0,    0,    967,  389,  390,  391,  392,  393,  394,  395,  1133, 396,
    397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,  408,
    0,    389,  390,  391,  392,  393,  394,  395,  516,  396,  397,  398,
    399,  400,  401,  402,  403,  404,  405,  406,  407,  408,  0,    0,
    0,    0,    0,    764,  389,  390,  391,  392,  393,  394,  395,  0,
    396,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,  407,
    408};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    21,  0,   0,   25,  29,  0,   0,   0,   1,  5,   0,   0,   0,   0,   9,
    13,  17,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   35,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    23,  0,   0,   27,  31,  0,   0,   0,   3,  7,   0,   0,   0,   0,   11,
    15,  19,  0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   37,  0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   173, 0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   41,  0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   39,  0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   33,  0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   43,  0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   45,  0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   47,  0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   49,  0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   175, 0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   51,
    0,   0,   0,   0,   0,   0,   53,  55,  57, 59,  61,  63,  65,  0,   67,
    69,  71,  73,  75,  77,  79,  81,  83,  85, 87,  89,  91,  0,   0,   0,
    0,   0,   93,  0,   0,   95,  97,  0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   99,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  101, 103, 105, 107, 109, 0,
    0,   0,   0,   0,   111, 0,   0,   0,   0,  0,   0,   0,   0,   0,   113,
    0,   0,   115, 0,   0,   0,   0,   0,   0,  0,   117, 0,   0,   119, 0,
    0,   121, 123, 0,   0,   0,   0,   0,   0,  0,   0,   125, 0,   0,   0,
    0,   0,   0,   127, 0,   129, 0,   0,   0,  0,   0,   131, 133, 0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    135, 0,   0,   0,   137, 0,   0,   0,   0,  139, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   141, 0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   143, 0,   0,   0,   0,   0,  0,   0,   0,   145, 0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   147, 0,
    0,   0,   0,   149, 0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   151, 153,
    0,   155, 0,   157, 159, 0,   161, 0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   163, 0,
    0,   0,   0,   0,   165, 0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   167, 169, 0,   0,   171, 0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,  0,   0,   0,   0};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] = {
    0, 333, 0, 333, 0, 330, 0, 330, 0, 329, 0, 329, 0, 331, 0, 331, 0, 332,
    0, 332, 0, 305, 0, 305, 0, 303, 0, 303, 0, 304, 0, 304, 0, 552, 0, 334,
    0, 334, 0, 552, 0, 89,  0, 29,  0, 437, 0, 59,  0, 422, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 566,
    0, 566, 0, 566, 0, 566, 0, 566, 0, 566, 0, 73,  0, 148, 0};

static const short int yycheck[] = {
    23,   255,  199,  676,  356,  449,  714,  305,  44,   27,   16,   355,
    852,  933,  69,   271,  3,    20,   20,   692,  140,  141,  3,    352,
    368,  3,    3,    3,    3,    3,    328,  383,  384,  4,    107,  107,
    628,  820,  8,    36,   3,    385,  3,    173,  3,    158,  3,    130,
    158,  158,  3,    3,    50,   158,  158,  3,    6,    117,  3,    158,
    158,  158,  158,  118,  10,   11,   12,   13,   14,   15,   16,   196,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   414,  127,  158,  158,  223,  158,  39,   158,  158,  39,   10,
    11,   12,   13,   14,   15,   16,   223,  18,   19,   20,   21,   22,
    23,   24,   25,   26,   27,   28,   29,   30,   155,  724,  117,  196,
    146,  179,  182,  117,  1044, 117,  149,  63,   245,  245,  260,  118,
    805,  898,  234,  190,  223,  160,  118,  135,  243,  19,   16,   130,
    18,   173,  264,  25,   337,  175,  130,  193,  175,  176,  177,  178,
    179,  180,  414,  214,  173,  10,   11,   12,   13,   14,   15,   16,
    213,  18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
    29,   30,   93,   182,  120,  96,   184,  779,  182,  113,  182,  187,
    215,  129,  1067, 313,  238,  215,  69,   135,  40,   256,  225,  3,
    556,  339,  156,  225,  338,  213,  118,  555,  193,  271,  566,  340,
    545,  338,  154,  3,    246,  338,  338,  479,  175,  338,  223,  340,
    338,  338,  340,  340,  260,  338,  338,  338,  588,  276,  338,  338,
    338,  338,  338,  83,   285,  258,  259,  260,  261,  922,  213,  187,
    339,  1036, 213,  104,  213,  340,  93,   1042, 315,  96,   223,  340,
    292,  338,  338,  338,  338,  598,  338,  245,  338,  338,  530,  882,
    212,  606,  1198, 339,  340,  193,  10,   11,   12,   13,   14,   15,
    16,   234,  18,   19,   20,   21,   22,   23,   24,   25,   26,   27,
    28,   29,   30,   273,  1069, 213,  329,  330,  331,  901,  280,  281,
    904,  9,    274,  338,  287,  287,  118,  190,  118,  158,  345,  6,
    20,   338,  238,  318,  1201, 3,    130,  242,  338,  284,  285,  18,
    339,  339,  361,  158,  338,  340,  213,  337,  268,  337,  369,  370,
    371,  372,  373,  374,  375,  340,  377,  378,  379,  380,  376,  340,
    1033, 1034, 340,  340,  340,  340,  389,  390,  391,  392,  393,  700,
    1212, 629,  397,  398,  399,  400,  401,  402,  403,  404,  405,  406,
    407,  408,  715,  340,  340,  509,  510,  339,  512,  338,  339,  341,
    3,    234,  230,  213,  69,   16,   338,  421,  3,    525,  299,  242,
    687,  3,    157,  447,  756,  277,  307,  234,  277,  249,  277,  1092,
    167,  843,  37,   338,  39,   338,  341,  32,   341,  851,  686,  853,
    26,   107,  763,  296,  765,  766,  767,  457,  39,   720,  256,  117,
    305,  1118, 1119, 52,   117,  1122, 10,   11,   12,   13,   14,   15,
    16,   109,  18,   19,   20,   21,   22,   23,   24,   25,   26,   27,
    28,   29,   30,   769,  146,  156,  339,  340,  3,    4,    5,    6,
    7,    8,    3,    237,  238,  90,   240,  270,  1050, 1051, 17,   18,
    341,  3,    773,  56,   514,  24,   25,   173,  1208, 108,  1064, 257,
    1066, 26,   529,  18,   531,  338,  4,    118,  341,  3,    958,  959,
    960,  44,   213,  31,   3,    190,  34,   130,  51,   548,  948,  550,
    263,  264,  41,   266,  884,  213,  956,  62,   26,   64,   65,   66,
    213,  564,  69,   26,   3,    106,  57,   107,  53,   572,  55,   830,
    315,  882,  308,  69,   81,   118,  163,  53,   13,   14,   169,  16,
    1017, 1238, 3,    338,  1021, 80,   341,  338,  99,   1026, 341,  180,
    599,  600,  298,  299,  598,  271,  272,  606,  1257, 319,  320,  112,
    606,  282,  283,  118,  117,  337,  108,  89,   4,    5,    6,    7,
    252,  253,  254,  255,  118,  1141, 935,  1143, 169,  103,  338,  3,
    3,    4,    5,    6,    7,    8,    81,   130,  3,    146,  940,  941,
    942,  213,  17,   18,   529,  213,  531,  125,  829,  24,   25,   26,
    1099, 1100, 3,    1102, 1103, 1104, 33,   3,    1107, 156,  1109, 116,
    1111, 112,  1113, 980,  158,  44,   117,  774,  775,  171,  169,  8,
    51,   684,  213,  190,  127,  23,   24,   25,   26,   27,   28,   29,
    30,   64,   65,   66,   190,  118,  432,  3,    666,  667,  436,  146,
    3,    116,  213,  201,  3,    4,    5,    6,    7,    8,    3,    86,
    87,   8,    3,    288,  214,  161,  17,   18,   727,  728,  213,  127,
    99,   24,   25,   3,    735,  3,    228,  738,  739,  228,  33,   3,
    213,  112,  37,   26,   27,   28,   29,   30,   3,    44,   8,    20,
    486,  104,  270,  338,  51,   9,    3,    340,  107,  764,  256,  3,
    299,  763,  196,  14,   3,    64,   65,   66,   301,  280,  281,  136,
    104,  299,  277,  340,  107,  288,  340,  340,  340,  340,  340,  294,
    295,  340,  297,  298,  299,  300,  340,  302,  303,  304,  338,  306,
    307,  308,  340,  340,  99,   24,   25,   26,   27,   28,   29,   30,
    340,  990,  321,  322,  323,  324,  325,  326,  327,  328,  329,  330,
    331,  340,  333,  334,  335,  336,  298,  3,    3,    340,  36,   342,
    207,  208,  209,  213,  265,  212,  338,  3,    107,  3,    4,    5,
    6,    7,    8,    234,  3,    337,  337,  18,   107,  339,  3,    17,
    18,   3,    3,    286,  1098, 868,  24,   25,   3,    872,  873,  338,
    1106, 339,  1108, 99,   3,    158,  1112, 3,    1114, 338,  3,    3,
    3,    265,  44,   107,  338,  47,   338,  223,  895,  51,   338,  3,
    3,    338,  107,  902,  338,  278,  8,    20,   199,  8,    64,   65,
    66,   10,   11,   12,   13,   14,   15,   16,   340,  18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   3,    3,
    3,    193,  937,  3,    14,   4,    8,    3,    943,  99,   341,  107,
    947,  340,  196,  39,   341,  274,  3,    265,  338,  324,  325,  326,
    327,  328,  329,  330,  331,  3,    333,  334,  335,  336,  969,  3,
    971,  340,  338,  342,  48,   99,   1151, 133,  340,  3,    234,  26,
    3,    243,  980,  3,    8,    338,  341,  339,  161,  339,  993,  339,
    1226, 1227, 161,  1229, 3,    4,    5,    6,    7,    8,    3,    340,
    3,    3,    3,    287,  8,    339,  17,   18,   8,    339,  279,  339,
    338,  24,   25,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   324,  325,  326,  327,  328,  329,  330,  331,  44,   333,  334,
    335,  336,  3,    341,  51,   340,  340,  342,  3,    4,    5,    6,
    7,    8,    341,  341,  340,  64,   65,   66,   30,   340,  17,   18,
    1067, 1068, 224,  341,  3,    24,   25,   26,   19,   20,   21,   22,
    23,   24,   25,   26,   27,   28,   29,   30,   1087, 1088, 340,  3,
    341,  44,   129,  165,  99,   341,  3,    117,  51,   3,    3,    4,
    5,    6,    7,    8,    3,    338,  272,  3,    196,  64,   65,   66,
    17,   18,   179,  4,    4,    175,  3,    24,   25,   26,   20,   21,
    22,   23,   24,   25,   26,   27,   28,   29,   30,   56,   48,   338,
    245,  1140, 1141, 44,   1143, 339,  158,  26,   99,   163,  51,   22,
    23,   24,   25,   26,   27,   28,   29,   30,   26,   3,    3,    64,
    65,   66,   338,  213,  245,  276,  324,  325,  326,  327,  328,  329,
    330,  331,  223,  333,  334,  335,  336,  223,  246,  3,    340,  26,
    342,  26,   340,  126,  341,  16,   340,  129,  341,  341,  99,   341,
    158,  129,  1201, 3,    1203, 1204, 1205, 1206, 3,    4,    5,    6,
    7,    8,    338,  262,  141,  3,    264,  3,    1219, 130,  17,   18,
    130,  3,    3,    3,    3,    24,   25,   277,  4,    3,    4,    5,
    6,    7,    8,    242,  341,  338,  288,  4,    341,  3,    3,    17,
    18,   44,   48,   223,  298,  299,  24,   25,   51,   20,   223,  223,
    340,  158,  4,    3,    310,  311,  312,  3,    3,    64,   65,   66,
    107,  107,  44,   8,    107,  110,  4,    175,  3,    51,   1001, 1002,
    341,  1004, 341,  340,  1007, 1008, 341,  1010, 1011, 1012, 64,   65,
    66,   1016, 3,    1018, 341,  1020, 341,  3,    99,   341,  1025, 341,
    341,  340,  80,   340,  338,  130,  3,    338,  341,  3,    48,   340,
    223,  324,  325,  326,  327,  328,  329,  330,  331,  99,   333,  334,
    335,  336,  159,  339,  338,  340,  111,  342,  3,    4,    5,    6,
    7,    8,    20,   44,   4,    20,   341,  341,  341,  340,  17,   18,
    340,  340,  340,  340,  340,  24,   25,   340,  340,  340,  158,  3,
    130,  20,   338,  341,  4,    324,  325,  326,  327,  328,  329,  330,
    331,  44,   333,  334,  335,  336,  3,    3,    51,   340,  3,    342,
    341,  341,  5,    4,    341,  5,    193,  5,    341,  64,   65,   66,
    189,  5,    3,    231,  33,   34,   189,  1130, 341,  339,  341,  338,
    338,  80,   245,  20,   341,  341,  156,  324,  325,  326,  327,  328,
    329,  330,  331,  4,    333,  334,  335,  336,  99,   62,   130,  340,
    20,   342,  341,  341,  161,  167,  3,    4,    5,    6,    7,    8,
    341,  341,  20,   3,    188,  82,   127,  5,    17,   18,   4,    7,
    158,  90,   338,  24,   25,   338,  7,    341,  3,    341,  1199, 997,
    784,  822,  271,  688,  157,  10,   1124, 1268, 109,  236,  471,  44,
    518,  429,  23,   293,  811,  118,  51,   33,   34,   20,   123,  20,
    513,  295,  641,  789,  659,  335,  1110, 64,   65,   66,   446,  1037,
    -1,   743,  346,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   80,
    62,   -1,   -1,   -1,   -1,   324,  325,  326,  327,  328,  329,  330,
    331,  -1,   333,  334,  335,  336,  99,   -1,   82,   340,  -1,   342,
    -1,   -1,   -1,   -1,   90,   178,  324,  325,  326,  327,  328,  329,
    330,  331,  -1,   333,  334,  335,  336,  -1,   193,  -1,   340,  109,
    342,  3,    4,    5,    6,    7,    8,    -1,   118,  -1,   -1,   -1,
    -1,   123,  -1,   17,   18,   -1,   -1,   -1,   -1,   -1,   24,   25,
    3,    4,    5,    6,    7,    8,    -1,   -1,   -1,   -1,   231,  -1,
    -1,   -1,   17,   18,   -1,   -1,   44,   -1,   -1,   24,   25,   -1,
    -1,   51,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   64,   65,   66,   44,   -1,   -1,   178,  -1,   -1,   -1,
    51,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   193,
    -1,   64,   65,   66,   -1,   324,  325,  326,  327,  328,  329,  330,
    331,  99,   333,  334,  335,  336,  -1,   -1,   -1,   340,  -1,   342,
    -1,   -1,   -1,   -1,   3,    4,    5,    6,    7,    8,    -1,   -1,
    99,   231,  -1,   -1,   -1,   -1,   17,   18,   -1,   -1,   -1,   -1,
    -1,   24,   25,   13,   14,   15,   16,   -1,   18,   19,   20,   21,
    22,   23,   24,   25,   26,   27,   28,   29,   30,   44,   -1,   -1,
    -1,   -1,   -1,   -1,   51,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   64,   65,   66,   12,   13,   14,   15,
    16,   -1,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,
    28,   29,   30,   324,  325,  326,  327,  328,  329,  330,  331,  -1,
    333,  334,  335,  336,  99,   -1,   -1,   340,  -1,   342,  10,   11,
    12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,   23,
    24,   25,   26,   27,   28,   29,   30,   10,   11,   12,   13,   14,
    15,   16,   -1,   18,   19,   20,   21,   22,   23,   24,   25,   26,
    27,   28,   29,   30,   10,   11,   12,   13,   14,   15,   16,   -1,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   10,   11,   12,   13,   14,   15,   16,   -1,   18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   10,   11,
    12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,   23,
    24,   25,   26,   27,   28,   29,   30,   -1,   -1,   -1,   324,  325,
    326,  327,  328,  329,  330,  331,  -1,   333,  334,  335,  336,  -1,
    -1,   -1,   340,  -1,   342,  -1,   -1,   -1,   -1,   324,  325,  326,
    327,  328,  329,  330,  331,  -1,   333,  334,  335,  336,  -1,   -1,
    -1,   340,  -1,   342,  10,   11,   12,   13,   14,   15,   16,   -1,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   -1,   3,    -1,   -1,   -1,   -1,   -1,   -1,   10,   11,   12,
    13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,   23,   24,
    25,   26,   27,   28,   29,   30,   -1,   -1,   -1,   -1,   -1,   36,
    -1,   -1,   39,   40,   -1,   34,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   324,  325,  326,  327,  328,  329,  330,  331,  -1,   333,  334,
    335,  336,  63,   -1,   -1,   340,  -1,   342,  -1,   62,   -1,   -1,
    73,   74,   75,   76,   77,   -1,   -1,   -1,   -1,   -1,   83,   -1,
    -1,   -1,   -1,   -1,   -1,   82,   -1,   -1,   93,   -1,   -1,   96,
    -1,   90,   -1,   -1,   -1,   -1,   -1,   104,  -1,   -1,   107,  -1,
    -1,   110,  111,  -1,   -1,   -1,   -1,   -1,   109,  -1,   -1,   120,
    -1,   -1,   -1,   -1,   -1,   118,  127,  -1,   129,  -1,   123,  -1,
    -1,   -1,   135,  136,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   154,  -1,   -1,
    -1,   158,  -1,   -1,   -1,   341,  163,  -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   174,  -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   341,  -1,   -1,   -1,   187,  -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   196,  -1,   -1,   -1,   -1,   193,  -1,   -1,   341,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   212,  -1,   -1,   -1,   -1,
    217,  10,   11,   12,   13,   14,   15,   16,   341,  18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   231,  -1,
    -1,   242,  243,  -1,   245,  341,  247,  248,  -1,   250,  10,   11,
    12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,   23,
    24,   25,   26,   27,   28,   29,   30,   10,   11,   12,   13,   14,
    15,   16,   -1,   18,   19,   20,   21,   22,   23,   24,   25,   26,
    27,   28,   29,   30,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   302,  -1,   -1,   -1,   -1,   -1,   308,  -1,   -1,   -1,   341,
    10,   11,   12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,
    22,   23,   24,   25,   26,   27,   28,   29,   30,   -1,   -1,   -1,
    337,  338,  -1,   -1,   341,  10,   11,   12,   13,   14,   15,   16,
    -1,   18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,
    29,   30,   10,   11,   12,   13,   14,   15,   16,   -1,   18,   19,
    20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   10,
    11,   12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,
    23,   24,   25,   26,   27,   28,   29,   30,   -1,   -1,   -1,   -1,
    0,    1,    -1,   10,   11,   12,   13,   14,   15,   16,   -1,   18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   34,   35,
    -1,   -1,   38,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   54,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   62,   -1,   13,   14,   15,   16,   1,    18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   82,   83,
    84,   -1,   -1,   -1,   -1,   -1,   90,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   34,   35,   -1,   -1,   38,   -1,   -1,
    -1,   109,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   54,   -1,   123,  -1,   -1,   -1,   -1,   -1,   62,   -1,   -1,
    132,  -1,   -1,   -1,   -1,   -1,   138,  -1,   341,  141,  -1,   -1,
    -1,   -1,   -1,   -1,   -1,   82,   83,   84,   -1,   -1,   -1,   -1,
    -1,   90,   -1,   -1,   160,  -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   341,  -1,   -1,   109,  -1,   -1,   179,
    180,  -1,   182,  -1,   -1,   -1,   186,  -1,   -1,   -1,   123,  -1,
    -1,   193,  341,  -1,   196,  197,  -1,   132,  -1,   -1,   -1,   -1,
    -1,   138,  -1,   -1,   141,  -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   160,
    -1,   229,  -1,   231,  338,  233,  -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   179,  180,  -1,   182,  -1,   251,
    -1,   186,  -1,   -1,   -1,   257,  -1,   -1,   193,  338,  -1,   196,
    197,  265,  -1,   267,  268,  269,  -1,   -1,   -1,   -1,   274,  275,
    -1,   -1,   -1,   -1,   -1,   -1,   338,  -1,   -1,   -1,   -1,   -1,
    -1,   289,  290,  291,  -1,   293,  -1,   302,  229,  -1,   231,  -1,
    233,  308,  -1,   338,  -1,   -1,   -1,   -1,   -1,   309,  -1,   -1,
    -1,   -1,   314,  315,  316,  317,  251,  34,   35,   -1,   -1,   38,
    257,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   265,  -1,   267,  268,
    269,  -1,   -1,   54,   -1,   274,  275,  -1,   -1,   -1,   -1,   62,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   289,  290,  291,  -1,
    293,  -1,   -1,   -1,   -1,   -1,   -1,   82,   83,   84,   -1,   -1,
    -1,   -1,   -1,   90,   309,  -1,   -1,   -1,   -1,   314,  315,  316,
    317,  -1,   -1,   10,   11,   12,   13,   14,   15,   16,   109,  18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    123,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   132,  -1,   -1,
    -1,   -1,   -1,   138,  -1,   -1,   141,  -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   160,  -1,   -1,   -1,   -1,   73,   74,   75,   76,   77,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   179,  180,  -1,   182,
    -1,   -1,   -1,   186,  -1,   -1,   -1,   -1,   -1,   -1,   193,  -1,
    -1,   196,  197,  10,   11,   12,   13,   14,   15,   16,   -1,   18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   229,  -1,
    231,  -1,   233,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   251,  -1,   -1,   -1,
    -1,   -1,   257,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   265,  174,
    267,  268,  269,  -1,   -1,   -1,   -1,   274,  275,  -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   289,  290,
    291,  -1,   293,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   309,  -1,   -1,   -1,   -1,   314,
    315,  316,  317,  10,   11,   12,   13,   14,   15,   16,   -1,   18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    247,  248,  -1,   250,  10,   11,   12,   13,   14,   15,   16,   -1,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   43,   44,   45,   46,   11,   12,   13,   14,   15,   16,   53,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30,   -1,   -1,   -1,   -1,   71,   72,   -1,   -1,   -1,   -1,   -1,
    78,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   89,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   97,   -1,   -1,   -1,   -1,
    -1,   103,  -1,   -1,   -1,   -1,   -1,   242,  -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   124,  125,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   143,  144,  -1,   -1,   -1,   148,  149,
    150,  10,   11,   12,   13,   14,   15,   16,   -1,   18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   -1,   -1,
    -1,   -1,   -1,   177,  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   196,  -1,
    198,  -1,   -1,   -1,   -1,   -1,   217,  -1,   -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   215,  -1,   -1,   218,  219,  220,  221,
    222,  -1,   -1,   -1,   -1,   -1,   -1,   217,  -1,   -1,   -1,   -1,
    -1,   -1,   -1,   -1,   -1,   239,  240,  -1,   -1,   -1,   -1,   -1,
    -1,   247,  107,  10,   11,   12,   13,   14,   15,   16,   -1,   18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    10,   11,   12,   13,   14,   15,   16,   -1,   18,   19,   20,   21,
    22,   23,   24,   25,   26,   27,   28,   29,   30,   10,   11,   12,
    13,   14,   15,   16,   -1,   18,   19,   20,   21,   22,   23,   24,
    25,   26,   27,   28,   29,   30,   -1,   -1,   10,   11,   12,   13,
    14,   15,   16,   40,   18,   19,   20,   21,   22,   23,   24,   25,
    26,   27,   28,   29,   30,   96,   -1,   -1,   -1,   -1,   -1,   -1,
    -1,   39,   -1,   -1,   -1,   -1,   -1,   -1,   3,    -1,   -1,   -1,
    -1,   -1,   96,   10,   11,   12,   13,   14,   15,   16,   83,   18,
    19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,   30,
    -1,   10,   11,   12,   13,   14,   15,   16,   39,   18,   19,   20,
    21,   22,   23,   24,   25,   26,   27,   28,   29,   30,   -1,   -1,
    -1,   -1,   -1,   36,   10,   11,   12,   13,   14,   15,   16,   -1,
    18,   19,   20,   21,   22,   23,   24,   25,   26,   27,   28,   29,
    30};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] = {
    0,   1,   34,  35,  38,  54,  62,  82,  83,  84,  90,  109, 123, 132, 138,
    141, 160, 179, 180, 182, 186, 193, 196, 197, 229, 231, 233, 251, 257, 265,
    267, 268, 269, 274, 275, 289, 290, 291, 293, 309, 314, 315, 316, 317, 344,
    345, 346, 374, 378, 386, 387, 390, 392, 399, 400, 401, 402, 407, 412, 413,
    415, 418, 419, 421, 422, 423, 425, 428, 429, 430, 431, 432, 433, 437, 438,
    441, 444, 446, 451, 452, 455, 456, 457, 458, 460, 462, 464, 465, 467, 469,
    470, 472, 473, 479, 483, 486, 488, 491, 494, 497, 337, 69,  117, 190, 406,
    155, 276, 463, 213, 213, 69,  108, 171, 190, 201, 214, 228, 256, 395, 408,
    375, 3,   213, 3,   213, 69,  118, 190, 256, 315, 395, 33,  34,  62,  82,
    90,  109, 118, 123, 178, 193, 231, 447, 448, 453, 454, 380, 264, 313, 487,
    118, 213, 277, 463, 274, 213, 256, 380, 447, 453, 357, 8,   273, 280, 281,
    287, 439, 498, 499, 3,   4,   5,   6,   7,   8,   17,  18,  24,  25,  44,
    51,  62,  64,  65,  66,  69,  99,  118, 190, 213, 288, 294, 295, 297, 300,
    302, 303, 304, 306, 308, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330,
    331, 333, 334, 335, 336, 340, 342, 439, 474, 478, 496, 277, 380, 388, 3,
    340, 496, 506, 3,   213, 118, 318, 424, 424, 270, 3,   424, 213, 213, 463,
    213, 463, 263, 264, 266, 492, 493, 3,   315, 3,   0,   1,   345, 337, 3,
    3,   213, 213, 3,   3,   416, 116, 391, 158, 391, 8,   442, 443, 213, 118,
    3,   107, 117, 146, 173, 376, 3,   3,   116, 414, 3,   414, 8,   445, 3,
    213, 288, 161, 340, 382, 382, 382, 158, 338, 158, 338, 81,  112, 117, 127,
    146, 381, 496, 127, 3,   3,   434, 435, 213, 3,   3,   420, 8,   459, 381,
    158, 158, 26,  33,  86,  87,  112, 207, 208, 209, 212, 358, 359, 496, 9,
    20,  20,  104, 461, 270, 338, 339, 340, 9,   496, 99,  496, 496, 496, 496,
    242, 496, 511, 69,  190, 213, 3,   340, 107, 3,   299, 196, 14,  476, 3,
    301, 136, 354, 104, 299, 107, 475, 354, 277, 340, 340, 340, 340, 340, 340,
    340, 340, 340, 340, 340, 340, 496, 506, 299, 307, 277, 296, 305, 298, 10,
    11,  12,  13,  14,  15,  16,  18,  19,  20,  21,  22,  23,  24,  25,  26,
    27,  28,  29,  30,  302, 308, 117, 146, 3,   340, 360, 361, 362, 365, 373,
    506, 338, 3,   3,   480, 481, 36,  426, 223, 426, 416, 416, 213, 416, 213,
    264, 277, 288, 298, 299, 310, 311, 312, 484, 485, 265, 338, 107, 3,   234,
    495, 337, 337, 503, 503, 3,   416, 107, 339, 173, 258, 259, 260, 261, 338,
    466, 18,  3,   3,   3,   286, 338, 391, 3,   339, 377, 3,   360, 376, 107,
    338, 99,  3,   158, 3,   338, 414, 3,   356, 3,   26,  34,  62,  82,  90,
    109, 118, 123, 193, 231, 448, 3,   34,  62,  82,  90,  109, 118, 123, 193,
    231, 454, 3,   265, 107, 3,   39,  364, 338, 416, 223, 339, 338, 223, 338,
    3,   3,   26,  3,   338, 107, 338, 364, 496, 496, 496, 8,   20,  278, 499,
    3,   26,  506, 507, 496, 340, 496, 511, 93,  96,  242, 3,   3,   3,   346,
    3,   475, 476, 4,   298, 299, 496, 8,   3,   14,  477, 475, 496, 47,  133,
    224, 496, 508, 496, 496, 26,  496, 496, 496, 506, 496, 496, 496, 496, 341,
    341, 476, 476, 475, 107, 496, 496, 496, 496, 496, 6,   18,  156, 340, 13,
    14,  16,  496, 33,  37,  199, 340, 496, 496, 496, 496, 496, 496, 496, 496,
    496, 496, 496, 339, 364, 346, 360, 196, 63,  120, 135, 154, 187, 212, 338,
    366, 368, 39,  363, 341, 506, 118, 130, 482, 489, 16,  338, 271, 272, 179,
    271, 427, 274, 427, 223, 173, 260, 468, 416, 107, 3,   265, 245, 416, 338,
    493, 345, 445, 53,  55,  32,  52,  90,  163, 180, 403, 404, 506, 3,   3,
    99,  340, 48,  443, 3,   234, 409, 26,  339, 243, 347, 234, 360, 3,   3,
    8,   416, 338, 341, 339, 339, 161, 339, 161, 196, 382, 480, 506, 3,   146,
    175, 246, 436, 435, 3,   3,   3,   8,   8,   196, 382, 339, 339, 339, 358,
    360, 358, 287, 279, 338, 341, 346, 217, 93,  96,  496, 496, 341, 475, 476,
    338, 496, 476, 107, 338, 341, 496, 338, 338, 341, 341, 341, 39,  341, 341,
    341, 341, 341, 16,  18,  476, 3,   6,   156, 346, 506, 496, 496, 340, 36,
    340, 340, 340, 346, 3,   341, 341, 3,   389, 135, 187, 369, 362, 360, 129,
    165, 367, 3,   3,   340, 372, 117, 490, 3,   3,   481, 272, 179, 3,   4,
    471, 4,   175, 485, 196, 3,   56,  405, 405, 106, 118, 169, 405, 48,  3,
    223, 338, 245, 339, 356, 4,   287, 117, 182, 339, 340, 393, 394, 319, 320,
    410, 158, 496, 163, 353, 360, 347, 377, 50,  184, 417, 356, 26,  26,  3,
    3,   385, 238, 346, 245, 246, 276, 223, 223, 339, 223, 385, 238, 346, 26,
    26,  3,   347, 340, 175, 284, 285, 440, 507, 341, 496, 496, 96,  217, 496,
    496, 496, 107, 126, 510, 510, 4,   53,  89,  103, 125, 509, 340, 16,  475,
    341, 341, 346, 506, 496, 346, 346, 346, 341, 364, 20,  339, 338, 347, 367,
    367, 129, 158, 362, 129, 372, 338, 262, 482, 173, 260, 292, 141, 3,   3,
    108, 118, 130, 169, 396, 397, 3,   130, 356, 130, 3,   3,   3,   404, 4,
    3,   341, 4,   3,   396, 363, 3,   48,  354, 347, 223, 223, 223, 20,  158,
    338, 379, 340, 383, 379, 4,   3,   3,   3,   8,   379, 383, 379, 107, 107,
    107, 110, 348, 4,   282, 283, 175, 96,  496, 104, 341, 338, 341, 496, 496,
    341, 341, 341, 346, 507, 340, 476, 341, 341, 341, 341, 341, 496, 3,   3,
    353, 362, 496, 158, 234, 370, 371, 362, 341, 3,   43,  44,  45,  46,  53,
    71,  72,  78,  89,  97,  103, 124, 125, 143, 144, 148, 149, 150, 177, 196,
    198, 215, 218, 219, 220, 221, 222, 239, 240, 247, 504, 118, 130, 340, 340,
    130, 338, 3,   356, 338, 157, 167, 340, 393, 341, 346, 340, 349, 496, 442,
    442, 442, 80,  496, 159, 3,   80,  384, 496, 379, 338, 339, 223, 379, 445,
    445, 445, 48,  111, 352, 341, 496, 496, 341, 73,  74,  75,  76,  77,  174,
    247, 248, 250, 341, 341, 346, 506, 20,  20,  339, 354, 496, 340, 371, 340,
    500, 500, 500, 500, 500, 500, 340, 500, 500, 500, 44,  501, 500, 501, 500,
    340, 500, 501, 500, 501, 340, 340, 398, 340, 340, 356, 356, 340, 396, 504,
    4,   20,  158, 396, 393, 3,   411, 40,  83,  350, 245, 449, 449, 449, 130,
    20,  338, 341, 338, 4,   3,   3,   449, 449, 349, 496, 353, 341, 341, 341,
    341, 496, 496, 3,   356, 5,   502, 503, 502, 502, 4,   505, 502, 502, 502,
    503, 502, 503, 502, 505, 502, 503, 502, 503, 5,   5,   18,  41,  57,  80,
    130, 156, 169, 228, 356, 356, 341, 341, 356, 398, 189, 5,   3,   341, 500,
    341, 338, 109, 252, 253, 254, 255, 450, 231, 80,  496, 384, 338, 384, 189,
    339, 245, 351, 354, 20,  341, 338, 341, 230, 249, 338, 341, 341, 341, 341,
    156, 4,   4,   5,   6,   7,   130, 130, 340, 341, 341, 341, 20,  167, 393,
    350, 349, 161, 496, 496, 496, 496, 385, 383, 20,  3,   188, 127, 355, 496,
    5,   4,   503, 503, 503, 356, 7,   158, 338, 7,   356, 341, 341, 3,   411};

/* Error token number */
#define YYTERROR 1

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
#define YY_LOCATION_PRINT(File, Loc) ((void)0)
#endif

/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
#define YYLEX yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX yylex(&yylval)
#endif

#undef yynerrs
#define yynerrs (yystackp->yyerrcnt)
#undef yychar
#define yychar (yystackp->yyrawchar)
#undef yylval
#define yylval (yystackp->yyval)
#undef yylloc
#define yylloc (yystackp->yyloc)

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                     \
  do {                                 \
    YYRESULTTAG yyflag = YYE;          \
    if (yyflag != yyok) return yyflag; \
  } while (YYID(0))

#if YYDEBUG

#ifndef YYFPRINTF
#define YYFPRINTF fprintf
#endif

#define YYDPRINTF(Args)          \
  do {                           \
    if (yydebug) YYFPRINTF Args; \
  } while (YYID(0))

/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void yy_symbol_value_print(FILE *yyoutput, int yytype,
                                  YYSTYPE const *const yyvaluep,
                                  struct ParseResult *result) {
  FILE *yyo = yyoutput;
  YYUSE(yyo);
  if (!yyvaluep) return;
  YYUSE(result);
#ifdef YYPRINT
  if (yytype < YYNTOKENS) YYPRINT(yyoutput, yytoknum[yytype], *yyvaluep);
#else
  YYUSE(yyoutput);
#endif
  switch (yytype) {
    default:
      break;
  }
}

/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void yy_symbol_print(FILE *yyoutput, int yytype,
                            YYSTYPE const *const yyvaluep,
                            struct ParseResult *result) {
  if (yytype < YYNTOKENS)
    YYFPRINTF(yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF(yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print(yyoutput, yytype, yyvaluep, result);
  YYFPRINTF(yyoutput, ")");
}

#define YY_SYMBOL_PRINT(Title, Type, Value, Location) \
  do {                                                \
    if (yydebug) {                                    \
      YYFPRINTF(stderr, "%s ", Title);                \
      yy_symbol_print(stderr, Type, Value, result);   \
      YYFPRINTF(stderr, "\n");                        \
    }                                                 \
  } while (YYID(0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

#define YYDPRINTF(Args)
#define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#if (!defined __cplusplus || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#define YYSTACKEXPANDABLE 1
#else
#define YYSTACKEXPANDABLE 0
#endif
#endif

#if YYSTACKEXPANDABLE
#define YY_RESERVE_GLRSTACK(Yystack)                                  \
  do {                                                                \
    if (Yystack->yyspaceLeft < YYHEADROOM) yyexpandGLRStack(Yystack); \
  } while (YYID(0))
#else
#define YY_RESERVE_GLRSTACK(Yystack)                                   \
  do {                                                                 \
    if (Yystack->yyspaceLeft < YYHEADROOM) yyMemoryExhausted(Yystack); \
  } while (YYID(0))
#endif

#if YYERROR_VERBOSE

#ifndef yystpcpy
#if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#define yystpcpy stpcpy
#else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *yystpcpy(char *yydest, const char *yysrc) {
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0') continue;

  return yyd - 1;
}
#endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t yytnamerr(char *yyres, const char *yystr) {
  if (*yystr == '"') {
    size_t yyn = 0;
    char const *yyp = yystr;

    for (;;) switch (*++yyp) {
        case '\'':
        case ',':
          goto do_not_strip_quotes;

        case '\\':
          if (*++yyp != '\\') goto do_not_strip_quotes;
        /* Fall through.  */
        default:
          if (yyres) yyres[yyn] = *yyp;
          yyn++;
          break;

        case '"':
          if (yyres) yyres[yyn] = '\0';
          return yyn;
      }
  do_not_strip_quotes:
    ;
  }

  if (!yyres) return strlen(yystr);

  return yystpcpy(yyres, yystr) - yyres;
}
#endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState *yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption *yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState **yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool *yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState *yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption *yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;

  int yyerrcnt;
  int yyrawchar;
  YYSTYPE yyval;

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem *yyitems;
  yyGLRStackItem *yynextFree;
  size_t yyspaceLeft;
  yyGLRState *yysplitPoint;
  yyGLRState *yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack(yyGLRStack *yystackp);
#endif

static void yyFail(yyGLRStack *yystackp, struct ParseResult *result,
                   const char *yymsg) __attribute__((__noreturn__));
static void yyFail(yyGLRStack *yystackp, struct ParseResult *result,
                   const char *yymsg) {
  if (yymsg != YY_NULL) yyerror(result, yymsg);
  YYLONGJMP(yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted(yyGLRStack *yystackp)
    __attribute__((__noreturn__));
static void yyMemoryExhausted(yyGLRStack *yystackp) {
  YYLONGJMP(yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char *yytokenName(yySymbol yytoken) {
  if (yytoken == YYEMPTY) return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin(yyGLRStackItem *, int, int) __attribute__((__unused__));
static void yyfillin(yyGLRStackItem *yyvsp, int yylow0, int yylow1) {
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0 - 1; i >= yylow1; i -= 1) {
    YYASSERT(s->yyresolved);
    yyvsp[i].yystate.yyresolved = yytrue;
    yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
    s = yyvsp[i].yystate.yypred = s->yypred;
  }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill(yyGLRStackItem *, int *, int, yybool)
    __attribute__((__unused__));
static inline int yyfill(yyGLRStackItem *yyvsp, int *yylow, int yylow1,
                         yybool yynormal) {
  if (!yynormal && yylow1 < *yylow) {
    yyfillin(yyvsp, *yylow, yylow1);
    *yylow = yylow1;
  }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG yyuserAction(yyRuleNum yyn, int yyrhslen,
                                             yyGLRStackItem *yyvsp,
                                             yyGLRStack *yystackp,
                                             YYSTYPE *yyvalp,
                                             struct ParseResult *result) {
  yybool yynormal __attribute__((__unused__)) =
      (yystackp->yysplitPoint == YY_NULL);
  int yylow;
  YYUSE(result);
#undef yyerrok
#define yyerrok (yystackp->yyerrState = 0)
#undef YYACCEPT
#define YYACCEPT return yyaccept
#undef YYABORT
#define YYABORT return yyabort
#undef YYERROR
#define YYERROR return yyerrok, yyerr
#undef YYRECOVERING
#define YYRECOVERING() (yystackp->yyerrState != 0)
#undef yyclearin
#define yyclearin (yychar = YYEMPTY)
#undef YYFILL
#define YYFILL(N) yyfill(yyvsp, &yylow, N, yynormal)
#undef YYBACKUP
#define YYBACKUP(Token, Value) \
  return yyerror(result, YY_("syntax error: cannot back up")), yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL(1 - yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn) {
    case 2:
/* Line 868 of glr.c  */
#line 451 "sql.ypp"
    {
      printf("> \n");
      ((*yyvalp).ast_node) = newStmt(
          t_stmt, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                             .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      if (result->error_number == 0) {
        result->ast = ((*yyvalp).ast_node);
      } else {
        result->ast = NULL;
      }
      /* output($$, 1);*/
    } break;

    case 3:
/* Line 868 of glr.c  */
#line 464 "sql.ypp"
    {
      printf(">> \n");
      ((*yyvalp).ast_node) = newStmt(
          t_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                       .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      if (result->error_number == 0) {
        result->ast = ((*yyvalp).ast_node);
      } else {
        result->ast = NULL;
      }
      /*output($$, 1);*/
    } break;

    case 4:
/* Line 868 of glr.c  */
#line 477 "sql.ypp"
    {
      printf("> \n");
      result->ast = NULL;
      result->error_number++;
      // yyerror(result,"First statement discarded, input new statement");
      yyclearin;
      yyerrok;
    } break;

    case 5:
/* Line 868 of glr.c  */
#line 485 "sql.ypp"
    {
      printf(">> \n");
      result->ast =
          NULL;  // 2014-3-6---if error, the last root is set be null---byYU
      result->error_number++;  // 2014-3-6---error number add by 1---byYU
      // yyerror(result,"Current statement discarded, input new statement");
      yyclearin;
      yyerrok;
    } break;

    case 6:
/* Line 868 of glr.c  */
#line 497 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics
                                  .yysval.ast_node); /*output($$, 1);puts("SQL
                                                        parser： This is a
                                                        select statement"); */
    } break;

    case 7:
/* Line 868 of glr.c  */
#line 502 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newQueryStmt(
          t_query_stmt, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, NULL, NULL, NULL, NULL, result->node_pointer);
      /*puts("SQL parser： select_stmt1");	*/
    } break;

    case 8:
/* Line 868 of glr.c  */
#line 508 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newQueryStmt(
          t_query_stmt, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (11))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((8) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((10) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((11) - (11))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      /*puts("SQL parser： select_stmt2");	*/
    } break;

    case 9:
/* Line 868 of glr.c  */
#line 515 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_where is null")*/
      ;
    } break;

    case 10:
/* Line 868 of glr.c  */
#line 516 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newWhereList(
          t_where_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("opt_where");*/
    } break;

    case 11:
/* Line 868 of glr.c  */
#line 518 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_groupby is null");*/
    } break;

    case 12:
/* Line 868 of glr.c  */
#line 519 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newGroupbyList(
          t_groupby_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.intval),
          result->node_pointer); /*puts("opt_groupby");*/
    } break;

    case 13:
/* Line 868 of glr.c  */
#line 523 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newGroupbyExpr(
          t_groupby_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                               .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
      /*puts("groupby_list1");*/
    } break;

    case 14:
/* Line 868 of glr.c  */
#line 528 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newGroupbyExpr(
          t_groupby_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (4))]
                               .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (4))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      /*puts("groupby_list2");*/
    } break;

    case 15:
/* Line 868 of glr.c  */
#line 534 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 16:
/* Line 868 of glr.c  */
#line 535 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 17:
/* Line 868 of glr.c  */
#line 536 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 18:
/* Line 868 of glr.c  */
#line 539 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 19:
/* Line 868 of glr.c  */
#line 540 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 20:
/* Line 868 of glr.c  */
#line 543 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_having is null");*/
    } break;

    case 21:
/* Line 868 of glr.c  */
#line 545 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newHavingList(
          t_having_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      /*puts("opt_having2");*/
    } break;

    case 22:
/* Line 868 of glr.c  */
#line 551 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_orederby is null");*/
    } break;

    case 23:
/* Line 868 of glr.c  */
#line 553 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newOrderbyList(
          t_orderby_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
      /*puts("opt_orederby2");*/
    } break;

    case 24:
/* Line 868 of glr.c  */
#line 559 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_limit is null");*/
    } break;

    case 25:
/* Line 868 of glr.c  */
#line 560 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLimitExpr(
          t_limit_expr, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("opt_limit2");*/
    } break;

    case 26:
/* Line 868 of glr.c  */
#line 561 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLimitExpr(
          t_limit_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (4))]
                             .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 27:
/* Line 868 of glr.c  */
#line 564 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL; /*puts("opt_into_list is null");*/
    } break;

    case 28:
/* Line 868 of glr.c  */
#line 565 "sql.ypp"
    {
    } break;

    case 29:
/* Line 868 of glr.c  */
#line 568 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumn(
          t_column, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                         .yystate.yysemantics.yysval.strval),
          NULL, NULL, result->node_pointer);
    } break;

    case 30:
/* Line 868 of glr.c  */
#line 569 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumn(
          t_column, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                         .yystate.yysemantics.yysval.strval),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                     .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 31:
/* Line 868 of glr.c  */
#line 572 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 32:
/* Line 868 of glr.c  */
#line 573 "sql.ypp"
    {
      if (((*yyvalp).intval) & 1) yyerror(result, "duplicate ALL option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           1;
    } break;

    case 33:
/* Line 868 of glr.c  */
#line 574 "sql.ypp"
    {
      if (((*yyvalp).intval) & 2) yyerror(result, "duplicate DISTINCT option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           2;
    } break;

    case 34:
/* Line 868 of glr.c  */
#line 575 "sql.ypp"
    {
      if (((*yyvalp).intval) & 4)
        yyerror(result, "duplicate DISTINCTROW option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           4;
    } break;

    case 35:
/* Line 868 of glr.c  */
#line 576 "sql.ypp"
    {
      if (((*yyvalp).intval) & 8)
        yyerror(result, "duplicate HIGH_PRIORITY option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           8;
    } break;

    case 36:
/* Line 868 of glr.c  */
#line 577 "sql.ypp"
    {
      if (((*yyvalp).intval) & 16)
        yyerror(result, "duplicate STRAIGHT_JOIN option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           16;
    } break;

    case 37:
/* Line 868 of glr.c  */
#line 578 "sql.ypp"
    {
      if (((*yyvalp).intval) & 32)
        yyerror(result, "duplicate SQL_SMALL_RESULT option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           32;
    } break;

    case 38:
/* Line 868 of glr.c  */
#line 579 "sql.ypp"
    {
      if (((*yyvalp).intval) & 64)
        yyerror(result, "duplicate SQL_BIG_RESULT option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           64;
    } break;

    case 39:
/* Line 868 of glr.c  */
#line 580 "sql.ypp"
    {
      if (((*yyvalp).intval) & 128)
        yyerror(result, "duplicate SQL_CALC_FOUND_ROWS option");
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           128;
    } break;

    case 40:
/* Line 868 of glr.c  */
#line 583 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newSelectList(
          t_select_list, 0, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                 .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer); /*puts("select_expr_list1");*/
    } break;

    case 41:
/* Line 868 of glr.c  */
#line 584 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newSelectList(
          t_select_list, 0, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                                 .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("select_expr_list2");*/
    } break;

    case 42:
/* Line 868 of glr.c  */
#line 585 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          newSelectList(t_select_list, 1, NULL, NULL,
                        result->node_pointer); /*puts("select_expr_list3");*/
    } break;

    case 43:
/* Line 868 of glr.c  */
#line 586 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newSelectList(
          t_select_list, 1, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("select_expr_list4");*/
    } break;

    case 44:
/* Line 868 of glr.c  */
#line 589 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newSelectExpr(
          t_select_expr, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                              .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("select_expr");*/
    } break;

    case 45:
/* Line 868 of glr.c  */
#line 592 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newFromList(
          t_from_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer); /*puts("table_references1");*/
    } break;

    case 46:
/* Line 868 of glr.c  */
#line 593 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newFromList(
          t_from_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                            .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("table_references2");*/
    } break;

    case 47:
/* Line 868 of glr.c  */
#line 596 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*puts("table_referen1");*/
    } break;

    case 48:
/* Line 868 of glr.c  */
#line 597 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*puts("table_referen2");*/
    } break;

    case 49:
/* Line 868 of glr.c  */
#line 602 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTable(
          t_table, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                              .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.strval),
          0, NULL, result->node_pointer);
      /*puts("table_factor1");*/
    } break;

    case 50:
/* Line 868 of glr.c  */
#line 607 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTable(
          t_table, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (4))]
                        .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval),
          0, NULL, result->node_pointer);
      /*puts("table_factor2");*/
    } break;

    case 51:
/* Line 868 of glr.c  */
#line 612 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTable(
          t_table, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval),
          1, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 52:
/* Line 868 of glr.c  */
#line 615 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 55:
/* Line 868 of glr.c  */
#line 622 "sql.ypp"
    {
      ((*yyvalp).strval) =
          (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
               .yystate.yysemantics.yysval.strval); /*puts("opt_as_alias1");*/
    } break;

    case 56:
/* Line 868 of glr.c  */
#line 623 "sql.ypp"
    {
      ((*yyvalp).strval) =
          (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
               .yystate.yysemantics.yysval.strval); /*puts("opt_as_alias2");*/
    } break;

    case 57:
/* Line 868 of glr.c  */
#line 624 "sql.ypp"
    {
      ((*yyvalp).strval) = NULL; /*puts("opt_as_alias3");*/
    } break;

    case 58:
/* Line 868 of glr.c  */
#line 640 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newJoin(
          t_join, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (5))]
                       .yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 59:
/* Line 868 of glr.c  */
#line 644 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newJoin(
          t_join, -1, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                           .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 60:
/* Line 868 of glr.c  */
#line 648 "sql.ypp"
    {
      Node *m = newCondition(t_condition, 1,
                             (((yyGLRStackItem const *)yyvsp)[YYFILL((5) - (5))]
                                  .yystate.yysemantics.yysval.ast_node),
                             result->node_pointer);
      ((*yyvalp).ast_node) = newJoin(
          t_join, -1, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                           .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.ast_node),
          m, result->node_pointer);
    } break;

    case 61:
/* Line 868 of glr.c  */
#line 653 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newJoin(
          t_join,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.intval) +
              (((yyGLRStackItem const *)
                yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 62:
/* Line 868 of glr.c  */
#line 657 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newJoin(
          t_join, 32 + (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (5))]
                            .yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 63:
/* Line 868 of glr.c  */
#line 662 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 64:
/* Line 868 of glr.c  */
#line 663 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 65:
/* Line 868 of glr.c  */
#line 664 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 66:
/* Line 868 of glr.c  */
#line 667 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 67:
/* Line 868 of glr.c  */
#line 668 "sql.ypp"
    {
      ((*yyvalp).intval) = 4;
    } break;

    case 68:
/* Line 868 of glr.c  */
#line 671 "sql.ypp"
    {
      ((*yyvalp).intval) = 8;
    } break;

    case 69:
/* Line 868 of glr.c  */
#line 672 "sql.ypp"
    {
      ((*yyvalp).intval) = 16;
    } break;

    case 70:
/* Line 868 of glr.c  */
#line 675 "sql.ypp"
    {
      ((*yyvalp).intval) =
          8 + (((yyGLRStackItem const *)
                yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.intval);
    } break;

    case 71:
/* Line 868 of glr.c  */
#line 676 "sql.ypp"
    {
      ((*yyvalp).intval) =
          16 + (((yyGLRStackItem const *)
                 yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.intval);
    } break;

    case 72:
/* Line 868 of glr.c  */
#line 677 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 73:
/* Line 868 of glr.c  */
#line 680 "sql.ypp"
    {
    } break;

    case 74:
/* Line 868 of glr.c  */
#line 681 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 75:
/* Line 868 of glr.c  */
#line 689 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCondition(
          t_condition, 1, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                               .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 76:
/* Line 868 of glr.c  */
#line 693 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCondition(
          t_condition, 2, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (4))]
                               .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 77:
/* Line 868 of glr.c  */
#line 712 "sql.ypp"
    {
      emit("INDEX %s", (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.strval));
    } break;

    case 78:
/* Line 868 of glr.c  */
#line 713 "sql.ypp"
    {
      emit("INDEX %s", (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                            .yystate.yysemantics.yysval.strval));
    } break;

    case 79:
/* Line 868 of glr.c  */
#line 716 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 80:
/* Line 868 of glr.c  */
#line 721 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 81:
/* Line 868 of glr.c  */
#line 726 "sql.ypp"
    {
      /* emit("DELETEONE %d %s", $2, $4); free($4); */
      ((*yyvalp).ast_node) = (Node *)new DeleteStmt(
          t_delete_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((4) - (7))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (7))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.ast_node));
    } break;

    case 82:
/* Line 868 of glr.c  */
#line 732 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                  .yystate.yysemantics.yysval.ast_node) +
                             01;
    } break;

    case 83:
/* Line 868 of glr.c  */
#line 733 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                  .yystate.yysemantics.yysval.ast_node) +
                             02;
    } break;

    case 84:
/* Line 868 of glr.c  */
#line 734 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                  .yystate.yysemantics.yysval.ast_node) +
                             04;
    } break;

    case 85:
/* Line 868 of glr.c  */
#line 735 "sql.ypp"
    {
      ((*yyvalp).ast_node) = 0;
    } break;

    case 86:
/* Line 868 of glr.c  */
#line 741 "sql.ypp"
    {
    } break;

    case 87:
/* Line 868 of glr.c  */
#line 743 "sql.ypp"
    {
    } break;

    case 88:
/* Line 868 of glr.c  */
#line 744 "sql.ypp"
    {
    } break;

    case 91:
/* Line 868 of glr.c  */
#line 752 "sql.ypp"
    {
      emit("DELETEMULTI %d %d %d",
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.ast_node),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.ast_node),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node));
    } break;

    case 92:
/* Line 868 of glr.c  */
#line 757 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*output($$, 1); puts("SQL
                                                 parser： This is a insert
                                                 statement");*/
    } break;

    case 93:
/* Line 868 of glr.c  */
#line 763 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertStmt(
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (8))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((8) - (8))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 94:
/* Line 868 of glr.c  */
#line 766 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL;
    } break;

    case 95:
/* Line 868 of glr.c  */
#line 767 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((5) - (5))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 96:
/* Line 868 of glr.c  */
#line 770 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 97:
/* Line 868 of glr.c  */
#line 771 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           01;
    } break;

    case 98:
/* Line 868 of glr.c  */
#line 772 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           02;
    } break;

    case 99:
/* Line 868 of glr.c  */
#line 773 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           04;
    } break;

    case 100:
/* Line 868 of glr.c  */
#line 774 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           010;
    } break;

    case 103:
/* Line 868 of glr.c  */
#line 780 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL;
    } break;

    case 104:
/* Line 868 of glr.c  */
#line 781 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 105:
/* Line 868 of glr.c  */
#line 785 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertValueList(
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 106:
/* Line 868 of glr.c  */
#line 786 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertValueList(
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 107:
/* Line 868 of glr.c  */
#line 790 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertVals(
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((1) - (1))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 108:
/* Line 868 of glr.c  */
#line 791 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertVals(1, NULL, NULL, result->node_pointer);
    } break;

    case 109:
/* Line 868 of glr.c  */
#line 792 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertVals(
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 110:
/* Line 868 of glr.c  */
#line 793 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertVals(
          1, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                        .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 111:
/* Line 868 of glr.c  */
#line 797 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertStmt(
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval),
          NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((7) - (7))]
                           .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 112:
/* Line 868 of glr.c  */
#line 801 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newInsertStmt(
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (7))].yystate.yysemantics.yysval.ast_node),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((7) - (7))]
                     .yystate.yysemantics.yysval.ast_node),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((6) - (7))]
                     .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 113:
/* Line 868 of glr.c  */
#line 805 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.subtok) != 4)
        yyerror(result, "bad insert assignment to %s",
                (((yyGLRStackItem const *)
                  yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval));
      else
        ((*yyvalp).ast_node) = newInsertAssignList(
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval),
            0, (((yyGLRStackItem const *)
                 yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
            NULL, result->node_pointer);
    } break;

    case 114:
/* Line 868 of glr.c  */
#line 808 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.subtok) != 4)
        yyerror(result, "bad insert assignment to %s",
                (((yyGLRStackItem const *)
                  yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval));
      else
        ((*yyvalp).ast_node) = newInsertAssignList(
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval),
            1, NULL, NULL, result->node_pointer);
    } break;

    case 115:
/* Line 868 of glr.c  */
#line 811 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.subtok) != 4)
        yyerror(result, "bad insert assignment to %s",
                (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                     .yystate.yysemantics.yysval.ast_node));
      else
        ((*yyvalp).ast_node) = newInsertAssignList(
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.strval),
            0, (((yyGLRStackItem const *)
                 yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
            result->node_pointer);
    } break;

    case 116:
/* Line 868 of glr.c  */
#line 814 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.subtok) != 4)
        yyerror(result, "bad insert assignment to %s",
                (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                     .yystate.yysemantics.yysval.ast_node));
      else
        ((*yyvalp).ast_node) = newInsertAssignList(
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.strval),
            1, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                          .yystate.yysemantics.yysval.ast_node),
            result->node_pointer);
    } break;

    case 117:
/* Line 868 of glr.c  */
#line 820 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 118:
/* Line 868 of glr.c  */
#line 826 "sql.ypp"
    {
      emit("REPLACEVALS %d %d %s",
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.intval),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (8))].yystate.yysemantics.yysval.strval));
      free((((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (8))].yystate.yysemantics.yysval.strval));
    } break;

    case 119:
/* Line 868 of glr.c  */
#line 832 "sql.ypp"
    {
      emit("REPLACEASGN %d %d %s",
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.intval),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval));
      free((((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval));
    } break;

    case 120:
/* Line 868 of glr.c  */
#line 837 "sql.ypp"
    {
      emit("REPLACESELECT %d %s",
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.intval),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval));
      free((((yyGLRStackItem const *)
             yyvsp)[YYFILL((4) - (7))].yystate.yysemantics.yysval.strval));
    } break;

    case 121:
/* Line 868 of glr.c  */
#line 841 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 122:
/* Line 868 of glr.c  */
#line 848 "sql.ypp"
    {
      emit("UPDATE %d %d %d",
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.intval),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((3) - (8))].yystate.yysemantics.yysval.ast_node),
           (((yyGLRStackItem const *)
             yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.ast_node));
    } break;

    case 123:
/* Line 868 of glr.c  */
#line 852 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 124:
/* Line 868 of glr.c  */
#line 853 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           01;
    } break;

    case 125:
/* Line 868 of glr.c  */
#line 854 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           02;
    } break;

    case 126:
/* Line 868 of glr.c  */
#line 859 "sql.ypp"
    {
      /*
      if ($2 != 4 || $3->data.string_val == NULL)
              yyerror(result,"bad insert assignment to %s", $1);
      emit("ASSIGN %s", $1);
      free($3);
      $$ = $3->data.string_val;
      */
    } break;

    case 127:
/* Line 868 of glr.c  */
#line 869 "sql.ypp"
    {
      /*
              if ($4 != 4)
                      yyerror(result,"bad insert assignment to %s", $1);
              emit("ASSIGN %s.%s", $1, $3);
              free($1);
              free($3);
              $$ = 1;
      */
    } break;

    case 130:
/* Line 868 of glr.c  */
#line 890 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /* output($$, 1); puts("SQL
                                                 parser： This is a
                                                 create_database statement");*/
    } break;

    case 131:
/* Line 868 of glr.c  */
#line 895 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDatabaseStmt(
          t_create_database_stmt, 1,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 132:
/* Line 868 of glr.c  */
#line 897 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDatabaseStmt(
          t_create_database_stmt, 2,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 133:
/* Line 868 of glr.c  */
#line 900 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 134:
/* Line 868 of glr.c  */
#line 901 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 135:
/* Line 868 of glr.c  */
#line 906 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
               .yystate.yysemantics.yysval
               .ast_node); /* output($$, 1); puts("SQL parser： This is a
                              create_table statement"); */
    } break;

    case 136:
/* Line 868 of glr.c  */
#line 910 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (8))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.strval),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((7) - (8))]
                     .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 137:
/* Line 868 of glr.c  */
#line 914 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (10))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (10))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (10))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (10))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (10))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 138:
/* Line 868 of glr.c  */
#line 919 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (9))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (9))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (9))].yystate.yysemantics.yysval.strval),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((7) - (9))]
                     .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (9))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 139:
/* Line 868 of glr.c  */
#line 923 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (6))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.strval),
          NULL, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((6) - (6))]
                           .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 140:
/* Line 868 of glr.c  */
#line 928 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (11))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (11))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (11))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (11))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (11))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((11) - (11))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 141:
/* Line 868 of glr.c  */
#line 933 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateTableStmt(
          t_create_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (8))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.strval),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((8) - (8))]
                     .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 142:
/* Line 868 of glr.c  */
#line 938 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateSelectStmt(
          t_create_select_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.intval),
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 143:
/* Line 868 of glr.c  */
#line 941 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 144:
/* Line 868 of glr.c  */
#line 942 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 145:
/* Line 868 of glr.c  */
#line 943 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 146:
/* Line 868 of glr.c  */
#line 946 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 147:
/* Line 868 of glr.c  */
#line 947 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 148:
/* Line 868 of glr.c  */
#line 950 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateColList(
          t_create_col_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 149:
/* Line 868 of glr.c  */
#line 951 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateColList(
          t_create_col_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                                  .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 150:
/* Line 868 of glr.c  */
#line 955 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 1, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                                .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 151:
/* Line 868 of glr.c  */
#line 956 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 2, NULL, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /*puts("primary key ok!");*/
    } break;

    case 152:
/* Line 868 of glr.c  */
#line 957 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 3, NULL, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 153:
/* Line 868 of glr.c  */
#line 958 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 4, NULL, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 154:
/* Line 868 of glr.c  */
#line 959 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 5, NULL, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 155:
/* Line 868 of glr.c  */
#line 960 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateDef(
          t_create_def, 6, NULL, NULL, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 156:
/* Line 868 of glr.c  */
#line 964 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumnAtts(t_column_atts, 0, 0, 0, NULL, NULL,
                                           result->node_pointer);
    } break;

    case 157:
/* Line 868 of glr.c  */
#line 965 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 01;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 158:
/* Line 868 of glr.c  */
#line 966 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 02;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 159:
/* Line 868 of glr.c  */
#line 967 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 04;
      t->s = (((yyGLRStackItem const *)
               yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval);
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 160:
/* Line 868 of glr.c  */
#line 968 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 010;
      t->num1 = atol((((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                          .yystate.yysemantics.yysval.strval));
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 161:
/* Line 868 of glr.c  */
#line 969 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 020;
      t->num2 = atof((((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                          .yystate.yysemantics.yysval.strval));
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 162:
/* Line 868 of glr.c  */
#line 970 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 040;
      t->num1 = atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                          .yystate.yysemantics.yysval.strval));
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 163:
/* Line 868 of glr.c  */
#line 971 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 0100;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 164:
/* Line 868 of glr.c  */
#line 972 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 0200;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 165:
/* Line 868 of glr.c  */
#line 973 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 0400;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 166:
/* Line 868 of glr.c  */
#line 974 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 01000;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 167:
/* Line 868 of glr.c  */
#line 975 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 02000;
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 168:
/* Line 868 of glr.c  */
#line 976 "sql.ypp"
    {
      Column_atts *t =
          (Column_atts *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                              .yystate.yysemantics.yysval.ast_node);
      t->datatype |= 04000;
      t->col_list = (((yyGLRStackItem const *)yyvsp)[YYFILL((4) - (5))]
                         .yystate.yysemantics.yysval.ast_node);
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 169:
/* Line 868 of glr.c  */
#line 980 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /* puts("SQL parser： This is a
                                                 create_projection
                                                 statement");*/
    } break;

    case 170:
/* Line 868 of glr.c  */
#line 985 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateProjectionStmt(
          t_create_projection_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (10))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (10))].yystate.yysemantics.yysval.ast_node),
          1, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((10) - (10))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 171:
/* Line 868 of glr.c  */
#line 987 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL((9) - (13))]
               .yystate.yysemantics.yysval.subtok) != 4) {
        yyerror(result, "please give a specific number");
      } else {
        ((*yyvalp).ast_node) = newCreateProjectionStmt(
            t_create_projection_stmt,
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((4) - (13))].yystate.yysemantics.yysval.strval),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((6) - (13))].yystate.yysemantics.yysval.ast_node),
            atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((10) - (13))]
                      .yystate.yysemantics.yysval.strval)),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((13) - (13))].yystate.yysemantics.yysval.strval),
            result->node_pointer);
      }
    } break;

    case 172:
/* Line 868 of glr.c  */
#line 997 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDoStmt(
          t_do_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                          .yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /* puts("SQL parser： This is a do expr
                                    statement");*/
    } break;

    case 173:
/* Line 868 of glr.c  */
#line 1001 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*puts("SQL parser： This is a
                                                 truncate_stmt statement");*/
    } break;

    case 174:
/* Line 868 of glr.c  */
#line 1004 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTruncateStmt(
          t_truncate_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                                .yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 175:
/* Line 868 of glr.c  */
#line 1005 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTruncateStmt(
          t_truncate_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                                .yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 176:
/* Line 868 of glr.c  */
#line 1009 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /* output($$, 1); puts("SQL
                                                 parser： This is a
                                                 alter_database statement");*/
    } break;

    case 177:
/* Line 868 of glr.c  */
#line 1013 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newAlterDatabaseStmt(
          t_alter_database_stmt, 1,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 178:
/* Line 868 of glr.c  */
#line 1014 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newAlterDatabaseStmt(
          t_alter_database_stmt, 2,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 179:
/* Line 868 of glr.c  */
#line 1018 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
               .yystate.yysemantics.yysval
               .ast_node); /*output($$, 1); puts("SQL parser： This is a
                              alter_table statement"); */
    } break;

    case 180:
/* Line 868 of glr.c  */
#line 1023 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newAlterTableStmt(
          t_alter_table_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 183:
/* Line 868 of glr.c  */
#line 1032 "sql.ypp"
    {
    } break;

    case 184:
/* Line 868 of glr.c  */
#line 1033 "sql.ypp"
    {
    } break;

    case 189:
/* Line 868 of glr.c  */
#line 1038 "sql.ypp"
    {
    } break;

    case 190:
/* Line 868 of glr.c  */
#line 1039 "sql.ypp"
    {
    } break;

    case 192:
/* Line 868 of glr.c  */
#line 1043 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 193:
/* Line 868 of glr.c  */
#line 1044 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 194:
/* Line 868 of glr.c  */
#line 1048 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 195:
/* Line 868 of glr.c  */
#line 1049 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 196:
/* Line 868 of glr.c  */
#line 1053 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
               .yystate.yysemantics.yysval
               .ast_node); /* output($$, 1); puts("SQL parser： This is a
                              create_index statement");*/
    } break;

    case 197:
/* Line 868 of glr.c  */
#line 1058 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newCreateIndex(
          t_create_index_stmt,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (10))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (10))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (10))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (10))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (10))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 198:
/* Line 868 of glr.c  */
#line 1061 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 199:
/* Line 868 of glr.c  */
#line 1062 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 200:
/* Line 868 of glr.c  */
#line 1063 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 201:
/* Line 868 of glr.c  */
#line 1064 "sql.ypp"
    {
      ((*yyvalp).intval) = 3;
    } break;

    case 202:
/* Line 868 of glr.c  */
#line 1067 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 203:
/* Line 868 of glr.c  */
#line 1068 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                                .yystate.yysemantics.yysval.intval);
    } break;

    case 204:
/* Line 868 of glr.c  */
#line 1071 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 205:
/* Line 868 of glr.c  */
#line 1072 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 206:
/* Line 868 of glr.c  */
#line 1075 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newIndexColList(
          t_index_col_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                                 .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
    } break;

    case 207:
/* Line 868 of glr.c  */
#line 1076 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newIndexColList(
          t_index_col_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                                 .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 208:
/* Line 868 of glr.c  */
#line 1080 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*output($$, 1); puts("SQL
                                                 parser： This is a drop_index
                                                 statement");*/
    } break;

    case 209:
/* Line 868 of glr.c  */
#line 1083 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDropIndex(
          t_drop_index, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (5))]
                             .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 210:
/* Line 868 of glr.c  */
#line 1087 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /* output($$, 1); puts("SQL
                                                 parser： This is a
                                                 drop_database statement");*/
    } break;

    case 211:
/* Line 868 of glr.c  */
#line 1091 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDropDatabase(
          t_drop_database_stmt, 1,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 212:
/* Line 868 of glr.c  */
#line 1092 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDropDatabase(
          t_drop_database_stmt, 2,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 213:
/* Line 868 of glr.c  */
#line 1095 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 214:
/* Line 868 of glr.c  */
#line 1096 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 215:
/* Line 868 of glr.c  */
#line 1100 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*output($$, 1); puts("SQL
                                                 parser： This is a drop_table
                                                 statement"); */
    } break;

    case 216:
/* Line 868 of glr.c  */
#line 1103 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDropTable(
          t_drop_table_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (6))]
                                  .yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (6))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (6))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 217:
/* Line 868 of glr.c  */
#line 1106 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTableList(
          t_table_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (1))].yystate.yysemantics.yysval.strval),
          NULL, result->node_pointer);
    } break;

    case 218:
/* Line 868 of glr.c  */
#line 1107 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTableList(
          t_table_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                             .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval),
          NULL, result->node_pointer);
    } break;

    case 219:
/* Line 868 of glr.c  */
#line 1108 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTableList(
          t_table_list, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 220:
/* Line 868 of glr.c  */
#line 1109 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newTableList(
          t_table_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (5))]
                             .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 221:
/* Line 868 of glr.c  */
#line 1112 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 222:
/* Line 868 of glr.c  */
#line 1113 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 223:
/* Line 868 of glr.c  */
#line 1114 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 224:
/* Line 868 of glr.c  */
#line 1118 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /* output($$, 1); puts("SQL
                                                 parser： This is a load_table
                                                 statement");*/
    } break;

    case 225:
/* Line 868 of glr.c  */
#line 1123 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL((11) - (12))]
               .yystate.yysemantics.yysval.subtok) != 4) {
        yyerror(result, "please give a specific number");
      } else {
        ((*yyvalp).ast_node) = newLoadTable(
            t_load_table_stmt,
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((3) - (12))].yystate.yysemantics.yysval.strval),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((5) - (12))].yystate.yysemantics.yysval.ast_node),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((7) - (12))].yystate.yysemantics.yysval.strval),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((9) - (12))].yystate.yysemantics.yysval.strval),
            atof((((yyGLRStackItem const *)yyvsp)[YYFILL((12) - (12))]
                      .yystate.yysemantics.yysval.strval)),
            0, result->node_pointer);
      }
    } break;

    case 226:
/* Line 868 of glr.c  */
#line 1127 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLoadTable(
          t_load_table_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (9))]
                                  .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (9))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (9))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (9))].yystate.yysemantics.yysval.strval),
          1.0, 0, result->node_pointer);
    } break;

    case 227:
/* Line 868 of glr.c  */
#line 1128 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLoadTable(
          t_load_table_stmt, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (9))]
                                  .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (9))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (9))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((9) - (9))].yystate.yysemantics.yysval.strval),
          1.0, 1, result->node_pointer);
    } break;

    case 228:
/* Line 868 of glr.c  */
#line 1130 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL((11) - (12))]
               .yystate.yysemantics.yysval.subtok) != 4) {
        yyerror(result, "please give a specific number");
      } else {
        ((*yyvalp).ast_node) = newLoadTable(
            t_load_table_stmt,
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((3) - (12))].yystate.yysemantics.yysval.strval),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((5) - (12))].yystate.yysemantics.yysval.ast_node),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((7) - (12))].yystate.yysemantics.yysval.strval),
            (((yyGLRStackItem const *)
              yyvsp)[YYFILL((9) - (12))].yystate.yysemantics.yysval.strval),
            atof((((yyGLRStackItem const *)yyvsp)[YYFILL((12) - (12))]
                      .yystate.yysemantics.yysval.strval)),
            1, result->node_pointer);
      }
    } break;

    case 229:
/* Line 868 of glr.c  */
#line 1136 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 230:
/* Line 868 of glr.c  */
#line 1139 "sql.ypp"
    {
    } break;

    case 231:
/* Line 868 of glr.c  */
#line 1142 "sql.ypp"
    {
    } break;

    case 232:
/* Line 868 of glr.c  */
#line 1143 "sql.ypp"
    {
    } break;

    case 233:
/* Line 868 of glr.c  */
#line 1144 "sql.ypp"
    {
    } break;

    case 234:
/* Line 868 of glr.c  */
#line 1145 "sql.ypp"
    {
    } break;

    case 235:
/* Line 868 of glr.c  */
#line 1146 "sql.ypp"
    {
    } break;

    case 236:
/* Line 868 of glr.c  */
#line 1150 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 237:
/* Line 868 of glr.c  */
#line 1153 "sql.ypp"
    {
    } break;

    case 238:
/* Line 868 of glr.c  */
#line 1154 "sql.ypp"
    {
    } break;

    case 239:
/* Line 868 of glr.c  */
#line 1155 "sql.ypp"
    {
    } break;

    case 240:
/* Line 868 of glr.c  */
#line 1156 "sql.ypp"
    {
    } break;

    case 241:
/* Line 868 of glr.c  */
#line 1160 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 242:
/* Line 868 of glr.c  */
#line 1163 "sql.ypp"
    {
    } break;

    case 243:
/* Line 868 of glr.c  */
#line 1167 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 244:
/* Line 868 of glr.c  */
#line 1168 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 245:
/* Line 868 of glr.c  */
#line 1169 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 250:
/* Line 868 of glr.c  */
#line 1180 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 251:
/* Line 868 of glr.c  */
#line 1183 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 252:
/* Line 868 of glr.c  */
#line 1184 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 253:
/* Line 868 of glr.c  */
#line 1185 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 254:
/* Line 868 of glr.c  */
#line 1188 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 255:
/* Line 868 of glr.c  */
#line 1189 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 256:
/* Line 868 of glr.c  */
#line 1190 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 257:
/* Line 868 of glr.c  */
#line 1193 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 258:
/* Line 868 of glr.c  */
#line 1197 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 266:
/* Line 868 of glr.c  */
#line 1220 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 271:
/* Line 868 of glr.c  */
#line 1233 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 272:
/* Line 868 of glr.c  */
#line 1234 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 273:
/* Line 868 of glr.c  */
#line 1235 "sql.ypp"
    {
      ((*yyvalp).intval) = 3;
    } break;

    case 274:
/* Line 868 of glr.c  */
#line 1236 "sql.ypp"
    {
      ((*yyvalp).intval) = 4;
    } break;

    case 279:
/* Line 868 of glr.c  */
#line 1254 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 280:
/* Line 868 of glr.c  */
#line 1255 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 281:
/* Line 868 of glr.c  */
#line 1256 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 282:
/* Line 868 of glr.c  */
#line 1260 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 283:
/* Line 868 of glr.c  */
#line 1261 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 284:
/* Line 868 of glr.c  */
#line 1262 "sql.ypp"
    {
      ((*yyvalp).intval) = 3;
    } break;

    case 285:
/* Line 868 of glr.c  */
#line 1263 "sql.ypp"
    {
      ((*yyvalp).intval) = 4;
    } break;

    case 286:
/* Line 868 of glr.c  */
#line 1267 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 293:
/* Line 868 of glr.c  */
#line 1283 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 297:
/* Line 868 of glr.c  */
#line 1294 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 301:
/* Line 868 of glr.c  */
#line 1305 "sql.ypp"
    {
      ((*yyvalp).intval) = 01;
    } break;

    case 302:
/* Line 868 of glr.c  */
#line 1306 "sql.ypp"
    {
      ((*yyvalp).intval) = 02;
    } break;

    case 303:
/* Line 868 of glr.c  */
#line 1307 "sql.ypp"
    {
      ((*yyvalp).intval) = 04;
    } break;

    case 304:
/* Line 868 of glr.c  */
#line 1308 "sql.ypp"
    {
      ((*yyvalp).intval) = 010;
    } break;

    case 305:
/* Line 868 of glr.c  */
#line 1309 "sql.ypp"
    {
      ((*yyvalp).intval) = 020;
    } break;

    case 306:
/* Line 868 of glr.c  */
#line 1310 "sql.ypp"
    {
      ((*yyvalp).intval) = 040;
    } break;

    case 307:
/* Line 868 of glr.c  */
#line 1311 "sql.ypp"
    {
      ((*yyvalp).intval) = 0100;
    } break;

    case 308:
/* Line 868 of glr.c  */
#line 1312 "sql.ypp"
    {
      ((*yyvalp).intval) = 0200;
    } break;

    case 309:
/* Line 868 of glr.c  */
#line 1313 "sql.ypp"
    {
      ((*yyvalp).intval) = 0400;
    } break;

    case 310:
/* Line 868 of glr.c  */
#line 1314 "sql.ypp"
    {
      ((*yyvalp).intval) = 01000;
    } break;

    case 311:
/* Line 868 of glr.c  */
#line 1315 "sql.ypp"
    {
      ((*yyvalp).intval) = 02000;
    } break;

    case 312:
/* Line 868 of glr.c  */
#line 1316 "sql.ypp"
    {
      ((*yyvalp).intval) = 04000;
    } break;

    case 320:
/* Line 868 of glr.c  */
#line 1332 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 322:
/* Line 868 of glr.c  */
#line 1339 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 335:
/* Line 868 of glr.c  */
#line 1368 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 337:
/* Line 868 of glr.c  */
#line 1374 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 339:
/* Line 868 of glr.c  */
#line 1380 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 341:
/* Line 868 of glr.c  */
#line 1387 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 345:
/* Line 868 of glr.c  */
#line 1399 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 349:
/* Line 868 of glr.c  */
#line 1410 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 351:
/* Line 868 of glr.c  */
#line 1416 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 352:
/* Line 868 of glr.c  */
#line 1417 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 353:
/* Line 868 of glr.c  */
#line 1418 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 354:
/* Line 868 of glr.c  */
#line 1422 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 356:
/* Line 868 of glr.c  */
#line 1429 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 358:
/* Line 868 of glr.c  */
#line 1435 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 359:
/* Line 868 of glr.c  */
#line 1436 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 360:
/* Line 868 of glr.c  */
#line 1437 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 361:
/* Line 868 of glr.c  */
#line 1438 "sql.ypp"
    {
      ((*yyvalp).intval) = 3;
    } break;

    case 362:
/* Line 868 of glr.c  */
#line 1439 "sql.ypp"
    {
      ((*yyvalp).intval) = 4;
    } break;

    case 363:
/* Line 868 of glr.c  */
#line 1440 "sql.ypp"
    {
      ((*yyvalp).intval) = 5;
    } break;

    case 364:
/* Line 868 of glr.c  */
#line 1444 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 366:
/* Line 868 of glr.c  */
#line 1450 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 367:
/* Line 868 of glr.c  */
#line 1451 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 368:
/* Line 868 of glr.c  */
#line 1452 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 369:
/* Line 868 of glr.c  */
#line 1456 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 371:
/* Line 868 of glr.c  */
#line 1463 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 377:
/* Line 868 of glr.c  */
#line 1476 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 379:
/* Line 868 of glr.c  */
#line 1482 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                  .yystate.yysemantics.yysval
                                  .ast_node); /*output($$, 1); puts("SQL
                                                 parser： This is a show
                                                 statement");*/
    } break;

    case 380:
/* Line 868 of glr.c  */
#line 1485 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newShowStmt(
          1, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.intval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 407:
/* Line 868 of glr.c  */
#line 1514 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 408:
/* Line 868 of glr.c  */
#line 1515 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 409:
/* Line 868 of glr.c  */
#line 1518 "sql.ypp"
    {
      ((*yyvalp).strval) = NULL;
    } break;

    case 410:
/* Line 868 of glr.c  */
#line 1519 "sql.ypp"
    {
      ((*yyvalp).strval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                                .yystate.yysemantics.yysval.strval);
    } break;

    case 411:
/* Line 868 of glr.c  */
#line 1522 "sql.ypp"
    {
      ((*yyvalp).strval) = NULL;
    } break;

    case 412:
/* Line 868 of glr.c  */
#line 1523 "sql.ypp"
    {
      ((*yyvalp).strval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                                .yystate.yysemantics.yysval.strval);
    } break;

    case 423:
/* Line 868 of glr.c  */
#line 1549 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 424:
/* Line 868 of glr.c  */
#line 1550 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 425:
/* Line 868 of glr.c  */
#line 1551 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 430:
/* Line 868 of glr.c  */
#line 1565 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 431:
/* Line 868 of glr.c  */
#line 1566 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 432:
/* Line 868 of glr.c  */
#line 1567 "sql.ypp"
    {
      ((*yyvalp).intval) = 04;
    } break;

    case 433:
/* Line 868 of glr.c  */
#line 1568 "sql.ypp"
    {
      ((*yyvalp).intval) = 010;
    } break;

    case 434:
/* Line 868 of glr.c  */
#line 1569 "sql.ypp"
    {
      ((*yyvalp).intval) = 020;
    } break;

    case 435:
/* Line 868 of glr.c  */
#line 1570 "sql.ypp"
    {
      ((*yyvalp).intval) = 040;
    } break;

    case 436:
/* Line 868 of glr.c  */
#line 1571 "sql.ypp"
    {
      ((*yyvalp).intval) = 0100;
    } break;

    case 437:
/* Line 868 of glr.c  */
#line 1572 "sql.ypp"
    {
      ((*yyvalp).intval) = 0200;
    } break;

    case 438:
/* Line 868 of glr.c  */
#line 1573 "sql.ypp"
    {
      ((*yyvalp).intval) = 0400;
    } break;

    case 439:
/* Line 868 of glr.c  */
#line 1574 "sql.ypp"
    {
      ((*yyvalp).intval) = 01000;
    } break;

    case 442:
/* Line 868 of glr.c  */
#line 1584 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 443:
/* Line 868 of glr.c  */
#line 1585 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 444:
/* Line 868 of glr.c  */
#line 1586 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 455:
/* Line 868 of glr.c  */
#line 1617 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 456:
/* Line 868 of glr.c  */
#line 1618 "sql.ypp"
    {
      ((*yyvalp).intval) = 2;
    } break;

    case 457:
/* Line 868 of glr.c  */
#line 1619 "sql.ypp"
    {
      ((*yyvalp).intval) = 3;
    } break;

    case 466:
/* Line 868 of glr.c  */
#line 1644 "sql.ypp"
    {
      emit("STMT");
    } break;

    case 470:
/* Line 868 of glr.c  */
#line 1653 "sql.ypp"
    {
      if ((((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.subtok) != 4)
        yyerror(result, "bad set to @%s",
                (((yyGLRStackItem const *)
                  yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval));
      emit("SET %s", (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                          .yystate.yysemantics.yysval.strval));
      free((((yyGLRStackItem const *)
             yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval));
    } break;

    case 471:
/* Line 868 of glr.c  */
#line 1657 "sql.ypp"
    {
      emit("SET %s", (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                          .yystate.yysemantics.yysval.strval));
      free((((yyGLRStackItem const *)
             yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.strval));
    } break;

    case 472:
/* Line 868 of glr.c  */
#line 1664 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL;
    } break;

    case 473:
/* Line 868 of glr.c  */
#line 1665 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLength(
          t_length, atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.strval)),
          0, result->node_pointer);
    } break;

    case 474:
/* Line 868 of glr.c  */
#line 1666 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newLength(
          t_length, atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (5))]
                              .yystate.yysemantics.yysval.strval)),
          atoi((((yyGLRStackItem const *)
                 yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.strval)),
          result->node_pointer);
    } break;

    case 475:
/* Line 868 of glr.c  */
#line 1669 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 476:
/* Line 868 of glr.c  */
#line 1670 "sql.ypp"
    {
      ((*yyvalp).intval) = 1;
    } break;

    case 477:
/* Line 868 of glr.c  */
#line 1673 "sql.ypp"
    {
      ((*yyvalp).intval) = 0;
    } break;

    case 478:
/* Line 868 of glr.c  */
#line 1674 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           01;
    } break;

    case 479:
/* Line 868 of glr.c  */
#line 1675 "sql.ypp"
    {
      ((*yyvalp).intval) = (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (2))]
                                .yystate.yysemantics.yysval.intval) |
                           02;
    } break;

    case 480:
/* Line 868 of glr.c  */
#line 1678 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          newOptCsc(t_opt_csc, 0, NULL, NULL, result->node_pointer);
    } break;

    case 481:
/* Line 868 of glr.c  */
#line 1680 "sql.ypp"
    {
      Opt_csc *t =
          (Opt_csc *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (4))]
                          .yystate.yysemantics.yysval.ast_node);
      t->datatype = t->datatype | 01;
      t->s1 = (((yyGLRStackItem const *)
                yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.strval);
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 482:
/* Line 868 of glr.c  */
#line 1682 "sql.ypp"
    {
      Opt_csc *t =
          (Opt_csc *)(((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                          .yystate.yysemantics.yysval.ast_node);
      t->datatype = t->datatype | 02;
      t->s2 = (((yyGLRStackItem const *)
                yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval);
      ((*yyvalp).ast_node) = (Node *)t;
    } break;

    case 483:
/* Line 868 of glr.c  */
#line 1686 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 1, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                              .yystate.yysemantics.yysval.ast_node),
          0, NULL, 0, NULL, result->node_pointer);
    } break;

    case 484:
/* Line 868 of glr.c  */
#line 1687 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 2, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 485:
/* Line 868 of glr.c  */
#line 1688 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 3, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 486:
/* Line 868 of glr.c  */
#line 1689 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 4, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 487:
/* Line 868 of glr.c  */
#line 1690 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 5, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 488:
/* Line 868 of glr.c  */
#line 1691 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 6, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 489:
/* Line 868 of glr.c  */
#line 1692 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 7, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 490:
/* Line 868 of glr.c  */
#line 1693 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 8, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 491:
/* Line 868 of glr.c  */
#line 1694 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 9, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                              .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 492:
/* Line 868 of glr.c  */
#line 1695 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 10, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                               .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 493:
/* Line 868 of glr.c  */
#line 1696 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 11, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                               .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.intval),
          NULL, 0, NULL, result->node_pointer);
    } break;

    case 494:
/* Line 868 of glr.c  */
#line 1697 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 12, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 495:
/* Line 868 of glr.c  */
#line 1698 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 13, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 496:
/* Line 868 of glr.c  */
#line 1699 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 14, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 497:
/* Line 868 of glr.c  */
#line 1700 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 15, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 498:
/* Line 868 of glr.c  */
#line 1701 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 16, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 499:
/* Line 868 of glr.c  */
#line 1702 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 17, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                               .yystate.yysemantics.yysval.ast_node),
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          0, NULL, result->node_pointer);
    } break;

    case 500:
/* Line 868 of glr.c  */
#line 1703 "sql.ypp"
    {
      Node *t = newLength(
          t_datatype, atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (5))]
                                .yystate.yysemantics.yysval.strval)),
          NULL, result->node_pointer);
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 18, t, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          0, NULL, result->node_pointer);
    } break;

    case 501:
/* Line 868 of glr.c  */
#line 1704 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 19, (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (2))]
                               .yystate.yysemantics.yysval.ast_node),
          0, NULL, 0, NULL, result->node_pointer);
    } break;

    case 502:
/* Line 868 of glr.c  */
#line 1705 "sql.ypp"
    {
      Node *t = newLength(
          t_datatype, atoi((((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (4))]
                                .yystate.yysemantics.yysval.strval)),
          NULL, result->node_pointer);
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 20, t, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 503:
/* Line 868 of glr.c  */
#line 1706 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 21, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 504:
/* Line 868 of glr.c  */
#line 1707 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 22, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 505:
/* Line 868 of glr.c  */
#line 1708 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 23, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 506:
/* Line 868 of glr.c  */
#line 1709 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(t_datatype, 24, NULL, 0, NULL, 0, NULL,
                                         result->node_pointer);
    } break;

    case 507:
/* Line 868 of glr.c  */
#line 1710 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 25, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
    } break;

    case 508:
/* Line 868 of glr.c  */
#line 1711 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 26, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
    } break;

    case 509:
/* Line 868 of glr.c  */
#line 1712 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 27, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
    } break;

    case 510:
/* Line 868 of glr.c  */
#line 1713 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 28, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.intval),
          NULL, result->node_pointer);
    } break;

    case 511:
/* Line 868 of glr.c  */
#line 1714 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 29, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 512:
/* Line 868 of glr.c  */
#line 1715 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newDatatype(
          t_datatype, 30, NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          0, (((yyGLRStackItem const *)
               yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 513:
/* Line 868 of glr.c  */
#line 1718 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newEnumList(
          t_enum_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.strval),
          NULL, result->node_pointer);
    } break;

    case 514:
/* Line 868 of glr.c  */
#line 1719 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newEnumList(
          t_enum_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (3))]
                            .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 515:
/* Line 868 of glr.c  */
#line 1724 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumn(
          t_name, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                             .yystate.yysemantics.yysval.strval),
          NULL, result->node_pointer); /*puts("expr1");*/
    } break;

    case 516:
/* Line 868 of glr.c  */
#line 1725 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          newExpr(t_name, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                               .yystate.yysemantics.yysval.strval),
                  result->node_pointer);
    } break;

    case 517:
/* Line 868 of glr.c  */
#line 1726 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumn(
          t_name_name, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                            .yystate.yysemantics.yysval.strval),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.strval),
          NULL, result->node_pointer); /*puts("expr2");*/
    } break;

    case 518:
/* Line 868 of glr.c  */
#line 1727 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newColumn(
          t_name_name, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                            .yystate.yysemantics.yysval.strval),
          "*", NULL, result->node_pointer); /* puts("expr22");*/
    } break;

    case 519:
/* Line 868 of glr.c  */
#line 1728 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExpr(
          t_stringval, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.strval),
          result->node_pointer); /*puts("expr3");*/
    } break;

    case 520:
/* Line 868 of glr.c  */
#line 1729 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          newExpr(t_intnum, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                                 .yystate.yysemantics.yysval.strval),
                  result->node_pointer); /*puts("expr4");*/
    } break;

    case 521:
/* Line 868 of glr.c  */
#line 1730 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExpr(
          t_approxnum, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.strval),
          result->node_pointer);
    } break;

    case 522:
/* Line 868 of glr.c  */
#line 1731 "sql.ypp"
    {
      ((*yyvalp).ast_node) =
          newExpr(t_bool, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                               .yystate.yysemantics.yysval.strval),
                  result->node_pointer);
    } break;

    case 523:
/* Line 868 of glr.c  */
#line 1734 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "+", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 524:
/* Line 868 of glr.c  */
#line 1735 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "-", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 525:
/* Line 868 of glr.c  */
#line 1736 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "*", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 526:
/* Line 868 of glr.c  */
#line 1737 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "/", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 527:
/* Line 868 of glr.c  */
#line 1738 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "%", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 528:
/* Line 868 of glr.c  */
#line 1739 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "MOD", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 529:
/* Line 868 of glr.c  */
#line 1740 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "--", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 530:
/* Line 868 of glr.c  */
#line 1741 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "++", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 531:
/* Line 868 of glr.c  */
#line 1742 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "ANDOP", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 532:
/* Line 868 of glr.c  */
#line 1743 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "OR", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 533:
/* Line 868 of glr.c  */
#line 1744 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "XOR", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 534:
/* Line 868 of glr.c  */
#line 1745 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "CMP", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.subtok),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer); /* puts("=");*/
    } break;

    case 535:
/* Line 868 of glr.c  */
#line 1746 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "CMP", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.subtok),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 536:
/* Line 868 of glr.c  */
#line 1747 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "CMP", "ANY",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.subtok),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 537:
/* Line 868 of glr.c  */
#line 1748 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "CMP", "SOME",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.subtok),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 538:
/* Line 868 of glr.c  */
#line 1749 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "CMP", "ALL",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.subtok),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 539:
/* Line 868 of glr.c  */
#line 1750 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "|", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 540:
/* Line 868 of glr.c  */
#line 1751 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "&", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 541:
/* Line 868 of glr.c  */
#line 1752 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "^", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 542:
/* Line 868 of glr.c  */
#line 1753 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, (SHIFT == 1 ? "LS" : "RS"), NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 543:
/* Line 868 of glr.c  */
#line 1754 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NOT", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 544:
/* Line 868 of glr.c  */
#line 1755 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "!", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (2))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 545:
/* Line 868 of glr.c  */
#line 1756 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL;
    } break;

    case 546:
/* Line 868 of glr.c  */
#line 1757 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 547:
/* Line 868 of glr.c  */
#line 1760 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "ISN",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 548:
/* Line 868 of glr.c  */
#line 1761 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "ISNN",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 549:
/* Line 868 of glr.c  */
#line 1762 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "ISB",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 550:
/* Line 868 of glr.c  */
#line 1763 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "ISNB",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 551:
/* Line 868 of glr.c  */
#line 1766 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "BA", (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (5))]
                                  .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 552:
/* Line 868 of glr.c  */
#line 1771 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprList(
          t_expr_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 553:
/* Line 868 of glr.c  */
#line 1773 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprList(
          t_expr_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                            .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 554:
/* Line 868 of glr.c  */
#line 1775 "sql.ypp"
    {
      ((*yyvalp).ast_node) = (((yyGLRStackItem const *)yyvsp)[YYFILL((2) - (3))]
                                  .yystate.yysemantics.yysval.ast_node);
    } break;

    case 555:
/* Line 868 of glr.c  */
#line 1779 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprList(
          t_expr_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (1))]
                            .yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 556:
/* Line 868 of glr.c  */
#line 1780 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprList(
          t_expr_list, (((yyGLRStackItem const *)yyvsp)[YYFILL((1) - (3))]
                            .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 557:
/* Line 868 of glr.c  */
#line 1784 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "INVS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 558:
/* Line 868 of glr.c  */
#line 1785 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "INVM", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 559:
/* Line 868 of glr.c  */
#line 1786 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NINS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 560:
/* Line 868 of glr.c  */
#line 1787 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NINM", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 561:
/* Line 868 of glr.c  */
#line 1788 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "INS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 562:
/* Line 868 of glr.c  */
#line 1789 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "INS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (7))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 563:
/* Line 868 of glr.c  */
#line 1790 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NINS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 564:
/* Line 868 of glr.c  */
#line 1791 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NINS", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 565:
/* Line 868 of glr.c  */
#line 1792 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "EX", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 566:
/* Line 868 of glr.c  */
#line 1793 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NINS", NULL, 0, NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 567:
/* Line 868 of glr.c  */
#line 1796 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NAME",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (4))].yystate.yysemantics.yysval.strval),
          0, NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (4))]
                        .yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 568:
/* Line 868 of glr.c  */
#line 1800 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(t_expr_func, "FCOUNTALL", NULL, NULL,
                                         NULL, NULL, result->node_pointer);
    } break;

    case 569:
/* Line 868 of glr.c  */
#line 1801 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FCOUNT", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 570:
/* Line 868 of glr.c  */
#line 1803 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FSUM", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 571:
/* Line 868 of glr.c  */
#line 1804 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FAVG", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 572:
/* Line 868 of glr.c  */
#line 1805 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FMIN", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 573:
/* Line 868 of glr.c  */
#line 1806 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FMAX", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 574:
/* Line 868 of glr.c  */
#line 1811 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FSUBSTRING0",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 575:
/* Line 868 of glr.c  */
#line 1812 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FSUBSTRING0",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 576:
/* Line 868 of glr.c  */
#line 1813 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FSUBSTRING1",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 577:
/* Line 868 of glr.c  */
#line 1814 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FSUBSTRING1",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (8))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((7) - (8))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 578:
/* Line 868 of glr.c  */
#line 1815 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FTRIM3", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 579:
/* Line 868 of glr.c  */
#line 1816 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, (((yyGLRStackItem const *)yyvsp)[YYFILL((3) - (7))]
                            .yystate.yysemantics.yysval.strval),
          NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL((4) - (7))]
                     .yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((6) - (7))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 580:
/* Line 868 of glr.c  */
#line 1817 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FUPPER", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 581:
/* Line 868 of glr.c  */
#line 1818 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FCAST", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 582:
/* Line 868 of glr.c  */
#line 1819 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FCOALESCE", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 583:
/* Line 868 of glr.c  */
#line 1821 "sql.ypp"
    {
      ((*yyvalp).strval) = "FTRIM1";
    } break;

    case 584:
/* Line 868 of glr.c  */
#line 1822 "sql.ypp"
    {
      ((*yyvalp).strval) = "FTRIM2";
    } break;

    case 585:
/* Line 868 of glr.c  */
#line 1823 "sql.ypp"
    {
      ((*yyvalp).strval) = "FTRIM0";
    } break;

    case 586:
/* Line 868 of glr.c  */
#line 1825 "sql.ypp"
    {
      ((*yyvalp).ast_node) = NULL;
    } break;

    case 587:
/* Line 868 of glr.c  */
#line 1826 "sql.ypp"
    {
      char d[10] = "int";
      ((*yyvalp).ast_node) = newExpr(t_stringval, d, result->node_pointer);
    } break;

    case 588:
/* Line 868 of glr.c  */
#line 1827 "sql.ypp"
    {
      char d[10] = "string";
      ((*yyvalp).ast_node) = newExpr(t_stringval, d, result->node_pointer);
    } break;

    case 589:
/* Line 868 of glr.c  */
#line 1828 "sql.ypp"
    {
      char d[10] = "double";
      ((*yyvalp).ast_node) = newExpr(t_stringval, d, result->node_pointer);
    } break;

    case 590:
/* Line 868 of glr.c  */
#line 1829 "sql.ypp"
    {
      char d[10] = "float";
      ((*yyvalp).ast_node) = newExpr(t_stringval, d, result->node_pointer);
    } break;

    case 591:
/* Line 868 of glr.c  */
#line 1830 "sql.ypp"
    {
      char d[10] = "char";
      ((*yyvalp).ast_node) = newExpr(t_stringval, d, result->node_pointer);
    } break;

    case 592:
/* Line 868 of glr.c  */
#line 1835 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FDATE_ADD",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 593:
/* Line 868 of glr.c  */
#line 1836 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "FDATE_SUB",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 594:
/* Line 868 of glr.c  */
#line 1839 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_HOUR",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 595:
/* Line 868 of glr.c  */
#line 1840 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_MICROSECOND",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 596:
/* Line 868 of glr.c  */
#line 1841 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_MINUTE",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 597:
/* Line 868 of glr.c  */
#line 1842 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_SECOND",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 598:
/* Line 868 of glr.c  */
#line 1843 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_DAY",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 599:
/* Line 868 of glr.c  */
#line 1844 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_MONTH",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 600:
/* Line 868 of glr.c  */
#line 1845 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_YEAR",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 601:
/* Line 868 of glr.c  */
#line 1846 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_WEEK",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 602:
/* Line 868 of glr.c  */
#line 1847 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "INTERVAL_QUARTER",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, NULL, result->node_pointer);
    } break;

    case 603:
/* Line 868 of glr.c  */
#line 1851 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "CASE1",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (4))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 604:
/* Line 868 of glr.c  */
#line 1852 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "CASE2",
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (6))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (6))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 605:
/* Line 868 of glr.c  */
#line 1853 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "CASE3", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (3))].yystate.yysemantics.yysval.ast_node),
          NULL, NULL, result->node_pointer);
    } break;

    case 606:
/* Line 868 of glr.c  */
#line 1854 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "CASE4", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (5))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 607:
/* Line 868 of glr.c  */
#line 1857 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "WHEN2", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((2) - (4))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          NULL, result->node_pointer);
    } break;

    case 608:
/* Line 868 of glr.c  */
#line 1858 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprFunc(
          t_expr_func, "WHEN2", NULL,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((5) - (5))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (5))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 609:
/* Line 868 of glr.c  */
#line 1861 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "LIKE", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 610:
/* Line 868 of glr.c  */
#line 1862 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NLIKE", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (4))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 611:
/* Line 868 of glr.c  */
#line 1865 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "REGEXP", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (3))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((3) - (3))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

    case 612:
/* Line 868 of glr.c  */
#line 1866 "sql.ypp"
    {
      ((*yyvalp).ast_node) = newExprCal(
          t_expr_cal, "NREGEXP", NULL, 0,
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((1) - (4))].yystate.yysemantics.yysval.ast_node),
          (((yyGLRStackItem const *)
            yyvsp)[YYFILL((4) - (4))].yystate.yysemantics.yysval.ast_node),
          result->node_pointer);
    } break;

/* Line 868 of glr.c  */
#line 5861 "sql.tab.cpp"
    default:
      break;
  }

  return yyok;
#undef yyerrok
#undef YYABORT
#undef YYACCEPT
#undef YYERROR
#undef YYBACKUP
#undef yyclearin
#undef YYRECOVERING
}

/*ARGSUSED*/ static void yyuserMerge(int yyn, YYSTYPE *yy0, YYSTYPE *yy1) {
  YYUSE(yy0);
  YYUSE(yy1);

  switch (yyn) {
    default:
      break;
  }
}

/* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void yydestruct(const char *yymsg, int yytype, YYSTYPE *yyvaluep,
                       struct ParseResult *result) {
  YYUSE(yyvaluep);
  YYUSE(result);

  if (!yymsg) yymsg = "Deleting";
  YY_SYMBOL_PRINT(yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype) {
    default:
      break;
  }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int yyrhsLength(yyRuleNum yyrule) { return yyr2[yyrule]; }

static void yydestroyGLRState(char const *yymsg, yyGLRState *yys,
                              struct ParseResult *result) {
  if (yys->yyresolved)
    yydestruct(yymsg, yystos[yys->yylrState], &yys->yysemantics.yysval, result);
  else {
#if YYDEBUG
    if (yydebug) {
      if (yys->yysemantics.yyfirstVal)
        YYFPRINTF(stderr, "%s unresolved ", yymsg);
      else
        YYFPRINTF(stderr, "%s incomplete ", yymsg);
      yy_symbol_print(stderr, yystos[yys->yylrState], YY_NULL, result);
      YYFPRINTF(stderr, "\n");
    }
#endif

    if (yys->yysemantics.yyfirstVal) {
      yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
      yyGLRState *yyrh;
      int yyn;
      for (yyrh = yyoption->yystate, yyn = yyrhsLength(yyoption->yyrule);
           yyn > 0; yyrh = yyrh->yypred, yyn -= 1)
        yydestroyGLRState(yymsg, yyrh, result);
    }
  }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol yylhsNonterm(yyRuleNum yyrule) { return yyr1[yyrule]; }

#define yypact_value_is_default(Yystate) (!!((Yystate) == (-921)))

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool yyisDefaultedState(yyStateNum yystate) {
  return yypact_value_is_default(yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum yydefaultAction(yyStateNum yystate) {
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) (!!((Yytable_value) == (-566)))

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void yygetLRActions(yyStateNum yystate, int yytoken,
                                  int *yyaction,
                                  const short int **yyconflicts) {
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default(yypact[yystate]) || yyindex < 0 ||
      YYLAST < yyindex || yycheck[yyindex] != yytoken) {
    *yyaction = -yydefact[yystate];
    *yyconflicts = yyconfl;
  } else if (!yytable_value_is_error(yytable[yyindex])) {
    *yyaction = yytable[yyindex];
    *yyconflicts = yyconfl + yyconflp[yyindex];
  } else {
    *yyaction = 0;
    *yyconflicts = yyconfl + yyconflp[yyindex];
  }
}

static inline yyStateNum yyLRgotoState(yyStateNum yystate, yySymbol yylhs) {
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool yyisShiftAction(int yyaction) { return 0 < yyaction; }

static inline yybool yyisErrorAction(int yyaction) { return yyaction == 0; }

/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem *yynewGLRStackItem(yyGLRStack *yystackp,
                                                yybool yyisState) {
  yyGLRStackItem *yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void yyaddDeferredAction(yyGLRStack *yystackp, size_t yyk,
                                yyGLRState *yystate, yyGLRState *rhs,
                                yyRuleNum yyrule) {
  yySemanticOption *yynewOption =
      &yynewGLRStackItem(yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk]) {
    yynewOption->yyrawchar = yychar;
    yynewOption->yyval = yylval;
  } else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK(yystackp);
}

/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool yyinitStateSet(yyGLRStateSet *yyset) {
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState **)YYMALLOC(16 * sizeof yyset->yystates[0]);
  if (!yyset->yystates) return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
      (yybool *)YYMALLOC(16 * sizeof yyset->yylookaheadNeeds[0]);
  if (!yyset->yylookaheadNeeds) {
    YYFREE(yyset->yystates);
    return yyfalse;
  }
  return yytrue;
}

static void yyfreeStateSet(yyGLRStateSet *yyset) {
  YYFREE(yyset->yystates);
  YYFREE(yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool yyinitGLRStack(yyGLRStack *yystackp, size_t yysize) {
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
      (yyGLRStackItem *)YYMALLOC(yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems) return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet(&yystackp->yytops);
}

#if YYSTACKEXPANDABLE
#define YYRELOC(YYFROMITEMS, YYTOITEMS, YYX, YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem *)(YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void yyexpandGLRStack(yyGLRStack *yystackp) {
  yyGLRStackItem *yynewItems;
  yyGLRStackItem *yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize) yyMemoryExhausted(yystackp);
  yynewSize = 2 * yysize;
  if (YYMAXDEPTH < yynewSize) yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem *)YYMALLOC(yynewSize * sizeof yynewItems[0]);
  if (!yynewItems) yyMemoryExhausted(yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize; 0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1) {
    *yyp1 = *yyp0;
    if (*(yybool *)yyp0) {
      yyGLRState *yys0 = &yyp0->yystate;
      yyGLRState *yys1 = &yyp1->yystate;
      if (yys0->yypred != YY_NULL)
        yys1->yypred = YYRELOC(yyp0, yyp1, yys0->yypred, yystate);
      if (!yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
        yys1->yysemantics.yyfirstVal =
            YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
    } else {
      yySemanticOption *yyv0 = &yyp0->yyoption;
      yySemanticOption *yyv1 = &yyp1->yyoption;
      if (yyv0->yystate != YY_NULL)
        yyv1->yystate = YYRELOC(yyp0, yyp1, yyv0->yystate, yystate);
      if (yyv0->yynext != YY_NULL)
        yyv1->yynext = YYRELOC(yyp0, yyp1, yyv0->yynext, yyoption);
    }
  }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint =
        YYRELOC(yystackp->yyitems, yynewItems, yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
          YYRELOC(yystackp->yyitems, yynewItems, yystackp->yytops.yystates[yyn],
                  yystate);
  YYFREE(yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void yyfreeGLRStack(yyGLRStack *yystackp) {
  YYFREE(yystackp->yyitems);
  yyfreeStateSet(&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void yyupdateSplit(yyGLRStack *yystackp, yyGLRState *yys) {
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void yymarkStackDeleted(yyGLRStack *yystackp, size_t yyk) {
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void yyundeleteLastStack(yyGLRStack *yystackp) {
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void yyremoveDeletes(yyGLRStack *yystackp) {
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize) {
    if (yystackp->yytops.yystates[yyi] == YY_NULL) {
      if (yyi == yyj) {
        YYDPRINTF((stderr, "Removing dead stacks.\n"));
      }
      yystackp->yytops.yysize -= 1;
    } else {
      yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
      /* In the current implementation, it's unnecessary to copy
         yystackp->yytops.yylookaheadNeeds[yyi] since, after
         yyremoveDeletes returns, the parser immediately either enters
         deterministic operation or shifts a token.  However, it doesn't
         hurt, and the code might evolve to need it.  */
      yystackp->yytops.yylookaheadNeeds[yyj] =
          yystackp->yytops.yylookaheadNeeds[yyi];
      if (yyj != yyi) {
        YYDPRINTF((stderr, "Rename stack %lu -> %lu.\n", (unsigned long int)yyi,
                   (unsigned long int)yyj));
      }
      yyj += 1;
    }
    yyi += 1;
  }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void yyglrShift(yyGLRStack *yystackp, size_t yyk,
                              yyStateNum yylrState, size_t yyposn,
                              YYSTYPE *yyvalp) {
  yyGLRState *yynewState = &yynewGLRStackItem(yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK(yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void yyglrShiftDefer(yyGLRStack *yystackp, size_t yyk,
                                   yyStateNum yylrState, size_t yyposn,
                                   yyGLRState *rhs, yyRuleNum yyrule) {
  yyGLRState *yynewState = &yynewGLRStackItem(yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction(yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG yydoAction(yyGLRStack *yystackp, size_t yyk,
                                     yyRuleNum yyrule, YYSTYPE *yyvalp,
                                     struct ParseResult *result) {
  int yynrhs = yyrhsLength(yyrule);

  if (yystackp->yysplitPoint == YY_NULL) {
    /* Standard special case: single stack.  */
    yyGLRStackItem *rhs = (yyGLRStackItem *)yystackp->yytops.yystates[yyk];
    YYASSERT(yyk == 0);
    yystackp->yynextFree -= yynrhs;
    yystackp->yyspaceLeft += yynrhs;
    yystackp->yytops.yystates[0] = &yystackp->yynextFree[-1].yystate;
    return yyuserAction(yyrule, yynrhs, rhs, yystackp, yyvalp, result);
  } else {
    /* At present, doAction is never called in nondeterministic
     * mode, so this branch is never taken.  It is here in
     * anticipation of a future feature that will allow immediate
     * evaluation of selected actions in nondeterministic mode.  */
    int yyi;
    yyGLRState *yys;
    yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
    yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred =
        yystackp->yytops.yystates[yyk];
    for (yyi = 0; yyi < yynrhs; yyi += 1) {
      yys = yys->yypred;
      YYASSERT(yys);
    }
    yyupdateSplit(yystackp, yys);
    yystackp->yytops.yystates[yyk] = yys;
    return yyuserAction(yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                        yystackp, yyvalp, result);
  }
}

#if !YYDEBUG
#define YY_REDUCE_PRINT(Args)
#else
#define YY_REDUCE_PRINT(Args)          \
  do {                                 \
    if (yydebug) yy_reduce_print Args; \
  } while (YYID(0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void yy_reduce_print(yyGLRStack *yystackp,
                                                size_t yyk, yyRuleNum yyrule,
                                                YYSTYPE *yyvalp,
                                                struct ParseResult *result) {
  int yynrhs = yyrhsLength(yyrule);
  yybool yynormal __attribute__((__unused__)) =
      (yystackp->yysplitPoint == YY_NULL);
  yyGLRStackItem *yyvsp = (yyGLRStackItem *)yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE(yyvalp);
  YYUSE(result);
  YYFPRINTF(stderr, "Reducing stack %lu by rule %d (line %lu):\n",
            (unsigned long int)yyk, yyrule - 1,
            (unsigned long int)yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++) {
    YYFPRINTF(stderr, "   $%d = ", yyi + 1);
    yy_symbol_print(
        stderr, yyrhs[yyprhs[yyrule] + yyi],
        &(((yyGLRStackItem const *)
           yyvsp)[YYFILL((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval),
        result);
    YYFPRINTF(stderr, "\n");
  }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG yyglrReduce(yyGLRStack *yystackp, size_t yyk,
                                      yyRuleNum yyrule, yybool yyforceEval,
                                      struct ParseResult *result) {
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL) {
    YYSTYPE yysval;

    YY_REDUCE_PRINT((yystackp, yyk, yyrule, &yysval, result));
    YYCHK(yydoAction(yystackp, yyk, yyrule, &yysval, result));
    YY_SYMBOL_PRINT("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
    yyglrShift(yystackp, yyk,
               yyLRgotoState(yystackp->yytops.yystates[yyk]->yylrState,
                             yylhsNonterm(yyrule)),
               yyposn, &yysval);
  } else {
    size_t yyi;
    int yyn;
    yyGLRState *yys, *yys0 = yystackp->yytops.yystates[yyk];
    yyStateNum yynewLRState;

    for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength(yyrule);
         0 < yyn; yyn -= 1) {
      yys = yys->yypred;
      YYASSERT(yys);
    }
    yyupdateSplit(yystackp, yys);
    yynewLRState = yyLRgotoState(yys->yylrState, yylhsNonterm(yyrule));
    YYDPRINTF(
        (stderr,
         "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
         (unsigned long int)yyk, yyrule - 1, yynewLRState));
    for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
      if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL) {
        yyGLRState *yysplit = yystackp->yysplitPoint;
        yyGLRState *yyp = yystackp->yytops.yystates[yyi];
        while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn) {
          if (yyp->yylrState == yynewLRState && yyp->yypred == yys) {
            yyaddDeferredAction(yystackp, yyk, yyp, yys0, yyrule);
            yymarkStackDeleted(yystackp, yyk);
            YYDPRINTF((stderr, "Merging stack %lu into stack %lu.\n",
                       (unsigned long int)yyk, (unsigned long int)yyi));
            return yyok;
          }
          yyp = yyp->yypred;
        }
      }
    yystackp->yytops.yystates[yyk] = yys;
    yyglrShiftDefer(yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
  }
  return yyok;
}

static size_t yysplitStack(yyGLRStack *yystackp, size_t yyk) {
  if (yystackp->yysplitPoint == YY_NULL) {
    YYASSERT(yyk == 0);
    yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
  }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity) {
    yyGLRState **yynewStates;
    yybool *yynewLookaheadNeeds;

    yynewStates = YY_NULL;

    if (yystackp->yytops.yycapacity > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
      yyMemoryExhausted(yystackp);
    yystackp->yytops.yycapacity *= 2;

    yynewStates = (yyGLRState **)YYREALLOC(
        yystackp->yytops.yystates,
        (yystackp->yytops.yycapacity * sizeof yynewStates[0]));
    if (yynewStates == YY_NULL) yyMemoryExhausted(yystackp);
    yystackp->yytops.yystates = yynewStates;

    yynewLookaheadNeeds = (yybool *)YYREALLOC(
        yystackp->yytops.yylookaheadNeeds,
        (yystackp->yytops.yycapacity * sizeof yynewLookaheadNeeds[0]));
    if (yynewLookaheadNeeds == YY_NULL) yyMemoryExhausted(yystackp);
    yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
  }
  yystackp->yytops.yystates[yystackp->yytops.yysize] =
      yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize] =
      yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize - 1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool yyidenticalOptions(yySemanticOption *yyy0,
                                 yySemanticOption *yyy1) {
  if (yyy0->yyrule == yyy1->yyrule) {
    yyGLRState *yys0, *yys1;
    int yyn;
    for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
        yyn = yyrhsLength(yyy0->yyrule);
         yyn > 0; yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
      if (yys0->yyposn != yys1->yyposn) return yyfalse;
    return yytrue;
  } else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void yymergeOptionSets(yySemanticOption *yyy0, yySemanticOption *yyy1) {
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
      yyn = yyrhsLength(yyy0->yyrule);
       yyn > 0; yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1) {
    if (yys0 == yys1)
      break;
    else if (yys0->yyresolved) {
      yys1->yyresolved = yytrue;
      yys1->yysemantics.yysval = yys0->yysemantics.yysval;
    } else if (yys1->yyresolved) {
      yys0->yyresolved = yytrue;
      yys0->yysemantics.yysval = yys1->yysemantics.yysval;
    } else {
      yySemanticOption **yyz0p = &yys0->yysemantics.yyfirstVal;
      yySemanticOption *yyz1 = yys1->yysemantics.yyfirstVal;
      while (YYID(yytrue)) {
        if (yyz1 == *yyz0p || yyz1 == YY_NULL)
          break;
        else if (*yyz0p == YY_NULL) {
          *yyz0p = yyz1;
          break;
        } else if (*yyz0p < yyz1) {
          yySemanticOption *yyz = *yyz0p;
          *yyz0p = yyz1;
          yyz1 = yyz1->yynext;
          (*yyz0p)->yynext = yyz;
        }
        yyz0p = &(*yyz0p)->yynext;
      }
      yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
    }
  }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int yypreference(yySemanticOption *y0, yySemanticOption *y1) {
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1) {
    if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
      return 0;
    else
      return 1;
  }
  if (p0 == 0 || p1 == 0) return 0;
  if (p0 < p1) return 3;
  if (p1 < p0) return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue(yyGLRState *yys, yyGLRStack *yystackp,
                                  struct ParseResult *result);

/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG yyresolveStates(yyGLRState *yys, int yyn,
                                   yyGLRStack *yystackp,
                                   struct ParseResult *result) {
  if (0 < yyn) {
    YYASSERT(yys->yypred);
    YYCHK(yyresolveStates(yys->yypred, yyn - 1, yystackp, result));
    if (!yys->yyresolved) YYCHK(yyresolveValue(yys, yystackp, result));
  }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG yyresolveAction(yySemanticOption *yyopt,
                                   yyGLRStack *yystackp, YYSTYPE *yyvalp,
                                   struct ParseResult *result) {
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength(yyopt->yyrule);
  YYRESULTTAG yyflag =
      yyresolveStates(yyopt->yystate, yynrhs, yystackp, result);
  if (yyflag != yyok) {
    yyGLRState *yys;
    for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
      yydestroyGLRState("Cleanup: popping", yys, result);
    return yyflag;
  }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction(yyopt->yyrule, yynrhs,
                          yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yystackp,
                          yyvalp, result);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void yyreportTree(yySemanticOption *yyx, int yyindent) {
  int yynrhs = yyrhsLength(yyx->yyrule);
  int yyi;
  yyGLRState *yys;
  yyGLRState *yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL) {
    yyleftmost_state.yyposn = 0;
    yystates[0] = &yyleftmost_state;
  } else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF(stderr, "%*s%s -> <Rule %d, empty>\n", yyindent, "",
              yytokenName(yylhsNonterm(yyx->yyrule)), yyx->yyrule - 1);
  else
    YYFPRINTF(stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n", yyindent, "",
              yytokenName(yylhsNonterm(yyx->yyrule)), yyx->yyrule - 1,
              (unsigned long int)(yys->yyposn + 1),
              (unsigned long int)yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1) {
    if (yystates[yyi]->yyresolved) {
      if (yystates[yyi - 1]->yyposn + 1 > yystates[yyi]->yyposn)
        YYFPRINTF(stderr, "%*s%s <empty>\n", yyindent + 2, "",
                  yytokenName(yyrhs[yyprhs[yyx->yyrule] + yyi - 1]));
      else
        YYFPRINTF(stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent + 2, "",
                  yytokenName(yyrhs[yyprhs[yyx->yyrule] + yyi - 1]),
                  (unsigned long int)(yystates[yyi - 1]->yyposn + 1),
                  (unsigned long int)yystates[yyi]->yyposn);
    } else
      yyreportTree(yystates[yyi]->yysemantics.yyfirstVal, yyindent + 2);
  }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG yyreportAmbiguity(yySemanticOption *yyx0,
                                                  yySemanticOption *yyx1,
                                                  struct ParseResult *result) {
  YYUSE(yyx0);
  YYUSE(yyx1);

#if YYDEBUG
  YYFPRINTF(stderr, "Ambiguity detected.\n");
  YYFPRINTF(stderr, "Option 1,\n");
  yyreportTree(yyx0, 2);
  YYFPRINTF(stderr, "\nOption 2,\n");
  yyreportTree(yyx1, 2);
  YYFPRINTF(stderr, "\n");
#endif

  yyerror(result, YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG yyresolveValue(yyGLRState *yys, yyGLRStack *yystackp,
                                  struct ParseResult *result) {
  yySemanticOption *yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption *yybest = yyoptionList;
  yySemanticOption **yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL;) {
    yySemanticOption *yyp = *yypp;

    if (yyidenticalOptions(yybest, yyp)) {
      yymergeOptionSets(yybest, yyp);
      *yypp = yyp->yynext;
    } else {
      switch (yypreference(yybest, yyp)) {
        case 0:
          return yyreportAmbiguity(yybest, yyp, result);
          break;
        case 1:
          yymerge = yytrue;
          break;
        case 2:
          break;
        case 3:
          yybest = yyp;
          yymerge = yyfalse;
          break;
        default:
          /* This cannot happen so it is not worth a YYASSERT (yyfalse),
             but some compilers complain if the default case is
             omitted.  */
          break;
      }
      yypp = &yyp->yynext;
    }
  }

  if (yymerge) {
    yySemanticOption *yyp;
    int yyprec = yydprec[yybest->yyrule];
    yyflag = yyresolveAction(yybest, yystackp, &yysval, result);
    if (yyflag == yyok)
      for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext) {
        if (yyprec == yydprec[yyp->yyrule]) {
          YYSTYPE yysval_other;
          yyflag = yyresolveAction(yyp, yystackp, &yysval_other, result);
          if (yyflag != yyok) {
            yydestruct("Cleanup: discarding incompletely merged value for",
                       yystos[yys->yylrState], &yysval, result);
            break;
          }
          yyuserMerge(yymerger[yyp->yyrule], &yysval, &yysval_other);
        }
      }
  } else
    yyflag = yyresolveAction(yybest, yystackp, &yysval, result);

  if (yyflag == yyok) {
    yys->yyresolved = yytrue;
    yys->yysemantics.yysval = yysval;
  } else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG yyresolveStack(yyGLRStack *yystackp,
                                  struct ParseResult *result) {
  if (yystackp->yysplitPoint != YY_NULL) {
    yyGLRState *yys;
    int yyn;

    for (yyn = 0, yys = yystackp->yytops.yystates[0];
         yys != yystackp->yysplitPoint; yys = yys->yypred, yyn += 1)
      continue;
    YYCHK(yyresolveStates(yystackp->yytops.yystates[0], yyn, yystackp, result));
  }
  return yyok;
}

static void yycompressStack(yyGLRStack *yystackp) {
  yyGLRState *yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL) return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint; yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem *)yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL) {
    yystackp->yynextFree->yystate = *yyr;
    yyr = yyr->yypred;
    yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
    yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
    yystackp->yynextFree += 1;
    yystackp->yyspaceLeft -= 1;
  }
}

static YYRESULTTAG yyprocessOneStack(yyGLRStack *yystackp, size_t yyk,
                                     size_t yyposn,
                                     struct ParseResult *result) {
  int yyaction;
  const short int *yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != YY_NULL) {
    yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
    YYDPRINTF((stderr, "Stack %lu Entering state %d\n", (unsigned long int)yyk,
               yystate));

    YYASSERT(yystate != YYFINAL);

    if (yyisDefaultedState(yystate)) {
      yyrule = yydefaultAction(yystate);
      if (yyrule == 0) {
        YYDPRINTF((stderr, "Stack %lu dies.\n", (unsigned long int)yyk));
        yymarkStackDeleted(yystackp, yyk);
        return yyok;
      }
      YYCHK(yyglrReduce(yystackp, yyk, yyrule, yyfalse, result));
    } else {
      yySymbol yytoken;
      yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
      if (yychar == YYEMPTY) {
        YYDPRINTF((stderr, "Reading a token: "));
        yychar = YYLEX;
      }

      if (yychar <= YYEOF) {
        yychar = yytoken = YYEOF;
        YYDPRINTF((stderr, "Now at end of input.\n"));
      } else {
        yytoken = YYTRANSLATE(yychar);
        YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
      }

      yygetLRActions(yystate, yytoken, &yyaction, &yyconflicts);

      while (*yyconflicts != 0) {
        size_t yynewStack = yysplitStack(yystackp, yyk);
        YYDPRINTF((stderr, "Splitting off stack %lu from %lu.\n",
                   (unsigned long int)yynewStack, (unsigned long int)yyk));
        YYCHK(yyglrReduce(yystackp, yynewStack, *yyconflicts, yyfalse, result));
        YYCHK(yyprocessOneStack(yystackp, yynewStack, yyposn, result));
        yyconflicts += 1;
      }

      if (yyisShiftAction(yyaction))
        break;
      else if (yyisErrorAction(yyaction)) {
        YYDPRINTF((stderr, "Stack %lu dies.\n", (unsigned long int)yyk));
        yymarkStackDeleted(yystackp, yyk);
        break;
      } else
        YYCHK(yyglrReduce(yystackp, yyk, -yyaction, yyfalse, result));
    }
  }
  return yyok;
}

/*ARGSUSED*/ static void yyreportSyntaxError(yyGLRStack *yystackp,
                                             struct ParseResult *result) {
  if (yystackp->yyerrState != 0) return;
#if !YYERROR_VERBOSE
  yyerror(result, YY_("syntax error"));
#else
  {
    yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE(yychar);
    size_t yysize0 = yytnamerr(YY_NULL, yytokenName(yytoken));
    size_t yysize = yysize0;
    yybool yysize_overflow = yyfalse;
    char *yymsg = YY_NULL;
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    /* Internationalized format string. */
    const char *yyformat = YY_NULL;
    /* Arguments of yyformat. */
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
    /* Number of reported tokens (one for the "unexpected", one per
       "expected").  */
    int yycount = 0;

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yychar) is if
         this state is a consistent state with a default action.  Thus,
         detecting the absence of a lookahead is sufficient to determine
         that there is no unexpected or expected token to report.  In that
         case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is a
         consistent state with a default action.  There might have been a
         previous inconsistent state, consistent state with a non-default
         action, or user semantic action that manipulated yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */
    if (yytoken != YYEMPTY) {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName(yytoken);
      if (!yypact_value_is_default(yyn)) {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for this
           state because they are default actions.  */
        int yyxbegin = yyn < 0 ? -yyn : 0;
        /* Stay within bounds of both yycheck and yytname.  */
        int yychecklim = YYLAST - yyn + 1;
        int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        int yyx;
        for (yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR &&
              !yytable_value_is_error(yytable[yyx + yyn])) {
            if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM) {
              yycount = 1;
              yysize = yysize0;
              break;
            }
            yyarg[yycount++] = yytokenName(yyx);
            {
              size_t yysz = yysize + yytnamerr(YY_NULL, yytokenName(yyx));
              yysize_overflow |= yysz < yysize;
              yysize = yysz;
            }
          }
      }
    }

    switch (yycount) {
#define YYCASE_(N, S) \
  case N:             \
    yyformat = S;     \
    break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(
          5,
          YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

    {
      size_t yysz = yysize + strlen(yyformat);
      yysize_overflow |= yysz < yysize;
      yysize = yysz;
    }

    if (!yysize_overflow) yymsg = (char *)YYMALLOC(yysize);

    if (yymsg) {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat)) {
        if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount) {
          yyp += yytnamerr(yyp, yyarg[yyi++]);
          yyformat += 2;
        } else {
          yyp++;
          yyformat++;
        }
      }
      yyerror(result, yymsg);
      YYFREE(yymsg);
    } else {
      yyerror(result, YY_("syntax error"));
      yyMemoryExhausted(yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void yyrecoverSyntaxError(yyGLRStack *yystackp,
                                              struct ParseResult *result) {
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID(yytrue)) {
      yySymbol yytoken;
      if (yychar == YYEOF) yyFail(yystackp, result, YY_NULL);
      if (yychar != YYEMPTY) {
        yytoken = YYTRANSLATE(yychar);
        yydestruct("Error: discarding", yytoken, &yylval, result);
      }
      YYDPRINTF((stderr, "Reading a token: "));
      yychar = YYLEX;
      if (yychar <= YYEOF) {
        yychar = yytoken = YYEOF;
        YYDPRINTF((stderr, "Now at end of input.\n"));
      } else {
        yytoken = YYTRANSLATE(yychar);
        YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
      }
      yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (yypact_value_is_default(yyj)) return;
      yyj += yytoken;
      if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken) {
        if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0) return;
      } else if (!yytable_value_is_error(yytable[yyj]))
        return;
    }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL) break;
  if (yyk >= yystackp->yytops.yysize) yyFail(yystackp, result, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted(yystackp, yyk);
  yyremoveDeletes(yystackp);
  yycompressStack(yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL) {
    yyGLRState *yys = yystackp->yytops.yystates[0];
    yyj = yypact[yys->yylrState];
    if (!yypact_value_is_default(yyj)) {
      yyj += YYTERROR;
      if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR &&
          yyisShiftAction(yytable[yyj])) {
        /* Shift the error token.  */
        YY_SYMBOL_PRINT("Shifting", yystos[yytable[yyj]], &yylval, &yyerrloc);
        yyglrShift(yystackp, 0, yytable[yyj], yys->yyposn, &yylval);
        yys = yystackp->yytops.yystates[0];
        break;
      }
    }
    if (yys->yypred != YY_NULL)
      yydestroyGLRState("Error: popping", yys, result);
    yystackp->yytops.yystates[0] = yys->yypred;
    yystackp->yynextFree -= 1;
    yystackp->yyspaceLeft += 1;
  }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail(yystackp, result, YY_NULL);
}

#define YYCHK1(YYE)        \
  do {                     \
    switch (YYE) {         \
      case yyok:           \
        break;             \
      case yyabort:        \
        goto yyabortlab;   \
      case yyaccept:       \
        goto yyacceptlab;  \
      case yyerr:          \
        goto yyuser_error; \
      default:             \
        goto yybuglab;     \
    }                      \
  } while (YYID(0))

/*----------.
| yyparse.  |
`----------*/

int yyparse(struct ParseResult *result) {
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack *const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (!yyinitGLRStack(yystackp, YYINITDEPTH)) goto yyexhaustedlab;
  switch (YYSETJMP(yystack.yyexception_buffer)) {
    case 0:
      break;
    case 1:
      goto yyabortlab;
    case 2:
      goto yyexhaustedlab;
    default:
      goto yybuglab;
  }
  yyglrShift(&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (YYID(yytrue)) {
    /* For efficiency, we have two loops, the first of which is
       specialized to deterministic operation (single stack, no
       potential ambiguity).  */
    /* Standard mode */
    while (YYID(yytrue)) {
      yyRuleNum yyrule;
      int yyaction;
      const short int *yyconflicts;

      yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
      YYDPRINTF((stderr, "Entering state %d\n", yystate));
      if (yystate == YYFINAL) goto yyacceptlab;
      if (yyisDefaultedState(yystate)) {
        yyrule = yydefaultAction(yystate);
        if (yyrule == 0) {
          yyreportSyntaxError(&yystack, result);
          goto yyuser_error;
        }
        YYCHK1(yyglrReduce(&yystack, 0, yyrule, yytrue, result));
      } else {
        yySymbol yytoken;
        if (yychar == YYEMPTY) {
          YYDPRINTF((stderr, "Reading a token: "));
          yychar = YYLEX;
        }

        if (yychar <= YYEOF) {
          yychar = yytoken = YYEOF;
          YYDPRINTF((stderr, "Now at end of input.\n"));
        } else {
          yytoken = YYTRANSLATE(yychar);
          YY_SYMBOL_PRINT("Next token is", yytoken, &yylval, &yylloc);
        }

        yygetLRActions(yystate, yytoken, &yyaction, &yyconflicts);
        if (*yyconflicts != 0) break;
        if (yyisShiftAction(yyaction)) {
          YY_SYMBOL_PRINT("Shifting", yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
          yyposn += 1;
          yyglrShift(&yystack, 0, yyaction, yyposn, &yylval);
          if (0 < yystack.yyerrState) yystack.yyerrState -= 1;
        } else if (yyisErrorAction(yyaction)) {
          yyreportSyntaxError(&yystack, result);
          goto yyuser_error;
        } else
          YYCHK1(yyglrReduce(&yystack, 0, -yyaction, yytrue, result));
      }
    }

    while (YYID(yytrue)) {
      yySymbol yytoken_to_shift;
      size_t yys;

      for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
        yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

      /* yyprocessOneStack returns one of three things:

          - An error flag.  If the caller is yyprocessOneStack, it
            immediately returns as well.  When the caller is finally
            yyparse, it jumps to an error label via YYCHK1.

          - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
            (&yystack, yys), which sets the top state of yys to NULL.  Thus,
            yyparse's following invocation of yyremoveDeletes will remove
            the stack.

          - yyok, when ready to shift a token.

         Except in the first case, yyparse will invoke yyremoveDeletes and
         then shift the next token onto all remaining stacks.  This
         synchronization of the shift (that is, after all preceding
         reductions on all stacks) helps prevent double destructor calls
         on yylval in the event of memory exhaustion.  */

      for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
        YYCHK1(yyprocessOneStack(&yystack, yys, yyposn, result));
      yyremoveDeletes(&yystack);
      if (yystack.yytops.yysize == 0) {
        yyundeleteLastStack(&yystack);
        if (yystack.yytops.yysize == 0)
          yyFail(&yystack, result, YY_("syntax error"));
        YYCHK1(yyresolveStack(&yystack, result));
        YYDPRINTF((stderr, "Returning to deterministic operation.\n"));

        yyreportSyntaxError(&yystack, result);
        goto yyuser_error;
      }

      /* If any yyglrShift call fails, it will fail after shifting.  Thus,
         a copy of yylval will already be on stack 0 in the event of a
         failure in the following loop.  Thus, yychar is set to YYEMPTY
         before the loop to make sure the user destructor for yylval isn't
         called twice.  */
      yytoken_to_shift = YYTRANSLATE(yychar);
      yychar = YYEMPTY;
      yyposn += 1;
      for (yys = 0; yys < yystack.yytops.yysize; yys += 1) {
        int yyaction;
        const short int *yyconflicts;
        yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
        yygetLRActions(yystate, yytoken_to_shift, &yyaction, &yyconflicts);
        /* Note that yyconflicts were handled by yyprocessOneStack.  */
        YYDPRINTF((stderr, "On stack %lu, ", (unsigned long int)yys));
        YY_SYMBOL_PRINT("shifting", yytoken_to_shift, &yylval, &yylloc);
        yyglrShift(&yystack, yys, yyaction, yyposn, &yylval);
        YYDPRINTF((stderr, "Stack %lu now in state #%d\n",
                   (unsigned long int)yys,
                   yystack.yytops.yystates[yys]->yylrState));
      }

      if (yystack.yytops.yysize == 1) {
        YYCHK1(yyresolveStack(&yystack, result));
        YYDPRINTF((stderr, "Returning to deterministic operation.\n"));
        yycompressStack(&yystack);
        break;
      }
    }
    continue;
  yyuser_error:
    yyrecoverSyntaxError(&yystack, result);
    yyposn = yystack.yytops.yystates[0]->yyposn;
  }

yyacceptlab:
  yyresult = 0;
  goto yyreturn;

yybuglab:
  YYASSERT(yyfalse);
  goto yyabortlab;

yyabortlab:
  yyresult = 1;
  goto yyreturn;

yyexhaustedlab:
  yyerror(result, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

yyreturn:
  if (yychar != YYEMPTY)
    yydestruct("Cleanup: discarding lookahead", YYTRANSLATE(yychar), &yylval,
               result);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems) {
    yyGLRState **yystates = yystack.yytops.yystates;
    if (yystates) {
      size_t yysize = yystack.yytops.yysize;
      size_t yyk;
      for (yyk = 0; yyk < yysize; yyk += 1)
        if (yystates[yyk]) {
          while (yystates[yyk]) {
            yyGLRState *yys = yystates[yyk];
            if (yys->yypred != YY_NULL)
              yydestroyGLRState("Cleanup: popping", yys, result);
            yystates[yyk] = yys->yypred;
            yystack.yynextFree -= 1;
            yystack.yyspaceLeft += 1;
          }
          break;
        }
    }
    yyfreeGLRStack(&yystack);
  }

  /* Make sure YYID is used.  */
  return YYID(yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack(yyGLRStack *yystackp, size_t yyk)
    __attribute__((__unused__));
static void yypdumpstack(yyGLRStack *yystackp) __attribute__((__unused__));

static void yy_yypstack(yyGLRState *yys) {
  if (yys->yypred) {
    yy_yypstack(yys->yypred);
    YYFPRINTF(stderr, " -> ");
  }
  YYFPRINTF(stderr, "%d@%lu", yys->yylrState, (unsigned long int)yys->yyposn);
}

static void yypstates(yyGLRState *yyst) {
  if (yyst == YY_NULL)
    YYFPRINTF(stderr, "<null>");
  else
    yy_yypstack(yyst);
  YYFPRINTF(stderr, "\n");
}

static void yypstack(yyGLRStack *yystackp, size_t yyk) {
  yypstates(yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX) \
  ((YYX) == YY_NULL ? -1 : (yyGLRStackItem *)(YYX) - yystackp->yyitems)

static void yypdumpstack(yyGLRStack *yystackp) {
  yyGLRStackItem *yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1) {
    YYFPRINTF(stderr, "%3lu. ", (unsigned long int)(yyp - yystackp->yyitems));
    if (*(yybool *)yyp) {
      YYFPRINTF(stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                yyp->yystate.yyresolved, yyp->yystate.yylrState,
                (unsigned long int)yyp->yystate.yyposn,
                (long int)YYINDEX(yyp->yystate.yypred));
      if (!yyp->yystate.yyresolved)
        YYFPRINTF(stderr, ", firstVal: %ld",
                  (long int)YYINDEX(yyp->yystate.yysemantics.yyfirstVal));
    } else {
      YYFPRINTF(stderr, "Option. rule: %d, state: %ld, next: %ld",
                yyp->yyoption.yyrule - 1,
                (long int)YYINDEX(yyp->yyoption.yystate),
                (long int)YYINDEX(yyp->yyoption.yynext));
    }
    YYFPRINTF(stderr, "\n");
  }
  YYFPRINTF(stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF(stderr, "%lu: %ld; ", (unsigned long int)yyi,
              (long int)YYINDEX(yystackp->yytops.yystates[yyi]));
  YYFPRINTF(stderr, "\n");
}
#endif
/* Line 2575 of glr.c  */
#line 1877 "sql.ypp"

void emit(char *s, ...) {
  /* extern int yylineno;

   va_list ap;
   va_start(ap, s);

   printf("rpn: ");
   vfprintf(stdout, s, ap);
   printf("\n");*/
}

void yyerror(struct ParseResult *pp, const char *s, ...) {
  /*  va_list ap;
    va_start(ap, s);

    fprintf(stderr, "%d: error: ", yyget_lineno(pp->yyscan_info_));
    vfprintf(stderr, s, ap);
    fprintf(stderr, "\n");*/
  fprintf(stderr, "%s\n", s);
}

/*
int readInputForLexer( char *buffer, int *numBytesRead, int maxBytesToRead ) {
        int numBytesToRead = maxBytesToRead;
        int bytesRemaining = strlen(globalInputText)-globalReadOffset;
        int i;
        if ( numBytesToRead > bytesRemaining ) { numBytesToRead =
bytesRemaining; }
        for ( i = 0; i < numBytesToRead; i++ ) {
                buffer[i] = globalInputText[globalReadOffset+i];
        }
        *numBytesRead = numBytesToRead;
        globalReadOffset += numBytesToRead;
        return 0;
}


main(int ac, char **av)
{
        char c;
        while(1)
        {
                int charnum=0;
                memset(globalInputText, 0, sizeof(globalInputText));
                //cout<<"globalInputText: "<<globalInputText;
                globalReadOffset = 0;
                while(1)
                {
                        c=getchar();
                        globalInputText[charnum++]=c;
                        if(c==';')
                        {
                                globalInputText[charnum++]='\0';
                                break;
                        }
                }
//		strcpy(globalInputText, "select a from b; sd; select a from
b;");	// 2014-3-4---测试用---byYU
                cout<<"globalInputText: "<<globalInputText<<endl;
                if(!yyparse())
                        printf("SQL parse worked\n");
                else
                        printf("SQL parse failed\n");
                puts("input a number! 0 quit, 1 continue");
                c = getchar();
                while( c == '\n')
                        c= getchar();
                if (c == '0')
                        break;
                else
                        cout<<c<<endl;
                getchar();
        }
}
*/
