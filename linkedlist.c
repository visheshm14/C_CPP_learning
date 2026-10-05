#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int info;
    struct NODE *next;
};
struct NODE *start = NULL;
struct NODE *newnode, *temp;
void create()
{

    int ch, x;
    printf("do you want to create a node press 1\n");
    scanf("%d", &ch);

    while (ch == 1)
    {
        newnode = malloc(sizeof(struct NODE));
        printf("enter any element\n");
        scanf("%d", &x);
        newnode->info = x;
        newnode->next = NULL;

        if (start == NULL)
        {
            start = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("element inserted\n");
        printf("do you want to create another node press 1\n");
        scanf("%d", &ch);
    }
}

void display()
{
    struct NODE *temp1 = start;
    if (temp == NULL)
        printf("singly linked  is empty\n");
    else
        printf("element of singly linked list are\n");
    while (temp1 != NULL)
    {
        printf("%d\t", temp1->info);
        temp1 = temp1->next;
    }
}

void insert_start()
{
    int x;
    newnode = malloc(sizeof(struct NODE));
    printf("enter element to be inserted at start\n");
    scanf("%d", &x);
    newnode->info = x;
    newnode->next = start;
    start = newnode;
}

void insert_end()
{
    int x;
    newnode = malloc(sizeof(struct NODE));
    printf("enter element to be inserted at end\n");
    scanf("%d", &x);
    newnode->info = x;
    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    printf("element inserted\n");
}

void insert_sp()
{
    struct NODE *prev;
    int x, pos, i = 1;

    if (start == NULL)
    {
        printf("Insertion is not possible, the list is empty.\n");
    }
    else
    {
        printf("Enter element to be inserted at specific position: ");
        scanf("%d", &x);

        newnode = (struct NODE *)malloc(sizeof(struct NODE));
        newnode->info= x;

        printf("Enter the position to insert the element: ");
        scanf("%d", &pos);

        if (pos == 1)
        {
           
            newnode->next = start;
            start = newnode;
        }
        else
        {
           
            temp = start;
            while (i < pos - 1 && temp != NULL)
            {
                temp = temp->next;
                i++;
            }

            if (temp == NULL)
            {
                printf("Position out of bounds.\n");
            }
            else
            {
                newnode->next = temp->next;
                temp->next = newnode;
            }
        }
    }
}


void delete_start()
{
    struct NODE * temp1;
    if(start == NULL)
    {
        printf("nothing to delete");
    }
    else
    {
       temp1 =start;
       start=start->next;
       printf("deleted element from start is %d\n",temp1->info);
       free(temp1);
    }
    
}

void delete_end()
{
    struct NODE * temp1,*prev;
    if(start== NULL)
    {
        printf("linked list is empty");
    }
    else
    {
        temp1=start;
        if(start->next == NULL)
            start =start->next;
        else
        {
            while(temp1->next!=NULL)
            {
                prev=temp1;
                temp1=temp1->next;

            }
            prev->next=temp1->next;
        }
        printf("deleted element is %d\n",temp1->info);

    }
    free(temp1);
}

void delete_sp()
{
    struct NODE * temp1,*prev;
    int  pos, i = 1;

    if (start == NULL)
    {
        printf("deletion is not possible, the list is empty.\n");
    }
    else
    {
    
        printf("Enter the position to delete the element:\n ");
        scanf("%d", &pos);

        if (pos == 1)
        {
           temp1=start;
           start= start ->next;
        }
        else
        {
           
            temp1 = start;
            while (i < pos - 1 && temp != NULL)
            {
                prev=temp1;
                temp1 = temp1->next;
                i++;
            }
            prev->next=temp->next;    
        }
        printf("deleted element is %d\n",temp->info);
        free(temp1);

    }


}
int main()
{
    create();
    insert_start();
    insert_end();
    insert_sp();
    delete_start();
    delete_end();
    delete_sp();
    display();
}