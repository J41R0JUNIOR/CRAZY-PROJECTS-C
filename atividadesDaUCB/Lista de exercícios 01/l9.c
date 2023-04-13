#include <stdio.h>

int main (void){

    int escolha, qtd;
    float preco;

    do{
        printf("1 => ABACAXI - 5,00 a unidade \n2 => MAÇA - 1,00 a unidade \n3 => PERA - 4,00 a unidade\n");
        scanf("%d", &escolha);
        if (escolha == 0){
            continue;
        }
        printf("\nDigite a quantidade: ");
        scanf("%d", &qtd);

        switch (escolha){
        case 1:
            preco += qtd * 5.0;
            break;
        case 2:
            preco += qtd * 1.0;
            break;
        case 3:
            preco += qtd * 4.0;
            break;
        default:
            break;
        }

    }while (escolha != 0);

    printf("Preco total = R$%.2f", preco);

    return 0;
}