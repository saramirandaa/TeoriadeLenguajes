%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
  
%}


%option case-insensitive  //esta linea es para que no haya importancia si hay mayusculas o minusculas

P_RESERVADAS  (inicio|fin|mod|y|o|no|leer|escribir|si|entonces|si_no|fin_si|mientras|hacer|fin_mientras|repetir|hasta_que|para|desde|hasta|paso|fin_para)
NUMERO [0,9]
CHAR [a-zA-Z]
ESPACIO [" "]
COMENTARIO ["#"]
GUIONES [-_]
COMA        ","
PUNTO       "."

IDENTIFICADOR {CHAR}({CHAR}|{NUMERO}|{GUIONES})*
CONST_DOUBLE {NUMERO}{0,8}{PUNTO}{NUMERO}{1,8}
CONST_CADENA \"[^\n"]*\"

SUMA            "+"
RESTA           "-"
MULT            "*"
DIV             "/"
POTENCIA        "**"
MODULO          "MOD"
MAYOR           ">"
MENOR           "<"
MAYOR_IGUAL     ">="
MENOR_IGUAL     "<="
DESIGUAL        "<>"
DISTINTO        "!="
NEGACION        "!"


LLAVE_AB ["{"]
LLAVE_CE ["}"]


FIN ;

%%
{COMA}      {printf("\nCOMA (%s)", yytext);}
{RESTA}      {printf("\nRESTA (%s)", yytext);}
{MULT}      {printf("\nMULT (%s)", yytext);}
{DIV}      {printf("\nDIV (%s)", yytext);}
{MAYOR_IGUAL}       {printf("\nMAYOR_IGUAL (%s)", yytext);}
{MAYOR}      {printf("\nMAYOR (%s)", yytext);}

{MODULO}        {printf("\nMODULO (%s)", yytext);}


{P_RESERVADAS}      {printf("\nP_RESERVADAS (%s)", yytext);}
{NUMERO}      {printf("\nNUMERO (%s)", yytext);}
{CHAR}      {printf("\nCHAR (%s)", yytext);}
{ESPACIO}      {printf("\nESPACIO (%s)", yytext);}
{COMENTARIO}      {printf("\nCOMENTARIO (%s)", yytext);}
{GUIONES}      {printf("\nGUIONES (%s)", yytext);}

{PUNTO}      {printf("\nPUNTO (%s)", yytext);}
{IDENTIFICADOR}      {printf("\nIDENTIFICADOR (%s)", yytext);}
{CONST_DOUBLE}      {printf("\nCONST_DOUBLE (%s)", yytext);}
{CONST_CADENA}      {printf("\nCONST_CADENA (%s)", yytext);}
{SUMA}      {printf("\nSUMA (%s)", yytext);}


{POTENCIA}      {printf("\nPOTENCIA (%s)", yytext);}


{MENOR}      {printf("\nMENOR (%s)", yytext);}

{MENOR_IGUAL}      {printf("\nMENOR_IGUAL (%s)", yytext);}
{DESIGUAL}      {printf("\nDESIGUAL (%s)", yytext);}
{DISTINTO}      {printf("\nDISTINTO (%s)", yytext);}
{NEGACION}      {printf("\nNEGACION (%s)", yytext);}
{LLAVE_AB}      {printf("\nLLAVE_AB (%s)", yytext);}
{LLAVE_CE}      {printf("\nLLAVE_CE (%s)", yytext);}




"\n"
"\t"


%%
int main(int argc, char *argv[]) {
    ++argv;  
    --argc;
    if (argc < 1) 
    {  
        fprintf(stderr, "ERROR: Escriba el archivo de texto\n\t Vuelva a correr el código\n");
        return 1;
    }
    yyin = fopen(argv[0], "r");  
    if (!yyin) 
    { 
        fprintf(stderr,"ERROR: No se encontró el archivo"); 
        return 1;
    }
    yylex();
    fclose(yyin);
    return 0;

}

int yywrap() {
    return 1;
}     