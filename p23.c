// greatest digit
#include<stdio.h>
void main()
{
    int n ,max=0,temp;

    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        temp=n%10;
        if(max<temp)
        max=temp;
        n=n/10;
    }
    printf("greatest digit is %d",max);
}