#include <stdio.h>
#include <string.h>

typedef struct complex
{
    int real;
    int imaginary;
} comp;

int main()
{
    comp c = {6, 9};
    printf("The value of Complex Num is %d + %d i", c.real , c.imaginary);
    return 0;
}