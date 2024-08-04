#include <stdio.h>

int main()
{
    for (int i = 0; i < 69; i++)
    {
        if (i == 16)
        {
            continue;
        }
        printf("1 * %d\n", i);
    }
    printf("For loop is Over");

    return 0;
}