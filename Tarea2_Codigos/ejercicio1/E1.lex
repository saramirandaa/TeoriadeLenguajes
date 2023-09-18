%{
    #include <stdio.h>
    #include <stdlib.h>
%}

%option noyywrap
%option outfile="E1.c"

%%

[ \t\n]    { fprintf(yyout, "%s", yytext); }
[0-9]+ {
    int num = atoi(yytext);
    if (num > 0 && num % 4 == 0) {
        fprintf(yyout, "%d", num + 5);
    } else {
        fprintf(yyout, "%d", num);
    }
}


%%

int main(int argc, char *argv[]) {
    FILE *inputFile = fopen("entrada.txt", "r");
    FILE *outputFile = fopen("salida.txt", "w");

    if (!inputFile || !outputFile) {
        printf("Error al abrir los archivos.\n");
        return 1;
    }

    yyin = inputFile;
    yyout = outputFile;

    yylex();

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
