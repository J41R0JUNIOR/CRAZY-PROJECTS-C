#include <stdio.h>

int main (void){

    int i = 10;
    int j = 100;

    printf("endereco de i=%i \nendereco de j=%i\n", &i, &j);

    if (&i > &j){
        printf("I");
    }else{
        printf("J");
    }

    return 0;
}