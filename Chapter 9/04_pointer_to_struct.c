#include <stdio.h>

struct emp
{
    int code;
    float salary;
    char name[69];
};

int main()
{
    struct emp e1;
    e1.code = 69;
    struct emp *ptr;
    ptr = &e1;

    // printf("%d", (*ptr).code);
    printf("%d", ptr->code);

    return 0;
}