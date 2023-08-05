#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << "\n";

    vector<int>::iterator it = v.begin();
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << "\n";

    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    vector<pair<int, int>>::iterator it2;
    // for (it2 = v_p.begin(); it2 != v_p.end(); it2++) // ++it2 is move to the next iterator
    // // but it2+1 is moved to the next location
    // {
    //     cout << (*it2).first << " " << (*it2).second << "\n";
    // }
    // for (it2 = v_p.begin(); it2 != v_p.end(); it2++)
    // {
    //     cout << it2->first << " " << it2->second << "\n";
    // }

    // -> another mathod --> Range base loop
    // for (int val : v) // vector v values one by one copy in val;
    //     cout << val << " ";
    // cout<<"\n";
    // for (int &val : v) // using reference;
    //     cout << val << " ";
    // cout<<"\n";

    // for (pair<int, int> val : v_p)
    //     cout << val.first << " " << val.second << "\n";

    for (auto val : v_p)
        cout << val.first << " " << val.second << "\n";
    return 0;
}