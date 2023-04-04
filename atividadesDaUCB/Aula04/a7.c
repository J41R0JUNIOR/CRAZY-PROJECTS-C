#include <stdio.h>

int main() {
    int n, termo_atual = 0, termo_anterior1 = 1, termo_anterior2 = 0;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O termo de ordem 0 na sequência de Fibonacci é: 0\n");
    } else if (n == 1) {
        printf("O termo de ordem 1 na sequência de Fibonacci é: 1\n");
    } else {
        for (int i = 2; i <= n; i++) {
            termo_atual = termo_anterior1 + termo_anterior2;
            termo_anterior2 = termo_anterior1;
            termo_anterior1 = termo_atual;
        }

        printf("O termo de ordem %d na sequência de Fibonacci é: %d\n", n, termo_atual);
    }

    return 0;
}