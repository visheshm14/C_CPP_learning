#include <iostream>
using namespace std;

class sum
{
private:
    int x, y, z;

public:
    friend void read_display(sum &t);
};

void read_display(sum &t)
{
    cout << "Enter the values of x and y and z" << endl;
    cin >> t.y >> t.x >> t.z;
    cout << "Sum of the two numbers is " << t.x + t.y + t.z << endl;
}

int main()
{
    sum s;
    read_display(s);
}
