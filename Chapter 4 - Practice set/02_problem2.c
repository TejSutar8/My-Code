#include <stdio.h>

int main()
{
    int n;
    printf("Enter Table No : ");
    scanf("%d", &n);

    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

    return 0;
}