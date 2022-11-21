#include <stdio.h>


int variavelGlobal = 2;


int main(void)
{

    void teste(void);

    printf("funcao principal Variavel Global =%d\n",variavelGlobal);
    teste();
    teste();
    //printando a variável global
   

    return 0;
}

void teste(void)
{
    //variavel local automática
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;
    printf("Variavel Local Automatica = %i\n", variavelLocalAutomatica);

    //variavel local estática
    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;
    printf("Variavel Local Estatica =%i\n",variavelLocalEstatica);

    variavelGlobal *= 2;
    //printando a variável global
    printf("funcao secundaria Variavel Global =%d\n",variavelGlobal);
}