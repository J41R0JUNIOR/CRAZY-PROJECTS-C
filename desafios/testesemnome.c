#include <stdio.h>

int main (void){

    FILE *file = fopen("testesemnome.txt", "r");
    char x[100];
    int i = 0;

    while((x[i] = fgetc(file)) != EOF){
        ++i;
    }
    x[++i] = '\0';
    printf("%s", x);

    

    return 0;
}