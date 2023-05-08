#include <stdio.h>

int main(void){

    float vetor[5] = {1,2,3,4,5};
    int codigo;
    float troca;

    while (codigo != 0){
        scanf("%d", &codigo);
        if(codigo == 1 || codigo == 2){
            if (codigo == 1){
            for(int i = 0; i < 5; i++){
                printf("%f\n", vetor[i]);
            }
            }if(codigo == 2){
                for(int i = 0, j = 5; i < 5; i++, j--){
                    troca = vetor[i];
                    vetor[i] = vetor[j];
                    vetor[j] = troca;
                }
                for(int i = 0; i < 5; i++){
                    printf("%f\n", vetor[i]);
                }
            }
        }
        
        else{
            printf("Erro, codigo invalido!!!");
            return 0;
        }
    }

    return 0;
}