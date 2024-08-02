#include <stdio.h>

int main()
{
    char ch;
    printf("Enter Char: \n");
    scanf("%c", &ch);
    printf("This character is %c \n", ch);
    printf("This value of character is %d\n", ch);
    // 97,122
    if (ch >= 97 && ch < 122)
    {
        printf("This character is lowercase");
    }
    else if (ch >= 65 && ch < 90)
    {
        printf("This character is uppercase");
    }
    return 0;
}