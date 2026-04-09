// discount
#include <stdio.h>
void main()
{
    int p, d, dp;
    printf("enter the price of book ");
    scanf("%d", &p);

    if (p >= 500)
    {
        d = (p * 40) / 100;
    }
    else
    {
        d = (p * 10) / 100;
    }
    dp = p - d;
    printf("price of the book is %d and the discounted price %d", p, dp);
}