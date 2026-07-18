// return type with argument
#include <stdio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
void main()
{
    int a, b;
    printf("the values a and b  :");
    scanf("%d%d", &a, &b);
    printf("the sum is %d", sum(a, b));
}