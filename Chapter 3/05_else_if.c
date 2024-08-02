#include <stdio.h>

int main()
{
    int age = 80;

    if (age > 60)
    {
        printf("you ca drive but you are senior citizen");
    }
    else if (age > 19)
    {
        printf("You can Drive\n");
    }
    else
    {
        printf("You cannot Drive\n");
    }

    return 0;
}