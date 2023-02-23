//Minidicionário
#include <stdio.h>
#include <stdbool.h>

struct dicionario{
    char palavra[20];
    char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]){
    
    int i = 0;
    while (palavra1[i] == palavra2[i] && palavra1[i] != '\0' && palavra2[i] != '\0'){
        ++i;
    }

    if(palavra1[i] == '\0' && palavra2[i] == '\0'){
        return true;
    }else{
        return false;
    }
}

int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras){
    
    bool compararStrings(const char palavra1[], const char palavra2[]);

    int i = 0;
    while(i < numDePalavras){
        if(compararStrings(procurar, lingua[i].palavra)){
            return i;
        }else{
            ++i;  
        }
    }
    return -1;
}

int main(void){

    int procurarStrings(const struct dicionario lingua[], const char procurar[], const int numDePalavras);

    const int NUMERODEDEFINICOES = 7;
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    const struct dicionario portugues[7] = 
       {{"pao", "comida de pobre"},
        {"casa", "Lugar onde se mora"},
        {"feijao", "grao"}, 
        {"queijo", "comida a base de leite"}, 
        {"macarronada", "coisa de vo"}, 
        {"pizza", "Italiana muito boa por sinal"},
        {"maracana", "estadio de futebol"}};

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);

    if(resultadoPesquisa != -1){
        printf("%s\n",portugues[resultadoPesquisa].definicao);
    }else{
        printf("Palavra nao encontrada!");
    }

    return 0;
}