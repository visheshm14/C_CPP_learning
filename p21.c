// sum of digit 
#include<stdio.h>
void main()
{
    int n ,sum=0,temp;

    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    printf("sum of the digit is %d",sum);
}