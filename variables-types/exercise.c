#include <stdio.h>

/*
 * Exercício do módulo "Variables and Types" (learn-c.org):
 *
 * O objetivo é definir as variáveis:
 * - a = 3 (int)
 * - b = 4.5 (float)
 * - c = 5.25 (double)
 * E calcular a soma delas em uma variável do tipo float chamada 'sum',
 * imprimindo o resultado final na tela.
 */

int main()
{
    int a = 3;
    float b = 4.5f;
    double c = 5.25;
    float sum;

    sum = a + b + c;

    printf("A soma de a, b e c é %f.\n", sum);

    return 0;
}

