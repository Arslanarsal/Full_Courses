#include <bits/stdc++.h>
using namespace std;

int n = 10;
class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = 0;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack is Overflow\n";
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }

    void pop()
    {
        if (top == 0)
        {
            cout << "No element in Stack pop\n";
        }
        else
        {
            top--;
        }
    }

    int Top()
    {
        if (top == 0)
        {
            cout << "No element in Stack top\n";
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool empty()
    {
        if (top == 0)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(5);
    cout << st.Top() << endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.Top();
    cout<<endl<<st.empty();

    return 0;
}