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
    KW_ELSE = 280,
    KW_IF = 281,
    KW_OF = 282,
    KW_REAL = 283,
    KW_THEN = 284,
    KW_CHAR = 285,
    KW_FOR = 286,
    KW_INTEGER = 287,
    KW_OR = 288,
    KW_REPEAT = 289,
    KW_UNTIL = 290,
    KW_VAR = 291,
    KW_WHILE = 292,
    KW_TO = 293,
    KW_DOWNTO = 294,
    KW_TYPE = 295,
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
<<<<<<< HEAD
#define YYLAST   343
=======
#define YYLAST   447
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  193
=======
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  205
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b

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
<<<<<<< HEAD
       0,   101,   101,   122,   126,   127,   129,   130,   135,   136,
     137,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   155,   156,   157,   159,   160,   161,
     162,   163,   164,   165,   174,   175,   178,   179,   181,   186,
     187,   188,   189,   191,   192,   195,   196,   197,   198,   199,
     212,   213,   215,   216,   217,   218,   220,   221,   222,   225,
     232,   233,   235,   236,   240,   244,   247,   248,   250,   251,
     254,   255,   258,   261,   267,   268,   270,   273,   274,   275,
     278,   279,   281,   282,   283,   284,   285,   286,   287,   290,
     292,   293,   295,   296
=======
       0,   144,   144,   165,   169,   170,   172,   173,   178,   179,
     180,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   214,   215,   218,
     219,   221,   226,   227,   228,   229,   231,   232,   235,   236,
     237,   238,   239,   250,   251,   253,   254,   255,   256,   258,
     259,   260,   263,   270,   271,   273,   274,   278,   282,   285,
     286,   288,   289,   292,   293,   296,   299,   305,   306,   308,
     311,   312,   313,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   328,   330,   331,   333,   334,   337,   345,
     346
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
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
  "KW_ELSE", "KW_IF", "KW_OF", "KW_REAL", "KW_THEN", "KW_CHAR", "KW_FOR",
  "KW_INTEGER", "KW_OR", "KW_REPEAT", "KW_UNTIL", "KW_VAR", "KW_WHILE",
  "KW_TO", "KW_DOWNTO", "KW_TYPE", "SY_DASH", "SY_PLUS", "SY_STAR",
  "SY_SLASH", "SY_EQUALS", "SY_LESS", "SY_GREATER", "SY_LESS_EQUALS",
  "SY_GREATER_EQUALS", "SY_LESS_BIGGER", "SY_AND", "SY_OR", "SY_ASSIGN",
  "SY_NOT", "SY_COMMA", "SY_LEFT_SQR_BRACKET", "SY_RIGHT_SQR_BRACKET",
  "SY_COLON", "SY_SEMICOLON", "SY_PERIOD", "SY_LEFT_BRACKET",
  "SY_RIGHT_BRACKET", "$accept", "program", "program_decl", "arguments",
  "arglist", "unary_exp", "binary_exp", "expression", "type_def",
  "type_list", "shortcut_data_type", "advanced_data_type", "matrix_n",
  "simple_data_type", "var_decl", "var_decl_list", "var_decl1",
  "var_decl2", "var_decl3", "subprogram", "subprogram_list",
  "procedure_header", "function_header", "args_decl", "args_decl_list",
  "return_type", "procedure_body", "function_body", "all_commands",
  "complex_cmd", "cmd_list", "simple_cmd", "proc_call", "while_cmd",
  "for_cmd", "if_cmd", "else_state", YY_NULLPTR
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

<<<<<<< HEAD
#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))
=======
#define YYPACT_NINF -169

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-169)))
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b

