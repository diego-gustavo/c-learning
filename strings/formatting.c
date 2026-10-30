#include <stdio.h>

int main()
{
    // Demonstração de formatação de strings com printf e sprintf

    const char *nome = "Ana";
    int idade = 22;
    float altura = 1.68f;

    // 1. Impressão formatada no terminal com printf e o especificador %s
    printf("%s tem %d anos e mede %.2f metros de altura.\n", nome, idade, altura);

    // 2. Composição de strings na memória com sprintf
    // Ao invés de imprimir no terminal, sprintf escreve o resultado dentro de um buffer de caracteres.
    char mensagem_completa[100];
    sprintf(mensagem_completa, "Registro: [Nome: %s | Idade: %d | Altura: %.2fm]", nome, idade, altura);

    printf("String resultante do sprintf: %s\n", mensagem_completa);

    return 0;
}

