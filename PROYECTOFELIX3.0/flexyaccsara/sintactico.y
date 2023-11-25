%{
#include <stdio.h>
#include <stdlib.h>
#include "TablaSim.h"
extern int yylex(void);
extern void yyerror(const char *s);
extern FILE *yyin;
extern int yylineno;
int yydebug = 1;

HashTable ht;
data_value variable;
Var_Types variable_type;
%}

%token PROGRAM LPAREN RPAREN SEMICOLON DOT AND OR_OP EQUAL_OP NOT_EQUAL_OP 
%token LESS_THAN_OP GREATER_THAN_OP LESS_THAN_EQUAL_OP GREATER_THAN_EQUAL_OP ADD_OP SUB_OP MUL_OP DIV_OP MOD_OP
%token DIV_KEYWORD MOD_KEYWORD COMMA VAR CONST COLON ARRAY LBRACKET RBRACKET OF INTEGER_TYPE REAL_TYPE 
%token STRING_TYPE BOOLEAN_TYPE FUNCTION PROCEDURE TBEGIN END WHILE FOR DO READ READLN WRITE WRITELN IF THEN ELSE
%token E_MINUS E_MAYUS QUOTE DOLLAR AMPERSAND PERCENT HASH ASSIGN_OP NOT TO DOWNTO 

%token <num> DIGITO DIGIT_NON_CERO
%union {
    char* string_val;
}

%token <string_val> IDENTIFICADOR_


%%

programa 
    : {create_table(ht);}
    PROGRAM identificador LPAREN identificador_lista RPAREN SEMICOLON declaraciones subprograma_declaraciones
        instruccion_compuesta DOT {
        
       
        print_table(ht);
        //ht_delete(ht, "X1");
        //print_search(ht, "C1");
        
        
    }
    ;

identificador 
    : IDENTIFICADOR_ 
    {
        printf("Se leyó el identificador '%s' en la linea %d correctamente\n", $1, yylineno); 

        create_table(ht);
        data_value data;
        data.identifier = $1;
        data.memory_assign = 0;
        data.type = INTEGER;
        data.bytes_size = 0;
        data.source_line_definition = 0;
        data.scope = 0;

        ht_insert(ht, $1 , data);
        //data_value data_1 = { $1, 0, BOOLEAN, 20, 1000, "12 , 13, 14", 1 };
        
        //ids_array($1);
        free($1);
    }

relop 
    : AND 
    | OR_OP 
    | EQUAL_OP 
    | NOT_EQUAL_OP 
    | LESS_THAN_OP 
    | GREATER_THAN_OP 
    | LESS_THAN_EQUAL_OP 
    | GREATER_THAN_EQUAL_OP
    ;

addop 
    : ADD_OP 
    | SUB_OP
    ;

mulop 
    : MUL_OP 
    | DIV_OP 
    | DIV_KEYWORD 
    | MOD_KEYWORD
    ;

identificador_lista 
    : identificador 
    | identificador_lista COMMA identificador
    ;

declaraciones 
    : declaraciones_variables 
    | declaraciones_constantes
    ;

declaraciones_variables 
    : declaraciones_variables VAR identificador_lista COLON tipo SEMICOLON 
    |
    ;

declaraciones_constantes 
    : declaraciones_constantes CONST identificador EQUAL_OP constante_entera SEMICOLON
    | declaraciones_constantes CONST identificador EQUAL_OP constante_real SEMICOLON
    | declaraciones_constantes CONST identificador EQUAL_OP constante_cadena SEMICOLON 
    |
    ;

int_num 
    : DIGITO 
    | DIGITO int_num
    ;

tipo 
    : estandar_tipo 
    | ARRAY LBRACKET int_num DOT DOT int_num RBRACKET OF estandar_tipo
    ;

estandar_tipo 
    : INTEGER_TYPE 
    | REAL_TYPE 
    | STRING_TYPE 
    | BOOLEAN_TYPE
    ;

subprograma_declaraciones 
    : subprograma_declaraciones subprograma_declaracion SEMICOLON 
    |
    ;

subprograma_declaracion 
    : subprograma_encabezado declaraciones subprograma_declaraciones instruccion_compuesta
    ;

subprograma_encabezado 
    : FUNCTION identificador argumentos COLON estandar_tipo SEMICOLON
    | PROCEDURE identificador argumentos SEMICOLON
    ;