#define YYTABLE_NINF -6

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
       0,    18,    31,    -7,   -18,  -151,    54,    23,  -151,    20,
      54,  -151,    64,  -151,   128,  -151,  -151,    64,    46,    73,
    -151,    24,   -12,  -151,  -151,  -151,  -151,    28,  -151,    46,
     112,   122,   110,   102,   118,   143,  -151,  -151,  -151,    93,
     151,   110,   153,     2,  -151,   110,  -151,     7,   100,  -151,
     -45,   108,   159,  -151,   160,     9,     1,    -3,  -151,  -151,
    -151,  -151,   103,   106,  -151,   113,   141,   109,  -151,   161,
     110,   166,  -151,  -151,    27,  -151,     1,     9,     1,     1,
    -151,   167,   184,  -151,  -151,   261,  -151,  -151,  -151,  -151,
       1,     1,    94,  -151,  -151,   131,  -151,  -151,   102,   151,
     151,   128,   265,   321,  -151,  -151,   268,  -151,   216,  -151,
     264,   -44,   216,   216,     1,     1,     1,   216,   273,   194,
     266,     9,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,  -151,  -151,   269,   270,  -151,
     128,  -151,   271,  -151,  -151,     1,   163,   216,   275,  -151,
       1,  -151,   216,   229,   240,   250,   259,   267,   201,    78,
      -2,    41,    57,    60,   273,   265,   274,  -151,   128,   216,
       1,     1,  -151,   276,    23,  -151,   145,   180,    23,  -151,
    -151,     9,     9,  -151,  -151,    73,  -151,  -151,    73,   277,
     278,  -151,  -151
=======
       9,     4,    32,     2,     3,  -169,    50,    29,  -169,    24,
      50,  -169,    99,  -169,    95,  -169,  -169,    99,    -2,    53,
    -169,    47,   -18,  -169,  -169,  -169,  -169,    46,  -169,    -2,
     108,    94,    31,   404,   111,   112,  -169,  -169,  -169,    60,
     117,    31,   119,   -13,  -169,    31,  -169,    -6,    63,  -169,
     -24,    73,   124,  -169,     6,   125,   403,     6,    -7,  -169,
    -169,  -169,  -169,  -169,    69,    70,  -169,    90,    98,    97,
    -169,   121,    31,   152,  -169,  -169,    -5,  -169,     6,   403,
       6,     6,  -169,   120,  -169,  -169,  -169,  -169,  -169,     6,
       6,     6,  -169,  -169,   187,  -169,   127,   150,  -169,  -169,
     201,  -169,   404,   117,   117,    95,   144,   214,  -169,  -169,
     162,  -169,   299,  -169,   158,   -35,   299,   299,     6,   123,
     204,    93,     6,     6,     6,   403,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,  -169,
       6,     6,   403,  -169,   198,   199,  -169,    95,  -169,   206,
    -169,  -169,     6,   207,  -169,   313,   352,   123,   240,   123,
     327,   272,   159,   284,   335,   394,   173,   100,    44,    -8,
      39,   204,   145,   299,  -169,   144,   208,  -169,    95,   299,
     403,  -169,     6,     6,   209,    29,  -169,  -169,   243,   257,
      29,  -169,  -169,   403,   403,  -169,  -169,    53,  -169,  -169,
      53,   210,   213,  -169,  -169
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       0,     0,     0,    34,     0,     1,     0,    50,     3,     0,
      35,    36,     0,    62,     0,    37,    54,    51,     0,     0,
      49,     0,     0,    47,    48,    46,    45,     0,    39,     0,
       0,    56,     0,    77,     0,     0,    63,    60,    61,     0,
      66,     0,     0,     0,    38,     0,    55,     0,     0,    52,
       0,     0,     0,    86,     0,     0,     0,     0,    78,    88,
      83,    82,     0,     0,     2,     0,     0,    67,    40,     0,
       0,     0,    53,    58,     0,    59,     0,     0,     4,     0,
      85,     0,     0,    74,    75,    27,    24,    25,    26,    28,
       0,     0,     0,    30,    31,     0,    32,    76,     0,    66,
      66,     0,    70,     0,    43,    41,     0,    57,    80,    84,
       0,    87,     6,    81,     0,     0,     4,     8,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    79,     0,     0,    68,
       0,    42,     0,    44,    89,     0,     0,    91,     5,    29,
       0,    90,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    70,     0,    71,     0,     7,
       0,     0,    33,     0,    50,    69,     0,     0,    50,    62,
      64,     0,     0,    62,    65,     0,    92,    93,     0,     0,
       0,    72,    73
