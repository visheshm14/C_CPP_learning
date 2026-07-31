// vowel count
#include<stdio.h>
void main()
{
    char str[20];
    int nov=0,i=0;
    printf("enter the string ");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
        {
        nov=nov +1;
        }
        i++;
         
    }
    printf ("no of vowels are %d",nov);

}