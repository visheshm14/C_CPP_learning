#include <iostream>
using namespace std;

void table(int i, int n);

int main()
{
    int n;
    cout << "Enter your number: " << endl;
    cin >> n;

    table(1, n);
    
}

void table(int i, int n)
{
    int t;
    
    if (i <= 10)
    {
        t = i * i;
        cout << n << " * " << i << " = " << t << endl;
    }
    table(i + 1, n);
}