=======
       0,     0,     0,    37,     0,     1,     0,    53,     3,     0,
      38,    39,     0,    65,     0,    40,    57,    54,     0,     0,
      52,     0,     0,    50,    51,    49,    48,     0,    42,     0,
       0,    59,     0,    80,     0,     0,    66,    63,    64,     0,
      69,     0,     0,     0,    41,     0,    58,     0,     0,    55,
       0,     0,     0,    90,     0,     0,     0,     0,     0,    81,
      92,    87,    86,    85,     0,     0,     2,     0,     0,    70,
      43,     0,     0,     0,    56,    61,     0,    62,     0,     0,
       4,     0,    89,    31,    27,    28,    29,    30,    32,     0,
       0,     0,    34,    35,     0,    36,     0,     0,    77,    78,
       0,    79,     0,    69,    69,     0,    73,     0,    46,    44,
       0,    60,    83,    88,     0,    91,     6,    84,     4,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
       0,     0,     0,    82,     0,     0,    71,     0,    45,     0,
      47,    93,     0,     5,    33,    22,    26,    25,   100,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      23,    24,     0,    95,    94,    73,     0,    74,     0,     7,
       0,    98,     0,     0,     0,    53,    72,    99,     0,     0,
      53,    65,    67,     0,     0,    65,    68,     0,    96,    97,
       0,     0,     0,    75,    76
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD
    -151,  -151,  -151,  -151,   218,  -151,  -151,   -54,  -151,  -151,
     328,   -87,   292,    -6,  -150,  -151,   323,   312,   297,  -151,
     -77,  -151,  -151,    45,  -151,   178,  -151,  -151,   -74,   -19,
    -151,   -16,   -32,  -151,  -151
=======
    -169,  -169,  -169,  -169,   147,  -169,  -169,   -51,  -169,  -169,
     263,   -90,   227,   -16,  -168,  -169,   258,   248,   233,  -169,
    -160,  -169,  -169,    -4,  -169,   104,  -169,  -169,   -77,   -19,
    -169,   -28,   -32,  -169,  -169,  -169,  -169
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,   114,   115,    92,    93,   116,     7,    10,
      11,    27,    43,    28,    13,    17,    18,    32,    49,    36,
<<<<<<< HEAD
      19,    37,    38,    66,    67,   141,   180,   184,    82,    83,
      57,    84,    96,    60,    61
=======
      19,    37,    38,    68,    69,   148,   192,   196,    97,    98,
      58,    99,    95,    61,    62,    63,   181
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD
      39,    59,    95,   109,    85,    86,    87,    88,    76,    97,
       1,   145,    50,    77,   139,    41,    78,    58,    -5,    89,
      33,     4,   108,    59,   179,   113,    48,    51,   183,    70,
      52,     5,    53,     6,    73,    68,   117,   118,   119,    48,
      54,     8,    90,    55,    42,    59,    56,   151,   131,   132,
     133,   134,   135,   167,   107,    91,    98,     9,    71,    12,
     146,   147,    92,    42,   105,    14,    59,    16,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   175,   136,    71,    33,    40,   120,    44,    34,    59,
      35,   169,   132,   133,   134,   135,   172,    85,    86,    87,
      88,    30,   185,    20,    31,    50,   188,   186,   187,   133,
     134,   135,    89,   134,   135,    46,   176,   177,    23,    20,
      51,    62,    24,    52,    25,    53,    26,   130,   131,   132,
     133,   134,   135,    54,    23,    90,    55,    20,    24,    56,
      25,    47,    26,    21,   137,   138,    63,    22,    91,    59,
      59,   121,    23,    64,    65,    92,    24,    69,    25,    75,
      26,    79,    80,    81,    99,   181,   189,   100,   103,   190,
     106,   101,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     182,   170,   171,   102,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   104,   115,
     114,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   129,
     130,   131,   132,   133,   134,   135,   149,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   128,   129,   130,   131,   132,   133,
     134,   135,   116,   140,   142,   143,   144,   135,   150,   168,
     145,   165,   166,   174,   148,   178,   191,   192,    15,    74,
      29,    45,    72,   173
