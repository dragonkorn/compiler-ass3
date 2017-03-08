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
#line 4 "a.y" /* yacc.c:339  */

  #include <stdio.h>
  #include <math.h>
  int yylex (void);
  void yyerror (char const *);
  void push (int data);
  int pop (void);
  int bitwistop(int num1, int num2, char *op);
  int hextodec();
  int temp;
  int temp2;
  int acc;
  int r[26];
  int top;
  int size;
  int stack[1000];
  int topStack;
  int hex[10];

  //enum {RA=0, RB, RC, RD, RE, RF, RG, RH, RI, RJ, RK, RL, RM, RN, RO, RP, RQ, RR, RS, RT, RU, RV, RW, RX, RY, RZ};
  //enum {RA=0};

#line 89 "a.tab.c" /* yacc.c:339  */

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
    SHOW = 258,
    LOAD = 259,
    POP = 260,
    PUSH = 261,
    ACC = 262,
    RA = 263,
    RB = 264,
    RC = 265,
    RD = 266,
    RE = 267,
    RF = 268,
    RG = 269,
    RH = 270,
    RI = 271,
    RJ = 272,
    RK = 273,
    RL = 274,
    RM = 275,
    RN = 276,
    RO = 277,
    RP = 278,
    RQ = 279,
    RR = 280,
    RS = 281,
    RT = 282,
    RU = 283,
    RV = 284,
    RW = 285,
    RX = 286,
    RY = 287,
    RZ = 288,
    TOP = 289,
    SIZE = 290,
    NUM = 291,
    HEX = 292,
    AND = 293,
    OR = 294,
    NOT = 295,
    NEG = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef double YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 179 "a.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD
#define YYLAST   186
=======
#define YYLAST   188
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  8
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  54
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  76
=======
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  81
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
      41,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      45,    46,    42,    38,     2,    37,     2,    43,     2,     2,
=======
      42,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,    50,    45,    43,     2,    44,     2,    46,     2,     2,
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
<<<<<<< HEAD
       2,     2,    44,     2,    40,     2,     2,     2,     2,     2,
=======
       2,     2,    47,     2,    48,     2,     2,     2,     2,     2,
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
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
<<<<<<< HEAD
      35,    36,    39
=======
      35,    36,    37,    38,    39,    40,    41
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
<<<<<<< HEAD
       0,    63,    63,    64,    67,    68,    69,    70,    71,    72,
      73,    76,    79,    83,    87,    90,    93,    96,    99,   102,
     105,   108,   113,   114,   117,   118,   121,   122,   123,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151
=======
       0,    68,    68,    69,    72,    73,    74,    75,    76,    77,
      78,    81,    84,    88,    91,    94,    97,   100,   103,   106,
     109,   112,   115,   122,   129,   136,   137,   140,   141,   144,
     145,   146,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SHOW", "LOAD", "POP", "PUSH", "ACC",
  "RA", "RB", "RC", "RD", "RE", "RF", "RG", "RH", "RI", "RJ", "RK", "RL",
  "RM", "RN", "RO", "RP", "RQ", "RR", "RS", "RT", "RU", "RV", "RW", "RX",
<<<<<<< HEAD
  "RY", "RZ", "TOP", "SIZE", "NUM", "'-'", "'+'", "NEG", "'^'", "'\\n'",
  "'*'", "'/'", "'\\\\'", "'('", "')'", "$accept", "input", "line", "exp",
  "show", "load", "nonEditReg", "reg", YY_NULLPTR
=======
  "RY", "RZ", "TOP", "SIZE", "NUM", "HEX", "AND", "OR", "NOT", "NEG",
  "'\\n'", "'+'", "'-'", "'*'", "'/'", "'\\\\'", "'^'", "'('", "')'",
  "$accept", "input", "line", "exp", "show", "load", "nonEditReg", "reg", YY_NULLPTR
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
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
<<<<<<< HEAD
     285,   286,   287,   288,   289,   290,   291,    45,    43,   292,
      94,    10,    42,    47,    92,    40,    41
};
# endif

#define YYPACT_NINF -34

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-34)))
=======
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,    10,    43,    45,    42,    47,    92,    94,    40,
      41
};
# endif

