#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o nome, o endereço, o preço médio e o tipo de comida. Crie uma lista simples encadeada e escreva um programa que utilize uma função para solicitar os dados de um elemento da lista e outra para listar todos os dados.

// Definição da estrutura Restaurante
typedef struct Restaurante {
    char nome[50];
    char endereco[100];
    float precoMedio;
    char tipoComida[50];
    struct Restaurante* No;
} Restaurante;



int main() {
    int numRestaurantes, i;
    Restaurante *lista = NULL;

    printf("Quantos restaurantes deseja cadastrar? ");
    scanf("%d", &numRestaurantes);

    // Criação da lista encadeada
    for (i = 0; i < numRestaurantes; i++) {
        Restaurante* novoNo = (Restaurante*)malloc(sizeof(Restaurante));
        if (novoNo == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }

        solicitarDados(novoNo);

        novoNo->No = lista;
        lista = novoNo;
    }

    // Listagem dos dados dos restaurantes cadastrados
    listarDados(lista);

    // Liberação da memória alocada
    while (lista != NULL) {
        Restaurante* temp = lista;
        lista = lista->No;
        free(temp);
    }

    return 0;
}



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

        lista = lista->No;
        count++;
    }
}
