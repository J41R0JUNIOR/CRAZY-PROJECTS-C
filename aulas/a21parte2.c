#include <stdio.h>
    int t1 = 5, t2 = 5;
int main(void)
{
    void concatenarStrings(char string1[], char string2[], char string3[]);

    char palavra1[20];
    char palavra2[20];
    char novaPalavra[40];

    printf("Digite o primeiro nome: ");
    scanf("%s", palavra1);
    printf("Digite o segundo nome: ");
    scanf("%s", palavra2);

    concatenarStrings(palavra1, palavra2, novaPalavra);

    for(int i=0; i < 10; i++)
    {
        printf("%c", novaPalavra[i]);
    }
    
    return 0;
}
void concatenarStrings(char string1[], char string2[], char string3[]){
    int i = 0, j = 0;
    for(i; i < t1; i++)
    {
        string3[i] = string1[i];
    }
    for(j; j < t1 + t2; j++)
    {
        string3[t1 + j] = string2[j];
    }
}