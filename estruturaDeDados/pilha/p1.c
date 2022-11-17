#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    char nome[50];
    Data data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

Pessoa ler_pessoa(){

    Pessoa p;

    printf("\nDigite o nome e data de nascimento dd mm aaaa: \n");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir_pessoa(Pessoa p){
    printf("\nNome: %s\nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);

}

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }else{
        printf("\nErro ao alocar memoria...\n");
    }
    return = NULL;
}

int main(void){

    No *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empinlhar\n2 - Desempilhar\n3 Imprimir\n");
        scanf("%d", &opcao);
        getchar();
        printf("\nOpcao: %d\n", opcao);

        switch (opcao)
        {
        case 1;
            topo = empilhar(topo);
            break;
        case 2;

            break;
        case 3;

            break;
        default:
            if(opcao != 0){
                printf("\nOpcao invalida!!!\n");
            }
        }
    }while(opcao != 0);
    
    return 0;
}