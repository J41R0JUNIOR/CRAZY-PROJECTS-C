#include <stdio.h>

int  main (void){

    int vetor[8];
    int x, y;

    scanf("%d%d", &x,&y);
    vetor[0] = x;
    vetor [1] = y;

    printf("%d", vetor[0] + vetor[1]);

    return 0;
}