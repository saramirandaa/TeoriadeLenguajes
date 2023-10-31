%{

#include <stdio.h>
#pragma warning(disable: 4013 4244 4267)

%}

%token PARENTESIS_IZQUIERDO PARENTESIS_DERECHO 
%left '+' 
%left '*'

%union
{
    float flotante;
    unsigned int entero;
}

%token <entero> NUMERO_ENTERO 
%token <flotante> NUMERO_FLOTANTE

%%

expresion : 
		 termino expresion_prima
   		;

expresion_prima :
	          '+' termino expresion_prima
	         | 
	   	 ;

termino :
	  factor termino_prima
	  ;
	  
termino_prima : 
		 '*' factor termino_prima
		| /* vacio */
		;
		
factor :
	  NUMERO_ENTERO
	| NUMERO_FLOTANTE
	| PARENTESIS_IZQUIERDO expresion PARENTESIS_DERECHO
	;

%%

int yyerror(char *s) 
{
   printf("Error %s\n", s);
   exit(1); /* Sale del programa */
   return 0;
}

int main(int argc, char * argv[])
{
   yyparse();
   printf("Linea reconocida correctamente\n");
   return 0;
}
