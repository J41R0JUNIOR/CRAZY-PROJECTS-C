#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
    char genero;
    float altura;
    float peso;
    char historico[100];
} Anamnese;

int main(){
    int numRegistros, i;
    Anamnese* registros;

    printf("Quantos registros de Anamnese deseja cadastrar? ");
    scanf("%d", &numRegistros);

    registros = (Anamnese*)malloc(numRegistros * sizeof(Anamnese));
    if (registros == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    for (i = 0; i < numRegistros; i++) {
        printf("\n--- Registro %d ---\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", registros[i].nome);
        printf("Idade: ");
        scanf("%d", &registros[i].idade);
        printf("Gênero (M/F): ");
        scanf(" %c", &registros[i].genero);
        printf("Altura (em metros): ");
        scanf("%f", &registros[i].altura);
        printf("Peso (em kg): ");
        scanf("%f", &registros[i].peso);
        printf("Histórico: ");
        scanf(" %[^\n]s", registros[i].historico);
    }

    printf("\n--- Registros de Anamnese ---\n");
    for (i = 0; i < numRegistros; i++) {
        printf("\n--- Registro %d ---\n", i + 1);
        printf("Nome: %s\n", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("Gênero: %c\n", registros[i].genero);
        printf("Altura: %.2f\n", registros[i].altura);
        printf("Peso: %.2f\n", registros[i].peso);
        printf("Histórico: %s\n", registros[i].historico);
    }

    free(registros);

    return 0;
}
