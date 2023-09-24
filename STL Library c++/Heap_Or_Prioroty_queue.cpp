#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>> pq; // Max heap  --->>Max heap return greater Element And he use binary tree
    // pq.push(1);
    // pq.push(3);
    // pq.push(2);

    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;

    priority_queue<int, vector<int> , greater<int>> pqm; // Min heap  --->>Min heap return lower Element And he also use binary tree

    pqm.push(1);
    pqm.push(3);
    pqm.push(2);

    cout << pqm.top() << endl;
    pqm.pop();
    cout << pqm.top() << endl;
    return 0;
}