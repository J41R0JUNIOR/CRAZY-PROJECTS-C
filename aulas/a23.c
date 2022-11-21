#include <stdio.h>


int main(void)
{
    int tamanhoString(char string[]);
    char stringUsuario[20];

    printf("Digite uma palavra: \n");
    scanf("%[^\n]s", stringUsuario);

    int num = tamanhoString(stringUsuario);

    printf("O numero de caracteres na [%s] e igual a = %d",stringUsuario, tamanhoString(stringUsuario));
    return 0;
}

int tamanhoString(char string[])
{
    int numCaracteres = 0;

    while(string[numCaracteres] != '\0')
    {
        numCaracteres++;
    }
    numCaracteres++; //pois tem o caractére nulo(que a gente não vê, mas a linguagem C consegue enxergar pra saber o final de uma string)

    return numCaracteres;
}