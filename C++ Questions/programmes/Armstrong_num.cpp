#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int a = n;
    int sum = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum += pow(last_digit, 3);

        n = n / 10;
    }
    if (sum == a)
    {
        cout << "Armstrong number ";
    }
    else
        cout << "not Armstrong number ";

    return 0;
}
