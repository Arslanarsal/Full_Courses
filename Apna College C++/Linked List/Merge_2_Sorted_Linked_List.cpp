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
void makeList(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return;
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
}

// Merge two Linked List
node *mergeList(node *head1, node *head2)
{
    node *temp = new node(0);
    node *ptr1 = head1;
    node *ptr2 = head2;
    node *ptr3 = temp;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data < ptr2->data)
        {
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else
        {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if (ptr1 != NULL)
    {

        ptr3->next = ptr1;
    }

    if (ptr2 != NULL)
    {

        ptr3->next = ptr2;
    }
    return temp->next;
}

// Merge two Linked List using recursion
node *mergeRecur(node *head1, node *head2)
{

    if (head1 == NULL)
    {
        return head2;
    }

    if (head2 == NULL)
    {
        return head1;
    }

    node *res;
    if (head1->data < head2->data)
    {
        res = head1;
        res->next = mergeRecur(head1->next, head2);
    }
    else
    {
        res = head2;
        res->next = mergeRecur(head1, head2->next);
    }
    return res;
}

int main()
{
    node *head = NULL;

    makeList(head, 1);
    makeList(head, 2);
    makeList(head, 5);
    makeList(head, 7);
    makeList(head, 9);
    display(head);

    node *head1 = NULL;
    makeList(head1, 2);
    makeList(head1, 4);
    makeList(head1, 6);
    makeList(head1, 8);
    makeList(head1, 10);
    display(head1);

    // node *newhead = mergeList(head, head1);
    node *newhead = mergeRecur(head, head1);

    display(newhead);
    return 0;
}