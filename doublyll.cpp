#include <iostream>
using namespace std;
class NODE
{
private:
    int info;
    NODE *ladd;
    NODE *radd;

public:
    NODE *create(NODE *);
    NODE *insert_beg(NODE *);
    NODE *insert_end(NODE *);
    NODE *insert_sp(NODE *);
    NODE *insert_asp(NODE *);
    NODE *delete_beg(NODE *);
    NODE *delete_end(NODE *);
    NODE *delete_sp(NODE *);
    NODE *delete_asp(NODE *);
    NODE *delete_bsp(NODE *);
    NODE *delete_info(NODE *);
    void display(NODE *);
    int count(NODE *);
    int search(NODE *, int);
    int sum(NODE *);
};
NODE *NODE ::create(NODE *start)
{
    NODE *newnode, *temp;
    int ch, x;
    cout << "do you yant to create node if yes press 1" << endl;
    cin >> ch;

    while (ch == 1)
    {
        newnode = new NODE;
        cout << "enter any element:" << endl;
        cin >> x;
        newnode->info = x;
        newnode->ladd = NULL;
        newnode->radd = NULL;

        if (start == NULL)
        {
            start = newnode;
            temp = newnode;
        }
        else
        {
            temp->radd = newnode;
            newnode->ladd = temp;
        }

        temp = newnode;
        cout << "element inserted" << endl;
        cout << "do you want to create another node press 1" << endl;
        cin >> ch;
    }
    return start;
}

NODE *NODE ::insert_beg(NODE *start)
{
    NODE *newnode;
    int x;
    newnode = new NODE;
    cout << "enter any no";
    cin >> x;
    newnode->info = x;
    newnode->ladd = NULL;
    newnode->radd = start;
    start->ladd = newnode;
    start = newnode;
    cout << "element inserted " << endl;
    return start;
}

NODE *NODE ::insert_end(NODE *start)
{
    NODE *newnode, *temp;
    int x;
    newnode = new NODE;
    cout << "enter any element" << endl;
    cin >> x;
    newnode->info = x;
    newnode->ladd = NULL;
    newnode->radd = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        temp = start;
        while (temp->radd != NULL)
            temp = temp->radd;
        temp->radd = newnode;
        newnode->ladd = temp;
    }
    cout << "element inserted" << endl;
    return start;
}

NODE *NODE ::insert_sp(NODE *start)
{
    int x, i, pos, c;
    NODE *newnode, *temp, *prev;
    cout << "enter any position " << endl;
    cin >> pos;
    c = count(start);
    if (pos < 1 || pos > c + 1)
        cout << "invalid position" << endl;
    else
    {
        newnode = new NODE;
        cout << "enter any element " << endl;
        cin >> x;
        newnode->info = x;
        if (pos == 1)
        {
            newnode->radd = start;
            newnode->ladd = NULL;
            start = newnode;
        }
        else
        {
            temp = start;
            for (i = 1; i < pos ; i++)
            {
                prev = temp;
                temp = temp->radd;
            }
            newnode->ladd = prev;
            prev->radd = newnode;
            newnode->radd = temp;
            temp->ladd = newnode;
        }
        cout << "element inserted" << endl;
    }
    return start;
}

NODE *NODE ::insert_asp(NODE *start)
{
    int x, i, pos, c;
    NODE *newnode, *temp, *prev;
    cout << "enter any position " << endl;
    cin >> pos;
    c = count(start);
    if (pos < 1 || pos > c + 1)
        cout << "invalid position" << endl;
    else
    {
        newnode = new NODE;
        cout << "enter any element " << endl;
        cin >> x;
        newnode->info = x;
        if (pos == 1)
        {
            newnode->radd = start;
            newnode->ladd = NULL;
            start = newnode;
        }
        else
        {
            temp = start;
            for (i = 1; i < pos +1 ; i++)
            {
                prev = temp;
                temp = temp->radd;
            }
            newnode->ladd = prev;
            prev->radd = newnode;
            newnode->radd = temp;
            temp->ladd = newnode;
        }
        cout << "element inserted" << endl;
    }
    return start;
}


NODE *NODE ::delete_beg(NODE *start)
{
    NODE *temp;
    if (start == NULL)
        cout << "linked list is empty" << endl;
    else
    {
        temp = start;
        start = start->radd;
        cout << "deleted element is" << temp->info << endl;
        delete temp;
    }
    return start;
}

NODE *NODE ::delete_end(NODE *start)
{
    NODE *temp, *current;
    if (start == NULL)
        cout << "linked list is empty" << endl;
    else
    {
        temp = start;
        if (start->radd == NULL)
            start = start->radd;
        else
        {
            while (temp->radd != NULL)
            {
                current = temp;
                temp = temp->radd;
            }
            current->radd = temp->radd;
            delete temp;
        }
        return start;
    }
}

NODE *NODE ::delete_sp(NODE *start)
{
    NODE *temp, *current,*prev;
    int i, pos, c;
    cout << "enter any position" << endl;
    cin >> pos;
    c = count(start);
    if (pos < 1 || pos > c)
        cout << "invalid position" << endl;
    else
    {
        temp = start;
        if (pos == 1)
            start = start->radd;
        else
        {
            for (i = 1; i <= pos; i++)
            {
                current = temp;
                temp = temp->radd;
            }
            prev=current->ladd;
            prev->radd=temp;
            temp->ladd=prev;
           
        }
        cout << "deleted element is " << current->info << endl;
        delete current;
    }
    return start;
}


