#include <stdio.h>

typedef struct bankacc
{
    int accNo;
    char Name[69];
    char isfc[6];
    float Balance;
} bnk;

int main()
{
    bnk bnkarr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Acc:  \n");
        scanf("%d", &bnkarr[i].accNo);
        printf("Enter Name:  \n");
        scanf("%d", &bnkarr[i].Name);
        printf("Enter ISFC:  \n");
        scanf("%d", &bnkarr[i].isfc);
        printf("Enter Balance:  \n");
        scanf("%d", &bnkarr[i].Balance);
        display(bnkarr[i]);
    };

    return 0;
}