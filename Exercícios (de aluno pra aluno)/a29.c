#include <stdio.h>

#define PI 3.14159
#define NULO 0

double areaCirculo(double raio){
    return raio * raio * PI;
}

int main(void){

    double areaCirculo(double raio);
    double r;
    int i = 3;

    while(i != NULO){
        printf("Digite o raio do circulo: \n");
        scanf("%lf",&r);
        printf("A area do circulo e: %lfz\n", areaCirculo(r));
        --i;
    }

    return 0;
}