#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file;
    file = fopen("nomes.txt", "r");

    char tNomes[100];

    while(fgets(tNomes, 100, file) != NULL){
        printf("%s",tNomes);

    }



    fclose(file);

    return 0;
}
