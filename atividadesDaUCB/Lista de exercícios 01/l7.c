#include <stdio.h>

#include <stdlib.h>

int fibonacci(int n){
    if(n == 1) 
        return 0;
    else{
        if(n == 2) 
            return 1;
        else
            return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main () {

    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("O termo %d eh: %d\n", n, fibonacci(n));

    return 0;
}