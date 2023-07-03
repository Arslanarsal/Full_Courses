#include <bits/stdc++.h>
using namespace std;

long long binarymultiply(long long a, long long b);
int M = 1e9 + 7;
// We don't use pow inbuilt fun because pow use double
// double can't store accorate value
//------------------>>>>>>>>>>>>>>>   Recursive Code
int binExpRecu(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    int res = (binExpRecu(a, b / 2));
    if (b & 1)
    {
        return (a * ((res * 1LL * res) % M)) % M;
    }
    else
    {
        return ((res * 1LL * res) % M);
    }
}

//------------------>>>>>>>>>>>>>>>   Itarative Approach
int binExpItra(int a, int b)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}
//-------->>>>>>>>    if modula value ( M  =  1e18 )
int binExpItraA(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = binarymultiply(ans, a);
        }
        a = binarymultiply(a, a);
        b >>= 1;
    }
    return ans;
}

long long binarymultiply(long long a, long long b)
{
    int ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

//------------------>>>>>>>>>>>>>>>    if power value ( a^b^c )
int binExp(int a, int b, int M)
{
    int ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * 1LL * a) % M;
        }
        a = (a * 1LL * a) % M;
        b >>= 1;
    }
    return ans;
}

int main()
{
    // cout << binExpRecu(2, 5) << endl;
    // cout << binExpItra(2, 5) << endl;
    // 50 ^ 64 ^ 32 % M
    cout << binExp(50, binExp(64, 32, M - 1), M) << endl;
    return 0;
}