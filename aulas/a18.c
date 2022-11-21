#include <stdio.h>

struct horarios{
    int hora;
    int minuto;
    int segundo;
};
int main (void){

    struct horarios horas[5] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

    void receberHorarios(struct horarios horas[5]);
    void lerHorarios(struct horarios horas[5]);

    receberHorarios(horas);
    lerHorarios(horas);

    return 0;
}

void receberHorarios(struct horarios horas[5]){

    for(int i = 0; i < 2; i++){
    
        printf("Digite o horario (hh:mm:ss) :");
        scanf("%i:%i:%i",&horas[i].hora,&horas[i].minuto,&horas[i].segundo);
    }
}

void lerHorarios(struct horarios horas[5]){

    for(int i = 0; i < 5; i++){
        printf("O %i horario eh %i:%i:%i\n", i,horas[i].hora, horas[i].minuto, horas[i].segundo);
    }

}