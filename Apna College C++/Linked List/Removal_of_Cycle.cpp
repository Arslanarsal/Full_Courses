#include <bits/stdc++.h>
using namespace std;

// Creat a node
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

// Creat a linked list
void CreatList(node *&head, int val)
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

// Creat a cycle in linked list
void CreatCycle(node *head)
{

    node *temp;

    while (head->next != NULL)
    {
        if (head->data == 2)
        {
            temp = head;
        }

        head = head->next;
    }
    head->next = temp;
}

// Disply all linked list
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

// Detect cycle in linked list
bool DetectCycle(node *head)
{
    node *slow = head;
    node *fast = head;

    while (fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

// Remove cycle in linked list
void DeleteCycle(node *head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;

    } while (slow != fast);
    fast = head;
    while (slow->next != fast->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}

int main()
{
    node *head = NULL;
    CreatList(head, 1);
    CreatList(head, 2);
    CreatList(head, 3);
    CreatList(head, 4);
    CreatList(head, 5);
    CreatList(head, 6);
    CreatList(head, 7);

    CreatCycle(head);
    cout << DetectCycle(head) << endl;
    DeleteCycle(head);
    cout << DetectCycle(head) << endl;
    display(head);

    return 0;
}