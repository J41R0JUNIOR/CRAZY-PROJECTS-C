#include <stdio.h>
#include <string.h>
#define ALUNOS 2
 
struct pessoas{
    char nome[ALUNOS][50];
    int matricula[ALUNOS];
    float mediaFinal[ALUNOS];
}typedef alunos;

int main (void){

    alunos vetor[ALUNOS];
    alunos aprovados[ALUNOS];
    alunos reprovados[ALUNOS];
    int qtdA = 0, qtdR = 0;
    int j = 0;
    int k = 0;

    char p[50] = "nada ainda";

    for(int i = 0; i < ALUNOS; ++i){
        printf("Nome do aluno %i: ", i+1);
        scanf("%[^\n]s",&p);
        strcpy(vetor[i].nome[i], p);
        fflush(stdin);
        
        printf("Matricula do aluno %i: ", i+1);
        scanf("%d", &vetor[i].matricula[i]);
        printf("Media Final do aluno %i: ", i+1);
        scanf("%f", &vetor[i].mediaFinal[i]);

        if(vetor[i].mediaFinal[i] >= 5.0){
            
            strcpy(aprovados[j].nome[j], vetor[i].nome[i]);
            fflush(stdin);
            aprovados[j].matricula[j] = vetor[i].matricula[i];
            aprovados[j].mediaFinal[j] = vetor[i].mediaFinal[i];
            qtdA++;
            fflush(stdin);
            j++;
        }else{
            strcpy(reprovados[k].nome[k], vetor[i].nome[i]);
            fflush(stdin);
            reprovados[k].matricula[k] = vetor[i].matricula[i];
            reprovados[k].mediaFinal[k] = vetor[i].mediaFinal[i];
            qtdR++;
            fflush(stdin);
            k++;
        }
    }
    printf("\\\\\\Aprovados///\n");
    for(int i = 0; i < qtdA; ++i){
        printf("Aluno = %s, Matricula = %d, Media Final = %f\n", aprovados[i].nome[i], aprovados[i].matricula[i], aprovados[i].mediaFinal[i]);
    }

    printf("\\\\\\Reprovados///\n");
    for(int i = 0; i < qtdR; ++i){
        printf("Aluno = %s, Matricula = %d, Media Final = %f\n", reprovados[i].nome[i], reprovados[i].matricula[i], reprovados[i].mediaFinal[i]);
    }

    return 0;
}