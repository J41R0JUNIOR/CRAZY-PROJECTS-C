#include <stdio.h>

int func(int valor){
    return valor % 2 == 1; 
}
int main(){
    int tam = 10;
    int vetor[] = {3,2,4,5,0,2,7,9,8,1};
    int soma = 1;
    int i = 0;
    while(i < tam){
        if(func(vetor[i])){
            i++;
            continue;
        }
        soma = soma + vetor[i];
        i++;
    }
    printf("%d \n", soma);
    return 0;
}