// switch
#include<stdio.h>
void main()
{
    int ch,n, fact=1,temp,rev=0,sum=0,x,y,p=1,no,i=1,number;
    printf("\n1 for factorial");
    printf("\n2 for reverse ");
    printf("\n3 for sum");
    printf("\n4 for power");

    printf("\nEnter your choice");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:printf("enter the value of n ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        fact=fact*i;
        printf("factorial of %d is %d",n,fact);
        break;

        case 2:printf("enter a no");
        scanf("%d",&no);
        while(no!=0)
        {
            temp=no%10;
            rev=(rev*10)+temp;
            no=no/10;

        }
        printf("reverse of the no is %d ",rev);
        break;

        case 3:printf("enter multiple no enter 0 to exit");
        while(number!=0)
        {
            scanf("%d",&number);
            sum=sum+number;
        }
        printf("sum is %d",sum);
        break;
        

        case 4:printf("enter the value of xand power y");
        scanf("%d%d",&x,&y);
        for(int i=1;i<=y;i++)
        p=p*x;
        printf("value of x to the power  y is %d",p);
        break;

        default:printf("invalid choice");
    }
        
}