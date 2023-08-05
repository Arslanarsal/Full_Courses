#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void display(node *head)
{
    while (head->next != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *c1 = new node();
    node *c2 = new node();
    node *c3 = new node();
    node *c4 = new node();

    c1->data = 1;
    c1->next = c2;

    c2->data = 2;
    c2->next = c3;

    c3->data = 3;
    c3->next = c4;

    c4->data = 4;
    c4->next = NULL;

    display(c1);

    return 0;
}