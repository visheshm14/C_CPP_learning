// reverse of elements
#include <stdio.h>
void main()
{
    int a[5], i, rev, temp;

    printf("enter values of array");
    for (i = 0; i <= 4; i++)
        scanf("%d", &a[i]);

    for (i = 0; i <= 4; i++)
    {
        rev = 0;
        while (a[i] != 0)
        {
            temp = a[i] % 10;
            rev = (rev * 10) + temp;
            a[i] = a[i] / 10;
        }
        printf("reverse of %d index is %d\n",i,rev);
    }
}