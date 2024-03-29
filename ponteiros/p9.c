#include <stdio.h>

int somarVetor(int vetor[],  const int n){
    int *ponteiroVet = vetor;
    int soma = 0;

    for(int i=0; i < n; ++i){
        soma += *(ponteiroVet + i);
    }

    return soma;
}

int main (void){

    int somarVetor(int vetor[],  const int n);
    int vetor[10] = {5,5,5,5,5,5,5,5,5,5};

    printf("A soma dos membros do vetor = %i", somarVetor(vetor, 10));

    return 0;
}