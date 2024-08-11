#include <stdio.h>

int main()
{
    int marks[] = {6, 69, 96, 9};

    int *ptr = &marks[0];
    // int *ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        // printf("the marks at index %d is %d\n",i, marks[i]);
        printf("the marks at index %d is %d\n",i, *ptr);
        ptr++;
    }

    return 0;
}