#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter Table Number:");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    or (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }
    printf("The Sum OF table: %d", sum);
f
    return 0;
}