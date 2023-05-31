#include <stdio.h>

int main (void){

    int num;
    int fibonacci (int x); 

    printf("Digite um numero: ");
    scanf("%i",&num); 

    printf("Fibonacci: %i", fibonacci(num));


    return 0;
}

int fibonacci (int x){

    if (x == 0 || x == 1){
        return x;
    }
    else{
        return fibonacci(x - 1) + fibonacci (x - 2);
    }

}