// sum of smallest and greatest
#include <stdio.h>
void main()
{
    int n, max = 0, min = 9, temp, sum = 0;

    printf("enter any number");
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        if (max < temp)
            max = temp;
        if (min > temp)
            min = temp;
        sum = max + min;
        n = n / 10;
    }
    printf("sum of smallest and greatest digit is %d", sum);
}