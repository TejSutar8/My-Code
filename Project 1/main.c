#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator

    int randomnumber = (rand() % 100) + 1; // Generate a random number between 1 and 100
    int no_of_guesses = 0;
    int guessed;

    // printf("Random Number : %d\n", randomnumber); // Print the random number

    do
    {
        printf("Guess the Number : ");
        scanf("%d", &guessed);
        if (guessed > randomnumber)
        {
            printf("Lower Number Please\n");
        }
        else if (guessed < randomnumber)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("Congrates!!\n");
        }

        no_of_guesses++;

    } while (guessed != randomnumber);

    printf("You Guessed the Number in %d gussed", no_of_guesses);

    return 0; // End the program
}
