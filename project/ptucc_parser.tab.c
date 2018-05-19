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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  236

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
       0,   108,   108,   124,   125,   126,   131,   134,   135,   138,
     139,   145,   146,   147,   148,   149,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   188,   189,   193,   194,   197,   199,   204,   205,
     206,   210,   215,   216,   220,   221,   222,   223,   224,   232,
     233,   236,   237,   238,   239,   244,   245,   252,   253,   256,
     257,   262,   267,   271,   272,   275,   276,   277,   278,   281,
     282,   283,   284,   288,   289,   293,   294,   295,   296,   299,
     300,   301,   302,   313,   314,   318,   322,   323,   330,   331,
     334,   337,   340,   341,   342,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   357,   360,   364,   365,   369,   370,
     374,   375
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

#define YYPACT_NINF -192

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-192)))

#define YYTABLE_NINF -9

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      17,  -192,     9,    24,    16,   -11,  -192,    74,    52,  -192,
      71,    74,  -192,    89,  -192,    34,  -192,  -192,    58,    18,
      27,  -192,    61,   -16,  -192,  -192,  -192,  -192,    64,    65,
    -192,    89,   126,    34,  -192,   539,   141,   142,  -192,  -192,
    -192,     2,   149,   193,   145,   -15,  -192,  -192,    29,  -192,
    -192,  -192,    22,    97,   148,   156,   538,    11,    11,   -12,
    -192,  -192,  -192,  -192,  -192,    99,   109,  -192,  -192,  -192,
    -192,   106,   125,   113,  -192,   133,   193,   192,    34,    11,
     538,    11,    11,  -192,   144,   163,  -192,  -192,   143,  -192,
    -192,  -192,  -192,  -192,    11,    11,   205,  -192,  -192,   295,
    -192,   311,  -192,   539,   149,   149,    34,   147,   149,  -192,
    -192,   155,  -192,  -192,   415,  -192,   153,   -35,   415,   415,
      11,    11,    11,   537,   152,   226,   154,    11,    11,    11,
    -192,   538,    11,    11,    11,    11,    11,    11,    11,    11,
      11,    11,    11,    11,    11,  -192,   538,  -192,  -192,  -192,
     110,   159,   164,   165,  -192,  -192,    62,  -192,  -192,  -192,
     116,  -192,  -192,    11,   250,   415,   170,  -192,    11,   429,
     472,   486,  -192,   537,   401,   203,   280,   383,   439,   261,
     191,   103,   -18,    47,    13,   152,   178,    34,   147,   149,
     167,  -192,    34,   415,    11,    11,  -192,   538,  -192,  -192,
     169,  -192,  -192,   131,    52,  -192,  -192,   356,   370,  -192,
      52,    34,  -192,  -192,   538,   538,  -192,  -192,  -192,  -192,
      90,  -192,  -192,    96,   171,   539,   174,   176,  -192,    -9,
    -192,  -192,    87,  -192,   242,  -192
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,    42,     0,     1,     0,    59,     6,
       0,    43,    44,     0,    69,     0,    45,    65,     0,     0,
       0,    58,     0,     0,    56,    57,    55,    54,     0,     0,
      48,    60,     0,     0,     4,   102,     0,     0,    70,    67,
      68,     0,    83,     0,     0,     0,    46,    47,     0,    66,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   113,   109,   108,   107,     0,     0,     3,     2,    89,
      90,     0,     0,    84,    49,     0,     0,     0,     0,     0,
       0,     7,     0,   111,     0,     0,    98,    99,    36,    32,
      33,    34,    35,    37,     0,     0,     0,    39,    40,     0,
      41,     0,   100,     0,    73,    73,     0,    93,     0,    52,
      50,     0,    63,    64,   105,   110,     0,   112,     9,   106,
       0,     0,     7,    11,    12,     0,     0,     0,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,     0,   104,    81,    82,
       0,     0,    74,     0,    85,    86,     0,    51,    91,    92,
       0,    53,   115,     0,     0,   117,     8,    38,     0,    30,
      29,    31,   116,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   120,     0,    93,     0,
       0,    94,     0,    10,     0,     0,    15,     0,    75,    76,
       0,    79,    80,     0,    59,    87,    88,     0,     0,   121,
      59,     0,    69,    71,     0,     0,    69,    72,    77,    78,
       0,   118,   119,     0,     0,   102,     0,     0,    95,     0,
      97,    96,     0,   114,     0,   101
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -192,  -192,  -192,   160,  -192,  -192,    -1,  -192,  -192,
     253,   -10,    -4,  -192,   -37,  -155,  -192,    -5,  -192,  -191,
    -192,  -192,   179,  -192,  -192,  -192,    77,  -192,  -192,   -67,
     -20,  -192,    56,   -33,  -192,   -34,  -192,  -192,  -192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,   116,   117,    97,    98,   118,     8,    11,
      12,   148,   149,    45,    30,    14,    18,   150,    38,    20,
      39,    40,   151,   152,    72,    73,   157,   213,   217,    85,
      86,   227,    59,    87,   234,   100,    62,    63,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    61,    60,    67,   102,    28,    74,   102,    19,    43,
      76,    29,     5,   115,    88,    89,    90,    91,     1,    92,
     163,   220,    61,    50,     6,   223,    48,    -8,    34,    51,
      93,     2,    69,   142,   143,   144,   145,    71,    70,   110,
      44,    77,    35,    21,    36,    37,    61,   103,     9,   212,
     232,    22,    94,     7,    23,   216,    99,   101,    24,   126,
      25,    26,    68,    27,   172,    95,   144,   145,   112,    61,
     147,    21,    96,    32,   113,    79,    33,    10,   114,   186,
      80,   119,    23,    81,    32,    13,    24,    78,    25,    26,
      52,    27,    17,   123,   124,   125,   154,    61,   158,   143,
     144,   145,   155,   160,   159,    35,    53,    36,    37,    54,
     233,   225,    61,    36,    37,    55,    15,    31,    56,   164,
     165,    57,    42,    46,    47,    58,   169,   170,   171,    49,
     209,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,    65,    66,   191,   221,   222,    75,
      82,    83,    17,   141,   142,   143,   144,   145,    21,    84,
     104,    32,   193,    61,   106,    32,    22,   196,   187,    23,
     105,    32,   108,    24,   192,    25,    26,   198,    27,   201,
      61,    61,   205,   199,   203,   202,    32,   107,   206,   211,
     109,    61,    60,   207,   208,   121,   111,   120,    61,   147,
     224,   218,    21,   226,   122,   156,   145,   219,    88,    89,
      90,    91,   161,    92,    21,   162,   168,    24,   197,    25,
      26,   188,    27,   189,    93,   163,   204,   190,   210,    24,
     228,    25,    26,   230,    27,   231,   127,   128,   129,   130,
     140,   141,   142,   143,   144,   145,    94,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   235,    95,
     127,   128,   129,   130,    16,   200,    96,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   229,   166,     0,   153,   194,   195,     0,   167,     0,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   127,   128,   129,   130,   139,
     140,   141,   142,   143,   144,   145,   131,     0,     0,     0,
       0,   127,   128,   129,   130,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,     0,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   127,   128,   129,   130,
       0,     0,     0,     0,     0,     0,     0,   214,     0,     0,
     127,   128,   129,   130,     0,     0,     0,     0,     0,     0,
       0,   215,     0,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   127,   128,   129,   130,   137,
     138,   139,   140,   141,   142,   143,   144,   145,     0,     0,
     128,   129,   130,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   129,   130,   138,   139,   140,   141,
     142,   143,   144,   145,     0,     0,     0,     0,     0,   130,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    52,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    35,     0,     0,     0,    53,    53,     0,
      54,    54,     0,     0,     0,     0,    55,    55,     0,    56,
      56,     0,    57,    57,     0,     0,    58,    58,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145
};

