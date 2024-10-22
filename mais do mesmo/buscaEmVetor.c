#include <stdio.h>
#define MAX_VET 10

int main (void){

    int vetor[MAX_VET] = {1,6,3,10,7,15,45,20,0,4};
    int key = 0;
    int funcaoOrdem (int vetor[MAX_VET]);
    int buscaBinaria(int vetor[MAX_VET], int digitado);

    funcaoOrdem(vetor);

    printf("Digite um valor no ponteiro pra ver a sua posicao: ");
    scanf("%i", &key);

    buscaBinaria(vetor, key);
    return 0;
}
int funcaoOrdem (int vetor[MAX_VET]){
    int troca;
    for(int i = 0; i < MAX_VET; ++i){
        for(int j = i + 1; j < MAX_VET; ++j){
            if(vetor[i] > vetor[j]){
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
    }
}

int buscaBinaria(int vetor[MAX_VET], int digitado){
    int media = MAX_VET / 2;

    if(vetor[media] == digitado){
        printf("o valor %i esta alocado no vetor[%i]", digitado, media);

    }else if(vetor[media] > digitado){
        for(vetor[media]; vetor[media] != digitado; vetor[-- media]){
        }
        printf("%i esta alocado no vetor[%i]", vetor[media], media);

    }else if(vetor[media] < digitado){
        for(vetor[media]; vetor[media] != digitado; vetor[++ media]){
        }

        printf("%i esta alocado no vetor[%i]", vetor[media], media);
    }
}