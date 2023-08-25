#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int x)
    {
        val = x;
        next = NULL;
    }
};

class Queue
{

    node *front;
    node *back;

public:
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);

        if (front == NULL)
        {
            front = n;
            back = n;
        }
        else
        {
            back->next = n;
             back = n;
        }
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow\n";
            return;
        }
        node *del = front;
        front = front->next;
        delete (del);
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue Underflow\n";
            return -1;
        }

        return front->val;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{

    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    cout << q.empty() << endl;

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout << q.peek() << endl;
    return 0;
}