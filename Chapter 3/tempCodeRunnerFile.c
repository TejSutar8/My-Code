/*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
    90 – 100 => A
    80 – 90 => B
    70 – 80 => C
    60 – 70 => D
    50 – 60 => E
    <50 => F
*/
#include <stdio.h>

int main()
{
    char grade;
    int marks;
    printf("Tell Your marks :");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90)
    {
        grade = "A";
    }
    else if (marks<=89 && marks>=80)
    {
        grade = "B";
    }
    else if (marks>=79 && marks>=70)
    {
        grade = "c";
    }

    return 0;   
}