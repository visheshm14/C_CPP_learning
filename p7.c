// table
#include <stdio.h>
int main()
{
    int x, t;
    printf("enter any no ");
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++)
    {
        t = i * x;
        printf(" %d X %d = %d\n", x, i, t);
    }
}
