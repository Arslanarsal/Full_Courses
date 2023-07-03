#include <bits/stdc++.h>
using namespace std;
// --->>>  A^A == 0;    ------->>>>>> A^0 == A
// Swap using  XOR  Operato
void swap(int &a, int &b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}
int main()
{
    // int a = 3, b = 5;
    // swap(a, b);
    // cout << "A is  " << a << "\nB is  " << b;

    int n , ans = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans ^= arr[i];
    }
    
    cout << ans;

    return 0;
}