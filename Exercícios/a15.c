#include <stdio.h>

struct horario{
    int horas;
    int minutos;
    int segundos;
};

int main(void){

    struct horario teste (struct horario x);

    struct horario agora;
    agora.horas = 18;
    agora.minutos = 16;
    agora.segundos = 30;

    struct horario proxima;
    proxima = teste(agora);

    printf("Estrutura agora na funcao main: %i:%i:%i\n",proxima.horas, proxima.minutos, proxima.segundos);

 
    return 0;
}

struct horario teste(struct horario x){
    x.horas += 5;
    x.minutos += 7;
    x.segundos += 2;

    printf("Estrutura agora: %i:%i:%i\n",x.horas, x.minutos, x.segundos);

    return x;
}