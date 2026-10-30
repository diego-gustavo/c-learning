#include <stdio.h>

int main()
{
    int alvo = 9;

    // Operador de desigualdade / diferente de (!=)
    if (alvo != 10)
    {
        printf("O alvo não é igual a 10.\n");
    }

    // Operador de negação lógica (!)
    // Em C, 0 é considerado falso e qualquer valor diferente de 0 é verdadeiro.
    int esta_chovendo = 0;

    if (!esta_chovendo)
    {
        printf("Não está chovendo! Podemos sair.\n");
    }

    return 0;
}
