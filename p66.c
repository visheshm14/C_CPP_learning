// insertion
#include <stdio.h>
void main()
{
    int pos, num, n, a[11];
    printf("Enter the position: ");
    scanf("%d", &pos);

    printf("Enter the value: ");
    scanf("%d", &num);

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the values of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = num;

    printf("Array after insertion: ");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
}
