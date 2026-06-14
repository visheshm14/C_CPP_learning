// 1 to 10 square
#include <stdio.h>
void main()
{
    int i = 1;
A:
    printf("square of %d is %d\n", i, i * i);
    i++;
    if (i <= 10)
        goto A;
}