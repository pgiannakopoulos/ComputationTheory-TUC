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

  int lexical_mode = 0;
  void lexical_analyzer();
  extern int yylex(void);
  extern int line_num;

#line 79 "myparser-tc.tab.c" /* yacc.c:339  */

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
#line 15 "myparser-tc.y" /* yacc.c:355  */

  char* crepr;

#line 156 "myparser-tc.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYPARSER_TC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 173 "myparser-tc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   570

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  217

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
static const yytype_uint16 yyrline[] =
{
       0,    80,    80,    91,   103,   115,   128,   139,   151,   163,
     179,   180,   183,   184,   188,   191,   194,   195,   198,   199,
     204,   207,   210,   211,   214,   216,   218,   222,   223,   224,
     225,   228,   229,   230,   231,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   261,   262,
     265,   267,   269,   271,   275,   276,   279,   280,   285,   286,
     289,   290,   291,   292,   293,   297,   298,   302,   304,   305,
     307,   308,   312,   313,   316,   319,   320,   324
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

#define YYPACT_NINF -136

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-136)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      93,   -15,    27,    12,  -136,   101,  -136,  -136,    -2,  -136,
     -26,    -6,    10,  -136,    30,  -136,    23,  -136,    41,  -136,
      52,  -136,   -14,  -136,    67,    -4,  -136,    69,     9,    91,
     166,    27,    50,   166,    27,   274,    94,    39,    99,   102,
      96,    84,    90,  -136,  -136,  -136,  -136,  -136,   117,  -136,
     126,  -136,  -136,  -136,    27,   118,  -136,  -136,  -136,   274,
    -136,   -34,  -136,  -136,   274,   274,   274,   227,  -136,   523,
    -136,   128,   137,   129,   134,   133,  -136,  -136,  -136,    64,
     136,    18,  -136,  -136,  -136,   274,    68,    68,   503,   425,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   159,   161,   162,   200,   166,   164,    27,   523,    25,
    -136,  -136,  -136,   533,   533,   173,   173,   173,   173,    68,
      68,  -136,  -136,  -136,   171,   174,   172,   184,  -136,   166,
    -136,  -136,   274,   216,   185,   225,   191,   205,  -136,   212,
     240,   213,   107,   206,   207,   217,   214,   274,   274,   251,
    -136,   235,   293,  -136,   107,   221,  -136,  -136,  -136,    35,
     107,   226,   107,   407,   449,  -136,   467,   274,  -136,  -136,
    -136,   305,  -136,   223,   312,   292,   331,   107,   107,   343,
     107,   218,   218,  -136,   485,  -136,  -136,   228,   236,   350,
    -136,   351,   373,   107,  -136,   381,     4,   211,  -136,  -136,
    -136,   239,  -136,  -136,   389,  -136,   218,   243,  -136,   244,
    -136,  -136,   110,  -136,  -136,   245,  -136
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    13,     0,    10,    11,     0,    59,
       0,    27,     0,    20,     0,    23,     0,    14,     0,    17,
      18,     1,     0,    12,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    31,    32,    34,    33,     0,    22,
       0,    26,    24,    25,    67,     0,    16,    56,    57,     0,
      37,    27,    35,    36,     0,     0,     0,     0,    38,    19,
      39,     0,     0,     0,     0,     0,    29,    30,    21,     0,
       0,     0,    65,    15,    42,    81,    41,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    67,    80,     0,
      79,    45,    46,    44,    43,    55,    52,    53,    54,    47,
      48,    49,    50,    51,     0,     0,     0,     0,    66,     0,
      64,    77,    81,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,    69,     0,     0,    74,    72,    73,     0,
       0,     0,     0,     0,     0,    83,     0,     0,     6,    68,
      75,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     2,    62,     0,     0,     0,
       8,     0,     0,     0,     7,     0,     0,     0,    70,    63,
      61,     0,     4,     9,     0,     3,     0,     0,    84,     0,
      60,     5,     0,    86,    87,     0,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,   249,  -136,     0,  -136,  -136,   234,  -136,  -136,
    -136,   238,     1,   -27,    92,   273,    13,  -136,   176,  -135,
      26,     3,    47,  -136,   158,  -136,  -136,  -136,  -136
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,   150,    17,    18,    19,     7,    13,
      14,    15,   151,    48,   108,     8,     9,    81,    82,   152,
     153,   154,   155,   109,   110,   156,   157,   208,   158
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    27,    16,    20,    85,     6,    55,    10,    36,    11,
      11,    28,    21,   147,    25,   206,   207,   148,    38,   171,
      11,    26,   149,    16,   174,   176,    39,   179,    61,    42,
      12,    12,    50,    11,    41,    20,    68,    26,    39,    28,
     189,    12,   191,   192,   147,   195,   196,   197,   148,    12,
      32,    11,     2,   149,    12,    80,    29,   106,   204,    61,
      68,    72,   107,    11,   131,    68,    68,    68,    68,   132,
      30,   212,    12,    51,    31,    52,    53,   173,   128,    35,
      12,    33,    70,    37,    12,    34,    68,    51,    54,    52,
      53,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,   137,    98,    99,   100,    70,    40,    80,     1,
       2,    70,    70,    70,    70,    43,   147,    22,     2,   147,
     148,    71,   215,   148,     2,   149,    73,    69,   149,    74,
      76,    61,    70,    68,    61,    75,    77,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    68,    68,
      68,    84,    12,    79,   170,    12,    86,    87,    88,    89,
      78,    83,   175,   177,   102,   180,   101,   103,    68,    44,
      45,    46,    54,   104,    47,   170,   105,   170,   169,    70,
     170,   193,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   170,    70,    70,    70,   169,   124,   125,
     169,   126,   169,   127,   129,   169,    96,    97,    98,    99,
     100,   133,   135,   134,    70,   169,   136,   169,   169,   139,
     147,   169,   169,   169,   148,   140,   209,   147,   141,   149,
     169,   148,   142,    57,    58,    61,   149,   143,   169,   163,
     164,   166,    61,   145,   144,   146,    59,   159,   160,   161,
      60,    61,    62,    63,    23,   162,    12,    57,    58,   184,
      64,    65,   167,    12,   172,    66,   186,   178,    56,    49,
      59,   199,    67,    29,    60,    61,    62,    63,    24,   200,
      57,    58,   210,   130,    64,    65,   213,   214,   216,    66,
     138,     0,     0,    59,   165,     0,    67,    60,    61,    62,
      63,   147,   147,     0,     0,   148,   148,    64,    65,     2,
     149,   149,    66,     0,   147,     0,    61,    61,   148,    67,
       0,   147,     0,   149,     0,   148,     0,     0,     0,    61,
     149,     0,     0,     0,   188,   168,    61,    12,    12,     0,
     147,     0,     0,     0,   148,     0,     0,   185,     0,   149,
      12,     0,   147,     0,   187,    61,   148,    12,     0,   147,
     147,   149,     0,   148,   148,     0,     0,    61,   149,   149,
       0,     0,     0,   190,    61,    61,    12,     0,     0,     0,
       0,     0,   147,     0,     0,   194,   148,     0,    12,     0,
     147,   149,   201,   202,   148,    12,    12,    61,   147,   149,
       0,     0,   148,     0,     0,    61,     0,   149,     0,     0,
       0,     0,     0,    61,     0,   203,     0,   181,    12,     0,
       0,     0,     0,   205,     0,     0,    12,    90,    91,     0,
       0,   211,     0,     0,    12,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,    90,    91,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,     0,    96,    97,
      98,    99,   100,   182,     0,     0,     0,     0,     0,    90,
      91,   112,     0,     0,     0,     0,     0,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,    90,    91,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,    90,    91,     0,     0,     0,
     183,     0,     0,    92,    93,    94,    95,     0,    96,    97,
      98,    99,   100,    90,    91,     0,     0,     0,   198,     0,
       0,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100,     0,   111,    90,    91,     0,     0,     0,     0,     0,
       0,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100
};

