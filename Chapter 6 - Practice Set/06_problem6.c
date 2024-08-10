#include <stdio.h>

int main()
{
    int i = 69;
    int *ptr1 = &i;
    int **ptr2 = &ptr1;
    printf("The value of 69 is %u\n", &i);
    printf("The value of 69 is %d\n", *ptr1);
    printf("The value of 69 is %d\n", **ptr2);
    return 0;
}