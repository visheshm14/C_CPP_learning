#include <stdio.h>
#include <string.h>
void main()
{
    char str1[40];
    char str2[40];
    int flag;
    printf("enter any string ");
    gets(str1);
    strcpy(str2, str1);
    strrev(str1);
    flag = strcmpi(str2, str1);

    if (flag == 0)
        printf("palindrome");
    else
        printf("not a palindrome");
}