
#include <stdio.h>

int main (void){

    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        printf("%s\n", (i % 2 == 0 ? "\0" : "impar"));


    return 0;
}