#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file;
    file = fopen("nomes.txt", "r");

    char tNomes[100];
    int i = 0;

    while((tNomes[i] = fgetc(file)) != EOF){
        ++i;

    }
    printf("%s",tNomes);


    fclose(file);

    return 0;
}
