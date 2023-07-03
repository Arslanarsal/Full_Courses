#include <iostream>
using namespace std;

template <class t>
void swapp(t &a, t &b)
{
    t temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 4;
    int b = 9;
    swapp(a, b);
    cout << a << endl
         << b;

    return 0;
}
