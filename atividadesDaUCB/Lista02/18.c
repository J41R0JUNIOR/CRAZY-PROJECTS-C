#include <stdio.h>

int main() {
    int vet[10];
    int x, i, count;
    

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    

    printf("Digite um numero inteiro:\n");
    scanf("%d", &x);
    

    count = 0;
    printf("Multiplos de %d no vetor:\n", x);
    for (i = 0; i < 10; i++) {
        if (vet[i] % x == 0) {
            printf("%d ", vet[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("Nenhum multiplo de %d encontrado no vetor.", x);
    }
    
    return 0;
}
