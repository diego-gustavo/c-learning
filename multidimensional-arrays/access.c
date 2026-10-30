#include <stdio.h>

int main()
{
    // Demonstração de acesso e modificação em matrizes multidimensionais

    int tabuleiro[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    // Modificando elementos individuais por coordenada [linha][coluna]
    tabuleiro[0][0] = 1; // Posição superior esquerda
    tabuleiro[1][1] = 2; // Posição central
    tabuleiro[2][2] = 1; // Posição inferior direita

    printf("Posição [0][0]: %d\n", tabuleiro[0][0]);
    printf("Posição [1][1]: %d\n", tabuleiro[1][1]);
    printf("Posição [2][2]: %d\n", tabuleiro[2][2]);
    printf("Posição [0][1] (inalterada): %d\n", tabuleiro[0][1]);

    return 0;
}

