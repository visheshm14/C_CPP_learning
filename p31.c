// fibonaccie series
#include<stdio.h>
void main()
{
    int n,a=-1,b=1,f,i=1;
    printf("enter no of terms");
    scanf("%d",&n);
    A:
    f=a+b;
    printf("%d",f);
    a=b;
    b=f;
    i++;
    if(i<=n)
    goto A;
}