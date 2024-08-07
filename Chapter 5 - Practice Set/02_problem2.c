#include <stdio.h>

float c2f(float);

float c2f(float c)
{
    return ((9 * c) / 5) + 32.0;
}

int main()
{
    float c = 45;
    printf("%.2f celsius is converted to %.2f fahrenhit", c, c2f(c));
    return 0;
}