#include <stdio.h>


int main()
{
	float portugues,matematica,ciencias,redacao, redacao1;
	float nota, mensalidade;
	
	printf("Nota de Portugues: ");
	scanf("%f",&portugues);
	
	printf("Nota de Matematica: ");
	scanf("%f",&matematica);
	
	printf("Nota de Ciencias: ");
	scanf("%f",&ciencias);
	
	printf("Nota da Redacao: ");
	scanf("%f",&redacao1);	
	
	//
	
	printf("Valor da Mensalidade: ");
	scanf("%f",&mensalidade);
	
	//
	
	redacao = redacao1 / 100;
	
	printf("\n%.2f redacao simplificada",redacao);
	printf("\n%.2f redacao\n",redacao1);
	nota = (portugues + matematica + ciencias + redacao)/4 ; 
	
	
	printf("\n%.2f\n",nota);
	
	//
	
	if (nota = 10)
	{
		printf("Parabens voce ganhou uma bolsa integral ");
	}else
	{
		if (nota >= 9 )
		{
			printf("Parabens voce ganhou 80%% de disconto nas mensalidades do curso");
			printf("\nValor da mensalidade mais o disconto: R$%.2f",mensalidade-(mensalidade * 0.8));
		}else
		{
			if(nota >= 8)
			{
				printf("Parabens voce ganhou 50%% de disconto nas mensalidades do curso");
				printf("\nValor da mensalidade mais o disconto: R$%.2f",mensalidade-(mensalidade * 0.5));
			}else
			{
				if(nota >= 6.5)
				{
					printf("Parabens voce ganhou 30%% de disconto nas mensalidades do curso");
					printf("\nValor da mensalidade mais o disconto: R$%.2f",mensalidade-(mensalidade * 0.3));
				}
			}
		}
	}
	return 0;
	
		
	
}
