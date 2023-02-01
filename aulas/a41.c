#include <stdio.h>

int main (void){

    char x[] = "coxinha";

    FILE *file = fopen("a41.txt", "w");

    int i = 0;
    while(x[i] != '\0'){
        putc(x[i], file);
        ++i;
    }

    return 0;
}