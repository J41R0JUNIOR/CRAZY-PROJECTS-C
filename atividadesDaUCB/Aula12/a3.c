#include <stdio.h>

int main (void){

    int i = 10;
    int j = 100;

    printf("valor de i=%i \nvalor de j=%i\n", i, j);

    if (i > j){
        printf("I");
    }else{
        printf("J");
    }

    return 0;
}