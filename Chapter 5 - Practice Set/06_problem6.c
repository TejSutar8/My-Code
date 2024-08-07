#include <stdio.h>

int sum_natrual(int);

int sum_natrual(int n)
{
    if (n == 1)
    {
        return 1;
    }
    // sum(n) = 1 + 2 + 3 + 4 + 5 + ....n - 1 + n;
    // sum(n) = sum(n-1) + n;
    return sum_natrual(n - 1) + n;
}

int main()
{
    printf("The sum of 5 natrual number are :%d", sum_natrual(5));

    return 0;
}