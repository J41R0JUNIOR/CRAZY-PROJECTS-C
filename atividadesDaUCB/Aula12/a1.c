#include <stdio.h>

int main (void){

    int i = 10;
    float f = 10.5;
    char c = 'd';

    //ponteiros

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    printf("%i\n", i);
    printf("%f\n", f);
    printf("%c\n", c);

    *pi = 5;
    *pf = 4.35;
    *pc = 'j';
    printf("\n");
    printf("%i\n", i);
    printf("%f\n", f);
    printf("%c\n", c);

    return 0;
}