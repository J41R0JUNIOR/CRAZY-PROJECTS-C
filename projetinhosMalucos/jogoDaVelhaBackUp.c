#include <stdio.h>


int main (void){
    char tabuleiro[3][3] = {{'0','0','0'}, {'0','0','0'}, {'0','0','0'}};
    int i = 1, j = 1;
    int k = 1, l = 1;

    _Bool verSeTerminou(char tabuleiro[3][3]);

    printf("0 0 0\n0 0 0\n0 0 0\n"); 

    while(verSeTerminou(tabuleiro)){
        printf("Jogador 1 (i,j): \n");
        scanf("%i,%i", &i, &j);
        printf("%i %i", i, j);

        tabuleiro[i][j] = 'x'; 


        for(int a = 0; a < 3; ++a){
            printf("\n");
            for(int b = 0; b < 3; ++b){
                printf("%c ", tabuleiro[a][b]);
            }
        }

        printf("\n");

        printf("Jogador 2(i,j): \n");
        scanf("%i,%i",&k,&l);

        tabuleiro[k][l] = 'o';

        printf("\n%i %i", k, l);

        for(int a = 0; a < 3; ++a){
            printf("\n");
            for(int b = 0; b < 3; ++b){
                printf("%c ", tabuleiro[a][b]);
            }
        }

    }
    

    if(verSeTerminou(tabuleiro)){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}

//ctype.h para usar tlower() ou tupper()
//system("cls");
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