=======
      39,    60,   113,    94,   101,    59,   100,     4,    41,    83,
      84,    85,    86,    72,    87,   146,    48,   191,     1,   152,
      75,   111,   195,    88,    60,    70,    -5,   112,    78,    48,
     117,   197,     5,    79,    20,   200,    80,    42,   119,   120,
     121,     6,    73,   137,   138,   139,    89,    60,   158,    42,
      73,   102,    30,     9,    23,    31,   109,   177,    24,    90,
      25,     8,    26,    33,    12,   174,    91,    34,    14,    35,
      60,   155,   156,   157,   143,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   186,   172,
     173,   138,   139,    60,   136,   137,   138,   139,    20,   144,
     145,   179,    16,   187,    44,   122,   123,    40,   124,    21,
      60,    46,    47,    22,    64,    65,   198,   199,    23,    66,
      67,    77,    24,    71,    25,    81,    26,    82,    96,   103,
     104,   188,   189,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   105,    60,   135,
     136,   137,   138,   139,   154,   107,   110,   122,   123,   106,
     124,    60,    60,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   108,   201,   140,
     118,   202,   182,   183,   141,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   122,
     123,   147,   124,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   122,   123,   125,   124,   149,   150,   151,
     142,   134,   135,   136,   137,   138,   139,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   122,   123,   139,   124,   175,
     176,   152,   193,   178,   180,   153,   185,   190,   203,   122,
     123,   204,   124,    15,    76,    29,   194,    45,    74,   184,
       0,     0,     0,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   122,   123,     0,   124,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   123,     0,   124,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     0,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   124,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   132,   133,   134,   135,   136,   137,   138,   139,     0,
       0,     0,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,    50,    50,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
      51,    51,     0,    52,    52,    53,    53,     0,    54,    54,
       0,     0,     0,    55,    55,     0,    56,    56,     0,    57,
      57,   133,   134,   135,   136,   137,   138,   139
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD
      19,    33,    56,    77,     3,     4,     5,     6,    53,    12,
      10,    55,     3,    58,   101,    27,    61,    33,    62,    18,
      11,     3,    76,    55,   174,    79,    32,    18,   178,    27,
      21,     0,    23,    40,    27,    41,    90,    91,    92,    45,
      31,    59,    41,    34,    56,    77,    37,   121,    50,    51,
      52,    53,    54,   140,    27,    54,    59,     3,    56,    36,
     114,   115,    61,    56,    70,    45,    98,     3,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   168,    98,    56,    11,    61,    92,    59,    15,   121,
      17,   145,    51,    52,    53,    54,   150,     3,     4,     5,
       6,    55,   179,     9,    58,     3,   183,   181,   182,    52,
      53,    54,    18,    53,    54,     3,   170,   171,    24,     9,
      18,     3,    28,    21,    30,    23,    32,    49,    50,    51,
      52,    53,    54,    31,    24,    41,    34,     9,    28,    37,
      30,    19,    32,    15,    99,   100,     3,    19,    54,   181,
     182,    20,    24,    60,     3,    61,    28,     4,    30,    59,
      32,    53,     3,     3,    61,    20,   185,    61,    59,   188,
       4,    58,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      20,    38,    39,    62,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    57,    35,
      53,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    48,
      49,    50,    51,    52,    53,    54,    62,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    47,    48,    49,    50,    51,    52,
      53,    54,    61,    58,     3,    57,    62,    54,    62,    58,
      55,    62,    62,    59,   116,    59,    59,    59,    10,    47,
      17,    29,    45,   165
