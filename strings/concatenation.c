#include <stdio.h>
#include <string.h>

int main()
{
    // Demonstração da função strncat() para concatenação segura de strings

    char destino[50] = "Olá";
    const char *origem = ", mundo do C!";

    printf("String de destino inicial: \"%s\"\n", destino);

    // strncat(dest, src, n) adiciona até 'n' caracteres de src ao final de dest
    // e garante a inserção automática do caractere nulo '\0' no final.
    strncat(destino, origem, 15);

    printf("String após concatenação: \"%s\"\n", destino);

    return 0;
}

