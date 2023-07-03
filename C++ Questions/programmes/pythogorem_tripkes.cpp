#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == (b * b) + (c * c))
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int a, b, c;
    cout << "enter a , b , c";
    cin >> a >> b >> c;
    if (check(a, b, c))
    {
        cout << "pythgoram  ";
    }
    else
        cout << "not pythgoram  ";

    return 0;
}