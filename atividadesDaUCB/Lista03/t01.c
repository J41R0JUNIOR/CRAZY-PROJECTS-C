#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1
*/

typedef struct Dieta {
    char nomeComida[50];
    float pesoPorcao;
    int numeroCalorias;
    struct Dieta* No;
} Dieta;


int main(void){
    Dieta *lista = NULL;

    Dieta* novoNo = (Dieta*)malloc(sizeof(Dieta));
    solicitarDados(novoNo);

    novoNo->No = lista;
    lista = novoNo;

    listarDados(lista);

    while (lista != NULL) {
        Dieta* temp = lista;
        lista = lista->No;
        free(temp);
    }

    return 0;
}

void solicitarDados(Dieta* dieta) {
    printf("Nome da comida: ");
    scanf("%[^\n]s", &dieta->nomeComida);
    fflush(stdin);
    printf("Peso de uma porcao: ");
    scanf("%f", &dieta->pesoPorcao);
    printf("Numero de calorias: ");
    scanf("%d", &dieta->numeroCalorias);
}

void listarDados(Dieta* lista){
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("--- Dados das Comidas ---");
    printf("\n%s", lista->nomeComida);
    printf("\n%f", lista->pesoPorcao);
    printf("\n%d", lista->numeroCalorias);
}