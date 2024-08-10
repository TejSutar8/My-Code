#include <stdio.h>

void chang_to_thirty_times(int *a)
{
    *a = *a * 10;
}

int main()
{
    int a = 69;
    printf("the value of X is %d\n", a);
    chang_to_thirty_times(&a);
    printf("the value of X is %d\n", a);
    return 0;
}