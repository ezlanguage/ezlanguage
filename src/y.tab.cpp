/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "EZ_language_compiler.ypp" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <list>

#include "../src/global.h"	 // we start from ../obj because it's important
#include "../src/main.cpp"	 // we start from ../obj because it's important
//#include "global.h"

#define YYERROR_VERBOSE
#define USE(VALUE) /*empty*/

extern FILE* yyin;
using namespace std;

 int yyparse (void);
 extern "C" int yylex();
 extern "C" void yyerror(const std::string&);
extern int yylineno;


#line 90 "y.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.hpp".  */
#ifndef YY_YY_Y_TAB_HPP_INCLUDED
# define YY_YY_Y_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM_INTEGER = 258,
    NUM_REAL = 259,
    NAME = 260,
    RETOUR = 261,
    STRING = 262,
    COMMA = 263,
    DEGRE = 264,
    POURCENT = 265,
    DIESE = 266,
    POINT = 267,
    QUOTE = 268,
    TYPE_INTEGER = 269,
    TYPE_REAL = 270,
    TYPE_STRING = 271,
    TYPE_BOOLEAN = 272,
    EGAL = 273,
    NE = 274,
    LT = 275,
    LE = 276,
    GT = 277,
    GE = 278,
    PLUS = 279,
    MINUS = 280,
    MULT = 281,
    DIVISE = 282,
    LEFT_PARENTHESIS = 283,
    RIGHT_PARENTHESIS = 284,
    LEFT_ACCOLADE = 285,
    RIGHT_ACCOLADE = 286,
    LEFT_BRACKET = 287,
    RIGHT_BRACKET = 288,
    FIN = 289,
    BACK_LINE = 290,
    CONST = 291,
    LOCAL = 292,
    GLOBAL = 293,
    IS = 294,
    ARE = 295,
    IF = 296,
    DO = 297,
    ELSE = 298,
    ENDIF = 299,
    WHEN = 300,
    CASE = 301,
    ENDCASE = 302,
    DEFAULT = 303,
    ENDWHEN = 304,
    WHILE = 305,
    ENDWHILE = 306,
    REPEAT = 307,
    UNTIL = 308,
    ENDREPEAT = 309,
    FOR = 310,
    IN = 311,
    STEP = 312,
    ENDFOR = 313,
    FUNCTION = 314,
    PROCEDURE = 315,
    RETURN = 316,
    ENDFUNCTION = 317,
    ENDPROCEDURE = 318,
    PRINT = 319,
    END_OF_FILE = 320
  };
