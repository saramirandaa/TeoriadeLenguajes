%{
    //Librerias para el manejo del programa
    #include <stdio.h>
    #include <stdlib.h>

    //librería para manejo de strings; en este programa se usa para comparar 
    #include <string.h>

    //apuntador de la palabra a comparar
    char *palabra = NULL;  
    // Contador para las repeticiones de la palabra solicitada
    int n = 0;        
%}

%%

[[:alnum:]]+ { //regex que nos dice que cualquier char alfanumerico
    (n += (strcmp(yytext, palabra) == 0) ? 1 : 0);
    /*
        Condicional que nos permite comparar el input con la palabra, en caso de que si se le suma 1 
        El método strcmp nos permite comparar palabra por palabra y en caso de que sean iguales regresa 0
    */
}
.|\n  //regex que significa que cualquier caracter o salto de linea se irá tomando en cuenta para la busqueda de nuestra palabra
%%

int main(int argc, char *argv[]) {
    ++argv;  
    --argc;
    //condicional para tener 2 argumentos como minimo para que el programa pueda funcionar
    if (argc < 2) 
    {  
        fprintf(stderr, "ERROR: Escriba la palabra a buscar y el archivo de texto\n\t Vuelva a correr el código\n");
        return 1;
    }

    //la palabra a buscar será el primer argumento a recibir
    palabra = argv[0];  

    //aquí se guarda en el input el archivo que será el argumento 2
    yyin = fopen(argv[1], "r");  
    if (!yyin) 
    { 
        fprintf(stderr,"ERROR: No se encontró el archivo"); 
        return 1;
    }
    
    yylex();  
    printf("\n la palabra '%s' se repite %d veces", palabra, n);  
    
    fclose(yyin); 
    return 0;
}

int yywrap() {
    return 1;
}