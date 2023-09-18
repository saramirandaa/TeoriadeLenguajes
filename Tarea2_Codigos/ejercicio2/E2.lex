
%{
    #include <stdio.h>
    #include <stdlib.h>
    int N1, N2;  // Variables globales para almacenar los argumentos
%}

%option noyywrap
%option outfile="E2.c"


%%

[ \t\n]    { 
    fprintf(yyout, "%s", yytext); //yytext es lo q estoy leyendo
}
[0-9]+ {
    int num = atoi(yytext);
    if (num > 0 && num % N2 == 0) {
        fprintf(yyout, "%d", num + N1);
    } else {
        fprintf(yyout, "%d", num);
    }
}

%%

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Error en los argumentos.\n");
        return 1;
    }

    // Convertir argumentos a enteros y almacenarlos en las variables globales
    N1 = atoi(argv[1]);
    N2 = atoi(argv[2]);

    FILE *inputFile = fopen("entrada.txt", "r");
    FILE *outputFile = fopen("salida.txt", "w");

    if (!inputFile || !outputFile) {
        fprintf(stderr, "Error al abrir los archivos.\n");
        return 1;
    }

    yyin = inputFile;
    yyout = outputFile;

    yylex();

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
