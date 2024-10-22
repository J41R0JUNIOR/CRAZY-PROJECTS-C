#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 0;

    FILE *file1, *file2; 
    file1 = fopen("copiarDados1.txt","r");
    file2 = fopen("copiarDados2.txt","w");

    char vetor[1000];


    while(fgets(vetor, 1000, file1) != NULL){
        fputs(vetor, file2);
        printf("%s\n", vetor);
    }


    fclose(file1);
    fclose(file2);

    return 0;
}