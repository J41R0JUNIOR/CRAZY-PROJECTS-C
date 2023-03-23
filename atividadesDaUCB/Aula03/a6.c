#include <stdio.h>

int main(void){

    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n % 5 == 0){
        printf("Divisivel por 5\n");
    }if(n % 3 == 0){
        printf("Divisivel por 3\n");
    }if(n % 2 == 0){
        printf("Divisivel por 2\n");
    }if(n % 5 != 0 && n % 3 != 0 && n % 2 != 0){
        printf("Nao e divisivel com nenhum desses");
    }


    return 0;
}