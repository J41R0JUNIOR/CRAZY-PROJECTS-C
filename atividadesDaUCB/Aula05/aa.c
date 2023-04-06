#include <stdio.h>

int main (void){

    char i[] = {"fe"};
    printf("%c", i[0]);

    i[1] == 'f' ? printf("SS") : printf("NN %c", i[1]);

    return 0;
}