#define YYPACT_NINF -42

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-42)))
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD
     -34,     6,   -34,    84,    84,   112,    84,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,    45,   -34,    45,
     -34,   134,   -34,   -34,   -33,   -34,   -34,     3,   112,   112,
       7,     8,     9,    43,   113,    45,    45,    45,   -34,    45,
      45,    45,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
      43,    43,    43,   142,   142,   142
=======
     -42,     0,   -42,   105,   133,   133,   105,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,    43,   -42,    43,    43,   -42,
     129,   -42,   -42,   -42,   -42,   -41,   -42,   -42,   -40,   105,
      -8,    -7,    -4,   140,   140,    50,    43,    43,   -42,    43,
      43,    43,    43,    43,    43,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   140,   140,   140,   140,   140,   140,   140,
     140
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
<<<<<<< HEAD
       2,     0,     1,     0,     0,     0,     0,    26,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    27,    28,    11,     0,     4,     0,
       3,     0,    13,    12,     0,    23,    22,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,     5,     0,
       0,     0,     6,     7,    25,    24,    10,     9,     8,    21,
      15,    14,    20,    16,    17,    18
=======
       2,     0,     1,     0,     0,     0,     0,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    11,    12,     0,     4,     0,     0,     3,
       0,    13,    29,    30,    31,     0,    26,    25,     0,     0,
       0,     0,     0,    24,    19,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     6,     7,    28,    27,    10,
       9,     8,    21,    22,    23,    14,    15,    16,    17,    18,
      20
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
<<<<<<< HEAD
     -34,   -34,   -34,   109,   -34,   -34,     1,    -3
=======
     -42,   -42,   -42,    47,   -42,   -42,     1,    42
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD
      -1,     1,    40,    41,    44,    47,    42,    43
=======
      -1,     1,    39,    40,    45,    48,    46,    41
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
<<<<<<< HEAD
      46,    49,    50,    52,    45,    48,     2,    51,    62,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    63,    64,    65,    38,    66,    67,
      68,    39,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    57,     0,    59,    60,    61,     0,     0,
      39,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    53,     0,    54,     0,
      55,    56,     0,    57,     0,    59,    60,    61,     0,    69,
       0,     0,     0,     0,    70,    71,    72,     0,    73,    74,
      75,    55,    56,     0,    57,    58,    59,    60,    61,    55,
      56,     0,    57,     0,    59,    60,    61
=======
       2,    65,    66,     3,     4,     5,     6,    51,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    69,    70,    33,    34,    71,     0,
      35,     0,    36,     0,    37,    47,    49,    50,    52,    38,
      67,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,     0,    33,
      34,     0,    53,    35,    54,    55,     0,    37,    56,    57,
       0,    68,    38,    59,    60,    61,    62,    63,    64,     0,
      72,     0,     0,    73,    74,     0,    75,    76,    77,    78,
      79,    80,    42,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    43,
      44,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    56,    57,     0,
       0,    58,    59,    60,    61,    62,    63,    64,    56,    57,
       0,     0,     0,    59,    60,    61,    62,    63,    64
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

