%{

#include <stdio.h>
#pragma warning(disable: 4013 4244 4267 4996)

extern FILE * yyin;

%}

%debug

%%

S_prima : 
		 S '#'
   		;

S :
	          'a' A B C
	         ;
	         
A :
	  'a'
	  | 'b' 'b' D
	  ;
	  
B : 
		 'a'
		| /* vacio */
		;
		
C : 
		 'b'
		| /* vacio */
		;
		
D : 
		 'c'
		| /* vacio */
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
++argv, --argc; /* salta el nombre del programa que se ejecuta */
	if ( argc > 0 )
	{
		yyin = fopen( argv[0], "r" );
		if(!yyin)
			yyin = stdin;		
	}
	else
		yyin = stdin;
   yyparse();
   printf("Linea reconocida correctamente\n");
   return 0;
}
