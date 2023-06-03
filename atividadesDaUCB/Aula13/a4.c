#include <stdio.h>

int main (void){

    float vetor[10];
    int *p = vetor;

    for(int i = 0; i < 10; ++i){
        printf("%i\n", p+i);
    }

    return 0;
}