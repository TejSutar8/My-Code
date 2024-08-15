#include <stdio.h>
#include <string.h>

struct emp
{
    int code;
    float salary;
    char name[69];
};

void show(struct emp e);

void show(struct emp e)
{
    printf("Code is %d\nSalary is %.2f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct emp e1;
    e1.code = 69;
    strcpy(e1.name, "tej");
    e1.salary = 99.8;
    show(e1);
    return 0;
}