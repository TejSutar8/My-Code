#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("tej.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("The Value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The Value of num is %d \n", num);
    fclose(ptr);

    return 0;
}