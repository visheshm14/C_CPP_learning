// sum of elements except diagonal
#include <stdio.h>
void main()
{
    int a[3][3], sum = 0;
    printf("enter values of array");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);
    }

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
            if (i != j)
            {
                sum = sum + a[i][j];
                
            }
    }
    printf(" sum of the elements except diagonal is %d",sum);
}