// compare to array
#include<stdio.h>
void main()
{
    int a[5];
    int b[5];
    int flag=0;
    printf("entet the values of first array\n");
    for(int i =0;i<=4;i++)
    scanf("%d",&a[i]);
     printf("entet the values of second array\n");
    for(int i =0;i<=4;i++)
    scanf("%d",&b[i]);

    for (int i=0;i<=4;i++)
    {
        if(a[i]!=b[i])
        {flag=1;
        break;
        }

    }
    if(flag ==0)
    printf("same array");
    else
    printf("different array");


}