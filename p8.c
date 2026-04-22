// first to last
#include <stdio.h>
void main()
{
    int n, m;
    printf("enter the value of first and last number");
    scanf("%d%d", &n, &m);
    for (int i = n; i <= m; i++)
        printf("\n%d", i);
}