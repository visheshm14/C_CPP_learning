#include<stdio.h>
void read(int[],int[]);
void calculate(int[],int[],int[]);
void display(int[]);
void main()
{
    int a[5],b[5],c[5];
    read(a,b);
    calculate(a,b,c);
    display(c);
}
void read(int a[],int b[])
{
    int i ;
    printf("enter the values of a");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    printf("enter the values of b");
    for(i=0;i<=4;i++)
    scanf("%d",&b[i]);
}
void calculate(int c[],int a[],int b[])
{
    int i;
    for(i=0;i<=4;i++)
    c[i]=a[i]+b[i];
}
void display(int c[])
{
    int i;
    printf("sum is ");
    for(i=0;i<=4;i++)
    printf("%d",c[i]);
}