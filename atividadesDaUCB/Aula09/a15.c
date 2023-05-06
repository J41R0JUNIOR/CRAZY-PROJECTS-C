#include <stdio.h>

int main (void){

    int vetor[20] = {1,44,5,3,6,43,43,4,9,7,5,43,675,67,12,456,17,20,99,15};

    for(int i = 0; i < 20; ++i){
        for(int j = 0; j < 20; ++j){
            if(vetor[i] == vetor[j]){
                continue;
            }else{
                printf("%i\n", vetor[i]);
            }
        }
    }

    return 0;
}