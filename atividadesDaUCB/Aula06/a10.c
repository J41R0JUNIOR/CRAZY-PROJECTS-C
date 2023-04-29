#include <stdio.h>

int main(void){

    float vet[15] = {1.2, 4.3, 5.5, 6.3, 4, 5.9, 9.9, 10, 10, 1.2, 4.3, 5.5, 6.3, 4, 5.9};
    float tot;

    for(int i= 0; i < 15; i++){
        tot = vet[i];
    }
    printf("%f", tot/15);

    return 0;
}