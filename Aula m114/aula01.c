#include <stdio.h>

int main(){

    int number;
    int qtd = 0;

    scanf("%d", &number);

    if((number % 2) != 0){
        for(int i = number ; i != 0; i--){
            if((number % i) == 0){
                qtd++;
            }
        }  
        if(qtd <= 2){
        printf("Numero primo");
        }else{
            printf("Numero nao primo");
        }
    }else{
        printf("Numero nao primo");
    }
    
    return 0;
}