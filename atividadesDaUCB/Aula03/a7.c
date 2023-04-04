#include <stdio.h>

int main (void){

    int escolha, qtd;
    float valor;

    printf("Cardápio: \n100 - Cachorro quente\n101 - Bauru simples\n102 - Bauru com ovo\n103 - Hamburger\n104 - Chesseburger\nEscolha:  ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 100:
        printf("Digite a Quandidade de Cachorro quente: ");
        scanf("%d", &qtd);
        valor = qtd * 10.10;
        break;
    case 101:
        printf("Digite a Quandidade de Bauru simples: ");
        scanf("%d", &qtd);
        valor = qtd * 8.30;
        break;
    case 102:
        printf("Digite a Quandidade de Bauru com ovo: ");
        scanf("%d", &qtd);
        valor = qtd * 8.50;
        break;
    case 103:
        printf("Digite a Quandidade de Hamburguer: ");
        scanf("%d", &qtd);
        valor = qtd * 12.50;
        break;
    case 104:
        printf("Digite a Quandidade de Chessburger: ");
        scanf("%d", &qtd);
        valor = qtd * 13.25;
        break;
    
    default:
        printf("Valor invalido!!!");
        break;
    }
    printf("O valor e: R$%.2f", valor);

    return 0;
}