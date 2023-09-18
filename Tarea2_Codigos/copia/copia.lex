%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAX_LENGTH = 64;        
int fileProcessed = 0;      
%}

%option case-insensitive    
SINGLE_LINE_COMMENT   \#.*            
MULTI_LINE_COMMENT    \(\*[^*]*\*\)   

LOGICAL_OPS     (no|y|o)                       
ARITHMETIC_OPS  (\+|-|\*|\/|mod|\*\*)          
RESERVED_WRDS  (inicio|fin|mod|o|y|no|leer|escribir|si|entonces|si_no|fin_si|mientras|hacer|fin_mientras|repetir|hasta_que|para|desde|hasta|paso|fin_para)      
NUMBER          [0-9]                 
LETTER         [A-Za-z]               

ANSTRING        \'([^'\\]|(\\.))*\'   
ANNUMBER        {NUMBER}+(\.{NUMBER}+)?([eE][+-]?{NUMBER}+)?   

ASSIGN_OPS      :=                     
RELATIONAL_OPS  (\<|\<=|\>|>=|==|\<>)  

END_INST        ;                      
PARENTH         (\(|\))                

ERR_IDTF        [^{LETTER}_][{LETTER}{NUMBER}_]+|.*__.*|.*_$   
IDENTIFIER      {LETTER}({LETTER}|{NUMBER}|_)*                 
ERR_NUM         {NUMBER}*\.{NUMBER}*\.{NUMBER}+|{NUMBER}*\.?[eE][^{NUMBER}]*|{NUMBER}*\.?[eE][+-][^{NUMBER}]+  

%%


{MULTI_LINE_COMMENT} { printf("Multi-line comment found \n"); }
{SINGLE_LINE_COMMENT} { printf("Single-line comment found \n"); }

[ \t\n]+  

{LOGICAL_OPS} { printf("Found logical operator --> %s\n", yytext); }
{ARITHMETIC_OPS} { printf("Found arithmetic operator --> %s\n", yytext); }
{RESERVED_WRDS} { printf("Found reserved word --> %s\n", yytext); }

{ANSTRING} {
    char string[MAX_LENGTH];
    strncpy(string, yytext + 1, strlen(yytext) - 2);
    string[strlen(yytext) - 2] = '\0';
    printf("Found string --> %s\n", string);
}

{ANNUMBER} { printf("Found number --> %s\n", yytext); }
{ASSIGN_OPS} { printf("Found assignment operator --> %s\n", yytext); }
{RELATIONAL_OPS} { printf("Found relational operator --> %s\n", yytext); }
{END_INST} { printf("Found end of instruction --> %s\n", yytext); }
{PARENTH} { printf("Found parenthesis --> %s\n", yytext); }

{ERR_IDTF} { printf("Error: Invalid identifier --> %s\n", yytext); }
{IDENTIFIER} { printf("Found identifier --> %s\n", yytext); }
{ERR_NUM} { printf("Error: Incorrect number format --> %s\n", yytext); }
{ERR_SYM} { printf("Error: Not allowed symbol --> %s\n", yytext); }

%%

int main(int argc, char *argv[]) {
    ++argv;  // Desplazarse al siguiente argumento
    --argc;  // Reducir el conteo de argumentos

    if (argc > 0) {
        yyin = fopen(argv[0], "r");  // Si hay argumentos, se intenta abrir el primer archivo
        if (!yyin) {
            perror("Couldn't open file");  // Mostrar error si no se puede abrir el archivo
            return 1;
        }
    } else {
        yyin = stdin;  // Si no hay argumentos, se usa la entrada estandar
    }

    yylex();  // Invocar el lexer

    if (argc > 0) {
        fclose(yyin);  // Cerrar el archivo si se abrio
    }

    return 0;
}

int yywrap() {
    if (fileProcessed) {
        return 1;  // Finalizar si el archivo ya fue procesado
    }
    fileProcessed = 1;  // Marcar archivo como procesado
    return 0;  // Continuar procesamiento
}
