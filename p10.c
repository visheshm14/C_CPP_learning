// m to n in both condition
#include <stdio.h>
void main()
{
    int m, n;
    printf("enter your first no and last no");
    scanf("%d%d", &n, &m);

    if (n < m)
    {
        for (int i = n; i <= m; i++)
            printf("%d\n", i);
    }
    else
    {
        for (int i = n; i >=m ; i--)
            printf("%d\n", i);
    }
}