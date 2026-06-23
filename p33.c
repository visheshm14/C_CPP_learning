// palindrome
#include <stdio.h>
void main()
{
    int rev = 0, n, temp,m;
    printf("enter any no");
    scanf("%d", &n);
    m=n;
A:
    temp = n % 10;
    rev = (rev * 10) + temp;
    n = n / 10;
    if (n != 0)
        goto A;
        if(rev==m)
        printf("palindrome nnumber");
        else
        printf("not a palindrome");
}