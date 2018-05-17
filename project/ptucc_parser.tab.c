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

#line 77 "ptucc_parser.tab.c" /* yacc.c:339  */

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
    KW_PROGRAM = 265,
    KW_BEGIN = 266,
    KW_END = 267,
    KW_AND = 268,
    KW_DIV = 269,
    KW_FUNCTION = 270,
    KW_MOD = 271,
    KW_PROCEDURE = 272,
    KW_RESULT = 273,
    KW_ARRAY = 274,
    KW_DO = 275,
    KW_GOTO = 276,
    KW_NOT = 277,
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
#line 13 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 184 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "ptucc_parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

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
       0,   103,   103,   124,   128,   129,   131,   132,   137,   138,
     139,   140,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   161,   162,
     163,   165,   166,   167,   168,   169,   170,   176,   177,   180,
     181,   183,   188,   189,   190,   191,   193,   194,   197,   198,
     199,   200,   201,   208,   209,   211,   212,   213,   214,   216,
     217,   218,   221,   228,   229,   231,   232,   236,   240,   243,
     244,   246,   247,   250,   251,   254,   257,   263,   264,   266,
     269,   270,   271,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   286,   288,   289,   291,   292,   295,   296
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "REAL", "STRING",
  "CAST", "BOOL", "DEF_TYPE", "KW_PROGRAM", "KW_BEGIN", "KW_END", "KW_AND",
  "KW_DIV", "KW_FUNCTION", "KW_MOD", "KW_PROCEDURE", "KW_RESULT",
  "KW_ARRAY", "KW_DO", "KW_GOTO", "KW_NOT", "KW_RETURN", "KW_BOOLEAN",
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
  "advanced_data_type", "matrix_n", "simple_data_type", "var_decl",
  "var_decl_list", "var_decl1", "var_decl2", "var_decl3", "subprogram",
  "subprogram_list", "procedure_header", "function_header", "args_decl",
  "args_decl_list", "return_type", "procedure_body", "function_body",
  "all_commands", "complex_cmd", "cmd_list", "simple_cmd", "proc_call",
  "while_cmd", "for_cmd", "if_cmd", YY_NULLPTR
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

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,    38,    59,    23,     3,  -171,    63,    64,  -171,    60,
      63,  -171,   105,  -171,   196,  -171,  -171,   105,    49,    39,
    -171,    51,   -14,  -171,  -171,  -171,  -171,    58,  -171,    49,
     115,   102,    87,   391,   119,   121,  -171,  -171,  -171,    65,
     128,    87,   122,    -8,  -171,    87,  -171,    -7,    73,  -171,
     -24,    81,   135,  -171,   138,   112,    88,    88,     2,  -171,
    -171,  -171,  -171,  -171,    83,    84,  -171,    89,    86,    92,
    -171,   126,    87,   156,  -171,  -171,    -5,  -171,    88,   112,
      88,    88,  -171,   125,   152,  -171,  -171,   141,  -171,  -171,
    -171,  -171,    88,    88,     4,  -171,  -171,   187,  -171,   203,
    -171,   391,   128,   128,   196,   146,   205,  -171,  -171,   149,
    -171,   301,  -171,   147,   -30,   301,   301,    88,    88,    88,
     330,   158,   123,   148,    88,    88,    88,   112,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,  -171,   112,  -171,   151,   159,  -171,   196,  -171,   160,
    -171,  -171,    88,   145,   301,   169,  -171,    88,   315,   354,
     330,  -171,   330,   388,   274,   287,   339,   396,   403,   217,
     103,    48,    36,   -18,   158,   174,   146,   167,  -171,   196,
     301,    88,    88,  -171,   112,   168,    64,  -171,   245,   259,
    -171,    64,  -171,  -171,   112,   112,  -171,  -171,    39,  -171,
    -171,    39,   184,   201,  -171,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    37,     0,     1,     0,    53,     3,     0,
      38,    39,     0,    65,     0,    40,    57,    54,     0,     0,
      52,     0,     0,    50,    51,    49,    48,     0,    42,     0,
       0,    59,     0,    80,     0,     0,    66,    63,    64,     0,
      69,     0,     0,     0,    41,     0,    58,     0,     0,    55,
       0,     0,     0,    90,     0,     0,     0,     0,     0,    81,
      92,    87,    86,    85,     0,     0,     2,     0,     0,    70,
      43,     0,     0,     0,    56,    61,     0,    62,     0,     0,
       4,     0,    89,     0,     0,    77,    78,    31,    28,    29,
      30,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      79,     0,    69,    69,     0,    73,     0,    46,    44,     0,
      60,    83,    88,     0,    91,     6,    84,     0,     0,     4,
       8,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,    82,     0,     0,    71,     0,    45,     0,
      47,    93,     0,     0,    95,     5,    33,     0,    23,    26,
      27,    94,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    24,    25,    98,    73,     0,    74,     0,
       7,     0,     0,    11,     0,     0,    53,    72,     0,     0,
      99,    53,    65,    67,     0,     0,    65,    68,     0,    96,
      97,     0,     0,     0,    75,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,  -171,   143,  -171,  -171,   -54,  -171,  -171,
     253,   -92,   227,   -26,  -170,  -171,   247,   248,   231,  -171,
    -139,  -171,  -171,   -59,  -171,   104,  -171,  -171,   -75,   -19,
    -171,   -28,   -32,  -171,  -171,  -171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   113,   114,    95,    96,   115,     7,    10,
      11,    27,    43,    28,    13,    17,    18,    32,    49,    36,
      19,    37,    38,    68,    69,   148,   193,   197,    84,    85,
      58,    86,    98,    61,    62,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    60,    97,    99,   112,    59,    48,    87,    88,    89,
      90,    41,   146,    20,   100,    70,   192,    72,    75,    48,
     110,   196,    91,    60,   111,   152,     1,   116,    23,    78,
      24,    25,    -5,    26,    79,   140,   141,    80,   120,   121,
     122,     4,    42,   144,   145,    92,   108,    60,    73,    42,
      33,    73,   161,   198,    34,   178,    35,   201,    93,     5,
       6,   101,     8,   153,   154,    94,     9,   175,   123,    60,
     158,   159,   160,   143,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   187,   139,   140,
     141,    87,    88,    89,    90,    60,    20,    12,   180,   138,
     139,   140,   141,   183,    30,    14,    91,    31,    16,   190,
      60,    23,    40,    24,    25,    50,    26,    44,    46,   199,
     200,    47,    64,    33,    65,    66,    71,   188,   189,    92,
      51,    67,    77,    52,    81,    53,   124,   125,    82,   126,
      54,    83,    93,    55,   102,   103,    56,   104,   105,    94,
      57,   106,    60,   137,   138,   139,   140,   141,   124,   125,
     109,   126,    60,    60,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   117,   202,
     181,   182,   203,   107,   118,   156,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     124,   125,   119,   126,   147,    20,   150,   127,   149,   151,
     157,    21,   141,   176,   184,    22,   124,   125,   179,   126,
      23,   177,    24,    25,   152,    26,   186,   191,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   204,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   124,   125,
     205,   126,   155,    15,    29,   194,   136,   137,   138,   139,
     140,   141,   124,   125,    76,   126,    74,    45,     0,   195,
     185,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   124,   125,     0,   126,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   125,
       0,   126,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     126,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   133,   134,   135,   136,   137,
     138,   139,   140,   141,    50,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,    51,
       0,     0,    52,     0,    53,     0,     0,     0,     0,    54,
       0,     0,    55,     0,     0,    56,     0,     0,     0,    57,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   134,   135,   136,   137,   138,   139,   140,
     141,   135,   136,   137,   138,   139,   140,   141
};