static const yytype_int8 yycheck[] =
{
<<<<<<< HEAD
       3,     4,     5,     6,     3,     4,     0,     6,    41,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    41,    48,    49,    41,    41,    41,
      41,    45,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    40,    -1,    42,    43,    44,    -1,    -1,
      45,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    37,    -1,    39,    -1,
      37,    38,    -1,    40,    -1,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,    60,
      61,    37,    38,    -1,    40,    41,    42,    43,    44,    37,
      38,    -1,    40,    -1,    42,    43,    44
=======
       0,    42,    42,     3,     4,     5,     6,     6,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    42,    42,    36,    37,    42,    -1,
      40,    -1,    42,    -1,    44,     3,     4,     5,     6,    49,
      49,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      37,    -1,    35,    40,    37,    38,    -1,    44,    38,    39,
      -1,    49,    49,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    56,    57,    -1,    59,    60,    61,    62,
      63,    64,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    38,    39,    -1,
      -1,    42,    43,    44,    45,    46,    47,    48,    38,    39,
      -1,    -1,    -1,    43,    44,    45,    46,    47,    48
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
<<<<<<< HEAD
       0,    48,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    41,    45,
      49,    50,    53,    54,    51,    53,    54,    52,    53,    54,
      54,    53,    54,    50,    50,    37,    38,    40,    41,    42,
      43,    44,    41,    41,    54,    54,    41,    41,    41,    46,
      50,    50,    50,    50,    50,    50
=======
       0,    52,     0,     3,     4,     5,     6,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    36,    37,    40,    42,    44,    49,    53,
      54,    58,     7,    34,    35,    55,    57,    58,    56,    58,
      58,    57,    58,    54,    54,    54,    38,    39,    42,    43,
      44,    45,    46,    47,    48,    42,    42,    57,    58,    42,
      42,    42,    50,    54,    54,    54,    54,    54,    54,    54,
      54
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
<<<<<<< HEAD
       0,    47,    48,    48,    49,    49,    49,    49,    49,    49,
      49,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54
=======
       0,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    56,    56,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     2,
<<<<<<< HEAD
       3,     3,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
=======
       3,     3,     3,     3,     2,     1,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
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
        case 3:
<<<<<<< HEAD
#line 64 "a.y" /* yacc.c:1646  */
    { printf ("> "); }
#line 1321 "a.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 68 "a.y" /* yacc.c:1646  */
    { printf ("= %.10g\n", (yyvsp[-1])); }
#line 1327 "a.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 69 "a.y" /* yacc.c:1646  */
    { printf("\n");}
#line 1333 "a.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 71 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); push(r[temp-263]); }
#line 1339 "a.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 72 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); push(temp); }
#line 1345 "a.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 73 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); r[temp-263] = pop(); }
#line 1351 "a.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 76 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);
                acc = (yyval);
              }
#line 1359 "a.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]); 
                (yyval) = r[temp-263];
                acc = (yyval);
              }
#line 1368 "a.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]);
                (yyval) = temp;
                acc = (yyval);
              }
#line 1377 "a.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[0]);      
                    acc = (yyval);
                  }
#line 1385 "a.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) - (yyvsp[0]);      
                    acc = (yyval);
                  }
#line 1393 "a.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 93 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) * (yyvsp[0]);         
                acc = (yyval);
              }
#line 1401 "a.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 96 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) / (yyvsp[0]);         
                acc = (yyval);
              }
#line 1409 "a.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 99 "a.y" /* yacc.c:1646  */
    { (yyval) = fmod ((yyvsp[-2]), (yyvsp[0]));         
                acc = (yyval);
              }
#line 1417 "a.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 102 "a.y" /* yacc.c:1646  */
    { (yyval) = -(yyvsp[0]);           
                acc = (yyval);
              }
#line 1425 "a.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 105 "a.y" /* yacc.c:1646  */
    { (yyval) = pow ((yyvsp[-2]), (yyvsp[0]));        
                acc = (yyval);
              }
#line 1433 "a.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 108 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);            
                acc = (yyval);
              }
#line 1441 "a.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 113 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]);  printf("= %d",r[temp-263]); }
#line 1447 "a.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]);  printf("= %d",temp); }
#line 1453 "a.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "a.y" /* yacc.c:1646  */
    { temp=(yyvsp[-1]); temp2=(yyvsp[0]); r[temp2-263] = r[temp-263]; }
#line 1459 "a.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 118 "a.y" /* yacc.c:1646  */
    { temp=(yyvsp[0]); r[temp-263] = (yyvsp[-1]); }
#line 1465 "a.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "a.y" /* yacc.c:1646  */
    { (yyval) = acc; }
#line 1471 "a.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 122 "a.y" /* yacc.c:1646  */
    { (yyval) = top;   }
#line 1477 "a.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 123 "a.y" /* yacc.c:1646  */
    { (yyval) = size;  }
#line 1483 "a.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 126 "a.y" /* yacc.c:1646  */
    { (yyval) = RA; }
#line 1489 "a.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "a.y" /* yacc.c:1646  */
    { (yyval) = RB; }
#line 1495 "a.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "a.y" /* yacc.c:1646  */
    { (yyval) = RC; }
#line 1501 "a.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 129 "a.y" /* yacc.c:1646  */
    { (yyval) = RD; }
#line 1507 "a.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 130 "a.y" /* yacc.c:1646  */
    { (yyval) = RE; }
#line 1513 "a.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 131 "a.y" /* yacc.c:1646  */
    { (yyval) = RF; }
#line 1519 "a.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 132 "a.y" /* yacc.c:1646  */
    { (yyval) = RG; }
#line 1525 "a.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 133 "a.y" /* yacc.c:1646  */
    { (yyval) = RH; }
