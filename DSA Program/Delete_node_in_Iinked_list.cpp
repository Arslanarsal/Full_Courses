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

//          -->Node Enter at First


void nodeAtFirst(node *&ptr, int val)
{
    node *newptr = new node(val);
    newptr->next = ptr;
    ptr = newptr;
}

//          -->Node Enter at Iast
void nodeAtIast(node *&ptr, int val)
{
    node *newptr = new node(val);
    node *tempPtr = ptr;
    while (tempPtr->next != NULL)
    {
        tempPtr = tempPtr->next;
    }
    tempPtr->next = newptr;
}

//          -->Node Enter at Given indux
void nodeAtCenter(node *&ptr, int val, int indux)
{
    node *newPtr = new node(val);
    node *prePtr = ptr;
    for (int i = 1; i < indux; i++)
    {
        prePtr = prePtr->next;
    }
    newPtr->next = prePtr->next;
    prePtr->next = newPtr;
}

//          -->Creat node one by one
void makeNode(node *&ptr, int val)
{
    node *newPtr = new node(val);

    if (ptr == NULL)
    {
        ptr = newPtr;
        return;
    }

    node *tempPtr = ptr;
    while (tempPtr->next != NULL)
    {
        tempPtr = tempPtr->next;
    }
    tempPtr->next = newPtr;
}

void display(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

//          -->Delete node at Given indux
void deletenode(node *head, int indux)
{
    // node * tempPtr = ptr;
    // ptr = ptr->next;
    // delete tempPtr;

    node *prePtr = head;
    for (int i = 0; i < indux - 1; i++)
    {
        prePtr = prePtr->next;
    }
    node *delPtr = prePtr->next;
    prePtr->next = delPtr->next;
    delete delPtr;
}

int main()
{
    node *head = NULL;
    makeNode(head, 20);
    makeNode(head, 30);
    makeNode(head, 40);
    makeNode(head, 50);
    makeNode(head, 60);
    display(head);

    nodeAtFirst(head, 80);
    nodeAtFirst(head, 90);
    display(head);

    nodeAtIast(head, 120);
    nodeAtIast(head, 130);
    display(head);

    nodeAtCenter(head, 123, 2);
    nodeAtCenter(head, 456, 3);
    display(head);

    deletenode(head , 2);
    // deletenode(head);
    display(head);

    return 0;
}




