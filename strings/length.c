#include <stdio.h>
#include <string.h>

int main()
{
    // Demonstração da função strlen() da biblioteca <string.h>

    const char *linguagem = "Linguagem C";
    char buffer[50] = "Programacao";

    // strlen() conta a quantidade de caracteres visíveis até o terminador '\0' (excluindo o '\0')
    printf("Texto: \"%s\"\n", linguagem);
    printf("Comprimento (strlen): %u caracteres\n", (unsigned int)strlen(linguagem));

    // Diferença crucial:
    // strlen(buffer) retorna a quantidade de caracteres ocupados pelo texto.
    // sizeof(buffer) retorna o total de bytes alocados na memória para o array.
    printf("\nBuffer: \"%s\"\n", buffer);
    printf("Caracteres no texto (strlen): %u\n", (unsigned int)strlen(buffer));
    printf("Bytes totais alocados (sizeof): %u bytes\n", (unsigned int)sizeof(buffer));

    return 0;
}

