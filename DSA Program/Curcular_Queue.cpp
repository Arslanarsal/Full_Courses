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
    int c = ((ptr->r + 1) % (ptr->size));
    if (c == ptr->f )
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
        ptr->r = (ptr->r + 1) % (ptr->size);
        ptr->arr[ptr->r] = val;
    }
}

int isempty(queue *ptr)
{
    if (ptr->f == ptr->r)
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
        ptr->f = (ptr->f + 1) % (ptr->size);
        int val = ptr->arr[ptr->f];
        return val;
    }
}

int main()
{
    queue *q = new queue();
    q->size = 4;
    q->f = 0;
    q->r = 0;
    q->arr = new int(q->size);

    enqueue(q, 1);
    enqueue(q, 2); 
    enqueue(q, 3);
    enqueue(q, 3);
  
    cout << dequeue(q) << endl;
    cout << dequeue(q) << endl;
    cout << dequeue(q) << endl;
 
    enqueue(q, 4);
    enqueue(q, 5); 
    enqueue(q, 6);
    cout << dequeue(q) << endl;
    cout << dequeue(q) << endl;
    cout << dequeue(q) << endl;
    return 0;
}