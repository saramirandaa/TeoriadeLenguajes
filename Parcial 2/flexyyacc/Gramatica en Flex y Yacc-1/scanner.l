%{

#include <stdio.h>
#include <stdlib.h>
#include "sintactico.tab.h"

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

%}

NO_CERO [1-9]
DIGITOS [0-9]
NUMERO_ENTERO {NO_CERO}{DIGITOS}*
NUMERO_FLOTANTE {NUMERO_ENTERO}\.{DIGITOS}*  

%%

{NUMERO_ENTERO}	       {
				yylval.entero = atoi(yytext);
				return NUMERO_ENTERO;
		       }
		       
{NUMERO_FLOTANTE}      {
				yylval.flotante = atof(yytext);
				return NUMERO_FLOTANTE;
		       }
		       
"+"		       {
				return *yytext;
		       }

"*"		       {
				return *yytext;
		       }

"("		       {
				return PARENTESIS_IZQUIERDO;
		       }

")"		       {
				return PARENTESIS_DERECHO;
		       }


.                      yyerror("Caracter invalido");

%%


int yywrap(void) 
{
    return 1;
}



