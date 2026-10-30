#include <stdio.h>

int main()
{
    // Demonstração do tipo char (caractere) em C

    char letra = 'A';
    char digito = '7';

    // %c imprime o caractere literal
    // %d imprime o valor numérico correspondente na tabela ASCII
    printf("Caractere: %c | Código ASCII: %d\n", letra, letra);
    printf("Caractere: %c | Código ASCII: %d\n", digito, digito);

    // Operações aritméticas com char (avança uma letra no alfabeto)
    char proxima_letra = letra + 1;
    printf("Próxima letra após '%c': %c (ASCII: %d)\n", letra, proxima_letra, proxima_letra);

    return 0;
}

