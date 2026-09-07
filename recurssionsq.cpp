#include <iostream>
using namespace std;

void table(int i);

int main()
{
    int i=1;
    
    table(i);
    
}

void table(int i)
{
    int t;


    if (i <= 10)
    {
         t = i * i;
        cout << t << endl;
        table(i + 1);
    }
}
