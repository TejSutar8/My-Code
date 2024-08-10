#include <stdio.h>

int main()
{
    int i = 69;
    int *j = &i;
    int k = 67;
    printf("The addres of this is %p\n", &i);
    printf("The addres of this is %p\n", j);
    printf("The addres of this is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));
    return 0;
}