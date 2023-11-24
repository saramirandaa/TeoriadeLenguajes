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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE

{
    char* string_val;
}
/* Line 1529 of yacc.c.  */

	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