static const yytype_int16 yycheck[] =
{
      19,    33,    56,    57,    79,    33,    32,     3,     4,     5,
       6,    25,   104,     9,    12,    41,   186,    25,    25,    45,
      25,   191,    18,    55,    78,    55,    10,    81,    24,    53,
      26,    27,    62,    29,    58,    53,    54,    61,    92,    93,
      94,     3,    56,   102,   103,    41,    72,    79,    56,    56,
      11,    56,   127,   192,    15,   147,    17,   196,    54,     0,
      37,    59,    59,   117,   118,    61,     3,   142,    94,   101,
     124,   125,   126,   101,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   179,    52,    53,
      54,     3,     4,     5,     6,   127,     9,    33,   152,    51,
      52,    53,    54,   157,    55,    45,    18,    58,     3,   184,
     142,    24,    61,    26,    27,     3,    29,    59,     3,   194,
     195,    19,     3,    11,     3,    60,     4,   181,   182,    41,
      18,     3,    59,    21,    53,    23,    13,    14,     3,    16,
      28,     3,    54,    31,    61,    61,    34,    58,    62,    61,
      38,    59,   184,    50,    51,    52,    53,    54,    13,    14,
       4,    16,   194,   195,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    53,   198,
      35,    36,   201,    57,    32,    62,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      13,    14,    61,    16,    58,     9,    57,    20,     3,    62,
      62,    15,    54,    62,    40,    19,    13,    14,    58,    16,
      24,    62,    26,    27,    55,    29,    59,    59,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    39,    59,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    13,    14,
      59,    16,   119,    10,    17,    20,    49,    50,    51,    52,
      53,    54,    13,    14,    47,    16,    45,    29,    -1,    20,
     176,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    13,    14,    -1,    16,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    14,
      -1,    16,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      16,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     3,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    18,
      -1,    -1,    21,    -1,    23,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    47,    48,    49,    50,    51,    52,    53,
      54,    48,    49,    50,    51,    52,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    64,    65,     3,     0,    37,    71,    59,     3,
      72,    73,    33,    77,    45,    73,     3,    78,    79,    83,
       9,    15,    19,    24,    26,    27,    29,    74,    76,    79,
      55,    58,    80,    11,    15,    17,    82,    84,    85,    92,
      61,    25,    56,    75,    59,    80,     3,    19,    76,    81,
       3,    18,    21,    23,    28,    31,    34,    38,    93,    94,
      95,    96,    97,    98,     3,     3,    60,     3,    86,    87,
      76,     4,    25,    56,    81,    25,    75,    59,    53,    58,
      61,    53,     3,     3,    91,    92,    94,     3,     4,     5,
       6,    18,    41,    54,    61,    68,    69,    70,    95,    70,
      12,    59,    61,    61,    58,    62,    59,    57,    76,     4,
      25,    70,    91,    66,    67,    70,    70,    53,    32,    61,
      70,    70,    70,    76,    13,    14,    16,    20,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    39,    94,    86,    86,    74,    58,    88,     3,
      57,    62,    55,    70,    70,    67,    62,    62,    70,    70,
      70,    91,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    91,    62,    62,    74,    58,
      70,    35,    36,    70,    40,    88,    59,    74,    70,    70,
      91,    59,    77,    89,    20,    20,    77,    90,    83,    91,
      91,    83,    92,    92,    59,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    71,    71,    72,
      72,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    81,    82,    82,    83,    83,    84,    85,    86,
      86,    87,    87,    88,    88,    89,    90,    91,    91,    92,
      93,    93,    93,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    96,    96,    97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     0,     1,     1,     3,     2,     2,
       2,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     0,     2,     1,
       2,     4,     1,     3,     4,     5,     3,     4,     1,     1,
       1,     1,     1,     0,     2,     3,     4,     1,     3,     1,
       4,     3,     2,     1,     1,     0,     2,     7,     8,     0,
       1,     3,     5,     0,     2,     4,     4,     1,     1,     3,
       0,     1,     3,     3,     3,     1,     1,     1,     3,     2,
       1,     3,     1,     4,     4,     4,     8,     8,     4,     6
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
#line 105 "ptucc_parser.y" /* yacc.c:1646  */
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
#line 1495 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 124 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1501 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 128 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1507 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 129 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1513 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 131 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1519 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 132 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1525 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 137 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1531 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1537 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
#line 1543 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1549 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s-%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1555 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 144 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s+%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1561 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1567 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1573 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 147 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s=%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1579 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1585 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1591 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1597 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<>%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1603 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1609 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1615 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1621 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s||%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1627 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1633 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1639 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1645 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1651 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result";}
#line 1657 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr);}
#line 1663 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1669 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr); }
#line 1675 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 180 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1681 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); 
																	   set_def(strdup((yyvsp[-3].crepr))); //SAVE SOMEWHERE THE FEFINED DATA TYPES
																 	 }
