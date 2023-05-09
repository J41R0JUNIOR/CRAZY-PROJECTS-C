#include <stdio.h>

void imprimirTabelaDecimal();
void imprimirTabelaHexadecimal();

int main() {
    printf("Tabela ASCII - Decimal\n");
    imprimirTabelaDecimal();
    
    printf("\nTabela ASCII - Hexadecimal\n");
    imprimirTabelaHexadecimal();
    
    return 0;
}

void imprimirTabelaDecimal() {
    int i;
    printf("+-------+---------+\n");
    printf("| Decimal | Caracter |\n");
    printf("+-------+---------+\n");
    for (i = 0; i <= 127; i++) {
        printf("| %d      | %c       |\n", i, i);
    }
    printf("+-------+---------+\n");
}

void imprimirTabelaHexadecimal() {
    int i;
    printf("+----------+---------+\n");
    printf("| Hexadecimal | Caracter |\n");
    printf("+----------+---------+\n");
    for (i = 0; i <= 127; i++) {
        printf("| 0x%02x       | %c       |\n", i, i);
    }
    printf("+----------+---------+\n");
}
