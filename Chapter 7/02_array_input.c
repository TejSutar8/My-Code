#include <stdio.h>

int main()
{
    int marks[5];

    // printf("Student 1 : \n");
    // scanf("%d", &marks[0]);
    // printf("Student 2 : \n");
    // scanf("%d", &marks[1]);
    // printf("Student 3 : \n");
    // scanf("%d", &marks[2]);
    // printf("Student 4 : \n");
    // scanf("%d", &marks[3]);
    // printf("Student 5 : \n");
    // scanf("%d", &marks[4]);
    printf("Enter 5 Students marks\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]); 
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks  at index  %d is  %d \n", i, marks[i]);
    }

    return 0;
}