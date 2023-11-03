#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// vector is a array but in vector the memory allocation is Dynamic memory allocation
// In vector if we add value the vactor size is automatically axtend

// void printvector(vector<pair<int, char>> &v)
void printvector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i].first << " " << v[i].second << "\n";
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // --> vector
    vector<int> v;
    v.push_back(2); // push back add value at the end and his time complixity is O(1);
    v.push_back(3); // Here 3 add after 2 --> (2, 3);
    v.push_back(4); //--> 2, 3, 4;
    v.push_back(5);
    // cout << v.front(); // This will print first value here 2 is first value;
    // cout << v.front(); // This will print first value here 2 is first value;
    v.pop_back(); // pop function will pop the last allment
    printvector(v);

    // --> Vector pair
    // vector<pair<int, char>> vp;
    // vp = {{4, 'a'}, {5, 'b'}, {6, 'c'}, {7, 'd'}};
    // int n;
    // cout << "Enter value: ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     char y;
    //     cin >> x >> y;
    //     // vp.push_back(make_pair(x, y)); // Here both are correct
    //     vp.push_back({x, y});
    // }
    // swap(vp[0] , vp[2]);//Swap fun swap vector value but here a single vector stor a pair that why full pair will swap
    // printvector(vp);

    //--> vector array
    // vector<int> v[3]; // Here v[0] is a vector v[1] is a vector and v[2] is a vector
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         v[i].push_back(i);
    //     }
    // }
    // cout << v[0][0] << "\n"; // Vector array is just like 2D array here v[0] is 0 vector and v[0][0] is
    // 0 vector ka 0th element
    // cout << v[1][0] << "\n"; // Vector array is just like 2D array here v[1] is 1 vector and v[1][0] is
    // 1 vector ka 0th element
    // for (int i = 0; i < 3; i++)
    // {
    //     printvector(v[i]);
    // }

    //->int vector array the is fixed but colum is dynamic just like the above example
    // v[3] is fixed but in every vector we can store maximum values here v[i][j] here i is fixed but j is not we can extend j

    //-->vector in a vector
    //-->If we want dynamic row and colum we make vector in a vector

    // vector<vector<int>> v;
    // for (int i = 0; i < 3; i++)
    // {
    //     // vector<int> temp;
    //     v.push_back(vector<int>());
    //     for (int j = 0; j < 3; j++)
    //     {
    //         v[i].push_back(j);
    //         // temp.push_back(j);
    //     }
    //     // v.push_back(temp);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printvector(v[i]);
    // }
    return 0;
}