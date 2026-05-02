//x to the power y
#include <stdio.h>
void main()
{
    int x, y, pow = 1;
    printf("enter the value of x and y");
    scanf("%d%d", &x, &y);

    for (int i = 1; i <= y; i++)

        pow = pow * x;
    printf("answer is %d", pow);
}