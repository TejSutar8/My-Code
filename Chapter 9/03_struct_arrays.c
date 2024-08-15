#include <stdio.h>

struct emp
{
    int code;
    float salary;
    char name[69];
};

int main()
{

    struct emp empfacebook[69];

    empfacebook[0].code = 6;
    empfacebook[1].code = 9;
    struct emp tej = {100, 69.00, "tej"};
    printf("%d %.2f %s", tej.code, tej.salary, tej.name);

    return 0;
}