#include <bits/stdc++.h>
using namespace std;

// class Queue
// {
//     stack<int> st1;
//     stack<int> st2;

// public:
//     void push(int x)
//     {
//         st1.push(x);
//     }
//     void pop()
//     {
//         if (st1.empty() && st2.empty())
//         {
//             cout << "Queue is Underflow\n";
//             return;
//         }
//         if (st2.empty())
//         {
//             while (!st1.empty())
//             {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }
//         st2.pop();
//     }

//     int peek()
//     {
//         if (st1.empty() && st2.empty())
//         {
//             cout << "  Queue is Underflow\n";
//             return -1;
//         }
//         if (st2.empty())
//         {
//             while (!st1.empty())
//             {
//                 st2.push(st1.top());
//                 st1.pop();
//             }
//         }

//         return st2.top();
//     }
//     bool empty()
//     {
//         if (st1.empty() && st2.empty())
//         {
//             return 1;
//         }
//         return 0;
//     }
// };


//Here using 1 queue and pop using recursion
class Queue
{
    stack<int> st1;

public:
    void push(int x)
    {
        st1.push(x);
    }

    void pop()
    {
        // if (st1.empty())
        // {
        //     cout << "Queue is Underflow\n";
        //     return;
        // }

        int x = st1.top();
        st1.pop();
        if (st1.empty())
        {
            return;
        }
        pop();
        st1.push(x);
        return;
    }

    int peek()
    {
        if (st1.empty())
        {
            cout << "Queue is Underflow\n";
            return -1;
        }

        int x = st1.top();
        st1.pop();
        if (st1.empty())
        {
            st1.push(x);
            return x;
        }
        int temp = peek();
        st1.push(x);
        return temp;
    }
    bool empty()
    {
        if (st1.empty())
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
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.push(41);
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty() << endl;
    return 0;
}