#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }

    gcd(b, a % b);
}
int main()
{
    // int a = 12, b = 18, c = 30;
    // cout << gcd(a, b);
    // cout << __gcd(a, b) << endl;           // Two number gcd
    // cout << __gcd(__gcd(a, b), c) << endl; // Three number gcd
    // cout << (a * b) / gcd(a, b); // --->>Lcm

    //---->>>>>   minimum friction
    // cout << (a / gcd(a, b))<<endl;
    // cout<<"-"<<endl;
    // cout << (b / gcd(a, b))<<endl;

    float a = 10;
    for (int i = 0; i <30 ; i++)
    {
        a += ((0.1) * a);
    }
    cout << a;

    return 0;
}