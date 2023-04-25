#include <stdio.h>

int main (void){

    float vet1[10];
    float vet2[10];

    for (int i = 0; i < 10; i++){
        scanf("%f", &vet1[i]);
        vet2[i] = vet1[i] * vet1[i];
    }
    printf("Quadrado dos valores");
     for (int i = 0; i < 10; i++){
        printf("%.2f\n", vet2[i]);
    }
    

    return 0;
}