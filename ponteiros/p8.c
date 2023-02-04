#include <stdio.h>

int main (void){

    //int x = 10;
    //int *pX = &x;

    //int vetor[3] = {1,2,3};
    //int *ponteiro = &vetor[0];

    int vetor[3] = {1,2,3};
    int *ponteiro = vetor;
    printf("%i", ++*ponteiro);

    return 0;
}