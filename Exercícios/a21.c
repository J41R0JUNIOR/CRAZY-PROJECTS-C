#include <stdio.h>

int main(void){

    void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[]);

    char palavra1[] = {'S','l','i','m',' '};
    char palavra2[] = {'S','h','a','d','y'};
    char novaPalavra[10];

    concatenarStrings(palavra1, 5, palavra2, 5, novaPalavra);

    for(int i=0; i < 10; i++)
    {
        printf("%c", novaPalavra[i]);
    }

    return 0;
}
void concatenarStrings(char string1[], int t1, char string2[], int t2, char string3[]){
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