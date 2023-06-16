#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
}Lista;

//iniciar a lista
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

//função de inserção no início da lista
Lista* insereInicio(Lista* lista, int i){

    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = lista;
    return novo;
}

//função de inserção no final da lista
Lista* insereFim(Lista* lista, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if(lista == NULL){
        return novo;
    }

    Lista* atual = lista;

    while(atual->prox != NULL){
        atual = atual->prox;
    }
    atual->prox = novo;
    return lista;
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

//buscar um elemento na Lista
Lista* buscar(Lista* lista, int i){

    Lista* p = lista;

    while(p != NULL){
        if(p->info == i){
            printf("Elemento encontrado -> %i", p->info);
            return p;
        }
        p = p->prox;
    }
    printf("Elemento %i nao encontrado", i);
    return NULL;
}

//função para remover elemento da lista
Lista* remover(Lista* lista, int i){
    Lista* ant = NULL; //ponteiro para elemento anterior
    Lista* p = lista; //ponteiro para percorrer a lista

    //procurar o elemento na lista guardando o anterior
    while(p != NULL && p->info != i){
        ant = p;
        p = p->prox;
    }
    //verifica se achou o elemento
    if(p == NULL){
        return lista;
    }
    //remover o elemento da lista
    if(ant == NULL){
        lista = p->prox;
    }
    //returar do meio da lista
    else{
        ant->prox = p->prox;
    }
    //liberar a memória
    free(p);

    return lista;
}

int main (void){

//passar como parametro para as funções
    Lista* lista;

    lista = inicializa();
    lista = insereInicio(lista, 10);
    lista = insereInicio(lista, 20);
    lista = insereInicio(lista, 30);

    imprime(lista);
    printf(" && ");
    buscar(lista, 12);
    printf("\n");

    lista = insereFim(lista, 100);
    imprime(lista);
    printf("\n");

    lista = remover(lista, 30);
    imprime(lista);
    printf("\n");

    return 0;
}