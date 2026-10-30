#include <stdio.h>

int main()
{
    // Demonstração dos tipos de ponto flutuante (números decimais) em C

    float preco = 19.99f;          // Precisão simples (usa o sufixo 'f')
    double pi = 3.141592653589793; // Precisão dupla (maior quantidade de casas decimais)

    // %f imprime o float completo; %.2f formata para apenas 2 casas decimais
    printf("Preço original: %f\n", preco);
    printf("Preço formatado: R$ %.2f\n", preco);

    // %lf ou %f para double
    printf("Valor aproximado de PI (4 casas): %.4f\n", pi);
    printf("Valor aproximado de PI (completo): %.15lf\n", pi);

    return 0;
}

