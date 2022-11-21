#include <stdio.h>

int main(){
    int i = 10;
    int i1 = 5;
    int resposta = 0;

    i < i1 ? printf("Sim\n") : printf("Nao\n");
    i < i1 ? resposta = 1 : resposta = -1;

    printf("%i", resposta);
    
    return 0;
}