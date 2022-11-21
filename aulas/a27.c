#include <stdio.h>

int main(void){

    int i;
    for(i=1; i<=20; i++){
        if(i % 3 == 0 && i % 9 == 0){
            printf("Numero %d e divisivel por 3 e 9\n",i);
            break;
        }else{
            printf("Numero %d nao divisivel por 3 nem por 9\n ", i);
        }

    }

    return 0;
}