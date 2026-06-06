// smallest digit
#include<stdio.h>
void main()
{
    int n ,min=9,temp;

    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        temp=n%10;
        if(min>temp)
        min=temp;
        n=n/10;
    }
    printf("smallest digit is %d",min);
}