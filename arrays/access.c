#include <stdio.h>

int main()
{
    // Demonstração de acesso e modificação de elementos em um vetor

    int idades[3];

    // Atribuição de valores utilizando o índice (de 0 até tamanho - 1)
    idades[0] = 18;
    idades[1] = 25;
    idades[2] = 30;

    printf("Idades originais:\n");
    printf("Índice 0: %d anos\n", idades[0]);
    printf("Índice 1: %d anos\n", idades[1]);
    printf("Índice 2: %d anos\n", idades[2]);

    // Modificando um valor existente
    idades[1] = 26;
    printf("\nIdade no índice 1 atualizada: %d anos\n", idades[1]);

    return 0;
}

