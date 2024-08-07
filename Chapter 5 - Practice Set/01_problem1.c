#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int a = 3, b = 63, c = 9;

    printf("The averge of a+b+c = %f", average(a, b, c));

    return 0;
}