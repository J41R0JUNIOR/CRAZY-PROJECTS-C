#include <stdio.h>

int main (void){

    int x, y;
    int numeros(int x, int y);
    
    scanf("%d %d", &x, &y);

    numeros(x, y);

    return 0;
}
int numeros(int x, int y){
    x > y ? printf("%d e o maior numero", x) : printf("%d e o maior numero", y);
}