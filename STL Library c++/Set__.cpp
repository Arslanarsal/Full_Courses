#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

void print(multiset<int> &s) {
    for (auto &i : s) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    // 'set' stores values in sorted order (logarithmic time complexity)
    set<int> s;
    
    // Inserting elements into the set
    s.insert(3); // O(log n)
    s.insert(2);
    s.insert(7);
    s.insert(1);
    s.insert(4);
    
    // Finding and erasing elements from the set
    auto it = s.find(1); // Finding an element in the set (logarithmic time)
    s.erase(it); // Erasing an element using iterator (logarithmic time)
    s.erase(7); // Erasing an element by value (logarithmic time)

    // Printing the set
    cout << "Set:\n";
    for (auto &i : s) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 'unordered_set' uses hash table (constant time complexity on average)
    unordered_set<int> us;

    // Inserting elements into the unordered_set
    us.insert(3); // O(1) on average
    us.insert(2);
    us.insert(7);
    us.insert(1);
    us.insert(4);
    
    // Finding and erasing elements from the unordered_set
    auto it_us = us.find(1); // Finding an element in the unordered_set (average constant time)
    us.erase(it_us); // Erasing an element using iterator (average constant time)
    us.erase(7); // Erasing an element by value (average constant time)

    // Printing the unordered_set
    cout << "Unordered Set:\n";
    for (auto &i : us) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 'multiset' uses a tree structure and allows duplicate keys (logarithmic time complexity)
    multiset<int> ms;

    // Inserting elements into the multiset
    ms.insert(3); // O(log n)
    ms.insert(2);
    ms.insert(7);
    ms.insert(7); // Allows duplicates
    ms.insert(1);
    ms.insert(1); // Allows duplicates
    ms.insert(4);
    
    // Finding and erasing elements from the multiset
    auto it_ms = ms.find(1); // Finding an element in the multiset (logarithmic time)
    ms.erase(it_ms); // Erasing an element using iterator (logarithmic time)
    ms.erase(7); // Erasing all occurrences of an element by value (logarithmic time)

    // Printing the multiset
    cout << "Multiset:\n";
    print(ms);

    return 0;
}
