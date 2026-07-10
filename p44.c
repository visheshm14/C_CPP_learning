// sum of the coloumn
#include <stdio.h>
void main()
{
    int a[3][3], b[3] = {0}, i, j;
    printf("enter the values of array\n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
            scanf("%d", &a[i][j]);   
    }

    printf("your aray is given below\n");
    
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        printf("%d  ", a[i][j]);
        printf("\n\n");
        
    }

    printf("sum of column of the array is \n");
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
            b[i] = b[i] + a[j][i];
        printf("%d\n", b[i]);
        
    }
}