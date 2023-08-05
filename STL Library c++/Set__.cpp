#include <iostream>
#include <set>
using namespace std;
#include <unordered_set>

void print(multiset<int> &s)
{
    for (auto &i : s)
    {
        cout << i << " ";
    }
    cout << "\n";
}

int main()
{
    // set<int> s;
    // s.insert(3);//O(n);
    // s.insert(2);
    // s.insert(7);
    // s.insert(1);
    // s.insert(4);
    // // set<int>:: iterator it = s.find(1);
    // auto it = s.find(1);// That code are same
    // // cout<<(*it);
    // // s.erase(it);//We can give iterator of the key
    // s.erase(3);//We can give directly key //-->O(n);
    // print(s);

    // //Undered_set use hash table and time complixity is O(1);
    // unordered_set<int> s;
    // s.insert(3);//O(1);
    // s.insert(2);
    // s.insert(7);
    // s.insert(1);
    // s.insert(4);
    // // set<int>:: iterator it = s.find(1);
    // // auto it = s.find(1);// That code are same
    // // cout<<(*it);
    // // s.erase(it);//We can give iterator of the key
    // // s.erase(3);//We can give directly key //-->O(1);
    // print(s);

    // multiset use tree and time complixity is O(log(n));
    multiset<int> s; // In multi set key are store dublicate
    s.insert(3);     // O(1);
    s.insert(2);
    s.insert(7);
    s.insert(7);
    s.insert(1);
    s.insert(1);
    s.insert(4);
    // set<int>:: iterator it = s.find(1);
    auto it = s.find(1);// That code are same
    // cout<<(*it);
    s.erase(it);//We can give iterator of the key but erase onlt iterator value 1 not all 1 values
    s.erase(7);//We can give directly key //-->O(log(n)); but arase all 7 in set
    print(s);
    return 0;
}