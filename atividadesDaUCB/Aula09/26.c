#include <stdio.h>
#include <math.h>

int main() {
    int v[10];
    int i, n = 10;
    float m = 0, desvio_padrao = 0;

 
    printf("Digite os %d valores do vetor:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        m += v[i];
    }

  
    m /= n;

   
    for (i = 0; i < n; i++) {
        desvio_padrao += pow(v[i] - m, 2);
    }
    desvio_padrao = sqrt(desvio_padrao / n);

   
    printf("O desvio padrao do vetor eh: %.2f\n", desvio_padrao);

    return 0;
}
