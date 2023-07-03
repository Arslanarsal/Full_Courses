#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long result = 0;
        long long powe = 1;
        for (int i = s.size(); i >= 0; i--)
        {
           result = result + ((s[i] - '0') * powe);
        //    powe ;
        }
    }

    return 0;
}