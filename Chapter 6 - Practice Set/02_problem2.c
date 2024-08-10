#include <stdio.h>

int returning_5(int *ptr)
{
    printf("The value of ptr is  %d\n", ptr);
    printf("The value of ptr is  %d\n", ptr);
    return 5;
}

int main()
{
    int i = 69;
    int *ptr = &i;
    printf("The value of 69 is %u\n", &i);
    returning_5(ptr);
    return 0;
}