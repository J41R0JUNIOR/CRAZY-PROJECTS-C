/*Para o controle dos veículos que circulam em uma determinada cidade, a Secretaria dos Transportes criou o seguinte registro padrão:

 Proprietário:__________________________ Combustível:____________________

 Modelo: _____________________________ Cor: __________________________

Nº chassi: _________________________ Ano: __________ Placa: ____________

Em que:

• Combustível pode ser álcool, diesel ou gasolina;

• Placa possui os três primeiros valores alfabéticos e os quatro restantes valores numéricos.

Sabendo que não temos uma definição do número máximo de veículos da cidade e que é preciso armazenar todos os valores em uma lista encadeada simples, construa:

a. Uma função que liste todos os proprietários cujos carros são do ano de 2010 ou posterior e que sejam movidos a diesel.

b. Uma função que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.

c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.

 d. Uma função que permita a troca de proprietário com o fornecimento do número do chassi apenas para carros com placas que não possuam nenhum dígito igual a zero. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registroVeiculos{
    char proprietario[50];
    char combustivel[8];
    char modelo[50];
    char cor[50];
    int numeroChassi;
    int ano;
    char placa[7];
    struct registroVeiculos* No;
} RegistroVeiculos;

RegistroVeiculos* inicializa() {
    return NULL;
}

int vazia(RegistroVeiculos* registroVeiculos) {
    if (registroVeiculos == NULL) {
        return 1;
    } else {
        return 0;
    }
}

RegistroVeiculos* insereInicio(RegistroVeiculos* registroVeiculos){
    RegistroVeiculos* novoNo = (RegistroVeiculos*)malloc(sizeof(RegistroVeiculos));
    novoNo->No = registroVeiculos;

    fflush(stdin);
    printf("Proprietario: ");
    scanf("%[^\n]s", novoNo->proprietario);
    fflush(stdin);
    /*
    printf("Combustivel: ");
    scanf("%[^\n]s", novoNo->combustivel);
    fflush(stdin);

    while (strcmp(novoNo->combustivel, "alcool") != 0 && strcmp(novoNo->combustivel, "diesel") != 0 && strcmp(novoNo->combustivel, "gasolina") != 0) {
    printf("Combustivel: ");
    scanf("%[^\n]s", novoNo->combustivel);
    fflush(stdin);
    }

    fflush(stdin);
    printf("Modelo: ");
    scanf("%[^\n]s", novoNo->modelo);
    fflush(stdin);
    printf("Cor: ");
    scanf("%[^\n]s", novoNo->cor);
    fflush(stdin);
    printf("Numero do Chassi: ");
    scanf("%d", &novoNo->numeroChassi);
    fflush(stdin);
    */
    printf("Ano: ");
    scanf("%d", &novoNo->ano);
    fflush(stdin);
    
    printf("Placa: [3 letras e 4 numeros] ");
    scanf("%[^\n]s", novoNo->placa);
    fflush(stdin);
    
//---------------------------placa-----------------------------
    int qtd = 0;
    int qtd2 = 0;

    for(int i = 0; i < 3; ++i){
            if(novoNo->placa[i] >= 'a' &&  novoNo->placa[i] <= 'z' || novoNo->placa[i] >= 'A' &&  novoNo->placa[i] <= 'Z'){
                qtd+=1; 
            }
        }
    for(int i = 3; i < 7; ++i){
        if(novoNo->placa[i] >= '0' &&  novoNo->placa[i] <= '9'){
            qtd2+=1; 
        }
    }

    while(qtd != 3 && qtd2 != 4){
        fflush(stdin);
        printf("Invalido \nPlaca: ");
        scanf("%[^\n]s", novoNo->placa);
        fflush(stdin);

        int qtd = 0;
        int qtd2 = 0;

        for(int i = 0; i < 3; ++i){
            if(novoNo->placa[i] >= 'a' &&  novoNo->placa[i] <= 'z' || novoNo->placa[i] >= 'A' &&  novoNo->placa[i] <= 'Z'){
                qtd+=1; 
            }
        }
        for(int i = 3; i < 7; ++i){
            if(novoNo->placa[i] >= '0' &&  novoNo->placa[i] <= '9'){
                qtd2+=1; 
            }
        }

        if(qtd == 3 && qtd2 == 4){
            break;
        }
        
    }
    
 
    registroVeiculos = novoNo;

    return registroVeiculos;
}

void imprime(RegistroVeiculos* registroVeiculos){
    if (vazia(registroVeiculos)) {
        printf("Lista Vazia\n");
        return;
    }

    RegistroVeiculos* p = registroVeiculos;

    printf("Inicio da lista\n");
    while (p != NULL) {
        printf("\n___________________________________________________________________________________________________\n");
        printf("Proprietario: %s \t\t Combustivel: %s\n", p->proprietario, p->combustivel);
        printf("Modelo: %s \t\t Cor: %s\n", p->modelo, p->cor);
        printf("N Chassi: %i \t\t Ano: %i \t\t Placa: %s", p->numeroChassi, p->ano, p->placa);
        
        p = p->No;
    }
    printf("\nFim da lista\n");
}

char c1[200][50];

void addVetor(RegistroVeiculos* registroVeiculos){
    RegistroVeiculos* p = registroVeiculos;
    int i = 0;

    if (vazia(registroVeiculos)) {
        printf("Lista Vazia\n");
    }

    while (p != NULL) {
        if(p->ano >= 2010 && strcmp(p->combustivel, "diesel") == 0){
            fflush(stdin);
            strcpy(c1[i], p->proprietario);
            fflush(stdin);
            printf("%s\n", c1[i]);
            i++;

            p = p->No;
        }else{
            return;
        }
    }
}

char c2[200][7];
void addVetor2(RegistroVeiculos* registroVeiculos){
    RegistroVeiculos* p = registroVeiculos;
    int i = 0;

    if (vazia(registroVeiculos)) {
        printf("Lista Vazia\n");
    }

    while (p != NULL){
        if(p->placa[0] == 'j' && (p->placa[6] == '0' || p->placa[6] == '2' || p->placa[6] == '4' || p->placa[6] == '7')){
            fflush(stdin);
            strcpy(c2[i], p->placa);
            fflush(stdin);
            printf("%s\n", c2[i]);
            i++;
            
            p = p->No;
        }else{
            return;
        }
    } 
}





int main (void){

    RegistroVeiculos* registroVeiculos;
    int escolha = 0;

    registroVeiculos = inicializa();

    printf("1- sair || 2- adicionar || 3- imprimir || 4- condicao 1 || 5- condicao 2\n");
    while(escolha != 1){
        printf("Escolha:");
            scanf("%d", &escolha);
        if(escolha == 2){
            
            if(escolha == 1){
                break;
            }
            registroVeiculos = insereInicio(registroVeiculos);
        }

        if(escolha == 3){
            imprime(registroVeiculos);
            printf("\n\n\n");
        }

        if(escolha == 4){
            printf("condicao 1");
            printf("\n\n\n");
            addVetor(registroVeiculos);
            printf("\n\n\n");
            continue;
        }
        if(escolha == 5){
            printf("condicao 2");
            printf("\n\n\n");
            addVetor2(registroVeiculos);
            printf("\n\n\n");
        }
        
    }
    
    
    
    

    return 0;
}