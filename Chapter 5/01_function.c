#include <stdio.h>

// Funtion Prototype
int sum(int, int);

// Function Defination
int sum(int x, int y)
{
    printf("The Sum is :%d\n", x + y);
    return x + y;
}

int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("1)Total of A + B : %d \n", c);
    int c = sum(a, b);
    printf("%d\n",c);

    int a1 = 11;
    int b1 = 21;

    // int c1 = a1 + b1;
    // printf("2)Total of A + B : %d \n", c1);

    sum(a1, b1);

    return 0;
}