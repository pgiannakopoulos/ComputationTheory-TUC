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
#line 1 "myparser-tc.y" /* yacc.c:339  */

  #include <stdlib.h>
  #include <stdarg.h>
  #include <stdio.h>
  #include <string.h>   
  #include "cgen.h"

  extern int yylex(void);
  extern int line_num;

#line 77 "myparser-tc.tab.c" /* yacc.c:339  */

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
   by #include "myparser-tc.tab.h".  */
#ifndef YY_YY_MYPARSER_TC_TAB_H_INCLUDED
# define YY_YY_MYPARSER_TC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KW_INT = 258,
    KW_REAL = 259,
    KW_STRING = 260,
    KW_TRUE = 261,
    KW_FALSE = 262,
    KW_BOOL = 263,
    KW_IF = 264,
    KW_THEN = 265,
    KW_ELSE = 266,
    KW_FI = 267,
    KW_WHILE = 268,
    KW_LOOP = 269,
    KW_POOL = 270,
    KW_CONST = 271,
    KW_LET = 272,
    KW_RETURN = 273,
    KW_NOT = 274,
    KW_AND = 275,
    KW_OR = 276,
    KW_START = 277,
    STRING = 278,
    IDENT = 279,
    POSINT = 280,
    REAL = 281,
    ASSIGN = 282,
    TK_OP_EQ = 283,
    TK_OP_BIGGER = 284,
    TK_OP_BIGEQ = 285,
    TK_OP_NOTEQ = 286,
    ARROW = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "myparser-tc.y" /* yacc.c:355  */

  char* crepr;

