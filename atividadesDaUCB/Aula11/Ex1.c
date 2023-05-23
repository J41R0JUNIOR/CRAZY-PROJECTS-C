#define USUARIOS 1000
#include <stdio.h>

struct Uauarios{
    int id;
    char email[50];
    char nome[50];
    char sexo[11]; //validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente
    char endereco[100];
    double altura;
    int vacina; //1 sim 0 nao

   
}typedef users;

users vet[USUARIOS];
users vetBackup[USUARIOS];

int main (void){

    
    int escolha;
    char emailBuscar[50];


    //estruturas
    int buscarNoVetor (char emailBuscar[]);



    printf("1- editar usuario\n2- excluir usuario\n3- buscar usuario por email\n4- imprimir todos os usuarios cadastrados\n5- fazer backup\n6- fazer restauracao\n7- Cadastrar Usuario\nEscolha: ");
    

//escolha do usuário

    do{
        scanf("%d", &escolha);
        switch (escolha)
        
    {
    case 1:
        printf("Digite o Email do usuario: ");
        scanf("%[ˆ\n]s", &emailBuscar);
        fflush(stdin);
        printf("%s", vet[0].email[0]);
        if(buscarNoVetor(emailBuscar) != -1){
            printf("Achou");

        }else{
            printf("Usuario nao encontrado");
           
        }
        break;
    case 2:
        
        break;
    case 3:
        
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    case 7:
        printf("Digite o email: ");
        scanf("%[ˆ\n]s", &vet[0].email[0]);
        fflush(stdin);
        break;
    
    default:
        
        break;
    }
    }while(escolha != 0);

    //
    printf("vet: %s emailBuscar: %s", vet[0].email[0], emailBuscar);
    //

    return 0;
}

int buscarNoVetor (char emailBuscar[]){

    int i = 0;

    for(i ; i < USUARIOS; ++i){

        if(vet[i].email[0] == emailBuscar){
            printf("Achou");
            return i;
        }
    }
    return -1;
}


int adicionar (){
    int i = 0;
    for(i; i < USUARIOS; ++i){
        if(vet[i].email == NULL){
            return i;
        }
    }
}