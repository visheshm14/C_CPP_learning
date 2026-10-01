#include <iostream>
using namespace std;

class ex
{
private:
    int x, y;

public:
    friend void read_display(ex &t);
};

void read_display(ex &t)
{
    int temp;
    cout << "Enter the values of x and y " << endl;
    cin >> t.x >> t.y;
    temp=t.x;
    t.x=t.y;
    t.y=temp;

    cout << "values after exchange  x=  " << t.x <<"y = "<<t.y<<endl;
}

int main()
{
    ex s;
    read_display(s);
}
