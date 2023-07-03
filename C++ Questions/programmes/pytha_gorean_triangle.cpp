#include <iostream>
using namespace std;
int main()
{
    //  --> pythagoream triangle is =  a^2 = b^2 + c^2;
    int a, b, c;
    cout << "enter three number: ";
    cin >> a >> b >> c;
    int x = max(a, max(b, c));
    int h, r; //-->use this variable for store two maximum number
              // because we dont know who's two number is maximum;
    if (x == a)
    {
        h = b;
        r = c;
    }
    else if (x == b)
    {
        h = a;
        r = c;
    }
    else
    {
        h = a;
        r = b;
    }
    if (x * x == (h * h) + (r * r))
    {
        cout << "pythagorean theream";
    }
    else
    {
        cout << "not pythagorean theream";
    }

    return 0;
}