/*Implementar um sistema de controle de estoque com as funcionalidades de cadastrar produtos, consultar produtos, gerar relatório de produtos e remover produtos do estoque. Funções que deverão estar presentes no código:

Função que inicializa uma lista vazia; (0,5 ponto)
Função que adiciona um novo produto à lista de estoque. Ela solicita ao usuário informações como código, descrição, quantidade e valor do produto. (0,5 ponto)
Função que percorre a lista de estoque e imprime um relatório com as informações de cada produto, incluindo código, descrição, quantidade e valor. (1,0 ponto)
Função que permite ao usuário pesquisar um produto pelo código. (1,0 ponto)
Função que permite ao usuário remover um produto do estoque. Ela solicita o código do produto a ser removido e busca na lista o produto correspondente. Se encontrar o produto, o remove da lista. Caso contrário, exibe uma mensagem informando que o produto não está cadastrado. (1,0 ponto)
O sistema deverá exibir um menu com as opções disponíveis e realizar as chamadas correspondentes às funções acima, de acordo com a escolha do usuário. O loop deverá continuar até que o usuário escolha sair do programa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RAND 1000

typedef struct estoque{
    int codigo;
    char nome[50];
    char descricao[100];
    int quantidade;
    float valor;
    struct estoque* No;
}Estoque;



Estoque* inicializa() {
    return NULL;
}

int vazia(Estoque* estoque) {
    if (estoque == NULL) {
        return 1;
    } else {
        return 0;
    }
}

Estoque* insereInicio(Estoque* estoque){
    Estoque* novoNo = (Estoque*)malloc(sizeof(Estoque));
    novoNo->No = estoque;
    novoNo->codigo = rand();

    printf("|------------------------------------------------------------|\n");
    fflush(stdin);
    printf("Codigo do produto: %i\n", novoNo->codigo);
    fflush(stdin);
    printf("nome do produto: ");
    scanf("%[^\n]s", novoNo->nome);
    fflush(stdin);
    printf("descricao do produto: ");
    scanf("%[^\n]s", novoNo->descricao);
    fflush(stdin);
    printf("quantidade de produtos: ");
    scanf("%i", &novoNo->quantidade);
    fflush(stdin);
    printf("valor do produto: ");
    scanf("%f", &novoNo->valor);
    fflush(stdin);
    printf("|------------------------------------------------------------|\n");
    printf("\n\n\n");

    estoque = novoNo;
    return estoque;
}

void relatorio(Estoque* estoque){
    Estoque* p = estoque;
    if(vazia(estoque)){
        printf("Lista vazia!\n\n\n");
        return;
    }

    printf("Inicio da lista\n");
    printf("|------------------------------------------------------------|\n");
    while(p != NULL){
        printf("Codigo do produto: %i\n", p->codigo);
        printf("Nome do produto: %s\n", p->nome);
        printf("Descricao do produto: %s\n", p->descricao);
        printf("Quantidade do produto: %i\n", p->quantidade);
        printf("Valor do produto: %f\n", p->valor);
        printf("-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        p = p->No;
    }
    printf("|------------------------------------------------------------|");
    printf("\nFim da lista\n\n");
}

void pesquisar(Estoque* estoque, int codigo){
    Estoque* p = estoque;
    if(vazia(estoque)){
        printf("Lista vazia!\n\n\n");
        return;
    }

    while(p != 0){
        if(codigo == p->codigo){
            printf("Produto Encontrado!\n");
            printf("Nome do produto: %s\n", estoque->nome);
            printf("Descricao do produto: %s\n", estoque->descricao);
            printf("Quantidade do produto: %i\n", estoque->quantidade);
            printf("Valor do produto: %f\n", estoque->valor);
            printf("-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        p = p->No;
            return;
        }
        p = p->No;
        
    }
    printf("Codigo Nao encontrado!\n");
}

Estoque* remover(Estoque* estoque, int codigo){
    Estoque* ant = NULL;
    Estoque* p = estoque;

    if(vazia(estoque)){
        printf("Lista vazia!\n\n\n");
        return;
    }

    while(p != NULL && p->codigo != codigo){
        ant = p;
        p = p->No;
    }

    if(p == NULL){
        return estoque;
    }
    if(ant == NULL){
        estoque = p->codigo;
    }
    else{
        ant->No = p->No;
    }
    free(p);

    return estoque;
}


int main(void){
    int escolha = 0;
    int codigo;
    Estoque* estoque;

    estoque = inicializa();

    while(escolha != 1){
        
        printf("1- sair\n2- cadastrar produto\n3- consultar produtos\n4- gerar relatório de produtos\n5- remover produtos\nSua escolha:");
        scanf("%d", &escolha);
        printf("\n\n\n");
        
        switch (escolha)
        {
        case 2:
            estoque = insereInicio(estoque);
            break;
        case 3:
            printf("Digite o codigo: ");
            scanf("%i", &codigo);
            pesquisar(estoque, codigo);
            break;
        case 4:
            relatorio(estoque);
            break;
        case 5:
            printf("Digite o codigo: ");
            scanf("%i", &codigo);
            remover(estoque, codigo);
            break;

        default:
            break;
        }
    }

    return 0;
}