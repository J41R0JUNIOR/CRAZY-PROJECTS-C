#include <stdio.h>

int main(void) {
    float matematica, fisica, quimica, media;
    FILE *arquivo;

    printf("Digite a nota de Matematica: ");
    scanf("%f", &matematica);

    printf("Digite a nota de Fisica: ");
    scanf("%f", &fisica);

    printf("Digite a nota de Quimica: ");
    scanf("%f", &quimica);

    media = (matematica + fisica + quimica) / 3.0;

    arquivo = fopen("notas.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(arquivo, "Matematica: %.2f\n", matematica);
    fprintf(arquivo, "Fisica: %.2f\n", fisica);
    fprintf(arquivo, "Quimica: %.2f\n", quimica);
    fprintf(arquivo, "Media: %.2f\n", media);

  
    fclose(arquivo);

    printf("As notas foram salvas no arquivo notas.txt.\n");

    return 0;
}
