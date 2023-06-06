#include <stdio.h>
#include <stdlib.h>

struct Restaurante{
    char nomeRest[50];
    char enderecoRest[100];
    float precoMedioRest;
    char tipoComidaRest[50];
    struct Restaurante* proximo;
}typedef Rest;

int main (void){
    Rest *inicio =(Rest *)malloc(sizeof(Rest));
    int qtd = 0;

    //inicio da lista
    inicio->proximo = NULL;

    //adicionando elementso
    Rest *Elemento =(Rest *)malloc(sizeof(Rest));
    


    return 0;
}

void solicitarDados(){
    printf("Sobre o Restaurante\n");
    printf("Nome: ");
    printf("Endereco: ");
    printf("Preco Medio: ");
    printf("Tipo de Comida: ");
}
void listarDados(){

}