=======
      19,    33,    79,    54,    11,    33,    57,     3,    26,     3,
       4,     5,     6,    26,     8,   105,    32,   185,     9,    54,
      26,    26,   190,    17,    56,    41,    61,    78,    52,    45,
      81,   191,     0,    57,     3,   195,    60,    55,    89,    90,
      91,    39,    55,    51,    52,    53,    40,    79,   125,    55,
      55,    58,    54,     3,    23,    57,    72,   147,    27,    53,
      29,    58,    31,    10,    35,   142,    60,    14,    44,    16,
     102,   122,   123,   124,   102,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   178,   140,
     141,    52,    53,   125,    50,    51,    52,    53,     3,   103,
     104,   152,     3,   180,    58,    12,    13,    60,    15,    14,
     142,     3,    18,    18,     3,     3,   193,   194,    23,    59,
       3,    58,    27,     4,    29,    52,    31,     3,     3,    60,
      60,   182,   183,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    57,   180,    49,
      50,    51,    52,    53,    61,    58,     4,    12,    13,    61,
      15,   193,   194,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    56,   197,    52,
      60,   200,    37,    38,    34,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    12,
      13,    57,    15,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    12,    13,    28,    15,     3,    56,    61,
      19,    48,    49,    50,    51,    52,    53,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    12,    13,    53,    15,    61,
      61,    54,    19,    57,    24,   118,    58,    58,    58,    12,
      13,    58,    15,    10,    47,    17,    19,    29,    45,   175,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    12,    13,    -1,    15,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    13,    -1,    15,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    15,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     3,     3,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    17,    -1,    20,    20,    22,    22,    -1,    25,    25,
      -1,    -1,    -1,    30,    30,    -1,    33,    33,    -1,    36,
      36,    47,    48,    49,    50,    51,    52,    53
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    10,    64,    65,     3,     0,    40,    71,    59,     3,
      72,    73,    36,    77,    45,    73,     3,    78,    79,    83,
       9,    15,    19,    24,    28,    30,    32,    74,    76,    79,
      55,    58,    80,    11,    15,    17,    82,    84,    85,    92,
      61,    27,    56,    75,    59,    80,     3,    19,    76,    81,
       3,    18,    21,    23,    31,    34,    37,    93,    94,    95,
      96,    97,     3,     3,    60,     3,    86,    87,    76,     4,
      27,    56,    81,    27,    75,    59,    53,    58,    61,    53,
       3,     3,    91,    92,    94,     3,     4,     5,     6,    18,
      41,    54,    61,    68,    69,    70,    95,    12,    59,    61,
      61,    58,    62,    59,    57,    76,     4,    27,    70,    91,
      66,    67,    70,    70,    53,    35,    61,    70,    70,    70,
      76,    20,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    94,    86,    86,    74,
      58,    88,     3,    57,    62,    55,    70,    70,    67,    62,
      62,    91,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    62,    62,    74,    58,    70,
      38,    39,    70,    88,    59,    74,    70,    70,    59,    77,
      89,    20,    20,    77,    90,    83,    91,    91,    83,    92,
      92,    59,    59
=======
       0,     9,    63,    64,     3,     0,    39,    70,    58,     3,
      71,    72,    35,    76,    44,    72,     3,    77,    78,    82,
       3,    14,    18,    23,    27,    29,    31,    73,    75,    78,
      54,    57,    79,    10,    14,    16,    81,    83,    84,    91,
      60,    26,    55,    74,    58,    79,     3,    18,    75,    80,
       3,    17,    20,    22,    25,    30,    33,    36,    92,    93,
      94,    95,    96,    97,     3,     3,    59,     3,    85,    86,
      75,     4,    26,    55,    80,    26,    74,    58,    52,    57,
      60,    52,     3,     3,     4,     5,     6,     8,    17,    40,
      53,    60,    67,    68,    69,    94,     3,    90,    91,    93,
      69,    11,    58,    60,    60,    57,    61,    58,    56,    75,
       4,    26,    69,    90,    65,    66,    69,    69,    60,    69,
      69,    69,    12,    13,    15,    28,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      52,    34,    19,    93,    85,    85,    73,    57,    87,     3,
      56,    61,    54,    66,    61,    69,    69,    69,    90,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    90,    61,    61,    73,    57,    69,
      24,    98,    37,    38,    87,    58,    73,    90,    69,    69,
      58,    76,    88,    19,    19,    76,    89,    82,    90,    90,
      82,    91,    91,    58,    58
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    63,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    80,    81,
      82,    82,    83,    83,    84,    85,    86,    86,    87,    87,
      88,    88,    89,    90,    91,    91,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      96,    96,    97,    97
