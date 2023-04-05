#include <stdio.h>

int main (void){

    float n1, n2, n3;
    float calculaMedia (float n1, float n2, float n3);

    scanf("%f %f %f", &n1, &n2, &n3);
    
    if(n1 > n2 && n1 > n3){
        printf("A nota principal e %.1f", n1);
    }else if(n2 > n1 && n2 > n3){
        printf("A nota principal e %.1f", n2);
    }else{
        printf("A nota principal e %.1f", n3);
    }

    printf("\nSua media foi de: %.1f", calculaMedia(n1, n2, n3));


    return 0;
}
float calculaMedia (float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}