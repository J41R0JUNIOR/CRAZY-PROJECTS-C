#include <stdio.h>

int main (void){

    int maior = 0, menor = 0;
    int digitado = 0;

    while(digitado >= 0){
       scanf("%d", &digitado);

       if(digitado < menor){
        menor = digitado;
       }
       if(digitado > maior){
        maior = digitado;
       }
    }
    printf("O menor numero digitado foi: %d e o maior foi %d", menor, maior);

    return 0;
}
