/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LETTER = 258,
     DIGIT = 259,
     INT_TYPE = 260,
     REAL_TYPE = 261,
     STRING_TYPE = 262,
     BOOL_TYPE = 263,
     RELOP = 264,
     ADDOP = 265,
     MULOP = 266,
     EMPTY = 267,
     ALPHANUMERICAL_CHAR = 268,
     COMMA = 269,
     DOT = 270,
     DOT_COMMA = 271,
     PARENTHESIS_OPEN = 272,
     PARENTHESIS_CLOSE = 273,
     VAR = 274,
     CONST = 275,
     DOT_DOT = 276,
     EQUALS = 277,
     ARRAY = 278,
     BRAKET_OPEN = 279,
     BRAKET_CLOSE = 280,
     OF = 281,
     FUNCTION = 282,
     PROCEDURE = 283,
     TPROGRAM = 284,
     BEGIN = 285,
     END = 286,
     WHILE = 287,
     FOR = 288,
     TO = 289,
     DO = 290,
     AND = 291,
     NOT = 292,
     ASIGNATION_VARIABLE = 293,
     QUOTATIONS = 294,
     DOWNTO = 295,
     IF = 296,
     THEN = 297,
     ELSE = 298,
     READLN = 299,
     WRITE = 300,
     WRITELN = 301,
     READ = 302,
     SIGN = 303,
     NON_CERO_DIGIT = 304,
     BRACKET_OPEN = 305,
     BRACKET_CLOSE = 306,
     E_MINUS = 307,
     E_MAX = 308,
     LIST_EXPRESSION = 309,
     OR = 310
   };
#endif
/* Tokens.  */
#define LETTER 258
#define DIGIT 259
#define INT_TYPE 260
#define REAL_TYPE 261
#define STRING_TYPE 262
#define BOOL_TYPE 263
#define RELOP 264
#define ADDOP 265
#define MULOP 266
#define EMPTY 267
#define ALPHANUMERICAL_CHAR 268
#define COMMA 269
#define DOT 270
#define DOT_COMMA 271
#define PARENTHESIS_OPEN 272
#define PARENTHESIS_CLOSE 273
#define VAR 274
#define CONST 275
#define DOT_DOT 276
#define EQUALS 277
#define ARRAY 278
#define BRAKET_OPEN 279
#define BRAKET_CLOSE 280
#define OF 281
#define FUNCTION 282
#define PROCEDURE 283
#define TPROGRAM 284
#define BEGIN 285
#define END 286
#define WHILE 287
#define FOR 288
#define TO 289
#define DO 290
#define AND 291
#define NOT 292
#define ASIGNATION_VARIABLE 293
#define QUOTATIONS 294
#define DOWNTO 295
#define IF 296
#define THEN 297
#define ELSE 298
#define READLN 299
#define WRITE 300
#define WRITELN 301
#define READ 302
#define SIGN 303
#define NON_CERO_DIGIT 304
#define BRACKET_OPEN 305
#define BRACKET_CLOSE 306
#define E_MINUS 307
#define E_MAX 308
#define LIST_EXPRESSION 309
#define OR 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

