#include <stdio.h>

int main(void){

    int escolha;
    float  n1, n2;

    printf("Qual operacao \n(1) + \n(2) - \n(3) * \n(4) / \n");
    scanf("%d",&escolha);

    switch (escolha){
    case 1:
        printf("Digite dois valores: ");
        scanf("%f%f",&n1,&n2);
        printf("%f", n1 + n2);
        break;
    case 2:
        printf("Digite dois valores: ");
        scanf("%f%f",&n1,&n2);
        printf("%f", n1 - n2);
        break;
    case 3:
        printf("Digite dois valores: ");
        scanf("%f%f",&n1,&n2);
        printf("%f", n1 * n2);
        break;
    case 4:
        printf("Digite dois valores: ");
        scanf("%f%f",&n1,&n2);
        printf("%f", n1 / n2);
        break;
    
    default:
        break;
    }

    return 0;
}