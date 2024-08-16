#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int* ptr;
    printf("Enter Array Size : \n");
    scanf("%d", &n);

    ptr = (int*)malloc(n * sizeof(int));

    ptr[0] = 6;
    ptr[1] = 9;
    ptr[2] = 69;

    printf("%d", ptr[2]);

    return 0;
}