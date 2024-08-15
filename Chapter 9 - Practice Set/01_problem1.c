#include <stdio.h>
#include <string.h>

struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v = {6, 9};
    printf("The value of Six digit %d and Nine digit %d", v.i, v.j);
    return 0;
}