#include <stdio.h>

typedef struct empolyee
{
    int salary;
    float score;
} emp;

int main()
{
    emp e1;
    emp *ptr = &e1;

    ptr->salary = 69;
    ptr->score = 96;

    printf("The value of salary %d and value of score is %.2f", ptr->salary, ptr->score);
    return 0;
}