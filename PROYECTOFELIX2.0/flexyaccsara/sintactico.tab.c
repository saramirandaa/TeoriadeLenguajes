/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAM = 258,
     LPAREN = 259,
     RPAREN = 260,
     SEMICOLON = 261,
     DOT = 262,
     AND = 263,
     OR_OP = 264,
     EQUAL_OP = 265,
     NOT_EQUAL_OP = 266,
     LESS_THAN_OP = 267,
     GREATER_THAN_OP = 268,
     LESS_THAN_EQUAL_OP = 269,
     GREATER_THAN_EQUAL_OP = 270,
     ADD_OP = 271,
     SUB_OP = 272,
     MUL_OP = 273,
     DIV_OP = 274,
     MOD_OP = 275,
     DIV_KEYWORD = 276,
     MOD_KEYWORD = 277,
     COMMA = 278,
     VAR = 279,
     CONST = 280,
     COLON = 281,
     ARRAY = 282,
     LBRACKET = 283,
     RBRACKET = 284,
     OF = 285,
     INTEGER_TYPE = 286,
     REAL_TYPE = 287,
     STRING_TYPE = 288,
     BOOLEAN_TYPE = 289,
     FUNCTION = 290,
     PROCEDURE = 291,
     TBEGIN = 292,
     END = 293,
     WHILE = 294,
     FOR = 295,
     DO = 296,
     READ = 297,
     READLN = 298,
     WRITE = 299,
     WRITELN = 300,
     IF = 301,
     THEN = 302,
     ELSE = 303,
     E_MINUS = 304,
     E_MAYUS = 305,
     QUOTE = 306,
     DOLLAR = 307,
     AMPERSAND = 308,
     PERCENT = 309,
     HASH = 310,
     ASSIGN_OP = 311,
     NOT = 312,
     TO = 313,
     DOWNTO = 314,
     IDENTIFICADOR_ = 315,
     DIGITO = 316,
     DIGIT_NON_CERO = 317
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define LPAREN 259
#define RPAREN 260
#define SEMICOLON 261
#define DOT 262
#define AND 263
#define OR_OP 264
#define EQUAL_OP 265
#define NOT_EQUAL_OP 266
#define LESS_THAN_OP 267
#define GREATER_THAN_OP 268
#define LESS_THAN_EQUAL_OP 269
#define GREATER_THAN_EQUAL_OP 270
#define ADD_OP 271
#define SUB_OP 272
#define MUL_OP 273
#define DIV_OP 274
#define MOD_OP 275
#define DIV_KEYWORD 276
#define MOD_KEYWORD 277
#define COMMA 278
#define VAR 279
#define CONST 280
#define COLON 281
#define ARRAY 282
#define LBRACKET 283
#define RBRACKET 284
#define OF 285
#define INTEGER_TYPE 286
#define REAL_TYPE 287
#define STRING_TYPE 288
#define BOOLEAN_TYPE 289
#define FUNCTION 290
#define PROCEDURE 291
#define TBEGIN 292
#define END 293
#define WHILE 294
#define FOR 295
#define DO 296
#define READ 297
#define READLN 298
#define WRITE 299
#define WRITELN 300
#define IF 301
#define THEN 302
#define ELSE 303
#define E_MINUS 304
#define E_MAYUS 305
#define QUOTE 306
#define DOLLAR 307
#define AMPERSAND 308
#define PERCENT 309
#define HASH 310
#define ASSIGN_OP 311
#define NOT 312
#define TO 313
#define DOWNTO 314
#define IDENTIFICADOR_ 315
#define DIGITO 316
#define DIGIT_NON_CERO 317




/* Copy the first part of user declarations.  */


#include <stdio.h>
#include <stdlib.h>
extern int yylex(void);
extern void yyerror(const char *s);
extern FILE *yyin;

