/*Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).

A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo*/

#include <stdio.h>
#include <string.h>

#define SALARIOMINIMO 1400.00

int main (void){
    void classificaSalario (float valorSalario);
    char mostraClassifica ();

    char sexo[10];
    
    float valorSalario = 0;

    printf("Digite o sexo: (M/F): ");
    scanf(" %c", &sexo);
   

    while(valorSalario < 1){
        printf("Digite o valor do salario: ");
        scanf("%f", &valorSalario);
        fflush("stdin");
    }
    if(sexo == "f" || sexo == "F"){
        strcpy(sexo, "Feminino");
        fflush("stdin");
        printf("aaaaaaaaaaa");
    }
    if(sexo == 'm' || sexo == 'M'){
        strcpy(sexo, "Masculino");
        printf("bbbbbbbbbb");
        fflush("stdin");
    }
    printf("ccccccccccc");
    classificaSalario(valorSalario);
    
    printf("Salario = %f, Classificacao = %s, sexo = %s", valorSalario, mostraClassifica(), sexo);

    return 0;
}
char classe;

void classificaSalario (float valorSalario){
    
    char mostraClassifica ();

    if (valorSalario < SALARIOMINIMO){
        classe = 'd';
    }else if(valorSalario == SALARIOMINIMO){
        classe = 'e';
    }else if(valorSalario > SALARIOMINIMO){
        classe = 'u';
    }

    mostraClassifica ();
    
}

char mostraClassifica (){
    void classificaSalario (float valorSalario);

    if (classe == 'd'){
        return "Abaixo";
    }
    if (classe == 'e'){
        return "Igual";
    }
    if (classe == 'd'){
        return "Acima";
    }
}
