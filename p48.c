// fuction sum of array
#include<stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int n,f=1;
    printf("enter any no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
      f=f*i;
    printf("factorial of %d is %d",n,f);
}


 
 