#include <iostream>
using namespace std;
#define size 5
int stack[size], top;
void push();
void pop();
void peek();
void display();

int main()
{
    int ch;
    top = -1;
    do
    {
        cout << "\n1 for push";
        cout << "\n2 for pop";
        cout << "\n3 for peek";
        cout << "\n4 for display";
        cout << "\n5 for exit";
        cout << "\n\n enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            cout << "invalid choice ";
        }
    } while (ch != 5);
}
void push()
{
    int x;
    if (top == size - 1)
        cout << "\nstack is overflow ";
    else
    {
        cout << "\nenter your element";
        cin >> x;
        top++;
        stack[top] = x;
        cout << "\nelement inserted";
    }
}
void pop()
{
    int x;
    if (top == -1)
        cout << "\nstack is underflow";
    else
    {
        x = stack[top];
        top--;
        cout << "\ndeleted element is " << x;
    }
}
void peek()
{
    if (top == -1)
        cout << "\nstack is empty";
    else
        cout << "\ntop most element is" << stack[top];
}
void display()
{
    int i;
    if (top == -1)
        cout << "\nstack is empty";
    else
    {
        cout << "\nelements of stack are ";
        for (i = top; i >= 0; i--)
            cout << stack[i];
    }
}