#endif

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 202 "y.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   320

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    55,    56,    60,    63,    64,    65,    68,
      70,    71,    75,    79,    83,    84,    87,    89,    90,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   106,   109,
     110,   113,   114,   117,   120,   121,   122,   125,   126,   130,
     131,   132,   133,   137,   138,   142,   143,   147,   151,   154,
     155,   156,   157,   158,   159,   160,   164,   165,   166,   170,
     171,   172,   176,   177,   178,   179,   180,   181,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM_INTEGER", "NUM_REAL", "NAME",
  "RETOUR", "STRING", "COMMA", "DEGRE", "POURCENT", "DIESE", "POINT",
  "QUOTE", "TYPE_INTEGER", "TYPE_REAL", "TYPE_STRING", "TYPE_BOOLEAN",
  "EGAL", "NE", "LT", "LE", "GT", "GE", "PLUS", "MINUS", "MULT", "DIVISE",
  "LEFT_PARENTHESIS", "RIGHT_PARENTHESIS", "LEFT_ACCOLADE",
  "RIGHT_ACCOLADE", "LEFT_BRACKET", "RIGHT_BRACKET", "FIN", "BACK_LINE",
  "CONST", "LOCAL", "GLOBAL", "IS", "ARE", "IF", "DO", "ELSE", "ENDIF",
  "WHEN", "CASE", "ENDCASE", "DEFAULT", "ENDWHEN", "WHILE", "ENDWHILE",
  "REPEAT", "UNTIL", "ENDREPEAT", "FOR", "IN", "STEP", "ENDFOR",
  "FUNCTION", "PROCEDURE", "RETURN", "ENDFUNCTION", "ENDPROCEDURE",
  "PRINT", "END_OF_FILE", "$accept", "ROOT", "next_line",
  "declarations_list", "declaration_methods", "declaration_variables",
  "function", "procedure", "statement_sequence", "liste_argument",
  "statement", "affectation", "printing", "for", "function_call",
  "nbrOrName", "portee", "type", "noms", "whenbody", "whendefault",
  "string", "expression", "expr2", "expr3", "expr4", "designator", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
    -101,    11,    12,   -20,  -101,    12,     1,  -101,  -101,    12,
      10,  -101,    19,    30,    44,    30,     1,    75,    74,   -20,
      18,    12,  -101,  -101,  -101,   -28,     2,    30,  -101,  -101,
    -101,    30,    30,    30,    42,    48,    13,  -101,  -101,    46,
      45,    33,    32,  -101,    81,  -101,     1,    85,    86,  -101,
    -101,    87,     6,    53,  -101,  -101,  -101,    65,     1,    77,
      30,    30,    30,    30,    30,    30,    30,    30,    30,    51,
       1,    30,    96,  -101,  -101,    76,    78,    81,  -101,  -101,
    -101,  -101,    12,     6,  -101,    20,    30,    54,    54,    54,
      54,    54,    13,    13,  -101,  -101,    30,   -39,    56,    55,
      90,   100,   100,  -101,  -101,    12,     1,  -101,    54,     1,
      30,     1,    59,  -101,  -101,    98,    72,    83,    84,  -101,
      73,    68,     1,    69,  -101,     9,     6,    57,    12,  -101,
    -101,    79,  -101,    62,   108,    64,   114,     6,     1,  -101,
      71,   119,    71,   100,    12,    66,  -101,  -101,  -101,    12,
      97,    12,  -101,     1,  -101,    89,    99,    91,    80,     1,
    -101,     1,    30,    82,    92,    12,  -101,  -101,    70,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       9,     0,     0,     6,     1,     3,     9,    37,    38,     0,
       0,     4,     0,     0,     0,     0,     9,     0,     0,    19,
       0,    14,    20,    21,    27,     0,     0,     0,    66,    65,
      68,     0,     0,     0,     0,    49,    56,    59,    67,     0,
       0,     0,     0,    48,    29,     2,     9,     0,     0,     7,
       8,     0,     0,     0,    28,    62,    63,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,    30,    15,     0,     0,    44,    39,    40,
      41,    42,     0,     0,    64,     0,     0,    51,    52,    53,
      54,    55,    57,    58,    60,    61,     0,     0,     0,     0,
       0,    16,    16,    43,    10,     0,     9,    23,    50,     9,
       0,     9,     0,    25,    26,     0,     0,     0,     0,    11,
       0,     0,     9,     0,    24,     0,     0,     0,     0,    22,
      46,     0,    47,     0,     0,     0,    17,     0,     9,    45,
       0,     0,     0,    16,     0,     0,    34,    35,    36,     0,
       0,     0,    18,     9,    13,     0,     0,     0,     0,     9,
      33,     9,     0,     0,     0,     0,    31,    32,     0,    12
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -101,  -101,    -5,  -101,  -101,   127,  -101,  -101,    -8,  -100,
    -101,  -101,  -101,  -101,  -101,    -6,  -101,   -78,   -41,  -101,
    -101,  -101,   -14,   -34,   -21,    -7,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     6,     2,     9,    19,    49,    50,    20,   117,
      21,    22,    23,    24,   135,   149,    10,    82,    53,    97,
     112,    44,    34,    35,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      11,    40,   118,    73,    25,   105,    12,   110,    41,   111,
      51,     4,   133,    54,   134,    26,    46,     7,     8,    57,
      78,    79,    80,    81,    55,    56,    87,    88,    89,    90,
      91,    47,    48,    28,    29,    30,   103,    27,    74,    67,
      68,    52,    13,   152,    92,    93,    14,     5,   136,    39,
      85,    15,   108,    16,    31,    32,    17,    99,    33,   144,
      94,    95,    98,   106,   107,    18,    59,    60,    61,    62,
      63,    64,    65,    66,   146,   147,   148,   104,    65,    66,
      42,    43,   109,    45,    58,    69,    71,    70,    72,    51,
      75,    76,    77,    83,    84,    86,   122,    96,   120,   100,
     119,   121,   115,   123,   101,   116,   102,   113,   124,   114,
     125,   126,   127,   128,   131,   130,   132,   129,   137,   140,
     141,   142,   143,   138,   150,   156,   139,     3,   160,   154,
     145,   159,   169,   161,     0,     0,   151,     0,     0,   153,
     166,   162,     0,     0,   155,   158,   157,     0,   165,     0,
     167,   163,     0,   164,     0,     0,     0,     0,     0,     0,
     168
};

