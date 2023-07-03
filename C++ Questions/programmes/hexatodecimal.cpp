#include <iostream>
#include <string>
using namespace std;
int oct(string n)
{
    int ans = 0;
    int base = 1;
    int a = n.size();
    for (int i = a - 1; i >= 0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + base * (n[i] - '0');
        }
        else
        {
            ans = ans + base * (n[i] - 'A' + 10);
        }
        base = base * 16;
    }

    return ans;
}
int main()
{
    string n;
    cout << "enter number: ";
    cin >> n;
    cout << oct(n);

    return 0;
}
