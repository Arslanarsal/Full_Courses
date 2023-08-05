#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> n)
{
    stack<int> st;
    vector<int> sng(n.size());
    for (int i = 0; i < n.size(); i++)
    {
        while (!st.empty() && n[i] > n[st.top()])
        {
            sng[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        sng[st.top()] = -1;
        st.pop();
    }
    return sng;
}
void print(vector<int> s)
{
    for (auto a : s)
    {
        cout << a << " ";
    }
    cout << "\n";
}
int main()
{
    vector<int> n;
    n.push_back(2);
    n.push_back(4);
    n.push_back(3);
    n.push_back(23);
    n.push_back(2);
    n.push_back(7);
    n.push_back(8);
    print(n);
    vector<int> n2 = NGE(n);
    for (int i = 0; i < n.size(); i++)
    {
        cout << (n2[i] == -1 ? -1 : n[n2[i]]) << " ";
    }

    return 0;
}
