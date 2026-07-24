// plus one
#include <stdio.h>
void main()
{
    int a[100], s;
    printf("enter the size of the array");
    scanf("%d", &s);
    printf("enter the values of the array");
    for (int i = 0; i <= s; i++)
        scanf("%d", &a[i]);
    a[s] = a[s] + 1;
    printf("values after adding plus one\n");
    for (int i = 0; i <= s; i++)
        printf("%d", a[i]);
}