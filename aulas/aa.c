//inverter um número
#include <stdio.h>
#include <stdlib.h>
int main (void){

    int num;
    int a;

    printf("Digite um numero: ");
    scanf("%i",&num);

    if(num >= 0){
        do{
            a = num % 10;
            printf("%i",a);
            num /= 10;
        }while (num != 0);

    }else{
        num *= -1;
        printf("-");
        do{
            a = num % 10;
            printf("%i",a);
            num /= 10;
        }while (num != 0);
        }



    return 0;
}