=======
       0,    62,    63,    64,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    79,    80,    81,    81,    82,    82,    83,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    90,    90,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    94,    95,    95,    96,    96,    97,    98,
      98
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     3,     0,     1,     1,     3,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
<<<<<<< HEAD
       3,     3,     3,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     4,     0,     2,     1,     2,     4,     1,
       3,     4,     5,     3,     4,     1,     1,     1,     1,     1,
       0,     2,     3,     4,     1,     3,     1,     4,     3,     2,
       1,     1,     0,     2,     7,     8,     0,     1,     3,     5,
       0,     2,     4,     4,     1,     1,     3,     0,     1,     3,
       3,     3,     1,     1,     3,     2,     1,     3,     1,     4,
       4,     4,     8,     8
=======
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     0,     2,     1,
       2,     4,     1,     3,     4,     5,     3,     4,     1,     1,
       1,     1,     1,     0,     2,     3,     4,     1,     3,     1,
       4,     3,     2,     1,     1,     0,     2,     7,     8,     0,
       1,     3,     5,     0,     2,     4,     4,     1,     1,     3,
       0,     1,     3,     3,     3,     1,     1,     1,     3,     2,
       1,     3,     1,     4,     4,     4,     8,     8,     5,     2,
       0
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
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
#line 103 "ptucc_parser.y" /* yacc.c:1646  */
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
<<<<<<< HEAD
#line 1470 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1539 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 3:
#line 122 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
<<<<<<< HEAD
#line 1476 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1545 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 4:
#line 126 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
<<<<<<< HEAD
#line 1482 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1551 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 5:
#line 127 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
<<<<<<< HEAD
#line 1488 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1557 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 6:
#line 129 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
<<<<<<< HEAD
#line 1494 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1563 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 7:
#line 130 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
<<<<<<< HEAD
#line 1500 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1569 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 8:
#line 135 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1506 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1575 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 9:
#line 136 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1512 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1581 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 10:
#line 137 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
<<<<<<< HEAD
#line 1518 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1587 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 11:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s-%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1524 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1593 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 12:
#line 141 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s+%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1530 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1599 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 13:
#line 142 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1536 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1605 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 14:
#line 143 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1542 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1611 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 15:
#line 144 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s=%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1548 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1617 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 16:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1554 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1623 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 17:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1560 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1629 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 18:
#line 147 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1566 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1635 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 19:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<>%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1572 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1641 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 20:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1578 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1647 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
    break;

  case 21:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
<<<<<<< HEAD
#line 1584 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s||%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1590 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1596 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1602 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result";}
#line 1608 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr);}
#line 1614 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("(%s)%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1620 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1626 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr); }
#line 1632 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1638 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); 
																	   set_def(strdup((yyvsp[-3].crepr))); //SAVE SOMEWHERE THE FEFINED DATA TYPES
																 	 }
