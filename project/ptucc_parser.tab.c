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
#line 1 "ptucc_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "cgen.h"
extern int yylex(void);
extern int line_num;




#line 80 "ptucc_parser.tab.c" /* yacc.c:339  */

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
   by #include "ptucc_parser.tab.h".  */
#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
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
    IDENT = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    CAST = 262,
    BOOL = 263,
    DEF_TYPE = 264,
    KW_DIV = 265,
    KW_AND = 266,
    KW_MOD = 267,
    KW_NOT = 268,
    KW_PROGRAM = 269,
    KW_BEGIN = 270,
    KW_END = 271,
    KW_FUNCTION = 272,
    KW_PROCEDURE = 273,
    KW_RESULT = 274,
    KW_ARRAY = 275,
    KW_DO = 276,
    KW_GOTO = 277,
    KW_RETURN = 278,
    KW_BOOLEAN = 279,
    KW_OF = 280,
    KW_REAL = 281,
    KW_CHAR = 282,
    KW_FOR = 283,
    KW_INTEGER = 284,
    KW_OR = 285,
    KW_REPEAT = 286,
    KW_UNTIL = 287,
    KW_VAR = 288,
    KW_WHILE = 289,
    KW_TO = 290,
    KW_DOWNTO = 291,
    KW_TYPE = 292,
    KW_IF = 293,
    KW_THEN = 294,
    KW_ELSE = 295,
    SY_DASH = 296,
    SY_PLUS = 297,
    SY_STAR = 298,
    SY_SLASH = 299,
    SY_EQUALS = 300,
    SY_LESS = 301,
    SY_GREATER = 302,
    SY_LESS_EQUALS = 303,
    SY_GREATER_EQUALS = 304,
    SY_LESS_BIGGER = 305,
    SY_AND = 306,
    SY_OR = 307,
    SY_ASSIGN = 308,
    SY_NOT = 309,
    SY_COMMA = 310,
    SY_LEFT_SQR_BRACKET = 311,
    SY_RIGHT_SQR_BRACKET = 312,
    SY_COLON = 313,
    SY_SEMICOLON = 314,
    SY_PERIOD = 315,
    SY_LEFT_BRACKET = 316,
    SY_RIGHT_BRACKET = 317
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;
      char* func_data[2]; // [return type , arguments]

#line 188 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "ptucc_parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   835

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  278

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   109,   109,   125,   126,   127,   132,   133,   134,   135,
     138,   139,   142,   143,   145,   151,   152,   153,   154,   155,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   194,   195,   199,   200,
     204,   206,   209,   211,   214,   215,   216,   217,   221,   222,
     227,   228,   229,   230,   234,   235,   236,   237,   238,   246,
     247,   248,   251,   252,   253,   254,   255,   260,   261,   268,
     269,   272,   273,   278,   279,   280,   281,   282,   284,   286,
     287,   288,   293,   294,   297,   298,   299,   300,   303,   304,
     305,   306,   310,   311,   315,   316,   317,   318,   321,   322,
     323,   324,   335,   336,   340,   341,   342,   345,   346,   347,
     348,   355,   356,   359,   363,   366,   367,   368,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   384,   385,   387,
     391,   392,   393,   394,   398,   399,   401,   402,   403,   404,
     405,   406,   407,   411,   412,   413
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "REAL", "STRING",
  "CAST", "BOOL", "DEF_TYPE", "KW_DIV", "KW_AND", "KW_MOD", "KW_NOT",
  "KW_PROGRAM", "KW_BEGIN", "KW_END", "KW_FUNCTION", "KW_PROCEDURE",
  "KW_RESULT", "KW_ARRAY", "KW_DO", "KW_GOTO", "KW_RETURN", "KW_BOOLEAN",
  "KW_OF", "KW_REAL", "KW_CHAR", "KW_FOR", "KW_INTEGER", "KW_OR",
  "KW_REPEAT", "KW_UNTIL", "KW_VAR", "KW_WHILE", "KW_TO", "KW_DOWNTO",
  "KW_TYPE", "KW_IF", "KW_THEN", "KW_ELSE", "SY_DASH", "SY_PLUS",
  "SY_STAR", "SY_SLASH", "SY_EQUALS", "SY_LESS", "SY_GREATER",
  "SY_LESS_EQUALS", "SY_GREATER_EQUALS", "SY_LESS_BIGGER", "SY_AND",
  "SY_OR", "SY_ASSIGN", "SY_NOT", "SY_COMMA", "SY_LEFT_SQR_BRACKET",
  "SY_RIGHT_SQR_BRACKET", "SY_COLON", "SY_SEMICOLON", "SY_PERIOD",
  "SY_LEFT_BRACKET", "SY_RIGHT_BRACKET", "$accept", "program",
  "program_decl", "arguments", "arglist", "unary_exp", "binary_exp",
  "expression", "type_def", "type_list", "shortcut_data_type",
  "advanced_data_type", "adv_func_data_type", "matrix_n",
  "simple_data_type", "var_decl", "var_decl_list", "var_list",
  "subprogram", "subprogram_list", "procedure_header", "function_header",
  "args_decl", "args_decl_list", "args_decl_excl", "args_decl_excl_list",
  "return_type", "procedure_body", "function_body", "all_commands",
  "complex_cmd", "func_complex_cmd", "cmd_list", "simple_cmd",
  "return_cmd", "proc_call", "while_cmd", "for_cmd", "if_cmd", YY_NULLPTR
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
     315,   316,   317
};
# endif

