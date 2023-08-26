#include <bits/stdc++.h>
using namespace std;

//----------->>>>>Here Push operation is costly

// class Stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     Stack()
//     {
//         N = 0;
//     }

//     void push(int val)
//     {
//         q2.push(val);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         // queue<int> temp = q1;
//         // q1 = q2;
//         // q2 = temp;

//         q1 = q2;
//         while (!q2.empty())
//         {
//             q2.pop();
//         }
//     }
//     void pop()
//     {
//         if (q1.empty())
//         {
//             cout << "Stack is Underflow\n";
//             return;
//         }
//         N--;
//         q1.pop();
//     }

//     int peak()
//     {
//         if (q1.empty())
//         {
//             cout << "Stack is Underflow\n";
//             return -1;
//         }
//         return q1.front();
//     }

//     bool empty()
//     {
//         if (q1.empty())
//         {
//             return 1;
//         }
//         else
//         {
//             0;
//         }
//     }

//     int size()
//     {
//         return N;
//     }
// };

// //----------->>>>>Here Pop operation is costly
// class Stack
// {
//     queue<int> q1;
//     queue<int> q2;
//     int N;

// public:
//     Stack()
//     {
//         N = 0;
//     }

//     void push(int val)
//     {
//         N++;
//         q1.push(val);
//     }
//     void pop()
//     {
//         if (q1.empty() && q2.empty())
//         {
//             cout << "Stack is Underflow\n";
//             return;
//         }

//         while (q1.size() != 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }

//         N--;
//         q1.pop();

//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//     }

//     int peak()
//     {
//         if (q1.empty() && q2.empty())
//         {
//             cout << "Stack is Underflow\n";
//             return -1;
//         }

//         while (q1.size() != 1)
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         int tem = q1.front();

//         q2.push(q1.front());
//         q1.pop();

//         queue<int> temp = q1;
//         q1 = q2;
//         q2 = temp;
//         return tem;
//     }

//     bool empty()
//     {
//         if (q1.empty())
//         {

//             return 1;
//         }
//         return 0;
//     }

//     int size()
//     {
//         return N;
//     }
// };

//----------->>>>>Here most optimize soluton
class Stack
{
    queue<int> q1;

public:
    Stack()
    {
    }

    void push(int val)
    {
        q1.push(val);
        for (int i = 0; i < q1.size() - 1; i++)
        {
            q1.push(q1.front());
            q1.pop();
        }
    }
    void pop()
    {
        q1.pop();
    }

    int peak()
    {
        return q1.front();
    }

    bool empty()
    {

        return q1.empty();
    }

    int size()
    {
        return q1.size() ;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.size() << endl;
    cout << s.peak() << endl;
    s.pop();
    cout << s.peak() << endl;
    cout << s.empty() << endl;
    s.push(5);
    cout << s.peak() << endl;
    return 0;
}