#include <stdio.h>

int main()
{
    int age = 12;

    if (age > 10)
    {
        printf("we are inside the if\n");
        printf("The age is greater than 10\n");
    }
    if (age % 3 == 0)
    {
        printf("we are inside the another if\n");
        printf("The age is greater than 30\n");
    }

    return 0;
}