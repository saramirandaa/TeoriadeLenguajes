%{
    #include lex.yy.h    
%}

%%

Sprima: S '#'
        ;

S: 'a' A B C
    ;

A: 'a'
    |   'b' 'b' D
    ;

B: 'a'
    | /*Vacío*/
    ;

C: 'b'
    | /*Vacío*/
    ;

D: 'c'
    | /*Vacío*/
    ;    

%%

int main(int argc, char *argv[]) {
	++argv; --argc;
	if (argc > 0) 
	{
		yyin = fopen(argv[0], "r");
		if (!yyin) 
		{
			perror("Couldn't open file");
			return 1;
		}
	} else { yyin = stdin; }

	yyparse();

	if (argc > 0) { fclose(yyin); }

	return 0;
}