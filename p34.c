//sum of multiple
#include <stdio.h>
void main()
{
    int sum = 0, n;
    printf("enter multiple no enter 0 to exit");
    
A:

    scanf("%d", &n);
    sum =sum+ n;
    
    if (n != 0)
        goto A;
        printf("sum of multiple number is %d",sum);
}