#line 1689 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1695 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*",(yyvsp[0].crepr));}
#line 1701 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s",(yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1707 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 191 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(*)(%s)",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1713 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 193 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]",(yyvsp[-1].crepr)) ;}
#line 1719 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 1725 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";    }
#line 1731 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; 	 }
#line 1737 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "bool";   }
#line 1743 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1749 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 208 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1755 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 209 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1761 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n",(yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1767 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s %s%s;\n",(yyvsp[-3].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1773 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1779 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1785 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "";}
#line 1791 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1797 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("*");}
#line 1803 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1809 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1815 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1821 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)="";}
#line 1827 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1833 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s)%s",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1839 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 240 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s)%s",(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1845 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 243 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1851 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1857 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s", (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1863 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s %s",(yyvsp[-4].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1869 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=""; yyerror("return type expected");}
#line 1875 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=(yyvsp[0].crepr);}
#line 1881 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1887 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1893 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 266 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s;\n",(yyvsp[-1].crepr)) ;}
#line 1899 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 269 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1905 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 271 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)) ;}
#line 1911 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 274 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s=%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1917 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 275 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("result=%s",(yyvsp[0].crepr));}
#line 1923 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 276 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1929 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 277 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1935 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1941 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 279 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s: %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1947 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 280 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s",(yyvsp[0].crepr));}
#line 1953 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 281 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return");}
#line 1959 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1965 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 283 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1971 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 286 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1977 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 288 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("while(%s){%s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1983 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 289 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("do{%s}\nwhile(%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1989 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 291 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 1995 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 292 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2001 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 295 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2007 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 296 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\nelse{\n%s}",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2013 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2017 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 301 "ptucc_parser.y" /* yacc.c:1906  */

/*
int main()                                                                                                              {
	yyparse();
}
*/

