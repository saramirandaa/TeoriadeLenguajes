%{
    //Aqui se definen todas las librerias que se ocuparan entre ellas string que se utilizará para comparar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//variables de la palabra original y la palabra nueva
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
    if (argc < 3) {  //condicional para que el ususario escriba tres argumentos al correr el codigo
        fprintf(stderr, "ERROR: Escriba la palabra a reemplazar, la palabra neuva y el archivo de texto\n\t Vuelva a correr el código\n");
        return 1;
    }
    
    //aqui se define el orden de los argumentos y se asignan a su variable
    original = argv[0];  
    nueva = argv[1];   
    yyin = fopen(argv[2], "r"); 

    //Condicional que marcará error si el archivo de texto no existe 
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
