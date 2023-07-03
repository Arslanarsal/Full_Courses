#include <iostream>
#include <math.h>
using namespace std;
int feb(int num)
{
    int sum = 1;
    for (int i = num; i > 1; i--)
    {
        sum = sum * (i);
    }
    return sum;
}
// int feb(int num)
// {
//     if (num < 2)
//     {
//         return 1;
//     }

//     return num * feb(num - 1);
// }
int main()
{
    int a;
    cout << "Enter the numbers: ";
    cin >> a;
    cout << feb(a);

    return 0;
}