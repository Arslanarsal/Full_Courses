#include <bits/stdc++.h>
using namespace std;

// Creat a Node
class node
{
public:
    int data;
    node *next;
    node *pre;
    node(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
};

// Add Node at the end of the Linked List
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->pre = temp;
}

// Add Node at the end of the Linked List
void deleteNode(node *&head, int val)
{

    // If node is first
    if (head->data == val)
    {
        node *temp = head;
        head->next->pre = NULL;
        head = head->next;
        delete (temp);
        return;
    }

    node *temp = head;
    while (temp->data != val && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Not found" << endl;
        return;
    }
    temp->pre->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->pre = temp->pre;
    }

    delete (temp);
}

// Add Node at the Start of the Linked List
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->pre = n;
    }

    head = n;
}



// Display all Linked List
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    // insertAtHead(head, 4);
    // insertAtHead(head, 9);
    display(head);

    deleteNode(head,5);
    display(head);

    return 0;
}