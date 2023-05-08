#include <stdio.h>

int main() {
    int vet[50];
    int i;
    
    for (i = 0; i < 50; i++) {
        vet[i] = (i + 5 * i) % (i + 1);
    }
    
    printf("Vetor:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", vet[i]);
    }
    
    return 0;
}
