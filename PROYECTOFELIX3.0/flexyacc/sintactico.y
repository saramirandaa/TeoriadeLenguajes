%{
#include <stdio.h>
#include <stdlib.h>
extern int yylex(void);
extern void yyerror(const char *s);
extern FILE *yyin;

int yydebug = 1;
%}

%token PROGRAM INTEGER_TYPE REAL_TYPE STRING_TYPE BOOLEAN_TYPE VAR CONST FUNCTION PROCEDURE
%token TBEGIN END IF ELSE WHILE FOR TO DOWNTO READ READLN WRITE WRITELN
%token AND_OP OR_OP DIV_KEYWORD MOD_KEYWORD NOT_OP ADD_OP SUB_OP MUL_OP DIV_OP ASSIGN_OP
%token SEMICOLON COMMA COLON LPAREN RPAREN LBRACKET RBRACKET DO THEN DOT
%token INTEGER_CONSTANT REAL_CONSTANT STRING_LITERAL IDENTIFIER ARRAY OF COMMENT
%%

programa
    : PROGRAM identificador LPAREN identificador_lista RPAREN SEMICOLON declaraciones subprograma_declaraciones instruccion_compuesta DOT
    ;

identificador
    : IDENTIFIER
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
    : VAR identificador_lista COLON tipo SEMICOLON declaraciones_variables
    | bloque_codigo
    |
    ;

bloque_codigo
    : TBEGIN instrucciones_opcionales END
    ;

declaraciones_constantes
    : CONST IDENTIFIER ASSIGN_OP INTEGER_CONSTANT SEMICOLON declaraciones_constantes
    | CONST IDENTIFIER ASSIGN_OP REAL_CONSTANT SEMICOLON declaraciones_constantes
    | CONST IDENTIFIER ASSIGN_OP STRING_LITERAL SEMICOLON declaraciones_constantes
    |
    ;

tipo
    : estandar_tipo
    | ARRAY LBRACKET INTEGER_CONSTANT TO INTEGER_CONSTANT RBRACKET OF estandar_tipo
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
    : WRITE LPAREN STRING_LITERAL COMMA identificador RPAREN
    | WRITELN LPAREN STRING_LITERAL COMMA identificador RPAREN
    | WRITE LPAREN STRING_LITERAL RPAREN
    | WRITELN LPAREN STRING_LITERAL RPAREN
    | WRITE LPAREN STRING_LITERAL COMMA expresion RPAREN
    | WRITELN LPAREN STRING_LITERAL COMMA expresion RPAREN
    | WRITELN LPAREN STRING_LITERAL COMMA expresion_lista RPAREN
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
    : IDENTIFIER
    | IDENTIFIER LBRACKET expresion RBRACKET
    ;

procedure_instruccion
    : IDENTIFIER
    | IDENTIFIER LPAREN expresion_lista RPAREN
    ;

relop_expresion
    : relop_expresion OR_OP relop_and
    | relop_and
    ;

relop_and
    : relop_and AND_OP relop_not
    | relop_not
    ;

relop_not
    : NOT_OP relop_not
    | relop_paren
    ;

relop_paren
    : LPAREN relop_expresion RPAREN
    | relop_expresion_simple
    ;

relop_expresion_simple
    : expresion relop_expresion expresion
    ;

expresion_lista
    : expresion
    | expresion_lista COMMA expresion
    ;

expresion: expresion ADD_OP termino
    | termino
    ;

termino: factor
    | termino ADD_OP factor
    | termino MUL_OP factor
    ;

llamado_funcion
    : IDENTIFIER LPAREN expresion_lista RPAREN
    ;

factor
    : IDENTIFIER
    | IDENTIFIER LBRACKET expresion RBRACKET
    | llamado_funcion
    | INTEGER_CONSTANT
    | REAL_CONSTANT
    | signo factor
    | LPAREN expresion RPAREN
    ;

signo
    : ADD_OP
    | SUB_OP
	|
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



    return 0;
}