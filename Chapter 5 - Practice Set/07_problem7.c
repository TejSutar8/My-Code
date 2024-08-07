#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. for * : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // // this  loop  from 0 to n;
        // if i =0 ---> print 1 star
        // if i =1 ---> print 3 star
        // if i =2 ---> print 5 star
        // no_of_stars (2*i+1)

        // this for loop prints for *
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}