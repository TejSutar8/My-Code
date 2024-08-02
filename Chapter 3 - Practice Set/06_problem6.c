#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value of A \n");
    scanf("%d", &a);
    printf("Enter the value of B \n");
    scanf("%d", &b);
    printf("Enter the value of C \n");
    scanf("%d", &c);
    printf("Enter the value of D \n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greater than other value ", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d is greater than other value", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is greater than other value", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is greater than other value", d);
    }
    return 0;
}