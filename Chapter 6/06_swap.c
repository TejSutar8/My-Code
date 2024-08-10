#include <stdio.h>

void swap(int* a , int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 6, b = 9;
    swap(&a, &b);
    printf("the value of  %d and %d",a,b);
    return 0;
}