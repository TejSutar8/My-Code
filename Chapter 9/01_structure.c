#include <stdio.h>
#include <string.h>

struct emp
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct emp e1;
    e1.code = 69;
    strcpy(e1.name, "TEJ");
    e1.salary = 69.69;
    printf("%d  %f  %s", e1.code, e1.salary, e1.name);

    
    return 0;

}