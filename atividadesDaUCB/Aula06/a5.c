#include <stdio.h>

int main (void){

    int vetor[10] = {1,3,2,4,7,3,45,9,12,54};
    int qtd = 0;

    for(int  i = 0; i < 10; i++){
        if (vetor[i] % 2 == 0){
            printf("%d,",vetor[i]);
            qtd++;
        }
    }
    printf("QTD = %d", qtd);

    return 0;
}