#line 1531 "a.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 134 "a.y" /* yacc.c:1646  */
    { (yyval) = RI; }
#line 1537 "a.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 135 "a.y" /* yacc.c:1646  */
    { (yyval) = RJ; }
#line 1543 "a.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 136 "a.y" /* yacc.c:1646  */
    { (yyval) = RK; }
#line 1549 "a.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 137 "a.y" /* yacc.c:1646  */
    { (yyval) = RL; }
#line 1555 "a.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 138 "a.y" /* yacc.c:1646  */
    { (yyval) = RM; }
#line 1561 "a.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 139 "a.y" /* yacc.c:1646  */
    { (yyval) = RN; }
#line 1567 "a.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 140 "a.y" /* yacc.c:1646  */
    { (yyval) = RO; }
#line 1573 "a.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 141 "a.y" /* yacc.c:1646  */
    { (yyval) = RP; }
#line 1579 "a.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 142 "a.y" /* yacc.c:1646  */
    { (yyval) = RQ; }
#line 1585 "a.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 143 "a.y" /* yacc.c:1646  */
    { (yyval) = RR; }
#line 1591 "a.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 144 "a.y" /* yacc.c:1646  */
    { (yyval) = RS; }
#line 1597 "a.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 145 "a.y" /* yacc.c:1646  */
    { (yyval) = RT; }
#line 1603 "a.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 146 "a.y" /* yacc.c:1646  */
    { (yyval) = RU; }
#line 1609 "a.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 147 "a.y" /* yacc.c:1646  */
    { (yyval) = RV; }
#line 1615 "a.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "a.y" /* yacc.c:1646  */
    { (yyval) = RW; }
#line 1621 "a.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 149 "a.y" /* yacc.c:1646  */
    { (yyval) = RX; }
#line 1627 "a.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 150 "a.y" /* yacc.c:1646  */
    { (yyval) = RY; }
#line 1633 "a.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 151 "a.y" /* yacc.c:1646  */
    { (yyval) = RZ; }
#line 1639 "a.tab.c" /* yacc.c:1646  */
    break;


#line 1643 "a.tab.c" /* yacc.c:1646  */
=======
#line 69 "a.y" /* yacc.c:1646  */
    { printf ("\n> "); }
#line 1332 "a.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 72 "a.y" /* yacc.c:1646  */
    { printf ("acc = %.10g",acc);  }
#line 1338 "a.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 73 "a.y" /* yacc.c:1646  */
    { printf ("= %.10g", (yyvsp[-1])); }
#line 1344 "a.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 76 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); push(r[temp-263]); }
#line 1350 "a.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); push(temp); }
#line 1356 "a.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 78 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[-1]); r[temp-263] = pop(); }
#line 1362 "a.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);
                acc = (yyval);
              }
#line 1370 "a.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 84 "a.y" /* yacc.c:1646  */
    {
    (yyval) = (yyvsp[0]);
    acc = (yyval);
  }
#line 1379 "a.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 88 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[0]);
                acc = (yyval);
              }
#line 1387 "a.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 91 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) + (yyvsp[0]);      
                    acc = (yyval);
                  }
#line 1395 "a.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 94 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) - (yyvsp[0]);      
                    acc = (yyval);
                  }
#line 1403 "a.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 97 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) * (yyvsp[0]);         
                acc = (yyval);
              }
#line 1411 "a.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 100 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-2]) / (yyvsp[0]);         
                acc = (yyval);
              }
#line 1419 "a.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 103 "a.y" /* yacc.c:1646  */
    { (yyval) = fmod ((yyvsp[-2]), (yyvsp[0]));         
                acc = (yyval);
              }
#line 1427 "a.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 106 "a.y" /* yacc.c:1646  */
    { (yyval) = -(yyvsp[0]);           
                acc = (yyval);
              }
#line 1435 "a.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "a.y" /* yacc.c:1646  */
    { (yyval) = pow ((yyvsp[-2]), (yyvsp[0]));        
                acc = (yyval);
              }
#line 1443 "a.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 112 "a.y" /* yacc.c:1646  */
    { (yyval) = (yyvsp[-1]);            
                acc = (yyval);
              }
