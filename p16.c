// leap year
#include <stdio.h>
void main()
{
    int y;
    printf("enter your year");
    scanf("%d", &y);

    if (y % 4 == 0 || y % 100 == 0 || y % 400 == 0)
        printf("leap year");
    else
        printf("not a leap year");
}