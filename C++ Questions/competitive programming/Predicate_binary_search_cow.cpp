#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int C, n;
long long pos[N];

bool isCowPlaces(int d)
{
    int cow_ct = C;
    int last_pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (pos[i] - last_pos >= d || last_pos == -1)
        {
            cow_ct--;
            last_pos = pos[i];
        }
        if (cow_ct == 0)
        {
            break;
        }
    }
    return cow_ct == 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n >> C;
        for (int i = 0; i < n; i++)
        {
            cin >> pos[i];
        }
        sort(pos, pos + n);
        long long lo = 0, li = 10, mid;
        while (li - lo > 1)
        {
            mid = (lo + li) / 2;
            if (isCowPlaces(mid))
            {
                lo = mid;
            }
            else
            {
                li = mid - 1;
            }
        }
        if (isCowPlaces(li))
        {
            cout << li << endl;
        }
        else
        {
            cout << lo << endl;
        }
    }

    return 0;
}