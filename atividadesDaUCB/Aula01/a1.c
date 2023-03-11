#include <stdio.h>

int main(void){

    float valor, frete, despesa, venda;
    float custo, lucro;

    printf("Digite o valor: ");
    scanf("%f", &valor);
    printf("Digite o valor do frete: ");
    scanf("%f",&frete);
    printf("Digite agora despesas eventuais: ");
    scanf("%f", &despesa);

    printf("Digite o valor da veda: ");
    scanf("%f", &venda);
    
    custo = valor + frete + despesa;
    lucro = venda - custo;

    float percent;
    percent = (lucro/custo)*100;
    printf("Voce teve um percentual de lucro de %.0f%%",percent);

    return 0;
}