#include <stdio.h>

int main()
{
    float grades[3];
    float average;

    grades[0] = 6,8;
    grades[1] = 8,5;
    grades[2] = 9,2;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("A média de todas as notas é: %.1f", average);

    return 0;
}