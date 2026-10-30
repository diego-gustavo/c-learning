#include <stdio.h>

int main()
{
    // Demonstração de iteração em matriz 2D com laços aninhados (nested loops)

    int matriz[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };

    printf("Exibindo todos os elementos da matriz 3x4:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Linha %d: ", i);
        for (int j = 0; j < 4; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

