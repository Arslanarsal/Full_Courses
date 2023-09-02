#include <bits/stdc++.h>
using namespace std;

vector<string> removeInvalidParentheses(string s)
{
    int n = s.length();
    stack<char> st;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || (s[i] >= 'a' && s[i] <= 'z'))
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && st.top() == '(')
            {
                ans += "()";
                st.pop();
            }
            else
            {
                string temp = "";
                while (!st.empty())
                {
                    if (st.top() != '(')
                    {
                        temp = st.top() + temp;
                        st.pop();
                    }
                    else
                    {
                        ans += '(' + temp + ')';
                        st.pop();
                        break;
                    }
                }
            }
        }
    }
    vector<string> v;
    v.push_back(ans);
    return v;
}

int main()
{
    string s = ")(";
    vector<string> s1;
    s1 = (removeInvalidParentheses(s));
    for (auto &i : s1)
    {
        cout << i << "   ";
    }

    return 0;
}