static const yytype_int16 yycheck[] =
{
      20,    35,    35,     1,    16,    15,    43,    16,    13,    25,
      25,    15,     3,    80,     3,     4,     5,     6,     1,     8,
      55,   212,    56,    33,     0,   216,    31,    62,     1,    33,
      19,    14,    42,    51,    52,    53,    54,    42,    42,    76,
      56,    56,    15,     9,    17,    18,    80,    59,    59,   204,
      59,    17,    41,    37,    20,   210,    57,    58,    24,    96,
      26,    27,    60,    29,   131,    54,    53,    54,    78,   103,
     103,     9,    61,    55,    78,    53,    58,     3,    79,   146,
      58,    82,    20,    61,    55,    33,    24,    58,    26,    27,
       3,    29,     3,    94,    95,    96,   106,   131,   108,    52,
      53,    54,   106,   108,   108,    15,    19,    17,    18,    22,
      23,    15,   146,    17,    18,    28,    45,    59,    31,   120,
     121,    34,    61,    59,    59,    38,   127,   128,   129,     3,
     197,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,     3,     3,   156,   214,   215,     4,
      53,     3,     3,    50,    51,    52,    53,    54,     9,     3,
      61,    55,   163,   197,    58,    55,    17,   168,    58,    20,
      61,    55,    59,    24,    58,    26,    27,   187,    29,   189,
     214,   215,   192,   187,   189,   189,    55,    62,   192,    58,
      57,   225,   225,   194,   195,    32,     4,    53,   232,   232,
     220,   211,     9,   223,    61,    58,    54,   211,     3,     4,
       5,     6,    57,     8,     9,    62,    62,    24,    40,    26,
      27,    62,    29,    59,    19,    55,    59,    62,    59,    24,
      59,    26,    27,    59,    29,    59,    10,    11,    12,    13,
      49,    50,    51,    52,    53,    54,    41,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    16,    54,
      10,    11,    12,    13,    11,   188,    61,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   225,   122,    -1,   105,    35,    36,    -1,    62,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    10,    11,    12,    13,    48,
      49,    50,    51,    52,    53,    54,    21,    -1,    -1,    -1,
      -1,    10,    11,    12,    13,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    10,    11,    12,    13,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      11,    12,    13,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    12,    13,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     3,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    19,    19,    -1,
      22,    22,    -1,    -1,    -1,    -1,    28,    28,    -1,    31,
      31,    -1,    34,    34,    -1,    -1,    38,    38,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    14,    64,    65,     3,     0,    37,    71,    59,
       3,    72,    73,    33,    78,    45,    73,     3,    79,    80,
      82,     9,    17,    20,    24,    26,    27,    29,    74,    75,
      77,    59,    55,    58,     1,    15,    17,    18,    81,    83,
      84,    93,    61,    25,    56,    76,    59,    59,    80,     3,
      74,    75,     3,    19,    22,    28,    31,    34,    38,    95,
      96,    98,    99,   100,   101,     3,     3,     1,    60,    74,
      75,    80,    87,    88,    77,     4,    25,    56,    58,    53,
      58,    61,    53,     3,     3,    92,    93,    96,     3,     4,
       5,     6,     8,    19,    41,    54,    61,    68,    69,    70,
      98,    70,    16,    59,    61,    61,    58,    62,    59,    57,
      77,     4,    74,    75,    70,    92,    66,    67,    70,    70,
      53,    32,    61,    70,    70,    70,    77,    10,    11,    12,
      13,    21,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    39,    96,    74,    75,
      80,    85,    86,    85,    74,    75,    58,    89,    74,    75,
      80,    57,    62,    55,    70,    70,    67,    62,    62,    70,
      70,    70,    92,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    92,    58,    62,    59,
      62,    74,    58,    70,    35,    36,    70,    40,    74,    75,
      89,    74,    75,    80,    59,    74,    75,    70,    70,    92,
      59,    58,    78,    90,    21,    21,    78,    91,    74,    75,
      82,    92,    92,    82,    93,    15,    93,    94,    59,    95,
      59,    59,    59,    23,    97,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    72,    72,    73,    73,    74,    74,
      74,    75,    76,    76,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    84,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    94,    95,    95,    95,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    97,    98,    99,    99,   100,   100,
     101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     6,     5,     1,     3,     0,     1,     1,
       3,     2,     2,     2,     2,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     0,     2,     1,     2,     4,     4,     1,     3,
       4,     5,     3,     4,     1,     1,     1,     1,     1,     0,
       3,     3,     3,     5,     5,     1,     3,     1,     1,     0,
       2,     7,     8,     0,     1,     3,     3,     5,     5,     3,
       3,     1,     1,     0,     1,     3,     3,     5,     5,     1,
       1,     3,     3,     0,     2,     4,     4,     4,     1,     1,
       3,     5,     0,     1,     3,     3,     3,     1,     1,     1,
       3,     2,     3,     1,     1,     4,     4,     4,     8,     8,
       4,     6
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
#line 108 "ptucc_parser.y" /* yacc.c:1646  */
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
#line 1545 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 124 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Period Expected\n");YYABORT;}
#line 1551 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 125 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Complex Command Expected\n");YYABORT;}
#line 1557 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 126 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE"Program Declaration Expected\n");YYABORT;}
#line 1563 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 131 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1569 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 134 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1575 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 135 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1581 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 138 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1587 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));  }
#line 1593 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr));}
#line 1599 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr));}
#line 1605 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 147 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
#line 1611 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s!", (yyvsp[-1].crepr));}
#line 1617 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1623 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 153 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s-%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1629 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 154 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s+%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1635 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1641 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1647 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s==%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1653 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1659 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1665 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1671 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s<>%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1677 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 162 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s>=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1683 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1689 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s||%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1695 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s:=%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1701 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s&&%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1707 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s/%s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1713 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %% %s" , (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1719 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 174 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = string_ptuc2c((yyvsp[0].crepr)); }
#line 1725 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "result";}
#line 1731 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr);}
#line 1737 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 188 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1743 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr); }
#line 1749 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr),(yyvsp[0].crepr)); }
#line 1755 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 197 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s %s;\n",(yyvsp[-1].crepr),(yyvsp[-3].crepr)); 
																	   		        set_def(strdup((yyvsp[-3].crepr)));}
