/*
Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1. (0,75 ponto)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
}Lista;

Lista* inicializa(void){

    return NULL;
}

int vazia(Lista* lista){

    if(lista == NULL){
        return 1;
    }else{
        return 0;
    }
}

Lista* insereInicio(Lista* lista, int i){

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = lista;
    return novo;
}

void imprime(Lista* lista){

    if(vazia(lista)){
        printf("Lista Vazia");
        return;
    }
    Lista* p = lista;
    while(p != NULL){
        printf("%i -> ", p->info);
        p = p->prox;
    }
    printf("NULL");
}

int main (void){

//passar como parametro para as funções
    Lista* lista;
    

    lista = inicializa();
    lista = insereInicio(lista, 10);
    lista = insereInicio(lista, 20);
    lista = insereInicio(lista, 30);

    imprime(lista);

    return 0;
}