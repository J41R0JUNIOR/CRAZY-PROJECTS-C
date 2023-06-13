#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No* proximo;
};

int main (void){

    //iniciar lista encadeada
    

    No* inicio = (No*)malloc(sizeof(No));
    inicio->proximo = NULL;

    //adicionar elementos na lista

    No* No1 = (No*)malloc(sizeof(No));
    No1->valor = 10;
    No1->proximo = No1;

    No* No2 = (No*)malloc(sizeof(No));
    No2->valor = 20;
    No2->proximo = NULL;
    No1->proximo = No2;

    No* No3 = (No*)malloc(sizeof(No));
    No3->valor = 30;
    No3->proximo = NULL;
    No2->proximo = No3;

    printf("Imprimir a lista: ");
    No* noAtual = inicio;
    while(noAtual != NULL){
        printf("%d", noAtual->valor);
    }

    return 0;
}