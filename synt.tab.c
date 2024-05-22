
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "synt.y"
  
    #include<string.h>
      #include "routine.h"
        #include"pile.h"
      /*   #include"code.h" */
      
       
    int nb_ligne=1,col=1;
    int op;
    int constante;
    char Type_Idf[20];
      int qc=0;
    int deb_else=0;
    int fin_if;
    int qc_bz=0;
    int qc_if[10000];
    int op;
    int j=-1;
    int J=-1;
    int Q=-1;
    int K;
    char quad1 [20];
    char Chaine[20];
    char Chaine1[20];
    char Chaine2[20];
    char Chaine3[20];
    int S=-1;
    int bzw[10000];
    int brw[10000];
    int finw[10000];
    int debw[10000];
    int op1,op2,tmp;
    


/* Line 189 of yacc.c  */
#line 109 "synt.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_VAR_GLOBAL = 258,
     mc_DECLARATION = 259,
     mc_INSTRUCTION = 260,
     IDF = 261,
     INTEGER = 262,
     FLOAT = 263,
     mc_INTEGER = 264,
     mc_FLOAT = 265,
     mc_CONST = 266,
     WHILE = 267,
     FOR = 268,
     IF = 269,
     ELSE = 270,
     and = 271,
     or = 272,
     not = 273,
     READ = 274,
     WRITE = 275,
     feracc = 276,
     ouvracc = 277,
     ferc = 278,
     ouvrc = 279,
     ouvrp = 280,
     ferp = 281,
     vrg = 282,
     pvg = 283,
     points = 284,
     STRING = 285,
     aff = 286,
     add = 287,
     sous = 288,
     mul = 289,
     divs = 290,
     sup = 291,
     supEg = 292,
     inf = 293,
     infEg = 294,
     egl = 295,
     diff = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 35 "synt.y"
  
    char chaine[20];
    int entier;
    float reel;



/* Line 214 of yacc.c  */
#line 194 "synt.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "synt.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    16,    20,    21,    23,    25,    27,    30,
      34,    37,    42,    47,    52,    55,    60,    72,    78,    84,
      94,    98,   101,   104,   107,   110,   111,   113,   115,   118,
     120,   122,   125,   128,   129,   133,   134,   138,   139,   143,
     144,   148,   149,   153,   154,   158,   163,   167,   171,   175,
     179,   183,   186,   191,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   216,   218
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      43,     0,    -1,     3,    22,    44,    21,     4,    22,    44,
      21,     5,    22,    53,    21,    -1,    45,    46,    44,    -1,
      -1,     9,    -1,    10,    -1,    11,    -1,     6,    28,    -1,
       6,    27,    46,    -1,    47,    28,    -1,     6,    31,     7,
      28,    -1,     6,    31,     8,    28,    -1,     6,    24,     7,
      23,    -1,    49,    52,    -1,    12,    25,    55,    26,    -1,
      13,    25,     6,    29,     7,    29,     7,    29,     6,    26,
      52,    -1,    19,    25,     6,    26,    28,    -1,    20,    25,
      30,    26,    28,    -1,    20,    25,    30,    27,     6,    27,
      30,    26,    28,    -1,    22,    53,    21,    -1,    54,    53,
      -1,    50,    53,    -1,    48,    53,    -1,    66,    53,    -1,
      -1,    51,    -1,    64,    -1,    18,    55,    -1,    56,    -1,
      69,    -1,    18,     6,    -1,    72,    57,    -1,    -1,    36,
      58,    72,    -1,    -1,    37,    59,    72,    -1,    -1,    38,
      60,    72,    -1,    -1,    39,    61,    72,    -1,    -1,    40,
      62,    72,    -1,    -1,    41,    63,    72,    -1,     6,    31,
      72,    28,    -1,    72,    32,    72,    -1,    72,    33,    72,
      -1,    72,    34,    72,    -1,    72,    35,    72,    -1,    67,
      15,    52,    -1,    68,    52,    -1,    14,    25,    55,    26,
      -1,    72,    70,    72,    -1,    16,    -1,    17,    -1,     6,
      -1,     7,    -1,     8,    -1,    65,    -1,    64,    -1,    56,
      -1,     6,    24,     6,    23,    -1,    71,    -1,    25,    71,
      26,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    54,    54,    60,    60,    63,    64,    64,    67,    70,
      70,    70,    70,    73,    77,    97,   110,   112,   112,   112,
     114,   117,   117,   117,   117,   117,   119,   119,   122,   122,
     122,   122,   124,   126,   126,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   136,   145,   154,   162,   170,
     179,   191,   203,   214,   216,   216,   220,   227,   236,   237,
     237,   237,   238,   240,   240
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_VAR_GLOBAL", "mc_DECLARATION",
  "mc_INSTRUCTION", "IDF", "INTEGER", "FLOAT", "mc_INTEGER", "mc_FLOAT",
  "mc_CONST", "WHILE", "FOR", "IF", "ELSE", "and", "or", "not", "READ",
  "WRITE", "feracc", "ouvracc", "ferc", "ouvrc", "ouvrp", "ferp", "vrg",
  "pvg", "points", "STRING", "aff", "add", "sous", "mul", "divs", "sup",
  "supEg", "inf", "infEg", "egl", "diff", "$accept", "S", "DEC", "TYPE",
  "DEC_IDF", "DEC_TAB", "boucle_while", "D", "boucle_for", "entree_sortie",
  "bloc_instructions", "INST", "INST_Basic", "condition", "COND_CMP",
  "OP_CMP", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "AFFECTATION",
  "INST_AR", "INST_IF", "B", "A", "COND_LOG", "OP_LOG", "element",
  "OPERANDE", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    45,    45,    46,    46,
      46,    46,    46,    47,    48,    49,    50,    51,    51,    51,
      52,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      55,    55,    56,    58,    57,    59,    57,    60,    57,    61,
      57,    62,    57,    63,    57,    64,    65,    65,    65,    65,
      66,    67,    68,    69,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    72
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    12,     3,     0,     1,     1,     1,     2,     3,
       2,     4,     4,     4,     2,     4,    11,     5,     5,     9,
       3,     2,     2,     2,     2,     0,     1,     1,     2,     1,
       1,     2,     2,     0,     3,     0,     3,     0,     3,     0,
       3,     0,     3,     0,     3,     4,     3,     3,     3,     3,
       3,     2,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     1,     5,     6,     7,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     8,     0,     3,
      10,     4,     0,     9,     0,     0,     0,    13,    11,    12,
       0,     0,    25,     0,     0,     0,     0,     0,     0,    25,
       0,    25,    26,     0,    25,    27,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    25,    14,    22,     2,
      21,    24,     0,    51,    56,    57,    58,     0,    61,    60,
      59,    63,     0,     0,     0,    61,    30,     0,     0,     0,
       0,     0,     0,    50,     0,    63,     0,    45,     0,     0,
       0,     0,    33,    35,    37,    39,    41,    43,    32,    56,
      28,    15,    54,    55,     0,     0,    52,     0,     0,     0,
      20,     0,    64,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,    53,     0,    17,    18,     0,    62,    34,
      36,    38,    40,    42,    44,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     8,     9,    12,    13,    39,    40,    41,    42,
      57,    43,    44,    74,    68,    98,   117,   118,   119,   120,
     121,   122,    69,    70,    46,    47,    48,    76,   104,    71,
      77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -49
