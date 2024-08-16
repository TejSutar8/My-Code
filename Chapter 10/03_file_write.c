#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("tej.txt", "w");
    int num = 6969;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}