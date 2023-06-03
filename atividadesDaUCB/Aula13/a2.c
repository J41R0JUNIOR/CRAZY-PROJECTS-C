#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a = 6, b = 12;
    int *pa = &a, *pb = &b;
    int dobro(int *pa, int *pb);
    int somaDoDobro = 0;

    printf("antes pa=%i\nantes pb=%i\n", a, b);

    dobro(pa, pb);
    
    printf("depois pa=%i\ndepois pb=%i\n", a, b);

    
    somaDoDobro = a + b;
    printf("%i", somaDoDobro);

    return 0;
}
int dobro(int *pa, int *pb){
    *pa = *pa + *pa;
    *pb = *pb + *pb;
    printf("func pa= %d\nfunc = pb %d\n", *pa, *pb);
}