#include <stdio.h>

int main()
{
    // Em C não existe um tipo de dado primitivo 'string'.
    // Uma string em C é um vetor de caracteres terminado pelo caractere nulo '\0'.

    // 1. String como ponteiro para literal de string (somente-leitura)
    // O compilador aloca essa string em uma área de memória protegida contra escrita.
    const char *nome = "Carlos";

    // 2. String como array de caracteres local (mutável)
    // Os caracteres são copiados para a pilha (stack) e podem ser modificados.
    char sobrenome[] = "Silva";

    printf("Nome (ponteiro): %s\n", nome);
    printf("Sobrenome original (array): %s\n", sobrenome);

    // Modificando um caractere do array local
    sobrenome[0] = 'S'; // Altera 'S' para 'S' ou outro caractere
    sobrenome[4] = 'o'; // 'Silva' vira 'Silvo'
    printf("Sobrenome modificado: %s\n", sobrenome);

    // 3. Demonstração explícita do caractere terminador nulo '\0'
    char palavra[] = {'O', 'l', 'a', '\0'};
    printf("Palavra com terminador nulo: %s\n", palavra);

    return 0;
}

