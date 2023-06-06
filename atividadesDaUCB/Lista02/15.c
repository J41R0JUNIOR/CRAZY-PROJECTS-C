#include <stdio.h>

int main() {
    int vet[20];
    int i, j, isDuplicate;

    printf("Digite 20 numeros inteiros:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &vet[i]);
    }
    

    printf("Elementos do vetor sem duplicatas:\n");
    for (i = 0; i < 20; i++) {
        isDuplicate = 0;
        for (j = 0; j < i; j++) {
            if (vet[j] == vet[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d ", vet[i]);
        }
    }
    
    return 0;
}
