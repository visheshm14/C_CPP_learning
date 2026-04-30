// 1 to number sum
#include <stdio.h>
void main()
{
    int n, sum = 0;
    printf("enter any no");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum = sum + i;
    printf("%d", sum);
}