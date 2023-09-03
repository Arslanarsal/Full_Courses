#include <bits/stdc++.h>
using namespace std;
void printMap(multimap<int, string> &m)
{
    for (auto &it : m)
        cout << it.first << " " << it.second << "\n";
}
// map use red black tree but unOrdered map use hash table
int main()
{
    // In map value are store in sorted order
    // map<int, string> m; // In map first is key and second is value;
    // map<string, string> m2; // In map first is key and second is value;
    // m2["abc"] = "def";//insertion time O(n);
    // m[2] = "def";//insertion time O(log n);
    // m[1] = "abc";
    // m[4] = "jkl";
    // m[3] = "ghi";
    // m[2] = "xyz"; // In map key are unique here key 2 value are changed
    // map<int, string>::iterator it = m.begin();
    // // for (it = m.begin(); it != m.end(); it++)
    // // {
    // //     cout << it->first << " " << it->second<< "\n";
    // // }
    // auto itt = m.find(2);
    // m.erase(2);
    // printMap(m);

    // cout<<(*itt).first<<" "<<(*itt).second<<"\n";

    // Underorderd map --> in this map the key are stored are unordered
    //  unordered_map<int , string > un;
    //  // unordered_map<pair<int , int> , string > un;This is wrong because unirdered map use hash table we only use compare values

    // un[3] = "afgfgc";// O(1);
    // un[2] = "fgdfgc";
    // un[1] = "abc";
    // un[4] = "fvfc";
    // un.erase(4);
    // printMap(un);

    // Multimap
    multimap<int, string> mm; // In multimap we can add same keys
    mm = {{1, "ljvhc"}, {1, "ljvhc"}};
    printMap(mm);

    return 0;
}