#line 1451 "a.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 115 "a.y" /* yacc.c:1646  */
    {
      temp = (yyvsp[-2]);
      temp2 = (yyvsp[0]);
      (yyval) = bitwistop(temp, temp2, "and");
      acc = (yyval);
  }
#line 1462 "a.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 122 "a.y" /* yacc.c:1646  */
    {
      temp = (yyvsp[-2]);
      temp2 = (yyvsp[0]);
      (yyval) = bitwistop(temp, temp2, "or");
      acc = (yyval);
  }
#line 1473 "a.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 129 "a.y" /* yacc.c:1646  */
    {
      temp = (yyvsp[0]);
      (yyval) = bitwistop(temp, 0, "not");
      acc = (yyval);
  }
#line 1483 "a.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 136 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]);  printf("= %d",r[temp-263]); }
#line 1489 "a.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 137 "a.y" /* yacc.c:1646  */
    { temp = (yyvsp[0]);  printf("= %d",temp); }
#line 1495 "a.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 140 "a.y" /* yacc.c:1646  */
    { temp=(yyvsp[-1]); temp2=(yyvsp[0]); r[temp-263] = r[temp2-263]; }
#line 1501 "a.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 141 "a.y" /* yacc.c:1646  */
    { temp=(yyvsp[-1]); r[temp-263] = (yyvsp[0]); }
#line 1507 "a.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 144 "a.y" /* yacc.c:1646  */
    { (yyval) = acc; }
#line 1513 "a.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "a.y" /* yacc.c:1646  */
    { (yyval) = top;   }
#line 1519 "a.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 146 "a.y" /* yacc.c:1646  */
    { (yyval) = size;  }
#line 1525 "a.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 149 "a.y" /* yacc.c:1646  */
    { (yyval) = RA; }
#line 1531 "a.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 150 "a.y" /* yacc.c:1646  */
    { (yyval) = RB; }
#line 1537 "a.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 151 "a.y" /* yacc.c:1646  */
    { (yyval) = RC; }
#line 1543 "a.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 152 "a.y" /* yacc.c:1646  */
    { (yyval) = RD; }
#line 1549 "a.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 153 "a.y" /* yacc.c:1646  */
    { (yyval) = RE; }
#line 1555 "a.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 154 "a.y" /* yacc.c:1646  */
    { (yyval) = RF; }
#line 1561 "a.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 155 "a.y" /* yacc.c:1646  */
    { (yyval) = RG; }
#line 1567 "a.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 156 "a.y" /* yacc.c:1646  */
    { (yyval) = RH; }
#line 1573 "a.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 157 "a.y" /* yacc.c:1646  */
    { (yyval) = RI; }
#line 1579 "a.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 158 "a.y" /* yacc.c:1646  */
    { (yyval) = RJ; }
#line 1585 "a.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 159 "a.y" /* yacc.c:1646  */
    { (yyval) = RK; }
#line 1591 "a.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "a.y" /* yacc.c:1646  */
    { (yyval) = RL; }
#line 1597 "a.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "a.y" /* yacc.c:1646  */
    { (yyval) = RM; }
#line 1603 "a.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 162 "a.y" /* yacc.c:1646  */
    { (yyval) = RN; }
#line 1609 "a.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 163 "a.y" /* yacc.c:1646  */
    { (yyval) = RO; }
#line 1615 "a.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 164 "a.y" /* yacc.c:1646  */
    { (yyval) = RP; }
#line 1621 "a.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 165 "a.y" /* yacc.c:1646  */
    { (yyval) = RQ; }
#line 1627 "a.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "a.y" /* yacc.c:1646  */
    { (yyval) = RR; }
#line 1633 "a.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 167 "a.y" /* yacc.c:1646  */
    { (yyval) = RS; }
#line 1639 "a.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 168 "a.y" /* yacc.c:1646  */
    { (yyval) = RT; }
#line 1645 "a.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 169 "a.y" /* yacc.c:1646  */
    { (yyval) = RU; }
#line 1651 "a.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 170 "a.y" /* yacc.c:1646  */
    { (yyval) = RV; }
#line 1657 "a.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 171 "a.y" /* yacc.c:1646  */
    { (yyval) = RW; }
#line 1663 "a.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 172 "a.y" /* yacc.c:1646  */
    { (yyval) = RX; }
#line 1669 "a.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 173 "a.y" /* yacc.c:1646  */
    { (yyval) = RY; }
