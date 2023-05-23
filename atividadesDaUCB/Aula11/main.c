//
//  main.c
//  ExercicioAvaliativo0.5pt
//
//  Created by Mirelle Sine on 16/05/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000
#define MAX_NAME_LENGTH 50
#define MAX_EMAIL_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

struct Usuario {
    int id;
    char nome[MAX_NAME_LENGTH];
    char email[MAX_EMAIL_LENGTH];
    char sexo[MAX_NAME_LENGTH];
    char endereco[MAX_ADDRESS_LENGTH];
    double altura;
    int vacina;
};

int totalUsuarios = 0;
struct Usuario usuarios[MAX_USERS];

// Função para gerar um número randômico para o ID
int gerarId() {
    return rand() % 10000 + 1;
}

// Função para verificar se o email contém o caractere "@"
int validarEmail(char *email) {
    char *ptr = strchr(email, '@');
    return ptr != NULL;
}

// Função para verificar se o sexo é válido
int validarSexo(char *sexo) {
    return strcmp(sexo, "Feminino") == 0 || strcmp(sexo, "Masculino") == 0 || strcmp(sexo, "Indiferente") == 0;
}

// Função para verificar se a altura é válida
int validarAltura(double altura) {
    return altura >= 1.0 && altura <= 2.0;
}

// Função para adicionar um novo usuário
void adicionarUsuario() {
    if (totalUsuarios == MAX_USERS) {
        printf("O número máximo de usuários foi atingido.\n");
        return;
    }
    
    struct Usuario novoUsuario;
    
    novoUsuario.id = gerarId();
    
    printf("Nome completo: ");
    fgets(novoUsuario.nome, sizeof(novoUsuario.nome), stdin);
    
    printf("Email: ");
    fgets(novoUsuario.email, sizeof(novoUsuario.email), stdin);
    novoUsuario.email[strcspn(novoUsuario.email, "\n")] = '\0';
    
    while (!validarEmail(novoUsuario.email)) {
        printf("Email inválido. Digite novamente: ");
        fgets(novoUsuario.email, sizeof(novoUsuario.email), stdin);
        novoUsuario.email[strcspn(novoUsuario.email, "\n")] = '\0';
    }
    
    printf("Sexo (Feminino, Masculino ou Indiferente): ");
    fgets(novoUsuario.sexo, sizeof(novoUsuario.sexo), stdin);
    novoUsuario.sexo[strcspn(novoUsuario.sexo, "\n")] = '\0';
    
    while (!validarSexo(novoUsuario.sexo)) {
        printf("Sexo inválido. Digite novamente: ");
        fgets(novoUsuario.sexo, sizeof(novoUsuario.sexo), stdin);
        novoUsuario.sexo[strcspn(novoUsuario.sexo, "\n")] = '\0';
    }
    
    printf("Endereço: ");
    fgets(novoUsuario.endereco, sizeof(novoUsuario.endereco), stdin);
    
    printf("Altura (entre 1 e 2 metros): ");
    scanf("%lf", &novoUsuario.altura);
    
    while (!validarAltura(novoUsuario.altura)) {
        printf("Altura inválida. Digite novamente: ");
        scanf("%lf", &novoUsuario.altura);
    }
    
    printf("Vacina (1 para sim, 0 para não): ");
    scanf("%d", &novoUsuario.vacina);
    
    usuarios[totalUsuarios++] = novoUsuario;
    
    printf("Usuário adicionado com sucesso!\n");
}

// Função para buscar um usuário pelo email
void buscarUsuarioPorEmail() {
    char emailBusca[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário que deseja buscar: ");
    fgets(emailBusca, sizeof(emailBusca), stdin);
    emailBusca[strcspn(emailBusca, "\n")] = '\0';
    
    int encontrado = 0;
    int i;
    
    for (i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado) {
        printf("Usuário encontrado!\n");
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2f\n", usuarios[i].altura);
        printf("Vacina: %s\n", usuarios[i].vacina == 1 ? "Sim" : "Não");
    } else {
        printf("Usuário não encontrado.\n");
    }
}

// Função para editar um usuário pelo email
void editarUsuarioPorEmail() {
    char emailEdicao[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário que deseja editar: ");
    fgets(emailEdicao, sizeof(emailEdicao), stdin);
    emailEdicao[strcspn(emailEdicao, "\n")] = '\0';
    
    int encontrado = 0;
    int i;
    
    for (i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailEdicao) == 0) {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado) {
        printf("Usuário encontrado!\n");
        
        printf("Novo Nome completo: ");
        fgets(usuarios[i].nome, sizeof(usuarios[i].nome), stdin);
        
        printf("Novo Email: ");
        fgets(usuarios[i].email, sizeof(usuarios[i].email), stdin);
        usuarios[i].email[strcspn(usuarios[i].email, "\n")] = '\0';
        
        while (!validarEmail(usuarios[i].email)) {
            printf("Email inválido. Digite novamente: ");
            fgets(usuarios[i].email, sizeof(usuarios[i].email), stdin);
            usuarios[i].email[strcspn(usuarios[i].email, "\n")] = '\0';
        }
        
        printf("Novo Sexo (Feminino, Masculino ou Indiferente): ");
        fgets(usuarios[i].sexo, sizeof(usuarios[i].sexo), stdin);
        usuarios[i].sexo[strcspn(usuarios[i].sexo, "\n")] = '\0';
        
        while (!validarSexo(usuarios[i].sexo)) {
            printf("Sexo inválido. Digite novamente: ");
            fgets(usuarios[i].sexo, sizeof(usuarios[i].sexo), stdin);
            usuarios[i].sexo[strcspn(usuarios[i].sexo, "\n")] = '\0';
        }
        
        printf("Novo Endereço: ");
        fgets(usuarios[i].endereco, sizeof(usuarios[i].endereco), stdin);
        
        printf("Nova Altura (entre 1 e 2 metros): ");
        scanf("%lf", &usuarios[i].altura);
        
        while (!validarAltura(usuarios[i].altura)) {
            printf("Altura inválida. Digite novamente: ");
            scanf("%lf", &usuarios[i].altura);
        }
        printf("Nova Vacina (1 para sim, 0 para não): ");
        scanf("%d", &usuarios[i].vacina);
        
        printf("Usuário editado com sucesso!\n");
    } else {
        printf("Usuário não encontrado.\n");
    }
}

// Função para excluir um usuário pelo email
void excluirUsuarioPorEmail() {
    char emailExclusao[MAX_EMAIL_LENGTH];
    printf("Digite o email do usuário que deseja excluir: ");
    fgets(emailExclusao, sizeof(emailExclusao), stdin);
    emailExclusao[strcspn(emailExclusao, "\n")] = '\0';
    
    int encontrado = 0;
    int i;
    
    for (i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailExclusao) == 0) {
            encontrado = 1;
            break;
        }
    }
    
    if (encontrado) {
        printf("Usuário encontrado e excluído!\n");
        
        for (int j = i; j < totalUsuarios - 1; j++) {
            usuarios[j] = usuarios[j + 1];
        }
        
        totalUsuarios--;
    } else {
        printf("Usuário não encontrado.\n");
    }
}

