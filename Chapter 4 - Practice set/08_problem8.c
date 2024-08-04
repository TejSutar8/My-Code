#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("Enter A Number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }
    printf("The Factroal is : %d", product);

    return 0;
}