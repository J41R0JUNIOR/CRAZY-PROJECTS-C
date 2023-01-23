
#include <stdio.h>
#include <stdlib.h>

//0,0,0,0
//0,0,0,0

int main (void){

    int Alunos[2][4] = {0};
    int notas=0;

    printf("Digite as notas dos alunos:\n");

    for(int i=0; i<4; i++){
        scanf("%d",&Alunos[1][i]);
        notas += Alunos[1][i];
    }

    printf("tudo = %i", notas);
    int media = notas/4;
    printf("\nMedia = %i", media);



    return 0;
}