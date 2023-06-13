/*
Crie uma estrutura, com o nome Dieta, para armazenar em uma lista encadeada o nome de uma comida, o peso de uma porção e o número de calorias. Escreva um programa semelhante a questão 1. (0,75 ponto)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct dieta{
    char nomeComida[50];
    float pesoPorcao;
    int numeroCalorias;
    struct dieta* no;

}Dieta;

Dieta* inicializa(void){

    return NULL;
}

int vazia(Dieta* dieta){

    if(dieta == NULL){
        return 1;
    }else{
        return 0;
    }
}

Dieta* inserirAlimento (Dieta* dieta){

    Dieta* novoNo = (Dieta*)malloc(sizeof(Dieta));
    novoNo->no = dieta;

    printf("Digite o nome da comida: ");
    scanf("%[ˆ\n]s", &novoNo->nomeComida);
    printf("%s", novoNo->nomeComida);
    fflush(stdin);
    printf("Digite o peso da porcao: ");
    scanf("%f", &novoNo->pesoPorcao);
    printf("%s", novoNo->pesoPorcao);
    printf("Digite o numero de calorias da porcao: ");
    scanf("%d", &novoNo->numeroCalorias);
    printf("%s", novoNo->numeroCalorias);
    return novoNo;
}

void imprimir(Dieta* dieta){
    if(vazia){
        printf("\nLista vazia\n");
        return;
    }
    printf("\\\\\\PRATOS////\n");
    Dieta* p = dieta;
    while(p != NULL){
        printf("Nome da porcao\n", p->nomeComida);
        printf("Peso da porcao\n", p->pesoPorcao);
        printf("Calorias da porcao\n", p->numeroCalorias);
        p = p->no;
    }
}

int main (){
    Dieta* dieta;
    char escolha;

    dieta = inicializa();

    while(escolha != 's'){
        printf("Escolhas: \na - adicionar comida\nv - ver comidas\ns - sair\nResposta: ");
        scanf(" %c", &escolha);
        printf("\n");

        if(escolha == 'a'){
            dieta = inserirAlimento(dieta);
        }
        else if(escolha == 'v'){
            imprimir(dieta);
        }
        else if(escolha == 's'){
            break;
        }
        else{
            printf("opcao invalida!!!\n ");
            continue;
        }
        
    }
    return 0;
}
