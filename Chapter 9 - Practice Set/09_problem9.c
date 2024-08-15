#include <stdio.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

int compare(struct date d1, struct date d2)
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
    struct date d1 = {01, 01, 2005};
    struct date d2 = {05, 01, 2004};
    printf("%d", compare(d1, d2));

    return 0;
}