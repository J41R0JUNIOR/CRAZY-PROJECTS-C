#include <stdio.h>

int main() {
    int vetA[10], vetB[10], vetC[20];
    int i, j;

    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetA[i]);
    }

    printf("Digite 10 numeros inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetB[i]);
    }

  
    j = 0;
    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) { 
            vetC[j] = vetA[i];
        } else { 
            vetC[j] = vetB[i];
        }
        j++;
    }

    
    printf("Vetor C com as posicoes pares do vetor A e impares do vetor B:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetC[i]);
    }

    return 0;
}
