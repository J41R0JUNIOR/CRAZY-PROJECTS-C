#include <stdio.h>

int main (void){

    float valor;
    int forma;
    float pagar;
    float op1(float valor, float pagar);
    float op2(float valor, float pagar);
    float op3(float valor, float pagar, float t);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Forma de pagamento\n1- a vista com 10%% de desconto\n2- em duas vezes(preco de etiqueta)\n3- de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$100,00)\n");
    scanf("%d", &forma);

    if (forma == 1){
        printf("Valor a pagar: R$%.2f", op1(valor, pagar));
    }else if (forma == 2){
        printf("Valor a pagar: R$%.2f", op2(valor, pagar));
        
    }else if (forma == 3){
       float t;
        while (valor < 100.0){
            printf("Valor abaixo do esperado\nDigite o valor: ");
            scanf("%f", &valor);
        }
        
        printf("Digite quantaz vezes deseja dividir: ");
        scanf("%f", &t);

        while (t < 3 || t > 10){
            printf("Tempo Invalido\nDigite quantaz vezes deseja dividir: ");
            scanf("%f", &t);
        }
        
        printf("Valor a pagar: R$%.2f", op3(valor, pagar, t));
    }

    return 0;
}

float op1(float valor, float pagar){
    pagar = valor * 0.1;
    return pagar;
}

float op2(float valor, float pagar){
    pagar = valor;
    return pagar;
}

float op3(float valor, float pagar, float t){
    int vezes;
    float j, c = valor, i = 0.03;

    j = c * i * t;
    pagar = valor + j;
    return pagar;
}