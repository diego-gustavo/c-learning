#include <stdio.h>

/*
 * Exercício do módulo "Multidimensional Arrays" (learn-c.org):
 *
 * O objetivo é calcular a média das notas para cada uma das duas disciplinas (linhas),
 * onde cada disciplina possui notas de 5 alunos (colunas).
 */

int main()
{
    float average;
    int i;
    int j;

    int grades[2][5] = {
        {80, 70, 65, 89, 90},
        {85, 80, 80, 82, 87}
    };

    for (i = 0; i < 2; i++)
    {
        average = 0;

        for (j = 0; j < 5; j++)
        {
            average += grades[i][j];
        }

        average /= 5.0f;
        printf("A média das notas da linha %d é %.1f\n", i, average);
    }

    return 0;
}

