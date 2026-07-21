// sum of array elements using function
#include <stdio.h>
void sum(int a[]);
int i;
void main()
{

    int a[5], i;
    printf("enter 5 element of array");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }
    sum(a);
}
void sum(int a[])
{
    int s = 0, i;
    for (i = 0; i <= 4; i++)
        s = s + a[i];
    printf("%d", s);
}