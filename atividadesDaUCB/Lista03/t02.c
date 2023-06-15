/*
Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1. (0,75 ponto)
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dieta {
    char nomeComida[50];
    float pesoPorcao;
    int numeroCalorias;
    struct dieta* No;
} Dieta;

Dieta* inicializa(){
    return NULL;
}

int vazia(Dieta* dieta){
    if(dieta == NULL){
        return 1;
    }else{
        return 0;
    }
}

Dieta* insereInicio(Dieta* dieta){
    Dieta* novoNo = (Dieta*)malloc(sizeof(Dieta));

    novoNo->No = dieta;
    strcpy(novoNo->nomeComida, "Comida1");
    fflush(stdin);
    novoNo->pesoPorcao = 10.1;
    novoNo->numeroCalorias = 120;
}

void imprime(Dieta* dieta){
    if(vazia(dieta)){
        printf("Lista Vazia");
        return;
    }

    Dieta* p = dieta;

    printf("Inicio da lista\n");
    while(p != NULL){ 
        printf("------------------------\n");

        printf("%s", p->nomeComida);
        printf("%f\n", p->pesoPorcao);
        printf("%d\n", p->numeroCalorias);
        p = p->No;
    
    }
    printf("\nFim da lista\n");
}

int main(void){

    Dieta* dieta;

    char nomeComida[50];
    float pesoPorcao;
    int numeroCalorias;

    dieta = inicializa();
    dieta = insereInicio(dieta);
    fflush(stdin);
            
    

    imprime(dieta);
    

    return 0;
}