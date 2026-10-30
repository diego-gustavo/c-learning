#include <stdio.h>

int main()
{
    // Demonstração dos tipos inteiros em C

    int idade = 25;                       // Inteiro padrão (%d)
    short int ano_curto = 2026;           // Inteiro curto (%hd)
    long int segundos_no_dia = 86400L;    // Inteiro longo (%ld)
    unsigned int positivo = 500U;         // Inteiro sem sinal - apenas valores >= 0 (%u)

    printf("Idade (int): %d anos\n", idade);
    printf("Ano (short): %hd\n", ano_curto);
    printf("Segundos em um dia (long): %ld segundos\n", segundos_no_dia);
    printf("Valor sem sinal (unsigned): %u\n", positivo);

    return 0;
}
