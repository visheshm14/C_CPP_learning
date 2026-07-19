#include <stdio.h>
void fact(int);
void main()
{
    int n;
    printf("enter any no");
    scanf("%d", &n);
    fact(n);
}
void fact(int n)
{
    int i,f=1;
    for ( i = 1; i <= n; i++)
        
    f = f * i;
    printf("factorial of %d is %d", n, f);
}