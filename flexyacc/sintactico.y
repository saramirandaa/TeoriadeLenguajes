%{

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable: 4013 4244 4267 4996)

extern FILE * yyin;

extern int yylex();
int yyerror(char *s);

%}

%token IMPLICATION SUBSET TOKEN_AND TOKEN_OR TOKEN_NOT 

%token TOKEN_TRUE TOKEN_FALSE LEFTPARENT RIGHTPARENT IDENTIFIER


%debug

%%

Simple_boolean : Implication
				| Simple_boolean IMPLICATION Implication
				;

Implication : Boolean_Term
			| Implication SUBSET Boolean_Term
	        ;
	         
Boolean_Term :Boolean_Factor
			  | Boolean_Term TOKEN_AND Boolean_Factor
			  ;

Boolean_Factor : Boolean_Secondary
			  | Boolean_Factor TOKEN_OR Boolean_Secondary
			  ;
			
		
Boolean_Secondary : Boolean_Primary
			  | TOKEN_NOT Boolean_Primary
			  ;
		

Boolean_Primary : Logical_Value
				| IDENTIFIER 
				| LEFTPARENT Simple_boolean RIGHTPARENT
				;

Logical_Value : TOKEN_TRUE
				| TOKEN_FALSE
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
   printf("Linea reconocida correctamente\n");
   return 0;
}
