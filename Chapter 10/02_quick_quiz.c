#include <stdio.h>

int main()
{
    FILE *ptr1, *ptr2;
    printf("File No: 1 \n");
    ptr1 = fopen("tej.txt", "r");

    if (ptr1 == NULL)
    {
        printf("The File is not Exist Sorry! \n");
    }
    else
    {

        int num;
        fscanf(ptr1, "%d", &num);
        printf("The Value of num is %d \n", num);

        fscanf(ptr1, "%d", &num);
        printf("The Value of num is %d \n", num);
    }
    printf("\nFile No: 2 \n");
    ptr2 = fopen("teju.txt", "r");
    if (ptr2 == NULL)
    {
        printf("The File is not Exist Sorry! \n");
    }
    else
    {

        int num;
        fscanf(ptr2, "%d", &num);
        printf("The Value of num is %d \n", num);

        fscanf(ptr2, "%d", &num);
        printf("The Value of num is %d \n", num);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}