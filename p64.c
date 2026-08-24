#include<stdio.h>
#include<string.h>

void main()
{           
char a[50];
char b[50];
    printf("enter your a string");
    gets(a);
    printf("enter your b string");
    gets(b);
     strcat(b," ");
     strcat(b,a);
    printf("%s",b);
}