// exchange of array
#include <stdio.h>
void main()
{
    int a[5], b[5], temp;
    printf("enter values of 1st array\n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &a[i]);

    printf("enter values of 2nd array\n");
    for (int i = 0; i <= 4; i++)
        scanf("%d", &b[i]);
    for (int i = 0; i <= 4; i++)
    {
        temp = b[i];
        b[i] = a[i];
        a[i] = temp;
    }
    printf("values after exchamge\n");
    printf(" values of 1st array\n");
    for (int i = 0; i <= 4; i++)
        printf("%d\n", a[i]);

    printf(" values of 2nd array\n");
    for (int i = 0; i <= 4; i++)
        printf("%d\n", b[i]);
}