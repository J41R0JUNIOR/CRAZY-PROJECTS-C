//estruturas
#include <stdio.h>

int main(void){

    struct horario{
        int horas;
        int minutos;
        int segundos;
    };
    
    struct horario teste[3] = {{1,2,3},{2,3,4},{3,4,5}};

    for(int i = 0; i < 3; i++){
        printf("{%i : %i : %i}\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
    }

    return 0;
}