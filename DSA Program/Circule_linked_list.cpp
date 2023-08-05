#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
    }
};

void creatNode(node *&ptr, int val)
{
    node *temptr = new node(val);
    if (ptr == NULL)
    {
        ptr = temptr;
        ptr->next = ptr;
        return;
    }
    node *p = ptr;
    while (p->next != ptr)
    {
        p = p->next;
    }
    p->next = temptr;
    temptr->next = ptr;
}

void deleteNodeAtIndux(node* head, int indux)
{
    node *ptr = head;
    int i = 0;
    while (i < indux - 1)
    {
        ptr = ptr->next;
        i++;
    }
    node *delptr = ptr->next;
    ptr->next = delptr->next;
    delete delptr;
}

void display(node *ptr)
{
    node *head = ptr;
    do
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while (ptr != head);
    cout << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        int n;
        cout << "Enter elemenet: ";
        cin >> n;
        creatNode(head, n);
    }
    display(head);

    deleteNodeAtIndux(head, 2);
    display(head);

    return 0;
}