#line 1762 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("typedef %s(*%s)(%s);\n",(yyvsp[-1].func_data)[0],(yyvsp[-3].crepr),(yyvsp[-1].func_data)[1]);
				   																  set_def(strdup((yyvsp[-3].crepr)));}
#line 1769 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1775 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s*",(yyvsp[0].crepr));}
#line 1781 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 206 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s",(yyvsp[0].crepr), (yyvsp[-2].crepr)); }
#line 1787 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.func_data)[0] = (yyvsp[0].crepr); (yyval.func_data)[1] = (yyvsp[-2].crepr);}
#line 1793 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]",(yyvsp[-1].crepr)) ;}
#line 1799 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 1805 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 220 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";    }
#line 1811 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 221 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; 	 }
#line 1817 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 222 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int";   }
#line 1823 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 223 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1829 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = ""; }
#line 1835 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1841 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n",(yyvsp[0].crepr) ,(yyvsp[-2].crepr));}
#line 1847 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;\n",func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ";"));}
#line 1853 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s %s;\n",(yyvsp[-4].crepr), (yyvsp[0].crepr) ,(yyvsp[-2].crepr));}
#line 1859 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s;\n",(yyvsp[-4].crepr), func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ";") );}
#line 1865 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1871 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 245 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1877 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1883 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =(yyvsp[0].crepr);}
#line 1889 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 256 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1895 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 257 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s", (yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1901 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 262 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("void %s (%s){%s}\n",(yyvsp[-5].crepr),(yyvsp[-3].crepr),(yyvsp[0].crepr));}
#line 1907 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 267 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s(%s){\n %s result; %s\n }\n",(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1913 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 271 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1919 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 272 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1925 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 275 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread((yyvsp[-2].crepr),(yyvsp[0].crepr),","));}
#line 1931 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 276 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 1937 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 277 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), vars_spread((yyvsp[-2].crepr),(yyvsp[0].crepr), ","));}
#line 1943 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), func_spread((yyvsp[-2].crepr),(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 1949 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 281 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 1955 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 1961 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 283 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 1967 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 284 "ptucc_parser.y" /* yacc.c:1646  */
    { yyerror(SE" Argument Name Expected\n");}
