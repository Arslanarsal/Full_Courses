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
        next = NULL;
    }
};

void makeNode(node *&head, int val)
{
    node *newptr = new node(val);

    if (head == NULL)
    {
        head = newptr;
        return;
    }
    node *Tempptr = head;
    while (Tempptr->next != NULL)
    {
        Tempptr = Tempptr->next;
    }
    Tempptr->next = newptr;
}

void push(node *&head, node *&newptr)
{
    newptr->next = head;
    head = newptr;
}
node *pop(node *head)
{
    node *temptr = head;
    head = head->next;
    delete temptr;
    return head;
}

void addatend(node *head)
{
    node *newptr = new node(50);
    while (head->next != NULL)
    {
        head = head->next;
    }
    head->next = newptr;
}

void peak(node *head, int indux)
{
    int count = 1;
    while (count != indux && head != NULL)
    {
        head = head->next;
        count++;
    }
    if (count == indux)
    {
        cout << head->data << endl;
    }
    else
    {
        cout << "Invalid input";
    }
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    int val = 10;
    for (int i = 0; i < 10; i++)
    {
        makeNode(head, val);
        val++;
    }
    node *pus1 = new node(25);
    node *pus2 = new node(30);
    node *pus3 = new node(35);
    display(head);

    push(head, pus1);
    push(head, pus2);
    push(head, pus3);
    display(head);

    head = pop(head);
    head = pop(head);
    display(head);

    addatend(head);
    display(head);

    peak(head, 5);

    return 0;
}