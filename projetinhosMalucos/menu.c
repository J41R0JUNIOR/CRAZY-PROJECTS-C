#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define QTD_JOGOS 450
#define MIN_ID 300
#define MAX_ID 10000

int main()
{
	char escolha=' ',nome_presidente[50] = "ainda nao cadastrado",cidade[50] = "ainda nao cadastrado";
	int id_jogo = 0,qtd_jogos = 0;
	float arrecadado = 0;
	
	do
	{	
	    printf("\n\n\n\\\\Menu de Opcoes//");
	    printf("\n\nEscolha uma das opcoes abaixo: ");
	    printf("\n(a)Cadastro");
	    printf("\n(b)Tabela de dados");
	    printf("\n(c)Renda do ultimo jogo");
	    printf("\n(d)Encerrar programa");
	    printf("\nSua Escolha: ");
	    scanf(" %c",&escolha);
		escolha = tolower(escolha);
	    fflush(stdin);
		
	    switch(escolha)
		{
	    	case 'a':
	    		printf("Nome do presidente: ");
	    		scanf("%[^\n]s",&nome_presidente);
	    		fflush(stdin);
	    		
	    		printf("Identificacao do jogo: ");
	    		scanf("%d",&id_jogo);
	    		fflush(stdin);
				
	    		
	    		while (id_jogo < MIN_ID || id_jogo > MAX_ID)
				{
	    			printf("Valor Invalido!\n");
	    			printf("Identificacao do jogo: ");
	    			scanf("%d",&id_jogo);
	    			fflush(stdin);
				}
				
				printf("Quantidade de jogos: ");
				scanf("%d",&qtd_jogos);
				fflush(stdin);

				
				
				while(qtd_jogos > QTD_JOGOS || qtd_jogos < 1)
				{
					printf("Quantidade Invalida!\n");
					printf("Quantidade de jogos: ");
					scanf("%d",&qtd_jogos);
					fflush(stdin);
				}
				
				printf("Valor arrecadado com os ingressos: ");
				scanf("%f",&arrecadado);
				fflush(stdin);
				
				while (arrecadado < 1000 || arrecadado > 1000000)
				{
					printf("Valor Invalido!\n");
					printf("Valor arrecadado com os ingressos: ");
					scanf("%f",&arrecadado);
					fflush(stdin);
				}
				
				printf("Digite a cidade onde foi realizado o jogo: ");
				scanf("%[^\n]s",&cidade);
				fflush(stdin);
				system("pause");
	    	break;
	    	
	    	case 'b':
				
	    		printf("\nPresidente: %s",nome_presidente);
	    		printf("\n\nCidade: %s \t Identificacao do Jogo: %d \t Arrecadacao: R$%.2f \t Quantidade de jogos :%d\n",cidade,id_jogo,arrecadado,qtd_jogos);	
				system("pause");			
			break;
	    		
			case 'c':
				if (arrecadado == 1000000)
				{
					printf("O ultimo jogo obteve renda maxima!\n;)");
					
				}else
				{
					printf("O ultimo jogo NAO obteve renda maxima!\n :(");
					printf("\nUltima renda: %.2f\n",arrecadado);
				}
				system("pause");	
			break;
			
			default:
				printf("\nEscolha invalida!\n");
				
			break;		
		}
	
	}while (escolha != 'd');
	
	if(escolha == 'd')
	{
		printf("Finalizando programa...");
	}

	return 0;
    
}
