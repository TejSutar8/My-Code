#include <stdio.h>

int main()
{
    int marks1,marks2,marks3;
    printf("Enter Marks1: \n");
    scanf("%d",&marks1);
    printf("Enter Marks2: \n");
    scanf("%d",&marks2);
    printf("Enter Marks3: \n");
    scanf("%d",&marks3);
    printf("This 3 marks : 1st: %d,2nd: %d,3rd: %d\n",marks1,marks2,marks3);

    if (marks1<33 || marks2<33 || marks3<33)
    {
        printf("You are failed in this exam");
    }
    else if ((marks1 +marks2 + marks3)/3 <40)
    {
        printf("you are failed in this exam for less percentage");
    }
    else
    {
        printf("you are pass!");
    }
    
    
    return 0;
}