#line 1973 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 288 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 1979 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 289 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1985 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 293 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread("",(yyvsp[0].crepr),","));}
#line 1991 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 294 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread("",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 1997 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 295 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), vars_spread("",(yyvsp[0].crepr), ","));}
#line 2003 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 296 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-4].crepr), func_spread("$3",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2009 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 299 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",vars_spread("",(yyvsp[0].crepr),","));}
#line 2015 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 300 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",func_spread("",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2021 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 301 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), vars_spread("",(yyvsp[0].crepr), ","));}
#line 2027 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 302 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), func_spread("$3",(yyvsp[0].func_data)[0],(yyvsp[0].func_data)[1], ","));}
#line 2033 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 313 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=""; yyerror("return type expected");}
#line 2039 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 314 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr)=(yyvsp[0].crepr);}
#line 2045 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 318 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s%s%s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 2051 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 322 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s%s%s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 2057 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 323 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s%s",(yyvsp[-3].crepr),(yyvsp[-2].crepr));yyerror(SE"return expected\n");YYABORT;}
#line 2063 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 334 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s\n",(yyvsp[-1].crepr)) ;}
#line 2069 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 337 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n%s\n%s",(yyvsp[-3].crepr),(yyvsp[-1].crepr)) ;}
#line 2075 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 340 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = "";}
#line 2081 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 342 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr)) ;}
#line 2087 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 346 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("%s=%s;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2093 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 347 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("result=%s;",(yyvsp[0].crepr));}
#line 2099 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 348 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2105 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 349 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 2111 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 350 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;",(yyvsp[0].crepr));}
#line 2117 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 351 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s: %s;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2123 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 352 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("goto %s;",(yyvsp[0].crepr));}
#line 2129 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 353 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)\n;",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2135 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 354 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[0].crepr)); }
#line 2141 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 357 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return result;");}
#line 2147 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 360 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 2153 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 364 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("while(%s){%s}",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2159 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 365 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("do{%s}\nwhile(%s)",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2165 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 369 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s<%s; %s++){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2171 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 370 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) =template("for(%s=%s; %s>%s; %s--){\n\t%s\n}",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr)); }
#line 2177 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 374 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2183 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 375 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if(%s){\n\t%s}\nelse{\n%s}",(yyvsp[-4].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2189 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2193 "ptucc_parser.tab.c" /* yacc.c:1646  */
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
#line 378 "ptucc_parser.y" /* yacc.c:1906  */

/*
int main()                                                                                                              {
	yyparse();
}
*/

