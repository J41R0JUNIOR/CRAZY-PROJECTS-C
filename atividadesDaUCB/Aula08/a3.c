#include <stdio.h>
#include <string.h>

/*
Você foi contratado para desenvolver um algoritmo para controlar as informações de um campeonato de futebol de salão. Sabe-se que no campeonato serão inscritos um mínimo de 3 times e um máximo de 9 times e que cada time deve inscrever no mínimo 6 jogadores e no máximo onze jogadores entre reservas e titulares. 
Faça um algoritmo que para cada time inscrito obtenha a idade e o peso de cada jogador e apresente as seguintes informações:
Para cada time:
Média das idades dos jogadores time;
Média do peso dos jogadores acima de 25 anos;

Para todos os jogadores inscritos no campeonato:
Quantidade de jogadores menores de idade (18 anos);
Quantidade e porcentagem de jogadores com mais de 80 quilos 
*/

int main (void){

    int idade [9][11] = {0};
    float peso [9][11] = {0};
    float mIdade[9] = {0};
    float mPeso[9] = {0};

    int menorDeIdade = 0, acimaPeso;
    int qtd, qtdJogador;

    
    //while(qtd < 3 || qtd > 9){
        printf("Digite a quantidade de times: ");
        scanf("%d", &qtd);
    //}
    //while(qtdJogador < 6 || qtdJogador > 11){
        printf("Digite a quantidade de jogadores: ");
        scanf("%d", &qtdJogador);
    //}

    for(int i = 0; i < qtd; ++i){
        for(int j = 0; j < qtdJogador; ++j){
            printf("IDADE do Jogador %d Time: %d\n", j+1, i+1);
            scanf("%d", &idade[i][j]);
            printf("PESO do Jogador %d Time: %d\n", j+1, i+1);
            scanf("%f", &peso[i][j]);

            mIdade[i] += idade[i][j];
            if(idade[i][j] > 25){
                mPeso[i] += peso[i][j];
            }
            if(idade < 18){
                menorDeIdade += 1;
            }
            if(peso[i][j] > 80){
                acimaPeso += 1;
            }
        }
        mIdade[i] = mIdade[i] / qtdJogador;
        mPeso[i] += mPeso[i] / qtdJogador;
    }

    for(int i = 0; i < qtd; ++i){
        printf("Media de idade dos jogadores do time %d = %.0f\n", i+1,  mIdade[i]);
        printf("Media de peso dos jogadores acima de 25 anos do time %d = %.0f\n", i+1,  mPeso[i]);
    }
    printf("quantidade de jogadores menores de idade: \n", menorDeIdade);
    printf("quantidade de jogadores com peso maior que  80kg: \n", acimaPeso);
    
    return 0;
}