#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter Array Size : \n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    ptr[0] = 6;

    printf("%d", ptr[0]);

    return 0;
}