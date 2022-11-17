int main(void)
{
    int vetor[2][2] = {0};
    int i, j;

    int parOuimpar (int vetor[2][2]);

    printf("Insira 4 numeros:\n");

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%i",&vetor[i][j]);
        }
    }
    system("cls");
    //teste pra ver se estão indo pro local certo
    for(int k = 0;k < 2; k++){
        for(int s = 0; s < 2; s++){
            printf("%i esse valor foi pra matriz normalmente \n" , vetor[k][s]);
        }
    }
    //não precisa colocar o [2][2] ou seja lá o valor que quiser
    //esse era o erro que tava levando ao lixo de memória o "parOuimpar(vetor[2][2])"
    
    parOuimpar (vetor);

    return 0;
}

 int parOuimpar (int vetor[2][2])
{
    int i, j;

    for (i = 0; i < 2; ++i)
    {
        for (j = 0; j < 2; ++j)
        {
            if (vetor[i][j] % 2 == 0)
            {
                printf("%d e par\n",vetor[i][j]);
            }
            else if (vetor[i][j] % 2 != 0)
            {
                printf("%d e impar\n",vetor[i][j]);
            }
        }
    }

}