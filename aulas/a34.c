#include <stdio.h>
#include <stdlib.h>

int  main (void){

    FILE *file;
    file = fopen("a34string.txt", "r");

    if(file == NULL){
        printf("Arquivo nao pode ser aberto\n");
        return 0;
    }

    char frase[100] ;

    while(fgets(frase, 100, file) != NULL){
        printf("%s",frase);
    }

    fclose(file);

    return 0;
}