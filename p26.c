// factorial of greatest
#include <stdio.h>
void main()
{
    int n, max = 0, temp, fact = 1;

    printf("enter any number");
    scanf("%d", &n);

    while (n != 0)
    {
        temp = n % 10;
        if (max < temp)
            max = temp;
        n = n / 10;
    }
    printf("greatest digit is %d", max);
    for (int i = 1; i <= max; i++)
        fact = fact * i;
    printf("\nfactorial of the greatest digit is %d", fact);
}