#include <stdio.h>

int main()
{
    int amendoins_comidos = 22;
    int amendoins_no_pote = 100;
    int limite_maximo_amendoins = 50;

    // Demonstração de if aninhado (um if dentro de outro)
    if (amendoins_no_pote > 80)
    {
        if (amendoins_comidos < limite_maximo_amendoins)
        {
            printf("Pode começar a comer os amendoins!\n");
        }
    }

    return 0;
}
