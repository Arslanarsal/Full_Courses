#include <iostream>
#include <stack>
using namespace std;

// class queue
// {
// public:
//     stack<int> s1;
//     stack<int> s2;

//     void pish(int val)
//     {
//         s1.push(val);
//     }
//     int pop()
//     {
//         if (s1.empty() && s2.empty())
//         {
//             cout << "Queue is underflow" << endl;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int val = s2.top();
//         s2.pop();
//         return val;
//     }
// };
class queue
{
public:
    stack<int> s1;

    void pish(int val)
    {
        s1.push(val);
    }
    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is underflow" << endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();
        // cout << "X value " << x << endl;
        if (s1.empty())
        {
            return x;
        }
        int item = pop();
        // cout << "Item " << item << endl;
        // cout << "After X value " << x << endl;
        s1.push(x);
        return item;
    }
};

int main()
{
    queue c1;
    c1.pish(1);
    c1.pish(2);
    c1.pish(3);
    c1.pish(4);

    cout << c1.pop() << endl;
    // cout << c1.pop() << endl;
    // cout << c1.pop() << endl;
    // cout << c1.pop() << endl;

    return 0;
}