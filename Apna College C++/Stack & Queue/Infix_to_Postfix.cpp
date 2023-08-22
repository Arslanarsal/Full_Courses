#include <bits/stdc++.h>
using namespace std;

int pref(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    return 0;
}

string InficToPostfix(string s)
{
    stack<char> st;
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            ans += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }

        else
        {
            while (!st.empty() && pref(st.top()) > pref(s[i]))
            {
                ans += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

int main()
{

    string s = "(a-b/c)*(a/k-l)";
    cout << s << endl;
    s = InficToPostfix(s);
    cout << s << endl;

    return 0;
}