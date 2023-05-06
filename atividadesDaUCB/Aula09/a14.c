#include <stdio.h>

int main (void){

    int vetor[10] = {9, 56, 3, 6, 10, 15, 75, 100, 55, 55};

    for(int i = 0; i < 10; i++){
        for (int j = 1; j < 10; j++){
            if(vetor[i] == vetor[j]){
                printf("Existem valores iguais");
                
            }else{
                printf("Nao existem valores iguais");
                
            }  
        }
    }

    return 0;
}