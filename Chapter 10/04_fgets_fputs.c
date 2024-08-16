#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tej.txt", "w");
    // char c = fgets(ptr);
    // printf("%c", c);
    fputc('u', ptr);

    return 0;
}