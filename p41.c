// second largest in array
#include <stdio.h>
void main()
{
    int max1, max2, a[5];
    printf("enter the value of array");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &a[i]);
    max1 = a[0];
    max2 = a[0];

    for (int i = 2; i < 5; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
    }
    printf("second largest in the array is %d", max2);
}