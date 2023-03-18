#include <stdio.h>
#include <time.h>

int main (void){


    int dia, mes, ano;
    int qtd = 0;

    printf("Digite a data de nascimento: \n(anos/meses/dias)\n");
    scanf("%d/%d/%d", &ano ,&mes ,&dia);

    qtd = (ano * 365) + (mes * 30) + dia;
    
    printf("Quantidade de dias que se passaram: %d", qtd);

    return 0;
}