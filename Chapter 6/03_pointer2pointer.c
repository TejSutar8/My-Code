#include <stdio.h>

int main()
{
    int i = 69;
    int *j = &i;
    int **k = &j;
    printf("The value is %d\n", i);
    printf("The value is %d\n", &j);
    printf("The value is %d\n", *(&i));
    printf("The value is %d\n", **(&j));
    return 0;
}