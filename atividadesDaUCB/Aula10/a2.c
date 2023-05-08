#include <stdio.h>
#define TAMVET 2

struct pessoa{
    char nome[50];
    int matricula;
    char curso[50];
}typedef aluno;

int main (void){
    aluno p[5];

    for(int i  = 0; i < TAMVET; ++i){
        printf("Digite o nome do %d aluno: ", i+1);
        scanf("%[^\n]s", &p[i].nome);
        fflush(stdin);

        printf("\nDigite o matricula do %d aluno: ", i+1);
        scanf("%d", &p[i].matricula);
        fflush(stdin);

        printf("\nDigite o curso do %d aluno: ", i+1);
        scanf("%[^\n]s", &p[i].curso);
        fflush(stdin);
    }

    
    for(int j = 0; j < TAMVET; ++j){
        printf("%i - Nome: %s\n", j+1, p[j].nome);
        printf("%i - Matricula: %d\n", j+1, p[j].matricula);
        printf("%i - Curso: %s\n", j+1, p[j].curso);
    }
    


    return 0;
}