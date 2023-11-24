#include <iostream>
using namespace std;

class queue
{
public:
    int front = -1, rara = -1;
    int size = 100;
    int arr[100];

    int isfull()
    {
        int c = ((rara + 1) % (size));
        if (c == front)
        {
            return 1;
        }
        return 0;
    }

    void enqueue(int val)
    {
        if (isfull())
        {
            cout << "Queue is overflow! You can't insert " << val << " in queue" << endl;
        }
        else if (front == -1)
        {
            front = 0;
            rara = 0;
            arr[rara] = val;
        }
        else
        {
            rara = (rara + 1) % (size);
            arr[rara] = val;
        }
    }

    int isempty()
    {
        if (front == -1)
        {
            return 1;
        }
        return 0;
    }

    void dequeue()
    {
        if (isempty())
        {
            cout << "Queue is underflow" << endl;
        }
        else if (front == rara)
        {
            rara = -1;
            front = -1;
        }
        else
        {
            front = (front + 1) % (size);
        }
    }

    int top()
    {
        if (isempty())
        {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if (isempty())
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        int start = front;
        while (start <= rara)
        {
            cout << arr[start] << " ";
            start++;
        }
        cout << endl;
    }

    int find(int n)
    {
        if (isempty())
        {
            cout << "No element in the queue\n";
            return -1;
        }
        int temp = front;
        while (temp != rara)
        {
            if (arr[temp] == n)
            {
                return n;
            }
            temp = (temp + 1) % (size);
        }
        if (arr[temp] == n)
        {
            return n;
        }
        cout<<"This element in not queue\n";
        return -1;
    }
};

int main()
{
    queue qu;
    qu.enqueue(2);
    qu.enqueue(21);
    // qu.dequeue();
    // qu.enqueue(23);
    // qu.dequeue();
    cout << qu.top() << " ";
    qu.display();

    return 0;
}