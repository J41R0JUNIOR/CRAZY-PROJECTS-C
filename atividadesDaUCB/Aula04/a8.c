#include <stdio.h>
#include <stdlib.h>

int main (void){
    int s = 0, st = 0;
    int percent;
    char sexo;
    char olho;
    char cabelo;
    int idade;
    float salario;
    
    do{
        printf("Digite seu sexo(m,f): ");
        scanf(" %c", &sexo);
        fflush(stdin);

        while(sexo != 'f' && sexo != 'm'){
            scanf(" %c", &sexo);
            fflush(stdin);
        }
        
        printf("Digite a cor dos olhos a (azuis), v (verdes), c (castanhos), p (pretos): ");
        scanf("%c", &olho);
        fflush(stdin);

        while(olho != 'a' && olho != 'v' && olho != 'c' && olho != 'p' ){
            scanf("%c", &olho);
            fflush(stdin);
        }

        printf("Digite a cor do cabelo: l (loiros), c (castanhos), p (pretos), r (ruivos): ");
        scanf("%c", &cabelo);
        fflush(stdin);

        while(cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r'){
            scanf("%c", &cabelo);
            fflush(stdin);
        }
    
        printf("Digite a idade(em anos): ");
        scanf("%i", &idade);

        if(idade == -1){
            continue;
        }
        while (idade < 10 || idade > 100){
        scanf("%i", &idade);
        }

        printf("Digite o salario: R$");
        scanf("%f", &salario);

        if(sexo == 'f' && idade >= 18 && idade < 35 && cabelo == 'c' && olho == 'c'){
            s++;
        }
        if(sexo == 'f'){
            st++;
        }


    }while(idade != -1);

    percent = s/st;
    printf("%d%% dos indivíduos do sexo feminino, com idade entre 18 e 35 anos tem olhos castanhos e cabelos castanhos ", percent)
    
    return 0;
}