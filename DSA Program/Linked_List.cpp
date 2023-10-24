#include <iostream>
using namespace std;
// -->First simple Example
/*  class node
    {
    public:
        int data;
        node *next;
    };

    void display(node *ptr)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << endl;
            ptr = ptr->next;
        }
    }
*/

// -->Second simple Example
class stde
{
public:
    int data;
    stde *ptr;
    stde(int val)
    {
        data = val;
        ptr = NULL;
    }
};

void makeNodes(stde *&head, int val)
{
    // Here we creat new Node
    stde *newptr = new stde(val);

    if (head == NULL)
    {
        head = newptr;
        return;
    }
    stde *tempptr = head;
    while (tempptr->ptr != NULL)
    {
        tempptr = tempptr->ptr;
    }
    tempptr->ptr = newptr;
}

void display(stde *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->ptr;
    }
    cout << "NULL" << endl;
}

int main()
{
    // -->First simple Example
    /*
        node *head;
        node *second;
        node *third;

        head = new node;
        second = new node;
        third = new node;

        head->data = 4;
        head->next = second;

        second->data = 12;
        second->next = third;

        third->data = 17;
        third->next = NULL;

        display(head);
    */

    // -->Second simple Example
    stde *head = NULL;
    makeNodes(head, 1);
    makeNodes(head, 3);
    makeNodes(head, 75);
    display(head);

    return 0;
}