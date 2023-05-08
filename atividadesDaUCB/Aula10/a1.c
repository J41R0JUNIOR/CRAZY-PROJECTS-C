#include <stdio.h>

struct pessoa{
    char nome[50];
    int matricula;
    char curso[50];
}typedef aluno;

int main (void){
    aluno p;

    printf("Digite o nome: ");
    scanf("%[^\n]s", &p.nome);
    fflush(stdin);

    printf("\nDigite o matricula: ");
    scanf("%d", &p.matricula);
    fflush(stdin);

    printf("\nDigite o curso: ");
    scanf("%[^\n]s", &p.curso);

    printf("Nome: %s\n", p.nome);
    printf("Matricula: %d\n", p.matricula);
    printf("Curso: %s\n", p.curso);


    return 0;
}