#include <stdio.h>
void main()
{
    char str[20],i=0;
    int noc=0;
    printf("enter any string");
    gets(str);
    while(str[i]!='\0')
    {
        noc=noc+1;
        i++;
    }
    printf("no of string is %d",noc);

}