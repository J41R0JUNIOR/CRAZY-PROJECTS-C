#include <stdio.h>

int eh_primo(int num) {
    int i;
    if (num < 2) {
        return 0;  
    }
    for (i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    int vetor[10];
    int i;


    printf("Digite os 10 valores do vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Os elementos primos e suas respectivas posicoes no vetor sao:\n");
    for (i = 0; i < 10; i++) {
        if (eh_primo(vetor[i])) {
            printf("%d (posicao %d)\n", vetor[i], i);
        }
    }

    return 0;
}
