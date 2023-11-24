%{
#include "sintactico.tab.h"
#include "TablaSim.h"
extern int yyerror(char *s);

%}

%option noyywrap 

%%

"program"                     { return PROGRAM; }
"integer"                     { return INTEGER_TYPE; }
"real"                        { return REAL_TYPE; }
"string"                      { return STRING_TYPE; }
"boolean"                     { return BOOLEAN_TYPE; }
"and"                         { return AND; }
"or"                          { return OR_OP; }
"+"                           { return ADD_OP; }
"-"                           { return SUB_OP; }
"div"                         { return DIV_KEYWORD; }
"mod"                         { return MOD_KEYWORD; }
"*"                           { return MUL_OP; }
"/"                           { return DIV_OP; }
"var"                         { return VAR; }
"const"                       { return CONST; }
"array"                       { return ARRAY; }
"of"                          { return OF; }
"["                           { return LBRACKET; }
"]"                           { return RBRACKET; }
";"                           { return SEMICOLON; }
","                           { return COMMA; }
":"                           { return COLON; }
"function"                    { return FUNCTION; }
"procedure"                   { return PROCEDURE; }
"("                           { return LPAREN; }
")"                           { return RPAREN; }
"begin"                       { return TBEGIN; }
"end"                         { return END; }
"if"                          { return IF; }
"else"                        { return ELSE; }
"then"                        { return THEN; }
"while"                       { return WHILE; }
"for"                         { return FOR; }
"to"                          { return TO; }
"do"                          { return DO; }
"downto"                      { return DOWNTO; }
"read"                        { return READ; }
"readln"                      { return READLN; }
"write"                       { return WRITE; }
"writeln"                     { return WRITELN; }
"="                           { return EQUAL_OP; }
"<>"                          { return NOT_EQUAL_OP; }
"<"                           { return LESS_THAN_OP; }
"<="                          { return LESS_THAN_EQUAL_OP; }
">"                           { return GREATER_THAN_OP; }
">="                          { return GREATER_THAN_EQUAL_OP; }
"%"                           { return PERCENT; }
"&"                           { return AMPERSAND; }
"$"                           { return DOLLAR; }
"#"                           { return HASH; }
"not"                         { return NOT; }
"\""                          { return QUOTE; }
\(\*((\*+[^)*])|([^*]+))*\*\) { /* Ignore comments */ }
":="                          { return ASSIGN_OP; }
"."                           { return DOT; }
[e]*                          { return E_MINUS; }
[E]*                          { return E_MAYUS; }    
[a-zA-Z][a-zA-Z0-9]*          { return IDENTIFICADOR_; }
[1-9]*                        { return DIGIT_NON_CERO; }
[0-9]+                        { return DIGITO; }



[ \t]+                        { /* Ignore whitespace */ }
\n                            { ++yylineno; printf("......Reading line %d\n", yylineno); processLine(yylineno)/* Ignore newlines and increment line count if needed */ }
.                             {printf("Caracter desconocido: %s ",yytext);}

%%
/* PREGUNTAR COMO SSE HACE EL EXPONENTE 
[a-zA-Z][a-zA-Z0-9]*          { return IDENT; }
*/