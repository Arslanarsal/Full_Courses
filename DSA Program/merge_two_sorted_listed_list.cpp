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

node* merge(node* head1 , node* head2){
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }
    node* head4 = new node(-1);
    node* head3 = head4;
    while (head1!=NULL && head2!=NULL)
    {
        if (head1->data<head2->data)
        {
            head3->next = head1;
            head1 = head1->next;
        }
        else
        {
            head3->next = head2;
            head2 = head2->next;
        }
        head3=head3->next;
    }
    while (head1!=NULL)
    {
        head3->next=head1;
        head1= head1->next;
        head3 = head3->next;
    }
    while (head2!=NULL)
    {
        head3->next=head2;
        head2= head2->next;
        head3 = head3->next;
    }
    return head4->next;
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
    node *head1 = NULL;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cout << "Enter element: ";
        cin >> n;
        creatNode(head1, n);
    }
    cout<<"\nEnter elements for 2nd\n";
    node *head2 = NULL;
    for (int i = 0; i < 6; i++)
    {
        int n;
        cout << "Enter element: ";
        cin >> n;
        creatNode(head2, n);
    }
    display(head1);
    display(head2);
    head1 = merge(head1,head2);
    display(head1);

    return 0;
}
