// switch
#include <stdio.h>
void main()
{
    int a, b, c, ch;
    printf("enter the value of a b c");
    scanf("%d%d%d", &a, &b, &c);

    switch (a > b)
    {
    case 1:
        switch (a > c)
        {
        case 1:
            printf("a is greatest");
            break;

        case 0:
            printf("c is greatest");
            break;
        }break;
    case 0:
        switch (b > c)
        {
        case 1:
            printf("b is greatest");
            break;
        case 0:
            printf("c is greatest");
            break;
        }break;
    }
}