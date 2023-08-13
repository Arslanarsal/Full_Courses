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

// Reverse A linked List
void Reverse(node *&head)
{
    node *preptr = NULL;
    node *currptr = head;
    node *Nextptr;

    while (currptr != NULL)
    {
        Nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = Nextptr;
    }
    head = preptr;
}

// Reverse K Node in linked List
node *ReverseKNode(node *&head, int k)
{
    node *preptr = NULL;
    node *currptr = head;
    node *Nextptr;

    int count = 0;
    while (currptr != NULL && count < k)
    {
        Nextptr = currptr->next;
        currptr->next = preptr;

        preptr = currptr;
        currptr = Nextptr;
        count++;
    }

    if (Nextptr != NULL)
    {
        head->next = ReverseKNode(Nextptr, k);
    }
    return preptr;
}

// Reverse A linked List Using Recursive Method
node *ReverseRcursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = ReverseRcursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
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

    display(head);
    // Reverse(head);
    // head = ReverseRcursive(head);
    head = ReverseKNode(head, 2);
    display(head);

    return 0;
}