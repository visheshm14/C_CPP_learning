// input and output in array
#include<stdio.h>
void main()
{
    int a[5];
    int i;
    printf("enter array elements");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    printf("your array is ");
    for(i=0;i<=4;i++)
    printf("%d",a[i]);
}