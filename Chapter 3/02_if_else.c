#include <stdio.h>

int main()
{
    int age;

    printf("Enter the age = ");
    scanf("%d", &age);

    if (age > 11)
    {
        printf("the age is greater than 10 is %d", age);
    }
    else
    {
        printf("teh age is less than 10 is %d", age);
    }

    return 0;
}