#include <stdio.h>

int main() {
    char sexo, olhos, cabelos;
    int idade;
    float salario;
    
    int habitantes = 0;
    int mulheres_castanhas_castanhas = 0;
    
    do {
        printf("Informe o sexo (m ou f): ");
        scanf(" %c", &sexo);
        
        printf("Informe a cor dos olhos (a, v, c ou p): ");
        scanf(" %c", &olhos);
        
        printf("Informe a cor dos cabelos (l, c, p ou r): ");
        scanf(" %c", &cabelos);
        
        printf("Informe a idade em anos: ");
        scanf("%d", &idade);
        
        printf("Informe o salario: ");
        scanf("%f", &salario);
        
        if (sexo == 'f' && idade >= 18 && idade <= 35 && olhos == 'c' && cabelos == 'c') {
            mulheres_castanhas_castanhas++;
        }
        
        habitantes++;
    } while (idade != -1);
    
    float porcentagem = (float)mulheres_castanhas_castanhas / (float)(habitantes - 1) * 100;
    
    printf("A porcentagem de mulheres com olhos e cabelos castanhos e idade entre 18 e 35 anos e: %.2f%%", porcentagem);
    
    return 0;
}