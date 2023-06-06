#include <stdio.h>

int main (void){

    float n[10], recebe = 0;

    for(int i = 0; i < 10; i++){
        scanf("%f", &n[i]);
        recebe += n[i]; 
    }
    printf("%.1f", recebe/10);

    return 0;
}