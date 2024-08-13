#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Tej";
    char s1[69] = "Tej";
    char s2[96] = " Sutar";

    // printf("%d", strlen(st));
    // char source[] = "harry";
    // printf("%s %s", st, target);
    char target[30];
    strcpy(target, st);

    strcat(s1, s2);
    // printf("%s", s1);

    int a = strcmp("close","Far");
    printf("%d", a);

    return 0;
}