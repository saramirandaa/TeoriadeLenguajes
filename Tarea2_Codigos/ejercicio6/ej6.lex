%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #define NUM_PALABRAS 22
    #define MAX_LONGITUD 20

    char palabras_reservadas[NUM_PALABRAS][MAX_LONGITUD] = {
        "inicio", "fin", "mod", "o", "y", "no", "leer", "escribir", "si", "entonces",
        "si_no", "fin_si", "mientras", "hacer", "fin_mientras", "repetir", "hasta_que",
        "para", "desde", "hasta", "paso", "fin_para"};
%}

%%

%%

int main(int argc, char *argv[]) {
    ++argv;  
    --argc;
    if (argc < 1) 
    {  
        fprintf(stderr, "ERROR: Escriba el archivo de texto\n\t Vuelva a correr el código\n");
        return 1;
    }
    yyin = fopen(argv[0], "r");  
    if (!yyin) 
    { 
        fprintf(stderr,"ERROR: No se encontró el archivo"); 
        return 1;
    }

   

}

int yywrap() {
    return 1;
}