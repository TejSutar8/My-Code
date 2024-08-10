#include <stdio.h>

int main()
{
    int i = 69;
    int *ptr = &i;
    printf("The value of 69 is %u\n", &i);
    printf("The value of 69 is %d\n", *ptr);
    return 0;
}