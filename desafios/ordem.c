#include <stdio.h>
#define QTD_VETOR 8
int main (void){
    int vetor[] = {15,30,2,7,81,36,99,103};
    int troca;
    int i=0,j=0;
    for(i = 0; i < QTD_VETOR; ++i){
        for(int j = i + 1; j < QTD_VETOR; j++){
            if(vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
    for(int mostrar = 0; mostrar < QTD_VETOR ; mostrar++){
        printf("%d/ vetor %d\n",vetor[mostrar], mostrar);
    }
    return 0;
}