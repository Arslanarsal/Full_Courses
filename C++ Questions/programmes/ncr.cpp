#include <iostream>
#include <math.h>
using namespace std;
int feb(int num)
{
    if (num < 2)
    {
        return 1;
    }

    return num * feb(num - 1);
}
int main()
{
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    int ans = feb(a) / (feb(a - b) * feb(b));
    cout << ans;

    return 0;
}