#include <stdio.h>

int main (void){

    int vet[10];
    int maior = 0;
    int posicao = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
    }
        for(int i = 0; i < 10; i++){
        printf("%d, ", vet[i]);
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }

    printf("MAIOR NUMERO =  %d, POSICAO = %d", maior, posicao);
    return 0;
}