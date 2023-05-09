#include <stdio.h>

int main() {
    int v[10], v1[10], v2[10];
    int i, j = 0, k = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i+1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) {
            v2[k] = v[i];
            k++;
        } else {
            v1[j] = v[i];
            j++;
        }
    }

    printf("Elementos utilizados de v1: ");
    for (i = 0; i < j; i++) {
        printf("%d ", v1[i]);
    }
    
    printf("\nElementos utilizados de v2: ");
    for (i = 0; i < k; i++) {
        printf("%d ", v2[i]);
    }
    
    return 0;
}
