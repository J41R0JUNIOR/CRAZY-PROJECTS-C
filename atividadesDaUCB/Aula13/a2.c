#include <stdio.h>

int main (void){

    int a = 3, b = 6;
    int somaDoDobro (int a, int b);

    printf("Soma do dobro = %i \na =  %i\nb = %i", somaDoDobro(a, b));


    return 0;
}
int somaDoDobro (int a, int b){
    int somaDobro = 0;

    somaDobro = a + a + b + b;

    return somaDobro;
}