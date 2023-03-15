#include <stdio.h>
#include <locale.h>

int main (void){

    float base, altura, area;
    
    printf("Digite a Base: ");
    scanf("%f",&base);
    
    printf("Digite a Altura: ");
    scanf("%f",&altura);
    
    area = base * altura;
    
    printf("A área é igual a: %.2f", area);

    return 0;
}