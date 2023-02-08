#include <stdio.h>

int main (void){
    void limparBuffer (void);

    char a, b, c;
    a = getchar();
    limparBuffer();
    b = getchar();
    limparBuffer();
    c = getchar();
    limparBuffer();

    printf("a = %c\n", a);
    
    printf("b = %c\n", b);

    printf("c = %c\n", c);


    return 0;
}

void limparBuffer (void){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}