static const yytype_int16 yycheck[] =
{
       5,    15,   102,    44,     9,    83,     5,    46,    16,    48,
       8,     0,     3,    27,     5,     5,    21,    37,    38,    33,
      14,    15,    16,    17,    31,    32,    60,    61,    62,    63,
      64,    59,    60,     3,     4,     5,    77,    18,    46,    26,
      27,    39,    41,   143,    65,    66,    45,    35,   126,     5,
      58,    50,    86,    52,    24,    25,    55,    71,    28,   137,
      67,    68,    70,    43,    44,    64,    18,    19,    20,    21,
      22,    23,    24,    25,     3,     4,     5,    82,    24,    25,
       5,     7,    96,    65,    42,    39,    53,    42,    56,     8,
       5,     5,     5,    40,    29,    18,   110,    46,   106,     3,
     105,   109,    12,   111,    28,     5,    28,    51,    49,    54,
      12,    39,    29,    29,   122,    47,    47,    44,    61,    57,
      12,    57,     8,   128,     5,    28,    47,     0,    29,    63,
     138,    42,    62,    42,    -1,    -1,   142,    -1,    -1,   144,
      58,    61,    -1,    -1,   149,   153,   151,    -1,   162,    -1,
      58,   159,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,
     165
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    67,    69,    71,     0,    35,    68,    37,    38,    70,
      82,    68,     5,    41,    45,    50,    52,    55,    64,    71,
      74,    76,    77,    78,    79,    68,     5,    18,     3,     4,
       5,    24,    25,    28,    88,    89,    90,    91,    92,     5,
      88,    74,     5,     7,    87,    65,    68,    59,    60,    72,
      73,     8,    39,    84,    88,    91,    91,    88,    42,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    39,
      42,    53,    56,    84,    74,     5,     5,     5,    14,    15,
      16,    17,    83,    40,    29,    74,    18,    89,    89,    89,
      89,    89,    90,    90,    91,    91,    46,    85,    74,    88,
       3,    28,    28,    84,    68,    83,    43,    44,    89,    88,
      46,    48,    86,    51,    54,    12,     5,    75,    75,    68,
      74,    74,    88,    74,    49,    12,    39,    29,    29,    44,
      47,    74,    47,     3,     5,    80,    83,    61,    68,    47,
      57,    12,    57,     8,    83,    74,     3,     4,     5,    81,
       5,    81,    75,    68,    63,    68,    28,    68,    74,    42,
      29,    42,    61,    74,    74,    88,    58,    58,    68,    62
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    66,    67,    68,    68,    69,    70,    70,    70,    71,
      71,    71,    72,    73,    74,    74,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    78,
      78,    79,    79,    80,    81,    81,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    87,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    89,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    92
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     1,     2,     2,     0,     3,     3,     0,
       6,     7,    13,     8,     1,     3,     0,     3,     5,     1,
       1,     1,     7,     5,     6,     5,     5,     1,     3,     2,
       3,    13,    13,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     5,     4,     3,     1,     1,
       4,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     2,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 51 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1396 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 55 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1402 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1408 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1414 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { cout << "Declaration de la variable " << (yyvsp[-3].texte) << endl; }
#line 1420 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { cout << "Declaration des variables "<< (yyvsp[-4].texte) << endl; }
#line 1426 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf( "declaration d'une fonction \n");}
#line 1432 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf( "declaration d'une procedure  \n");}
#line 1438 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 83 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { /*printf("  statement \n");*/ }
#line 1444 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1450 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 89 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1456 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 90 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1462 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 94 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1468 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 95 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1474 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 96 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1480 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 97 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("SI_SINON_ALORS \n"); }
#line 1486 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("SI   ALORS \n"); }
#line 1492 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 99 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  printf("when .. case .. \n"); }
#line 1498 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 100 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("WHILE .. DO .. \n"); }
#line 1504 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 101 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("REPEAT .. UNTIL .. \n"); }
#line 1510 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 102 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1516 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { cout << "affectation "+(yyvsp[-2].texte) + " = " << (yyvsp[0].reel_value) << endl;}
#line 1522 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 109 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {cout <<"affichage : " << (yyvsp[0].texte) << endl; }
#line 1528 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 110 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("affichage \n"); }
#line 1534 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 113 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("FOR .. IN ... \n");}
#line 1540 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 114 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { printf("FOR .. IN ... \n");}
#line 1546 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 117 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1552 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1558 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1564 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 125 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1570 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 126 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1576 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 130 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1582 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 131 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1588 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 132 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1594 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 133 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1600 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 137 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1606 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 138 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1612 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1618 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1624 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 147 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {}
#line 1630 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { (yyval.texte)= (yyvsp[0].texte);}
#line 1636 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 154 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { (yyval.reel_value) = (yyvsp[0].reel_value) ;}
#line 1642 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  }
#line 1648 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 156 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1654 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  }
#line 1660 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 158 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1666 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 159 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1672 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 160 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1678 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 164 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { (yyval.reel_value) = (yyvsp[0].reel_value) ;}
#line 1684 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {(yyval.reel_value) = (yyvsp[-2].reel_value) + (yyvsp[0].reel_value); }
#line 1690 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1696 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { (yyval.reel_value) = (yyvsp[0].reel_value);}
#line 1702 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1708 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 172 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  }
#line 1714 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 176 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {    }
#line 1720 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 177 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1726 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 178 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  }
#line 1732 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 179 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    {  }
#line 1738 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 180 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1744 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 181 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1750 "y.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 185 "EZ_language_compiler.ypp" /* yacc.c:1646  */
    { }
#line 1756 "y.tab.cpp" /* yacc.c:1646  */
    break;


#line 1760 "y.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 188 "EZ_language_compiler.ypp" /* yacc.c:1906  */


void yyerror(const std::string& mess){
    std::cout << "Erreur trouvée a la ligne " << yylineno << " :  "<<mess  << std::endl;
}
