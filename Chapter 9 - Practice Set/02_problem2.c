#include <stdio.h>
#include <string.h>

typedef struct vector
{
    int i;
    int j;
} v;

v sumvector(struct vector v1, struct vector v2)
{
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

int main()
{
    struct vector v1 = {6, 9};
    struct vector v2 = {9, 6};
    struct vector v3 = sumvector(v1, v2);
    printf("The value of V3.i %d and V3.j %d", v3.i, v3.j);
    return 0;
}