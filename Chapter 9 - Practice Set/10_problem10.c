#include <stdio.h>

typedef struct date
{
    int dd;
    int mm;
    int yy;
} dt;

int compare(dt d1, dt d2)
{
    if ((d1.yy == d2.yy) && (d1.dd == d2.dd) && (d1.mm == d2.mm))
    {
        return 0;
    }
    if (d1.yy > d2.yy)
    {
        return 1;
    }
    else if (d1.yy < d2.yy)
    {
        return -1;
    }
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
};

int main()
{
    dt d1 = {01, 01, 2005};
    dt d2 = {05, 01, 2004};
    printf("%d", compare(d1, d2));

    return 0;
}