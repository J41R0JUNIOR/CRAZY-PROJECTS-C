#include <stdio.h>
#define TAMVETOR 11

struct jogadores{
    char nome[50];
    int idade;
}typedef players;

int main (void){

    players vetor[TAMVETOR];
    
    for(int i = 0; i < TAMVETOR; ++i){
        printf("Nome: ");
        scanf("%50[^\n]s", vetor[i].nome);
        fflush(stdin);
        printf("%s\n", vetor[i].nome);

        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        printf("%d\n", vetor[i].idade);
        fflush(stdin);
        }

    return 0;
}