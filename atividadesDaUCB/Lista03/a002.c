/*
Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1. (0,75 ponto)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct dieta {
    char nomeComida[50];
    float pesoPorcao;
    int numeroCalorias;
    struct dieta* No;
} Dieta;

Dieta* inicializa(void){
    return NULL;
}

int vazia(Dieta* dieta){
    if(dieta == NULL){
        return 1;
    }else{
        return 0;
    }
}

Dieta* insereInicio(Dieta* dieta, char nomeComida, float pesoPorcao, int numeroCalorias){
    Dieta* novoNo = (Dieta*)malloc(sizeof(Dieta));
    novoNo->No = dieta;
}

void imprime(Dieta* dieta){
    if(vazia(dieta)){
        printf("Lista Vazia");
        return;
    }

    Dieta* p = dieta;
    printf("Inicio da lista\n\n");
    while(p != NULL){
        printf("%s\n", dieta->nomeComida);
        printf("%f\n", p->pesoPorcao);
        printf("%d\n", p->numeroCalorias);
        p = p->No;
    }
    printf("\n\nFim da lista");
}

int main(void){

    Dieta* dieta;

    dieta = inicializa();
    dieta = insereInicio(dieta, "macarrao", 1.18, 150);
    imprime(dieta);
    

    return 0;
}