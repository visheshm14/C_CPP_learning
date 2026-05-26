// prime number
#include <stdio.h>
void main()
{
    int n,p=0;
    printf("enter any no");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        printf("gine no is prime ");
    }
    else
    {
        printf("gine no is not prime ");
    }
}