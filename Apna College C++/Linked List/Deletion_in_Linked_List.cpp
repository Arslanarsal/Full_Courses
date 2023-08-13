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
}

// Delete a Node in Linked List
void DelInList(node *&head, int val)
{
    if (head->data == val)
    {
        node *del = head;
        head = head->next;
        delete (del);
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == val)
        {
            node *del = temp->next;
            temp->next = temp->next->next;
            delete (del);
            return;
        }
        temp = temp->next;
    }
    if (temp->data == val)
    {
        node *del = temp->next;
        temp->next = temp->next->next;
        delete (del);
        return;
    }
    cout << "Data Not Found" << endl;
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
    display(head);
    DelInList(head, 1);
    display(head);

    return 0;
}