#include <stdio.h>

int main (void){

    int vetor[10] = {1,2,-3,4,5,6,-7,8,-9,10};
    
    for(int i = 0; i < 10; i++){
        if(vetor[i] < 0){
            vetor[i] = 0;
        }
        printf("%d _ ", vetor[i]);
    }

    return 0;
}