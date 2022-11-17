#include <stdio.h>

int main(void){

    int x;
    x = 10;

    int *ponteiro;
    ponteiro = &x;

    printf("endereco memoria da variavel x: %d\n", &x);
    printf("valor de x: %d\n", x);

    printf("endereco do ponteiro: %d\n",ponteiro);
    printf("valor do ponteiro: %d\n",*ponteiro);

    getchar();
    return 0;
}