static const yytype_int16 yycheck[] =
{
       0,    27,     1,     2,    38,     5,    33,    22,    22,    24,
      24,    45,     0,     9,    16,    11,    12,    13,    22,   154,
      24,     8,    18,    22,   159,   160,    25,   162,    24,    28,
      45,    45,    31,    24,    25,    34,    35,    24,    37,    45,
     175,    45,   177,   178,     9,   180,   181,   182,    13,    45,
      27,    24,    17,    18,    45,    54,    46,    39,   193,    24,
      59,    22,    44,    24,    39,    64,    65,    66,    67,    44,
      40,   206,    45,    23,    44,    25,    26,    42,   105,    27,
      45,    40,    35,    16,    45,    44,    85,    23,    38,    25,
      26,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   129,    35,    36,    37,    59,    38,   107,    16,
      17,    64,    65,    66,    67,    24,     9,    16,    17,     9,
      13,    27,    12,    13,    17,    18,    27,    35,    18,    27,
      46,    24,    85,   132,    24,    39,    46,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   147,   148,
     149,    59,    45,    27,   154,    45,    64,    65,    66,    67,
      43,    43,   159,   160,    27,   162,    38,    38,   167,     3,
       4,     5,    38,    40,     8,   175,    40,   177,   152,   132,
     180,   178,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   193,   147,   148,   149,   171,    39,    38,
     174,    39,   176,     3,    40,   179,    33,    34,    35,    36,
      37,    40,    40,    39,   167,   189,    32,   191,   192,     3,
       9,   195,   196,   197,    13,    40,    15,     9,     3,    18,
     204,    13,    41,     6,     7,    24,    18,    32,   212,   147,
     148,   149,    24,     3,    32,    32,    19,    41,    41,    32,
      23,    24,    25,    26,     5,    41,    45,     6,     7,   167,
      33,    34,    27,    45,    43,    38,    43,    41,    34,    31,
      19,    43,    45,    46,    23,    24,    25,    26,     5,    43,
       6,     7,    43,   107,    33,    34,    43,    43,    43,    38,
     132,    -1,    -1,    19,    43,    -1,    45,    23,    24,    25,
      26,     9,     9,    -1,    -1,    13,    13,    33,    34,    17,
      18,    18,    38,    -1,     9,    -1,    24,    24,    13,    45,
      -1,     9,    -1,    18,    -1,    13,    -1,    -1,    -1,    24,
      18,    -1,    -1,    -1,    42,    42,    24,    45,    45,    -1,
       9,    -1,    -1,    -1,    13,    -1,    -1,    42,    -1,    18,
      45,    -1,     9,    -1,    42,    24,    13,    45,    -1,     9,
       9,    18,    -1,    13,    13,    -1,    -1,    24,    18,    18,
      -1,    -1,    -1,    42,    24,    24,    45,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    42,    13,    -1,    45,    -1,
       9,    18,    42,    42,    13,    45,    45,    24,     9,    18,
      -1,    -1,    13,    -1,    -1,    24,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    42,    -1,    10,    45,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    45,    20,    21,    -1,
      -1,    42,    -1,    -1,    45,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    14,    -1,    -1,    -1,    -1,    -1,    20,
      21,    46,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    -1,    33,    34,    35,    36,    37,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    -1,
      33,    34,    35,    36,    37,    20,    21,    -1,    -1,    -1,
      43,    -1,    -1,    28,    29,    30,    31,    -1,    33,    34,
      35,    36,    37,    20,    21,    -1,    -1,    -1,    43,    -1,
      -1,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    -1,    39,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37,    28,    29,    30,    31,    -1,    33,    34,    35,    36,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    16,    17,    48,    49,    50,    51,    55,    62,    63,
      22,    24,    45,    56,    57,    58,    59,    52,    53,    54,
      59,     0,    16,    49,    62,    16,    63,    27,    45,    46,
      40,    44,    27,    40,    44,    27,    22,    16,    22,    59,
      38,    25,    59,    24,     3,     4,     5,     8,    60,    58,
      59,    23,    25,    26,    38,    60,    54,     6,     7,    19,
      23,    24,    25,    26,    33,    34,    38,    45,    59,    61,
      69,    27,    22,    27,    27,    39,    46,    46,    43,    27,
      59,    64,    65,    43,    61,    38,    61,    61,    61,    61,
      20,    21,    28,    29,    30,    31,    33,    34,    35,    36,
      37,    38,    27,    38,    40,    40,    39,    44,    61,    70,
      71,    39,    46,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    39,    38,    39,     3,    60,    40,
      65,    39,    44,    40,    39,    40,    32,    60,    71,     3,
      40,     3,    41,    32,    32,     3,    32,     9,    13,    18,
      51,    59,    66,    67,    68,    69,    72,    73,    75,    41,
      41,    32,    41,    61,    61,    43,    61,    27,    42,    67,
      51,    66,    43,    42,    66,    68,    66,    68,    41,    66,
      68,    10,    14,    43,    61,    42,    43,    42,    42,    66,
      42,    66,    66,    68,    42,    66,    66,    66,    43,    43,
      43,    42,    42,    42,    66,    42,    11,    12,    74,    15,
      43,    42,    66,    43,    43,    12,    43
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    50,    51,    52,    53,    53,    54,    54,
      55,    56,    57,    57,    58,    58,    58,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    66,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    70,
      71,    71,    72,    72,    73,    74,    74,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,    13,    13,    14,    11,    12,    12,    13,
       1,     1,     2,     1,     2,     4,     3,     1,     1,     3,
       2,     4,     3,     1,     3,     3,     3,     1,     3,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     2,     1,
      14,    13,    12,    13,     3,     1,     3,     0,     2,     1,
       4,     2,     1,     1,     1,     2,     1,     4,     3,     1,
       1,     0,     3,     2,     5,     4,     2,     6
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
#line 80 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("int main() {\n%s\n%s\n} \n\n", (yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1471 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 91 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-12].crepr));
    printf("int main() {\n%s\n%s\n} \n\n", (yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1488 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 103 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-12].crepr));
    printf("int main() {\n%s\n%s\n} \n\n", (yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1505 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 115 "myparser-tc.y" /* yacc.c:1646  */
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
    printf("int main() {\n%s\n%s\n} \n\n", (yyvsp[-2].crepr),(yyvsp[-1].crepr));
  }
}
#line 1523 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 128 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("int main() {\n%s\n} \n\n", (yyvsp[-1].crepr));
  }
}
#line 1539 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 139 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-11].crepr));
    printf("int main() {\n%s\n} \n\n", (yyvsp[-1].crepr));
  }
}
#line 1556 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 151 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-11].crepr));
    printf("int main() {\n%s\n} \n\n", (yyvsp[-1].crepr));
  }
}
#line 1573 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "myparser-tc.y" /* yacc.c:1646  */
    { 
/* We have a successful parse! 
  Check for any errors and generate output. 
*/
  if(yyerror_count==0) {
    // include the teaclib.h file
    puts(c_prologue); 
    printf("/* program */ \n\n");
    printf("%s\n\n", (yyvsp[-12].crepr));
    printf("%s\n\n", (yyvsp[-11].crepr));
    printf("int main() {\n%s\n} \n", (yyvsp[-1].crepr));
  }
}
#line 1591 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 179 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1597 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 180 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr);}
#line 1603 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 183 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1609 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 188 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1615 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 191 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1621 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 194 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1627 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 195 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1633 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1639 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 199 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); 
}
#line 1646 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 204 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("const %s", (yyvsp[0].crepr)); }
#line 1652 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 207 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s;", (yyvsp[-1].crepr), (yyvsp[-3].crepr)); }
#line 1658 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 210 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1664 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 211 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1670 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 214 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1676 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 216 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1682 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 218 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1688 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 222 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[0].crepr); }
#line 1694 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 223 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("*%s", (yyvsp[0].crepr)); }
#line 1700 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 224 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1706 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 225 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s[%s]", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1712 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 228 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1718 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 229 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "double"; }
#line 1724 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 230 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "int"; }
#line 1730 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 231 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = "char"; }
#line 1736 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 240 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template(" -%s", (yyvsp[0].crepr)); }
#line 1742 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 241 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template(" +%s", (yyvsp[0].crepr)); }
#line 1748 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 242 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("!%s", (yyvsp[0].crepr)); }
#line 1754 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 243 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s || %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1760 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 244 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s && %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1766 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 245 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("(%s)", (yyvsp[-1].crepr)); }
#line 1772 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 246 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("[%s]", (yyvsp[-1].crepr)); }
#line 1778 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 247 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s + %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1784 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 248 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s - %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1790 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 249 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s * %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1796 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 250 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s / %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1802 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 251 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %c %s", (yyvsp[-2].crepr), '%', (yyvsp[0].crepr)); }
#line 1808 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 252 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s < %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1814 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 253 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s <= %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1820 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 254 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s != %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1826 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 255 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s == %s", (yyvsp[-2].crepr), (yyvsp[0].crepr)); }
#line 1832 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 256 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("1"); }
#line 1838 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 257 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("0"); }
#line 1844 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 261 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1850 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 262 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1856 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 266 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n%s\n\n}", (yyvsp[-6].crepr), (yyvsp[-12].crepr), (yyvsp[-9].crepr), (yyvsp[-3].crepr), (yyvsp[-2].crepr)); }
#line 1862 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 268 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n\n}", (yyvsp[-5].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr)); }
#line 1868 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 270 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n}", (yyvsp[-4].crepr), (yyvsp[-10].crepr), (yyvsp[-7].crepr)); }
#line 1874 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 272 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s %s (%s) {\n%s\n}", (yyvsp[-5].crepr), (yyvsp[-11].crepr), (yyvsp[-8].crepr), (yyvsp[-2].crepr)); }
#line 1880 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 275 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s", (yyvsp[-2].crepr), (yyvsp[0].crepr) );}
#line 1886 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 276 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1892 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 279 "myparser-tc.y" /* yacc.c:1646  */
    {  (yyval.crepr) = template("%s %s", (yyvsp[0].crepr), (yyvsp[-2].crepr));  }
