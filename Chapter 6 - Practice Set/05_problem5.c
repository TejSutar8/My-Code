#include <stdio.h>

int *sum(int a, int b)
{
    int sum = a + b;
    int *ptr = &sum;
    printf("The sum of %d\n", sum);
    return ptr;
}

float *avg(int a, int b)
{
    float avg = (a + b) / 2.0;
    float *ptr = &avg;
    printf("The avg of %f\n", avg);
    return ptr;
}

int main()
{
    int x = 6;
    int y = 45;

    int *ptr1;
    float *ptr2;

    ptr1 = (x, y);
    ptr2 = (x, y);

    printf("The address of sum is %u and of avg is %u", ptr1, ptr2);

    return 0;
}