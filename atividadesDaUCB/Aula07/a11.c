#include <stdio.h>

int main(void){

    float vet[10] = {1.2, 4.3, 5.5, 6.3, 4, -5.9, 9.9, 10, 10, 1.2};
    float tot, negativos;

    for(int i= 0; i < 15; i++){
        if(vet[i] < 0){
            negativos++;
        }else{
            tot += vet[i];
        }
    }
    printf("%.0f\n",negativos);
    printf("%.0f",tot);

    return 0;
}