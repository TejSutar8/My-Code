#include <stdio.h>
#include <string.h>

typedef struct complex
{
    int real;
    int imaginary;
} comp;

void dispaly(comp c)
{
    printf("The value of Complex Num is %d + %d i\n", c.real, c.imaginary);
}

int main()
{
    comp carr[5];
    for (int i = 0; i < 5; i++)
    {

        printf("Enter Real Part : \n");
        scanf("%d", &carr[i].real);
        printf("Enter Imaginary Part : \n");
        scanf("%d", &carr[i].imaginary);
        dispaly(carr[i]);
    };

    return 0;
}