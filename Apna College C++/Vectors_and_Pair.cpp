#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {9, 5, 7, 1, 4, 7, 9, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<pair<int, int>> v;
    for (int i = 0; i < size; i++)
    {
        v.push_back(make_pair(arr[i], i));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    
    return 0;
}