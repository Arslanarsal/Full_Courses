#include <iostream>
using namespace std;

int factorial(int x)
{
    if (x <= 0)
    {
        return 1;
    }
    return x * factorial(x - 1);
}

// working  factorial(4)
// 4*factorial(3)
// 4*3*factorial(2)
// 4*3*2factorial(1)
// 4*3*2*1 = 24

int fab(int x)
{
    if (x < 2)
    {
        return 1;
    }

    return fab(x - 2) + fab(x - 1);
}


int main()
{

    int a, t1 = 0;
    cout << "Enter a number : ";
    cin >> a;

    cout << factorial(a);
    // cout<<fab(a);

    // for (int t2 = 1; t2 < a;)
    // {
    //     t2 = t1+t2;
    //     t1 = t2-t1;
    //     cout<<t2<<" ";
    // }

    return 0;
}