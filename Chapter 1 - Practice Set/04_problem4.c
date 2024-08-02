// Simple Interest (SI)= P×R×T/100

// P is the principal amount (the initial amount of money)
// 𝑅
// R is the annual interest rate (in percentage)
// 𝑇
// T is the time the money is invested or borrowed for, in years

#include <stdio.h>

int main()
{
    float p, r, t;

    

    printf("enter Principal amount = ");
    scanf("%f",&p);
    printf("enter Anuual amount = ");
    scanf("%f",&r);
    printf("enter time/years = ");
    scanf("%f",&t);

    printf("Simple Interest = %f",(p * r * t) / 100);

    return 0;
}