#line 154 "myparser-tc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 171 "myparser-tc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   381

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  181

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   287

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    37,     2,     2,
      38,    39,    35,    33,    44,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    43,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    88,   104,   105,   108,   109,   113,   116,
     119,   120,   123,   124,   129,   132,   135,   136,   139,   141,
     143,   147,   148,   149,   152,   153,   154,   155,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     184,   185,   188,   190,   192,   194,   198,   199,   202,   203,
     207,   208,   211,   212,   213,   214,   218,   219,   223,   225,
     226,   228,   229,   233,   234,   235,   238,   241,   242,   243,
     247
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KW_INT", "KW_REAL", "KW_STRING",
  "KW_TRUE", "KW_FALSE", "KW_BOOL", "KW_IF", "KW_THEN", "KW_ELSE", "KW_FI",
  "KW_WHILE", "KW_LOOP", "KW_POOL", "KW_CONST", "KW_LET", "KW_RETURN",
  "KW_NOT", "KW_AND", "KW_OR", "KW_START", "STRING", "IDENT", "POSINT",
  "REAL", "ASSIGN", "TK_OP_EQ", "TK_OP_BIGGER", "TK_OP_BIGEQ",
  "TK_OP_NOTEQ", "ARROW", "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'",
  "':'", "'{'", "'}'", "';'", "','", "'['", "']'", "$accept", "program",
  "decl_types", "global_decl", "var_decl", "let_decl_body",
  "let_decl_list", "let_decl_init", "const_decl", "const_decl_body",
  "const_decl_list", "const_decl_init", "decl_id", "type_spec", "expr",
  "func_decl_list", "func_decl", "par_decl_list", "par_decl", "body",
  "command", "local_decl", "func_call", "param_list", "param", "return",
  "if_command", "if_rest", "while_command", YY_NULLPTR
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
     285,   286,   287,    43,    45,    42,    47,    37,    40,    41,
      58,   123,   125,    59,    44,    91,    93
};
# endif

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -79

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      74,   -16,   -16,     4,  -110,    89,  -110,  -110,   -33,   -14,
    -110,   -37,  -110,    11,  -110,   -18,  -110,    19,  -110,   -16,
    -110,    48,  -110,    68,    49,   109,   -16,   118,   109,   -16,
     174,    97,    21,  -110,    83,  -110,  -110,  -110,  -110,  -110,
      52,  -110,  -110,  -110,  -110,    93,  -110,  -110,  -110,   174,
    -110,   -22,  -110,  -110,   174,   174,   174,  -110,   326,  -110,
      62,   112,   113,  -110,  -110,  -110,   326,   174,   344,   344,
     306,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   -16,   119,   131,   326,    28,  -110,  -110,  -110,
    -110,   102,   102,   102,   102,   344,   344,   133,   133,   133,
     110,    40,  -110,   138,  -110,   174,   109,   111,   -16,   120,
    -110,  -110,   109,  -110,   167,   147,   152,   144,   150,    -4,
     121,   174,   174,   149,  -110,   176,    -3,  -110,    -4,   168,
     172,  -110,  -110,    -3,   121,   206,   252,  -110,   270,   174,
    -110,   173,  -110,    -3,   178,  -110,   175,   179,    -3,    65,
      65,  -110,   288,   180,   183,   185,  -110,  -110,   187,   177,
     122,  -110,  -110,   188,  -110,  -110,   200,   189,  -110,   190,
    -110,   174,   193,  -110,  -110,   234,   203,    65,  -110,   177,
      29
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     7,     0,     4,     5,    21,     0,
      14,     0,    17,     0,     8,     0,    11,    12,     1,     0,
       6,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,    22,    24,    25,    27,    26,
       0,    16,    20,    18,    19,     0,    10,    48,    49,     0,
      30,    21,    28,    29,     0,     0,     0,    31,    13,    32,
       0,     0,     0,    23,    15,     9,    35,    72,    34,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,    71,     0,    70,    38,    37,
      36,    47,    44,    45,    46,    39,    40,    41,    42,    43,
       0,     0,    57,     0,    68,    72,     0,     0,    59,     0,
      69,    58,     0,    56,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,    67,     0,    75,    61,    75,     0,
       0,    64,    65,    75,     0,     0,     0,    74,     0,     0,
      60,     0,    66,    75,     0,    63,     0,     0,    75,     0,
       0,    73,     0,     0,     0,     0,    54,     3,     0,     0,
       0,    62,    55,     0,    53,     2,     0,     0,    76,     0,
      52,     0,     0,    79,    80,     0,     0,     0,    77,     0,
      76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -110,   225,  -110,    76,  -110,  -110,   218,  -110,  -110,
    -110,   222,    -1,   -26,   -19,  -110,   228,  -110,   142,  -101,
    -109,   132,   -51,  -110,   146,   -32,  -110,    77,  -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    14,    15,    16,     7,    10,
      11,    12,    57,    40,    85,    21,    22,   101,   102,   126,
     127,   128,    59,    86,    87,   130,   131,   168,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    17,    45,    25,    18,   121,   121,    26,     8,   122,
     122,    58,    23,     2,   123,   123,    67,   140,    31,   133,
      51,    51,    28,    23,   140,    13,    29,   143,    17,     9,
      66,    62,    24,   148,   140,    68,    69,    70,    27,   140,
     -78,     9,     9,    61,   -78,     8,    30,   -78,   159,   160,
     140,   140,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   140,    32,   172,     9,   104,   129,   129,
     140,   -78,   105,    35,   121,   129,   179,   129,   122,   107,
     111,   100,   129,   129,   108,    42,   115,    43,    44,    51,
       1,     2,   129,    34,   141,    64,   144,   129,   129,   129,
      82,   147,   135,   136,   138,    19,     2,   100,   129,   129,
       9,   154,    36,    37,    38,   129,   158,    39,   125,   125,
     152,   129,    71,    72,    60,   125,   129,   125,   129,    63,
     121,   121,   125,   125,   122,   122,    65,   169,     2,    83,
      84,    42,   125,    43,    44,    51,    51,   125,   125,   125,
     106,   112,   175,    71,    72,    47,    48,   103,   125,   125,
     114,    73,    74,    75,    76,   125,     9,     9,    49,    82,
     116,   125,    50,    51,    52,    53,   125,   109,   125,   117,
      47,    48,    54,    55,   118,   119,   121,    56,   166,   167,
     122,   120,   137,    49,     9,   124,   124,    50,    51,    52,
      53,    51,   121,   139,   142,   176,   122,    54,    55,   171,
     142,   145,    56,   122,   146,   153,   149,    51,   156,     9,
     155,   157,     9,   162,    51,   163,    71,    72,   164,   165,
      20,   170,   173,   174,    73,    74,    75,    76,     9,    77,
      78,    79,    80,    81,   177,     9,   178,    46,    41,    33,
     113,   110,   134,     0,    71,    72,   180,     0,     0,     0,
       0,     0,    73,    74,    75,    76,   150,    77,    78,    79,
      80,    81,    71,    72,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    81,
      71,    72,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,     0,    77,    78,    79,    80,    81,    71,    72,
       0,     0,     0,   151,     0,     0,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    71,    72,     0,     0,
       0,   161,     0,     0,    73,    74,    75,    76,     0,    77,
      78,    79,    80,    81,     0,    88,    71,    72,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,     0,    77,
      78,    79,    80,    81,    71,    72,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,     0,     0,     0,    79,
      80,    81
};

