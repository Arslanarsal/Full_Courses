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

// Creat insection point of two Linked List
void interset(node *head1, node *head2, int pos)
{
    while (pos--)
    {
        head1 = head1->next;
    }

    while (head2->next != NULL)
    {
        head2 = head2->next;
    }
    head2->next = head1;
}

// return Linked List length
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

// find insection point of two Linked List and return value
int intersection(node *head1, node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;

    node *ptr1;
    node *ptr2;

    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main()
{
    node *head = NULL;
    node *head1 = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);

    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);

    // interset(head, head1, 3);
    display(head);
    display(head1);

    cout << intersection(head, head1);
    return 0;
}
