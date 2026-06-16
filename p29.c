// factorial
#include<stdio.h>
void main()
{
    int n,i=1,fact=1;
    printf("enter any no");
    scanf("%d",&n);
    A:
    fact=fact*i;
    i++;
    if(i<=n)
       goto A;
    printf("factorial of %d is %d",n,fact);   
}