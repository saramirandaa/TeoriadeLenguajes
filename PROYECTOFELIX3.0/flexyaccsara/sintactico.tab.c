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
     DIGITO = 315,
     DIGIT_NON_CERO = 316,
     IDENTIFICADOR_ = 317
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
#define DIGITO 315
#define DIGIT_NON_CERO 316
#define IDENTIFICADOR_ 317




/* Copy the first part of user declarations.  */


#include <stdio.h>
#include <stdlib.h>
#include "TablaSim.h"
extern int yylex(void);
extern void yyerror(const char *s);
extern FILE *yyin;
extern int yylineno;
extern int yydebug;


HashTable ht;
data_value data;
Var_Types variable_type;


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
typedef union YYSTYPE

{
    char* string_val;
}
/* Line 193 of yacc.c.  */

	YYSTYPE;
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

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
       0,     0,     3,     4,    16,    18,    20,    22,    24,    26,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    52,    54,    56,    63,    64,    71,    78,    85,    86,
      88,    91,    93,   103,   105,   107,   109,   111,   115,   116,
     121,   128,   133,   137,   138,   142,   148,   152,   154,   155,
     157,   161,   163,   165,   167,   169,   171,   173,   175,   180,
     187,   194,   199,   204,   211,   218,   223,   228,   235,   242,
     247,   252,   256,   259,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   301,   308,   312,   314,   316,   318,   323,
     325,   330,   334,   336,   340,   342,   345,   347,   351,   353,
     357,   359,   363,   365,   369,   371,   375,   380,   382,   387,
     389,   391,   393,   396,   400,   402,   404,   405,   408,   411,
     414,   415,   420,   426,   430
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    -1,    65,     3,    66,     4,    70,     5,
       6,    71,    77,    82,     7,    -1,    62,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    21,    -1,    22,    -1,    66,    -1,    70,    23,
      66,    -1,    72,    -1,    73,    -1,    72,    24,    70,    26,
      75,     6,    -1,    -1,    73,    25,    66,    10,   108,     6,
      -1,    73,    25,    66,    10,   111,     6,    -1,    73,    25,
      66,    10,    89,     6,    -1,    -1,    60,    -1,    60,    74,
      -1,    76,    -1,    27,    28,    74,     7,     7,    74,    29,
      30,    76,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    77,    78,     6,    -1,    -1,    79,    71,    77,    82,
      -1,    35,    66,    80,    26,    76,     6,    -1,    36,    66,
      80,     6,    -1,     4,    81,     5,    -1,    -1,    70,    26,
      75,    -1,    81,     6,    70,    26,    75,    -1,    37,    83,
      38,    -1,    84,    -1,    -1,    85,    -1,    84,     6,    85,
      -1,    93,    -1,    96,    -1,    82,    -1,    92,    -1,    86,
      -1,    87,    -1,    88,    -1,    39,    97,    41,    85,    -1,
      40,    94,    58,   103,    41,    85,    -1,    40,    94,    59,
     103,    41,    85,    -1,    42,     4,    66,     5,    -1,    43,
       4,    66,     5,    -1,    44,     4,    89,    23,    66,     5,
      -1,    45,     4,    89,    23,    66,     5,    -1,    44,     4,
      89,     5,    -1,    45,     4,    89,     5,    -1,    44,     4,
      89,    23,   103,     5,    -1,    45,     4,    89,    23,   103,
       5,    -1,    44,     4,    66,     5,    -1,    45,     4,    66,
       5,    -1,    51,    90,    51,    -1,    90,    91,    -1,    -1,
      62,    -1,    52,    -1,    53,    -1,    19,    -1,    16,    -1,
      17,    -1,    18,    -1,    54,    -1,    10,    -1,    26,    -1,
      28,    -1,    29,    -1,    13,    -1,    12,    -1,     6,    -1,
      23,    -1,     7,    -1,    55,    -1,    46,    97,    47,    85,
      -1,    46,    97,    47,    85,    48,    85,    -1,    95,    56,
     103,    -1,    93,    -1,    95,    -1,    66,    -1,    66,    28,
     103,    29,    -1,    66,    -1,    66,     4,   102,     5,    -1,
      97,     9,    98,    -1,    98,    -1,    98,     8,    99,    -1,
      99,    -1,    57,    99,    -1,   100,    -1,     4,    97,     5,
      -1,   101,    -1,   103,    67,   103,    -1,   103,    -1,   102,
      23,   103,    -1,   104,    -1,   103,    68,   104,    -1,   106,
      -1,   104,    69,   106,    -1,    66,     4,   102,     5,    -1,
      66,    -1,    66,    28,   103,    29,    -1,   105,    -1,   108,
      -1,   111,    -1,   107,   106,    -1,     4,   103,     5,    -1,
      16,    -1,    17,    -1,    -1,   107,   109,    -1,    61,   110,
      -1,   110,    60,    -1,    -1,   107,   109,     7,   109,    -1,
     107,   109,     7,   109,   112,    -1,    49,   107,   109,    -1,
      50,   107,   109,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    34,    48,    67,    68,    69,    70,    71,
      72,    73,    74,    78,    79,    83,    84,    85,    86,    90,
      91,    95,    96,   100,   101,   105,   106,   107,   108,   112,
     113,   117,   118,   122,   123,   124,   125,   129,   130,   134,
     138,   139,   143,   144,   148,   149,   153,   157,   158,   162,
     163,   167,   168,   169,   170,   171,   172,   173,   177,   178,
     179,   183,   184,   188,   189,   190,   191,   192,   193,   194,
     195,   199,   203,   204,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   220,   220,   221,
     221,   221,   225,   226,   230,   234,   235,   239,   240,   244,
     244,   248,   249,   253,   254,   258,   259,   263,   264,   268,
     272,   273,   277,   278,   282,   283,   287,   291,   292,   293,
     294,   295,   296,   297,   301,   302,   303,   307,   310,   314,
     315,   319,   320,   324,   325
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
  "HASH", "ASSIGN_OP", "NOT", "TO", "DOWNTO", "DIGITO", "DIGIT_NON_CERO",
  "IDENTIFICADOR_", "$accept", "programa", "@1", "identificador", "relop",
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
       0,    63,    65,    64,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    69,    69,    69,    69,    70,
      70,    71,    71,    72,    72,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    77,    77,    78,
      79,    79,    80,    80,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    89,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     102,   102,   103,   103,   104,   104,   105,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   108,   109,   110,
     110,   111,   111,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    11,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     6,     0,     6,     6,     6,     0,     1,
       2,     1,     9,     1,     1,     1,     1,     3,     0,     4,
       6,     4,     3,     0,     3,     5,     3,     1,     0,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     4,     6,
       6,     4,     4,     6,     6,     4,     4,     6,     6,     4,
       4,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     6,     3,     1,     1,     1,     4,     1,
       4,     3,     1,     3,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     4,     1,     4,     1,
       1,     1,     2,     3,     1,     1,     0,     2,     2,     2,
       0,     4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    19,     0,
       0,     0,    24,    20,    38,    21,    22,     0,     0,     0,
       0,     0,    48,     0,    24,     0,     0,     0,    43,    43,
     126,     0,     0,     0,     0,     0,   126,    99,    53,     0,
      47,    49,    55,    56,    57,    54,    51,     0,    52,    37,
      38,     3,     0,   126,     0,     0,     0,   126,   124,   125,
     126,   117,     0,   102,   104,   106,   108,     0,   112,   119,
     114,     0,   120,   121,    97,    95,     0,    96,     0,     0,
       0,     0,     0,   126,   126,    46,     0,   126,     0,     0,
      33,    34,    35,    36,     0,    31,    73,     0,     0,     0,
       0,     0,     0,     0,    41,     0,     0,   105,   126,   126,
     126,     0,   126,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   126,   126,    15,    16,    17,    18,   126,
     126,   130,   122,   127,   126,   126,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,    50,    94,    39,     0,
      23,     0,    27,    25,    26,     0,    42,     0,     0,   107,
     123,     0,     0,   101,    58,   103,   109,   113,   115,     0,
     128,     0,     0,     0,    61,    62,    69,    65,   126,    70,
      66,   126,    92,   100,   126,    98,    29,     0,    88,    90,
      82,    87,    86,    78,    79,    80,    77,    89,    83,    84,
      85,    71,    75,    76,    81,    91,    74,    72,    44,     0,
      40,   116,   118,   129,   131,     0,     0,   117,     0,   117,
       0,     0,   111,    30,     0,     0,   126,   126,   132,    59,
      60,    63,    67,    64,    68,    93,     0,    45,     0,     0,
       0,   133,   134,     0,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    61,   123,   124,   129,     9,    14,    15,
      16,   187,    94,    95,    17,    23,    24,    55,   102,    38,
      39,    40,    41,    42,    43,    44,    97,   151,   207,    45,
      46,    76,    47,    48,    62,    63,    64,    65,    66,   143,
      67,    68,    69,    70,    71,    72,   133,   170,    73,   228
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
{
    -156,    37,    38,  -156,    26,  -156,    88,    26,  -156,    42,
      96,    26,    79,  -156,  -156,    91,    98,   136,    26,    26,
      26,    26,   117,   125,    79,   111,    28,   156,   206,   206,
       5,    26,   218,   225,   226,   227,     5,    16,  -156,   170,
     228,  -156,  -156,  -156,  -156,  -156,  -156,   176,  -156,  -156,
    -156,  -156,   182,    32,    26,   207,   229,     5,  -156,  -156,
       5,    25,    43,   230,  -156,  -156,  -156,   186,   146,  -156,
    -156,     7,  -156,  -156,   208,  -156,   148,   176,    26,    26,
     -19,   -19,    19,     9,     9,  -156,   117,     9,   136,   211,
    -156,  -156,  -156,  -156,   231,  -156,  -156,   234,   180,   236,
     237,    75,   213,   118,  -156,    51,   173,  -156,     9,     9,
       5,   117,     5,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,     9,     9,  -156,  -156,  -156,  -156,     9,
       9,  -156,  -156,   238,     9,     9,   239,   241,   242,    50,
     243,    90,   117,   103,   204,   108,  -156,   204,  -156,   189,
    -156,    93,  -156,  -156,  -156,   182,  -156,    26,   244,  -156,
    -156,   109,   112,   230,  -156,  -156,   204,   146,  -156,   153,
     191,   180,    18,    29,  -156,  -156,  -156,  -156,     9,  -156,
    -156,     9,   205,  -156,     9,  -156,   189,   245,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,   104,
    -156,  -156,  -156,  -156,   174,   117,   117,    89,   175,    92,
     188,   117,   204,  -156,   247,   182,   209,   209,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,   189,  -156,   180,   180,
     232,  -156,  -156,   233,   118,  -156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,    -4,  -156,  -156,  -156,   -14,   235,  -156,
    -156,  -155,  -145,  -102,   210,  -156,  -156,   240,  -156,    -9,
    -156,  -156,   -81,  -156,  -156,  -156,   147,  -156,  -156,  -156,
     224,  -156,   246,  -156,     0,   152,   -54,  -156,  -156,   149,
     -45,   132,  -156,   -38,   -51,   212,  -152,  -156,   214,  -156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -98
static const yytype_int16 yytable[] =
{
       6,   158,    98,     8,    26,   146,   107,    13,    25,    57,
     208,   130,   106,   130,     8,    27,    28,    29,    37,   214,
      83,    58,    59,    58,    59,    58,    59,    74,   110,   108,
     164,   223,    96,   132,   121,   122,    82,     3,   144,   145,
     101,     4,   147,     5,    84,   121,   122,    10,    58,    59,
       8,    11,   110,   109,    52,   177,   159,   105,   165,   215,
     110,   182,    60,   144,   162,    11,   142,     5,   131,     5,
     216,     5,   -97,   178,   136,   137,   138,   140,   166,   148,
     237,   240,    37,    96,   111,   169,   241,   242,     5,   172,
     173,   168,     7,   108,   231,   180,   108,   233,    11,   188,
     189,   155,    12,   190,   -28,   191,   192,    37,   183,   193,
     194,   195,   196,   181,   211,    18,   197,   109,    51,   198,
     109,   199,   200,    19,   121,   122,   184,    11,   121,   122,
     225,    49,   184,   218,   229,   230,   220,   185,    37,   222,
     235,   212,   245,   209,   201,   202,   203,   204,   205,    90,
      91,    92,    93,     8,    22,   206,    30,    31,   160,    32,
      33,    34,    35,    36,   125,   126,    53,   127,   128,   121,
     122,    20,    21,    22,   217,   238,   239,   219,   160,     5,
     232,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   121,   122,   234,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   121,   122,   134,   135,    85,    89,
      54,    37,    37,    90,    91,    92,    93,    37,   156,   157,
     121,   122,    78,   226,   227,    58,    59,   139,   141,    79,
      80,    81,    87,   103,    86,   104,    84,   150,   112,   149,
     152,   131,   153,   154,   174,   171,   175,   176,   179,   186,
     210,   213,   224,   221,   236,    75,   167,   161,     0,    50,
      88,   243,   163,   244,     0,    99,     0,   100,     0,    56,
       0,     0,     0,     0,     0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
       4,   103,    53,     7,    18,    86,    60,    11,    17,     4,
     155,     4,    57,     4,    18,    19,    20,    21,    22,   171,
       4,    16,    17,    16,    17,    16,    17,    31,     9,     4,
     111,   186,    51,    71,    16,    17,    36,     0,    83,    84,
      54,     3,    87,    62,    28,    16,    17,     5,    16,    17,
      54,    23,     9,    28,    26,     5,     5,    57,   112,    41,
       9,   142,    57,   108,   109,    23,    47,    62,    61,    62,
      41,    62,    56,    23,    78,    79,    80,    81,   123,    88,
     225,   236,    86,    51,    41,   130,   238,   239,    62,   134,
     135,   129,     4,     4,     5,     5,     4,     5,    23,     6,
       7,    26,     6,    10,    25,    12,    13,   111,     5,    16,
      17,    18,    19,    23,     5,    24,    23,    28,     7,    26,
      28,    28,    29,    25,    16,    17,    23,    23,    16,    17,
      26,     6,    23,   178,   215,   216,   181,    29,   142,   184,
     221,    29,   244,   157,    51,    52,    53,    54,    55,    31,
      32,    33,    34,   157,    37,    62,    39,    40,     5,    42,
      43,    44,    45,    46,    18,    19,    10,    21,    22,    16,
      17,    35,    36,    37,   178,   226,   227,   181,     5,    62,
       5,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    16,    17,     5,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    16,    17,    58,    59,    38,    27,
       4,   215,   216,    31,    32,    33,    34,   221,     5,     6,
      16,    17,     4,    49,    50,    16,    17,    80,    81,     4,
       4,     4,    56,    26,     6,     6,    28,     6,     8,    28,
       6,    61,     6,     6,     5,     7,     5,     5,     5,    60,
       6,    60,     7,    48,     7,    31,   124,   108,    -1,    24,
      50,    29,   110,    30,    -1,    53,    -1,    53,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,     3,    62,    66,     4,    66,    70,
       5,    23,     6,    66,    71,    72,    73,    77,    24,    25,
      35,    36,    37,    78,    79,    82,    70,    66,    66,    66,
      39,    40,    42,    43,    44,    45,    46,    66,    82,    83,
      84,    85,    86,    87,    88,    92,    93,    95,    96,     6,
      71,     7,    26,    10,     4,    80,    80,     4,    16,    17,
      57,    66,    97,    98,    99,   100,   101,   103,   104,   105,
     106,   107,   108,   111,    66,    93,    94,    95,     4,     4,
       4,     4,    97,     4,    28,    38,     6,    56,    77,    27,
      31,    32,    33,    34,    75,    76,    51,    89,   107,   108,
     111,    70,    81,    26,     6,    97,   103,    99,     4,    28,
       9,    41,     8,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    67,    68,    18,    19,    21,    22,    69,
       4,    61,   106,   109,    58,    59,    66,    66,    66,    89,
      66,    89,    47,   102,   103,   103,    85,   103,    82,    28,
       6,    90,     6,     6,     6,    26,     5,     6,    76,     5,
       5,   102,   103,    98,    85,    99,   103,   104,   106,   103,
     110,     7,   103,   103,     5,     5,     5,     5,    23,     5,
       5,    23,    85,     5,    23,    29,    60,    74,     6,     7,
      10,    12,    13,    16,    17,    18,    19,    23,    26,    28,
      29,    51,    52,    53,    54,    55,    62,    91,    75,    70,
       6,     5,    29,    60,   109,    41,    41,    66,   103,    66,
     103,    48,   103,    74,     7,    26,    49,    50,   112,    85,
      85,     5,     5,     5,     5,    85,     7,    75,   107,   107,
      74,   109,   109,    29,    30,    76
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
        case 2:

    {create_table(ht);;}
    break;

  case 3:

    {
        
       
        print_table(ht);
        //ht_delete(ht, "X1");
        //print_search(ht, "C1");
        
        
    ;}
    break;

  case 4:

    {
        printf("Se leyó el identificador '%s' en la linea %d correctamente\n", (yyvsp[(1) - (1)].string_val), yylineno); 

        data.identifier = (yyvsp[(1) - (1)].string_val);
        data.memory_assign = 0;
        data.bytes_size = 0;
        data.source_line_definition = 0;

        memset(data.source_lines_used, yylineno, MAX_LINES_REFERENCE);
        //strcpy(data.source_lines_used, yylineno);
        data.scope = 0;

        ht_insert(ht, (yyvsp[(1) - (1)].string_val) , data);
        
        free((yyvsp[(1) - (1)].string_val));
    ;}
    break;

  case 33:

    {printf("INTEGER_TYPE\n"); data.type = INTEGER;;}
    break;

  case 34:

    {printf("REAL_TYPE\n"); data.type = REAL;;}
    break;

  case 35:

    {printf("STRING_TYPE\n"); data.type = STRING;;}
    break;

  case 36:

    {printf("BOOLEAN_TYPE\n"); data.type = BOOLEAN;;}
    break;


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
