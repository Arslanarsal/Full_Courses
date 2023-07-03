#include <iostream>
using namespace std;
int bin(int n)
{
    int ans = 0;
    int base = 1;
    while (n)
    {
        int y = n % 10;
        ans = ans + (base * y);
        base = base * 2;
        n = n / 10;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    cout << bin(n);

    return 0;
}
