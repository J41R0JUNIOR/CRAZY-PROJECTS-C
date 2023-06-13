#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Restaurante
typedef struct Restaurante {
    char nome[50];
    char endereco[100];
    float precoMedio;
    char tipoComida[50];
    struct Restaurante* proximo;
} Restaurante;

// Função para solicitar os dados de um elemento da lista
void solicitarDados(Restaurante* restaurante) {
    printf("Nome: ");
    scanf(" %[^\n]s", restaurante->nome);
    printf("Endereco: ");
    scanf(" %[^\n]s", restaurante->endereco);
    printf("Preco Medio: ");
    scanf("%f", &(restaurante->precoMedio));
    printf("Tipo de Comida: ");
    scanf(" %[^\n]s", restaurante->tipoComida);
}

// Função para listar todos os dados da lista
void listarDados(Restaurante* lista) {
    if (lista == NULL) {
        printf("Lista vazia.\n");
        return;
    }

    printf("--- Dados dos Restaurantes ---\n");
    int count = 1;
    while (lista != NULL) {
        printf("\nRestaurante %d:\n", count);
        printf("Nome: %s\n", lista->nome);
        printf("Endereco: %s\n", lista->endereco);
        printf("Preco Medio: %.2f\n", lista->precoMedio);
        printf("Tipo de Comida: %s\n", lista->tipoComida);

        lista = lista->proximo;
        count++;
    }
}

int main() {
    int numRestaurantes, i;
    Restaurante* lista = NULL;

    printf("Quantos restaurantes deseja cadastrar? ");
    scanf("%d", &numRestaurantes);

    // Criação da lista encadeada
    for (i = 0; i < numRestaurantes; i++) {
        Restaurante* novoRestaurante = (Restaurante*)malloc(sizeof(Restaurante));
        if (novoRestaurante == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }

        solicitarDados(novoRestaurante);

        novoRestaurante->proximo = lista;
        lista = novoRestaurante;
    }

    // Listagem dos dados dos restaurantes cadastrados
    listarDados(lista);

    // Liberação da memória alocada
    while (lista != NULL) {
        Restaurante* temp = lista;
        lista = lista->proximo;
        free(temp);
    }

    return 0;
}
