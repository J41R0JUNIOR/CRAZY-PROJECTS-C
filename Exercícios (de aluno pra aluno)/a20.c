#include <stdio.h>

struct horario {
    int hora;
    int minuto;
    int segundo;
};
    
int main(void){
    void receber (struct horario agora[5]);

    struct horario agora[5] = {{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};

    for(int i = 0; i < 5; i++){

        printf("Digite um horário de numero ""%i"" no formato hh:mm:ss: ",i);
        scanf("%i:%i:%i",&agora[i].hora, &agora[i].minuto, &agora[i].segundo);

    }
    receber(agora);
    
    return 0;
}
void receber (struct horario agora[5]){
    for(int i = 0; i < 5; i++){
        printf("%i o(a) - horario %i:%i:%i\n", i+1, agora[i].hora, agora[i].minuto, agora[i].segundo);
    }

}