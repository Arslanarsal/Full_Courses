#include <iostream>
using namespace std;

class queue
{
public:
    int f, r;
    int size;
    int *arr;
};

int isfull(queue *ptr)
{
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(queue *ptr, int val)
{
    if (isfull(ptr))
    {
        cout << "Queue is overflow! You can't insert " << val << " in queue" << endl;
    }
    else
    {
        ptr->r++;
        ptr->arr[ptr->r] = val;
    }
}
void fEnQueue(queue *ptr, int val)
{
    if (ptr->f == -1)
    {
        cout << "You can't add " << val << " int front of queue " << endl;
    }
    else
    {
        ptr->arr[ptr->f] = val;
        ptr->f--;
    }
}

int isempty(queue *ptr)
{
    if (ptr->r == ptr->f)
    {
        return 1;
    }
    return 0;
}

int dequeue(queue *ptr)
{
    if (isempty(ptr))
    {
        cout << "Queue is underflow" << endl;
        return -1;
    }
    else
    {
        ptr->f++;
        int val = ptr->arr[ptr->f];
        return val;
    }
}

int DDeQueue(queue *ptr)
{
    if (ptr->r == -1)
    {
        cout << "Queue id underflow " << endl;
    }
    else
    {
        int val = ptr->arr[ptr->r];
        ptr->r--;
        return val;
    }
}

int main()
{
    queue *q = new queue();
    q->size = 4;
    q->f = -1;
    q->r = -1;
    q->arr = new int(q->size);

    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);

    cout << dequeue(q) << endl; // -> 1
    fEnQueue(q, 5);
    cout << DDeQueue(q) << endl; // -> 4
    cout << dequeue(q) << endl;  // -> 5
    cout << dequeue(q) << endl;  // -> 2
    cout << dequeue(q) << endl;  // -> 3
    cout << dequeue(q) << endl;  // -> under flow

    return 0;
}