NODE *NODE ::delete_asp(NODE *start)
{
    NODE *temp, *current,*prev;
    int i, pos, c;
    cout << "enter any position" << endl;
    cin >> pos;
    c = count(start);
    if (pos < 1 || pos > c)
        cout << "invalid position" << endl;
    else
    {
        temp = start;
        if (pos == 1)
            start = start->radd;
        else
        {
            for (i = 1; i <= pos +1; i++)
            {
                current = temp;
                temp = temp->radd;
            }
            prev=current->ladd;
            prev->radd=temp;
            temp->ladd=prev;
           
        }
        cout << "deleted element is " << current->info << endl;
        delete current;
    }
    return start;
}


NODE *NODE ::delete_bsp(NODE *start)
{
    NODE *temp, *current,*prev;
    int i, pos, c;
    cout << "enter any position" << endl;
    cin >> pos;
    c = count(start);
    if (pos < 1 || pos > c)
        cout << "invalid position" << endl;
    else
    {
        temp = start;
        if (pos == 1)
            start = start->radd;
        else
        {
            for (i = 1; i <= pos -1; i++)
            {
                current = temp;
                temp = temp->radd;
            }
            prev=current->ladd;
            prev->radd=temp;
            temp->ladd=prev;
           
        }
        cout << "deleted element is " << current->info << endl;
        delete current;
    }
    return start;
}

NODE *NODE ::delete_info(NODE *start)

{

    int flag, x;
    NODE *temp, *current,*prev;
    cout << "enter any element to be deleted";
    cin >> x;
    flag = search(start, x);
    if (flag == 0)
        cout << "element not found";
    else
    {
        temp = start;
        if (x == start->info)
            start = start->radd;
        else
        {
            while (x != temp->info)
            {
                current = temp;
                temp = temp->radd;
            }
            temp=temp->radd;
            current=current->radd;
            prev=current->ladd;
            prev->radd=temp;
            temp->ladd=prev;
           
            
        }
        cout << "element delete" << endl;
    }
    return start;
}

int NODE ::search(NODE *temp, int x)
{
    int flag = 0;
    while (temp != NULL)
    {
        if (x == temp->info)
            flag = 1;

        temp = temp->radd;
    }
    return flag;
}

int NODE ::sum(NODE *temp)

{
    int s = 0;
    while (temp != NULL)
    {
        s = s + temp->info;
        temp = temp->radd;
    }
    return s;
}


void NODE ::display(NODE *temp)
{
    if (temp == NULL)
        cout << "singly linked  is empty" << endl;
    else
        cout << "element of singly linked list are" << endl;
    while (temp != NULL)
    {
        cout << temp->info << " ";
        temp = temp->radd;
    }
}

int NODE ::count(NODE *temp)
{
    int c = 0;
    while (temp != NULL)
    {
        c++;
        temp = temp->radd;
    }
    return c;
}


int main()
{
    int ch, x, flag;
    NODE *start = NULL;
    start = start->create(start);

    do
    {
        cout << "\n 1 for insert at beg" << endl;
        cout << "\n 2 for insert at end" << endl;
        cout << "\n 3 for insert at sp" << endl;
        cout << "\n 4 for insert at asp" << endl;
        cout << "\n 5 for delete at beg" << endl;
        cout << "\n 6 for delete at end" << endl;
        cout << "\n 7 for delete at sp" << endl;
        cout << "\n 8 for delete at asp" << endl;
        cout << "\n 9 for delete at bsp" << endl;
        cout << "\n 10 for delete at info" << endl;
        cout << "\n 11 for display" << endl;
        cout << "\n 12 for count" << endl;
        cout << "\n 13 for search" << endl;
        cout << "\n 14 for sum" << endl;
        cout << "\n 15 for exit" << endl;
        cout << "enter your choice " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            start = start->insert_beg(start);
            break;
        case 2:
            start = start->insert_end(start);
            break;
        case 3:
            start = start->insert_sp(start);
            break;
        case 4:
            start = start->insert_asp(start);
            break;
        case 5:
            start = start->delete_beg(start);
            break;
        case 6:
            start = start->delete_end(start);
            break;
        case 7:
            start = start->delete_sp(start);
            break;
        case 8:
            start = start->delete_asp(start);
            break;
        case 9:
            start = start->delete_bsp(start);
            break;
        case 10:
            start = start->delete_info(start);
            break;
        case 11:
            start->display(start);
            break;
       case 12:
            x = start->count(start);
            cout << "total no of element are " << x << endl;
            break;
         case 13:
            cout << "enter any element to be search";
            cin >> x;
            flag = start->search(start, x);
            if (flag == 0)
                cout << "element not found" << endl;
            else
                cout << "element not found" << endl;
            break;

        case 14:
            x = start->sum(start);
            cout << "sum of all the element is " << x;
            break;
        case 15:
            break;
        default:
            cout << "invalid choice" << endl;
        }

    } while (ch != 15);
}