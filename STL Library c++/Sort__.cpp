#include <bits/stdc++.h>
using namespace std;
void print(vector<pair<int, int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    cout << "\n";
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        if (a.first < b.first)
            return true;
        return false;
    }
    if( a.second > b.second) return true ;
    else return false;

}
int main()
{
    //--> inarray
    // int arr[] = {4, 7, 3, 2, 58, 0, 15};
    // sort(arr, arr + 7);//This will sort start to end
    // sort(arr+3, arr + 7);//This will sort from 3rd indux to end
    // print(arr, 7);

    //--> Vector
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);

    // auto it  = v.begin();
    // sort(v.begin() , v.end());

    vector<pair<int, int>> v1;
    v1 = {{3, 6}, {2, 6}, {4, 7}, {4, 8}, {9, 16}, {12, 6}};
    sort(v1.begin(), v1.end(), cmp);
    print(v1);
    return 0;
}

