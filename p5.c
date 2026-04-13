// greatest among 5
#include <stdio.h>
void main()
{
    int a, b, c, d, e;
    printf("enter any five no a,b,c,d and e");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a > b)
        if (a > c)
            if (a > d)
                if (a > e)
                    printf("a is greatest");
                else
                    printf("e is greatest");
            else if (d > e)
                printf("d is greatest");
            else
                printf("e is greatest");
        else if (c > d)
            if (c > e)
                printf("c is greatest");
            else
                printf("e is greatest");
        else if (d > e)
            printf("d is greatest");
        else
            printf("e is greatest");
    else if (b > c)
        if (b > d)
            if (b > e)
                printf("b is greatest");
            else
                printf("e is greatest");
        else if (d > e)
            printf("d is greatest");
        else
            printf("e is greatest");
    else if (c > d)
        if (c > e)
            printf("c is greatest");
        else
            printf("e is greatest");
    else if (d > e)
        printf("d id greatest");
    else
        printf("e is greatest");
}
