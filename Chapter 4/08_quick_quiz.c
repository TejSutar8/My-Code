#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter The Value :");
    scanf("%d", &n);

    do
    {
        printf("This is value =%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}