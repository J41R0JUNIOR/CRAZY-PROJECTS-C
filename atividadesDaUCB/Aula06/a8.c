#include <stdio.h>

int main (void){

    int vet[6];

    for (int i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    
    for ( int i = 6; i > -1; i--){
        printf("%d", vet[i]);
    }
    

    return 0;
}