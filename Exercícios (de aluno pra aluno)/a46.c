#include <stdio.h>
#include <stdlib.h>

struct x{
    int a;
    double b;
    int c;
};

int main (void){

    struct x estrutura;

    int x[10];
    double y;

    printf("%li", sizeof(estrutura));

    return 0;
}