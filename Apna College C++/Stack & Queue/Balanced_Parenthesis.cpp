#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack<char> st;
    unordered_map<char, char> closingBrackets = {{')', '('}, {']', '['}, {'}', '{'}};

    for (char c : s)
    {
        if (closingBrackets.count(c))
        {
            if (st.empty() || st.top() != closingBrackets[c])
            {
                return false;
            }
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    return st.empty();
}

int main()
{
    string s = "[{)}]";
    cout << isBalanced(s) << endl;
    return 0;
}