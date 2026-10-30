#include <stdio.h>
#include <string.h>

int main()
{
    // Demonstração da função strncmp() para comparação de strings

    const char *esperado = "admin";
    char entrada_correta[] = "admin";
    char entrada_errada[] = "visitante";

    // ATENÇÃO: Em C, nunca use '==' para comparar o texto de duas strings!
    // O operador '==' compara apenas os endereços de memória dos ponteiros.

    // strncmp(str1, str2, n) compara até 'n' caracteres:
    // Retorna 0 se forem estritamente iguais.
    // Retorna valor diferente de 0 se forem diferentes.

    if (strncmp(entrada_correta, esperado, 5) == 0)
    {
        printf("Acesso liberado: \"%s\" é igual a \"%s\"!\n", entrada_correta, esperado);
    }
    else
    {
        printf("Acesso negado!\n");
    }

    if (strncmp(entrada_errada, esperado, 5) == 0)
    {
        printf("Acesso liberado!\n");
    }
    else
    {
        printf("Acesso negado: \"%s\" é diferente de \"%s\".\n", entrada_errada, esperado);
    }

    return 0;
}

