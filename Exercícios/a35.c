#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *file;
    file = fopen("a35.txt", "a");

    fprintf(file, "Primeira linha\n");

    char frase[] = "LA ELE\n";  
    fputs(frase, file);

    char caractere = '3\n';
    fputc(caractere, file);

    fclose(file);

    return 0;
}