#define YYPACT_NINF -186

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-186)))

#define YYTABLE_NINF -138

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,    51,   103,    55,   -15,  -186,    22,  -186,    65,   -18,
    -186,  -186,    47,    65,  -186,    95,  -186,   165,  -186,  -186,
      34,    58,    12,  -186,  -186,    11,    82,  -186,  -186,  -186,
    -186,    35,    49,  -186,  -186,    95,   112,   721,  -186,   289,
     139,   168,  -186,  -186,  -186,    20,  -186,   671,  -186,   216,
     135,    70,  -186,  -186,  -186,    94,  -186,  -186,  -186,    -8,
      75,   126,   194,   142,   127,    83,   -13,  -186,  -186,  -186,
    -186,  -186,  -186,    15,  -186,    16,  -186,  -186,  -186,  -186,
     100,    85,   116,  -186,   102,   122,   216,   186,   721,   127,
     326,   127,   127,  -186,  -186,    56,  -186,   151,  -186,  -186,
     143,  -186,  -186,  -186,  -186,  -186,   127,   127,   278,  -186,
    -186,   446,  -186,  -186,   491,  -186,   289,  -186,   671,  -186,
     671,   721,   164,   671,  -186,  -186,  -186,   166,  -186,  -186,
     660,  -186,   162,     8,   660,   660,   127,   127,   511,   127,
     127,   730,   146,   393,   175,   127,   127,   127,  -186,   326,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,  -186,  -186,   326,  -186,  -186,  -186,   105,
       7,   182,     9,  -186,  -186,   373,  -186,  -186,  -186,   129,
    -186,  -186,  -186,   127,   537,   379,   127,   660,     3,  -186,
     127,   674,   466,   716,  -186,   730,   743,   754,   764,   773,
     781,   359,   179,   203,   225,   163,   -21,   146,   206,   721,
    -186,   164,   671,  -186,    40,  -186,   721,   660,   127,   226,
     127,   127,   556,  -186,   326,  -186,  -186,   189,  -186,  -186,
     138,  -186,   -18,  -186,  -186,   601,   326,   325,   615,   326,
    -186,   -18,   721,  -186,  -186,   326,  -186,  -186,   326,  -186,
     326,  -186,  -186,  -186,  -186,  -186,   104,  -186,  -186,  -186,
     133,  -186,    41,  -186,   289,   192,    42,  -186,  -186,    -5,
    -186,  -186,  -186,   287,     4,   245,  -186,  -186
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,    46,     8,     0,     1,     0,    69,
       7,     6,     0,    47,    48,     0,    81,     0,    49,    77,
       0,     0,     0,    52,    68,     0,     0,    66,    67,    65,
      64,     0,     0,    54,    71,    70,     0,    76,     4,   125,
       0,     0,    82,    79,    80,     0,    59,   102,    57,     0,
       0,     0,    53,    50,    51,     0,    78,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,   126,   136,   132,
     131,   130,    91,     0,    87,     0,     3,     2,   108,   109,
       0,     0,   103,    55,    63,     0,     0,     0,     0,     0,
       0,    10,     0,   134,   152,     0,   143,     0,   121,   122,
      40,    36,    37,    38,    39,    41,     0,     0,     0,    43,
      44,     0,    45,   155,     0,   123,     0,    90,    92,    86,
      92,     0,   112,     0,    62,    60,    56,     0,    74,    75,
     128,   133,     0,     0,    12,   129,   151,     0,     0,     0,
      10,    15,    16,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,   142,     0,   127,   100,   101,     0,
       0,    93,     0,   104,   105,     0,    58,   110,   111,     0,
      61,   139,    14,     0,     0,     0,     0,   141,     0,    42,
       0,    34,    33,    35,   140,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   153,     0,
      89,   112,     0,    85,     0,   113,     0,    13,     0,     0,
       0,     0,     0,    19,     0,    94,    95,     0,    98,    99,
       0,    84,    69,   106,   107,     0,     0,     0,     0,     0,
     154,    69,     0,    81,    83,     0,   148,   147,     0,   146,
       0,   149,    81,    88,    96,    97,     0,   150,   144,   145,
       0,   116,     0,   119,   125,     0,     0,   115,   114,     0,
     118,   120,   117,     0,     0,     0,   138,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,   140,  -186,  -186,   113,  -186,  -186,
     249,    -3,     2,  -186,   -12,  -185,  -186,    -9,  -186,  -140,
    -186,  -186,   169,  -186,  -186,  -186,    74,  -186,  -186,   -83,
     -22,  -186,    24,   -37,  -186,   -38,  -186,  -186,  -186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   132,   133,   109,   110,   134,     9,    13,
      14,   167,   168,    51,    33,    16,    20,   169,    42,    22,
      43,    44,   170,   171,    81,    82,   176,   244,   253,    97,
      98,   266,    66,    99,   275,   112,    69,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    68,    67,   115,   182,   276,    21,   131,   210,   182,
     213,   115,    46,    38,    31,    15,   117,   119,     1,    32,
    -137,    76,     8,    10,  -135,    68,    55,    39,   164,    40,
      41,     2,   162,   163,    57,    34,    52,    83,    80,    58,
    -135,   231,   267,   271,    78,    89,   116,   243,  -135,    79,
      90,    -5,    68,    91,   273,     7,   252,   136,   183,   100,
     101,   102,   103,   183,   104,   -11,   194,  -135,    12,   211,
     -11,   214,    47,    68,   126,   105,   118,   120,    68,   166,
      77,    11,   208,    48,   113,   128,   100,   101,   102,   103,
     129,   104,    17,    35,    53,    86,   144,   106,    19,   232,
     268,   272,   105,   256,     5,   261,     6,    49,    54,   137,
     107,    68,   260,    36,   179,    56,    37,   108,   173,    39,
     177,    40,    41,   174,   106,   178,    87,    68,    92,    93,
     100,   101,   102,   103,   263,   104,    84,   107,    50,    85,
      72,   240,    73,    96,   108,    59,   105,   122,   264,    36,
      40,    41,    88,   246,   249,    36,   251,    39,   121,   124,
      36,    60,   257,   209,    61,   258,    23,   259,   106,    74,
      62,    75,   215,    63,    24,   123,    64,   111,   114,   125,
      65,   107,    25,   139,    36,    26,    68,   216,   108,    27,
     127,    28,    29,    36,    30,    94,   242,    95,    68,    68,
     163,    68,   130,   230,   140,   135,   225,    68,   138,   228,
      68,   226,    68,   233,   229,   161,   162,   163,   234,   141,
     142,   143,   175,   180,   181,    24,    68,    67,   158,   159,
     160,   161,   162,   163,   262,    68,   166,   190,   265,   254,
      27,   212,    28,    29,   255,    30,   224,   236,   241,   184,
     185,   270,   187,   159,   160,   161,   162,   163,   191,   192,
     193,   277,    18,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   160,   161,   162,   163,
     188,   100,   101,   102,   103,   227,   104,    24,   269,   172,
      59,     0,    59,     0,     0,     0,   217,   105,     0,   222,
       0,     0,    27,   223,    28,    29,    60,    30,    60,    61,
     274,    61,     0,     0,     0,    62,     0,    62,    63,   106,
      63,    64,     0,    64,     0,    65,   247,    65,    59,    59,
       0,   235,   107,   237,   238,   145,   146,   147,   148,   108,
      39,    39,     0,     0,    60,    60,   248,    61,    61,     0,
       0,     0,     0,    62,    62,     0,    63,    63,     0,    64,
      64,     0,     0,    65,    65,     0,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     219,     0,    24,     0,     0,     0,     0,     0,     0,   145,
     146,   147,   148,    26,     0,     0,     0,    27,     0,    28,
      29,     0,    30,   145,   146,   147,   148,   157,   158,   159,
     160,   161,   162,   163,   220,   221,     0,     0,     0,     0,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,     0,    59,
       0,     0,     0,     0,     0,   189,   145,   146,   147,   148,
       0,    39,     0,     0,     0,    60,     0,   149,    61,     0,
       0,     0,     0,     0,    62,     0,     0,    63,   147,   148,
      64,     0,     0,     0,    65,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   145,   146,   147,   148,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   145,   146,   147,   148,     0,     0,     0,     0,     0,
     165,     0,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   186,   145,   146,   147,
     148,     0,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   145,   146,   147,   148,
       0,     0,   218,     0,     0,     0,     0,   239,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,     0,     0,     0,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,   250,     0,     0,     0,
       0,     0,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     145,   146,   147,   148,    19,     0,     0,     0,     0,     0,
      24,     0,     0,     0,     0,   146,   147,   148,    25,     0,
       0,    26,     0,     0,     0,    27,     0,    28,    29,     0,
      30,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   148,
      24,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,    26,     0,     0,     0,    27,     0,    28,    29,     0,
      30,     0,     0,     0,     0,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   156,   157,
     158,   159,   160,   161,   162,   163
};

