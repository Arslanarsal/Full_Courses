#include <iostream>
using namespace std;

class stack
{
    int front = -1;
    int size = 100;
    int arr[100];

public:
    int isfull()
    {
        if (front == size - 1)
        {
            return 1;
        }
        return 0;
    }

    void push(int val)
    {
        if (isfull())
        {
            cout << "Stack is overflow! You can't insert " << val << " in stack" << endl;
        }
        else
        {
            front++;
            arr[front] = val;
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

    void pop()
    {
        if (isempty())
        {
            cout << "Queue is underflow" << endl;
            return;
        }
        front--;
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
            cout << "Queue is Empty " << endl;
            return;
        }
        int start = 0;
        while (start <= front)
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
            cout << "lun te char\n";
            return -1;
        }
        int temp = 0;
        while (temp <= front)
        {
            if (arr[temp] = n)
            {
                return -n;
            }
            temp++;
        }
        cout << "This element in not stack\n";
        return -1;
    }
};
int main()
{
    stack qu;

    // qu.push(2);
    // qu.push(3);
    qu.push(4);
    cout<<qu.isempty()<<endl;
    // qu.pop();
    cout << qu.top() << endl;

    qu.display();

    return 0;
}