#include <bits/stdc++.h>
using namespace std;

class StockSpanner
{
public:
    stack<pair<int, int>> stp;
    StockSpanner()
    {
    }

    int next(int price)
    {
        if (stp.empty() || stp.top().first > price)
        {
            stp.push({price, 1});
            return 1;
        }
        else
        {
            int days = 1;
            while (!stp.empty() && price >= stp.top().first)
            {
                days += stp.top().second;
                stp.pop();
            }
            stp.push({price, days});
            return days;
        }
    }
};

int main()
{
    StockSpanner stockSpanner;
    cout << stockSpanner.next(100) << endl; // return 1
    cout << stockSpanner.next(80) << endl;  // return 1
    cout << stockSpanner.next(60) << endl;  // return 1
    cout << stockSpanner.next(70) << endl;  // return 2
    cout << stockSpanner.next(60) << endl;  // return 1
    cout << stockSpanner.next(75) << endl;  // return 4
    cout << stockSpanner.next(85) << endl;  // return 6
    // cout << stockSpanner.next(80) << endl;  // return 6

    return 0;
}