// Função para imprimir todos os usuários cadastrados
void imprimirUsuarios() {
    printf("Usuários cadastrados:\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2f\n", usuarios[i].altura);
        printf("Vacina: %s\n", usuarios[i].vacina == 1 ? "Sim" : "Não");
        printf("---------------------\n");
    }
}

// Função para fazer o backup dos usuários cadastrados
void fazerBackup() {
    FILE *arquivoBackup = fopen("backup.txt", "w");
    if (arquivoBackup == NULL) {
        printf("Erro ao criar arquivo de backup.\n");
        return;
    }
    
    fprintf(arquivoBackup, "%d\n", totalUsuarios);
    
    for (int i = 0; i < totalUsuarios; i++) {
        fprintf(arquivoBackup, "%d\n", usuarios[i].id);
        fprintf(arquivoBackup, "%s\n", usuarios[i].nome);
        fprintf(arquivoBackup, "%s\n", usuarios[i].email);
        fprintf(arquivoBackup, "%s\n", usuarios[i].sexo);
        fprintf(arquivoBackup, "%s\n", usuarios[i].endereco);
        fprintf(arquivoBackup, "%.2f\n", usuarios[i].altura);
        fprintf(arquivoBackup, "%d\n", usuarios[i].vacina);
    }
    
    fclose(arquivoBackup);
    
    printf("Backup realizado com sucesso!\n");
}

// Função para fazer a restauração dos dados a partir do backup
void fazerRestauracao() {
    FILE *arquivoBackup = fopen("backup.txt", "r");
    if (arquivoBackup == NULL) {
        printf("Arquivo de backup não encontrado.\n");
        return;
    }
    
    fscanf(arquivoBackup, "%d\n", &totalUsuarios);
    
    for (int i = 0; i < totalUsuarios; i++) {
        fscanf(arquivoBackup, "%d\n", &usuarios[i].id);
        fgets(usuarios[i].nome, sizeof(usuarios[i].nome), arquivoBackup);
        fgets(usuarios[i].email, sizeof(usuarios[i].email), arquivoBackup);
        fgets(usuarios[i].sexo, sizeof(usuarios[i].sexo), arquivoBackup);
        fgets(usuarios[i].endereco, sizeof(usuarios[i].endereco), arquivoBackup);
        fscanf(arquivoBackup, "%lf\n", &usuarios[i].altura);
        fscanf(arquivoBackup, "%d\n", &usuarios[i].vacina);
    }
    fclose(arquivoBackup);
    
    printf("Restauração realizada com sucesso!\n");
}

int main() {
    srand(time(NULL));
    char opcao;
    
    do {
        printf("Selecione uma opção:\n");
        printf("1. Incluir usuário\n");
        printf("2. Editar usuário\n");
        printf("3. Excluir usuário\n");
        printf("4. Buscar usuário por email\n");
        printf("5. Imprimir todos os usuários\n");
        printf("6. Fazer backup dos usuários\n");
        printf("7. Fazer restauração dos dados\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);
        
        getchar(); // Limpar o buffer do teclado
        
        switch (opcao) {
            case '1':
                adicionarUsuario();
                break;
            case '2':
                editarUsuarioPorEmail();
                break;
            case '3':
                excluirUsuarioPorEmail();
                break;
            case '4':
                buscarUsuarioPorEmail();
                break;
            case '5':
                imprimirUsuarios();
                break;
            case '6':
                fazerBackup();
                break;
            case '7':
                fazerRestauracao();
                break;
            case '0':
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Digite novamente.\n");
                break;
        }
        
        printf("---------------------\n");
        
    } while (opcao != '0');
    
    return 0;
}
