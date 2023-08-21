#include <bits/stdc++.h>
using namespace std;

// Creat a ListNode
class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
        data = val;
        next = NULL;
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

bool palindrome(ListNode *head)
{
    if (head->next == NULL)
    {
        return true;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast != NULL && fast->next == NULL)
    {
        slow = slow->next;
    }

    ListNode *pre = NULL;
    ListNode *nex = NULL;

    while (slow->next != NULL && slow != NULL)
    {
        nex = slow->next;
        slow->next = pre;

        pre = slow;
        slow = nex;
    }
    if (slow != NULL)
    {
        slow->next = pre;
    }

    fast = head;
    while (slow)
    {
        if (fast->data != slow->data)
        {
            return false;
        }
        slow = slow->next;
        fast = fast->next;
    }
    return true;
}

int main()
{
    ListNode *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    // insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 1);

    display(head);
    cout << palindrome(head);

    return 0;
}