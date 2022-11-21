//Função Recursiva
#include <stdio.h>

int main (void){

    int fatorial(int x);
    int numero, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d",&numero);

    resultado = fatorial(numero);

    printf("O fatorial de %d eh %d",numero,resultado );

    return 0;
}

int fatorial (int x){

    int resultado;

    if (x == 0){
        resultado = 1;
    }else{
        resultado = x * fatorial (x - 1);
    }
    return resultado;
}