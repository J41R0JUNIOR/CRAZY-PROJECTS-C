#include <stdio.h>

/*
int main (void){

    char x[10];
    x[0] = getchar();
    int i = 0;

    while ((x[i] = getchar()) != '\n' && i < 8){
        ++i;
    }
    x[++i] = '\n';

    printf("%s", x);

    return 0;
}
*/

int main (void){

    int x;


    while((x = getchar()) != '\n'){
        putchar(x);
    }

    return 0;
}