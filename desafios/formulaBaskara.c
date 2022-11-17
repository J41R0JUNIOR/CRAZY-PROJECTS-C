#include <stdio.h>
#include <math.h>


int main(void){
    float a, b, c;
    float delta, result1,result2;

    printf("Digite os valores de ""a,b,c"":\n");
    scanf("%f%f%f",&a,&b,&c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 1){
        printf("Operacao Invalida!!!");
        return 0;
    }else{
        result1 = (-b + sqrt(delta))/ 2 * a;
        result2 = (-b - sqrt(delta))/ 2 * a;

        
        printf("\nResult1 = %.5f",result1);
        printf("\nResult2 = %.5f",result2);
    }


    return 0;
}