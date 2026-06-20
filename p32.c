// reverse
#include <stdio.h>
void main()
{
    int rev = 0, n, temp;
    printf("enter any no");
    scanf("%d", &n);
A:
    temp = n % 10;
    rev = (rev * 10) + temp;
    n = n / 10;
    if (n != 0)
        goto A;
    printf("reverse of the number is %d", rev);
}