#line 1646 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1652 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*",(yyvsp[0].crepr));}
#line 1658 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s",(yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1664 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(*)(%s)",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1670 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]",(yyvsp[-1].crepr)) ;}
#line 1676 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 1682 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";    }
#line 1688 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; 	 }
#line 1694 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "bool";   }
#line 1700 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1706 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1712 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1718 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n",(yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1724 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s %s%s;\n",(yyvsp[-3].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1730 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1736 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1742 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "";}
#line 1748 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1754 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("*");}
#line 1760 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1766 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1772 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1778 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)="";}
#line 1784 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1790 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 240 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s)%s",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1796 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s)%s",(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1802 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1808 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1814 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s", (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1820 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s %s",(yyvsp[-4].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1826 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=""; yyerror("return type expected");}
#line 1832 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=(yyvsp[0].crepr);}
#line 1838 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 258 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1844 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1850 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 270 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s;\n",(yyvsp[-1].crepr)) ;}
#line 1856 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 273 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1862 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 275 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)) ;}
#line 1868 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s=%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1874 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 279 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("result=%s",(yyvsp[0].crepr));}
#line 1880 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 281 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1886 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1892 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 283 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s: %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1898 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 284 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s",(yyvsp[0].crepr));}
#line 1904 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 285 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return");}
#line 1910 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 286 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1916 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 287 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1922 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 290 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1928 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 292 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("while(%s){%s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1934 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 293 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("do{%s}\nwhile(%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1940 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 295 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 1946 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 296 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 1952 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 1956 "ptucc_parser.tab.c" /* yacc.c:1646  */
=======
#line 1653 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 193 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1659 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s||%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1665 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1671 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1677 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%sdiv%s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1683 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 202 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1689 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result";}
#line 1695 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 206 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr);}
#line 1701 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1707 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr); }
#line 1713 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1719 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); //SAVE SOMEWHERE THE FEFINED DATA TYPES
																	  set_def(strdup((yyvsp[-3].crepr)));
																	}
#line 1727 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 226 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1733 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*",(yyvsp[0].crepr));}
#line 1739 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s",(yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1745 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(*)(%s)",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1751 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]",(yyvsp[-1].crepr)) ;}
#line 1757 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 1763 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";    }
#line 1769 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; 	 }
#line 1775 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "bool";   }
#line 1781 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1787 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { if(get_def((yyvsp[0].crepr))!=1){ //TODO CHECK THIS IDENTIFIER IF EXISTS IN TYPEDEF DEFINED DATA TYPES
													yyerror(template("Error: \"%s\" No Such Data Type Defined\n"),(yyvsp[0].crepr));
													yyerror_count++ ;
												}}
#line 1796 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1802 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr);}
#line 1808 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s%s;\n",(yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1814 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s %s%s;\n",(yyvsp[-3].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr) ,(yyvsp[-1].crepr));}
#line 1820 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1826 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 256 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1832 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 258 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "";}
#line 1838 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 259 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s",(yyvsp[-1].crepr));}
#line 1844 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 260 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("*");}
#line 1850 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 263 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1856 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 270 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1862 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 271 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1868 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 273 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)="";}
#line 1874 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 274 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s%s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1880 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s)%s",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1886 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s)%s",(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[0].crepr));}
#line 1892 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 285 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1898 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 286 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1904 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 288 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s", (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1910 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 289 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s %s",(yyvsp[-4].crepr), (yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1916 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 292 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=""; yyerror("return type expected");}
#line 1922 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 293 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=(yyvsp[0].crepr);}
#line 1928 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 296 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1934 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 299 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("{\n%s%s%s}\n",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1940 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 308 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s;\n",(yyvsp[-1].crepr)) ;}
#line 1946 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 311 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1952 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 313 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)) ;}
#line 1958 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 316 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s=%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1964 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 317 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("result=%s",(yyvsp[0].crepr));}
#line 1970 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 318 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1976 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 319 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1982 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 320 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1988 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 321 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s: %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1994 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 322 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s",(yyvsp[0].crepr));}
#line 2000 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 323 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return");}
#line 2006 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 324 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2012 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 325 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 2018 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 328 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2024 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 330 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("while(%s){%s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2030 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 331 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) =template("do{%s}\nwhile(%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2036 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 333 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2042 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 334 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s=%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2048 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 337 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\n%s",(yyvsp[-3].crepr),(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 2054 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 345 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("else{\n\t%s}",(yyvsp[0].crepr));}
#line 2060 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 346 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = "";}
#line 2066 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2070 "ptucc_parser.tab.c" /* yacc.c:1646  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b
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
<<<<<<< HEAD
#line 308 "ptucc_parser.y" /* yacc.c:1906  */
=======
#line 348 "ptucc_parser.y" /* yacc.c:1906  */
>>>>>>> 8fe0ccc4fbc3f6754a0c99e258e95e33b9f3b84b

/*
int main(){
	yyparse();
}
*/

