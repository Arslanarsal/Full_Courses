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

int length(node *head)
{
    int n = 0;
    while (head != NULL)
    {
        head = head->next;
        n++;
    }
    return n;
}
void kappend(node *&head, int k)
{
    node *temp = head;
    node *newtail;

    int l = length(head);
    int n = (l - k) - 1;
    while (n && temp != NULL)
    {
        temp = temp->next;
        n--;
    }

    newtail = temp;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head;
    head = newtail->next;
    newtail->next = NULL;
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

    display(head);
    kappend(head, 4);
    display(head);
    return 0;
}

// node *kappend(node *head, int k)
// {
//     node *newhead;
//     node *newtail;
//     node *tail = head;
//     int l = length(head);
//     int count = 1;
//     while (tail->next != NULL)
//     {
//         if (count == l - k)
//         {
//             newtail = tail;
//             newhead = tail->next;
//         }
//         tail = tail->next;
//         count++;
//     }
//     tail->next = head;
//     newtail->next = NULL;
//     return newhead;
// }