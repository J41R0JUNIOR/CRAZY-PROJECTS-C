#include <stdio.h>

int main(void){

    char x[100];

    FILE *file = fopen("a38a.txt","r");

    fgets(x, 100, file);
    printf("%s\n", x);

    freopen("a38b.txt","r", file);

    fgets(x, 100, file);
    printf("%s\n", x);

    return 0;
}