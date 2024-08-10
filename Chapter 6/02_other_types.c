#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i;
    printf("The addres of this is %p\n", &i);
    printf("The addres of this is %p\n", j);

    printf("The value at address j is %d\n", *(&i));
    return 0;
}