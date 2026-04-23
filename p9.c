// 1 to number
#include <stdio.h>
void main()
{
    int n;
    printf("enter any number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d\n", i);
}