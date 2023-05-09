#include <stdio.h>

int main() {
    int numeroAluno, numAlunoMaisAlto, numAlunoMaisBaixo;
    float alturaAluno, alturaMaisAlto = 0, alturaMaisBaixo = 3; 
    int i;

    for (i = 0; i < 10; i++) {
        
        printf("Digite o numero e a altura do aluno %d: ", i+1);
        scanf("%d %f", &numeroAluno, &alturaAluno);

        
        if (alturaAluno > alturaMaisAlto) {
            alturaMaisAlto = alturaAluno;
            numAlunoMaisAlto = numeroAluno;
        }
        if (alturaAluno < alturaMaisBaixo) {
            alturaMaisBaixo = alturaAluno;
            numAlunoMaisBaixo = numeroAluno;
        }
    }

    
    printf("O aluno mais alto eh o numero %d, com altura %.2f metros.\n", numAlunoMaisAlto, alturaMaisAlto);
    printf("O aluno mais baixo eh o numero %d, com altura %.2f metros.\n", numAlunoMaisBaixo, alturaMaisBaixo);

    return 0;
}
