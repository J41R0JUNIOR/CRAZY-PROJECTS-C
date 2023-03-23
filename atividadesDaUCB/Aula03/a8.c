#include <stdio.h>

int main (void){

    int n, cal;

    printf("Escolha o Prato:\n 1- Vegetariano\n2- Peixe\n3- Frango\n4- Carne\nEscolha: ");
    scanf("%d", &n);
    switch (n){
    case 1:
        cal = 180; 
        break;
    case 2:
        cal = 230; 
        break;
    case 3:
        cal = 250; 
        break;
    case 4:
        cal = 350; 
        break;
    
    default:
        break;
    }
    printf("Escolha a Sobremesa:\n 1- Abacaxi\n2- Sorvete Diet\n3- Mousse Diet\n4- Mousse Chocolate\nEscolha: ");
    scanf("%d", &n);
    switch (n){
    case 1:
        cal += 75; 
        break;
    case 2:
        cal += 110; 
        break;
    case 3:
        cal += 170; 
        break;
    case 4:
        cal += 200; 
        break;
    
    default:
        break;
    }
    printf("Escolha a Bebida:\n 1- Cha\n2- Suco Larnja\n3- Suco Melao\n4- Refrigerante Diet\nEscolha: ");
    scanf("%d", &n);
    switch (n){
    case 1:
        cal += 20; 
        break;
    case 2:
        cal += 70; 
        break;
    case 3:
        cal += 100; 
        break;
    case 4:
        cal += 65; 
        break;
    
    default:
        break;
    }

    printf("Cal = %d", cal);



    return 0;
}