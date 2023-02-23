#include <stdio.h>

int main (void){

    int matriz[1][1] = {0,1,2,3};
    int *p = &matriz;

    printf("%i", *(p+1));

    return 0;
}