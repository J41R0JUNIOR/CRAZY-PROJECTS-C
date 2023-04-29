#include <stdio.h>

int main (void){

    int vet[10] = {1,543,3,6,35,745,7,466,4,674};
    int maior = 0, menor = vet[9];
    int posi1, posi2;

    for(int i = 0; i < 10; i++){
        if(vet[i] < menor){
            menor = vet[i];
            posi1 = i;
        }
        if(vet[i] > maior){
            maior = vet[i];
            posi2 = i;
        }
        
    }

    printf("MENOR =%d [%d} MAIOR =%d [%d]", menor, posi1, maior, posi2);
    return 0;
}