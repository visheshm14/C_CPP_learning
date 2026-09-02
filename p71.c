// transpose of array
#include<stdio.h>
void main()
{
    int a[3][3];
    printf("enter the values of 2d array");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        scanf("%d",&a[i][j]);
    }

    printf(" array is ");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        printf("%d",a[i][j]);

        printf("\n");
    }

    printf("transpose of array is ");
    for(int i=0;i<=2;i++)
    {
        for(int j =0;j<=2;j++)
        printf("%d",a[j][i]);

        printf("\n");
    }
}