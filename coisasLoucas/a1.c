#include <stdio.h>

int main( ){
    int num1 = 3, num2 = 2;
    int aux = 5;
    aux = num1;
    num1 = num2;
    if(num1 > aux)
        num1 = 2 * num2;
    else
        num1 = 3 * num2;
    num1 = (num1 % 2 ? num1 + 1 : num1);
    num2 = aux;
    printf("%d %d %d %d", num1, num2, aux, (num1 + num2));
    return 0;
    
}