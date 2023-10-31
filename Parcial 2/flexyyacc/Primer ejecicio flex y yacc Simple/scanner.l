%{

#include <stdio.h>
#include <stdlib.h>
#include "sintactico.tab.h"

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

#include <malloc.h> // para las definiciones de malloc, free que provocan warning
#include <stdlib.h> // para las definiciones de exit que provocan warning

%}

%%

"a"	       		{
				return yytext[0];
		       }
		       
"b"	       		{
				return yytext[0];
		       }
		       
"c"	       		{
				return yytext[0];
		       }
		       
"#"	       		{
				return yytext[0];
		       }

.                      yyerror("Caracter invalido");

%%


int yywrap(void) 
{
    return 1;
}



