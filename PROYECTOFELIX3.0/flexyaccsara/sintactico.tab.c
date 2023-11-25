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
char* type_var;


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
#define YYLAST   271

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  135
/* YYNRULES -- Number of states.  */
#define YYNSTATES  247

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
     121,   122,   130,   135,   139,   140,   144,   150,   154,   156,
     157,   159,   163,   165,   167,   169,   171,   173,   175,   177,
     182,   189,   196,   201,   206,   213,   220,   225,   230,   237,
     244,   249,   254,   258,   261,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   303,   310,   314,   316,   318,   320,
     325,   327,   332,   336,   338,   342,   344,   347,   349,   353,
     355,   359,   361,   365,   367,   371,   373,   377,   382,   384,
     389,   391,   393,   395,   398,   402,   404,   406,   407,   410,
     413,   416,   417,   422,   428,   432
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    -1,    65,     3,    66,     4,    70,     5,
       6,    71,    77,    83,     7,    -1,    62,    -1,     8,    -1,
       9,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,
      19,    -1,    21,    -1,    22,    -1,    66,    -1,    70,    23,
      66,    -1,    72,    -1,    73,    -1,    72,    24,    70,    26,
      75,     6,    -1,    -1,    73,    25,    66,    10,   109,     6,
      -1,    73,    25,    66,    10,   112,     6,    -1,    73,    25,
      66,    10,    90,     6,    -1,    -1,    60,    -1,    60,    74,
      -1,    76,    -1,    27,    28,    74,     7,     7,    74,    29,
      30,    76,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    77,    78,     6,    -1,    -1,    79,    71,    77,    83,
      -1,    -1,    35,    66,    81,    26,    76,    80,     6,    -1,
      36,    66,    81,     6,    -1,     4,    82,     5,    -1,    -1,
      70,    26,    75,    -1,    82,     6,    70,    26,    75,    -1,
      37,    84,    38,    -1,    85,    -1,    -1,    86,    -1,    85,
       6,    86,    -1,    94,    -1,    97,    -1,    83,    -1,    93,
      -1,    87,    -1,    88,    -1,    89,    -1,    39,    98,    41,
      86,    -1,    40,    95,    58,   104,    41,    86,    -1,    40,
      95,    59,   104,    41,    86,    -1,    42,     4,    66,     5,
      -1,    43,     4,    66,     5,    -1,    44,     4,    90,    23,
      66,     5,    -1,    45,     4,    90,    23,    66,     5,    -1,
      44,     4,    90,     5,    -1,    45,     4,    90,     5,    -1,
      44,     4,    90,    23,   104,     5,    -1,    45,     4,    90,
      23,   104,     5,    -1,    44,     4,    66,     5,    -1,    45,
       4,    66,     5,    -1,    51,    91,    51,    -1,    91,    92,
      -1,    -1,    62,    -1,    52,    -1,    53,    -1,    19,    -1,
      16,    -1,    17,    -1,    18,    -1,    54,    -1,    10,    -1,
      26,    -1,    28,    -1,    29,    -1,    13,    -1,    12,    -1,
       6,    -1,    23,    -1,     7,    -1,    55,    -1,    46,    98,
      47,    86,    -1,    46,    98,    47,    86,    48,    86,    -1,
      96,    56,   104,    -1,    94,    -1,    96,    -1,    66,    -1,
      66,    28,   104,    29,    -1,    66,    -1,    66,     4,   103,
       5,    -1,    98,     9,    99,    -1,    99,    -1,    99,     8,
     100,    -1,   100,    -1,    57,   100,    -1,   101,    -1,     4,
      98,     5,    -1,   102,    -1,   104,    67,   104,    -1,   104,
      -1,   103,    23,   104,    -1,   105,    -1,   104,    68,   105,
      -1,   107,    -1,   105,    69,   107,    -1,    66,     4,   103,
       5,    -1,    66,    -1,    66,    28,   104,    29,    -1,   106,
      -1,   109,    -1,   112,    -1,   108,   107,    -1,     4,   104,
       5,    -1,    16,    -1,    17,    -1,    -1,   108,   110,    -1,
      61,   111,    -1,   111,    60,    -1,    -1,   108,   110,     7,
     110,    -1,   108,   110,     7,   110,   113,    -1,    49,   108,
     110,    -1,    50,   108,   110,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    35,    41,    59,    60,    61,    62,    63,
      64,    65,    66,    70,    71,    75,    76,    77,    78,    82,
      83,    87,    88,    92,    93,    97,    99,   100,   101,   105,
     106,   110,   111,   115,   116,   117,   118,   122,   123,   127,
     131,   131,   133,   137,   138,   142,   143,   147,   151,   152,
     156,   157,   161,   162,   163,   164,   165,   166,   167,   171,
     172,   173,   177,   178,   182,   183,   184,   185,   186,   187,
     188,   189,   193,   197,   198,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   214,   214,
     215,   215,   215,   219,   220,   224,   228,   229,   233,   234,
     238,   238,   242,   243,   247,   248,   252,   253,   257,   258,
     262,   266,   267,   271,   272,   276,   277,   281,   285,   286,
     287,   288,   289,   290,   291,   295,   296,   297,   301,   304,
     308,   309,   313,   314,   318,   319
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
  "subprograma_encabezado", "@2", "argumentos", "parametros_lista",
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
      80,    79,    79,    81,    81,    82,    82,    83,    84,    84,
      85,    85,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   103,   103,   104,   104,   105,   105,   106,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   109,   110,
     111,   111,   112,   112,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,    11,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     6,     0,     6,     6,     6,     0,     1,
       2,     1,     9,     1,     1,     1,     1,     3,     0,     4,
       0,     7,     4,     3,     0,     3,     5,     3,     1,     0,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     4,
       6,     6,     4,     4,     6,     6,     4,     4,     6,     6,
       4,     4,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     6,     3,     1,     1,     1,     4,
       1,     4,     3,     1,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     4,     1,     4,
       1,     1,     1,     2,     3,     1,     1,     0,     2,     2,
       2,     0,     4,     5,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,     0,     4,     0,     0,    19,     0,
       0,     0,    24,    20,    38,    21,    22,     0,     0,     0,
       0,     0,    49,     0,    24,     0,     0,     0,    44,    44,
     127,     0,     0,     0,     0,     0,   127,   100,    54,     0,
      48,    50,    56,    57,    58,    55,    52,     0,    53,    37,
      38,     3,     0,   127,     0,     0,     0,   127,   125,   126,
     127,   118,     0,   103,   105,   107,   109,     0,   113,   120,
     115,     0,   121,   122,    98,    96,     0,    97,     0,     0,
       0,     0,     0,   127,   127,    47,     0,   127,     0,     0,
      33,    34,    35,    36,     0,    31,    74,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,   106,   127,   127,
     127,     0,   127,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,   127,   127,    15,    16,    17,    18,   127,
     127,   131,   123,   128,   127,   127,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,    51,    95,    39,     0,
      23,     0,    27,    25,    26,     0,    43,     0,    40,   108,
     124,     0,     0,   102,    59,   104,   110,   114,   116,     0,
     129,     0,     0,     0,    62,    63,    70,    66,   127,    71,
      67,   127,    93,   101,   127,    99,    29,     0,    89,    91,
      83,    88,    87,    79,    80,    81,    78,    90,    84,    85,
      86,    72,    76,    77,    82,    92,    75,    73,    45,     0,
       0,   117,   119,   130,   132,     0,     0,   118,     0,   118,
       0,     0,   112,    30,     0,     0,    41,   127,   127,   133,
      60,    61,    64,    68,    65,    69,    94,     0,    46,     0,
       0,     0,   134,   135,     0,     0,    32
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    61,   123,   124,   129,     9,    14,    15,
      16,   187,    94,    95,    17,    23,    24,   210,    55,   102,
      38,    39,    40,    41,    42,    43,    44,    97,   151,   207,
      45,    46,    76,    47,    48,    62,    63,    64,    65,    66,
     143,    67,    68,    69,    70,    71,    72,   133,   170,    73,
     229
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -176
static const yytype_int16 yypact[] =
{
    -176,    34,    36,  -176,    -6,  -176,    50,    -6,  -176,    15,
      79,    -6,    70,  -176,  -176,   102,    86,   167,    -6,    -6,
      -6,    -6,    54,   114,    70,   121,   113,   136,   133,   133,
       6,    -6,   169,   224,   225,   226,     6,    17,  -176,   193,
     227,  -176,  -176,  -176,  -176,  -176,  -176,   176,  -176,  -176,
    -176,  -176,   174,    35,    -6,   209,   228,     6,  -176,  -176,
       6,   117,    26,   229,  -176,  -176,  -176,   183,   197,  -176,
    -176,     8,  -176,  -176,   210,  -176,   103,   176,    -6,    -6,
      39,    39,    19,    27,    27,  -176,    54,    27,   167,   211,
    -176,  -176,  -176,  -176,   230,  -176,  -176,   234,   180,   236,
     237,   144,   204,   189,  -176,    44,   173,  -176,    27,    27,
       6,    54,     6,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,    27,    27,  -176,  -176,  -176,  -176,    27,
      27,  -176,  -176,   238,    27,    27,   239,   241,   242,    32,
     243,    41,    54,    87,   163,   140,  -176,   163,  -176,   190,
    -176,    96,  -176,  -176,  -176,   174,  -176,    -6,  -176,  -176,
    -176,   118,   143,   229,  -176,  -176,   163,   197,  -176,    43,
     191,   180,    88,   101,  -176,  -176,  -176,  -176,    27,  -176,
    -176,    27,   201,  -176,    27,  -176,   190,   245,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,   145,
     247,  -176,  -176,  -176,   164,    54,    54,    37,   147,   127,
     149,    54,   163,  -176,   248,   174,  -176,   208,   208,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,   190,  -176,   180,
     180,   231,  -176,  -176,   232,   189,  -176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,    -4,  -176,  -176,  -176,   -14,   233,  -176,
    -176,  -175,  -147,  -101,   206,  -176,  -176,  -176,   235,  -176,
      -8,  -176,  -176,   -81,  -176,  -176,  -176,   146,  -176,  -176,
    -176,   223,  -176,   240,  -176,   -10,   148,   -31,  -176,  -176,
     151,   -51,   137,  -176,   -58,   -52,   212,  -152,  -176,   213,
    -176
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -99
static const yytype_int16 yytable[] =
{
       6,    98,   158,     8,    26,   146,   106,    13,   208,    25,
      57,   223,   130,   132,     8,    27,    28,    29,    37,   214,
      10,    83,    58,    59,    58,    59,    82,    74,   110,   107,
     164,   130,   144,   145,     3,   110,   147,   177,    11,     4,
     101,   108,   232,    58,    59,    84,   180,   105,   160,   159,
       8,    58,    59,   110,     7,   178,     5,   144,   162,   121,
     122,   182,   241,    60,   181,   109,   142,   111,     5,   131,
       5,   168,   166,   -98,   136,   137,   138,   140,   238,   169,
     148,   165,    37,   172,   173,    12,    96,   242,   243,     5,
      96,    22,   183,    30,    31,   -28,    32,    33,    34,    35,
      36,     5,   188,   189,   121,   122,   190,    37,   191,   192,
     184,    19,   193,   194,   195,   196,     5,   121,   122,   197,
      49,   108,   198,   211,   199,   200,    18,   218,    51,   215,
     220,   108,   234,   222,   230,   231,    11,    54,    37,    52,
     236,   184,   216,   209,   246,   109,    53,   201,   202,   203,
     204,   205,   233,     8,   235,   109,   121,   122,   206,   121,
     122,   134,   135,   121,   122,   121,   122,    11,    11,   185,
     155,   225,   212,    78,   217,   239,   240,   219,   160,   121,
     122,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,    89,    20,    21,    22,    90,    91,    92,    93,   156,
     157,    37,    37,   227,   228,   125,   126,    37,   127,   128,
      90,    91,    92,    93,    58,    59,   139,   141,    79,    80,
      81,    85,    87,    86,   104,   103,   150,   112,    84,   149,
     152,   131,   153,   154,   174,   171,   175,   176,   179,   221,
     186,   213,   224,   226,    75,   237,    88,    50,   163,   161,
     244,   167,   245,     0,    56,    99,   100,     0,     0,     0,
       0,    77
};

static const yytype_int16 yycheck[] =
{
       4,    53,   103,     7,    18,    86,    57,    11,   155,    17,
       4,   186,     4,    71,    18,    19,    20,    21,    22,   171,
       5,     4,    16,    17,    16,    17,    36,    31,     9,    60,
     111,     4,    83,    84,     0,     9,    87,     5,    23,     3,
      54,     4,     5,    16,    17,    28,     5,    57,     5,     5,
      54,    16,    17,     9,     4,    23,    62,   108,   109,    16,
      17,   142,   237,    57,    23,    28,    47,    41,    62,    61,
      62,   129,   123,    56,    78,    79,    80,    81,   225,   130,
      88,   112,    86,   134,   135,     6,    51,   239,   240,    62,
      51,    37,     5,    39,    40,    25,    42,    43,    44,    45,
      46,    62,     6,     7,    16,    17,    10,   111,    12,    13,
      23,    25,    16,    17,    18,    19,    62,    16,    17,    23,
       6,     4,    26,     5,    28,    29,    24,   178,     7,    41,
     181,     4,     5,   184,   215,   216,    23,     4,   142,    26,
     221,    23,    41,   157,   245,    28,    10,    51,    52,    53,
      54,    55,     5,   157,     5,    28,    16,    17,    62,    16,
      17,    58,    59,    16,    17,    16,    17,    23,    23,    29,
      26,    26,    29,     4,   178,   227,   228,   181,     5,    16,
      17,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    27,    35,    36,    37,    31,    32,    33,    34,     5,
       6,   215,   216,    49,    50,    18,    19,   221,    21,    22,
      31,    32,    33,    34,    16,    17,    80,    81,     4,     4,
       4,    38,    56,     6,     6,    26,     6,     8,    28,    28,
       6,    61,     6,     6,     5,     7,     5,     5,     5,    48,
      60,    60,     7,     6,    31,     7,    50,    24,   110,   108,
      29,   124,    30,    -1,    29,    53,    53,    -1,    -1,    -1,
      -1,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    64,    65,     0,     3,    62,    66,     4,    66,    70,
       5,    23,     6,    66,    71,    72,    73,    77,    24,    25,
      35,    36,    37,    78,    79,    83,    70,    66,    66,    66,
      39,    40,    42,    43,    44,    45,    46,    66,    83,    84,
      85,    86,    87,    88,    89,    93,    94,    96,    97,     6,
      71,     7,    26,    10,     4,    81,    81,     4,    16,    17,
      57,    66,    98,    99,   100,   101,   102,   104,   105,   106,
     107,   108,   109,   112,    66,    94,    95,    96,     4,     4,
       4,     4,    98,     4,    28,    38,     6,    56,    77,    27,
      31,    32,    33,    34,    75,    76,    51,    90,   108,   109,
     112,    70,    82,    26,     6,    98,   104,   100,     4,    28,
       9,    41,     8,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    67,    68,    18,    19,    21,    22,    69,
       4,    61,   107,   110,    58,    59,    66,    66,    66,    90,
      66,    90,    47,   103,   104,   104,    86,   104,    83,    28,
       6,    91,     6,     6,     6,    26,     5,     6,    76,     5,
       5,   103,   104,    99,    86,   100,   104,   105,   107,   104,
     111,     7,   104,   104,     5,     5,     5,     5,    23,     5,
       5,    23,    86,     5,    23,    29,    60,    74,     6,     7,
      10,    12,    13,    16,    17,    18,    19,    23,    26,    28,
      29,    51,    52,    53,    54,    55,    62,    92,    75,    70,
      80,     5,    29,    60,   110,    41,    41,    66,   104,    66,
     104,    48,   104,    74,     7,    26,     6,    49,    50,   113,
      86,    86,     5,     5,     5,     5,    86,     7,    75,   108,
     108,    74,   110,   110,    29,    30,    76
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

    { print_table(ht); ;}
    break;

  case 4:

    { 
        
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

    {type_var = "INTEGER_TYPE";;}
    break;

  case 34:

    {type_var = "REAL_TYPE";;}
    break;

  case 35:

    {type_var = "STRING_TYPE";;}
    break;

  case 36:

    {type_var = "BOOLEAN_TYPE";;}
    break;

  case 40:

    {printf("%s tipo %s\n", $identificador, type_var);;}
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
    // { //printf("Se leyó el identificador '%s' en la linea %d correctamente\n", $3, yylineno); } 
    yyparse();
    printf("Parse successful!\n");

    
    return 0;
}
