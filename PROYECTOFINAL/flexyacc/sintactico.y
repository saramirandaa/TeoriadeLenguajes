%{

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4013 4244 4267 4996)

extern FILE * yyin;

extern int yylex();
int yyerror(char *s);

%}

%token GATO TOKEN_PLUS TOKEN_MULT TOKEN_MINUS

%token TOKEN_b TOKEN_c TOKEN_d TOKEN_e TOKEN_f 


%debug

%%

G : A GATO
	;

A : TOKEN_PLUS TOKEN_b
	| TOKEN_c TOKEN_d S
	| TOKEN_b TOKEN_MULT S TOKEN_MINUS
	;
	         
S : TOKEN_e TOKEN_PLUS
	| TOKEN_MINUS TOKEN_f
	;
		
%%


int yyerror(char *s) 
{
   printf("Error %s\n", s);
   exit(1);
   return 0;
}

int main(int argc, char * argv[])
{
/* ++argv, --argc;
	if ( argc > 0 )
	{
		yyin = fopen( argv[0], "r" );
		if(!yyin)
			yyin = stdin;		
	}
	else
		yyin = stdin; */
   yyparse();
   printf("SUCCESS\n");
   return 0;
}
