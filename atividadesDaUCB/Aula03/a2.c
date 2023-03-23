#include <stdio.h>

int main (void){

    float produto, escolha, imposto;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    printf("Digite o estado:\n(1)Goias\n(2)Sao Paulo\n(3)Rio de Janeiro\n(4)Fortaleza\n");
    scanf("%f", &escolha);
    
    switch (expression){
    case 1:
        imposto = produto * 0.15;
        break;
    case 2:
        imposto = produto * 0.20;
        break;
    case 3:
        imposto = produto * 0.25;
        break;
    case 4:
        imposto = produto * 0.30;
        break;
    
    default:
        printf("Erro!!!");
        break;
    }

    printf("Valor do produto com os impostos = %f", imposto);

    return 0;
}