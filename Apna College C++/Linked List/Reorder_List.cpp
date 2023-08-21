#include <bits/stdc++.h>
using namespace std;

// Creat a ListNode
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

// Add ListNode at the end of the Linked List
void insertAtTail(ListNode *&head, int x)
{
    ListNode *n = new ListNode(x);
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
        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
    return;
}

void reorderList(ListNode *head)
{
    if (head->next == NULL)
    {
        return;
    }

    ListNode *slow = head;
    ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL && fast->next == NULL)
    {
        slow = slow->next;
    }

    ListNode *temp = slow;

    ListNode *pre = NULL;
    ListNode *nex = NULL;

    while (slow->next != NULL)
    {
        nex = slow->next;
        slow->next = pre;

        pre = slow;
        slow = nex;
    }

    slow->next = pre;

    fast = head->next;
    nex = head;
    int n = 0;
    while (fast != temp && slow != NULL)
    {
        if (n % 2 == 0)
        {
            nex->next = slow;
            slow = slow->next;
        }
        else
        {
            nex->next = fast;
            fast = fast->next;
        }
        nex = nex->next;
        n++;
    }
    if (fast != temp)
    {
        nex->next = fast;
        nex->next->next = NULL;
    }
    else
    {
        nex->next = slow;
        nex->next->next = NULL;
    }
}

int main()
{
    ListNode *head = NULL;
    insertAtTail(head, 1);
    // insertAtTail(head, 2);
    // insertAtTail(head, 3);
    // insertAtTail(head, 4);
    // insertAtTail(head, 5);
    // insertAtTail(head, 6);

    display(head);
    reorderList(head);
    display(head);

    return 0;
}