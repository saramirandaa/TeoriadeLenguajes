

%{
    #include <stdio.h>
    int cuenta_caracteres = 0;  // Contador para los caracteres
    int cuenta_palabras = 0;  // Contador para las palabras
    int cuenta_lineas = 0;  // Contador para las líneas
%}
%option noyywrap
%option outfile="E3.c" 

PALABRA [a-zA-Z]+ 
NUEVA_LINEA \n

%%

. {
    cuenta_caracteres++;
}

{PALABRA} {
    cuenta_palabras++;
}

{NUEVA_LINEA} {
    cuenta_lineas++;
}

%%
// Función principal que llama a yylex() para realizar el análisis léxico
int main(int argc, char *argv[]) {
    FILE *archivoEntrada;
    
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <nombre_archivo>\n", argv[0]);
        return 1;
    }

    archivoEntrada = fopen(argv[1], "r");

    if (!archivoEntrada) {
        fprintf(stderr, "Error al abrir el archivo: %s\n", argv[1]);
        return 1;
    }

    yyin = archivoEntrada;
    
    yylex();  // Inicia el análisis léxico

    // Imprime los resultados
    printf("Número de caracteres: %d\n", cuenta_caracteres);
    printf("Número de palabras: %d\n", cuenta_palabras);
    printf("Número de líneas: %d\n", cuenta_lineas);

    fclose(archivoEntrada);
    
    return 0;
}
