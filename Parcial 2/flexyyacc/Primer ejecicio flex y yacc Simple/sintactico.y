%{

#include <stdio.h>
#pragma warning(disable: 4013 4244 4267)

%}

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
   yyparse();
   printf("Linea reconocida correctamente\n");
   return 0;
}
