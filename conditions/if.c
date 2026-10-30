#include <stdio.h>

int main()
{
    int foo = 1;
    int bar = 2;

    if (foo < bar)
    {
        printf("foo is smaller than bar.");
    }
    else if (foo == bar)
    {
        printf("foo is equal to bar.");
    }
    else
    {
        printf("foo is greater than bar.");
    }
    return 0;
}