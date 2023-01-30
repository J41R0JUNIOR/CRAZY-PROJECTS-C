#include <stdio.h>

int main (void){

    char x[100];
    fgets(x, 100, stdin);
    printf("%s",x);

    freopen("a37.txt","r", stdin);
    fgets(x, 10, stdin);
    printf("%s",x);

    return 0;
}