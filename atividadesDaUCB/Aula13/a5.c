#include <stdio.h>

int main (void){

    int vetor[5];
    int *p = vetor;

    for(int i = 0; i < 5; i++){
        scanf("%d", p + i);
    }
    
    for(int i = 0; i < 5; i++){
        printf("%i - ", vetor[i]);
    }

    return 0;
}