%{

#include <stdio.h>
#include <stdlib.h>
#include "sintactico.tab.h"

#pragma warning(disable: 4996 6011 6385 4013 4244 4267)

extern int yyerror(char *s);

%}

%%

	[a-zA-Z]
	{
		return LETTER;
	}

	[0-9]
	{
		return DIGIT;
	}

	[a-zA-Z0-9\$\&\/\+\-\*\%\=:\{\}>\<;\[\],\.\#]
	{
		return ALPHANUMERICAL_CHAR;
	}
	
	[0-9]
	{
		return INT_NUMBER
	}

	
	INT 
	{
		"integer"
	}
	REAL_TYPE
	{
		"real"
	}
	STRING_TYPE
	{
		"string"
	}
	BOOLEAN_TYPE
	{
		"boolean"
	}
	RELOP
	{
		"and" | "or"
	}
	ADDOP
	{
		"+" | "-"
	}
	MULOP
	{
		"*" | "/" | "div" | "mod"
	}
	EMPTY
	{
		" "
	}
	PARENTHESIS_OPEN
	{
		"("
	}
	PARENTHESIS_CLOSE
	{
		")"
	}
	DOT_COMMA
	{
		";"
	}
	DOT
	{
		"."
	}
	COMMA 
	{
		","
	}
	DOT_DOT
	{
		":"
	}

	EQUALS
	{
		"="
	}

	CONS
	{
		"cons"
	}

	VAR
	{
		"var"
	}

	ARRAY
	{
		"array"
	}

	BRACKET_OPEN
	{
		"["
	}

	BRACKET_CLOSE
	{
		"]"
	}

	OF
	{
		"of"
	}

	FUNCTION
	{
		"function"
	}

	TPROGRAM
	{
		"program"
	}

	BEGIN
	{
		"begin"
	}

	END
	{
		"end"
	}

	WHILE 
	{
		"while"
	}

	FOR
	{
		"for"
	}

	TO
	{
		"to"
	}

	DO
	{
		"do"
	}

	DOWNTO
	{
		"downto"
	}

	IF
	{
		"if"
	}

	THEN
	{
		"then"
	}

	ELSE
	{
		"else"
	}

	READLN
	{
		"readln"
	}	

	QUOTATIONS
	{
		"\""
	}

	E_MINUS
	{
		"e"
	}

	E_MAYUS
	{
		"E"
	}

	NO_CERO_DIGIT
	{
		[1-9]
	}
	.               {yyerror("Caracter desconocido");}     

%%


int yywrap(void) 
{
    return 1;
}