argumentos 
    : LPAREN parametros_lista RPAREN 
    |
    ;
    
parametros_lista 
    : identificador_lista COLON tipo 
    | parametros_lista SEMICOLON identificador_lista COLON tipo
    ;

instruccion_compuesta 
    : TBEGIN instrucciones_opcionales END
    ;

instrucciones_opcionales 
    : instrucciones_lista 
    |
    ;

instrucciones_lista 
    : instrucciones 
    | instrucciones_lista SEMICOLON instrucciones
    ;

instrucciones 
    : variable_asignacion 
    | procedure_instruccion 
    | instruccion_compuesta 
    | if_instruccion
    | repeticion_instruccion 
    | lectura_instruccion 
    | escritura_instruccion
    ;
    
repeticion_instruccion 
    : WHILE relop_expresion DO instrucciones
    | FOR for_asignacion TO expresion DO instrucciones
    | FOR for_asignacion DOWNTO expresion DO instrucciones
    ;

lectura_instruccion 
    : READ LPAREN identificador RPAREN 
    | READLN LPAREN identificador RPAREN
    ;

escritura_instruccion 
    : WRITE LPAREN constante_cadena COMMA identificador RPAREN 
    | WRITELN LPAREN constante_cadena COMMA identificador RPAREN
    | WRITE LPAREN constante_cadena RPAREN 
    | WRITELN LPAREN constante_cadena RPAREN
    | WRITE LPAREN constante_cadena COMMA expresion RPAREN 
    | WRITELN LPAREN constante_cadena COMMA expresion RPAREN
    | WRITE LPAREN identificador RPAREN 
    | WRITELN LPAREN identificador RPAREN
    ;

constante_cadena 
    : QUOTE cadena QUOTE
    ;

cadena 
    : cadena caracter_alfanumerico 
    |
    ;

caracter_alfanumerico 
    : IDENTIFICADOR_ 
    | DOLLAR 
    | AMPERSAND 
    | DIV_OP 
    | ADD_OP 
    | SUB_OP 
    | MUL_OP 
    | PERCENT 
    | EQUAL_OP 
    | COLON 
    | LBRACKET 
    | RBRACKET 
    | GREATER_THAN_OP | LESS_THAN_OP | SEMICOLON 
    | COMMA | DOT | HASH
    ;

if_instruccion 
    : IF relop_expresion THEN instrucciones
    | IF relop_expresion THEN instrucciones ELSE instrucciones
    ;

variable_asignacion 
    : variable ASSIGN_OP expresion
    ;

for_asignacion 
    : variable_asignacion 
    | variable
    ;

variable   
    : identificador 
    | identificador LBRACKET expresion RBRACKET
    ;

procedure_instruccion 
    : identificador | identificador LPAREN expresion_lista RPAREN
    ;

relop_expresion 
    : relop_expresion OR_OP relop_and 
    | relop_and
    ;

relop_and 
    : relop_and AND relop_not 
    | relop_not
    ;

relop_not 
    : NOT relop_not 
    | relop_paren
    ;

relop_paren 
    : LPAREN relop_expresion RPAREN 
    | relop_expresion_simple
    ;

relop_expresion_simple 
    : expresion relop expresion
    ;

expresion_lista 
    : expresion 
    | expresion_lista COMMA expresion
    ;

expresion 
    : termino 
    | expresion addop termino
    ;

termino 
    : factor 
    | termino mulop factor
    ;

llamado_funcion 
    : identificador LPAREN expresion_lista RPAREN
    ;

factor 
    : identificador
    | identificador LBRACKET expresion RBRACKET 
    | llamado_funcion 
    | constante_entera 
    | constante_real
    | signo factor 
    | LPAREN expresion RPAREN
    ;

signo 
    : ADD_OP 
    | SUB_OP
    |
    ;

constante_entera 
    : signo numero_entero
    ;
numero_entero 
    : DIGIT_NON_CERO numero
    ;

numero 
    : numero DIGITO 
    |
    ;

constante_real 
    : signo numero_entero DOT numero_entero 
    | signo numero_entero DOT numero_entero exponente
    ;

exponente
    : E_MINUS signo numero_entero
    | E_MAYUS signo numero_entero
    ;


%%

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