#line 1675 "a.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 174 "a.y" /* yacc.c:1646  */
    { (yyval) = RZ; }
#line 1681 "a.tab.c" /* yacc.c:1646  */
    break;


#line 1685 "a.tab.c" /* yacc.c:1646  */
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea
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
#line 154 "a.y" /* yacc.c:1906  */
=======
#line 177 "a.y" /* yacc.c:1906  */
>>>>>>> e1799cc1a11ec49a99ec991fe3fe3b603edf08ea

/* The lexical analyzer returns a double floating point
   number on the stack and the token NUM, or the numeric code
   of the character read if not a number.  It skips all blanks
   and tabs, and returns 0 for end-of-input.  */

#include <ctype.h>
int
yylex (void)
{
  int c;

  /* Skip white space.  */
  while ((c = getchar ()) == ' ' || c == '\t')
    continue;
  /* Process operation */
  if (c == 'S'){
    if(getchar () == 'H')
      if(getchar () == 'O')
        if(getchar () == 'W')
          return SHOW;
  }
  if (c == 'L'){
    if(getchar () == 'O')
      if(getchar () == 'A')
        if(getchar () == 'D')
          return LOAD;
  }
  if (c == 'P'){
    c = getchar ();
    if(c == 'U'){
      if(getchar () == 'S')
        if(getchar () == 'H')
          return PUSH;
    }
    else if(c == 'O')
      if(getchar () == 'P')
        return POP;
  }
  /* Process bitwist operator */
  if(c == 'A'){
    if(getchar() == 'N')
      if(getchar() == 'D')
        return AND;
  }
  if(c == 'O'){
    if(getchar() == 'R')
      return OR;
  }
  if(c == 'N'){
    if(getchar() == 'O')
      if(getchar() == 'T')
        return NOT;
  }
  /* Process register */
  if (c == '$'){
    if((c = getchar ()) == 'a'){
      if(getchar () == 'c')
        if(getchar () == 'c')
          return ACC;
    }
    if(c == 'r'){
      c = getchar ();
      switch (c){
        case 'A' : return RA; break;
        case 'B' : return RB; break;
        case 'C' : return RC; break;
        case 'D' : return RD; break;
        case 'E' : return RE; break;
        case 'F' : return RF; break;
        case 'G' : return RG; break;
        case 'H' : return RH; break;
        case 'I' : return RI; break;
        case 'J' : return RJ; break;
        case 'K' : return RK; break;
        case 'L' : return RL; break;
        case 'M' : return RM; break;
        case 'N' : return RN; break;
        case 'O' : return RO; break;
        case 'P' : return RP; break;
        case 'Q' : return RQ; break;
        case 'R' : return RR; break;
        case 'S' : return RS; break;
        case 'T' : return RT; break;
        case 'U' : return RU; break;
        case 'V' : return RV; break;
        case 'W' : return RW; break;
        case 'X' : return RX; break;
        case 'Y' : return RY; break;
        case 'Z' : return RZ; break;
      }
    }
    if( c == 's'){
      if(getchar () == 'i')
        if(getchar () == 'z')
          if(getchar () == 'e')
            return SIZE;
    }
    if( c == 't'){
      if(getchar () == 'o')
        if(getchar () == 'p')
          return TOP;
    }
  }
  /* Process numbers.  */
  if (c == '.' || isdigit (c))
    {
      ungetc (c, stdin);
      scanf ("%lf", &yylval); 
      return NUM;
    }
  /* Return end-of-input.  */
  if (c == EOF)
    return 0;
  /* Return a single char.  */
  return c;
}
void
push (int data)
{
  stack[topStack++] = data;
  top = data;
  size++;
}

int 
pop (void)
{
  acc = stack[--topStack];
  top = stack[topStack];
  size--;
  return acc;
}

int bitwistop(int num1, int num2, char *op){
  int ret;
  if(op == "and"){
    ret = num1 & num2;
  }
  else if(op == "or"){
    ret = num1 | num2;
  }
  else if(op == "not"){
    ret = ~num1;
  }
  return ret;
}

int hextodec(char *hex){
  int ret;
  return ret;
}

int
main (void)
{
  printf("> ");
  return yyparse ();
}
#include <stdio.h>

/* Called by yyparse on error.  */
void
yyerror (char const *s)
{
  fprintf (stderr, "%s\n", s);
}
