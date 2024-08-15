// #include <stdio.h>

// int main()
// {
//     typedef int tej;
//     tej a = 69;
//     printf("The tej Value of A is %d", a);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef struct emp
{
    int code;
    float salary;
    char name[10];
} emp;

int main()
{
    emp e1;
    e1.code = 69;
    strcpy(e1.name, "TEJ");
    e1.salary = 69.69;
    printf("%d  %f  %s", e1.code, e1.salary, e1.name);

    return 0;
}