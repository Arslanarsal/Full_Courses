#include <bits/stdc++.h>
using namespace std;
vector<int> findMedian(vector<int> &arr, int n)
{
    priority_queue<int, vector<int>> pqmax;
    priority_queue<int, vector<int>, greater<int>> pqmin;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (pqmax.size() == pqmin.size())
        {
            if (!pqmin.size())
            {
                pqmin.push(arr[i]);
            }
            else if (arr[i] > pqmin.top())
            {
                pqmin.push(arr[i]);
            }
            else
            {
                pqmax.push(arr[i]);
            }
        }
        else
        {
            if (pqmin.size() < pqmax.size())
            {
                if (arr[i] >= pqmax.top())
                {
                    pqmin.push(arr[i]);
                }
                else
                {
                    int temp = pqmax.top();
                    pqmax.pop();
                    pqmax.push(arr[i]);
                    pqmin.push(temp);
                }
            }
            else
            {
                if (arr[i] <= pqmin.top())
                {
                    pqmax.push(arr[i]);
                }
                else
                {
                    int temp = pqmin.top();
                    pqmin.pop();
                    pqmin.push(arr[i]);
                    pqmax.push(temp);
                }
            }
        }

        if (pqmax.size() == pqmin.size())
        {
            ans.push_back((pqmax.top() + pqmin.top()) / 2);
        }
        else if (pqmax.size() > pqmin.size())
        {
            ans.push_back(pqmax.top());
        }
        else
        {
            ans.push_back(pqmin.top());
        }
    }
    return ans;
}

vector<int> findMediann(vector<int> &arr, int n)
{
    vector<int> store;
    vector<int> medians;
    for (int i = 0; i < n; i++)
    {
        store.push_back(arr[i]);
        sort(store.begin(), store.end());
        int median;
        if ((i + 1) % 2 == 0)
        {
            median = (store[i / 2] + store[(i + 1) / 2]) / 2;
        }
        else
        {
            median = store[i / 2];
        }
        medians.push_back(median);
    }
    return medians;
}
int main()
{

    vector<int> v = {1, 2, 3};
    v = findMediann(v, v.size());
    for (auto &&i : v)
    {
        cout << i << " ";
    }
}