#include <bits/stdc++.h>
using namespace std;

bool ifpossible(vector<int> v, int mid, int k)
{
    int ele = 1;
    int pos = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] - pos >= mid)
        {
            pos = v[i];
            ele++;
            if (ele == k)
            {
                return true;
            }
        }
    }
    return false;
}

int largminDist(vector<int> v, int k)
{
    int ans = -1;

    int left = v[0], right = v[v.size() - 1];
    sort(v.begin(), v.end());
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (ifpossible(v, mid, k))
        {
            ans = max(mid, ans);
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1 , 2, 5 , 7, 11 ,12};
    cout<<largminDist(v , 3);

    return 0;
}