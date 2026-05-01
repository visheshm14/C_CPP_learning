// 1 to number multiplication
#include <stdio.h>
void main()
{
    int n, mul = 1;
    printf("enter any no");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        mul = mul * i;
    printf("%d", mul);
}