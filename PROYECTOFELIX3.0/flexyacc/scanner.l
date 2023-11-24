%{
#include "sintactico.tab.h"

extern int yylval;
extern void yyerror(const char *msg);
%}

%option noyywrap 

%%

"program"                     { return PROGRAM; }
"integer"                     { return INTEGER_TYPE; }
"real"                        { return REAL_TYPE; }
"string"                      { return STRING_TYPE; }
"boolean"                     { return BOOLEAN_TYPE; }
"var"                         { return VAR; }
"const"                       { return CONST; }
"function"                    { return FUNCTION; }
"procedure"                   { return PROCEDURE; }
"begin"                       { return TBEGIN; }
"end"                         { return END; }
"if"                          { return IF; }
"else"                        { return ELSE; }
"while"                       { return WHILE; }
"for"                         { return FOR; }
"to"                          { return TO; }
"downto"                      { return DOWNTO; }
"read"                        { return READ; }
"readln"                      { return READLN; }
"write"                       { return WRITE; }
"writeln"                     { return WRITELN; }
"and"                         { return AND_OP; }
"or"                          { return OR_OP; }
"div"                         { return DIV_KEYWORD; }
"mod"                         { return MOD_KEYWORD; }
"not"                         { return NOT_OP; }

[0-9]+"."[0-9]+([eE][-+]?[0-9]+)?   { return REAL_CONSTANT; }
[0-9]+                        { return INTEGER_CONSTANT; }
[a-zA-Z][a-zA-Z0-9]*          { return IDENTIFIER; }
\(\*((\*+[^)*])|([^*]+))*\*\) { /* Ignore comments */ }

"+"                           { return ADD_OP; }
"-"                           { return SUB_OP; }
"*"                           { return MUL_OP; }
"/"                           { return DIV_OP; }
":="                          { return ASSIGN_OP; }

";"                           { return SEMICOLON; }
","                           { return COMMA; }
":"                           { return COLON; }
"("                           { return LPAREN; }
")"                           { return RPAREN; }
"["                           { return LBRACKET; }
"]"                           { return RBRACKET; }
"."                           { return DOT; }

\"[^"]*\"                     { return STRING_LITERAL; }

[ \t]+                        { /* Ignore whitespace */ }
\n                            { /* Ignore newlines and increment line count if needed */ }
.                             {printf("Caracter desconocido: %s ",yytext);}

%%
