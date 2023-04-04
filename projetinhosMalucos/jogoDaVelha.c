#include <stdio.h>
#include <stdbool.h>

int main (void){

    void jogoDaVelha(char tabuleiro [3][3], int n);
    _Bool verSeTerminou(char tabuleiro[3][3]);
    _Bool verSeJaMarcou (char tabuleiro[3][3], int i, int j);
    int quemGanhou(char tabuleiro[3][3]);
    

    char tabuleiro[3][3] = {{'0','0','0'},
                            {'0','0','0'}, 
                            {'0','0','0'}};
    
    int escolha = 0;


    printf("Escolha o modo de jogo:\n(1)Jogar contra o computador\n(2)Jogar de dois\n");
    scanf("%i",&escolha);

    switch(escolha){
        case 1:
            jogoDaVelha(tabuleiro, 1);
        break;
        case 2:
            jogoDaVelha(tabuleiro, 2);
        break;
        default:
            printf("Escolha indisponivel!");
    }


    return 0;
}


void jogoDaVelha(char tabuleiro [3][3], int n){

    static int i = 1, j = 1;

    _Bool verSeTerminou(char tabuleiro[3][3]);
    _Bool verSeJaMarcou (char tabuleiro[3][3], int i, int j);
    int quemGanhou(char tabuleiro[3][3]);

    for(int a = 0; a < 3; ++a){
        printf("\n");
        for(int b = 0; b < 3; ++b){
        printf("%c ", tabuleiro[a][b]);
        }   
    } 

    printf("\n");

    while(verSeTerminou(tabuleiro)){

        printf("Jogador 1 (i,j): \n");
            scanf("%i,%i", &i, &j);

        while(verSeJaMarcou (tabuleiro, i, j)){
            printf("Jogador 1 (i,j): \n");
            scanf("%i,%i", &i, &j);
        }

        if(quemGanhou(tabuleiro) == 2){
            printf("O jogador 2 ganhou!!!");
            break;
        }

        if(quemGanhou(tabuleiro) == 1){
            printf("O jogador 1 ganhou!!!");
            break;
        }

        //system("cls");

        tabuleiro[i][j] = 'x'; 

        for(int a = 0; a < 3; ++a){
            printf("\n");
            for(int b = 0; b < 3; ++b){
                printf("%c ", tabuleiro[a][b]);
            }
        }
        if(verSeTerminou(tabuleiro) == 0){
            printf("\nIxi, deu velha!!!");
            break;
        }

        printf("\n");

        if(quemGanhou(tabuleiro) == 2){
            printf("O jogador 2 ganhou!!!");
            break;
        }
        if(quemGanhou(tabuleiro) == 1){
            printf("O jogador 1 ganhou!!!");
            break;
        }
        
        printf("Jogador 2(i,j): \n");
        if(n == 1){
            
        }else if (n ==2){
            scanf("%i,%i",&i,&j);
        }

        while(verSeJaMarcou (tabuleiro, i, j)){
            printf("Jogador 2(i,j): \n");
            scanf("%i,%i",&i,&j); 
        }

        if(verSeTerminou(tabuleiro) == 0){
            printf("\nIxi, deu velha!!!");
            break;
        }

        if(quemGanhou(tabuleiro) == 2){
            printf("O jogador 2 ganhou!!!");
            break;
        }
        if(quemGanhou(tabuleiro) == 1){
            printf("O jogador 1 ganhou!!!");
            break;
        }
        //system("cls");

        tabuleiro[i][j] = 'o';

        if(quemGanhou(tabuleiro) == 2){
            printf("O jogador 2 ganhou!!!");
            break;
        }
        if(quemGanhou(tabuleiro) == 1){
            printf("O jogador 1 ganhou!!!");
            break;
        }

        for(int a = 0; a < 3; ++a){
            printf("\n");
            for(int b = 0; b < 3; ++b){
                printf("%c ", tabuleiro[a][b]);
            }
        }
    }


}
int computadorJogada(char tabuleiro[3][3]){

    
    
}

_Bool verSeTerminou(char tabuleiro[3][3]){
    for(int a = 0; a < 3; ++a){
        for(int b = 0; b < 3; ++b){
            if(tabuleiro[a][b] == '0'){
                return 1;
            }
        }
    }
    return 0;
}

_Bool verSeJaMarcou (char tabuleiro[3][3], int i, int j){
    if(tabuleiro[i][j] == 'x' || tabuleiro[i][j] == 'o'){
        return true;
    }
    return false;
}

int quemGanhou(char tabuleiro[3][3]){
    if(tabuleiro[0][0] == 'o' && tabuleiro[0][1] == 'o' && tabuleiro[0][2] == 'o'){
        return 2;
    }
    if(tabuleiro[0][0] == 'x' && tabuleiro[0][1] == 'x' && tabuleiro[0][2] == 'x'){
        return 1;
    }
    if(tabuleiro[1][0] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[1][2] == 'o'){
        return 2;
    }
    if(tabuleiro[1][0] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[1][2] == 'x'){
        return 1;
    }
    if(tabuleiro[2][0] == 'o' && tabuleiro[2][1] == 'o' && tabuleiro[2][2] == 'o'){
        return 2;
    }
    if(tabuleiro[2][0] == 'x' && tabuleiro[2][1] == 'x' && tabuleiro[2][2] == 'x'){
        return 1;
    }
    if(tabuleiro[0][0] == 'o' && tabuleiro[1][0] == 'o' && tabuleiro[2][0] == 'o'){
        return 2;
    }
    if(tabuleiro[0][0] == 'x' && tabuleiro[1][0] == 'x' && tabuleiro[2][0] == 'x'){
        return 1;
    }
    if(tabuleiro[0][1] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[2][1] == 'o'){
        return 2;
    }
    if(tabuleiro[0][1] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[2][1] == 'x'){
        return 1;
    }
    if(tabuleiro[0][2] == 'o' && tabuleiro[1][2] == 'o' && tabuleiro[2][2] == 'o'){
        return 2;
    }
    if(tabuleiro[0][2] == 'x' && tabuleiro[1][2] == 'x' && tabuleiro[2][2] == 'x'){
        return 1;
    }
    if(tabuleiro[0][0] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[2][2] == 'o'){
        return 2;
    }
    if(tabuleiro[0][0] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[2][2] == 'x'){
        return 1;
    }
    if(tabuleiro[0][2] == 'o' && tabuleiro[1][1] == 'o' && tabuleiro[2][0] == 'o'){
        return 2;
    }
    if(tabuleiro[0][2] == 'x' && tabuleiro[1][1] == 'x' && tabuleiro[2][0] == 'x'){
        return 1;
    }

}