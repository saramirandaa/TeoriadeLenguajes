%{

#include <stdio.h>

#pragma warning(disable: 4996 6011 6385 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

%}

%option outfile="scanner_inicial.c"

NO_CERO [1-9]
DIGITOS [0-9]
NUMERO_ENTERO {NO_CERO}{DIGITOS}*
NUMERO_FLOTANTE {NUMERO_ENTERO}\.{DIGITOS}*  

%%

{NUMERO_ENTERO}	       {
				printf("Se encontro un numero entero %s\n", yytext);
		       }
		       
{NUMERO_FLOTANTE}      {
				printf("Se encontro un numero flotante %s\n", yytext);
		       }
		       
"+"		       {
				printf("Se encontro un signo de suma %s\n", yytext);
		       }

"*"		       {
				printf("Se encontro un signo de multiplicacion %s\n", yytext);
		       }

"("		       {
				printf("Se encontro un parentesis izquierdo  %s\n", yytext);
		       }

")"		       {
				printf("Se encontro un parentesis derecho %s\n", yytext);
		       }


.		       {
				printf("Se encontro un caracter invalido %s\n", yytext);
		       }

%%

int main(int argc, char * argv[])
{
    	++argv;
    	--argc;  
    	if (argc > 0)
            yyin = fopen( argv[0], "r" );
    	else
            yyin = stdin;
    
    	yylex();
       	return(0);
}

int yywrap(void) 
{
    return 1;
}



