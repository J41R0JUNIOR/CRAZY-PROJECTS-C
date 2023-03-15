#include <stdio.h>

int main (void){

    float salario, reajuste;

    printf("Digite o salario: R$");
    scanf("%f", &salario);

    printf("Valor do reajuste (em %%): ");
    scanf("%f", &reajuste);

    reajuste = (reajuste/ 100.00) * salario + salario;

    printf("Valor do salario com reajuste: R$%.2f", reajuste);

    return 0;
}