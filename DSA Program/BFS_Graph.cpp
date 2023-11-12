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

int main()
{
    queue *q = new queue();
    q->size = 400;
    q->f = -1;
    q->r = -1;
    q->arr = new int(q->size);

    // bfs Exploring

    int node;
    int i = 0;
    int vistedNode[] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0, 0},
        {1, 1, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0},
    };
    cout << i << " ";
    vistedNode[i] = 1;
    enqueue(q, i);
    while (!isempty(q))
    {
        node = dequeue(q);
        for (int j = 0; j < 7; j++)
        {
            if (a[node][j] == 1 && vistedNode[j] == 0)
            {
                cout << j << " ";
                enqueue(q, j);
                vistedNode[j] = 1;
            }
        }
    }

    return 0;
}