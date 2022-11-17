#include <stdio.h>

int main(void){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    }hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora = &hora;
    hoje.pMinuto = &minuto;
    hoje.pSegundo = &segundo;

    printf("%i %i - hora\n", hoje.pHora, *hoje.pHora);
    printf("%i %i - minuto\n", hoje.pMinuto, *hoje.pMinuto);
    printf("%i %i - segundo\n", hoje.pSegundo, *hoje.pSegundo);

    *hoje.pSegundo = 1000;
    printf("%i %i - segundo\n", hoje.pSegundo, *hoje.pSegundo);

    return 0;
}