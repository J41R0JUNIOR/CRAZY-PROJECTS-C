//estruturas
#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;
        float teste;
        char letra;
    };
    struct horario agora;

    agora.horas = 18;
    agora.minutos = 16;
   agora.segundos = 30;

    printf("Estrutura agora: %i:%i:%i\n",agora.horas, agora.minutos, agora.segundos);

    system("pause");

    struct horario depois;
    depois.horas = agora.horas + 2;
    depois.minutos = agora.minutos + 1;
    depois.segundos = agora.segundos;
    depois.teste = 100/ 55.2;
    depois.letra = "Z";

    printf("\nEstrutura depois: %i:%i:%i \n 100/55.2%f \n%c",depois.horas, depois.minutos, depois.segundos, depois.teste, depois.letra);


    return 0;
}