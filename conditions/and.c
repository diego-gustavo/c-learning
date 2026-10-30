#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    // Operador lógico E (&&): só é verdadeiro se ambas as condições forem verdadeiras
    if (a < b && c > b)
    {
        printf("a é menor que b E c é maior que b.\n");
    }
    else
    {
        printf("Pelo menos uma das condições não foi atendida.\n");
    }

    return 0;
}
