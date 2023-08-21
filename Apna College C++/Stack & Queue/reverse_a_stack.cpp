#include <bits/stdc++.h>
using namespace std;

void InsertAtBottom(stack<int> &s, int ele)
{
    if (s.empty())
    {
        s.push(ele);
        return;
    }

    int element = s.top();
    s.pop();
    InsertAtBottom(s, ele);
    s.push(element);
}

void reverse(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    
    int ele = s.top();
    s.pop();
    reverse(s);

    InsertAtBottom(s, ele);
}

void display(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
        cout<<"  ";
    }cout << endl;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    display(s);
    reverse(s);
    display(s);

    return 0;
}