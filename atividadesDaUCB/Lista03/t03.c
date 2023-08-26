#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct registroVeiculos {
    char proprietario[50];
    char combustivel[9];
    char modelo[50];
    char cor[50];
    char numeroChassi[50];
    int ano;
    char placa[8];
    struct registroVeiculos* proximo;
} RegistroVeiculos;

RegistroVeiculos* inicializa() {
    return NULL;
}

RegistroVeiculos* insereInicio(RegistroVeiculos* lista) {
    RegistroVeiculos* novoNo = (RegistroVeiculos*)malloc(sizeof(RegistroVeiculos));
    novoNo->proximo = lista;

    printf("Proprietario: ");
    fgets(novoNo->proprietario, sizeof(novoNo->proprietario), stdin);
    novoNo->proprietario[strcspn(novoNo->proprietario, "\n")] = '\0';

    printf("Combustivel: ");
    fgets(novoNo->combustivel, sizeof(novoNo->combustivel), stdin);
    novoNo->combustivel[strcspn(novoNo->combustivel, "\n")] = '\0';

    printf("Modelo: ");
    fgets(novoNo->modelo, sizeof(novoNo->modelo), stdin);
    novoNo->modelo[strcspn(novoNo->modelo, "\n")] = '\0';

    printf("Cor: ");
    fgets(novoNo->cor, sizeof(novoNo->cor), stdin);
    novoNo->cor[strcspn(novoNo->cor, "\n")] = '\0';

    printf("Numero do Chassi: ");
    fgets(novoNo->numeroChassi, sizeof(novoNo->numeroChassi), stdin);
    novoNo->numeroChassi[strcspn(novoNo->numeroChassi, "\n")] = '\0';

    printf("Ano: ");
    scanf("%d", &novoNo->ano);
    getchar();  // Consumir o caractere '\n' deixado pelo scanf

    printf("Placa: ");
    fgets(novoNo->placa, sizeof(novoNo->placa), stdin);
    novoNo->placa[strcspn(novoNo->placa, "\n")] = '\0';

    return novoNo;
}

void listaProprietariosDiesel(RegistroVeiculos* lista) {
    printf("Proprietarios de carros a diesel com ano de 2010 ou posterior:\n");

    RegistroVeiculos* atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->combustivel, "diesel") == 0 && atual->ano >= 2010) {
            printf("- %s\n", atual->proprietario);
        }
        atual = atual->proximo;
    }
}

void listaPlacasJ(RegistroVeiculos* lista) {
    printf("Placas que começam com J e terminam com 0, 2, 4 ou 7:\n");

    RegistroVeiculos* atual = lista;
    while (atual != NULL) {
        if (atual->placa[0] == 'J' && (atual->placa[6] == '0' || atual->placa[6] == '2' || atual->placa[6] == '4' || atual->placa[6] == '7')) {
            printf("- Placa: %s\t Proprietario: %s\n", atual->placa, atual->proprietario);
        }
        atual = atual->proximo;
    }
}

void listaModeloCorSegundaLetraVogalSomaPar(RegistroVeiculos* lista) {
    printf("Modelo e cor dos veiculos com placa de segunda letra vogal e soma dos valores numericos par:\n");

    RegistroVeiculos* atual = lista;
    while (atual != NULL) {
        char segundaLetra = toupper(atual->placa[1]);
        int somaValoresNumericos = 0;

        for (int i = 3; i < 7; i++) {
            somaValoresNumericos += atual->placa[i] - '0';
        }

        if (strchr("AEIOU", segundaLetra) != NULL && somaValoresNumericos % 2 == 0) {
            printf("- Modelo: %s\t Cor: %s\n", atual->modelo, atual->cor);
        }

        atual = atual->proximo;
    }
}

void trocaProprietario(RegistroVeiculos* lista) {
    char chassi[50];
    printf("Informe o numero do Chassi para troca de proprietario: ");
    fgets(chassi, sizeof(chassi), stdin);
    chassi[strcspn(chassi, "\n")] = '\0';

    RegistroVeiculos* atual = lista;
    while (atual != NULL) {
        if (strcmp(atual->placa, chassi) != 0 && strcspn(atual->placa, "0") == strlen(atual->placa)) {
            printf("Novo proprietario para o veiculo com chassi %s: ", atual->numeroChassi);
            fgets(atual->proprietario, sizeof(atual->proprietario), stdin);
            atual->proprietario[strcspn(atual->proprietario, "\n")] = '\0';
        }
        atual = atual->proximo;
    }
}

void imprimeLista(RegistroVeiculos* lista) {
    RegistroVeiculos* atual = lista;
    printf("Registros de veiculos:\n");

    while (atual != NULL) {
        printf("Proprietario: %s\t Combustivel: %s\n", atual->proprietario, atual->combustivel);
        printf("Modelo: %s\t\t Cor: %s\n", atual->modelo, atual->cor);
        printf("N Chassi: %s\t\t Ano: %d\t\t Placa: %s\n", atual->numeroChassi, atual->ano, atual->placa);
        printf("______________________________________________________________\n");

        atual = atual->proximo;
    }
}

void liberaLista(RegistroVeiculos* lista) {
    RegistroVeiculos* atual = lista;
    while (atual != NULL) {
        RegistroVeiculos* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    RegistroVeiculos* lista = inicializa();
    int opcao;

    do {
        printf("MENU:\n");
        printf("1. Adicionar veiculo\n");
        printf("2. Listar proprietarios de carros a diesel com ano de 2010 ou posterior\n");
        printf("3. Listar placas que começam com J e terminam com 0, 2, 4 ou 7\n");
        printf("4. Listar modelo e cor dos veiculos com placa de segunda letra vogal e soma dos valores numericos par\n");
        printf("5. Trocar proprietario por numero de Chassi (para placas sem digito 0)\n");
        printf("6. Imprimir lista de veiculos\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();  // Consumir o caractere '\n' deixado pelo scanf

        switch (opcao) {
            case 1:
                lista = insereInicio(lista);
                break;
            case 2:
                listaProprietariosDiesel(lista);
                break;
            case 3:
                listaPlacasJ(lista);
                break;
            case 4:
                listaModeloCorSegundaLetraVogalSomaPar(lista);
                break;
            case 5:
                trocaProprietario(lista);
                break;
            case 6:
                imprimeLista(lista);
                break;
            case 0:
                break;
            default:
                printf("Opcao invalida!\n");
        }

        printf("\n");
    } while (opcao != 0);

    liberaLista(lista);

    return 0;
}
