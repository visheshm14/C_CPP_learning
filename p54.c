// sort array even and odd
#include <stdio.h>
void main()
{
    int a[10], e[5], o[5],even=1,odd=1;
    printf("enter the values of array\n");
    for (int i = 1; i <= 10; i++)
        scanf("%d", &a[i]);

    for (int i = 1; i <= 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            e[even++] = a[i];
        }
        else
        {
            o[odd++] = a[i];
        }
    }

    printf("even array \n");
    for(int i=1;i<even;i++)
    printf("%d\n",e[i]);

    printf("odd array \n");
    for(int i=1;i<odd;i++)
    printf("%d\n",o[i]);

}