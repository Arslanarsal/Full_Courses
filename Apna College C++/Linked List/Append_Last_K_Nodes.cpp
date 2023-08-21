#include <bits/stdc++.h>
using namespace std;

// Creat a ListNode
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode *pre;
    ListNode(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
};

// Add ListNode at the end of the Linked List
void insertAtTail(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    ListNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->pre = temp;
}

// Display all Linked List
void display(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}

int length(ListNode *head)
{
    int n = 0;
    while (head != NULL)
    {
        head = head->next;
        n++;
    }
    return n;
}
void kappend(ListNode *&head, int k)
{
    ListNode *temp = head;
    ListNode *newtail;

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

// Remove Nth ListNode From End of List
ListNode *removeNthFromEnd(ListNode *head, int n)
{
    int count = 0;
    ListNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    n = (count - n) - 1;
    if (n < 0)
    {
        return head->next;
    }
    temp = head;
    while (n)
    {
        temp = temp->next;
        n--;
    }

    temp->next = temp->next->next;
    return head;
}

int main()
{
    ListNode *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);

    display(head);
    // kappend(head, 4);

    head = removeNthFromEnd(head, 1);
    display(head);
    return 0;
}

// ListNode *kappend(ListNode *head, int k)
// {
//     ListNode *newhead;
//     ListNode *newtail;
//     ListNode *tail = head;
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