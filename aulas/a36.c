#include <stdio.h>
#include <stdlib.h>

int main (void){
    void copiarConteudo(FILE *file, FILE *file2);

    FILE *file1 = fopen("a36fase1.txt", "r");
    FILE *file2 = fopen("a36fase2.txt", "w");

    copiarConteudo(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}
void copiarConteudo(FILE *file1, FILE *file2){

    char leitor[1000];

    while(fgets(leitor, 1000, file1) != NULL){
        fputs(leitor, file2);
    }

}