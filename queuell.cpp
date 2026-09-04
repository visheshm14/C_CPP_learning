#include <iostream>
using namespace std;
class NODE
{
    private:int info;
            NODE *next;
    public:
    NODE * enqueue();
    NODE * dequeue();
    NODE * display();        
};
 NODE *front = NULL;
 NODE *rear = NULL;
 NODE *temp;

NODE *NODE::enqueue()
{
    int x;
    cout << "insert the element in queue : " << endl;
    cin >> x;
    if (rear == NULL)
    {
        rear = new NODE;
        rear->next = NULL;
        rear->info = x;
        front = rear;
    }
    else
    {
        temp = new NODE;
        rear->next = temp;
        temp->info = x;
        temp->next = NULL;
        rear = temp;
    }
}

NODE *NODE::dequeue()
{
    temp = front;
    if (front == NULL)
    {
        cout << "Underflow" << endl;
        
    }
    else if (temp->next != NULL)
    {
        temp = temp->next;
        cout << "Element deleted from queue is : " << front->info << endl;
        free(front);
        front = temp;
    }
    else
    {
        cout << "Element deleted from queue is : " << front->info << endl;
        free(front);
        front = NULL;
        rear = NULL;
    }
}
NODE * NODE :: display()
{
    temp = front;
    if ((front == NULL) && (rear == NULL))
    {
        cout << "Queue is empty" << endl;
        
    }
    cout << "Queue elements are: ";
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int ch;
    
    do
    {
        cout << "1) Insert element to queue" << endl;
        cout << "2) Delete element from queue" << endl;
        cout << "3) Display all the elements of queue" << endl;
        cout << "4) Exit" << endl;
        cout << "Enter your choice : " << endl;
        cin >> ch;
        NODE node;
        switch (ch)
        {
        case 1:
            node.enqueue();
            break;
        case 2:
            node.dequeue();
            break;
        case 3:
            node.display();
            break;
        case 4:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}