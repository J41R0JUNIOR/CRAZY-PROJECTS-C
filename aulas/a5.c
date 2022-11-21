#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    

    
    float notasAlunos [4][4] = {0};
    float mediasAlunos [4] = {0}; 

    float media = 0;
    int aluno = 0;
    int notas = 0;
 

	
    for(aluno; aluno < 4; ++aluno)
	{
        printf("Insira as notas do aluno %i:\n",aluno + 1);
        for(notas; notas < 4; ++notas)
		{
            scanf("%f", &notasAlunos[aluno][notas]);

            media += notasAlunos[aluno][notas];
        }

        mediasAlunos[aluno] = media / 4;
        media = 0;
    }
    for(aluno; aluno < 4; ++aluno)
	{
        printf("A media do aluno %i e %.2f\n",aluno + 1, mediasAlunos[aluno]);
    }
    

    return 0;

}
            
