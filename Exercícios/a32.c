#include <stdio.h>

int main(void){

    FILE *file;
    file = fopen("a32.txt","w");
    fprintf(file,"TESTE MALUCO ,CUIDADO!!!");
    fclose(file);

    return 0;
}