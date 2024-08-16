#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    /*
    0--> Snake
    1--> Water
    2--> Gun
    */
    printf("Choose 0 for Snake,1 For Water, 2 for Gun\n");
    scanf("%d", &player);
    printf("Computer Chose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("Its A Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("Computer Wins !\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("Computer Wins !\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("Player Wins !\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("Its A Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("Computer Wins !\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Player Wins !\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("Player Wins !\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("Its A Draw!\n");
    }

    return 0;
}