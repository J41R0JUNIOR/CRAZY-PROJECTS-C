#include <stdio.h>

int main (void){

    int vetor[10] = {9, 56, 3, 6, 10, 15, 75, 100, 55, 55};
    int sim = 0;

    int i = 0, j = i + 1;

    for(int i = 0; i < 10; i++, j++){
        if(vetor[i] == vetor[j]){
            sim = 1;
        }
    }
    if(sim == 1){
        printf("Tem numero igual!!!");
    }else{
        printf("Nao tem numero igual!!!")
    }

    return 0;
}
