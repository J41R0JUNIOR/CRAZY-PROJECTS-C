#include <stdio.h>
#include <stdlib.h>

int  main (void){

    FILE *file;
    file = fopen("a33numero.txt", "r");

    if(file == NULL){
        printf("Arquivo nao pode ser aberto\n");
        return 0;
    }

    int x, y, z;

    fscanf(file,"%i %i %i", &x,&y,&z);

    printf("%i %i %i\n",x,y,z);

    fclose(file);

    return 0;
}