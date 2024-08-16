#include <stdio.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 69;
    printf("%d", ptr[0]);
    return 0;
}