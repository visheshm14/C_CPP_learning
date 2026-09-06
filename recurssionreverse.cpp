#include <iostream>
using namespace std;

void reverse(int n)
{

   
   if (n < 10) 
   {
      cout<<n;
      
   }

   else
   {
      cout<<n%10;
      reverse(n/10);
   }
}


int main()
{
   int n;
   cout <<"enter the no";
   cin>>n;
   reverse(n); 
  
}