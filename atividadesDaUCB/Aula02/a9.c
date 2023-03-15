#include <stdio.h>

int main (void){

    float nota1, nota2, nota3;
    float media;

    printf("Digite as 3 notas: \n");
    scanf("%f%f%f", &nota1, &nota2 , &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / (2 + 3 + 5);

    printf("Media final = %.2f", media);
    return 0;
}