/*Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

 Proprietário:__________________________ Combustível:____________________

 Modelo: _____________________________ Cor: __________________________

Nº chassi: _________________________ Ano: __________ Placa: ____________

Em que:

• Combustível pode ser álcool, diesel ou gasolina;

• Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.

Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel.

b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.

c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.

 d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. */
#include <stdio.h>
#include <stdlib.h>

typedef struct RegistroVeiculos{
    char proprietario[50];
    char combustivel[8];
    char modelo[50];
    char cor[50];
    int numeroChassi;
    int ano;
    char placa[10];
}

int main (void){



    return 0;
}