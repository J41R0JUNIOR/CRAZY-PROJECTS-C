#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a = 6, b = 12;
    int dobro(int a);

    printf("antes %i\n", a);
    dobro(a);
    
    printf("depois %i\n", a);

    return 0;
}
int dobro(int a){
    int *pa;
    //*pa = &a;


}