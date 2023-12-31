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

// Add ListNode at the Start of the Linked List
void insertAtHead(ListNode *&head, int x)
{
    ListNode *n = new ListNode(x);
    n->next = head;
    head = n;
}

// Search a key xue in Linked List
bool searching(ListNode *head, int key)
{
    while (head != NULL)
    {
        if (head->val == key)
        {
            return true;
        }
        head = head->next;
    }

    return false;
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

int main()
{
    ListNode *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 9);
    display(head);
    cout << searching(head, 9);

    return 0;
}