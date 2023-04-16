#include <stdio.h>

float inflacionarPreco(float preco);

int main() {
    float preco;
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    
    preco = inflacionarPreco(preco);
    
    printf("Preco inflacionado: %.2f\n", preco);
    
    return 0;
}

float inflacionarPreco(float preco) {
    if (preco < 100) {
        preco *= 1.10; // inflaciona em 10%
    } else {
        preco *= 1.20; // inflaciona em 20%
    }
    return preco;
    
}
