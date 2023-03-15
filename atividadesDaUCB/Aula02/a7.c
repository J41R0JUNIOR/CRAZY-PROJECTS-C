#include <stdio.h>
#define PDISTRIBUIDOR 0.28
#define IMPOSTOSFAB 0.45

int main (void){

    float  valor, custoTot; 

    printf("Digite o valor de fabrica do veiculo: R$");
    scanf("%f", &valor);
    
    custoTot = (valor * PDISTRIBUIDOR) + (valor * IMPOSTOSFAB) + valor;

    printf("Valor total do automovel R$%.2f", custoTot); 

    return 0;
}