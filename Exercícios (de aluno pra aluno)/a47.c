#include <stdio.h>
#include <stdlib.h>

int main (void){

    int *p = (int *) malloc( sizeof(int));

    *p = 1000;

    if (p == NULL){
        printf("malloc nao funcionou!");
    }
    
    printf("%i", *p);


    return 0;
}