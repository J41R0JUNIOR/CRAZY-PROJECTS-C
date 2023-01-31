#include <stdio.h>

int main (void){

    char x[100];
    int i  = 0;

    while ((x[i] = fgetc(stdin)) != '\n'){
        ++i;
    }
    x[i] = '\0';

    printf("%s", x);

    return 0;
} 