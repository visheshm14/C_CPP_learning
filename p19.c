// reverse number
#include <stdio.h>
void main()
{
    int n, rev = 0, temp ;
    printf("enter any numbers");
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        rev = (rev * 10) + temp;
        n = n / 10;
    }
    printf("reverse of the given no is %d",rev);
}