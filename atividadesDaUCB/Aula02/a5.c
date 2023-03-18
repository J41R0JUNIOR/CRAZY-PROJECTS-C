#include <stdio.h>
#include <time.h>

int main (void){

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    

    int dia1 = tm.tm_mday, mes1 = tm.tm_mon + 1, ano1 = tm.tm_year + 1900;
    int dia2, mes2, ano2;
    int qtd = 0;

    printf("data atual: %02d/%02d/%02d\n", dia1, mes1, ano1);

    printf("Digite a data de nascimento: \n(dd/mm/aa)\n");
    scanf("%d/%d/%d", &dia2 ,&mes2 ,&ano2);

    if (ano2 < ano1){
        for(ano2; ano2 < ano1; ano2++){
            qtd += 365;
        }
    }
    if(mes2 < mes1){
        for(mes2; mes2 < mes1; mes2 ++){
            qtd += 30;
        }
    }else if(mes2 > mes1){
        for(mes2; mes2 > mes1; mes2 ++){
            qtd -= 30;
        }
    }
    if(dia2 < dia1){
        for(dia2; dia2 < dia1; dia2 ++){
            qtd += 1;
        }
    }
    else if(dia2 > dia1){
        for(dia2; dia2 > dia1; dia2 ++){
            qtd -= 1;
        }
    }
    
    printf("Quantidade de dias que se passaram: %d", qtd);

    return 0;
}