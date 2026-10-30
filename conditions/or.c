#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    // Operador lógico OU (||): é verdadeiro se pelo menos uma das condições for verdadeira
    if (a < b || c > b)
    {
        printf("a é menor que b OU c é maior que b.\n");
    }
    else
    {
        printf("Nenhuma das condições foi atendida.\n");
    }

    return 0;
}
