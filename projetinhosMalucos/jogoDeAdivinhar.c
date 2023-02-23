/*
dificuldade 1 tem 9 tentativas 
dificuldade 2 tem 6 tentativas
dificuldade 3 tem 3 tentativas
*/
#include <stdio.h>


int main()
{

    int escolha=0, dificuldade=0,tentativa=0;
    int count=0;

    printf("\"Tentativa e Erro\"\n");

    do
    {
        printf("Digite un numero:");
        scanf("%d",&escolha);
        system("cls");
    }while (escolha > 100);
    
    printf("Dificuldades:\n 1 Facil \n 2 Medio \n 3 Dificil \n");
    printf("Escolha a dificuldade: ");
    scanf("%d",&dificuldade);
    system("cls");

    switch(dificuldade)
    {
        case 1:
            printf("Dificuldade facil selecionada!\n");

            while(count < 9)
            {
                printf("Tente Adivinhar o numero: ");
                scanf("%d",&tentativa);
                count++;

                if (escolha == tentativa)
                {
                    printf("Parabens voce acertou!");
					break;

                }else if (count == 9 && tentativa != escolha)
                {
                    printf("Que pena \nGAME OVER!");
                }
            }
        break;

        case 2:
            printf("Dificuldade media selecionada!\n");
            
            while(count < 6)
            {
                printf("Tente Adivinhar o numero: ");
                scanf("%d",&tentativa);
                count++;

                if(escolha == tentativa){
                    printf("Parabens voce acertou!");
                    break;

                }if(count == 6 && tentativa != escolha){
                    printf("Que pena \nGAME OVER!");
                }
            }
        break;
        case 3:
            printf("Dificuldade Dificil selecionada!\n");
            
            while(count < 3)
            {
                printf("Tente Adivinhar o numero: ");
                scanf("%d",&tentativa);
                count++;

                if(escolha == tentativa)
                {
                    printf("Parabens voce acertou!");
					break;

                }if(count == 3 && tentativa != escolha)
                {
                    printf("Que pena \nGAME OVER!");
                }
            }
        break;

        default:
        printf("Opcao invalida!");
        break;
    }
    return 0;

}
