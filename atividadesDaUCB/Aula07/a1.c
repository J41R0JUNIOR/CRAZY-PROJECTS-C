#include <stdio.h>

int main (void){

    int a[6];

    a[0] = 1;
    a[1] = 0;
    a[2] = 5;
    a[3] = -2;
    a[4] = -5;
    a[5] = 7;

    int soma = a[0] + a[1] + a[2] + a[3] + a[4] + a[5];
    printf("%d",soma);

    return 0;
}