extern int yylineno;
int yydebug = 1;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */


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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    14,    16,    18,    20,    22,    24,    26,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      50,    52,    54,    61,    62,    69,    76,    83,    84,    86,
      89,    91,   101,   103,   105,   107,   109,   113,   114,   119,
     126,   131,   135,   136,   140,   146,   150,   152,   153,   155,
     159,   161,   163,   165,   167,   169,   171,   173,   178,   185,
     192,   197,   202,   209,   216,   221,   226,   233,   240,   245,
     250,   254,   257,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   299,   306,   310,   312,   314,   316,   321,   323,
     328,   332,   334,   338,   340,   343,   345,   349,   351,   355,
     357,   361,   363,   367,   369,   373,   378,   380,   385,   387,
     389,   391,   394,   398,   400,   402,   403,   406,   409,   412,
     413,   418,   424,   428
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,     3,    65,     4,    69,     5,     6,    70,
      76,    81,     7,    -1,    60,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      21,    -1,    22,    -1,    65,    -1,    69,    23,    65,    -1,
      71,    -1,    72,    -1,    71,    24,    69,    26,    74,     6,
      -1,    -1,    72,    25,    65,    10,   107,     6,    -1,    72,
      25,    65,    10,   110,     6,    -1,    72,    25,    65,    10,
      88,     6,    -1,    -1,    61,    -1,    61,    73,    -1,    75,
      -1,    27,    28,    73,     7,     7,    73,    29,    30,    75,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    76,
      77,     6,    -1,    -1,    78,    70,    76,    81,    -1,    35,
      65,    79,    26,    75,     6,    -1,    36,    65,    79,     6,
      -1,     4,    80,     5,    -1,    -1,    69,    26,    74,    -1,
      80,     6,    69,    26,    74,    -1,    37,    82,    38,    -1,
      83,    -1,    -1,    84,    -1,    83,     6,    84,    -1,    92,
      -1,    95,    -1,    81,    -1,    91,    -1,    85,    -1,    86,
      -1,    87,    -1,    39,    96,    41,    84,    -1,    40,    93,
      58,   102,    41,    84,    -1,    40,    93,    59,   102,    41,
      84,    -1,    42,     4,    65,     5,    -1,    43,     4,    65,
       5,    -1,    44,     4,    88,    23,    65,     5,    -1,    45,
       4,    88,    23,    65,     5,    -1,    44,     4,    88,     5,
      -1,    45,     4,    88,     5,    -1,    44,     4,    88,    23,
     102,     5,    -1,    45,     4,    88,    23,   102,     5,    -1,
      44,     4,    65,     5,    -1,    45,     4,    65,     5,    -1,
      51,    89,    51,    -1,    89,    90,    -1,    -1,    60,    -1,
      52,    -1,    53,    -1,    19,    -1,    16,    -1,    17,    -1,
      18,    -1,    54,    -1,    10,    -1,    26,    -1,    28,    -1,
      29,    -1,    13,    -1,    12,    -1,     6,    -1,    23,    -1,
       7,    -1,    55,    -1,    46,    96,    47,    84,    -1,    46,
      96,    47,    84,    48,    84,    -1,    94,    56,   102,    -1,
      92,    -1,    94,    -1,    65,    -1,    65,    28,   102,    29,
      -1,    65,    -1,    65,     4,   101,     5,    -1,    96,     9,
      97,    -1,    97,    -1,    97,     8,    98,    -1,    98,    -1,
      57,    98,    -1,    99,    -1,     4,    96,     5,    -1,   100,
      -1,   102,    66,   102,    -1,   102,    -1,   101,    23,   102,
      -1,   103,    -1,   102,    67,   103,    -1,   105,    -1,   103,
      68,   105,    -1,    65,     4,   101,     5,    -1,    65,    -1,
      65,    28,   102,    29,    -1,   104,    -1,   107,    -1,   110,
      -1,   106,   105,    -1,     4,   102,     5,    -1,    16,    -1,
      17,    -1,    -1,   106,   108,    -1,    62,   109,    -1,   109,
      61,    -1,    -1,   106,   108,     7,   108,    -1,   106,   108,
       7,   108,   111,    -1,    49,   106,   108,    -1,    50,   106,
     108,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    30,    33,    34,    35,    36,    37,    38,
      39,    40,    44,    45,    49,    50,    51,    52,    56,    57,
      61,    62,    66,    67,    71,    72,    73,    74,    78,    79,
      83,    84,    88,    89,    90,    91,    95,    96,   100,   104,
     105,   109,   110,   114,   115,   119,   123,   124,   128,   129,
     133,   134,   135,   136,   137,   138,   139,   143,   144,   145,
     149,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     165,   169,   170,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   186,   186,   187,   187,
     187,   191,   192,   196,   200,   201,   205,   206,   210,   210,
     214,   215,   219,   220,   224,   225,   229,   230,   234,   238,
     239,   243,   244,   248,   249,   253,   257,   258,   259,   260,
     261,   262,   263,   267,   268,   269,   273,   276,   280,   281,
     285,   286,   290,   291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "LPAREN", "RPAREN",
  "SEMICOLON", "DOT", "AND", "OR_OP", "EQUAL_OP", "NOT_EQUAL_OP",
  "LESS_THAN_OP", "GREATER_THAN_OP", "LESS_THAN_EQUAL_OP",
  "GREATER_THAN_EQUAL_OP", "ADD_OP", "SUB_OP", "MUL_OP", "DIV_OP",
  "MOD_OP", "DIV_KEYWORD", "MOD_KEYWORD", "COMMA", "VAR", "CONST", "COLON",
  "ARRAY", "LBRACKET", "RBRACKET", "OF", "INTEGER_TYPE", "REAL_TYPE",
  "STRING_TYPE", "BOOLEAN_TYPE", "FUNCTION", "PROCEDURE", "TBEGIN", "END",
  "WHILE", "FOR", "DO", "READ", "READLN", "WRITE", "WRITELN", "IF", "THEN",
  "ELSE", "E_MINUS", "E_MAYUS", "QUOTE", "DOLLAR", "AMPERSAND", "PERCENT",
  "HASH", "ASSIGN_OP", "NOT", "TO", "DOWNTO", "IDENTIFICADOR_", "DIGITO",
  "DIGIT_NON_CERO", "$accept", "programa", "identificador", "relop",
  "addop", "mulop", "identificador_lista", "declaraciones",
  "declaraciones_variables", "declaraciones_constantes", "int_num", "tipo",
  "estandar_tipo", "subprograma_declaraciones", "subprograma_declaracion",
  "subprograma_encabezado", "argumentos", "parametros_lista",
  "instruccion_compuesta", "instrucciones_opcionales",
  "instrucciones_lista", "instrucciones", "repeticion_instruccion",
  "lectura_instruccion", "escritura_instruccion", "constante_cadena",
  "cadena", "caracter_alfanumerico", "if_instruccion",
  "variable_asignacion", "for_asignacion", "variable",
  "procedure_instruccion", "relop_expresion", "relop_and", "relop_not",
  "relop_paren", "relop_expresion_simple", "expresion_lista", "expresion",
  "termino", "llamado_funcion", "factor", "signo", "constante_entera",
  "numero_entero", "numero", "constante_real", "exponente", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    67,    68,    68,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    78,
      78,    79,    79,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   101,
     101,   102,   102,   103,   103,   104,   105,   105,   105,   105,
     105,   105,   105,   106,   106,   106,   107,   108,   109,   109,
     110,   110,   111,   111
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    10,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     6,     0,     6,     6,     6,     0,     1,     2,
       1,     9,     1,     1,     1,     1,     3,     0,     4,     6,
       4,     3,     0,     3,     5,     3,     1,     0,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     4,     6,     6,
       4,     4,     6,     6,     4,     4,     6,     6,     4,     4,
       3,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     6,     3,     1,     1,     1,     4,     1,     4,
       3,     1,     3,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     4,     1,     4,     1,     1,
       1,     2,     3,     1,     1,     0,     2,     2,     2,     0,
       4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     0,     1,     0,    18,     0,     0,
       0,    23,    19,    37,    20,    21,     0,     0,     0,     0,
       0,    47,     0,    23,     0,     0,     0,    42,    42,   125,
       0,     0,     0,     0,     0,   125,    98,    52,     0,    46,
      48,    54,    55,    56,    53,    50,     0,    51,    36,    37,
       2,     0,   125,     0,     0,     0,   125,   123,   124,   125,
     116,     0,   101,   103,   105,   107,     0,   111,   118,   113,
       0,   119,   120,    96,    94,     0,    95,     0,     0,     0,
       0,     0,   125,   125,    45,     0,   125,     0,     0,    32,
      33,    34,    35,     0,    30,    72,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,   104,   125,   125,   125,
       0,   125,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,   125,   125,    14,    15,    16,    17,   125,   125,
     129,   121,   126,   125,   125,     0,     0,     0,     0,     0,
       0,     0,     0,   109,     0,    49,    93,    38,     0,    22,
       0,    26,    24,    25,     0,    41,     0,     0,   106,   122,
       0,     0,   100,    57,   102,   108,   112,   114,     0,   127,
       0,     0,     0,    60,    61,    68,    64,   125,    69,    65,
     125,    91,    99,   125,    97,    28,     0,    87,    89,    81,
      86,    85,    77,    78,    79,    76,    88,    82,    83,    84,
      70,    74,    75,    80,    90,    73,    71,    43,     0,    39,
     115,   117,   128,   130,     0,     0,   116,     0,   116,     0,
       0,   110,    29,     0,     0,   125,   125,   131,    58,    59,
      62,    66,    63,    67,    92,     0,    44,     0,     0,     0,
     132,   133,     0,     0,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    60,   122,   123,   128,     8,    13,    14,    15,
     186,    93,    94,    16,    22,    23,    54,   101,    37,    38,
      39,    40,    41,    42,    43,    96,   150,   206,    44,    45,
      75,    46,    47,    61,    62,    63,    64,    65,   142,    66,
      67,    68,    69,    70,    71,   132,   169,    72,   227
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -172
static const yytype_int16 yypact[] =
{
      19,   -16,    54,  -172,    63,  -172,   -16,  -172,    35,    93,
     -16,    58,  -172,  -172,    80,    89,   136,   -16,   -16,   -16,
     -16,   124,   101,    58,   123,    15,   152,   179,   179,     9,
     -16,   204,   206,   226,   227,     9,     4,  -172,    94,   228,
    -172,  -172,  -172,  -172,  -172,  -172,   176,  -172,  -172,  -172,
    -172,   184,    17,   -16,   207,   229,     9,  -172,  -172,     9,
      57,     6,   230,  -172,  -172,  -172,   188,   159,  -172,  -172,
      26,  -172,  -172,   209,  -172,    61,   176,   -16,   -16,    -3,
      -3,    12,    20,    20,  -172,   124,    20,   136,   211,  -172,
    -172,  -172,  -172,   234,  -172,  -172,   235,   174,   236,   237,
     128,   140,   189,  -172,   120,   177,  -172,    20,    20,     9,
     124,     9,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,    20,    20,  -172,  -172,  -172,  -172,    20,    20,
    -172,  -172,   238,    20,    20,   239,   241,   242,    50,   243,
      82,   124,    85,   208,    77,  -172,   208,  -172,   191,  -172,
     105,  -172,  -172,  -172,   184,  -172,   -16,   244,  -172,  -172,
      90,    81,   230,  -172,  -172,   208,   159,  -172,   122,   192,
     174,    29,    75,  -172,  -172,  -172,  -172,    20,  -172,  -172,
      20,   201,  -172,    20,  -172,   191,   247,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,  -172,  -172,  -172,   186,  -172,
    -172,  -172,  -172,   103,   124,   124,    23,   132,    98,   190,
     124,   208,  -172,   248,   184,   210,   210,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,   191,  -172,   174,   174,   222,
    -172,  -172,   231,   189,  -172
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,  -172,    -1,  -172,  -172,  -172,   -14,   233,  -172,  -172,
    -171,  -142,  -100,   213,  -172,  -172,   232,  -172,    -6,  -172,
    -172,   -79,  -172,  -172,  -172,   149,  -172,  -172,  -172,   240,
    -172,   245,  -172,     0,   148,   -48,  -172,  -172,   151,   -33,
     141,  -172,   -63,   -51,   214,  -166,  -172,   215,  -172
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -97
static const yytype_int16 yytable[] =
{
       4,    97,   157,    25,   213,     7,   145,   131,    82,    12,
      24,   106,   207,    56,   222,   109,     7,    26,    27,    28,
      36,   109,     1,   105,   129,    57,    58,   107,   230,    73,
     129,   163,    83,    57,    58,    81,    57,    58,    10,   100,
       9,    51,    57,    58,     3,   120,   121,   110,    95,   143,
     144,   108,     7,   146,     5,   176,   104,     3,    10,   141,
     -96,   107,   181,   164,   239,   167,    59,     6,    95,     3,
     214,   240,   241,   177,   143,   161,   135,   136,   137,   139,
       3,   147,   236,   -27,    36,   108,     3,   179,   130,   165,
     182,   120,   121,   120,   121,   210,   168,   120,   121,    11,
     171,   172,   107,   232,    17,   180,   184,    48,   183,    36,
     211,   187,   188,   183,    18,   189,   215,   190,   191,   133,
     134,   192,   193,   194,   195,   158,   108,   159,   196,   109,
      50,   197,    84,   198,   199,   228,   229,   231,   120,   121,
      36,   234,   208,   244,   217,   155,   156,   219,   120,   121,
     221,    10,   225,   226,   154,     7,   200,   201,   202,   203,
     204,    21,    52,    29,    30,   205,    31,    32,    33,    34,
      35,    19,    20,    21,   237,   238,   216,   124,   125,   218,
     126,   127,   159,    53,     3,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   233,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   120,   121,    77,    10,
      78,    88,   224,    36,    36,    89,    90,    91,    92,    36,
      89,    90,    91,    92,   120,   121,    57,    58,   138,   140,
      79,    80,    86,   102,    85,   103,   130,    83,   111,   148,
     149,   151,   152,   153,   173,   170,   174,   175,   178,   220,
     209,   242,   185,   212,   223,   235,    49,   162,   160,     0,
      55,   243,    87,     0,   166,     0,    98,    99,     0,     0,
      74,     0,     0,     0,     0,    76
};

static const yytype_int16 yycheck[] =
{
       1,    52,   102,    17,   170,     6,    85,    70,     4,    10,
      16,    59,   154,     4,   185,     9,    17,    18,    19,    20,
      21,     9,     3,    56,     4,    16,    17,     4,     5,    30,
       4,   110,    28,    16,    17,    35,    16,    17,    23,    53,
       5,    26,    16,    17,    60,    16,    17,    41,    51,    82,
      83,    28,    53,    86,     0,     5,    56,    60,    23,    47,
      56,     4,   141,   111,   235,   128,    57,     4,    51,    60,
      41,   237,   238,    23,   107,   108,    77,    78,    79,    80,
      60,    87,   224,    25,    85,    28,    60,     5,    62,   122,
       5,    16,    17,    16,    17,     5,   129,    16,    17,     6,
     133,   134,     4,     5,    24,    23,    29,     6,    23,   110,
      29,     6,     7,    23,    25,    10,    41,    12,    13,    58,
      59,    16,    17,    18,    19,     5,    28,     5,    23,     9,
       7,    26,    38,    28,    29,   214,   215,     5,    16,    17,
     141,   220,   156,   243,   177,     5,     6,   180,    16,    17,
     183,    23,    49,    50,    26,   156,    51,    52,    53,    54,
      55,    37,    10,    39,    40,    60,    42,    43,    44,    45,
      46,    35,    36,    37,   225,   226,   177,    18,    19,   180,
      21,    22,     5,     4,    60,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     5,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    16,    17,     4,    23,
       4,    27,    26,   214,   215,    31,    32,    33,    34,   220,
      31,    32,    33,    34,    16,    17,    16,    17,    79,    80,
       4,     4,    56,    26,     6,     6,    62,    28,     8,    28,
       6,     6,     6,     6,     5,     7,     5,     5,     5,    48,
       6,    29,    61,    61,     7,     7,    23,   109,   107,    -1,
      28,    30,    49,    -1,   123,    -1,    52,    52,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    64,    60,    65,     0,     4,    65,    69,     5,
      23,     6,    65,    70,    71,    72,    76,    24,    25,    35,
      36,    37,    77,    78,    81,    69,    65,    65,    65,    39,
      40,    42,    43,    44,    45,    46,    65,    81,    82,    83,
      84,    85,    86,    87,    91,    92,    94,    95,     6,    70,
       7,    26,    10,     4,    79,    79,     4,    16,    17,    57,
      65,    96,    97,    98,    99,   100,   102,   103,   104,   105,
     106,   107,   110,    65,    92,    93,    94,     4,     4,     4,
       4,    96,     4,    28,    38,     6,    56,    76,    27,    31,
      32,    33,    34,    74,    75,    51,    88,   106,   107,   110,
      69,    80,    26,     6,    96,   102,    98,     4,    28,     9,
      41,     8,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    66,    67,    18,    19,    21,    22,    68,     4,
      62,   105,   108,    58,    59,    65,    65,    65,    88,    65,
      88,    47,   101,   102,   102,    84,   102,    81,    28,     6,
      89,     6,     6,     6,    26,     5,     6,    75,     5,     5,
     101,   102,    97,    84,    98,   102,   103,   105,   102,   109,
       7,   102,   102,     5,     5,     5,     5,    23,     5,     5,
      23,    84,     5,    23,    29,    61,    73,     6,     7,    10,
      12,    13,    16,    17,    18,    19,    23,    26,    28,    29,
      51,    52,    53,    54,    55,    60,    90,    74,    69,     6,
       5,    29,    61,   108,    41,    41,    65,   102,    65,   102,
      48,   102,    73,     7,    26,    49,    50,   111,    84,    84,
       5,     5,     5,     5,    84,     7,    74,   106,   106,    73,
     108,   108,    29,    30,    75
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */

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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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





void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    exit(1);
}

int main(int argc, char *argv[]) {

    

    yyin = fopen("Ejemplo1.pas", "r");

    // Parse the file
    yyparse();
    printf("Parse successful!\n");


    return 0;
}
