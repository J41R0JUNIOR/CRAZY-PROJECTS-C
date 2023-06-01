#include <stdio.h>

int main (void){

    static int n1 = 100, n2 = 150;
    n1 + 1;
    int maiorMenor (int maior, int menor);

    printf("n1 %i - n2 %i", n1, n2);

    maiorMenor(n1, n2);



    return 0;
}

int maiorMenor (int n1, int n2){
    int troca;
    if(n1 < n2){
        troca = n1;
        n1 = n2;
        n2 = troca;
    }
    printf("\nmaior %i - menor %i", n1, n2);
}