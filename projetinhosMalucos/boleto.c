/*criar programa que calcula o valor de um boleto
se 15, 20 e 25 dias de atraso aparecer aviso de cobran�a
calcular os juros simples de 10% ao dia 
se pagar adiantado ganha disconto de 5% ao dia*/

#include <stdio.h>
int main()
{
	float valor_boleto,valor_final,discontado,acrescentado;
	int escolha,dias,disconto,juros;
	
	printf("\\\\\\PAGUE AQUI O SEU BOLETO///\n");
	
	printf("Digite o valor do boleto: ");
	scanf("%f",&valor_boleto);

	if(valor_boleto > 0)
	{
	
	
		printf("SEU BOLETO ESTA :\n 1-Adiantado \n 2-Atrasado \n Sua Escolha: ");
		scanf("%d",&escolha);
		
		switch(escolha)
		{
			case 1 :
				printf("Esta quantos dias adiantados ?: ");
				scanf("%d",&dias);
				
				printf("Analisando...\n");
				
				disconto = (dias * 5);
				discontado = (valor_boleto *(0.05 * dias));
				
			
				valor_final = valor_boleto - discontado;
				
				printf("Disconto Concebido de %d%% \n",disconto);
				printf("Equivalente a R$%.2f \n",discontado);
				printf("\nValor Final do boleto com desconto R$ %.2f",valor_final);
			break;
			case 2 :
				printf("Esta quantos dias atrasado ?: ");
				scanf("%d",&dias);
				
				printf("Analisando...\n");
				
				juros = (dias * 10);
				acrescentado = (valor_boleto *(0.10 * dias));	
				valor_final = valor_boleto + acrescentado;
				
				printf("Juros de %d%% \n",juros);
				printf("Equivalente a R$%.2f \n",acrescentado);
				printf("\nValor Final do boleto  R$ %.2f \n",valor_final);
				
				if (dias == 15)
				{
					printf("Alerta");
				}else
				{
					if (dias == 20)
					{
						printf("Em processo de Cancelamento");
					}else
					{
						if(dias == 25)
						{
							printf("Assinatura Cancelada");
						}		
					}
				}
			break;
			default:
				printf("Opcao invalida!");
			break;
		}
	}else
	{
		printf("Valor Invalido!");
		
	}
	return 0;
	
}
