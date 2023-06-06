#include <stdio.h>

int main() {
    int vet1[10];
    int vet2[10];
    int i, j = 0;
    
   
    printf("Digite 10 numeros inteiros no intervalo [0,50]:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vet1[i]);
    }
    

    for (i = 0; i < 10; i++) {
        if (vet1[i] % 2 == 1) {
            vet2[j] = vet1[i];
            j++;
        }
    }
    
 
    printf("Vetor1\t\tVetor2\n");
    for (i = 0; i < 10; i += 2) {
        printf("%d %d\t\t", vet1[i], vet1[i+1]);
        if (i < j) {
            printf("%d", vet2[i]);
        }
        if (i+1 < j) {
            printf(" %d", vet2[i+1]);
        }
        printf("\n");
    }
    
    return 0;
}
