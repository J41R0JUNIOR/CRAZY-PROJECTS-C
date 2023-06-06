#include <stdio.h>

int main() {
    float vetX[5], vetY[5];
    float produtoEscalar = 0;
    int i;


    printf("Digite 5 numeros reais para o vetor X:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetX[i]);
    }

    
    printf("Digite 5 numeros reais para o vetor Y:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &vetY[i]);
    }

   
    for (i = 0; i < 5; i++) {
        produtoEscalar += vetX[i] * vetY[i];
    }

    
    printf("Vetor X: ");
    for (i = 0; i < 5; i++) {
        printf("%f ", vetX[i]);
    }
    printf("\n");

    printf("Vetor Y: ");
    for (i = 0; i < 5; i++) {
        printf("%f ", vetY[i]);
    }
    printf("\n");

    printf("Produto escalar: %f\n", produtoEscalar);

    return 0;
}
