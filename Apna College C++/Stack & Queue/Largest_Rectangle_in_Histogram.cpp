#include <bits/stdc++.h>
using namespace std;
//I use two condition in while loop because first it no working but second is working 
// because In first condition  first we check value if stack is empty it's give runtime error 
// but In second condition  first we check empty stack and then check value 


//  If we check top element of empty stack it's give runtime error
int largestRectangleArea(vector<int> &heights)
{
    int maximum = 0;
    stack<int> st;
    int n = heights.size();
    for (int i = 0; i <= n; i++)
    {
        // while ((heights[i] <= heights[st.top()] || i == n) && !st.empty()) //  Wrong
        while (!st.empty() && (i == n || heights[i] <= heights[st.top()]))    //  Correct
        {
            int val = heights[st.top()];
            st.pop();
            int width;
            if (st.empty())
            {
                width = i;
            }
            else
            {
                width = i - st.top() - 1;
            }

            maximum = max(maximum, width * val);
        }
        st.push(i);
    }

    return maximum;
}

int main()
{
    vector<int> v = {2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(v);

    return 0;
}