#include <stdio.h>

/*
 * Exercício do módulo "Arrays" (learn-c.org):
 *
 * O objetivo é criar um array de notas (grades) com 3 valores float,
 * calcular a média aritmética dessas notas e exibir o resultado formatado.
 */

int main()
{
    float grades[3];
    float average;

    // Em C, números decimais usam ponto '.' (ex: 6.8f), não vírgula ','
    grades[0] = 6.8f;
    grades[1] = 8.5f;
    grades[2] = 9.2f;

    average = (grades[0] + grades[1] + grades[2]) / 3.0f;
    printf("A média de todas as notas é: %.1f\n", average);

    return 0;
}

