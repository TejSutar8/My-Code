#include <stdio.h>

int main()
{
    int i = 1, sum = 0;
    // Using Do While Method:
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 10);

    // Using For Loop:
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }

    printf("The Sum of 10 natural Number : %d", sum);

    return 0;
}