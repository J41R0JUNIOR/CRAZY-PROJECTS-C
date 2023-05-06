#include <stdio.h>

int main (void){

    int vet[6] = {2,54,6,12,40};
    int maior, menor;
    float media;

    for(int i = 0; i < 5; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
        media += vet[i];
        printf("%d, ", vet[i]);
    }
    printf("\nmenor %d", menor);
    printf("\nmaior %d", maior);
    printf("\nmedia %f", media/5);

    return 0;
}