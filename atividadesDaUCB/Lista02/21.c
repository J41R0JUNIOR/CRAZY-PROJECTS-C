#include <stdio.h>

int main() {
    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i;
    
    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetA[i]);
    }
    
  
    printf("Digite 10 numeros inteiros para o vetor B:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetB[i]);
    }
    
   
    for (i = 0; i < 10; i++) {
        vetC[i] = vetA[i] - vetB[i];
    }
    
  
    printf("Vetor C = A - B:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetC[i]);
    }
    
    return 0;
}
