#include <stdio.h>

int main (void){

    int validaQuantidade;
    float calculaSalario = 600.00;
    int aMais = 0, aMais2 = 0;

    printf("Quantidade de pecas fabricadas: ");
    scanf("%d", &validaQuantidade);

    if(validaQuantidade <= 50){
        printf("Sem adicional");
    }else if( validaQuantidade <= 80){
        aMais = validaQuantidade - 50;
        calculaSalario += aMais * 0.5;
    }else{
        aMais = validaQuantidade - 50;
        calculaSalario += aMais * 0.5;
        if(aMais > 30){
            aMais2 = validaQuantidade - 80;
            calculaSalario += aMais2 * 0.75;
        }
        
    }
    printf("salario: %.2f", calculaSalario);

    return 0;
}