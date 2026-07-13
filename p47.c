// function of sum
#include<stdio.h>
void sum();
void main()
{
    sum();
}
    
void sum()
{
    int a,b,s;
    printf("enter any two values");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("sum pf a aand b is %d",s);
}