// table
#include <stdio.h>
void main()
{
    int i = 1, n;
    printf("enter any no");
    scanf("%d", &n);
A:
    printf("%d X %d = %d\n", n, i, n * i);
    i++;
    if (i <= 10)
        goto A;
}