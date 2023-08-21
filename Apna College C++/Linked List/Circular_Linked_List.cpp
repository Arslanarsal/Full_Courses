#include <bits/stdc++.h>
using namespace std;

// Creat a Node
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

// Add Node at the start of the Linked List
void makestartList(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    newNode->next = head;
    temp->next = newNode;
    head = newNode;
}

// Add Node at the end of the Linked List
void makeList(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        head->next = head;
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return;
}

// Delete Node in the Linked List
void deleteNode(node *&head, int val)
{
    if (head->data == val)
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        node *del = head;
        head = head->next;
        temp->next = head;
        delete (del);
        return;
    }

    node *temp = head;
    while (temp->next->data != val && temp->next != head)
    {
        temp = temp->next;
    }

    if (temp->next == head)
    {
        cout << "Not Found";
        return;
    }

    node *del = temp->next;
    temp->next = del->next;
    delete (del);
}

// Display all Linked List
void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;

    makeList(head, 1);
    makeList(head, 2);
    makeList(head, 5);
    makeList(head, 7);
    makeList(head, 9);
    // makestartList(head, 90);
    deleteNode(head , 1);
    display(head);

    return 0;
}