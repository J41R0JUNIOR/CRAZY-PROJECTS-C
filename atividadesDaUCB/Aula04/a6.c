#include <stdio.h>

int main (void){

    float qtd, escolha, valor;
    float abacaxi = 5.0, maca = 1.0, pera = 4.0;
    


    do{
        printf("\nEscolha uma fruta:\n");
        printf("1 - Abacaxi (R$ 5,00)\n");
        printf("2 - Maca (R$ 1,00)\n");
        printf("3 - Pera (R$ 4,00)\n");
        printf("0 - Finalizar compra\n");
        scanf("%f", &escolha);

        if(escolha == 1){
            printf("Digite a quantidade :");
            scanf("%f", &qtd);
            valor += abacaxi * qtd;
        }if(escolha == 2){
            printf("Digite a quantidade :");
            scanf("%f", &qtd);
            valor += maca * qtd;
        }if(escolha == 3){
            printf("Digite a quantidade :");
            scanf("%f", &qtd);
            valor += pera * qtd;
        }

    }while(escolha != 0);

    printf("R$%.2f", valor);

    return 0;
}