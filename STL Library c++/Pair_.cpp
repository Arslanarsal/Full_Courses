#include <bits/stdc++.h>
using namespace std;

//Pair is relation between two data types or same data type we can say that pair is just like
// a combination of two variable

int main()
{
    // ->Pair
    pair<int, string> p;
    pair<int, int> p3 = {3, 5};
    p = make_pair(2, "arslan");
    // cin >> p.first;
    // cin >> p.second;
    p = {10, "umer"};
    pair<int, string> &p1 = p;
    p1.first = 5;
    // int a[] = {1, 2, 3};
    // int b[] = {4, 5, 6};
    pair<int, int> pp[3];
    pp[0] = {1, 4};
    pp[1] = {2, 5};
    pp[2] = {3, 6};

    swap(pp[0], pp[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << pp[i].first << " " << pp[i].second << "\n";
    }

    int a, b;
    tie(a, b) = p3;
    cout << a << " " << b << "\n";

    cout << p.first << " " << p.second << "\n";
    cout << p1.first << " " << p1.second << "\n";

    return 0;
}