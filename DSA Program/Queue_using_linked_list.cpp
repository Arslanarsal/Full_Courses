#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
int isempty(node*);
int isfull(node *n)
{
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(node *&f, node *&r, int val)
{
    node *n = new node();
    if (isfull(n))
    {
        cout << "list is overflow! you can't add number in it" << endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (isempty(f))
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int isempty(node *f)
{
    if (f == NULL)
    {
        return 1;
    }
    return 0;
}
int dequeue(node *&f)
{
    if (isempty(f))
    {
        cout << "list is underflow! " ;
        return -1;
    }
    else
    {
        int val = f->data;
        node *del = f;
        f = f->next;
        delete del;
        return val;
    }
}

int main()
{
    node *f = NULL;
    node *r = NULL;
    cout<<dequeue(f)<<endl;
    enqueue(f , r , 1);
    enqueue(f , r , 2);
    enqueue(f , r , 3);
    enqueue(f , r , 4);

    cout<<dequeue(f)<<endl;
    cout<<dequeue(f)<<endl;
    cout<<dequeue(f)<<endl;
    cout<<dequeue(f)<<endl;

    return 0;
}