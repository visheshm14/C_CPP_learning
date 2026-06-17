// power x to y
#include<stdio.h>
void main()
{
    int x,y,p=1,i=1;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    A:
    p=p*x;
    i++;
    if(i<=y)
    goto A;
    printf("x to power y is %d",p);
}