#line 1898 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 280 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1904 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 285 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1910 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 286 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1916 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 289 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s = %s;", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1922 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 290 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s;", (yyvsp[-1].crepr)); }
#line 1928 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 291 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1934 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 292 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1940 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 293 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1946 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 297 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s\n%s", (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 1952 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 298 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1958 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 302 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s(%s)", (yyvsp[-3].crepr), (yyvsp[-1].crepr)); }
#line 1964 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 304 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s, %s",(yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1970 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 305 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s",(yyvsp[0].crepr));}
#line 1976 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 307 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s", (yyvsp[0].crepr)); }
#line 1982 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 308 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="";}
#line 1988 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 312 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return %s;", (yyvsp[-1].crepr)); }
#line 1994 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 313 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("return;"); }
#line 2000 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 316 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("if (%s) {\n%s%s", (yyvsp[-3].crepr), (yyvsp[-1].crepr), (yyvsp[0].crepr)); }
#line 2006 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 319 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("\n}else{\n%s\n}", (yyvsp[-2].crepr)); }
#line 2012 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 320 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr)="\n};";}
#line 2018 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 324 "myparser-tc.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("while (%s) {\n%s \n};", (yyvsp[-4].crepr), (yyvsp[-2].crepr)); }
#line 2024 "myparser-tc.tab.c" /* yacc.c:1646  */
    break;


#line 2028 "myparser-tc.tab.c" /* yacc.c:1646  */
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
#line 327 "myparser-tc.y" /* yacc.c:1906  */

int main () {
  if (lexical_mode == 0){
    if ( yyparse() != 0 )
      printf("\nRejected!\n");
  }else{
    lexical_analyzer ();
  }
}