static const yytype_int16 yypact[] =
{
      -2,   -18,     7,     8,   -49,   -49,   -49,   -49,    -8,     9,
      29,    98,     8,    33,    15,    56,     9,   -49,    32,   -49,
     -49,     8,    46,   -49,    50,    54,    27,   -49,   -49,   -49,
      75,    72,    79,    92,    86,    99,   102,   103,   105,    79,
      78,    79,   -49,   110,    79,   -49,    79,   117,    78,    52,
      28,   127,    28,   128,   106,   -49,    79,   -49,   -49,   -49,
     -49,   -49,    78,   -49,   -15,   -49,   -49,    52,   -49,   -49,
     -49,   -49,    69,    58,   109,   111,   -49,   -11,   112,   113,
     114,    41,   121,   -49,   132,   118,    80,   -49,    52,    52,
      52,    52,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    25,
     -49,   -49,   -49,   -49,    52,   136,   -49,   119,   120,   139,
     -49,   123,   -49,    20,    20,   -49,   -49,    52,    52,    52,
      52,    52,    52,    80,   122,   -49,   -49,   125,   -49,    55,
      55,    55,    55,    55,    55,   142,   124,   126,   130,   144,
     129,   133,   -49,    78,   -49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -49,   -49,    -9,   -49,   137,   -49,   -49,   -49,   -49,   -49,
     -48,    40,   -49,   -41,   -42,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     6,   -49,   -49,   -49,   -49,   -49,   -49,    91,
     -47
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -32
static const yytype_int16 yytable[] =
{
      63,     1,    72,    19,     3,   102,   103,     4,    75,    84,
      75,    79,    26,    10,    83,    11,    49,     5,     6,     7,
      86,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    75,   100,    14,    64,    65,    66,    21,    45,    24,
      25,   113,   114,   115,   116,    45,    73,    45,    30,    84,
      45,   -31,    45,    67,    90,    91,    49,   123,    64,    65,
      66,    20,    45,    22,    99,    65,    66,   108,   109,    27,
     129,   130,   131,   132,   133,   134,    73,    67,    28,    55,
      31,    58,    29,    67,    60,    33,    61,    88,    89,    90,
      91,    34,    35,    36,    32,   144,    82,    87,    37,    38,
      56,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    50,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    15,    49,    51,    16,    17,    52,    53,    18,
      54,    59,    62,    78,    80,   101,    81,   -29,   111,   106,
     107,   105,   110,   124,   112,   127,   128,   125,   126,   137,
     141,   135,   136,    23,   138,   139,   140,   142,    85,   143
};

static const yytype_uint8 yycheck[] =
{
      48,     3,    49,    12,    22,    16,    17,     0,    50,    24,
      52,    52,    21,    21,    62,     6,    31,     9,    10,    11,
      67,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    73,    73,     4,     6,     7,     8,    22,    32,     7,
       8,    88,    89,    90,    91,    39,    18,    41,    21,    24,
      44,    26,    46,    25,    34,    35,    31,   104,     6,     7,
       8,    28,    56,     7,     6,     7,     8,    26,    27,    23,
     117,   118,   119,   120,   121,   122,    18,    25,    28,    39,
       5,    41,    28,    25,    44,     6,    46,    32,    33,    34,
      35,    12,    13,    14,    22,   143,    56,    28,    19,    20,
      22,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    25,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    24,    31,    25,    27,    28,    25,    25,    31,
      25,    21,    15,     6,     6,    26,    30,    26,     6,    26,
      26,    29,    21,     7,    26,     6,    23,    28,    28,     7,
       6,    29,    27,    16,    30,    29,    26,    28,    67,    26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    43,    22,     0,     9,    10,    11,    44,    45,
      21,     6,    46,    47,     4,    24,    27,    28,    31,    44,
      28,    22,     7,    46,     7,     8,    44,    23,    28,    28,
      21,     5,    22,     6,    12,    13,    14,    19,    20,    48,
      49,    50,    51,    53,    54,    64,    66,    67,    68,    31,
      25,    25,    25,    25,    25,    53,    22,    52,    53,    21,
      53,    53,    15,    52,     6,     7,     8,    25,    56,    64,
      65,    71,    72,    18,    55,    56,    69,    72,     6,    55,
       6,    30,    53,    52,    24,    71,    72,    28,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    57,     6,
      55,    26,    16,    17,    70,    29,    26,    26,    26,    27,
      21,     6,    26,    72,    72,    72,    72,    58,    59,    60,
      61,    62,    63,    72,     7,    28,    28,     6,    23,    72,
      72,    72,    72,    72,    72,    29,    27,     7,    30,    29,
      26,     6,    28,    26,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 54 "synt.y"
    { printf("\n*****************************************************************\n");
            printf("                 Code Correct Syntaxiquement\n");
            printf("*****************************************************************\n");
            YYACCEPT;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 63 "synt.y"
    {strcpy(Type_Idf , (yyvsp[(1) - (1)].chaine));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 64 "synt.y"
    {strcpy(Type_Idf , (yyvsp[(1) - (1)].chaine));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 64 "synt.y"
    {constante=1;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 67 "synt.y"
    {
    if(DOUBLE_DEC((yyvsp[(1) - (2)].chaine))==1) {printf("erreur semantique: double declaration de %s a la ligne %d\n",(yyvsp[(1) - (2)].chaine),nb_ligne);}
    else {INSERTION_TYPE_IDF((yyvsp[(1) - (2)].chaine) ,Type_Idf);}  ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 73 "synt.y"
    {
    if(DOUBLE_DEC((yyvsp[(1) - (4)].chaine))==1) {printf("erreur semantique: double declaration de %s a la ligne %d\n",(yyvsp[(1) - (4)].chaine),nb_ligne);}
    else {INSERTION_TYPE_IDF((yyvsp[(1) - (4)].chaine) ,Type_Idf);}
; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 77 "synt.y"
    { // probleme dans le BZ
  AJOUTER_QUAD("BR", "deb_while","vide","vide");/* maj par debw */
  S++;
   brw[S]=qc;
   Q++;
  finw[Q]=qc+1;

    K=0;
    while(K<=J ){ /* le 1er debw mis a jour le dernier brw */
         sprintf(Chaine,"%d",debw[K]); 
          MODIFIER_QUAD(brw[J-K],2,Chaine);
          K++;
    }
    for(K=0;K<=Q;K++){
        sprintf(Chaine,"%d",finw[K]);
        MODIFIER_QUAD(bzw[Q-K],2,Chaine);  
    }
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 97 "synt.y"
    {
    AJOUTER_QUAD("oper.cond.while", "op1.con","op2.cond","temp.cond");
     J++;
        debw[J]=qc;
    AJOUTER_QUAD("BZ", "fin_while","temp.cond","vide");/* debw */
    Q++;
     bzw[Q]=qc;
    
  
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 126 "synt.y"
    {op=1;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "synt.y"
    {
	strcpy(quad1,"BLE");
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 129 "synt.y"
    {op=1;strcpy(quad1,"BL");;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 130 "synt.y"
    {op=1;strcpy(quad1,"BGE");;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 131 "synt.y"
    {op=1;strcpy(quad1,"BG");;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 132 "synt.y"
    {op=1;strcpy(quad1,"BNZ");;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 133 "synt.y"
    {op=1;strcpy(quad1,"BZ");;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 136 "synt.y"
    {
   
 op1=Depiler();
 sprintf(Chaine,"%d",op1);    
  INSERTION_VALUE_IDF((yyvsp[(1) - (4)].chaine),Chaine); 
   AJOUTER_QUAD("=",Chaine ,"vide",(yyvsp[(1) - (4)].chaine));
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 145 "synt.y"
    {op=1;
   op2=Depiler();op1=Depiler();  tmp = op1+op2;
    Empiler(tmp);  
     sprintf(Chaine1,"%d",op1);
     sprintf(Chaine2,"%d",op2);
    
       AJOUTER_QUAD("+", Chaine1,Chaine2,Chaine3);

;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 154 "synt.y"
    {op=1;
   op2=Depiler();op1=Depiler();  tmp = op1-op2;
    Empiler(tmp);  
     sprintf(Chaine1,"%d",op1);
     sprintf(Chaine2,"%d",op2);
     sprintf(Chaine3,"%d",tmp);
       AJOUTER_QUAD("-", Chaine1,Chaine2,Chaine3);
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 162 "synt.y"
    {op=1;
   op2=Depiler();op1=Depiler();  tmp = op1*op2;
    Empiler(tmp);  
     sprintf(Chaine1,"%d",op1);
     sprintf(Chaine2,"%d",op2);
     sprintf(Chaine3,"%d",tmp);
       AJOUTER_QUAD("*", Chaine1,Chaine2,Chaine3);
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 170 "synt.y"
    {op=0;
   op2=Depiler();op1=Depiler();  tmp = op1/op2;
    Empiler(tmp);  
     sprintf(Chaine1,"%d",op1);
     sprintf(Chaine2,"%d",op2);
     sprintf(Chaine3,"%d",tmp);
       AJOUTER_QUAD("/", Chaine1,Chaine2,Chaine3);
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 179 "synt.y"
    {  /* R3 */
     fin_if=qc+1;
    
       if(j>=0) {  
     for(K=0;K<=j;K++){
             sprintf(Chaine,"%d",fin_if);
        MODIFIER_QUAD(qc_if[K],2,Chaine);
           
    }
    }
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 191 "synt.y"
    {  /* R2 */
                j++;
        qc_if[j]=qc+1;
    AJOUTER_QUAD("BR", "fin_if","vide","vide");
    deb_else=qc+1;
    
    //mettre a jour le quadr BZ de A (R1)
    sprintf(Chaine,"%d",deb_else);
    MODIFIER_QUAD(qc_bz,2,Chaine);
      
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 203 "synt.y"
    { /* R1 */
      // creer le quadr BZ  
    /* AJOUTER_QUAD("oper.cond.if", "op1.con","op2.cond","temp.cond"); */
  
  
    AJOUTER_QUAD(quad1 , "deb_else","vide","temp.cond");
    //sauvegarder le qc
    qc_bz=qc;
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 220 "synt.y"
    {
    tmp=GET_VALUE_IDF((yyvsp[(1) - (1)].chaine));
    Empiler(tmp);  
    if(NOT_DECLARED((yyvsp[(1) - (1)].chaine))==1){
    printf("\nerreur semantique , idf non declaree a la ligne %d\n",nb_ligne);
}
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 227 "synt.y"
    {
  
    Empiler((yyvsp[(1) - (1)].entier));  
   
     
    if(op==0 && (yyvsp[(1) - (1)].entier)==0){
        printf("erreur semantique: division par zero a la ligne %d\n",nb_ligne);
    } 
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 236 "synt.y"
    {/* Empiler($1); */;}
    break;



/* Line 1455 of yacc.c  */
#line 1819 "synt.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 243 "synt.y"


int yyerror(char *msg)
{ printf("%s ERROR ! :Erreur Syntaxique a ligne %d a colonne %d \n ", nb_ligne,col);
 }
main () 
{
    yyparse();
  /*   AFFICHER_TABLE_KEY();
    AFFICHER_TABLE_OP(); 
    AFFICHER_TABLE_VAR(); */
   
    AFFICHER_QUAD();
   /*   assembler();  */
}
yywrap(){} 
