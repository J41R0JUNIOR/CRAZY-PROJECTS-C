#include <stdio.h>

#define PI 3.14159
#define AREA_CIRCULO(raio) raio * raio * PI

int main (void){

    float raio;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    printf("Area do circulo: %f", AREA_CIRCULO(raio));

    return 0;
}