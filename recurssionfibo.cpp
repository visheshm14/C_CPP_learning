#include<iostream>
using namespace std;
int fibo(int x) 
{
   if((x==1)||(x==0)) 
   {
      return(x);
   }
   else 
   {
      return(fibo(x-1)+fibo(x-2));
   }
}
int main() 
{
   int x , i=0;
   cout << "Enter the number of terms  ";
   cin >> x;
   cout << "\nFibonnaci Series : ";
   while(i < x) 
   {
      cout << " " << fibo(i);
      i++;
   }
}
