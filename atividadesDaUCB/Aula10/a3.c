#include <stdio.h>

#include <stdio.h>
#define TAMVET 2

struct pessoa{
    char nome[50];
    int matricula;
    char curso[50];
    float nota[3];
    float media;
}typedef aluno;

int main (void){
    aluno p[5];
    float mairoNota = 0;
    float maiorMedia = 0;
    int posicaoN, posicaoM;
    float menorMedia = 0;
    int posicaoMP;
    
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
        

        for(int j = 0; j < 3; ++j){
            printf("\nDigite o nota %d do %d aluno: ",j+1, i+1);
            scanf("%f", &p[i].nota[j]);
            fflush(stdin);
            printf("%f", p[i].nota[j]);
            
        }
        for(int j = i + 1; j < TAMVET; ++j){
            if(p[i].nota[0] > p[j].nota[0]){
                mairoNota = p[i].nota[0];
                posicaoN = i;   
            }
        }
        p[i].media = (p[i].nota[0] + p[i].nota[1] + p[i].nota[2]) / 3;
        printf("media = %f\n", p[i].media);

        if(p[i].media > p[i-1].media){
            maiorMedia = p[i].media;
            posicaoM = i;
        }else{
            maiorMedia =  p[i-1].media;
            posicaoM = i;
        }
        if(p[i].media < p[i-1].media){
            menorMedia = p[i].media;
            posicaoMP = i;
        }else{
            menorMedia =  p[i-1].media;
            posicaoMP = i;
        }
    }

    for(int j = 0; j < TAMVET; ++j){
        printf("%i - Nome: %s\n", j+1, p[j].nome);
        printf("%i - Matricula: %d\n", j+1, p[j].matricula);
        printf("%i - Curso: %s\n", j+1, p[j].curso);
    }
    
   printf("Maior nota da primeira prova: %.1f, aluno %d\n", mairoNota, posicaoN);
   printf("Maior media geral: %.1f, aluno %d\n", maiorMedia, posicaoM);
   printf("Menor media geral: %.1f, aluno %d", menorMedia, posicaoMP);

    return 0;
}