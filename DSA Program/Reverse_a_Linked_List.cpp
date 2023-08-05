#include <iostream>
using namespace std;

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
//  --> creats nodes
void creatNode(node *&ptr, int val)
{
    node *newptr = new node(val);
    if (ptr == NULL)
    {
        ptr = newptr;
        return;
    }

    node *temptr = ptr;
    while (temptr->next != NULL)
    {
        temptr = temptr->next;
    }
    temptr->next = newptr;
}
//  -->reverse linked list
node *reverse(node *head)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;

        currentptr->next = prevptr;

        prevptr = currentptr;

        currentptr = nextptr;
    }
    return prevptr;
}

//  -->reverse linked list using recursion
node *reverseRes(node *head)
{
    if (head->next == NULL || head == NULL)
    {
        return head;
    }

    node *newHead = reverseRes(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

// Resverse K nodes of a linked list
node *kReverse(node *head, int k)
{
    node *prev = NULL;
    node *current = head;
    node *nextPtr;
    int counter = 0;
    while (current != NULL && counter < k)
    {
        nextPtr = current->next;
        current->next = prev;

        prev = current;
        current = nextPtr;
        counter++;
    }

    if (nextPtr != NULL)
    {
        head->next = kReverse(nextPtr, k);
    }
    return prev;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cout << "Enter element: ";
        cin >> n;
        creatNode(head, n);
    }
    display(head);

    // head = reverse(head);
    // display(head);

    // head = reverseRes(head);
    // display(head);

    head = kReverse(head, 3);
    display(head);

    return 0;
}
