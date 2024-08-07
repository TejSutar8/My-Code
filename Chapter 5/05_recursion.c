#include <stdio.h>

int factorial(int);

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }

    return factorial(n - 1) * n;
}

int main()
{
    int a;
    printf("Enter the Number : ");
    scanf("%d", &a);
    printf("The factroial of %d is %d", a, factorial(a));
    return 0;
}