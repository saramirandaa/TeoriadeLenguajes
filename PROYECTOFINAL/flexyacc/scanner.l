%{

#include <stdio.h>
#include <stdlib.h>
#include "sintactico.tab.h"

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

extern int yyerror(char *s);

%}

%%


"#"	       		{
					yylval = yytext[0]; 
					return GATO;
		       }
		       
"+"	       		{
					yylval = yytext[0];
					return TOKEN_PLUS;
		       }
		       
"*"	       		{
					yylval = yytext[0];
					return TOKEN_MULT;
		       }
		       
		       
"-"	       		{
					yylval = yytext[0];
					return TOKEN_MINUS;
		       }

"b"	       		{
					yylval = yytext[0];
					return TOKEN_b;
		       }

"c"	       		{
					yylval = yytext[0];
					return TOKEN_c;
		       	}

"d"	       		{
					yylval = yytext[0];
					return TOKEN_d;
		       }

"e"	       		{
					yylval = yytext[0];
					return TOKEN_e;
		       }

"f"	       		{
					yylval = yytext[0];
					return TOKEN_f;
		       }


.               {yyerror("Caracter desconocido");}     

%%


int yywrap(void) 
{
    return 1;
}


