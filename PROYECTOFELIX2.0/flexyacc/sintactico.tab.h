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
     INTEGER_TYPE = 259,
     REAL_TYPE = 260,
     STRING_TYPE = 261,
     BOOLEAN_TYPE = 262,
     VAR = 263,
     CONST = 264,
     FUNCTION = 265,
     PROCEDURE = 266,
     TBEGIN = 267,
     END = 268,
     IF = 269,
     ELSE = 270,
     WHILE = 271,
     FOR = 272,
     TO = 273,
     DOWNTO = 274,
     READ = 275,
     READLN = 276,
     WRITE = 277,
     WRITELN = 278,
     AND_OP = 279,
     OR_OP = 280,
     DIV_KEYWORD = 281,
     MOD_KEYWORD = 282,
     NOT_OP = 283,
     ADD_OP = 284,
     SUB_OP = 285,
     MUL_OP = 286,
     DIV_OP = 287,
     ASSIGN_OP = 288,
     SEMICOLON = 289,
     COMMA = 290,
     COLON = 291,
     LPAREN = 292,
     RPAREN = 293,
     LBRACKET = 294,
     RBRACKET = 295,
     DO = 296,
     THEN = 297,
     INTEGER_CONSTANT = 298,
     REAL_CONSTANT = 299,
     STRING_LITERAL = 300,
     IDENTIFIER = 301,
     ARRAY = 302,
     OF = 303,
     COMMENT = 304
   };
#endif
/* Tokens.  */
#define PROGRAM 258
#define INTEGER_TYPE 259
#define REAL_TYPE 260
#define STRING_TYPE 261
#define BOOLEAN_TYPE 262
#define VAR 263
#define CONST 264
#define FUNCTION 265
#define PROCEDURE 266
#define TBEGIN 267
#define END 268
#define IF 269
#define ELSE 270
#define WHILE 271
#define FOR 272
#define TO 273
#define DOWNTO 274
#define READ 275
#define READLN 276
#define WRITE 277
#define WRITELN 278
#define AND_OP 279
#define OR_OP 280
#define DIV_KEYWORD 281
#define MOD_KEYWORD 282
#define NOT_OP 283
#define ADD_OP 284
#define SUB_OP 285
#define MUL_OP 286
#define DIV_OP 287
#define ASSIGN_OP 288
#define SEMICOLON 289
#define COMMA 290
#define COLON 291
#define LPAREN 292
#define RPAREN 293
#define LBRACKET 294
#define RBRACKET 295
#define DO 296
#define THEN 297
#define INTEGER_CONSTANT 298
#define REAL_CONSTANT 299
#define STRING_LITERAL 300
#define IDENTIFIER 301
#define ARRAY 302
#define OF 303
#define COMMENT 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

