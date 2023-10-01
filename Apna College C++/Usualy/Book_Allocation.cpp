#include <bits/stdc++.h>
using namespace std;

int allocate(vector<int> &nums, int mid)
{
    int count = 1;
    int pages = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (pages + nums[i] <= mid)
        {
            pages += nums[i];
        }
        else
        {
            count+=1;
            pages = nums[i];
        }
    }
    return count;
}

int bookAllocation(vector<int> &v, int std)
{
    int low = 0, high = 0;
    int ans = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        high += v[i];
        low = max(low, v[i]);
    }

    while (low <= high)
    {

        int mid = (high + low) / 2;
        int num = allocate(v, mid);
        cout << num << " ";
       if (num > std)
        {
            low = mid + 1;
        }
        else
        {

            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    vector<int> v = {25, 46, 28, 49, 24};
    cout << endl
         << bookAllocation(v, 4);

    return 0;
}