#include <stdio.h>

int main() {
    int vetor[100];
    int i, numero = 1;
    int count = 0;

    while (count < 100) {
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[count] = numero;
            count++;
        }
        numero++;
    }

    printf("Vetor com os 100 primeiros naturais que nao sao multiplos de 7 ou que terminam com 7:\n");
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