static const yytype_int16 yycheck[] =
{
       1,     2,    28,    40,     0,     9,     9,    44,    24,    13,
      13,    30,    45,    17,    18,    18,    38,   126,    19,   120,
      24,    24,    40,    45,   133,    26,    44,   128,    29,    45,
      49,    32,    46,   134,   143,    54,    55,    56,    27,   148,
      11,    45,    45,    22,    15,    24,    27,    18,   149,   150,
     159,   160,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   172,    16,   166,    45,    39,   119,   120,
     179,    42,    44,    24,     9,   126,   177,   128,    13,    39,
     106,    82,   133,   134,    44,    23,   112,    25,    26,    24,
      16,    17,   143,    25,   126,    43,   128,   148,   149,   150,
      38,   133,   121,   122,   123,    16,    17,   108,   159,   160,
      45,   143,     3,     4,     5,   166,   148,     8,   119,   120,
     139,   172,    20,    21,    27,   126,   177,   128,   179,    46,
       9,     9,   133,   134,    13,    13,    43,    15,    17,    27,
      27,    23,   143,    25,    26,    24,    24,   148,   149,   150,
      40,    40,   171,    20,    21,     6,     7,    38,   159,   160,
      40,    28,    29,    30,    31,   166,    45,    45,    19,    38,
       3,   172,    23,    24,    25,    26,   177,    39,   179,    32,
       6,     7,    33,    34,    32,    41,     9,    38,    11,    12,
      13,    41,    43,    19,    45,   119,   120,    23,    24,    25,
      26,    24,     9,    27,   128,    12,    13,    33,    34,     9,
     134,    43,    38,    13,    42,    42,    10,    24,    43,    45,
      42,    42,    45,    43,    24,    42,    20,    21,    43,    42,
       5,    43,    43,    43,    28,    29,    30,    31,    45,    33,
      34,    35,    36,    37,    10,    45,    43,    29,    26,    21,
     108,   105,   120,    -1,    20,    21,   179,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    14,    33,    34,    35,
      36,    37,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    -1,    33,    34,    35,    36,    37,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    -1,    33,    34,    35,    36,    37,    20,    21,
      -1,    -1,    -1,    43,    -1,    -1,    28,    29,    30,    31,
      -1,    33,    34,    35,    36,    37,    20,    21,    -1,    -1,
      -1,    43,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    -1,    39,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,    33,
      34,    35,    36,    37,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    48,    49,    50,    51,    55,    24,    45,
      56,    57,    58,    59,    52,    53,    54,    59,     0,    16,
      49,    62,    63,    45,    46,    40,    44,    27,    40,    44,
      27,    59,    16,    63,    25,    24,     3,     4,     5,     8,
      60,    58,    23,    25,    26,    60,    54,     6,     7,    19,
      23,    24,    25,    26,    33,    34,    38,    59,    61,    69,
      27,    22,    59,    46,    43,    43,    61,    38,    61,    61,
      61,    20,    21,    28,    29,    30,    31,    33,    34,    35,
      36,    37,    38,    27,    27,    61,    70,    71,    39,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      59,    64,    65,    38,    39,    44,    40,    39,    44,    39,
      71,    60,    40,    65,    40,    60,     3,    32,    32,    41,
      41,     9,    13,    18,    51,    59,    66,    67,    68,    69,
      72,    73,    75,    66,    68,    61,    61,    43,    61,    27,
      67,    72,    51,    66,    72,    43,    42,    72,    66,    10,
      14,    43,    61,    42,    72,    42,    43,    42,    72,    66,
      66,    43,    43,    42,    43,    42,    11,    12,    74,    15,
      43,     9,    66,    43,    43,    61,    12,    10,    43,    66,
      74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    50,    51,    52,
      53,    53,    54,    54,    55,    56,    57,    57,    58,    58,
      58,    59,    59,    59,    60,    60,    60,    60,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    63,    63,    63,    64,    64,    65,    65,
      66,    66,    67,    67,    67,    67,    68,    68,    69,    70,
      70,    71,    71,    72,    72,    72,    73,    74,    74,    74,
      75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    15,    14,     1,     1,     2,     1,     2,     4,
       3,     1,     1,     3,     2,     4,     3,     1,     3,     3,
       3,     1,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       2,     1,    15,    14,    13,    14,     3,     1,     3,     0,
       2,     1,     4,     2,     1,     1,     2,     1,     4,     3,
       1,     1,     0,     3,     2,     0,     5,     4,     6,     2,
       6
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
#line 75 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-14].crepr));
    printf("%s\n\n", (yyvsp[-13].crepr));
    printf("int main() {\n%s\n%s\n%s\n} \n\n", (yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1424 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 88 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-13].crepr));
    printf("%s\n\n", (yyvsp[-12].crepr));
    printf("int main() {\n%s\n%s\n} \n\n",(yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1442 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 104 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1448 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 105 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1454 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 108 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1460 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 113 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1466 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 116 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1472 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 119 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1478 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 120 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1484 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1490 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;", (yyvsp[-2].crepr), (yyvsp[0].crepr)); 
}
#line 1497 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("const %s", (yyvsp[0].crepr)); }
#line 1503 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 132 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1509 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 135 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1515 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 136 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1521 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1527 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 141 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1533 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 143 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1539 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 147 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1545 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 148 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("*%s", (yyvsp[0].crepr)); }
#line 1551 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 149 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1557 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 152 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1563 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 153 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1569 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 154 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1575 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 155 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "string"; }
#line 1581 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 164 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("-%s", (yyvsp[0].crepr)); }
#line 1587 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 165 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("+%s", (yyvsp[0].crepr)); }
#line 1593 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 166 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1599 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1605 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 168 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1611 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 169 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1617 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 170 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1623 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 171 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1629 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 172 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1635 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 173 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1641 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 174 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s mod %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1647 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 175 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1653 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 176 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1659 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 177 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1665 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 178 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1671 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1677 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 180 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1683 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 184 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1689 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 185 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1695 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 189 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n%s\n%s\n}", (yyvsp[-7].crepr), (yyvsp[-13].crepr), (yyvsp[-10].crepr), (yyvsp[-4].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr)); }
#line 1701 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 191 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n%s\n}", (yyvsp[-6].crepr), (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr)); }
#line 1707 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 193 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n}", (yyvsp[-5].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr)); }
#line 1713 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 195 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n%s\n}", (yyvsp[-6].crepr), (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr)); }
#line 1719 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 198 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1725 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1731 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 202 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));  }
#line 1737 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 203 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)=" ";}
#line 1743 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 207 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1749 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 208 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1755 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 211 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1761 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 212 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 1767 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 213 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1773 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 214 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1779 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 218 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1785 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 219 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1791 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 223 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1797 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1803 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 226 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1809 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 228 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1815 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 229 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1821 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 233 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return %s;", (yyvsp[-1].crepr)); }
#line 1827 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 234 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return;"); }
#line 1833 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 235 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1839 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 238 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) {\n%s%s", (yyvsp[-3].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1845 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n}else{\n%s\n}", (yyvsp[-2].crepr)); }
#line 1851 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 242 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n}else if (%s) {\n%s%s", (yyvsp[-3].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1857 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 243 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="\n};";}
#line 1863 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 247 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) {\n%s \n};", (yyvsp[-4].crepr), (yyvsp[-2].crepr)); }
#line 1869 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;


#line 1873 "myparser-tc.tab.c" /* yacc.c:1646  */
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
#line 250 "myparser-tc.y" /* yacc.c:1906  */

int main () {

  if ( yyparse() != 0 )
    printf("Rejected!\n");

//lexical_analyzer ();

}
