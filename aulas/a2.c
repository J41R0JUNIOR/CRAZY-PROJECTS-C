#include <stdio.h>

int main(void){

    float nota[5] = {0};
    float media = 0;
    float total = 0;

    for(int i=0; i < 5; i++){
        printf("nota: ");
        scanf("%f", &nota[i]);
        total += nota[i];

    }
    media = total / 5;
    
  
    printf("total%f \nmedia %f",total, media);
    return 0;
}