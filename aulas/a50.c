#include <stdio.h>
#include <stdlib.h>

int main (void){

    int *p, *pp;
    p = (int *) calloc(5, sizeof(int));
    pp = (int *) malloc(5 *sizeof(int));

    int i;
    for (i=0; i < 5; ++i){
        printf("Usando CALLOC -> Endereco de p%i = %p | Valor de p%i = %i\n", i, &p[i], i, *(p+i));
        printf("Usando MALLOC -> Endereco de pp%i = %p | Valor de pp%i = %i\n", i, &pp[i], i, *(pp+i));
    }

    return 0;
}