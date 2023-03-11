#include <stdio.h>

typedef struct no{
    int valor;
    struct no *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;

void inserirInicio(Lista *lista, int valor){
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = lista->inicio;
    lista->inicio = novo;
    lista->tam++;
}

void inserirFim(Lista *lista, int valor){
    No *no, *novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;

    if(lista->inicio == NULL){
        lista->inicio = novo;
    }else{
        no = lista->inicio;

        while (no->proximo != NULL){
            no = no->proximo;
        }
        no->proximo = novo; 
    }
    lista->tam++;
}

void imprimir(Lista *lista){
    No *inicio = lista->inicio;
    printf("Tamanho da lista: %d\n", lista->tam);
    while(inicio != NULL){
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}

int main (void){
    Lista lista;
    int opcao, valor;

    lista.inicio = NULL;
    lista.tam = 0;

    do{
        printf("1- Inserir no inicio\n2- Inserir no fim\n3- Imprimir\n4- Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirInicio(&lista, valor);
                break;
            case 2:
                printf("Digite um valor a ser inserido: ");
                scanf("%d", &valor);
                inserirFim(&lista, valor);
                break;
            case 3:
                imprimir(&lista);
                break;
            case 4:
                printf("Saindo...");
                break;
            default:
                printf("Opcao Invalida");
        }
    }while(opcao != 4);

    return 0;
}