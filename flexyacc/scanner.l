%{

#include <stdio.h>
#include <stdlib.h>
#include "sintactico.tab.h"

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

extern yyerror(char *s);

%}

%%


"="	       		{
					yylval = yytext[0];
					return IMPLICATION;
		       }
		       
">"	       		{
					yylval = yytext[0];
					return SUBSET;
		       }
		       
"AND"	       		{
					yylval = yytext[0];
					return TOKEN_AND;
		       }
		       
		       
"OR"	       		{
					yylval = yytext[0];
					return TOKEN_OR;
		       }

"NOT"	       		{
					yylval = yytext[0];
					return TOKEN_NOT;
		       }

"true"	       		{
					yylval = yytext[0];
					return TOKEN_TRUE;
		       	}

"false"	       		{
					yylval = yytext[0];
					return TOKEN_FALSE;
		       }

"("	       		{
					yylval = yytext[0];
					return LEFTPARENT;
		       }

")"	       		{
					yylval = yytext[0];
					return RIGHTPARENT;
		       }

"i"	       		{
					yylval = yytext[0];
					return IDENTIFIER;
		       }


.                {yyerror("Caracter desconocido");}     

%%


int yywrap(void) 
{
    return 1;
}