static const yytype_int16 yycheck[] =
{
      22,    39,    39,    16,     1,     1,    15,    90,     1,     1,
       1,    16,     1,     1,    17,    33,     1,     1,     1,    17,
      16,     1,    37,     1,    16,    63,    35,    15,   111,    17,
      18,    14,    53,    54,    37,     1,     1,    49,    47,    37,
      32,     1,     1,     1,    47,    53,    59,   232,    40,    47,
      58,     0,    90,    61,    59,     0,   241,     1,    55,     3,
       4,     5,     6,    55,     8,    62,   149,    59,     3,    62,
      62,    62,    61,   111,    86,    19,    61,    61,   116,   116,
      60,    59,   165,     1,     1,    88,     3,     4,     5,     6,
      88,     8,    45,    59,    59,    25,   108,    41,     3,    59,
      59,    59,    19,   243,     1,     1,     3,    25,    59,    53,
      54,   149,   252,    55,   123,     3,    58,    61,   121,    15,
     123,    17,    18,   121,    41,   123,    56,   165,    53,     3,
       3,     4,     5,     6,     1,     8,     1,    54,    56,     4,
       1,   224,     3,     1,    61,     3,    19,    62,    15,    55,
      17,    18,    58,   236,   237,    55,   239,    15,    58,    57,
      55,    19,   245,    58,    22,   248,     1,   250,    41,     1,
      28,     3,   175,    31,     9,    59,    34,    64,    65,    57,
      38,    54,    17,    32,    55,    20,   224,    58,    61,    24,
       4,    26,    27,    55,    29,     1,    58,     3,   236,   237,
      54,   239,    89,   212,    61,    92,   209,   245,    95,   212,
     248,   209,   250,   216,   212,    52,    53,    54,   216,   106,
     107,   108,    58,    57,    62,     9,   264,   264,    49,    50,
      51,    52,    53,    54,   256,   273,   273,    62,   260,   242,
      24,    59,    26,    27,   242,    29,    40,    21,    59,   136,
     137,    59,   139,    50,    51,    52,    53,    54,   145,   146,
     147,    16,    13,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    51,    52,    53,    54,
     140,     3,     4,     5,     6,   211,     8,     9,   264,   120,
       3,    -1,     3,    -1,    -1,    -1,   183,    19,    -1,   186,
      -1,    -1,    24,   190,    26,    27,    19,    29,    19,    22,
      23,    22,    -1,    -1,    -1,    28,    -1,    28,    31,    41,
      31,    34,    -1,    34,    -1,    38,     1,    38,     3,     3,
      -1,   218,    54,   220,   221,    10,    11,    12,    13,    61,
      15,    15,    -1,    -1,    19,    19,    21,    22,    22,    -1,
      -1,    -1,    -1,    28,    28,    -1,    31,    31,    -1,    34,
      34,    -1,    -1,    38,    38,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    20,    -1,    -1,    -1,    24,    -1,    26,
      27,    -1,    29,    10,    11,    12,    13,    48,    49,    50,
      51,    52,    53,    54,    35,    36,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,     3,
      -1,    -1,    -1,    -1,    -1,    62,    10,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    31,    12,    13,
      34,    -1,    -1,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    10,    11,    12,    13,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    35,    10,    11,    12,
      13,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    10,    11,    12,    13,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    21,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      10,    11,    12,    13,     3,    -1,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    11,    12,    13,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,    -1,
      29,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    13,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    47,    48,
      49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    14,    64,    65,     1,     3,     0,    37,    71,
       1,    59,     3,    72,    73,    33,    78,    45,    73,     3,
      79,    80,    82,     1,     9,    17,    20,    24,    26,    27,
      29,    74,    75,    77,     1,    59,    55,    58,     1,    15,
      17,    18,    81,    83,    84,    93,     1,    61,     1,    25,
      56,    76,     1,    59,    59,    80,     3,    74,    75,     3,
      19,    22,    28,    31,    34,    38,    95,    96,    98,    99,
     100,   101,     1,     3,     1,     3,     1,    60,    74,    75,
      80,    87,    88,    77,     1,     4,    25,    56,    58,    53,
      58,    61,    53,     3,     1,     3,     1,    92,    93,    96,
       3,     4,     5,     6,     8,    19,    41,    54,    61,    68,
      69,    70,    98,     1,    70,    16,    59,     1,    61,     1,
      61,    58,    62,    59,    57,    57,    77,     4,    74,    75,
      70,    92,    66,    67,    70,    70,     1,    53,    70,    32,
      61,    70,    70,    70,    77,    10,    11,    12,    13,    21,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    92,    39,    96,    74,    75,    80,
      85,    86,    85,    74,    75,    58,    89,    74,    75,    80,
      57,    62,     1,    55,    70,    70,    35,    70,    67,    62,
      62,    70,    70,    70,    92,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    92,    58,
       1,    62,    59,     1,    62,    74,    58,    70,    35,     1,
      35,    36,    70,    70,    40,    74,    75,    89,    74,    75,
      80,     1,    59,    74,    75,    70,    21,    70,    70,    21,
      92,    59,    58,    78,    90,    21,    92,     1,    21,    92,
      21,    92,    78,    91,    74,    75,    82,    92,    92,    92,
      82,     1,    93,     1,    15,    93,    94,     1,    59,    95,
      59,     1,    59,    59,    23,    97,     1,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      66,    66,    67,    67,    67,    68,    68,    68,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      73,    73,    73,    73,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    83,    83,    83,    83,    84,    84,
      84,    84,    85,    85,    86,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    90,    90,    90,    91,    91,    91,
      91,    92,    92,    93,    94,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    97,    97,    98,
      99,    99,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     6,     5,     1,     3,     3,     2,     1,
       0,     1,     1,     3,     2,     2,     2,     2,     2,     4,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     0,     2,     1,     2,
       4,     4,     3,     4,     1,     3,     4,     2,     5,     2,
       3,     4,     3,     2,     1,     1,     1,     1,     1,     0,
       3,     3,     3,     3,     5,     5,     2,     1,     3,     1,
       1,     0,     2,     7,     6,     5,     3,     2,     8,     5,
       3,     2,     0,     1,     3,     3,     5,     5,     3,     3,
       1,     1,     0,     1,     3,     3,     5,     5,     1,     1,
       3,     3,     0,     2,     4,     4,     3,     4,     4,     3,
       4,     1,     1,     3,     5,     0,     1,     3,     3,     3,
       1,     1,     1,     3,     2,     3,     1,     1,     2,     4,
       4,     4,     3,     2,     8,     8,     7,     7,     7,     7,
       8,     3,     2,     4,     6,     2
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
#line 109 "ptucc_parser.y" /* yacc.c:1646  */
    { 
                               																/* We have a successful parse! 
                               																	Check for any errors and generate output. 
                               																*/
                               																if(yyerror_count==0) {
                               																	puts(c_prologue);
                               																	printf("/* program  %s */ \n\n", (yyvsp[-5].crepr));
                               																	printf("%s\n",(yyvsp[-4].crepr));
                               																	printf("%s\n",(yyvsp[-3].crepr));
                               																	printf("%s\n",(yyvsp[-2].crepr));
                               																	printf("int main(){%s} \n", (yyvsp[-1].crepr));
                               																}
                               																else{
                               																	printf("%d Errors Detected. Exiting\n",yyerror_count);
                               																}
                               															}
#line 1614 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 125 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Period Expected\n");YYABORT;}
#line 1620 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 126 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Complex Command Expected\n");YYABORT; }
#line 1626 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 127 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Program Declaration Expected\n");YYABORT;}
#line 1632 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 132 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1638 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 133 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Semicolon missing\n");}
#line 1644 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Identifier missing\n");}
#line 1650 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 135 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Keyword program missing\n");}
#line 1656 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1662 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 139 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1668 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 142 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1674 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1680 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"arguments incorrect\n"); }
#line 1686 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1692 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1698 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
#line 1704 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
#line 1710 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1716 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s-%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1722 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s+%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1728 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1734 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1740 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s==%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1746 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1752 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1758 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1764 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<>%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1770 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1776 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 169 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1782 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 170 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s||%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1788 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1794 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 172 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1800 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 173 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1806 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1812 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 180 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1818 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result";}
#line 1824 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 184 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr);}
#line 1830 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1836 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr); }
#line 1842 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1848 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); 
																   		        										set_def(strdup((yyvsp[-3].crepr)));}
