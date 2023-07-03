#include <iostream>
using namespace std;
int sum(int x, int y)
{
    return x + y;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}
int sum(int x, int y, int z, int f)
{
    return x + y + z + y;
}
int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;
    cout << sum(a, b) << endl;
    cout << sum(a, b, 4) << endl;
    cout << sum(a, b, 4) << endl;
    return 0;
}
