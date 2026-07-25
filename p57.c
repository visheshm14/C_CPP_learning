#include<stdio.h>

void main()
{
  int a=25,*p;
  p=&a;
  (*p)++;
  printf("%u",&a);
  printf("\n%d",*p); 
  printf("\n%u",p);
  printf("\n%d",&p);
}