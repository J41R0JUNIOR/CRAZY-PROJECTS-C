#include <stdio.h>

int main (){

    float altura, largura;
    float area, litros, latas;

    printf("Em Metros(M)\n");
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Largura: ");
    scanf("%f",&largura);

    area = largura * altura;
    litros = 300 * area;
    latas = litros/2000;

    printf("Sao necessarias %.0f lata(s) de tinta", ceil(latas));

    return 0;
}