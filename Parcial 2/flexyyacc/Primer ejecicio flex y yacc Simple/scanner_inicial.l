%{

#include <stdio.h>
#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

#pragma warning(disable: 4996 6011 6385 4244 4267)

%}

%option outfile="scanner_inicial.c"

%%

"#"	              {
				printf("Encontrado el caracter %s\n", yytext);
		       }
		       
"a"		      {
				printf("Encontrado el caracter %s\n", yytext);
		       }
		       
"b"		       {
				printf("Encontrado el caracter %s\n", yytext);
		       }

"c"		       {
				printf("Encontrado el caracter %s\n", yytext);
		       }

.		       {
				printf("Encontrado un caracter invalido %s\n", yytext);
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



