#include <stdio.h>
int sum();
void main()
{
    int d;
    d = sum();
    printf("the sum is %d", d);
}

int sum()
{
    int a, b, c;
    printf("enter values of a amd b  :");
    scanf("%d%d", &a, &b);
    c = a + b;
    return c;
}