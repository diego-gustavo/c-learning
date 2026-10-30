#include <stdio.h>

void guessNumber(int guess)
{
    if (guess == 555)
    {
        printf("Correto. Você acertou!\n");
    }
    else if (guess < 555)
    {
        printf("Seu palpite é muito baixo.\n");
    }
    else
    {
        printf("Seu palpite é muito alto.\n");
    }
}

int main()
{
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}
