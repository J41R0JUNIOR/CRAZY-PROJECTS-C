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
    printf("%d\n",soma);

    a[4] = 100;
    for(int i=0; i < 6; i++){
        printf("%d", a[i]);
        printf("\n");
    }

    return 0;
}