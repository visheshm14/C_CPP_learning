// odd number
#include <stdio.h>
void main()
{
    int n;
    printf("enter any number");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            printf("\n %d", i);
    }
}
