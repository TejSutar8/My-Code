#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'u';
    int contains = 0;
    char str[] = "Ufk`Tvubs";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("Yes it contains \n");
    }
    else
    {
        printf("Dose not contains \n");
    }

    printf("%d", contains);
    return 0;
}