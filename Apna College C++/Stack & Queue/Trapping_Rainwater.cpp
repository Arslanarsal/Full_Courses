#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int l = 0;
    int r = height.size() - 1;
    int maxleft = 0;
    int maxright = 0;
    int ans = 0;
    while (l < r)
    {
        if (height[l] <= height[r])
        {
            if (height[l] >= maxleft)
            {
                maxleft = height[l];
            }
            else
            {
                ans += (maxleft - height[l]);
            }
            l++;
        }
        else
        {
            if (height[r] >= maxright)
            {
                maxright = height[r];
            }
            else
            {
                ans += (maxright - height[r]);
            }
            r--;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {4,2,0,3,2,5};
    cout << trap(v);

    return 0;
}