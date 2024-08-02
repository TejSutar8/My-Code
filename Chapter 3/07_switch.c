#include <stdio.h>

int main()
{
    int a;

    printf("Enter A : ");
    scanf("%d",&a);
    
    switch (a)
    {
    case 1:
        printf("this is 1.");
        break;
    case 2:
        printf("this is 2.");
        break;
    case 3:
        printf("this is 3.");
        break;
    case 4:
        printf("this is 4.");
        break;
    default:
        printf("Nothing match");
        break;
    }
    return 0;
}