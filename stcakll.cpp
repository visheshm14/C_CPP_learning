#include <iostream>
using namespace std;

class NODE
{
private:
    int info;
    NODE *next;

public:
   
    NODE *push(NODE *);
    NODE *pop(NODE *);
    void display(NODE *);
};

NODE *NODE::push(NODE *head)
{
    NODE *newnode;
    int x;
    newnode = new NODE;
    cout << "enter an element ";
    cin >> x;
    newnode->info = x;
    newnode->next = head;  
    head = newnode;        
    cout << "element inserted." << endl;
    return head;  
}

NODE *NODE::pop(NODE *head)
{
    if (head == NULL)
    {
        cout << "Stack is empty." << endl;
        return NULL;
    }
    else
    {
        NODE *top = head;    
        head = head->next;    
        cout << "deleted element " << top->info << endl;
        delete top;          
        return head;          
    }
}

void NODE::display(NODE *head)
{
    if (head == NULL)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Elements in the stack: ";
        NODE *top = head;  
        while (top != NULL)
        {
            cout << top->info << " "; 
            top = top->next;          
        }
        cout << endl;
    }
}

int main()
{
    int ch;
    NODE *head = NULL;  

    do
    {
        cout << "\n1 for Push" << endl;
        cout << "2 for Pop" << endl;
        cout << "3 for Display" << endl;
        cout << "4 for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        NODE node;  

        switch (ch)
        {
        case 1:
            head = node.push(head);  
            break;
        case 2:
            head = node.pop(head);   
            break;
        case 3:
            node.display(head);      
            break;
        case 4:
            break;                   
        default:
            cout << "Invalid choice." << endl;
        }

    } while (ch != 4);

    return 0;
}
