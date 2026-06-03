// count digit
#include<stdio.h>
void main()
{
    int n ,count=0;

    printf("enter any number");
    scanf("%d",&n);

    while(n!=0)
    {
        
        count=count+1;
        n=n/10;
    }
    printf("no of digit is %d",count);
}
