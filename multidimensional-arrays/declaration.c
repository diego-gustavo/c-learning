#include <stdio.h>

int main()
{
    // Demonstração de declaração e inicialização de matrizes bidimensionais (2D)

    // Matriz de inteiros com 2 linhas e 3 colunas (2x3)
    int matriz[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Matriz de caracteres (ex: 2 conjuntos de vogais)
    char vogais[2][5] = {
        {'a', 'e', 'i', 'o', 'u'},
        {'A', 'E', 'I', 'O', 'U'}
    };

    printf("Elemento na linha 0, coluna 0: %d\n", matriz[0][0]);
    printf("Elemento na linha 1, coluna 2: %d\n", matriz[1][2]);
    printf("Vogal minúscula no índice 2: %c\n", vogais[0][2]);
    printf("Vogal maiúscula no índice 2: %c\n", vogais[1][2]);

    return 0;
}

