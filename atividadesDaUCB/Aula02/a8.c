#include <stdio.h>

int main (void){

    float salario, comissao, nsalario;

    printf("Digite o Salario: R$");
    scanf("%f", &salario);

    printf("Quantos carros vendeu? ");
    scanf("%f", &comissao);

    nsalario = (((comissao * 5) / 100) * salario) + salario;

    printf("Salario com a comissao R$%.2f", nsalario);

    return 0;
}