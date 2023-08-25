#include <bits/stdc++.h>
using namespace std;

bool BalParen(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(')');
        }
        else if (s[i] == '{')
        {
            st.push('}');
        }
        else if (s[i] == '[')
        {
            st.push(']');
        }

        else if (s[i] == ')')
        {
            if (st.top() != s[i])
            {
                return false;
            }
            st.pop();
        }
        else if (s[i] == '}')
        {
            if (st.top() != s[i])
            {
                return false;
            }
            st.pop();
        }
        else if (s[i] == ']')
        {
            if (st.top() != s[i])
            {
                return false;
            }
            st.pop();
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}

int main()
{
    string s = "[{)}]";
    cout << BalParen(s) << endl;
    return 0;
}