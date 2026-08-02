#include <stdio.h>
void main()
{
    char a[20], b[20];
    int i = 0,flag=0;
    printf("enter the values of 1 st string");
    gets(a);
    printf("enter the values of 2 nd string");
    gets(b);
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] != b[i])
            {
                flag =1;
                break;
            }
            i++;
    }
    if (flag==0)
        printf("\nsame string");
    else
        printf("\n different string");

}