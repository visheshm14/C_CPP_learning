// greatest among three
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter any three no");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is the greatest");
        }
        else
        {
            printf("c is the greatest no");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is the greatest");
        }
        else
        {
            printf("c is the greatest");
        }
    }
}