#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6 + 10;
int n;
long long m;
long long trees[N];

bool isWoodSuficient(long long h)
{
    long long wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (trees[i] > h)
        {
            wood += (trees[i] - h);
        }
    }
    return (wood >= m);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> trees[i];
    }
    long long lo = 0, hi = 1e9 + 10, mid;
    while (hi - lo > 1)
    {
        mid = (lo + hi) / 2;
        if (isWoodSuficient(mid))
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    if (isWoodSuficient(hi))
    {
        cout << hi << endl;
    }
    else
    {
        cout << lo << endl;
    }

    return 0;
}