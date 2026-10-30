#include <stdio.h>
#include <string.h>

/*
 * Exercício do módulo "Strings" (learn-c.org):
 *
 * 1. Definir a string 'first_name' com o valor "John" utilizando notação de ponteiro.
 * 2. Definir a string 'last_name' com o valor "Doe" utilizando a notação de array local.
 * 3. O código altera a primeira letra de 'last_name' para 'B' (transformando em "Boe").
 * 4. Utiliza sprintf para juntar os nomes em 'name' ("John Boe") e valida com strncmp.
 * 5. Limpa a string 'name' e concatena 'first_name' e 'last_name' utilizando strncat.
 */

int main()
{
    // Definição de first_name com notação de ponteiro
    const char *first_name = "John";

    // Definição de last_name com notação de array local
    char last_name[] = "Doe";

    char name[100];

    // Modificando a primeira letra do array local
    last_name[0] = 'B';

    // Compondo a string formatada "John Boe" dentro de name
    sprintf(name, "%s %s", first_name, last_name);

    // Verificando se a string formatada é igual a "John Boe"
    if (strncmp(name, "John Boe", 100) == 0)
    {
        printf("Exercício concluído com sucesso! Nome: %s\n", name);
    }

    // Resetando a string (colocando o terminador nulo no início)
    name[0] = '\0';

    // Concatenando first_name e last_name usando strncat
    strncat(name, first_name, 4);
    strncat(name, last_name, 20);
    printf("Resultado após strncat: %s\n", name);

    return 0;
}

