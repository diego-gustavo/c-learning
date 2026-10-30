#include <stdio.h>

int main()
{
    // Demonstração de declaração e inicialização de vetores (arrays unidimensionais)

    // 1. Declaração com inicialização completa
    int numeros[4] = {10, 20, 30, 40};

    // 2. Declaração com tamanho inferido pelo compilador
    char vogais[] = {'a', 'e', 'i', 'o', 'u'};

    // 3. Inicialização parcial: os elementos restantes são automaticamente preenchidos com 0
    int pontuacoes[5] = {100, 200};

    printf("Primeiro número: %d\n", numeros[0]);
    printf("Último número: %d\n", numeros[3]);
    printf("Primeira vogal: %c\n", vogais[0]);
    printf("Pontuação 0: %d | Pontuação 1: %d | Pontuação 2 (automático): %d\n",
           pontuacoes[0], pontuacoes[1], pontuacoes[2]);

    return 0;
}

