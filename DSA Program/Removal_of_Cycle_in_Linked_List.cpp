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

void makeNode(node *&ptr, int val, int num)
{
    node *newPtr = new node(val);
    node *startNode = NULL;
    if (ptr == NULL)
    {
        ptr = newPtr;
    }

    node *tempPtr = ptr;
    int counter = 0 , c1 = 0;
    while (tempPtr->next != NULL)
    {
        if (counter == num)
        {
            startNode = tempPtr;
            c1 = 1;
        }
        counter++;
        tempPtr = tempPtr->next;
    }
    tempPtr->next = newPtr;
    if (c1)
    {
        tempPtr->next->next = startNode;
    }
}

void removesycle(node *head)
{
    node *fast = head;
    node *slow = head;
    do
    {
        fast = fast->next->next;
        slow = slow->next;
    } while (fast != slow);
    fast = head;
    while (fast->next != slow->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

void display(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
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
        makeNode(head, n, 3);
    }
    // removesycle(head);
    display(head);

    return 0;
}