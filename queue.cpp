#include <iostream>
using namespace std;
#define size 5
int queue[size], front, rear;
void insert();
void del();
void display();

int main()
{
    int ch;
    front = rear = -1;
    do
    {
        cout << "\n1 for isert";
        cout << "\n2 for delete";
        cout << "\n3 for display";
        cout << "\n4 for exit";
        cout << "\n\n enter your choice ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            cout << "\ninvalid choice ";
        }
    } while (ch != 5);
}
void insert()
{
    int x;
    if (rear == size - 1)
        cout << "\nqueue is overflow";
    else
    {
        cout << "enter your element";
        cin >> x;
        rear++;
        queue[rear] = x;
        cout << "\nelement is inserted";
        if (front == -1)
            front = 0;
    }
}
    void del()
    {
        int x;
        if (front == -1)
            cout << "\nqueue is underflow";
        else
        {
            x = queue[front];
            cout << "\ndeleted element is " << x;
            if (front == rear)
                front = rear = -1;
            else
                front++;
        }
    }
    void display()
    {
        int i;
        if (front == -1)
            cout << "\nqueue is empty";
        else
        {
            cout << "elements of queue are ";
        for (i = front; i <= rear; i++)
            cout << queue[i] << "  ";
        }
    }
