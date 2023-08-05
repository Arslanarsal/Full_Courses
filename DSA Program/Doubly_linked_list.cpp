#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void creatNode(node *&ptr, int val)
{
    node *newptr = new node(val);
    if (ptr == NULL)
    {
        ptr = newptr;
        newptr->prev = NULL;
        return;
    }

    node *temptr = ptr;
    while (temptr->next != NULL)
    {
        temptr = temptr->next;
    }
    temptr->next = newptr;
    newptr->prev = temptr;
}

void display(node *head)
{
    node *p;
    while (head != NULL)
    {
        cout << head->data << " ";
        p = head;
        head = head->next;
    }
    cout << endl;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->prev;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout << "Enter element: ";
        cin >> n;
        creatNode(head, n);
    }
    display(head);

    return 0;
}