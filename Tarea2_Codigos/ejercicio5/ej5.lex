%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *original = NULL;  
char *nueva = NULL;  

%}

%%

. { printf("%s", yytext); } 

[[:alnum:]]+ {
    printf("%s", (strcmp(yytext, original) == 0) ? nueva : yytext);
}

%%

int main(int argc, char *argv[]) {
    ++argv;
    --argc;
    if (argc < 3) { 
        fprintf(stderr, "ERROR: Escriba la palabra a buscar y el archivo de texto\n\t Vuelva a correr el código\n");
        return 1;
    }
    
    original = argv[0];  
    nueva = argv[1];   
    yyin = fopen(argv[2], "r"); 

    if (!yyin) { 
        fprintf(stderr,"ERROR: No se encontró el archivo"); 
        return 1;
    }
    yylex(); 
    fclose(yyin); 
   
    return 0;
}

int yywrap(){
    return 1;  
}
