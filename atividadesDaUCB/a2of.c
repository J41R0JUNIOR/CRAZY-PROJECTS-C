#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main (void){

    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);
    printf("Area do circulo: %f", area);

    return 0;
}