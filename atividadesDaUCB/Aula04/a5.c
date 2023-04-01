#include <stdio.h>

int main (void){

    int soma;

    for (int i = 0; i > 100; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }
    printf("%i", soma);

    return 0;
}