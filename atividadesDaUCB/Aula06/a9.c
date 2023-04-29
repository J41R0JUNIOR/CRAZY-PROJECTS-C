#include <stdio.h>

int main (void){

    int vet[6] = {2,54,6,12,40,66};

    for(int i = 5; i > -1; i--){
        printf("%d, " ,vet[i]);
    }

    return 0;
}