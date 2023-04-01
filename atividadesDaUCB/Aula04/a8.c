#include <stdio.h>

int main (void){

    char sexo;
    char olho;
    char cabelo;
    int idade;
    float salario;

    printf("Digite seu sexo(m,f): ");
    scanf(" %c", &sexo);

    while(sexo != 'f' || sexo != 'm'){
        scanf(" %c", &sexo);
        printf("ddddddddd");
    }
    
    printf("Digite a cor dos olhos a (azuis), v (verdes), c (castanhos), p (pretos): ");
    scanf("%c", &olho);

    while (olho != "a" || olho != "v" || olho != "c" || olho != "p"){
        scanf("%c", &olho);
    }
    
    printf("Digite a cor do cabelo: l (loiros), c (castanhos), p (pretos), r (ruivos): ");
    scanf("%c", &cabelo);

    while(cabelo !="l" || cabelo != "c" || cabelo != "p" || cabelo != "r"){
        scanf("%c", &cabelo);
    }

    printf("Digite a idade(em anos): ");
    scanf("%i", &idade);

    while (idade < 10 || idade > 100){
       scanf("%i", &idade);
    }

    printf("Digite o salario: R$");
    scanf("%f", &salario);
    
    
    return 0;
}