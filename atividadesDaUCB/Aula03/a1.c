#include <stdio.h>
#include <math.h>

int main (void){

    float n;

    printf("Digite um valor: ");
    scanf("%f", &n);

    if(n > 0){
        printf("%.2f ao quadrado e = %.2f\nA raiz quadrada de %.2f e = %.2f", n, pow(n, 2), n, sqrt(n));
    }

    return 0;
}