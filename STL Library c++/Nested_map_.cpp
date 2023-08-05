#include <bits/stdc++.h>
using namespace std;
void printMap(map<pair<string, string>, vector<int>> &m)
{
    int i = 0;
    for (auto &it : m)
    {
        cout << it.first.first << " " << it.first.second << " " << it.second[i] << "\n";
        i++;
    }
    cout << endl;
}
// map use red black tree but unirdered map use hash table
int main()
{
    map<pair<string, string>, vector<int>> m;
    m[{"arslan", "arsal"}].push_back(100);
    m[{"arslan", "arsal"}].push_back(10);
    m[{"arslan", "arsal"}].push_back(0);
    m[{"arslan", "arsal"}].push_back(1040);
    printMap(m);
    return 0;
}
