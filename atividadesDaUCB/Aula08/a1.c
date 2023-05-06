#include <stdio.h>
#define NUMERO 3
int main (void){

    float matriz[NUMERO][NUMERO] = {0};
    int i, j;
    float vetor[NUMERO] = {0};
    float menorVolta, menorTempo;
    int k, l;
    float tempoMedio;

    for(i = 0; i < NUMERO; ++i){
        for(j = 0; j < NUMERO; ++j){
            printf("volta %d, tempo %d: ", i, j);
            scanf("%f", &matriz[i][j]);
            vetor[i] += matriz[i][j];
            menorTempo = matriz[0][0];

            if(menorTempo > matriz[i][j]){
                menorTempo = matriz[i][j];
                k = i;
                l = j;
            }
        }
        printf("\n%f\n", vetor[i]);
    }
    menorVolta = vetor[0];
    
    for(i = 0; i < NUMERO; ++i){  
        if(vetor[i] < menorVolta){
            menorVolta = vetor[i];
        }
        tempoMedio += vetor[i];
    }
    tempoMedio = tempoMedio / NUMERO;

    printf("menor volta = %f\n", menorVolta);
    printf("menor tempo = %f, na posicao [%d][%d]\n", menorTempo, k, l);
    printf("Tempo medio de %f\n", tempoMedio);
    
    return 0;
}