#line 1855 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 206 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s(*%s)(%s);\n",(yyvsp[-1].func_data)[0],(yyvsp[-3].crepr),(yyvsp[-1].func_data)[1]);
			  		 																  									set_def(strdup((yyvsp[-3].crepr)));}
#line 1862 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 209 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"data type expected\n");}
#line 1868 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"semicolon expected\n"); }
#line 1874 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1880 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*",(yyvsp[0].crepr));}
#line 1886 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s",(yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1892 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"Error using array data type\n"); }
#line 1898 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.func_data)[0] = (yyvsp[0].crepr); (yyval.func_data)[1] = (yyvsp[-2].crepr);}
#line 1904 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"error using function data type\n"); }
#line 1910 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]",(yyvsp[-1].crepr)) ;}
#line 1916 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 1922 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"Positive integer expected\n");}
#line 1928 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 230 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"error declaring array\n");}
#line 1934 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 234 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";    }
#line 1940 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; 	 }
#line 1946 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";   }
#line 1952 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1958 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1964 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1970 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror("var decl semicolon expected\n");}
#line 1976 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n",(yyvsp[0].crepr) ,(yyvsp[-2].crepr));}
#line 1982 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n",func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ";"));}
#line 1988 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s;\n",(yyvsp[-4].crepr), (yyvsp[0].crepr) ,(yyvsp[-2].crepr));}
#line 1994 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n",(yyvsp[-4].crepr), func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ";") );}
#line 2000 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror("data type expected\n");}
#line 2006 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 260 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 2012 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2018 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 268 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 2024 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 2030 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 272 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 2036 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 273 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 2042 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s){%s}\n",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 2048 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 279 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"semicolon expected at the end of procedure declaration\n");}
#line 2054 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 280 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"')' expected at procedure declaration\n");}
#line 2060 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 281 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"'(argumetns);' expected at procedure declaration\n");}
#line 2066 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"procedure declaration incomplete\n");}
#line 2072 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 284 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s){\n %s result; %s\n }\n",(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2078 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 286 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"')' expected at funciton declaration\n");}
#line 2084 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 287 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"'(argumetns);' expected at funciton declaration\n");}
#line 2090 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 288 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"funciton declaration incomplete\n");}
#line 2096 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 293 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 2102 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 294 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2108 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread((yyvsp[-2].crepr),(yyvsp[0].crepr),","));}
#line 2114 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2120 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 299 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), vars_spread((yyvsp[-2].crepr),(yyvsp[0].crepr), ","));}
#line 2126 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 300 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2132 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 303 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 2138 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 304 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 2144 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 305 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 2150 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 306 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 2156 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 310 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 2162 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 311 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2168 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 315 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread("",(yyvsp[0].crepr),","));}
#line 2174 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 316 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread("",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2180 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 317 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), vars_spread("",(yyvsp[0].crepr), ","));}
#line 2186 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 318 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), func_spread("$3",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2192 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 321 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread("",(yyvsp[0].crepr),","));}
#line 2198 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 322 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread("",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2204 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 323 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), vars_spread("",(yyvsp[0].crepr), ","));}
#line 2210 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 324 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), func_spread("$3",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2216 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 335 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"return type expected\n");}
#line 2222 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 336 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr);}
#line 2228 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 340 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s%s%s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 2234 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 341 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"semicolon expected at end of procedure body\n");}
#line 2240 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 342 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Complex command expected\n");}
#line 2246 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 345 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s%s%s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 2252 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 346 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"return expected\n");}
#line 2258 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 347 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Complex command expected\n");}
#line 2264 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 348 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"semicolon expected at end of function body\n");}
#line 2270 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 359 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s\n",(yyvsp[-1].crepr)) ;}
#line 2276 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 363 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s\n%s",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 2282 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 366 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 2288 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 368 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)) ;}
#line 2294 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 373 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s=%s;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2300 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 374 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("result=%s;",(yyvsp[0].crepr));}
#line 2306 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 375 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2312 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 376 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2318 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 377 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;",(yyvsp[0].crepr));}
#line 2324 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 378 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s: %s;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2330 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 379 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s;",(yyvsp[0].crepr));}
#line 2336 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 380 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)\n;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2342 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 381 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[0].crepr)); }
#line 2348 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 384 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return result;");}
#line 2354 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 385 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"error after return\n"); }
#line 2360 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 387 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2366 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 391 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("while(%s){%s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2372 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 392 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("do{%s}\nwhile(%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2378 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 393 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Keyword 'do' expected\n");}
#line 2384 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 394 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"error at repeat command\n");}
#line 2390 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 398 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s<%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2396 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 399 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s>%s; %s--){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2402 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 401 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Keyword 'DO' expected\n");}
#line 2408 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 402 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" error at for loop\n");}
#line 2414 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 403 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Keyword 'TO' or 'DOWNTO' expected\n");}
#line 2420 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 404 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Assign missing\n");}
#line 2426 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 405 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Assignment error\n");}
#line 2432 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 406 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"error at for loop\n");}
#line 2438 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 407 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"error at for loop\n");}
#line 2444 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 411 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2450 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 412 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\nelse{\n%s}",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2456 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 413 "ptucc_parser.y" /* yacc.c:1646  */
    {yyerror(SE"error at if statement\n");}
#line 2462 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2466 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 417 "ptucc_parser.y" /* yacc.c:1906  */



