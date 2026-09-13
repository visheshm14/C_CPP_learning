#include <iostream>
using namespace std;
class demo
{
    private:int x;
    public:void read();
    demo operator+(demo);
    void display();

};
void demo :: read()
{
    cout<<"enter value of x";
    cin>>x;
}
demo demo :: operator+(demo t,demo u)
{
    demo temp;
    temp.x=x+ t.x+u.x;
    return temp;
}
void demo :: display()
{
    cout<<"sum of two number is"<<x;

}
int main()
{
    demo d1,d2,d3,d4;
    d1.read();
    d2.read();
    d3.read();
    d4=d1+d2+d3;
    d4.display();
}
